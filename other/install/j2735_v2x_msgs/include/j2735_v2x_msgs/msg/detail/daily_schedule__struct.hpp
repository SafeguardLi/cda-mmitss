// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/DailySchedule.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__DailySchedule __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__DailySchedule __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DailySchedule_
{
  using Type = DailySchedule_<ContainerAllocator>;

  explicit DailySchedule_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->begin = 0;
      this->duration = 0;
    }
  }

  explicit DailySchedule_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->begin = 0;
      this->duration = 0;
    }
  }

  // field types and members
  using _begin_type =
    uint16_t;
  _begin_type begin;
  using _duration_type =
    uint16_t;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__begin(
    const uint16_t & _arg)
  {
    this->begin = _arg;
    return *this;
  }
  Type & set__duration(
    const uint16_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::DailySchedule_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::DailySchedule_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DailySchedule_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DailySchedule_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DailySchedule_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DailySchedule_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DailySchedule_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DailySchedule_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DailySchedule_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DailySchedule_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__DailySchedule
    std::shared_ptr<j2735_v2x_msgs::msg::DailySchedule_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__DailySchedule
    std::shared_ptr<j2735_v2x_msgs::msg::DailySchedule_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DailySchedule_ & other) const
  {
    if (this->begin != other.begin) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const DailySchedule_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DailySchedule_

// alias to use template instance with default allocator
using DailySchedule =
  j2735_v2x_msgs::msg::DailySchedule_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__STRUCT_HPP_
