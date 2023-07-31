// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/HumanPropelledType.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__HUMAN_PROPELLED_TYPE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__HUMAN_PROPELLED_TYPE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__HumanPropelledType __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__HumanPropelledType __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HumanPropelledType_
{
  using Type = HumanPropelledType_<ContainerAllocator>;

  explicit HumanPropelledType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit HumanPropelledType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t OTHER_TYPES =
    1u;
  static constexpr uint8_t ON_FOOT =
    2u;
  static constexpr uint8_t PUSH_OR_KICK_SCOOTER =
    3u;
  static constexpr uint8_t WHEELCHAIR =
    4u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::HumanPropelledType_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::HumanPropelledType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::HumanPropelledType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::HumanPropelledType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::HumanPropelledType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::HumanPropelledType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::HumanPropelledType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::HumanPropelledType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::HumanPropelledType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::HumanPropelledType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__HumanPropelledType
    std::shared_ptr<j2735_v2x_msgs::msg::HumanPropelledType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__HumanPropelledType
    std::shared_ptr<j2735_v2x_msgs::msg::HumanPropelledType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HumanPropelledType_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const HumanPropelledType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HumanPropelledType_

// alias to use template instance with default allocator
using HumanPropelledType =
  j2735_v2x_msgs::msg::HumanPropelledType_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t HumanPropelledType_<ContainerAllocator>::UNAVAILABLE;
template<typename ContainerAllocator>
constexpr uint8_t HumanPropelledType_<ContainerAllocator>::OTHER_TYPES;
template<typename ContainerAllocator>
constexpr uint8_t HumanPropelledType_<ContainerAllocator>::ON_FOOT;
template<typename ContainerAllocator>
constexpr uint8_t HumanPropelledType_<ContainerAllocator>::PUSH_OR_KICK_SCOOTER;
template<typename ContainerAllocator>
constexpr uint8_t HumanPropelledType_<ContainerAllocator>::WHEELCHAIR;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__HUMAN_PROPELLED_TYPE__STRUCT_HPP_
