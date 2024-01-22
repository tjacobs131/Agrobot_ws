from timeit import default_timer
import rclpy
import odrive
from odrive.enums import *
from rclpy.node import Node
from geometry_msgs.msg import Twist
import time

class ODriveControllerNode(Node):
    def __init__(self):
        # Set up node
        super().__init__('odrive_controller_node')

        self.__node = rclpy.create_node('odrive_controller_node')

        self.logger = self.get_logger() # Set up logger
        
        # Set up subscribers
        self.command_subsciption = self.create_subscription(Twist, "/cmd_vel", self.__process_velocity_command, 10)

        try:
            # Set up odrive
            self.odrv = odrive.find_any(timeout=1)
                
            start_time = default_timer()
            while(True):
                if(default_timer() - start_time > 1 or self.odrv != None):
                    break

            self.logger.info("Found odrive, bus voltage: " + str(self.odrv.vbus_voltage))
        except:
            self.odrv = None

        self.start()

    def start(self):
        if(self.odrv != None):
            self.odrv.axis0.requested_state = AXIS_STATE_IDLE
            self.odrv.axis1.requested_state = AXIS_STATE_IDLE

            # Start calibration
            self.odrv.axis0.requested_state = AXIS_STATE_FULL_CALIBRATION_SEQUENCE
            self.odrv.axis1.requested_state = AXIS_STATE_FULL_CALIBRATION_SEQUENCE

            start_time = default_timer()
            while(default_timer() - start_time < 2):
                pass

            while self.odrv.axis0.current_state != AXIS_STATE_IDLE: # Wait for calibration to finish
                time.sleep(0.1)

            self.odrv.axis0.requested_state = AXIS_STATE_CLOSED_LOOP_CONTROL # Enable closed loop control
            self.odrv.axis0.controller.config.control_mode = CONTROL_MODE_VELOCITY_CONTROL

            while(self.odrv.axis1.current_state != AXIS_STATE_IDLE): # Wait for calibration to finish
                time.sleep(0.1)

            self.odrv.axis1.requested_state = AXIS_STATE_CLOSED_LOOP_CONTROL # Enable closed loop control
            self.odrv.axis1.controller.config.control_mode = CONTROL_MODE_VELOCITY_CONTROL

            #self.adjustment_timer = self.create_timer(0.1, self.__adjust_odrive_velocity)

            self.logger.info("Finished ODrive calibration")

    def __process_velocity_command(self, cmd):
        self.logger.info("ODrive received command: " + str(cmd.linear.x))

        if(cmd.angular.x == -99.0 
           and cmd.angular.y == -99.0 
           and cmd.angular.z == -99.0):
            
            # EMERGENCY STOP COMMAND
            self.logger.warning("!!! ODRIVE RECEIVED STOP COMMAND, STOPPING! !!!")

            # Stop odrive
            self.odrv.axis0.controller.input_vel = 0
            self.odrv.axis1.controller.input_vel = 0

            # Wait
            start_time = default_timer()
            while(default_timer() - start_time < 1):
                pass

            self.odrv.axis0.requested_state = AXIS_STATE_IDLE
            self.odrv.axis1.requested_state = AXIS_STATE_IDLE

            # Exit node
            raise SystemExit

        if(self.odrv != None):
            velocity = cmd.linear.x

            self.odrv.axis0.controller.input_vel = velocity # - 1
            self.odrv.axis1.controller.input_vel = velocity

    def __adjust_odrive_velocity(self):
        if(self.odrv != None):
            axis0_pos = self.odrv.axis0.encoder.pos_estimate
            axis1_pos = self.odrv.axis1.encoder.pos_estimate

            # Get difference between axis positions
            diff = axis0_pos - axis1_pos
            if(diff > 0.2):
                self.odrv.axis0.controller.input_vel -= 0.1
                self.odrv.axis1.controller.input_vel += 0.1
            elif(diff < -0.2):
                self.odrv.axis0.controller.input_vel += 0.1
                self.odrv.axis1.controller.input_vel -= 0.1


def main(args=None):
    rclpy.init(args=args)

    odrive_controller = ODriveControllerNode()

    rclpy.spin(odrive_controller)

    odrive_controller.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
