// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tutorial_interfaces:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tutorial_interfaces/msg/detail/custom_message__rosidl_typesupport_introspection_c.h"
#include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tutorial_interfaces/msg/detail/custom_message__functions.h"
#include "tutorial_interfaces/msg/detail/custom_message__struct.h"


// Include directives for member types
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tutorial_interfaces__msg__CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tutorial_interfaces__msg__CustomMessage__init(message_memory);
}

void tutorial_interfaces__msg__CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_fini_function(void * message_memory)
{
  tutorial_interfaces__msg__CustomMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tutorial_interfaces__msg__CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_member_array[3] = {
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__msg__CustomMessage, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__msg__CustomMessage, number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__msg__CustomMessage, flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tutorial_interfaces__msg__CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_members = {
  "tutorial_interfaces__msg",  // message namespace
  "CustomMessage",  // message name
  3,  // number of fields
  sizeof(tutorial_interfaces__msg__CustomMessage),
  tutorial_interfaces__msg__CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_member_array,  // message members
  tutorial_interfaces__msg__CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  tutorial_interfaces__msg__CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tutorial_interfaces__msg__CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_type_support_handle = {
  0,
  &tutorial_interfaces__msg__CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, msg, CustomMessage)() {
  if (!tutorial_interfaces__msg__CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_type_support_handle.typesupport_identifier) {
    tutorial_interfaces__msg__CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tutorial_interfaces__msg__CustomMessage__rosidl_typesupport_introspection_c__CustomMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
