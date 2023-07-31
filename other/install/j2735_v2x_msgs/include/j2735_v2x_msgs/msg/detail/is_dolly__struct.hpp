// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/IsDolly.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__IS_DOLLY__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__IS_DOLLY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__IsDolly __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__IsDolly __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IsDolly_
{
  using Type = IsDolly_<ContainerAllocator>;

  explicit IsDolly_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_dolly = false;
    }
  }

  explicit IsDolly_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_dolly = false;
    }
  }

  // field types and members
  using _is_dolly_type =
    bool;
  _is_dolly_type is_dolly;

  // setters for named parameter idiom
  Type & set__is_dolly(
    const bool & _arg)
  {
    this->is_dolly = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::IsDolly_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::IsDolly_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::IsDolly_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::IsDolly_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::IsDolly_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::IsDolly_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::IsDolly_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::IsDolly_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::IsDolly_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::IsDolly_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__IsDolly
    std::shared_ptr<j2735_v2x_msgs::msg::IsDolly_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__IsDolly
    std::shared_ptr<j2735_v2x_msgs::msg::IsDolly_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsDolly_ & other) const
  {
    if (this->is_dolly != other.is_dolly) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsDolly_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsDolly_

// alias to use template instance with default allocator
using IsDolly =
  j2735_v2x_msgs::msg::IsDolly_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__IS_DOLLY__STRUCT_HPP_
