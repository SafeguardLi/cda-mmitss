// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/AmbientAirTemperature.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_TEMPERATURE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_TEMPERATURE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__AmbientAirTemperature __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__AmbientAirTemperature __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AmbientAirTemperature_
{
  using Type = AmbientAirTemperature_<ContainerAllocator>;

  explicit AmbientAirTemperature_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0;
    }
  }

  explicit AmbientAirTemperature_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0;
    }
  }

  // field types and members
  using _temperature_type =
    uint8_t;
  _temperature_type temperature;

  // setters for named parameter idiom
  Type & set__temperature(
    const uint8_t & _arg)
  {
    this->temperature = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TERMPERATURE_MIN =
    0u;
  static constexpr uint8_t TEMPERATURE_MAX =
    190u;
  static constexpr uint8_t TEMPERATURE_UNKNOWN =
    191u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::AmbientAirTemperature_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::AmbientAirTemperature_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AmbientAirTemperature_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AmbientAirTemperature_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AmbientAirTemperature_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AmbientAirTemperature_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AmbientAirTemperature_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AmbientAirTemperature_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AmbientAirTemperature_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AmbientAirTemperature_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__AmbientAirTemperature
    std::shared_ptr<j2735_v2x_msgs::msg::AmbientAirTemperature_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__AmbientAirTemperature
    std::shared_ptr<j2735_v2x_msgs::msg::AmbientAirTemperature_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AmbientAirTemperature_ & other) const
  {
    if (this->temperature != other.temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const AmbientAirTemperature_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AmbientAirTemperature_

// alias to use template instance with default allocator
using AmbientAirTemperature =
  j2735_v2x_msgs::msg::AmbientAirTemperature_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t AmbientAirTemperature_<ContainerAllocator>::TERMPERATURE_MIN;
template<typename ContainerAllocator>
constexpr uint8_t AmbientAirTemperature_<ContainerAllocator>::TEMPERATURE_MAX;
template<typename ContainerAllocator>
constexpr uint8_t AmbientAirTemperature_<ContainerAllocator>::TEMPERATURE_UNKNOWN;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_TEMPERATURE__STRUCT_HPP_
