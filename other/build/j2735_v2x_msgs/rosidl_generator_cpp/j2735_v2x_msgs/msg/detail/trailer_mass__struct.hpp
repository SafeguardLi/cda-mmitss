// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TrailerMass.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_MASS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_MASS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TrailerMass __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TrailerMass __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrailerMass_
{
  using Type = TrailerMass_<ContainerAllocator>;

  explicit TrailerMass_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trailer_mass = 0;
    }
  }

  explicit TrailerMass_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trailer_mass = 0;
    }
  }

  // field types and members
  using _trailer_mass_type =
    uint8_t;
  _trailer_mass_type trailer_mass;

  // setters for named parameter idiom
  Type & set__trailer_mass(
    const uint8_t & _arg)
  {
    this->trailer_mass = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TRAILER_MASS_UNKNOWN =
    0u;
  static constexpr uint8_t TRAILER_MASS_MAX =
    255u;
  static constexpr uint8_t TRAILER_MASS_MIN =
    1u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TrailerMass_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TrailerMass_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerMass_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerMass_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrailerMass_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrailerMass_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrailerMass_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrailerMass_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrailerMass_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrailerMass_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrailerMass
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerMass_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrailerMass
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerMass_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrailerMass_ & other) const
  {
    if (this->trailer_mass != other.trailer_mass) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrailerMass_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrailerMass_

// alias to use template instance with default allocator
using TrailerMass =
  j2735_v2x_msgs::msg::TrailerMass_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t TrailerMass_<ContainerAllocator>::TRAILER_MASS_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t TrailerMass_<ContainerAllocator>::TRAILER_MASS_MAX;
template<typename ContainerAllocator>
constexpr uint8_t TrailerMass_<ContainerAllocator>::TRAILER_MASS_MIN;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_MASS__STRUCT_HPP_
