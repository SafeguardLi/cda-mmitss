// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TractionControlStatus.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRACTION_CONTROL_STATUS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRACTION_CONTROL_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TractionControlStatus __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TractionControlStatus __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TractionControlStatus_
{
  using Type = TractionControlStatus_<ContainerAllocator>;

  explicit TractionControlStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traction_control_status = 0;
    }
  }

  explicit TractionControlStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traction_control_status = 0;
    }
  }

  // field types and members
  using _traction_control_status_type =
    uint8_t;
  _traction_control_status_type traction_control_status;

  // setters for named parameter idiom
  Type & set__traction_control_status(
    const uint8_t & _arg)
  {
    this->traction_control_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t OFF =
    1u;
  static constexpr uint8_t ON =
    2u;
  static constexpr uint8_t ENGAGED =
    3u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TractionControlStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TractionControlStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TractionControlStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TractionControlStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TractionControlStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TractionControlStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TractionControlStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TractionControlStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TractionControlStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TractionControlStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TractionControlStatus
    std::shared_ptr<j2735_v2x_msgs::msg::TractionControlStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TractionControlStatus
    std::shared_ptr<j2735_v2x_msgs::msg::TractionControlStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TractionControlStatus_ & other) const
  {
    if (this->traction_control_status != other.traction_control_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const TractionControlStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TractionControlStatus_

// alias to use template instance with default allocator
using TractionControlStatus =
  j2735_v2x_msgs::msg::TractionControlStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t TractionControlStatus_<ContainerAllocator>::UNAVAILABLE;
template<typename ContainerAllocator>
constexpr uint8_t TractionControlStatus_<ContainerAllocator>::OFF;
template<typename ContainerAllocator>
constexpr uint8_t TractionControlStatus_<ContainerAllocator>::ON;
template<typename ContainerAllocator>
constexpr uint8_t TractionControlStatus_<ContainerAllocator>::ENGAGED;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRACTION_CONTROL_STATUS__STRUCT_HPP_
