// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/TimeOffset.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/time_offset__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeOffset_offset
{
public:
  Init_TimeOffset_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::TimeOffset offset(::j2735_v2x_msgs::msg::TimeOffset::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TimeOffset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::TimeOffset>()
{
  return j2735_v2x_msgs::msg::builder::Init_TimeOffset_offset();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__BUILDER_HPP_
