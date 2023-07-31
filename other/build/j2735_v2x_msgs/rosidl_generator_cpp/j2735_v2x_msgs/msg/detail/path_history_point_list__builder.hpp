// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PathHistoryPointList.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT_LIST__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT_LIST__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/path_history_point_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PathHistoryPointList_points
{
public:
  Init_PathHistoryPointList_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::PathHistoryPointList points(::j2735_v2x_msgs::msg::PathHistoryPointList::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PathHistoryPointList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PathHistoryPointList>()
{
  return j2735_v2x_msgs::msg::builder::Init_PathHistoryPointList_points();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT_LIST__BUILDER_HPP_
