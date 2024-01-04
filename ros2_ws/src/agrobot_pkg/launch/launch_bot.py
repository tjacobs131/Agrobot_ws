import os
import pathlib
import launch
from launch_ros.actions import Node
from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory
from webots_ros2_driver.webots_launcher import WebotsLauncher
from webots_ros2_driver.webots_controller import WebotsController
from webots_ros2_driver.utils import controller_url_prefix


def generate_launch_description():
    package_dir = get_package_share_directory('agrobot_pkg')

    odrive_controller = Node(
        package="agrobot_pkg",
        name="odrive_controller_node",
        executable="odrive_controller_node"
    )

    movement_controller = Node(
        package="agrobot_pkg",
        name="movement_controller_node",
        executable="movement_controller_node"
    )

    return LaunchDescription([
        odrive_controller,
        movement_controller,
    ])