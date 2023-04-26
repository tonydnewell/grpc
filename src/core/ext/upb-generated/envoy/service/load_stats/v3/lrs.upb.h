/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/load_stats/v3/lrs.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_SERVICE_LOAD_STATS_V3_LRS_PROTO_UPB_H_
#define ENVOY_SERVICE_LOAD_STATS_V3_LRS_PROTO_UPB_H_

#include "upb/collections/array_internal.h"
#include "upb/collections/map_gencode_util.h"
#include "upb/message/accessors.h"
#include "upb/message/internal.h"
#include "upb/mini_table/enum_internal.h"
#include "upb/wire/decode.h"
#include "upb/wire/decode_fast.h"
#include "upb/wire/encode.h"

// Must be last. 
#include "upb/port/def.inc"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct envoy_service_load_stats_v3_LoadStatsRequest envoy_service_load_stats_v3_LoadStatsRequest;
typedef struct envoy_service_load_stats_v3_LoadStatsResponse envoy_service_load_stats_v3_LoadStatsResponse;
extern const upb_MiniTable envoy_service_load_stats_v3_LoadStatsRequest_msg_init;
extern const upb_MiniTable envoy_service_load_stats_v3_LoadStatsResponse_msg_init;
struct envoy_config_core_v3_Node;
struct envoy_config_endpoint_v3_ClusterStats;
struct google_protobuf_Duration;
extern const upb_MiniTable envoy_config_core_v3_Node_msg_init;
extern const upb_MiniTable envoy_config_endpoint_v3_ClusterStats_msg_init;
extern const upb_MiniTable google_protobuf_Duration_msg_init;



/* envoy.service.load_stats.v3.LoadStatsRequest */

UPB_INLINE envoy_service_load_stats_v3_LoadStatsRequest* envoy_service_load_stats_v3_LoadStatsRequest_new(upb_Arena* arena) {
  return (envoy_service_load_stats_v3_LoadStatsRequest*)_upb_Message_New(&envoy_service_load_stats_v3_LoadStatsRequest_msg_init, arena);
}
UPB_INLINE envoy_service_load_stats_v3_LoadStatsRequest* envoy_service_load_stats_v3_LoadStatsRequest_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_service_load_stats_v3_LoadStatsRequest* ret = envoy_service_load_stats_v3_LoadStatsRequest_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_service_load_stats_v3_LoadStatsRequest_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_service_load_stats_v3_LoadStatsRequest* envoy_service_load_stats_v3_LoadStatsRequest_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_service_load_stats_v3_LoadStatsRequest* ret = envoy_service_load_stats_v3_LoadStatsRequest_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_service_load_stats_v3_LoadStatsRequest_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_service_load_stats_v3_LoadStatsRequest_serialize(const envoy_service_load_stats_v3_LoadStatsRequest* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_service_load_stats_v3_LoadStatsRequest_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_service_load_stats_v3_LoadStatsRequest_serialize_ex(const envoy_service_load_stats_v3_LoadStatsRequest* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_service_load_stats_v3_LoadStatsRequest_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void envoy_service_load_stats_v3_LoadStatsRequest_clear_node(envoy_service_load_stats_v3_LoadStatsRequest* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const struct envoy_config_core_v3_Node* envoy_service_load_stats_v3_LoadStatsRequest_node(const envoy_service_load_stats_v3_LoadStatsRequest* msg) {
  const struct envoy_config_core_v3_Node* default_val = NULL;
  const struct envoy_config_core_v3_Node* ret;
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE bool envoy_service_load_stats_v3_LoadStatsRequest_has_node(const envoy_service_load_stats_v3_LoadStatsRequest* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return _upb_Message_HasNonExtensionField(msg, &field);
}
UPB_INLINE void envoy_service_load_stats_v3_LoadStatsRequest_clear_cluster_stats(envoy_service_load_stats_v3_LoadStatsRequest* msg) {
  const upb_MiniTableField field = {2, UPB_SIZE(8, 16), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const struct envoy_config_endpoint_v3_ClusterStats* const* envoy_service_load_stats_v3_LoadStatsRequest_cluster_stats(const envoy_service_load_stats_v3_LoadStatsRequest* msg, size_t* size) {
  const upb_MiniTableField field = {2, UPB_SIZE(8, 16), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  const upb_Array* arr = upb_Message_GetArray(msg, &field);
  if (arr) {
    if (size) *size = arr->size;
    return (const struct envoy_config_endpoint_v3_ClusterStats* const*)_upb_array_constptr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE bool envoy_service_load_stats_v3_LoadStatsRequest_has_cluster_stats(const envoy_service_load_stats_v3_LoadStatsRequest* msg) {
  size_t size;
  envoy_service_load_stats_v3_LoadStatsRequest_cluster_stats(msg, &size);
  return size != 0;
}

UPB_INLINE void envoy_service_load_stats_v3_LoadStatsRequest_set_node(envoy_service_load_stats_v3_LoadStatsRequest *msg, struct envoy_config_core_v3_Node* value) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE struct envoy_config_core_v3_Node* envoy_service_load_stats_v3_LoadStatsRequest_mutable_node(envoy_service_load_stats_v3_LoadStatsRequest* msg, upb_Arena* arena) {
  struct envoy_config_core_v3_Node* sub = (struct envoy_config_core_v3_Node*)envoy_service_load_stats_v3_LoadStatsRequest_node(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_Node*)_upb_Message_New(&envoy_config_core_v3_Node_msg_init, arena);
    if (sub) envoy_service_load_stats_v3_LoadStatsRequest_set_node(msg, sub);
  }
  return sub;
}
UPB_INLINE struct envoy_config_endpoint_v3_ClusterStats** envoy_service_load_stats_v3_LoadStatsRequest_mutable_cluster_stats(envoy_service_load_stats_v3_LoadStatsRequest* msg, size_t* size) {
  upb_MiniTableField field = {2, UPB_SIZE(8, 16), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetMutableArray(msg, &field);
  if (arr) {
    if (size) *size = arr->size;
    return (struct envoy_config_endpoint_v3_ClusterStats**)_upb_array_ptr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE struct envoy_config_endpoint_v3_ClusterStats** envoy_service_load_stats_v3_LoadStatsRequest_resize_cluster_stats(envoy_service_load_stats_v3_LoadStatsRequest* msg, size_t size, upb_Arena* arena) {
  upb_MiniTableField field = {2, UPB_SIZE(8, 16), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return (struct envoy_config_endpoint_v3_ClusterStats**)upb_Message_ResizeArray(msg, &field, size, arena);
}
UPB_INLINE struct envoy_config_endpoint_v3_ClusterStats* envoy_service_load_stats_v3_LoadStatsRequest_add_cluster_stats(envoy_service_load_stats_v3_LoadStatsRequest* msg, upb_Arena* arena) {
  upb_MiniTableField field = {2, UPB_SIZE(8, 16), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetOrCreateMutableArray(msg, &field, arena);
  if (!arr || !_upb_Array_ResizeUninitialized(arr, arr->size + 1, arena)) {
    return NULL;
  }
  struct envoy_config_endpoint_v3_ClusterStats* sub = (struct envoy_config_endpoint_v3_ClusterStats*)_upb_Message_New(&envoy_config_endpoint_v3_ClusterStats_msg_init, arena);
  if (!arr || !sub) return NULL;
  _upb_Array_Set(arr, arr->size - 1, &sub, sizeof(sub));
  return sub;
}

/* envoy.service.load_stats.v3.LoadStatsResponse */

UPB_INLINE envoy_service_load_stats_v3_LoadStatsResponse* envoy_service_load_stats_v3_LoadStatsResponse_new(upb_Arena* arena) {
  return (envoy_service_load_stats_v3_LoadStatsResponse*)_upb_Message_New(&envoy_service_load_stats_v3_LoadStatsResponse_msg_init, arena);
}
UPB_INLINE envoy_service_load_stats_v3_LoadStatsResponse* envoy_service_load_stats_v3_LoadStatsResponse_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_service_load_stats_v3_LoadStatsResponse* ret = envoy_service_load_stats_v3_LoadStatsResponse_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_service_load_stats_v3_LoadStatsResponse_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_service_load_stats_v3_LoadStatsResponse* envoy_service_load_stats_v3_LoadStatsResponse_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_service_load_stats_v3_LoadStatsResponse* ret = envoy_service_load_stats_v3_LoadStatsResponse_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_service_load_stats_v3_LoadStatsResponse_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_service_load_stats_v3_LoadStatsResponse_serialize(const envoy_service_load_stats_v3_LoadStatsResponse* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_service_load_stats_v3_LoadStatsResponse_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_service_load_stats_v3_LoadStatsResponse_serialize_ex(const envoy_service_load_stats_v3_LoadStatsResponse* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy_service_load_stats_v3_LoadStatsResponse_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void envoy_service_load_stats_v3_LoadStatsResponse_clear_clusters(envoy_service_load_stats_v3_LoadStatsResponse* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), 0, kUpb_NoSub, 9, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE upb_StringView const* envoy_service_load_stats_v3_LoadStatsResponse_clusters(const envoy_service_load_stats_v3_LoadStatsResponse* msg, size_t* size) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), 0, kUpb_NoSub, 9, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  const upb_Array* arr = upb_Message_GetArray(msg, &field);
  if (arr) {
    if (size) *size = arr->size;
    return (upb_StringView const*)_upb_array_constptr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE bool envoy_service_load_stats_v3_LoadStatsResponse_has_clusters(const envoy_service_load_stats_v3_LoadStatsResponse* msg) {
  size_t size;
  envoy_service_load_stats_v3_LoadStatsResponse_clusters(msg, &size);
  return size != 0;
}
UPB_INLINE void envoy_service_load_stats_v3_LoadStatsResponse_clear_load_reporting_interval(envoy_service_load_stats_v3_LoadStatsResponse* msg) {
  const upb_MiniTableField field = {2, UPB_SIZE(8, 16), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const struct google_protobuf_Duration* envoy_service_load_stats_v3_LoadStatsResponse_load_reporting_interval(const envoy_service_load_stats_v3_LoadStatsResponse* msg) {
  const struct google_protobuf_Duration* default_val = NULL;
  const struct google_protobuf_Duration* ret;
  const upb_MiniTableField field = {2, UPB_SIZE(8, 16), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE bool envoy_service_load_stats_v3_LoadStatsResponse_has_load_reporting_interval(const envoy_service_load_stats_v3_LoadStatsResponse* msg) {
  const upb_MiniTableField field = {2, UPB_SIZE(8, 16), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return _upb_Message_HasNonExtensionField(msg, &field);
}
UPB_INLINE void envoy_service_load_stats_v3_LoadStatsResponse_clear_report_endpoint_granularity(envoy_service_load_stats_v3_LoadStatsResponse* msg) {
  const upb_MiniTableField field = {3, UPB_SIZE(12, 1), 0, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE bool envoy_service_load_stats_v3_LoadStatsResponse_report_endpoint_granularity(const envoy_service_load_stats_v3_LoadStatsResponse* msg) {
  bool default_val = false;
  bool ret;
  const upb_MiniTableField field = {3, UPB_SIZE(12, 1), 0, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE void envoy_service_load_stats_v3_LoadStatsResponse_clear_send_all_clusters(envoy_service_load_stats_v3_LoadStatsResponse* msg) {
  const upb_MiniTableField field = {4, UPB_SIZE(13, 2), 0, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE bool envoy_service_load_stats_v3_LoadStatsResponse_send_all_clusters(const envoy_service_load_stats_v3_LoadStatsResponse* msg) {
  bool default_val = false;
  bool ret;
  const upb_MiniTableField field = {4, UPB_SIZE(13, 2), 0, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}

UPB_INLINE upb_StringView* envoy_service_load_stats_v3_LoadStatsResponse_mutable_clusters(envoy_service_load_stats_v3_LoadStatsResponse* msg, size_t* size) {
  upb_MiniTableField field = {1, UPB_SIZE(4, 8), 0, kUpb_NoSub, 9, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetMutableArray(msg, &field);
  if (arr) {
    if (size) *size = arr->size;
    return (upb_StringView*)_upb_array_ptr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE upb_StringView* envoy_service_load_stats_v3_LoadStatsResponse_resize_clusters(envoy_service_load_stats_v3_LoadStatsResponse* msg, size_t size, upb_Arena* arena) {
  upb_MiniTableField field = {1, UPB_SIZE(4, 8), 0, kUpb_NoSub, 9, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return (upb_StringView*)upb_Message_ResizeArray(msg, &field, size, arena);
}
UPB_INLINE bool envoy_service_load_stats_v3_LoadStatsResponse_add_clusters(envoy_service_load_stats_v3_LoadStatsResponse* msg, upb_StringView val, upb_Arena* arena) {
  upb_MiniTableField field = {1, UPB_SIZE(4, 8), 0, kUpb_NoSub, 9, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetOrCreateMutableArray(msg, &field, arena);
  if (!arr || !_upb_Array_ResizeUninitialized(arr, arr->size + 1, arena)) {
    return false;
  }
  _upb_Array_Set(arr, arr->size - 1, &val, sizeof(val));
  return true;
}
UPB_INLINE void envoy_service_load_stats_v3_LoadStatsResponse_set_load_reporting_interval(envoy_service_load_stats_v3_LoadStatsResponse *msg, struct google_protobuf_Duration* value) {
  const upb_MiniTableField field = {2, UPB_SIZE(8, 16), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE struct google_protobuf_Duration* envoy_service_load_stats_v3_LoadStatsResponse_mutable_load_reporting_interval(envoy_service_load_stats_v3_LoadStatsResponse* msg, upb_Arena* arena) {
  struct google_protobuf_Duration* sub = (struct google_protobuf_Duration*)envoy_service_load_stats_v3_LoadStatsResponse_load_reporting_interval(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Duration*)_upb_Message_New(&google_protobuf_Duration_msg_init, arena);
    if (sub) envoy_service_load_stats_v3_LoadStatsResponse_set_load_reporting_interval(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_service_load_stats_v3_LoadStatsResponse_set_report_endpoint_granularity(envoy_service_load_stats_v3_LoadStatsResponse *msg, bool value) {
  const upb_MiniTableField field = {3, UPB_SIZE(12, 1), 0, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE void envoy_service_load_stats_v3_LoadStatsResponse_set_send_all_clusters(envoy_service_load_stats_v3_LoadStatsResponse *msg, bool value) {
  const upb_MiniTableField field = {4, UPB_SIZE(13, 2), 0, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}

extern const upb_MiniTableFile envoy_service_load_stats_v3_lrs_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* ENVOY_SERVICE_LOAD_STATS_V3_LRS_PROTO_UPB_H_ */
