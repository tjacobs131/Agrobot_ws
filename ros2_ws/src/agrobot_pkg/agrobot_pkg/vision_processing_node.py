from ultralytics import YOLO
import cv2
import math
import rclpy
from std_msgs.msg import String, Int64MultiArray

def calculate_center(x1, y1, x2, y2):
    """
    Calculate the center of a bounding box.
    """
    centerX = (x1 + x2) // 2
    centerY = (y1 + y2) // 2
    return centerX, centerY

def get_closest_object(current_object, new_object, target=(1, 1)):
    """
    Compare the current and new object, and return the one closest to the target coordinates.
    """
    if current_object is None:
        return new_object
    
    current_distance = math.sqrt((current_object["center"][0] - target[0])**2 + (current_object["center"][1] - target[1])**2)
    new_distance = math.sqrt((new_object["center"][0] - target[0])**2 + (new_object["center"][1] - target[1])**2)
    
    return new_object if new_distance < current_distance else current_object

def initialize_ros_node():
    """
    Initialize ROS node and create a publisher.
    """
    rclpy.init()
    node = rclpy.create_node('detected_objects')
    publisher = node.create_publisher(Int64MultiArray, 'detected_objects', 10)
    return node, publisher

def publish_crop_info(node, publisher, crop_info):
    """
    Publish crop information using ROS.
    """
    msg = Int64MultiArray()
    #msg.data = [crop_info["class_name"], crop_info["center"][0], crop_info["center"][1]]
    msg.data = [1, crop_info["center"][0], crop_info["center"][1]]

    node.get_logger().info(f'Publishing: crop_type={msg.data[0]}, crop_x={msg.data[1]}, crop_y={msg.data[2]}')
    publisher.publish(msg)

def detect_object():
    """
    Detect objects using a YOLO model and a webcam.
    """
    cap = cv2.VideoCapture(0)
    cap.set(3, 640)
    cap.set(4, 480)

    classNames = ["carrot", "beetroot", "lettuce", "radish"]
    model_path = "/home/duarte/Agrobot_ws/ros2_ws/src/agrobot_pkg/weights/best.pt"

    model = YOLO(model_path)
    closest_object = None
    node, publisher = initialize_ros_node()

    try:
        while True:
            success, img = cap.read()
            results = model(img, stream=True)

            for r in results:
                for box in r.boxes:
                    confidence = math.ceil((box.conf[0] * 100)) / 100
                    if confidence <= 0.85:
                        continue

                    x1, y1, x2, y2 = map(int, box.xyxy[0])
                    centerX, centerY = calculate_center(x1, y1, x2, y2)
                    new_object = {"class_name": classNames[int(box.cls[0])], "center": (centerX, centerY)}
                    closest_object = get_closest_object(closest_object, new_object)

                    cv2.rectangle(img, (x1, y1), (x2, y2), (255, 0, 255), 3)
                    cv2.putText(img, classNames[int(box.cls[0])], (x1, y1), cv2.FONT_HERSHEY_SIMPLEX, 1, (255, 0, 0), 2)

                    if closest_object:
                        publish_crop_info(node, publisher, closest_object)

            cv2.imshow('Webcam', img)
            if cv2.waitKey(1) == ord('q'):
                break

    except KeyboardInterrupt:
        pass
    finally:
        cap.release()
        cv2.destroyAllWindows()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    detect_object()
