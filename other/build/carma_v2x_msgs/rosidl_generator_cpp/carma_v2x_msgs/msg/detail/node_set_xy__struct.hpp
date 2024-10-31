// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/NodeSetXY.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__NODE_SET_XY__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__NODE_SET_XY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'node_set_xy'
#include "carma_v2x_msgs/msg/detail/node_xy__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__NodeSetXY __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__NodeSetXY __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeSetXY_
{
  using Type = NodeSetXY_<ContainerAllocator>;

  explicit NodeSetXY_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit NodeSetXY_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _node_set_xy_type =
    std::vector<carma_v2x_msgs::msg::NodeXY_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::NodeXY_<ContainerAllocator>>::other>;
  _node_set_xy_type node_set_xy;

  // setters for named parameter idiom
  Type & set__node_set_xy(
    const std::vector<carma_v2x_msgs::msg::NodeXY_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::NodeXY_<ContainerAllocator>>::other> & _arg)
  {
    this->node_set_xy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::NodeSetXY_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::NodeSetXY_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::NodeSetXY_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::NodeSetXY_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::NodeSetXY_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::NodeSetXY_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::NodeSetXY_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::NodeSetXY_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::NodeSetXY_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::NodeSetXY_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__NodeSetXY
    std::shared_ptr<carma_v2x_msgs::msg::NodeSetXY_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__NodeSetXY
    std::shared_ptr<carma_v2x_msgs::msg::NodeSetXY_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeSetXY_ & other) const
  {
    if (this->node_set_xy != other.node_set_xy) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeSetXY_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeSetXY_

// alias to use template instance with default allocator
using NodeSetXY =
  carma_v2x_msgs::msg::NodeSetXY_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__NODE_SET_XY__STRUCT_HPP_
