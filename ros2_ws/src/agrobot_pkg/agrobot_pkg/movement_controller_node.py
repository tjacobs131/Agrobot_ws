import glob
import rclpy
import serial
import serial.tools.list_ports
from rclpy.node import Node
from geometry_msgs.msg import Twist
from timeit import default_timer
from std_msgs.msg import String
from agrobot_msgs.srv import UpdateCropLocation
from agrobot_msgs.msg import VisionPublishClosestCrop


class MovementControllerNode(Node):

    lock_detected_crop = False # Locks detected crop data so that the position is not updated unexpectedly
    detected_crop = None # Holds object which is currently being collected
    detected_marker = False # Holds whether a marker is currently detected

    calibration_time = 10 # Time to wait before starting (seconds)
    
    movement_speed = 4.0
    adjustment_movement_speed = 2.0
    braking_force = -2.0

    target_crop_y = 100 # Position at which the robot should stop (expected crop location)
    adjustment_count_target = 3 # Adjustment iterations to perform
    adjustment_count = 0 # Current adjustment iteration

    serial_com = None

    def __init__(self):

        # Set up node
        super().__init__('movement_controller_node')

        # Set up publishers
        self.cmd_vel_pub = self.create_publisher(Twist, "/cmd_vel", 1) # Sends vel commands to the odrive controller

        # Set up subscribers
        self.create_subscription(VisionPublishClosestCrop, 'detected_crop', self.__update_crop, 1)
        self.create_subscription(String, 'detected_marker', self.__update_marker, 1)
        
        # Set up logger
        self.logger = self.get_logger()
        self.logger.info("Start movement controller")

        # Set up communication port to Arduino
        ports = glob.glob('/dev/tty[A-Za-z]*')
        for port in ports:
            if "ACM" in port:
                self.serial_com = serial.Serial(port, 9600, write_timeout=0.5)  
                self.logger.info("Connected to arduino")
                break

        # Set up loop timers
        # These are necessary to replace while loops
        # Because while loops cause the node to not update subscriber callbacks
        self.harvest_timer = self.create_timer(0.5, self.harvest_loop)
        self.harvest_timer.cancel()
        self.adjustment_timer = self.create_timer(1, self.adjust_position)
        self.adjustment_timer.cancel()
        self.delivery_timer = self.create_timer(0.5, self.deliver_loop)
        self.delivery_timer.cancel()

        self.start() # Start movement script

    def __update_crop(self, object):

        if(not self.lock_detected_crop):
            if object.crop_type == "":
                self.detected_crop = None
            else:
                self.detected_crop = object

    def __update_marker(self, marker):
        self.detected_marker = True

    def start(self):

        # Wait for direct drive motors to calibrate
        # TODO: Replace this with some system to start this node when odrive calibration is finished
        self.wait(self.calibration_time)

        self.logger.info("Start harvesting")
        self.start_harvesting()

        self.start_delivering()

        #
        # TODO: Write code to make robot harvest the planter boxes in column two
        #
        # Position self to drive over column two
        # self.start_harvesting()
        # Position self to deliver plants
        # self.start_delivering()

    def start_harvesting(self):

        # Start moving forward    
        self.execute_movement_command(self.movement_speed)
        self.detected_crop = None # Remove last detected crop
        self.harvest_timer.reset()

    def harvest_loop(self):

        # If there is no object detected, keep driving
        if self.detected_crop != None:
            self.harvest_timer.cancel() # Crop found, stop looking

            self.logger.info("Detected crop, stopping")
            # Apply braking force
            self.execute_movement_command(self.braking_force)
            self.wait(2)
            
            # Stop
            self.execute_movement_command(0)

            # Start adjustment loop
            self.adjustment_count = 0
            self.adjustment_timer.reset()

    def adjust_position(self):

        self.adjustment_timer.cancel()

        self.logger.info("Adjusting position")
        crop_y = self.detected_crop.crop_y
        target_diff = abs(crop_y - self.target_crop_y)
        
        # Calculate time to move
        target_time = (abs(target_diff)) / 40 # Convert crop distance to time to move

        self.logger.info("Target position difference: " + str(target_diff))
        self.logger.info("Target time: " + str(target_time))
        self.logger.info("Iteration: " + str(self.adjustment_count))

        # Determine direction to move
        if(crop_y < self.target_crop_y):
            self.execute_movement_command(self.adjustment_movement_speed) # Adjust forwards
        else:
            self.execute_movement_command(-self.adjustment_movement_speed) # Adjust backwards

        # Wait for calculated time
        self.wait(target_time)
        
        # Stop
        self.execute_movement_command(0)

        self.adjustment_count += 1
        if self.adjustment_count < self.adjustment_count_target: # If not done adjusting

            # Keep adjusting
            self.adjustment_movement_speed / 2
            self.adjustment_timer.reset()
        else:
            self.lock_detected_crop = True

            # Done adjusting
            self.adjustment_movement_speed = 2.0

            #
            # TODO: Collect crop
            #

            # while not result:
            #     continue
            #
            # self.start_harvesting()

    def start_delivering(self):
        self.delivery_timer.reset()
            
    def deliver_loop(self):
        if self.detected_marker:
            self.harvest_timer.cancel()
            self.delivery_timer.cancel()

            self.logger.info("Detected marker, stopping")

            # Apply braking force
            self.execute_movement_command(self.braking_force)
            self.wait(1)
            
            # Stop
            self.execute_movement_command(0)

            self.logger.info("Delivering")
            self.execute_movement_command(self.adjustment_movement_speed)
            self.wait(2)

            self.execute_movement_command(0)

            self.logger.info("Opening boxes")
            self.execute_collection_bucket_command("!1O,4O\n")

            self.logger.info("Closing boxes")
            self.execute_collection_bucket_command("!1C,4C\n")

    def execute_movement_command(self, speed):
        self.move_cmd = Twist()
        self.move_cmd.linear.x = speed
        self.cmd_vel_pub.publish(self.move_cmd)

    def execute_collection_bucket_command(self, command):
        self.logger.info("Executing arduino command: " + command)
        instruction_count = len(command.split(','))
        
        if(self.serial_com == None):
            self.logger.error("Arduino not connected")
            return
        
        self.serial_com.read_all()
        self.serial_com.write(command.encode('utf-8'))

        # Wait for !OK responses
        output = b""
        count = 0
        while (count < instruction_count):
            output += self.serial_com.readline()
            if b"!OK" in output:
                count += 1
                output = b""
        
        self.logger.info("Arduino command executed")
    
    def wait(self, seconds):
        start_time = default_timer()
        while(True):
            if(default_timer() - start_time > seconds):
                break

def main(args=None):
    rclpy.init(args=args)

    movementController = MovementControllerNode()

    rclpy.spin(movementController)

    movementController.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()