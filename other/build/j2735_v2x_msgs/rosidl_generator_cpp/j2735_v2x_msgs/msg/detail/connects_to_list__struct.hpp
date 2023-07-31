// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/ConnectsToList.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTS_TO_LIST__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTS_TO_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'connect_to_list'
#include "j2735_v2x_msgs/msg/detail/connection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__ConnectsToList __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__ConnectsToList __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConnectsToList_
{
  using Type = ConnectsToList_<ContainerAllocator>;

  explicit ConnectsToList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ConnectsToList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _connect_to_list_type =
    std::vector<j2735_v2x_msgs::msg::Connection_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::Connection_<ContainerAllocator>>::other>;
  _connect_to_list_type connect_to_list;

  // setters for named parameter idiom
  Type & set__connect_to_list(
    const std::vector<j2735_v2x_msgs::msg::Connection_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::Connection_<ContainerAllocator>>::other> & _arg)
  {
    this->connect_to_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::ConnectsToList_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::ConnectsToList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ConnectsToList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ConnectsToList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ConnectsToList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ConnectsToList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ConnectsToList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ConnectsToList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ConnectsToList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ConnectsToList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__ConnectsToList
    std::shared_ptr<j2735_v2x_msgs::msg::ConnectsToList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__ConnectsToList
    std::shared_ptr<j2735_v2x_msgs::msg::ConnectsToList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectsToList_ & other) const
  {
    if (this->connect_to_list != other.connect_to_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectsToList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectsToList_

// alias to use template instance with default allocator
using ConnectsToList =
  j2735_v2x_msgs::msg::ConnectsToList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTS_TO_LIST__STRUCT_HPP_
