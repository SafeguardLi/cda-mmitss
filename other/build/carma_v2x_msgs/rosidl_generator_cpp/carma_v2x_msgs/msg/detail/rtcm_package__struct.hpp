// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/RTCMPackage.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__RTCM_PACKAGE__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__RTCM_PACKAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'rtcm_header'
#include "carma_v2x_msgs/msg/detail/rtcm_header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__RTCMPackage __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__RTCMPackage __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RTCMPackage_
{
  using Type = RTCMPackage_<ContainerAllocator>;

  explicit RTCMPackage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rtcm_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit RTCMPackage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rtcm_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _rtcm_header_type =
    carma_v2x_msgs::msg::RTCMHeader_<ContainerAllocator>;
  _rtcm_header_type rtcm_header;
  using _messages_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _messages_type messages;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__rtcm_header(
    const carma_v2x_msgs::msg::RTCMHeader_<ContainerAllocator> & _arg)
  {
    this->rtcm_header = _arg;
    return *this;
  }
  Type & set__messages(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->messages = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t HAS_RTCM_HEADER =
    1u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::RTCMPackage_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::RTCMPackage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::RTCMPackage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::RTCMPackage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::RTCMPackage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::RTCMPackage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::RTCMPackage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::RTCMPackage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::RTCMPackage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::RTCMPackage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__RTCMPackage
    std::shared_ptr<carma_v2x_msgs::msg::RTCMPackage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__RTCMPackage
    std::shared_ptr<carma_v2x_msgs::msg::RTCMPackage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RTCMPackage_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->rtcm_header != other.rtcm_header) {
      return false;
    }
    if (this->messages != other.messages) {
      return false;
    }
    return true;
  }
  bool operator!=(const RTCMPackage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RTCMPackage_

// alias to use template instance with default allocator
using RTCMPackage =
  carma_v2x_msgs::msg::RTCMPackage_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t RTCMPackage_<ContainerAllocator>::HAS_RTCM_HEADER;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__RTCM_PACKAGE__STRUCT_HPP_
