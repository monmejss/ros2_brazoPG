import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

#from launch.actions import TimerAction


def generate_launch_description():
    arlo_mejorado = get_package_share_directory('arlo_mejorado')
    world_path = os.path.join(arlo_mejorado, "worlds", "coca_levitando.world")
    urdf_path = os.path.join(arlo_mejorado, "models", "arlodrive", "xolobot.urdf")
    sdf_path = os.path.join(arlo_mejorado, "models", "arlodrive", "xolobot_arm.sdf")
    lata_path = os.path.join(arlo_mejorado, "models", "arlodrive", "lata.sdf")
    soporte_path = os.path.join(arlo_mejorado, "models", "arlodrive", "soporte.sdf")

    # Alinear tiempo de ros con el de la simulacion
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')

    gazebo = ExecuteProcess(
        cmd=['gazebo', '--verbose', world_path, 
            '-s', 'libgazebo_ros_init.so',
            '-s', 'libgazebo_ros_factory.so', 
            '-s', 'libgazebo_ros_force_system.so'],
        output='screen'
    )

    with open(urdf_path, 'r') as urdf_file:
        robot_description = urdf_file.read()

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_description, 'use_sim_time': use_sim_time}],
        output='screen'
    )

    spawn_model = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        name='spawn_xolobot',
        arguments=['-file', sdf_path, '-entity', 'xolobot_arm', '-x', '0', '-y', '0', '-z', '0.55'],
        output='screen'
    )

    load_trajectory_controller = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'active', 'joint_trajectory_controller'],
        output='screen'
    )
    
    lata = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        name='spawn_lata',
        arguments=['-file', lata_path, '-entity', 'coke_can'],
        output='screen'
    )
    
    soporte = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        name='spawn_soporte',
        arguments=['-file', soporte_path, '-entity', 'soporte'],
        output='screen'
    )


    return LaunchDescription([
        gazebo,
        robot_state_publisher,
        spawn_model,
        load_trajectory_controller,
        lata,
        soporte 
    ])
