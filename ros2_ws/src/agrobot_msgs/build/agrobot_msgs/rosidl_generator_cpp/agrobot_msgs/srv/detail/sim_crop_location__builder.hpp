// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from agrobot_msgs:srv/SimCropLocation.idl
// generated code does not contain a copyright notice

#ifndef AGROBOT_MSGS__SRV__DETAIL__SIM_CROP_LOCATION__BUILDER_HPP_
#define AGROBOT_MSGS__SRV__DETAIL__SIM_CROP_LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "agrobot_msgs/srv/detail/sim_crop_location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace agrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_SimCropLocation_Request_object_id
{
public:
  Init_SimCropLocation_Request_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::agrobot_msgs::srv::SimCropLocation_Request object_id(::agrobot_msgs::srv::SimCropLocation_Request::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agrobot_msgs::srv::SimCropLocation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::agrobot_msgs::srv::SimCropLocation_Request>()
{
  return agrobot_msgs::srv::builder::Init_SimCropLocation_Request_object_id();
}

}  // namespace agrobot_msgs


namespace agrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_SimCropLocation_Response_position
{
public:
  Init_SimCropLocation_Response_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::agrobot_msgs::srv::SimCropLocation_Response position(::agrobot_msgs::srv::SimCropLocation_Response::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agrobot_msgs::srv::SimCropLocation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::agrobot_msgs::srv::SimCropLocation_Response>()
{
  return agrobot_msgs::srv::builder::Init_SimCropLocation_Response_position();
}

}  // namespace agrobot_msgs


namespace agrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_SimCropLocation_Event_response
{
public:
  explicit Init_SimCropLocation_Event_response(::agrobot_msgs::srv::SimCropLocation_Event & msg)
  : msg_(msg)
  {}
  ::agrobot_msgs::srv::SimCropLocation_Event response(::agrobot_msgs::srv::SimCropLocation_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agrobot_msgs::srv::SimCropLocation_Event msg_;
};

class Init_SimCropLocation_Event_request
{
public:
  explicit Init_SimCropLocation_Event_request(::agrobot_msgs::srv::SimCropLocation_Event & msg)
  : msg_(msg)
  {}
  Init_SimCropLocation_Event_response request(::agrobot_msgs::srv::SimCropLocation_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SimCropLocation_Event_response(msg_);
  }

private:
  ::agrobot_msgs::srv::SimCropLocation_Event msg_;
};

class Init_SimCropLocation_Event_info
{
public:
  Init_SimCropLocation_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimCropLocation_Event_request info(::agrobot_msgs::srv::SimCropLocation_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SimCropLocation_Event_request(msg_);
  }

private:
  ::agrobot_msgs::srv::SimCropLocation_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::agrobot_msgs::srv::SimCropLocation_Event>()
{
  return agrobot_msgs::srv::builder::Init_SimCropLocation_Event_info();
}

}  // namespace agrobot_msgs

#endif  // AGROBOT_MSGS__SRV__DETAIL__SIM_CROP_LOCATION__BUILDER_HPP_
