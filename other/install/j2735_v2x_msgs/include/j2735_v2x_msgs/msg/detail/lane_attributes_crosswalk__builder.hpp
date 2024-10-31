// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/LaneAttributesCrosswalk.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_CROSSWALK__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_CROSSWALK__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/lane_attributes_crosswalk__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneAttributesCrosswalk_lane_attributes_crosswalk
{
public:
  Init_LaneAttributesCrosswalk_lane_attributes_crosswalk()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::LaneAttributesCrosswalk lane_attributes_crosswalk(::j2735_v2x_msgs::msg::LaneAttributesCrosswalk::_lane_attributes_crosswalk_type arg)
  {
    msg_.lane_attributes_crosswalk = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneAttributesCrosswalk msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::LaneAttributesCrosswalk>()
{
  return j2735_v2x_msgs::msg::builder::Init_LaneAttributesCrosswalk_lane_attributes_crosswalk();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_CROSSWALK__BUILDER_HPP_
