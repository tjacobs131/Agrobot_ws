// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from agrobot_msgs:msg/VisionPublishClosestCrop.idl
// generated code does not contain a copyright notice

#ifndef AGROBOT_MSGS__MSG__DETAIL__VISION_PUBLISH_CLOSEST_CROP__BUILDER_HPP_
#define AGROBOT_MSGS__MSG__DETAIL__VISION_PUBLISH_CLOSEST_CROP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "agrobot_msgs/msg/detail/vision_publish_closest_crop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace agrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_VisionPublishClosestCrop_crop_y
{
public:
  explicit Init_VisionPublishClosestCrop_crop_y(::agrobot_msgs::msg::VisionPublishClosestCrop & msg)
  : msg_(msg)
  {}
  ::agrobot_msgs::msg::VisionPublishClosestCrop crop_y(::agrobot_msgs::msg::VisionPublishClosestCrop::_crop_y_type arg)
  {
    msg_.crop_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agrobot_msgs::msg::VisionPublishClosestCrop msg_;
};

class Init_VisionPublishClosestCrop_crop_x
{
public:
  explicit Init_VisionPublishClosestCrop_crop_x(::agrobot_msgs::msg::VisionPublishClosestCrop & msg)
  : msg_(msg)
  {}
  Init_VisionPublishClosestCrop_crop_y crop_x(::agrobot_msgs::msg::VisionPublishClosestCrop::_crop_x_type arg)
  {
    msg_.crop_x = std::move(arg);
    return Init_VisionPublishClosestCrop_crop_y(msg_);
  }

private:
  ::agrobot_msgs::msg::VisionPublishClosestCrop msg_;
};

class Init_VisionPublishClosestCrop_crop_type
{
public:
  Init_VisionPublishClosestCrop_crop_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisionPublishClosestCrop_crop_x crop_type(::agrobot_msgs::msg::VisionPublishClosestCrop::_crop_type_type arg)
  {
    msg_.crop_type = std::move(arg);
    return Init_VisionPublishClosestCrop_crop_x(msg_);
  }

private:
  ::agrobot_msgs::msg::VisionPublishClosestCrop msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::agrobot_msgs::msg::VisionPublishClosestCrop>()
{
  return agrobot_msgs::msg::builder::Init_VisionPublishClosestCrop_crop_type();
}

}  // namespace agrobot_msgs

#endif  // AGROBOT_MSGS__MSG__DETAIL__VISION_PUBLISH_CLOSEST_CROP__BUILDER_HPP_
