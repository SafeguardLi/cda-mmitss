#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "can_msgs::can_msgs__rosidl_typesupport_c" for configuration "Release"
set_property(TARGET can_msgs::can_msgs__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(can_msgs::can_msgs__rosidl_typesupport_c PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libcan_msgs__rosidl_typesupport_c.so"
  IMPORTED_SONAME_RELEASE "libcan_msgs__rosidl_typesupport_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS can_msgs::can_msgs__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_can_msgs::can_msgs__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libcan_msgs__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
