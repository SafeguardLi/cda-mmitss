// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/MsgCount.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__MSG_COUNT__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MSG_COUNT__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/msg_count__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MsgCount_msg_cnt
{
public:
  Init_MsgCount_msg_cnt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::MsgCount msg_cnt(::j2735_v2x_msgs::msg::MsgCount::_msg_cnt_type arg)
  {
    msg_.msg_cnt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MsgCount msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::MsgCount>()
{
  return j2735_v2x_msgs::msg::builder::Init_MsgCount_msg_cnt();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MSG_COUNT__BUILDER_HPP_
