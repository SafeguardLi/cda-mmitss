// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/HeadingConfidence.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__HEADING_CONFIDENCE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__HEADING_CONFIDENCE__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/heading_confidence__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_HeadingConfidence_confidence
{
public:
  Init_HeadingConfidence_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::HeadingConfidence confidence(::j2735_v2x_msgs::msg::HeadingConfidence::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::HeadingConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::HeadingConfidence>()
{
  return j2735_v2x_msgs::msg::builder::Init_HeadingConfidence_confidence();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__HEADING_CONFIDENCE__BUILDER_HPP_
