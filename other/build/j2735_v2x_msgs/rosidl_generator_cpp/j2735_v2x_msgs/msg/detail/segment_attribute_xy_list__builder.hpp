// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/SegmentAttributeXYList.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY_LIST__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY_LIST__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_SegmentAttributeXYList_segment_attribute_xy
{
public:
  Init_SegmentAttributeXYList_segment_attribute_xy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::SegmentAttributeXYList segment_attribute_xy(::j2735_v2x_msgs::msg::SegmentAttributeXYList::_segment_attribute_xy_type arg)
  {
    msg_.segment_attribute_xy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SegmentAttributeXYList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::SegmentAttributeXYList>()
{
  return j2735_v2x_msgs::msg::builder::Init_SegmentAttributeXYList_segment_attribute_xy();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY_LIST__BUILDER_HPP_
