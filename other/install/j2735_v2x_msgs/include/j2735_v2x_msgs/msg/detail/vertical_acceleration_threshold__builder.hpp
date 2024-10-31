// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/VerticalAccelerationThreshold.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION_THRESHOLD__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION_THRESHOLD__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/vertical_acceleration_threshold__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VerticalAccelerationThreshold_exceeded_wheels
{
public:
  Init_VerticalAccelerationThreshold_exceeded_wheels()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::VerticalAccelerationThreshold exceeded_wheels(::j2735_v2x_msgs::msg::VerticalAccelerationThreshold::_exceeded_wheels_type arg)
  {
    msg_.exceeded_wheels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VerticalAccelerationThreshold msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::VerticalAccelerationThreshold>()
{
  return j2735_v2x_msgs::msg::builder::Init_VerticalAccelerationThreshold_exceeded_wheels();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION_THRESHOLD__BUILDER_HPP_
