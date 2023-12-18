// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from agrobot_msgs:srv/SimCropLocation.idl
// generated code does not contain a copyright notice

#ifndef AGROBOT_MSGS__SRV__DETAIL__SIM_CROP_LOCATION__STRUCT_HPP_
#define AGROBOT_MSGS__SRV__DETAIL__SIM_CROP_LOCATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__agrobot_msgs__srv__SimCropLocation_Request __attribute__((deprecated))
#else
# define DEPRECATED__agrobot_msgs__srv__SimCropLocation_Request __declspec(deprecated)
#endif

namespace agrobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SimCropLocation_Request_
{
  using Type = SimCropLocation_Request_<ContainerAllocator>;

  explicit SimCropLocation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = 0ll;
    }
  }

  explicit SimCropLocation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = 0ll;
    }
  }

  // field types and members
  using _object_id_type =
    int64_t;
  _object_id_type object_id;

  // setters for named parameter idiom
  Type & set__object_id(
    const int64_t & _arg)
  {
    this->object_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__agrobot_msgs__srv__SimCropLocation_Request
    std::shared_ptr<agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__agrobot_msgs__srv__SimCropLocation_Request
    std::shared_ptr<agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimCropLocation_Request_ & other) const
  {
    if (this->object_id != other.object_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimCropLocation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimCropLocation_Request_

// alias to use template instance with default allocator
using SimCropLocation_Request =
  agrobot_msgs::srv::SimCropLocation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace agrobot_msgs


#ifndef _WIN32
# define DEPRECATED__agrobot_msgs__srv__SimCropLocation_Response __attribute__((deprecated))
#else
# define DEPRECATED__agrobot_msgs__srv__SimCropLocation_Response __declspec(deprecated)
#endif

namespace agrobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SimCropLocation_Response_
{
  using Type = SimCropLocation_Response_<ContainerAllocator>;

  explicit SimCropLocation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SimCropLocation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__agrobot_msgs__srv__SimCropLocation_Response
    std::shared_ptr<agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__agrobot_msgs__srv__SimCropLocation_Response
    std::shared_ptr<agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimCropLocation_Response_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimCropLocation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimCropLocation_Response_

// alias to use template instance with default allocator
using SimCropLocation_Response =
  agrobot_msgs::srv::SimCropLocation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace agrobot_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__agrobot_msgs__srv__SimCropLocation_Event __attribute__((deprecated))
#else
# define DEPRECATED__agrobot_msgs__srv__SimCropLocation_Event __declspec(deprecated)
#endif

namespace agrobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SimCropLocation_Event_
{
  using Type = SimCropLocation_Event_<ContainerAllocator>;

  explicit SimCropLocation_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SimCropLocation_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<agrobot_msgs::srv::SimCropLocation_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<agrobot_msgs::srv::SimCropLocation_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    agrobot_msgs::srv::SimCropLocation_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const agrobot_msgs::srv::SimCropLocation_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<agrobot_msgs::srv::SimCropLocation_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<agrobot_msgs::srv::SimCropLocation_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      agrobot_msgs::srv::SimCropLocation_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<agrobot_msgs::srv::SimCropLocation_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      agrobot_msgs::srv::SimCropLocation_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<agrobot_msgs::srv::SimCropLocation_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<agrobot_msgs::srv::SimCropLocation_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<agrobot_msgs::srv::SimCropLocation_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__agrobot_msgs__srv__SimCropLocation_Event
    std::shared_ptr<agrobot_msgs::srv::SimCropLocation_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__agrobot_msgs__srv__SimCropLocation_Event
    std::shared_ptr<agrobot_msgs::srv::SimCropLocation_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimCropLocation_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimCropLocation_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimCropLocation_Event_

// alias to use template instance with default allocator
using SimCropLocation_Event =
  agrobot_msgs::srv::SimCropLocation_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace agrobot_msgs

namespace agrobot_msgs
{

namespace srv
{

struct SimCropLocation
{
  using Request = agrobot_msgs::srv::SimCropLocation_Request;
  using Response = agrobot_msgs::srv::SimCropLocation_Response;
  using Event = agrobot_msgs::srv::SimCropLocation_Event;
};

}  // namespace srv

}  // namespace agrobot_msgs

#endif  // AGROBOT_MSGS__SRV__DETAIL__SIM_CROP_LOCATION__STRUCT_HPP_
