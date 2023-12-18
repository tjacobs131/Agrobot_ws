// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from agrobot_msgs:srv/SimCropLocation.idl
// generated code does not contain a copyright notice

#ifndef AGROBOT_MSGS__SRV__DETAIL__SIM_CROP_LOCATION__TRAITS_HPP_
#define AGROBOT_MSGS__SRV__DETAIL__SIM_CROP_LOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "agrobot_msgs/srv/detail/sim_crop_location__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace agrobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SimCropLocation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimCropLocation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimCropLocation_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace agrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use agrobot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const agrobot_msgs::srv::SimCropLocation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  agrobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use agrobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const agrobot_msgs::srv::SimCropLocation_Request & msg)
{
  return agrobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<agrobot_msgs::srv::SimCropLocation_Request>()
{
  return "agrobot_msgs::srv::SimCropLocation_Request";
}

template<>
inline const char * name<agrobot_msgs::srv::SimCropLocation_Request>()
{
  return "agrobot_msgs/srv/SimCropLocation_Request";
}

template<>
struct has_fixed_size<agrobot_msgs::srv::SimCropLocation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<agrobot_msgs::srv::SimCropLocation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<agrobot_msgs::srv::SimCropLocation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace agrobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SimCropLocation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimCropLocation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimCropLocation_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace agrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use agrobot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const agrobot_msgs::srv::SimCropLocation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  agrobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use agrobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const agrobot_msgs::srv::SimCropLocation_Response & msg)
{
  return agrobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<agrobot_msgs::srv::SimCropLocation_Response>()
{
  return "agrobot_msgs::srv::SimCropLocation_Response";
}

template<>
inline const char * name<agrobot_msgs::srv::SimCropLocation_Response>()
{
  return "agrobot_msgs/srv/SimCropLocation_Response";
}

template<>
struct has_fixed_size<agrobot_msgs::srv::SimCropLocation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<agrobot_msgs::srv::SimCropLocation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<agrobot_msgs::srv::SimCropLocation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace agrobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SimCropLocation_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimCropLocation_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimCropLocation_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace agrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use agrobot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const agrobot_msgs::srv::SimCropLocation_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  agrobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use agrobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const agrobot_msgs::srv::SimCropLocation_Event & msg)
{
  return agrobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<agrobot_msgs::srv::SimCropLocation_Event>()
{
  return "agrobot_msgs::srv::SimCropLocation_Event";
}

template<>
inline const char * name<agrobot_msgs::srv::SimCropLocation_Event>()
{
  return "agrobot_msgs/srv/SimCropLocation_Event";
}

template<>
struct has_fixed_size<agrobot_msgs::srv::SimCropLocation_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<agrobot_msgs::srv::SimCropLocation_Event>
  : std::integral_constant<bool, has_bounded_size<agrobot_msgs::srv::SimCropLocation_Request>::value && has_bounded_size<agrobot_msgs::srv::SimCropLocation_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<agrobot_msgs::srv::SimCropLocation_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<agrobot_msgs::srv::SimCropLocation>()
{
  return "agrobot_msgs::srv::SimCropLocation";
}

template<>
inline const char * name<agrobot_msgs::srv::SimCropLocation>()
{
  return "agrobot_msgs/srv/SimCropLocation";
}

template<>
struct has_fixed_size<agrobot_msgs::srv::SimCropLocation>
  : std::integral_constant<
    bool,
    has_fixed_size<agrobot_msgs::srv::SimCropLocation_Request>::value &&
    has_fixed_size<agrobot_msgs::srv::SimCropLocation_Response>::value
  >
{
};

template<>
struct has_bounded_size<agrobot_msgs::srv::SimCropLocation>
  : std::integral_constant<
    bool,
    has_bounded_size<agrobot_msgs::srv::SimCropLocation_Request>::value &&
    has_bounded_size<agrobot_msgs::srv::SimCropLocation_Response>::value
  >
{
};

template<>
struct is_service<agrobot_msgs::srv::SimCropLocation>
  : std::true_type
{
};

template<>
struct is_service_request<agrobot_msgs::srv::SimCropLocation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<agrobot_msgs::srv::SimCropLocation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AGROBOT_MSGS__SRV__DETAIL__SIM_CROP_LOCATION__TRAITS_HPP_
