// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/Angle.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ANGLE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ANGLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__Angle __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__Angle __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Angle_
{
  using Type = Angle_<ContainerAllocator>;

  explicit Angle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0;
    }
  }

  explicit Angle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0;
    }
  }

  // field types and members
  using _angle_type =
    uint16_t;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__angle(
    const uint16_t & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t ANGLE_UNAVAILABLE =
    28800u;
  static constexpr uint16_t ANGLE_MAX =
    28799u;
  static constexpr uint16_t ANGLE_MIN =
    0u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::Angle_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::Angle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Angle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Angle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Angle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Angle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Angle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Angle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Angle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Angle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__Angle
    std::shared_ptr<j2735_v2x_msgs::msg::Angle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__Angle
    std::shared_ptr<j2735_v2x_msgs::msg::Angle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Angle_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Angle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Angle_

// alias to use template instance with default allocator
using Angle =
  j2735_v2x_msgs::msg::Angle_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t Angle_<ContainerAllocator>::ANGLE_UNAVAILABLE;
template<typename ContainerAllocator>
constexpr uint16_t Angle_<ContainerAllocator>::ANGLE_MAX;
template<typename ContainerAllocator>
constexpr uint16_t Angle_<ContainerAllocator>::ANGLE_MIN;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ANGLE__STRUCT_HPP_
