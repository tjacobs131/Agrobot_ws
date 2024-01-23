import os
from ultralytics import YOLO
import numpy as np
import cv2
import math
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from time import sleep
from agrobot_msgs.msg import CropTypeLocation

class VisionProcessingNode(Node):

    cap = None
    model = None
    classNames = ["Beetroot", "Carrot", "Lettuce", "Radish"]

     # Define color range
    lower = np.array([145, 175, 170], dtype=np.uint16)
    upper = np.array([185, 215, 280], dtype=np.uint16)
    minimum_marker_spot_frames = 3
    marker_spot_frames = 0

    saved_boxes = []    

    def __init__(self):

        # Set up node
        super().__init__('vision_processing_node')
        cv2.setLogLevel(0)
        self.__node = rclpy.create_node('vision_processing_node')

        # Set up publishers
        self.crop_publisher = self.create_publisher(CropTypeLocation, 'detected_crop', 10)
        self.marker_publisher = self.create_publisher(String, 'detected_marker', 1)

        # Set up subscribers
        self.create_subscription(CropTypeLocation, 'harvested_crop', self.__ignore_box, 1)
        
        self.logger = self.get_logger() # Set up logger
        self.logger.info("Start vision processing")

        # Set up loop timer
        self.process_frame_timer = self.create_timer(0.1, self.process_frame)
        self.process_frame_timer.cancel()

        self.detect_object() # Start pathfinding script

        # Function to check if a box overlaps with any saved box
    def is_overlap(self, new_box):
        x1_new, y1_new, x2_new, y2_new = new_box
        for box in self.saved_boxes:
            x1, y1, x2, y2 = box
            if not (x2_new < x1 or x2 < x1_new or y2_new < y1 or y2 < y1_new):
                return True
        return False
    
    def detect_marker(self, img):
        # Convert to HSV
        hsv = cv2.cvtColor(img, cv2.COLOR_RGB2HSV)

        # Create mask
        mask = cv2.inRange(hsv, self.lower, self.upper)

        # Find contours
        contours, hierarchy = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)

        self.logger.info("Number of contours: " + str(len(contours)))
        
        cv2.drawContours(hsv, contours, -1, (0, 255, 0), 3)

        mask_size = cv2.countNonZero(mask)

        if(mask_size > 2000):
            self.logger.info("Marker detected")
            self.marker_spot_frames += 1

            if(self.marker_spot_frames >= self.minimum_marker_spot_frames):
                self.publish_marker_info()
                self.marker_spot_frames = 0
        else:
            self.marker_spot_frames = 0

    def detect_object(self):
        # start webcam
        self.cap = cv2.VideoCapture("/dev/v4l/by-id/usb-webcamvendor_webcamproduct_00000000-video-index0")

        if not self.cap.isOpened():
            self.logger.warn("Cannot open camera")

        self.cap.set(3, 1920)
        self.cap.set(4, 1080)

        script_path = os.path.dirname(os.path.realpath(__file__))

        # Weights are located in /resource/weights/best.pt
        weights_path = os.path.abspath(os.path.join(script_path, '..', '..', '..', '..', 'share', 'agrobot_pkg', 'resource', 'weights', 'Duarte.pt'))

        # model
        self.model = YOLO(weights_path)

        # last detected object details
        last_object_details = None

        # Start loop
        self.process_frame_timer.reset()

    def process_frame(self):
        try: 
            success, img = self.cap.read()

            if(not success):
                return

            self.detect_marker(img)

            results = self.model(img, stream=True)

            #sleep(0.1)

            for r in results:
                boxes = r.boxes

                for box in boxes:
                    confidence = math.ceil((box.conf[0] * 100)) / 100

                    if confidence <= 0.60:
                        continue

                    x1, y1, x2, y2 = map(int, box.xyxy[0])
                    #print("Bounding Box --->", (x1, y1, x2, y2))

                    if not self.is_overlap((x1, y1, x2, y2)):
                        last_object_details = {
                            "bounding_box": (x1, y1, x2, y2),
                            "confidence": confidence,
                            "class_name": self.classNames[int(box.cls[0])]
                        }

                        cv2.rectangle(img, (x1, y1), (x2, y2), (255, 0, 255), 3)
                        self.publish_crop_info(crop_type=last_object_details['class_name'], crop_x=x1, crop_y=y1, crop_x2=x2, crop_y2=y2)

                    cls = int(box.cls[0])
                    org = [x1, y1]
                    font = cv2.FONT_HERSHEY_SIMPLEX
                    color = (255, 0, 0)
                    cv2.putText(img, self.classNames[cls] + " " + str(confidence), org, font, 1, color, 2)

            cv2.imshow('Webcam', img)

            if cv2.waitKey(1) == ord('q'):
                return

        except KeyboardInterrupt:
            self.cap.release()
            cv2.destroyAllWindows() 

    def publish_crop_info(self, crop_type, crop_x, crop_y, crop_x2, crop_y2):
        # Create message
        msg = CropTypeLocation()
        msg.crop_type = crop_type
        msg.crop_x = crop_x
        msg.crop_y = crop_y
        msg.crop_x2 = crop_x2
        msg.crop_y2 = crop_y2

        self.crop_publisher.publish(msg)

    def publish_marker_info(self):
        # Create message
        self.logger.info("--- Publishing detected marker ---")
        msg = String()
        msg.data = "Marker detected"

        self.marker_publisher.publish(msg)

    def __ignore_box(self, object):
        self.logger.info("Ignoring box")
        self.logger.info("Crop x: " + str(object.crop_x))
        self.logger.info("Crop type: " + str(object.crop_type))
        self.saved_boxes.append((object.x1, object.y1, object.x2, object.y2))

def main(args=None):
    rclpy.init(args=args)

    visionProcessing = VisionProcessingNode()

    rclpy.spin(visionProcessing)

    visionProcessing.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
