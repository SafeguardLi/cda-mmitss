// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/VertOffsetB12.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B12__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B12__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/vert_offset_b12__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VertOffsetB12_offset
{
public:
  Init_VertOffsetB12_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::VertOffsetB12 offset(::j2735_v2x_msgs::msg::VertOffsetB12::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VertOffsetB12 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::VertOffsetB12>()
{
  return j2735_v2x_msgs::msg::builder::Init_VertOffsetB12_offset();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B12__BUILDER_HPP_
