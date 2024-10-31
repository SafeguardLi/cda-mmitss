// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/GrossSpeed.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__GrossSpeed __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__GrossSpeed __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GrossSpeed_
{
  using Type = GrossSpeed_<ContainerAllocator>;

  explicit GrossSpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0;
    }
  }

  explicit GrossSpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0;
    }
  }

  // field types and members
  using _speed_type =
    uint8_t;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__speed(
    const uint8_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SPEED_MIN =
    0u;
  static constexpr uint8_t SPEED_MAX =
    30u;
  static constexpr uint8_t SPEED_UNAVAILABLE =
    31u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__GrossSpeed
    std::shared_ptr<j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__GrossSpeed
    std::shared_ptr<j2735_v2x_msgs::msg::GrossSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrossSpeed_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrossSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrossSpeed_

// alias to use template instance with default allocator
using GrossSpeed =
  j2735_v2x_msgs::msg::GrossSpeed_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t GrossSpeed_<ContainerAllocator>::SPEED_MIN;
template<typename ContainerAllocator>
constexpr uint8_t GrossSpeed_<ContainerAllocator>::SPEED_MAX;
template<typename ContainerAllocator>
constexpr uint8_t GrossSpeed_<ContainerAllocator>::SPEED_UNAVAILABLE;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__STRUCT_HPP_
