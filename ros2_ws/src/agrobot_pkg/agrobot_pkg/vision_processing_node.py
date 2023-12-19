from ultralytics import YOLO
import os
import cv2
import math
import rclpy
from rclpy.node import Node
from std_msgs.msg import String, Int64MultiArray
from time import sleep
from agrobot_msgs.msg import VisionPublishClosestCrop
from agrobot_msgs.srv import UpdateCropLocation

class VisionProcessingNode(Node):

    closest_crop_x = 0.0
    closest_crop_y = 0.0
    
    def __init__(self):
        # Set up node
        super().__init__('vision_processing_node')

        self.__node = rclpy.create_node('vision_processing_node')

        # Set up publishers
        self.publisher = self.create_publisher(VisionPublishClosestCrop, 'detected_objects', 10)

        # Set up service
        self.__node.create_service(UpdateCropLocation, 'update_crop_location', self.update_crop_location_callback)
        
        self.logger = self.get_logger() # Set up logger
        self.logger.info("Start vision processing")

        self.detect_object() # Start pathfinding script

    def detect_object(self):
        # start webcam
        cap = cv2.VideoCapture(0)
        cap.set(3, 640)
        cap.set(4, 480)

        script_path = os.path.dirname(os.path.realpath(__file__))

        # Weights are located in /resource/weights/best.pt
        weights_path = os.path.abspath(os.path.join(script_path, '..', '..', '..', '..', 'share', 'agrobot_pkg', 'resource', 'weights', 'best.pt'))

        # model
        model = YOLO(weights_path)

        # object classes
        classNames = ["carrot", "beetroot", "lettuce", "radish"]

        # last detected object details
        last_object_details = None

        def get_last_object_details():
            return last_object_details

        while True:
            success, img = cap.read()
            
            if(not success):
                continue

            results = model(img, stream=True)

            # coordinates
            for r in results:
                boxes = r.boxes

                for box in boxes:
                    if math.ceil((box.conf[0] * 100)) / 100 <= 0.85:
                        print("Confidence --->", math.ceil((box.conf[0] * 100)) / 100)
                        continue

                    # bounding box
                    x1, y1, x2, y2 = box.xyxy[0]
                    x1, y1, x2, y2 = int(x1), int(y1), int(x2), int(y2)  # convert to int values
                    #print("Bounding Box --->", (x1, y1, x2, y2))

                    # update last detected object details
                    last_object_details = {
                        "bounding_box": (x1, y1, x2, y2),
                        "confidence": math.ceil((box.conf[0] * 100)) / 100,
                        "class_name": classNames[int(box.cls[0])]
                    }

                    # put box in cam
                    cv2.rectangle(img, (x1, y1), (x2, y2), (255, 0, 255), 3)

                    # confidence
                    confidence = math.ceil((box.conf[0] * 100)) / 100

                    #
                    # TODO:
                    # If confidence > x, publish crop info
                    #
                    self.publish_crop_info(crop_type=last_object_details.get('class_name'), crop_x=x1, crop_y=y1)
                    self.closest_crop_x = x1
                    self.closest_crop_y = y1

                    # class name
                    cls = int(box.cls[0])
                    #print("Class name -->", classNames[cls])

                    # object details
                    org = [x1, y1]
                    font = cv2.FONT_HERSHEY_SIMPLEX
                    fontScale = 1
                    color = (255, 0, 0)
                    thickness = 2

                    cv2.putText(img, classNames[cls], org, font, fontScale, color, thickness)

            cv2.imshow('Webcam', img)
            if cv2.waitKey(1) == ord('q'):
                break

        cap.release()
        cv2.destroyAllWindows()


    def publish_crop_info(self, crop_type, crop_x, crop_y):
        # Create message
        msg = VisionPublishClosestCrop()
        msg.data = [crop_type, crop_x, crop_y]

        try:
            # Publish the message
            self.logger.info('Publishing: crop_type={}, crop_x={}, crop_y={}'.format(
                msg.data[0], msg.data[1], msg.data[2]))
            self.publisher.publish(msg)

            # Sleep to allow time for the message to be published
            #sleep(1)

        except KeyboardInterrupt:
            pass

    def update_crop_location_callback(self, request, response):
        response.crop_x = self.closest_crop_x
        response.crop_y = self.closest_crop_y

        return response

def main(args=None):
    rclpy.init(args=args)

    visionProcessing = VisionProcessingNode()

    rclpy.spin(visionProcessing)

    visionProcessing.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
