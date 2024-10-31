// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/AccelerationConfidence.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_CONFIDENCE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_CONFIDENCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__AccelerationConfidence __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__AccelerationConfidence __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AccelerationConfidence_
{
  using Type = AccelerationConfidence_<ContainerAllocator>;

  explicit AccelerationConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acceleration_confidence = 0;
    }
  }

  explicit AccelerationConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acceleration_confidence = 0;
    }
  }

  // field types and members
  using _acceleration_confidence_type =
    uint8_t;
  _acceleration_confidence_type acceleration_confidence;

  // setters for named parameter idiom
  Type & set__acceleration_confidence(
    const uint8_t & _arg)
  {
    this->acceleration_confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t ACCL_100_00 =
    1u;
  static constexpr uint8_t ACCL_010_00 =
    2u;
  static constexpr uint8_t ACCL_005_00 =
    3u;
  static constexpr uint8_t ACCL_001_00 =
    4u;
  static constexpr uint8_t ACCL_000_10 =
    5u;
  static constexpr uint8_t ACCL_000_05 =
    6u;
  static constexpr uint8_t ACCL_000_01 =
    7u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__AccelerationConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__AccelerationConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccelerationConfidence_ & other) const
  {
    if (this->acceleration_confidence != other.acceleration_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccelerationConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccelerationConfidence_

// alias to use template instance with default allocator
using AccelerationConfidence =
  j2735_v2x_msgs::msg::AccelerationConfidence_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t AccelerationConfidence_<ContainerAllocator>::UNAVAILABLE;
template<typename ContainerAllocator>
constexpr uint8_t AccelerationConfidence_<ContainerAllocator>::ACCL_100_00;
template<typename ContainerAllocator>
constexpr uint8_t AccelerationConfidence_<ContainerAllocator>::ACCL_010_00;
template<typename ContainerAllocator>
constexpr uint8_t AccelerationConfidence_<ContainerAllocator>::ACCL_005_00;
template<typename ContainerAllocator>
constexpr uint8_t AccelerationConfidence_<ContainerAllocator>::ACCL_001_00;
template<typename ContainerAllocator>
constexpr uint8_t AccelerationConfidence_<ContainerAllocator>::ACCL_000_10;
template<typename ContainerAllocator>
constexpr uint8_t AccelerationConfidence_<ContainerAllocator>::ACCL_000_05;
template<typename ContainerAllocator>
constexpr uint8_t AccelerationConfidence_<ContainerAllocator>::ACCL_000_01;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_CONFIDENCE__STRUCT_HPP_
