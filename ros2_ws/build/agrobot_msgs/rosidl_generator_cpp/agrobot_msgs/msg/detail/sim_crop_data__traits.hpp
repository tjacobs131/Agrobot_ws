// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from agrobot_msgs:msg/SimCropData.idl
// generated code does not contain a copyright notice

#ifndef AGROBOT_MSGS__MSG__DETAIL__SIM_CROP_DATA__TRAITS_HPP_
#define AGROBOT_MSGS__MSG__DETAIL__SIM_CROP_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "agrobot_msgs/msg/detail/sim_crop_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace agrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SimCropData & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimCropData & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimCropData & msg, bool use_flow_style = false)
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
  const agrobot_msgs::msg::SimCropData & msg,
  std::ostream & out, size_t indentation = 0)
{
  agrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use agrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const agrobot_msgs::msg::SimCropData & msg)
{
  return agrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<agrobot_msgs::msg::SimCropData>()
{
  return "agrobot_msgs::msg::SimCropData";
}

template<>
inline const char * name<agrobot_msgs::msg::SimCropData>()
{
  return "agrobot_msgs/msg/SimCropData";
}

template<>
struct has_fixed_size<agrobot_msgs::msg::SimCropData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<agrobot_msgs::msg::SimCropData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<agrobot_msgs::msg::SimCropData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AGROBOT_MSGS__MSG__DETAIL__SIM_CROP_DATA__TRAITS_HPP_
