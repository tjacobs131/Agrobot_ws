from timeit import default_timer
import rclpy
from odrive.enums import *
from rclpy.node import Node
from agrobot_msgs import ArmPosition
import time

class ArmControllerNode(Node):
    crop_x = 0.0
    crop_y = 0.0
    crop_type = ""

    def __init__(self):
        # Set up node
        super().__init__('arm_controller_node')

        self.__node = rclpy.create_node('arm_controller_node')

        self.logger = self.get_logger() # Set up logger

        # Set up subscribers
        self.create_service(ArmPosition, 'arm_target_position', self.__move_arm, 1)
        
        self.start()

    def start(self):
        pass

    def __move_arm(self, request, response):
        self.crop_x = request.crop_x
        self.crop_y = request.crop_y
        self.crop_type = request.crop_type

        # Move arm

        
        response.success = True
        return response

def main(args=None):
    rclpy.init(args=args)

    arm_controller = ArmControllerNode()

    rclpy.spin(arm_controller)

    arm_controller.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
