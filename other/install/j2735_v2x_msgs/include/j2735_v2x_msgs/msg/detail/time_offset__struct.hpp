// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TimeOffset.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TimeOffset __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TimeOffset __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeOffset_
{
  using Type = TimeOffset_<ContainerAllocator>;

  explicit TimeOffset_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0;
    }
  }

  explicit TimeOffset_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0;
    }
  }

  // field types and members
  using _offset_type =
    uint16_t;
  _offset_type offset;

  // setters for named parameter idiom
  Type & set__offset(
    const uint16_t & _arg)
  {
    this->offset = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t MIN =
    1u;
  static constexpr uint16_t MAX =
    65534u;
  static constexpr uint16_t UNAVAILABLE =
    65535u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TimeOffset
    std::shared_ptr<j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TimeOffset
    std::shared_ptr<j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeOffset_ & other) const
  {
    if (this->offset != other.offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeOffset_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeOffset_

// alias to use template instance with default allocator
using TimeOffset =
  j2735_v2x_msgs::msg::TimeOffset_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t TimeOffset_<ContainerAllocator>::MIN;
template<typename ContainerAllocator>
constexpr uint16_t TimeOffset_<ContainerAllocator>::MAX;
template<typename ContainerAllocator>
constexpr uint16_t TimeOffset_<ContainerAllocator>::UNAVAILABLE;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__STRUCT_HPP_
