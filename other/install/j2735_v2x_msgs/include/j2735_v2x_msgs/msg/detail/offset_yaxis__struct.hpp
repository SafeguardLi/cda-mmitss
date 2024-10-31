// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/OffsetYaxis.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__OFFSET_YAXIS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__OFFSET_YAXIS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__OffsetYaxis __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__OffsetYaxis __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OffsetYaxis_
{
  using Type = OffsetYaxis_<ContainerAllocator>;

  explicit OffsetYaxis_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
      this->small = 0;
      this->large = 0;
    }
  }

  explicit OffsetYaxis_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
      this->small = 0;
      this->large = 0;
    }
  }

  // field types and members
  using _choice_type =
    uint8_t;
  _choice_type choice;
  using _small_type =
    int16_t;
  _small_type small;
  using _large_type =
    int16_t;
  _large_type large;

  // setters for named parameter idiom
  Type & set__choice(
    const uint8_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__small(
    const int16_t & _arg)
  {
    this->small = _arg;
    return *this;
  }
  Type & set__large(
    const int16_t & _arg)
  {
    this->large = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SMALL =
    0u;
  static constexpr uint8_t LARGE =
    1u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::OffsetYaxis_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::OffsetYaxis_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::OffsetYaxis_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::OffsetYaxis_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::OffsetYaxis_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::OffsetYaxis_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::OffsetYaxis_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::OffsetYaxis_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::OffsetYaxis_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::OffsetYaxis_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__OffsetYaxis
    std::shared_ptr<j2735_v2x_msgs::msg::OffsetYaxis_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__OffsetYaxis
    std::shared_ptr<j2735_v2x_msgs::msg::OffsetYaxis_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OffsetYaxis_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->small != other.small) {
      return false;
    }
    if (this->large != other.large) {
      return false;
    }
    return true;
  }
  bool operator!=(const OffsetYaxis_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OffsetYaxis_

// alias to use template instance with default allocator
using OffsetYaxis =
  j2735_v2x_msgs::msg::OffsetYaxis_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t OffsetYaxis_<ContainerAllocator>::SMALL;
template<typename ContainerAllocator>
constexpr uint8_t OffsetYaxis_<ContainerAllocator>::LARGE;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OFFSET_YAXIS__STRUCT_HPP_
