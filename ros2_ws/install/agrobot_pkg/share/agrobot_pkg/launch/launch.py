import os
import launch
from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory
from webots_ros2_driver.webots_launcher import WebotsLauncher
from webots_ros2_driver.webots_controller import WebotsController
from launch_ros.actions import Node


def generate_launch_description():
    package_dir = get_package_share_directory('agrobot_pkg')
    robot_description_path = os.path.join(package_dir, 'resource', 'agrobot.urdf')

    webots = WebotsLauncher(
        world=os.path.join(package_dir, 'worlds', 'my_world.wbt')
    )

    my_robot_driver = WebotsController(
        robot_name='agrobot',
        parameters=[
            {'robot_description': robot_description_path},
        ]
    )

    return LaunchDescription([
        webots,
        my_robot_driver,
        launch.actions.RegisterEventHandler(
            event_handler=launch.event_handlers.OnProcessExit(
                target_action=webots,
                on_exit=[launch.actions.EmitEvent(event=launch.events.Shutdown())],
            )
        ),
        Node(
            package='agrobot_pkg',
            executable='camera_data',
            namespace='camera',
            name='agrobot'
        ),
        Node(
            package='agrobot_pkg',
            executable='camera_processing',
            namespace='camera',
            name='agrobot'
        ),
        Node(
            package='agrobot_pkg',
            executable='movement_controller',
            namespace='camera',
            name='agrobot'
        ),
        Node(
            package='agrobot_pkg',
            executable='movement_driver',
            namespace='camera',
            name='agrobot'
        ),
    ])