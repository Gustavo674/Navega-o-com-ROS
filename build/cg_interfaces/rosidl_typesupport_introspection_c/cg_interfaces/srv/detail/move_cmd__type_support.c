// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cg_interfaces:srv/MoveCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cg_interfaces/srv/detail/move_cmd__rosidl_typesupport_introspection_c.h"
#include "cg_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cg_interfaces/srv/detail/move_cmd__functions.h"
#include "cg_interfaces/srv/detail/move_cmd__struct.h"


// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cg_interfaces__srv__MoveCmd_Request__rosidl_typesupport_introspection_c__MoveCmd_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cg_interfaces__srv__MoveCmd_Request__init(message_memory);
}

void cg_interfaces__srv__MoveCmd_Request__rosidl_typesupport_introspection_c__MoveCmd_Request_fini_function(void * message_memory)
{
  cg_interfaces__srv__MoveCmd_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cg_interfaces__srv__MoveCmd_Request__rosidl_typesupport_introspection_c__MoveCmd_Request_message_member_array[1] = {
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cg_interfaces__srv__MoveCmd_Request, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cg_interfaces__srv__MoveCmd_Request__rosidl_typesupport_introspection_c__MoveCmd_Request_message_members = {
  "cg_interfaces__srv",  // message namespace
  "MoveCmd_Request",  // message name
  1,  // number of fields
  sizeof(cg_interfaces__srv__MoveCmd_Request),
  cg_interfaces__srv__MoveCmd_Request__rosidl_typesupport_introspection_c__MoveCmd_Request_message_member_array,  // message members
  cg_interfaces__srv__MoveCmd_Request__rosidl_typesupport_introspection_c__MoveCmd_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cg_interfaces__srv__MoveCmd_Request__rosidl_typesupport_introspection_c__MoveCmd_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cg_interfaces__srv__MoveCmd_Request__rosidl_typesupport_introspection_c__MoveCmd_Request_message_type_support_handle = {
  0,
  &cg_interfaces__srv__MoveCmd_Request__rosidl_typesupport_introspection_c__MoveCmd_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cg_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cg_interfaces, srv, MoveCmd_Request)() {
  if (!cg_interfaces__srv__MoveCmd_Request__rosidl_typesupport_introspection_c__MoveCmd_Request_message_type_support_handle.typesupport_identifier) {
    cg_interfaces__srv__MoveCmd_Request__rosidl_typesupport_introspection_c__MoveCmd_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cg_interfaces__srv__MoveCmd_Request__rosidl_typesupport_introspection_c__MoveCmd_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cg_interfaces/srv/detail/move_cmd__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cg_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cg_interfaces/srv/detail/move_cmd__functions.h"
// already included above
// #include "cg_interfaces/srv/detail/move_cmd__struct.h"


// Include directives for member types
// Member `left`
// Member `down`
// Member `up`
// Member `right`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__MoveCmd_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cg_interfaces__srv__MoveCmd_Response__init(message_memory);
}

void cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__MoveCmd_Response_fini_function(void * message_memory)
{
  cg_interfaces__srv__MoveCmd_Response__fini(message_memory);
}

size_t cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__size_function__MoveCmd_Response__robot_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__get_const_function__MoveCmd_Response__robot_pos(
  const void * untyped_member, size_t index)
{
  const int8_t * member =
    (const int8_t *)(untyped_member);
  return &member[index];
}

void * cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__get_function__MoveCmd_Response__robot_pos(
  void * untyped_member, size_t index)
{
  int8_t * member =
    (int8_t *)(untyped_member);
  return &member[index];
}

void cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__fetch_function__MoveCmd_Response__robot_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__get_const_function__MoveCmd_Response__robot_pos(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__assign_function__MoveCmd_Response__robot_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__get_function__MoveCmd_Response__robot_pos(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

size_t cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__size_function__MoveCmd_Response__target_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__get_const_function__MoveCmd_Response__target_pos(
  const void * untyped_member, size_t index)
{
  const int8_t * member =
    (const int8_t *)(untyped_member);
  return &member[index];
}

void * cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__get_function__MoveCmd_Response__target_pos(
  void * untyped_member, size_t index)
{
  int8_t * member =
    (int8_t *)(untyped_member);
  return &member[index];
}

void cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__fetch_function__MoveCmd_Response__target_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__get_const_function__MoveCmd_Response__target_pos(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__assign_function__MoveCmd_Response__target_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__get_function__MoveCmd_Response__target_pos(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__MoveCmd_Response_message_member_array[7] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cg_interfaces__srv__MoveCmd_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(cg_interfaces__srv__MoveCmd_Response, robot_pos),  // bytes offset in struct
    NULL,  // default value
    cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__size_function__MoveCmd_Response__robot_pos,  // size() function pointer
    cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__get_const_function__MoveCmd_Response__robot_pos,  // get_const(index) function pointer
    cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__get_function__MoveCmd_Response__robot_pos,  // get(index) function pointer
    cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__fetch_function__MoveCmd_Response__robot_pos,  // fetch(index, &value) function pointer
    cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__assign_function__MoveCmd_Response__robot_pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(cg_interfaces__srv__MoveCmd_Response, target_pos),  // bytes offset in struct
    NULL,  // default value
    cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__size_function__MoveCmd_Response__target_pos,  // size() function pointer
    cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__get_const_function__MoveCmd_Response__target_pos,  // get_const(index) function pointer
    cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__get_function__MoveCmd_Response__target_pos,  // get(index) function pointer
    cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__fetch_function__MoveCmd_Response__target_pos,  // fetch(index, &value) function pointer
    cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__assign_function__MoveCmd_Response__target_pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cg_interfaces__srv__MoveCmd_Response, left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "down",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cg_interfaces__srv__MoveCmd_Response, down),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "up",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cg_interfaces__srv__MoveCmd_Response, up),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cg_interfaces__srv__MoveCmd_Response, right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__MoveCmd_Response_message_members = {
  "cg_interfaces__srv",  // message namespace
  "MoveCmd_Response",  // message name
  7,  // number of fields
  sizeof(cg_interfaces__srv__MoveCmd_Response),
  cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__MoveCmd_Response_message_member_array,  // message members
  cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__MoveCmd_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__MoveCmd_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__MoveCmd_Response_message_type_support_handle = {
  0,
  &cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__MoveCmd_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cg_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cg_interfaces, srv, MoveCmd_Response)() {
  if (!cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__MoveCmd_Response_message_type_support_handle.typesupport_identifier) {
    cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__MoveCmd_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cg_interfaces__srv__MoveCmd_Response__rosidl_typesupport_introspection_c__MoveCmd_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cg_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cg_interfaces/srv/detail/move_cmd__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cg_interfaces__srv__detail__move_cmd__rosidl_typesupport_introspection_c__MoveCmd_service_members = {
  "cg_interfaces__srv",  // service namespace
  "MoveCmd",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cg_interfaces__srv__detail__move_cmd__rosidl_typesupport_introspection_c__MoveCmd_Request_message_type_support_handle,
  NULL  // response message
  // cg_interfaces__srv__detail__move_cmd__rosidl_typesupport_introspection_c__MoveCmd_Response_message_type_support_handle
};

static rosidl_service_type_support_t cg_interfaces__srv__detail__move_cmd__rosidl_typesupport_introspection_c__MoveCmd_service_type_support_handle = {
  0,
  &cg_interfaces__srv__detail__move_cmd__rosidl_typesupport_introspection_c__MoveCmd_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cg_interfaces, srv, MoveCmd_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cg_interfaces, srv, MoveCmd_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cg_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cg_interfaces, srv, MoveCmd)() {
  if (!cg_interfaces__srv__detail__move_cmd__rosidl_typesupport_introspection_c__MoveCmd_service_type_support_handle.typesupport_identifier) {
    cg_interfaces__srv__detail__move_cmd__rosidl_typesupport_introspection_c__MoveCmd_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cg_interfaces__srv__detail__move_cmd__rosidl_typesupport_introspection_c__MoveCmd_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cg_interfaces, srv, MoveCmd_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cg_interfaces, srv, MoveCmd_Response)()->data;
  }

  return &cg_interfaces__srv__detail__move_cmd__rosidl_typesupport_introspection_c__MoveCmd_service_type_support_handle;
}
