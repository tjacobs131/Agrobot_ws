// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from agrobot_msgs:msg/VisionPublishClosestCrop.idl
// generated code does not contain a copyright notice

#ifndef AGROBOT_MSGS__MSG__DETAIL__VISION_PUBLISH_CLOSEST_CROP__TRAITS_HPP_
#define AGROBOT_MSGS__MSG__DETAIL__VISION_PUBLISH_CLOSEST_CROP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "agrobot_msgs/msg/detail/vision_publish_closest_crop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace agrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VisionPublishClosestCrop & msg,
  std::ostream & out)
{
  out << "{";
  // member: crop_type
  {
    out << "crop_type: ";
    rosidl_generator_traits::value_to_yaml(msg.crop_type, out);
    out << ", ";
  }

  // member: crop_x
  {
    out << "crop_x: ";
    rosidl_generator_traits::value_to_yaml(msg.crop_x, out);
    out << ", ";
  }

  // member: crop_y
  {
    out << "crop_y: ";
    rosidl_generator_traits::value_to_yaml(msg.crop_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VisionPublishClosestCrop & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: crop_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crop_type: ";
    rosidl_generator_traits::value_to_yaml(msg.crop_type, out);
    out << "\n";
  }

  // member: crop_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crop_x: ";
    rosidl_generator_traits::value_to_yaml(msg.crop_x, out);
    out << "\n";
  }

  // member: crop_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crop_y: ";
    rosidl_generator_traits::value_to_yaml(msg.crop_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VisionPublishClosestCrop & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace agrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use agrobot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const agrobot_msgs::msg::VisionPublishClosestCrop & msg,
  std::ostream & out, size_t indentation = 0)
{
  agrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use agrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const agrobot_msgs::msg::VisionPublishClosestCrop & msg)
{
  return agrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<agrobot_msgs::msg::VisionPublishClosestCrop>()
{
  return "agrobot_msgs::msg::VisionPublishClosestCrop";
}

template<>
inline const char * name<agrobot_msgs::msg::VisionPublishClosestCrop>()
{
  return "agrobot_msgs/msg/VisionPublishClosestCrop";
}

template<>
struct has_fixed_size<agrobot_msgs::msg::VisionPublishClosestCrop>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<agrobot_msgs::msg::VisionPublishClosestCrop>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<agrobot_msgs::msg::VisionPublishClosestCrop>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AGROBOT_MSGS__MSG__DETAIL__VISION_PUBLISH_CLOSEST_CROP__TRAITS_HPP_
