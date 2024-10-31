// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/ObstacleDistance.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/obstacle_distance__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleDistance_distance
{
public:
  Init_ObstacleDistance_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::ObstacleDistance distance(::j2735_v2x_msgs::msg::ObstacleDistance::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ObstacleDistance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::ObstacleDistance>()
{
  return j2735_v2x_msgs::msg::builder::Init_ObstacleDistance_distance();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__BUILDER_HPP_
