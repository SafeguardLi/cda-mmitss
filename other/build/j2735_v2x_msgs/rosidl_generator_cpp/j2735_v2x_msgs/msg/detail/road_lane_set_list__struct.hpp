// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/RoadLaneSetList.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ROAD_LANE_SET_LIST__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ROAD_LANE_SET_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'road_lane_set_list'
#include "j2735_v2x_msgs/msg/detail/generic_lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__RoadLaneSetList __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__RoadLaneSetList __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadLaneSetList_
{
  using Type = RoadLaneSetList_<ContainerAllocator>;

  explicit RoadLaneSetList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RoadLaneSetList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _road_lane_set_list_type =
    std::vector<j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator>>::other>;
  _road_lane_set_list_type road_lane_set_list;

  // setters for named parameter idiom
  Type & set__road_lane_set_list(
    const std::vector<j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator>>::other> & _arg)
  {
    this->road_lane_set_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::RoadLaneSetList_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::RoadLaneSetList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RoadLaneSetList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RoadLaneSetList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RoadLaneSetList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RoadLaneSetList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RoadLaneSetList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RoadLaneSetList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RoadLaneSetList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RoadLaneSetList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__RoadLaneSetList
    std::shared_ptr<j2735_v2x_msgs::msg::RoadLaneSetList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__RoadLaneSetList
    std::shared_ptr<j2735_v2x_msgs::msg::RoadLaneSetList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadLaneSetList_ & other) const
  {
    if (this->road_lane_set_list != other.road_lane_set_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadLaneSetList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadLaneSetList_

// alias to use template instance with default allocator
using RoadLaneSetList =
  j2735_v2x_msgs::msg::RoadLaneSetList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ROAD_LANE_SET_LIST__STRUCT_HPP_
