// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/OffsetPoint.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_POINT__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_POINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__OffsetPoint __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__OffsetPoint __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OffsetPoint_
{
  using Type = OffsetPoint_<ContainerAllocator>;

  explicit OffsetPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->deltax = 0.0;
      this->deltay = 0.0;
    }
  }

  explicit OffsetPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->deltax = 0.0;
      this->deltay = 0.0;
    }
  }

  // field types and members
  using _deltax_type =
    double;
  _deltax_type deltax;
  using _deltay_type =
    double;
  _deltay_type deltay;

  // setters for named parameter idiom
  Type & set__deltax(
    const double & _arg)
  {
    this->deltax = _arg;
    return *this;
  }
  Type & set__deltay(
    const double & _arg)
  {
    this->deltay = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__OffsetPoint
    std::shared_ptr<carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__OffsetPoint
    std::shared_ptr<carma_v2x_msgs::msg::OffsetPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OffsetPoint_ & other) const
  {
    if (this->deltax != other.deltax) {
      return false;
    }
    if (this->deltay != other.deltay) {
      return false;
    }
    return true;
  }
  bool operator!=(const OffsetPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OffsetPoint_

// alias to use template instance with default allocator
using OffsetPoint =
  carma_v2x_msgs::msg::OffsetPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_POINT__STRUCT_HPP_
