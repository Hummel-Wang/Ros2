#include "iostream"
#include "rclcpp/rclcpp.hpp"
// 包含路径,主要是给vscode的IntelliSense用的（C/C++）,不影响编译
// ${workspaceFolder}/**
// /opt/ros/humble/**

int main(int argc, char** argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<rclcpp::Node>("cpp_node");
    RCLCPP_INFO(node->get_logger(), "Hello_cpp_node...");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}