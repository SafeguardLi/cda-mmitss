// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/SpeedConfidence.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPEED_CONFIDENCE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPEED_CONFIDENCE__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/speed_confidence__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_SpeedConfidence_speed_confidence
{
public:
  Init_SpeedConfidence_speed_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::SpeedConfidence speed_confidence(::j2735_v2x_msgs::msg::SpeedConfidence::_speed_confidence_type arg)
  {
    msg_.speed_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SpeedConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::SpeedConfidence>()
{
  return j2735_v2x_msgs::msg::builder::Init_SpeedConfidence_speed_confidence();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPEED_CONFIDENCE__BUILDER_HPP_
