#ros2_cpp_node
# cmake_minimum_required(VERSION 3.8)
# project(ros2_cpp)
# add_executable(ros2_cpp_node ros2_cpp_node.cpp)

# find_package(rclcpp REQUIRED) #直接查找到第一应的头文件和库文件
# message(STATUS ${rclcpp_INCLUDE_DIRS}) #头文件及rclcpp依赖的头文件
# message(STATUS ${rclcpp_LIBRARIES}) #库文件及rclcpp依赖的库文件

# target_include_directories(ros2_cpp_node PUBLIC ${rclcpp_INCLUDE_DIRS}) #头文件包含
# target_link_libraries(ros2_cpp_node ${rclcpp_LIBRARIES}) #库文件链接

#cpp_params_demo
cmake_minimum_required(VERSION 3.8)
project(cpp_params_demo)
add_executable(cpp_params_demo cpp_params_demo.cpp)

find_package(rclcpp REQUIRED) #直接查找到第一应的头文件和库文件
message(STATUS ${rclcpp_INCLUDE_DIRS}) #头文件及rclcpp依赖的头文件
message(STATUS ${rclcpp_LIBRARIES}) #库文件及rclcpp依赖的库文件

target_include_directories(cpp_params_demo PUBLIC ${rclcpp_INCLUDE_DIRS}) #头文件包含
target_link_libraries(cpp_params_demo ${rclcpp_LIBRARIES}) #库文件链接