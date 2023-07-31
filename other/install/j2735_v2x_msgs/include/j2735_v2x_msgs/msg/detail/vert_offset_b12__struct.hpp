// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/VertOffsetB12.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B12__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B12__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__VertOffsetB12 __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__VertOffsetB12 __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VertOffsetB12_
{
  using Type = VertOffsetB12_<ContainerAllocator>;

  explicit VertOffsetB12_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0;
    }
  }

  explicit VertOffsetB12_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0;
    }
  }

  // field types and members
  using _offset_type =
    int16_t;
  _offset_type offset;

  // setters for named parameter idiom
  Type & set__offset(
    const int16_t & _arg)
  {
    this->offset = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t MIN =
    -2047;
  static constexpr int16_t MAX =
    2047;
  static constexpr int16_t UNAVAILABLE =
    -2048;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::VertOffsetB12_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::VertOffsetB12_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VertOffsetB12_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VertOffsetB12_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VertOffsetB12_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VertOffsetB12_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VertOffsetB12_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VertOffsetB12_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VertOffsetB12_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VertOffsetB12_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__VertOffsetB12
    std::shared_ptr<j2735_v2x_msgs::msg::VertOffsetB12_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__VertOffsetB12
    std::shared_ptr<j2735_v2x_msgs::msg::VertOffsetB12_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VertOffsetB12_ & other) const
  {
    if (this->offset != other.offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const VertOffsetB12_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VertOffsetB12_

// alias to use template instance with default allocator
using VertOffsetB12 =
  j2735_v2x_msgs::msg::VertOffsetB12_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int16_t VertOffsetB12_<ContainerAllocator>::MIN;
template<typename ContainerAllocator>
constexpr int16_t VertOffsetB12_<ContainerAllocator>::MAX;
template<typename ContainerAllocator>
constexpr int16_t VertOffsetB12_<ContainerAllocator>::UNAVAILABLE;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B12__STRUCT_HPP_
