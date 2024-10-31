// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/NTCIPEssPrecipRate.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_RATE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_RATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssPrecipRate __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssPrecipRate __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NTCIPEssPrecipRate_
{
  using Type = NTCIPEssPrecipRate_<ContainerAllocator>;

  explicit NTCIPEssPrecipRate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->precip_rate = 0;
    }
  }

  explicit NTCIPEssPrecipRate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->precip_rate = 0;
    }
  }

  // field types and members
  using _precip_rate_type =
    uint16_t;
  _precip_rate_type precip_rate;

  // setters for named parameter idiom
  Type & set__precip_rate(
    const uint16_t & _arg)
  {
    this->precip_rate = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t ERROR_OR_MISSING_VALUE =
    65535u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::NTCIPEssPrecipRate_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::NTCIPEssPrecipRate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipRate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipRate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NTCIPEssPrecipRate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipRate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NTCIPEssPrecipRate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipRate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipRate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipRate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssPrecipRate
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipRate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssPrecipRate
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipRate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NTCIPEssPrecipRate_ & other) const
  {
    if (this->precip_rate != other.precip_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const NTCIPEssPrecipRate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NTCIPEssPrecipRate_

// alias to use template instance with default allocator
using NTCIPEssPrecipRate =
  j2735_v2x_msgs::msg::NTCIPEssPrecipRate_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t NTCIPEssPrecipRate_<ContainerAllocator>::ERROR_OR_MISSING_VALUE;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_RATE__STRUCT_HPP_
