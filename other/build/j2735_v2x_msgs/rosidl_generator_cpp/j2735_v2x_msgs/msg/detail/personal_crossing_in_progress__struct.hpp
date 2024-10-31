// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PersonalCrossingInProgress.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_IN_PROGRESS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_IN_PROGRESS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PersonalCrossingInProgress __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PersonalCrossingInProgress __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PersonalCrossingInProgress_
{
  using Type = PersonalCrossingInProgress_<ContainerAllocator>;

  explicit PersonalCrossingInProgress_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cross_state = false;
    }
  }

  explicit PersonalCrossingInProgress_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cross_state = false;
    }
  }

  // field types and members
  using _cross_state_type =
    bool;
  _cross_state_type cross_state;

  // setters for named parameter idiom
  Type & set__cross_state(
    const bool & _arg)
  {
    this->cross_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PersonalCrossingInProgress_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PersonalCrossingInProgress_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalCrossingInProgress_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalCrossingInProgress_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PersonalCrossingInProgress_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PersonalCrossingInProgress_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PersonalCrossingInProgress_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PersonalCrossingInProgress_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PersonalCrossingInProgress_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PersonalCrossingInProgress_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PersonalCrossingInProgress
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalCrossingInProgress_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PersonalCrossingInProgress
    std::shared_ptr<j2735_v2x_msgs::msg::PersonalCrossingInProgress_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PersonalCrossingInProgress_ & other) const
  {
    if (this->cross_state != other.cross_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const PersonalCrossingInProgress_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PersonalCrossingInProgress_

// alias to use template instance with default allocator
using PersonalCrossingInProgress =
  j2735_v2x_msgs::msg::PersonalCrossingInProgress_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_IN_PROGRESS__STRUCT_HPP_
