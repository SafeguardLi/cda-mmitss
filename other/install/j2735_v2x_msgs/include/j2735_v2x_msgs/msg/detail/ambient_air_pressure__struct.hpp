// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/AmbientAirPressure.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__AmbientAirPressure __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__AmbientAirPressure __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AmbientAirPressure_
{
  using Type = AmbientAirPressure_<ContainerAllocator>;

  explicit AmbientAirPressure_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pressure = 0;
    }
  }

  explicit AmbientAirPressure_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pressure = 0;
    }
  }

  // field types and members
  using _pressure_type =
    uint8_t;
  _pressure_type pressure;

  // setters for named parameter idiom
  Type & set__pressure(
    const uint8_t & _arg)
  {
    this->pressure = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PRESSURE_MIN =
    0u;
  static constexpr uint8_t PRESSURE_MAX =
    255u;
  static constexpr uint8_t PRESSURE_UNAVAILABLE =
    0u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::AmbientAirPressure_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::AmbientAirPressure_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AmbientAirPressure_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AmbientAirPressure_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AmbientAirPressure_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AmbientAirPressure_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AmbientAirPressure_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AmbientAirPressure_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AmbientAirPressure_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AmbientAirPressure_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__AmbientAirPressure
    std::shared_ptr<j2735_v2x_msgs::msg::AmbientAirPressure_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__AmbientAirPressure
    std::shared_ptr<j2735_v2x_msgs::msg::AmbientAirPressure_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AmbientAirPressure_ & other) const
  {
    if (this->pressure != other.pressure) {
      return false;
    }
    return true;
  }
  bool operator!=(const AmbientAirPressure_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AmbientAirPressure_

// alias to use template instance with default allocator
using AmbientAirPressure =
  j2735_v2x_msgs::msg::AmbientAirPressure_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t AmbientAirPressure_<ContainerAllocator>::PRESSURE_MIN;
template<typename ContainerAllocator>
constexpr uint8_t AmbientAirPressure_<ContainerAllocator>::PRESSURE_MAX;
template<typename ContainerAllocator>
constexpr uint8_t AmbientAirPressure_<ContainerAllocator>::PRESSURE_UNAVAILABLE;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__STRUCT_HPP_
