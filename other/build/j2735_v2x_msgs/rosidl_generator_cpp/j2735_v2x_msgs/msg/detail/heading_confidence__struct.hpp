// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/HeadingConfidence.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__HEADING_CONFIDENCE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__HEADING_CONFIDENCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__HeadingConfidence __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__HeadingConfidence __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HeadingConfidence_
{
  using Type = HeadingConfidence_<ContainerAllocator>;

  explicit HeadingConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0;
    }
  }

  explicit HeadingConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0;
    }
  }

  // field types and members
  using _confidence_type =
    uint8_t;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__confidence(
    const uint8_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t PREC_10_DEG =
    1u;
  static constexpr uint8_t PREC_05_DEG =
    2u;
  static constexpr uint8_t PREC_01_DEG =
    3u;
  static constexpr uint8_t PREC_001_DEG =
    4u;
  static constexpr uint8_t PREC_0005_DEG =
    5u;
  static constexpr uint8_t PREC_0001_DEG =
    6u;
  static constexpr uint8_t PREC_000125_DEG =
    7u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__HeadingConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__HeadingConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeadingConfidence_ & other) const
  {
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeadingConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeadingConfidence_

// alias to use template instance with default allocator
using HeadingConfidence =
  j2735_v2x_msgs::msg::HeadingConfidence_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t HeadingConfidence_<ContainerAllocator>::UNAVAILABLE;
template<typename ContainerAllocator>
constexpr uint8_t HeadingConfidence_<ContainerAllocator>::PREC_10_DEG;
template<typename ContainerAllocator>
constexpr uint8_t HeadingConfidence_<ContainerAllocator>::PREC_05_DEG;
template<typename ContainerAllocator>
constexpr uint8_t HeadingConfidence_<ContainerAllocator>::PREC_01_DEG;
template<typename ContainerAllocator>
constexpr uint8_t HeadingConfidence_<ContainerAllocator>::PREC_001_DEG;
template<typename ContainerAllocator>
constexpr uint8_t HeadingConfidence_<ContainerAllocator>::PREC_0005_DEG;
template<typename ContainerAllocator>
constexpr uint8_t HeadingConfidence_<ContainerAllocator>::PREC_0001_DEG;
template<typename ContainerAllocator>
constexpr uint8_t HeadingConfidence_<ContainerAllocator>::PREC_000125_DEG;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__HEADING_CONFIDENCE__STRUCT_HPP_
