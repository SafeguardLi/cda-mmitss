// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/PathPrediction.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PATH_PREDICTION__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__PATH_PREDICTION__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/path_prediction__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PathPrediction_confidence
{
public:
  explicit Init_PathPrediction_confidence(::carma_v2x_msgs::msg::PathPrediction & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::PathPrediction confidence(::carma_v2x_msgs::msg::PathPrediction::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PathPrediction msg_;
};

class Init_PathPrediction_radius_of_curvature
{
public:
  Init_PathPrediction_radius_of_curvature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPrediction_confidence radius_of_curvature(::carma_v2x_msgs::msg::PathPrediction::_radius_of_curvature_type arg)
  {
    msg_.radius_of_curvature = std::move(arg);
    return Init_PathPrediction_confidence(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PathPrediction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::PathPrediction>()
{
  return carma_v2x_msgs::msg::builder::Init_PathPrediction_radius_of_curvature();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PATH_PREDICTION__BUILDER_HPP_
