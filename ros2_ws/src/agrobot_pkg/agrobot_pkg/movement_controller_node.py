import string
import rclpy
import threading
from rclpy.node import Node
from geometry_msgs.msg import Twist
from timeit import default_timer
from std_msgs.msg import String
from agrobot_msgs.srv import UpdateCropLocation
from agrobot_msgs.msg import VisionPublishClosestCrop
from rclpy.callback_groups import ReentrantCallbackGroup


class MovementControllerNode(Node):

    detected_object = None # Holds object which is currently being collected
    adjustment_count = 0 # Current adjustment iteration

    calibration_time = 15 # Time to wait before starting (seconds)
    
    movement_speed = 4.0
    adjustment_movement_speed = 2.0
    braking_force = -2.0

    target_crop_y = 100 # Position at which the robot should stop (expected crop location)
    adjustment_count_target = 3 # Adjustment iterations to perform

    def __init__(self):

        # Set up node
        super().__init__('movement_controller_node')

        # Set up publishers
        self.cmd_vel_pub = self.create_publisher(Twist, "/cmd_vel", 1) # Sends vel commands to the odrive controller

        # Set up subscribers
        self.create_subscription(VisionPublishClosestCrop, 'detected_objects', self.__update_object, 1)
        
        self.logger = self.get_logger() # Set up logger
        self.logger.info("Start movement controller")

        # Set up loop timers
        self.harvest_timer = self.create_timer(1, self.harvest_loop) # Harvesting loop
        self.harvest_timer.cancel()
        self.adjustment_timer = self.create_timer(1, self.adjust_position)
        self.adjustment_timer.cancel()

        self.start() # Start pathfinding script

    def __update_object(self, object):

        if object.crop_type == "":
            self.detected_object = None
        else:
            self.detected_object = object

    def start(self):

        # Robot starts in front of planter box

        # Wait for simulation to finish setting up
        start_time = default_timer()
        while(True):
            if(default_timer() - start_time > self.calibration_time):
                break

        self.logger.info("Start harvesting")
        self.start_harvesting()

        self.deliverCrops()

        # Position self to drive over row two

        # self.harvestRowOfPlanters()   

        # Drive backwards until planter boxes cleared

        # Position self to deliver plants

        #   `                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   self.deliverCrops()

        # Drive forward until boxes cleared

    def start_harvesting(self):

        # Start moving forward    
        self.move_cmd = Twist()
        self.move_cmd.linear.x = 4.0
        self.cmd_vel_pub.publish(self.move_cmd)

        self.harvest_timer.reset()

    def harvest_loop(self):

        # If there is no object detected, keep driving
        if self.detected_object != None:
            self.harvest_timer.cancel() # Crop found, stop looking

            self.logger.info("Detected crop, stopping")

            # Apply braking force
            self.move_cmd = Twist()
            self.move_cmd.linear.x = self.braking_force
            self.cmd_vel_pub.publish(self.move_cmd)

            start_time = default_timer()
            while(True):
                if(default_timer() - start_time > 2):
                    break
            
            # Stop
            self.move_cmd = Twist()
            self.cmd_vel_pub.publish(self.move_cmd)

            self.logger.info("Adjusting position")

            # Adjustment loop
            self.adjustment_count = 0
            self.adjustment_timer.reset()

    def adjust_position(self):

        self.adjustment_timer.cancel()
        self.logger.info("Adjusting position")

        crop_y = self.detected_object.crop_y
        target_diff = abs(crop_y - self.target_crop_y)
        
        # Calculate time to move
        target_time = (abs(target_diff)) / 40 # Convert crop distance to time to move

        self.logger.info("Target position: " + str(crop_y))
        self.logger.info("Crop pos diff: " + str(target_diff))
        self.logger.info("Target time: " + str(target_time))
        self.logger.info("Iteration: " + str(self.adjustment_count))

        # Determine direction to move
        self.move_cmd = Twist()
        if(crop_y < self.target_crop_y):
            self.move_cmd.linear.x = self.adjustment_movement_speed # Adjust forwards
        else:
            self.move_cmd.linear.x = -self.adjustment_movement_speed # Adjust backwards

        self.cmd_vel_pub.publish(self.move_cmd)

        start_time = default_timer()
        while True:
            if default_timer() - start_time > target_time:
                break
        
        # Stop
        self.move_cmd = Twist()
        self.cmd_vel_pub.publish(self.move_cmd)
        
        self.adjustment_count += 1
        if self.adjustment_count < self.adjustment_count_target:

            # Keep adjusting
            self.adjustment_movement_speed / 2
            self.adjustment_timer.reset()

        else:

            self.adjustment_movement_speed = 2.0

            # Done adjusting

            #
            # TODO: Collect crop
            #

            self.start_harvesting()
            

    def deliverCrops(self):
        # while (not detected unseen bin marker):

            # Move backwards
            
        # Open appropriate sorting box

        # Wait

        # Add marker to seen markers

        # if(seen marker count == 4):

            # Drive forward until delivery boxes cleared

            # empty seen marker list

            return


def main(args=None):
    rclpy.init(args=args)

    movementController = MovementControllerNode()

    rclpy.spin(movementController)

    movementController.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()