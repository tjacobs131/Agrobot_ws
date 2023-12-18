// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from agrobot_msgs:msg/VisionPublishClosestCrop.idl
// generated code does not contain a copyright notice

#ifndef AGROBOT_MSGS__MSG__DETAIL__VISION_PUBLISH_CLOSEST_CROP__STRUCT_HPP_
#define AGROBOT_MSGS__MSG__DETAIL__VISION_PUBLISH_CLOSEST_CROP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__agrobot_msgs__msg__VisionPublishClosestCrop __attribute__((deprecated))
#else
# define DEPRECATED__agrobot_msgs__msg__VisionPublishClosestCrop __declspec(deprecated)
#endif

namespace agrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VisionPublishClosestCrop_
{
  using Type = VisionPublishClosestCrop_<ContainerAllocator>;

  explicit VisionPublishClosestCrop_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crop_type = "";
      this->crop_x = 0ll;
      this->crop_y = 0ll;
    }
  }

  explicit VisionPublishClosestCrop_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : crop_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crop_type = "";
      this->crop_x = 0ll;
      this->crop_y = 0ll;
    }
  }

  // field types and members
  using _crop_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _crop_type_type crop_type;
  using _crop_x_type =
    int64_t;
  _crop_x_type crop_x;
  using _crop_y_type =
    int64_t;
  _crop_y_type crop_y;

  // setters for named parameter idiom
  Type & set__crop_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->crop_type = _arg;
    return *this;
  }
  Type & set__crop_x(
    const int64_t & _arg)
  {
    this->crop_x = _arg;
    return *this;
  }
  Type & set__crop_y(
    const int64_t & _arg)
  {
    this->crop_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    agrobot_msgs::msg::VisionPublishClosestCrop_<ContainerAllocator> *;
  using ConstRawPtr =
    const agrobot_msgs::msg::VisionPublishClosestCrop_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<agrobot_msgs::msg::VisionPublishClosestCrop_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<agrobot_msgs::msg::VisionPublishClosestCrop_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      agrobot_msgs::msg::VisionPublishClosestCrop_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<agrobot_msgs::msg::VisionPublishClosestCrop_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      agrobot_msgs::msg::VisionPublishClosestCrop_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<agrobot_msgs::msg::VisionPublishClosestCrop_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<agrobot_msgs::msg::VisionPublishClosestCrop_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<agrobot_msgs::msg::VisionPublishClosestCrop_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__agrobot_msgs__msg__VisionPublishClosestCrop
    std::shared_ptr<agrobot_msgs::msg::VisionPublishClosestCrop_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__agrobot_msgs__msg__VisionPublishClosestCrop
    std::shared_ptr<agrobot_msgs::msg::VisionPublishClosestCrop_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisionPublishClosestCrop_ & other) const
  {
    if (this->crop_type != other.crop_type) {
      return false;
    }
    if (this->crop_x != other.crop_x) {
      return false;
    }
    if (this->crop_y != other.crop_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisionPublishClosestCrop_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisionPublishClosestCrop_

// alias to use template instance with default allocator
using VisionPublishClosestCrop =
  agrobot_msgs::msg::VisionPublishClosestCrop_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace agrobot_msgs

#endif  // AGROBOT_MSGS__MSG__DETAIL__VISION_PUBLISH_CLOSEST_CROP__STRUCT_HPP_
