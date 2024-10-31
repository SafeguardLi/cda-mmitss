// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/ObstacleDistance.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__ObstacleDistance __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__ObstacleDistance __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleDistance_
{
  using Type = ObstacleDistance_<ContainerAllocator>;

  explicit ObstacleDistance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0;
    }
  }

  explicit ObstacleDistance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0;
    }
  }

  // field types and members
  using _distance_type =
    uint16_t;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__distance(
    const uint16_t & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t DISTANCE_MIN =
    0u;
  static constexpr uint16_t DISTANCE_MAX =
    32767u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::ObstacleDistance_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::ObstacleDistance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ObstacleDistance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ObstacleDistance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ObstacleDistance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ObstacleDistance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ObstacleDistance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ObstacleDistance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ObstacleDistance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ObstacleDistance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__ObstacleDistance
    std::shared_ptr<j2735_v2x_msgs::msg::ObstacleDistance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__ObstacleDistance
    std::shared_ptr<j2735_v2x_msgs::msg::ObstacleDistance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleDistance_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleDistance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleDistance_

// alias to use template instance with default allocator
using ObstacleDistance =
  j2735_v2x_msgs::msg::ObstacleDistance_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t ObstacleDistance_<ContainerAllocator>::DISTANCE_MIN;
template<typename ContainerAllocator>
constexpr uint16_t ObstacleDistance_<ContainerAllocator>::DISTANCE_MAX;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_HPP_
