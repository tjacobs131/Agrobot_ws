// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from agrobot_msgs:msg/SimCropData.idl
// generated code does not contain a copyright notice

#ifndef AGROBOT_MSGS__MSG__DETAIL__SIM_CROP_DATA__STRUCT_HPP_
#define AGROBOT_MSGS__MSG__DETAIL__SIM_CROP_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__agrobot_msgs__msg__SimCropData __attribute__((deprecated))
#else
# define DEPRECATED__agrobot_msgs__msg__SimCropData __declspec(deprecated)
#endif

namespace agrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SimCropData_
{
  using Type = SimCropData_<ContainerAllocator>;

  explicit SimCropData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SimCropData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    agrobot_msgs::msg::SimCropData_<ContainerAllocator> *;
  using ConstRawPtr =
    const agrobot_msgs::msg::SimCropData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<agrobot_msgs::msg::SimCropData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<agrobot_msgs::msg::SimCropData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      agrobot_msgs::msg::SimCropData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<agrobot_msgs::msg::SimCropData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      agrobot_msgs::msg::SimCropData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<agrobot_msgs::msg::SimCropData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<agrobot_msgs::msg::SimCropData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<agrobot_msgs::msg::SimCropData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__agrobot_msgs__msg__SimCropData
    std::shared_ptr<agrobot_msgs::msg::SimCropData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__agrobot_msgs__msg__SimCropData
    std::shared_ptr<agrobot_msgs::msg::SimCropData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimCropData_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimCropData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimCropData_

// alias to use template instance with default allocator
using SimCropData =
  agrobot_msgs::msg::SimCropData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace agrobot_msgs

#endif  // AGROBOT_MSGS__MSG__DETAIL__SIM_CROP_DATA__STRUCT_HPP_
