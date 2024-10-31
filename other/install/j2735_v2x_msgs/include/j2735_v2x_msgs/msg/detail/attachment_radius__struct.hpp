// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/AttachmentRadius.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ATTACHMENT_RADIUS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ATTACHMENT_RADIUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__AttachmentRadius __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__AttachmentRadius __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AttachmentRadius_
{
  using Type = AttachmentRadius_<ContainerAllocator>;

  explicit AttachmentRadius_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->attachment_radius = 0;
    }
  }

  explicit AttachmentRadius_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->attachment_radius = 0;
    }
  }

  // field types and members
  using _attachment_radius_type =
    uint8_t;
  _attachment_radius_type attachment_radius;

  // setters for named parameter idiom
  Type & set__attachment_radius(
    const uint8_t & _arg)
  {
    this->attachment_radius = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ATTACHMENT_RADIUS_MAX =
    200u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__AttachmentRadius
    std::shared_ptr<j2735_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__AttachmentRadius
    std::shared_ptr<j2735_v2x_msgs::msg::AttachmentRadius_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttachmentRadius_ & other) const
  {
    if (this->attachment_radius != other.attachment_radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttachmentRadius_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttachmentRadius_

// alias to use template instance with default allocator
using AttachmentRadius =
  j2735_v2x_msgs::msg::AttachmentRadius_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t AttachmentRadius_<ContainerAllocator>::ATTACHMENT_RADIUS_MAX;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ATTACHMENT_RADIUS__STRUCT_HPP_
