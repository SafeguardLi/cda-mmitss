// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/ResponseType.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESPONSE_TYPE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__RESPONSE_TYPE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__ResponseType __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__ResponseType __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ResponseType_
{
  using Type = ResponseType_<ContainerAllocator>;

  explicit ResponseType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response_type = 0;
    }
  }

  explicit ResponseType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response_type = 0;
    }
  }

  // field types and members
  using _response_type_type =
    uint8_t;
  _response_type_type response_type;

  // setters for named parameter idiom
  Type & set__response_type(
    const uint8_t & _arg)
  {
    this->response_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NOT_IN_USE_OR_NOT_EQUIPPED =
    0u;
  static constexpr uint8_t EMERGENCY =
    1u;
  static constexpr uint8_t NON_EMERGENCY =
    2u;
  static constexpr uint8_t PURSUIT =
    3u;
  static constexpr uint8_t STATIONARY =
    4u;
  static constexpr uint8_t SLOW_MOVING =
    5u;
  static constexpr uint8_t STOP_AND_GO_MOVEMENT =
    6u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::ResponseType_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::ResponseType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ResponseType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ResponseType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ResponseType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ResponseType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ResponseType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ResponseType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ResponseType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ResponseType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__ResponseType
    std::shared_ptr<j2735_v2x_msgs::msg::ResponseType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__ResponseType
    std::shared_ptr<j2735_v2x_msgs::msg::ResponseType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResponseType_ & other) const
  {
    if (this->response_type != other.response_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResponseType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResponseType_

// alias to use template instance with default allocator
using ResponseType =
  j2735_v2x_msgs::msg::ResponseType_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ResponseType_<ContainerAllocator>::NOT_IN_USE_OR_NOT_EQUIPPED;
template<typename ContainerAllocator>
constexpr uint8_t ResponseType_<ContainerAllocator>::EMERGENCY;
template<typename ContainerAllocator>
constexpr uint8_t ResponseType_<ContainerAllocator>::NON_EMERGENCY;
template<typename ContainerAllocator>
constexpr uint8_t ResponseType_<ContainerAllocator>::PURSUIT;
template<typename ContainerAllocator>
constexpr uint8_t ResponseType_<ContainerAllocator>::STATIONARY;
template<typename ContainerAllocator>
constexpr uint8_t ResponseType_<ContainerAllocator>::SLOW_MOVING;
template<typename ContainerAllocator>
constexpr uint8_t ResponseType_<ContainerAllocator>::STOP_AND_GO_MOVEMENT;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESPONSE_TYPE__STRUCT_HPP_
