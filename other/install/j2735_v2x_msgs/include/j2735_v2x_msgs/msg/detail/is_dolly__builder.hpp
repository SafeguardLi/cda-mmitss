// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/IsDolly.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__IS_DOLLY__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__IS_DOLLY__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/is_dolly__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_IsDolly_is_dolly
{
public:
  Init_IsDolly_is_dolly()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::IsDolly is_dolly(::j2735_v2x_msgs::msg::IsDolly::_is_dolly_type arg)
  {
    msg_.is_dolly = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IsDolly msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::IsDolly>()
{
  return j2735_v2x_msgs::msg::builder::Init_IsDolly_is_dolly();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__IS_DOLLY__BUILDER_HPP_
