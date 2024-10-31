// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/FuelType.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__FUEL_TYPE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__FUEL_TYPE__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/fuel_type__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_FuelType_fuel_type
{
public:
  Init_FuelType_fuel_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::FuelType fuel_type(::j2735_v2x_msgs::msg::FuelType::_fuel_type_type arg)
  {
    msg_.fuel_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::FuelType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::FuelType>()
{
  return j2735_v2x_msgs::msg::builder::Init_FuelType_fuel_type();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__FUEL_TYPE__BUILDER_HPP_
