// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/ITIScodes.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ITI_SCODES__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ITI_SCODES__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/iti_scodes__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ITIScodes_code
{
public:
  Init_ITIScodes_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::ITIScodes code(::j2735_v2x_msgs::msg::ITIScodes::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ITIScodes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::ITIScodes>()
{
  return j2735_v2x_msgs::msg::builder::Init_ITIScodes_code();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ITI_SCODES__BUILDER_HPP_
