// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PersonalAssistive.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_ASSISTIVE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_ASSISTIVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PersonalAssistive __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PersonalAssistive __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PersonalAssistive_
{
  using Type = PersonalAssistive_<ContainerAllocator>;

  explicit PersonalAssistive_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->types = 0;
    }
  }

  explicit PersonalAssistive_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->types = 0;
    }
  }

  // field types and members
  using _types_type =
    uint8_t;
  _types_type types;

  // setters for named parameter idiom
  Type & set__types(
    const uint8_t & _arg)
  {
    this->types = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t OTHER_TYPE =
    1u;
  static constexpr uint8_t VISION =
    2u;
  static constexpr uint8_t HEARING =
    4u;
  static constexpr uint8_t MOVEMENT =
    8u;
  static constexpr uint8_t COGNITION =
    16u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PersonalAssistive_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PersonalAssistive_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalAssistive_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalAssistive_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PersonalAssistive_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PersonalAssistive_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PersonalAssistive_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PersonalAssistive_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PersonalAssistive_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PersonalAssistive_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PersonalAssistive
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalAssistive_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PersonalAssistive
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalAssistive_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PersonalAssistive_ & other) const
  {
    if (this->types != other.types) {
      return false;
    }
    return true;
  }
  bool operator!=(const PersonalAssistive_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PersonalAssistive_

// alias to use template instance with default allocator
using PersonalAssistive =
  j2735_v2x_msgs::msg::PersonalAssistive_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PersonalAssistive_<ContainerAllocator>::UNAVAILABLE;
template<typename ContainerAllocator>
constexpr uint8_t PersonalAssistive_<ContainerAllocator>::OTHER_TYPE;
template<typename ContainerAllocator>
constexpr uint8_t PersonalAssistive_<ContainerAllocator>::VISION;
template<typename ContainerAllocator>
constexpr uint8_t PersonalAssistive_<ContainerAllocator>::HEARING;
template<typename ContainerAllocator>
constexpr uint8_t PersonalAssistive_<ContainerAllocator>::MOVEMENT;
template<typename ContainerAllocator>
constexpr uint8_t PersonalAssistive_<ContainerAllocator>::COGNITION;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_ASSISTIVE__STRUCT_HPP_
