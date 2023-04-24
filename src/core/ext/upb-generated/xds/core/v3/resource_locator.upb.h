/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/core/v3/resource_locator.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef XDS_CORE_V3_RESOURCE_LOCATOR_PROTO_UPB_H_
#define XDS_CORE_V3_RESOURCE_LOCATOR_PROTO_UPB_H_

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

typedef struct xds_core_v3_ResourceLocator xds_core_v3_ResourceLocator;
typedef struct xds_core_v3_ResourceLocator_Directive xds_core_v3_ResourceLocator_Directive;
extern const upb_MiniTable xds_core_v3_ResourceLocator_msg_init;
extern const upb_MiniTable xds_core_v3_ResourceLocator_Directive_msg_init;
struct xds_core_v3_ContextParams;
extern const upb_MiniTable xds_core_v3_ContextParams_msg_init;

typedef enum {
  xds_core_v3_ResourceLocator_XDSTP = 0,
  xds_core_v3_ResourceLocator_HTTP = 1,
  xds_core_v3_ResourceLocator_FILE = 2
} xds_core_v3_ResourceLocator_Scheme;



/* xds.core.v3.ResourceLocator */

UPB_INLINE xds_core_v3_ResourceLocator* xds_core_v3_ResourceLocator_new(upb_Arena* arena) {
  return (xds_core_v3_ResourceLocator*)_upb_Message_New(&xds_core_v3_ResourceLocator_msg_init, arena);
}
UPB_INLINE xds_core_v3_ResourceLocator* xds_core_v3_ResourceLocator_parse(const char* buf, size_t size, upb_Arena* arena) {
  xds_core_v3_ResourceLocator* ret = xds_core_v3_ResourceLocator_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_core_v3_ResourceLocator_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE xds_core_v3_ResourceLocator* xds_core_v3_ResourceLocator_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  xds_core_v3_ResourceLocator* ret = xds_core_v3_ResourceLocator_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_core_v3_ResourceLocator_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* xds_core_v3_ResourceLocator_serialize(const xds_core_v3_ResourceLocator* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_core_v3_ResourceLocator_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* xds_core_v3_ResourceLocator_serialize_ex(const xds_core_v3_ResourceLocator* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_core_v3_ResourceLocator_msg_init, options, arena, &ptr, len);
  return ptr;
}
typedef enum {
  xds_core_v3_ResourceLocator_context_param_specifier_exact_context = 5,
  xds_core_v3_ResourceLocator_context_param_specifier_NOT_SET = 0
} xds_core_v3_ResourceLocator_context_param_specifier_oneofcases;
UPB_INLINE xds_core_v3_ResourceLocator_context_param_specifier_oneofcases xds_core_v3_ResourceLocator_context_param_specifier_case(const xds_core_v3_ResourceLocator* msg) {
  const upb_MiniTableField field = {5, UPB_SIZE(12, 64), -5, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return (xds_core_v3_ResourceLocator_context_param_specifier_oneofcases)upb_Message_WhichOneofFieldNumber(msg, &field);
}
UPB_INLINE void xds_core_v3_ResourceLocator_clear_scheme(xds_core_v3_ResourceLocator* msg) {
  const upb_MiniTableField field = {1, 0, 0, kUpb_NoSub, 5, kUpb_FieldMode_Scalar | kUpb_LabelFlags_IsAlternate | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE int32_t xds_core_v3_ResourceLocator_scheme(const xds_core_v3_ResourceLocator* msg) {
  int32_t default_val = 0;
  int32_t ret;
  const upb_MiniTableField field = {1, 0, 0, kUpb_NoSub, 5, kUpb_FieldMode_Scalar | kUpb_LabelFlags_IsAlternate | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE void xds_core_v3_ResourceLocator_clear_id(xds_core_v3_ResourceLocator* msg) {
  const upb_MiniTableField field = {2, UPB_SIZE(16, 8), 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE upb_StringView xds_core_v3_ResourceLocator_id(const xds_core_v3_ResourceLocator* msg) {
  upb_StringView default_val = upb_StringView_FromString("");
  upb_StringView ret;
  const upb_MiniTableField field = {2, UPB_SIZE(16, 8), 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE void xds_core_v3_ResourceLocator_clear_authority(xds_core_v3_ResourceLocator* msg) {
  const upb_MiniTableField field = {3, 24, 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE upb_StringView xds_core_v3_ResourceLocator_authority(const xds_core_v3_ResourceLocator* msg) {
  upb_StringView default_val = upb_StringView_FromString("");
  upb_StringView ret;
  const upb_MiniTableField field = {3, 24, 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE void xds_core_v3_ResourceLocator_clear_resource_type(xds_core_v3_ResourceLocator* msg) {
  const upb_MiniTableField field = {4, UPB_SIZE(32, 40), 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE upb_StringView xds_core_v3_ResourceLocator_resource_type(const xds_core_v3_ResourceLocator* msg) {
  upb_StringView default_val = upb_StringView_FromString("");
  upb_StringView ret;
  const upb_MiniTableField field = {4, UPB_SIZE(32, 40), 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE void xds_core_v3_ResourceLocator_clear_exact_context(xds_core_v3_ResourceLocator* msg) {
  const upb_MiniTableField field = {5, UPB_SIZE(12, 64), -5, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const struct xds_core_v3_ContextParams* xds_core_v3_ResourceLocator_exact_context(const xds_core_v3_ResourceLocator* msg) {
  const struct xds_core_v3_ContextParams* default_val = NULL;
  const struct xds_core_v3_ContextParams* ret;
  const upb_MiniTableField field = {5, UPB_SIZE(12, 64), -5, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE bool xds_core_v3_ResourceLocator_has_exact_context(const xds_core_v3_ResourceLocator* msg) {
  const upb_MiniTableField field = {5, UPB_SIZE(12, 64), -5, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return _upb_Message_HasNonExtensionField(msg, &field);
}
UPB_INLINE void xds_core_v3_ResourceLocator_clear_directives(xds_core_v3_ResourceLocator* msg) {
  const upb_MiniTableField field = {6, UPB_SIZE(8, 56), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const xds_core_v3_ResourceLocator_Directive* const* xds_core_v3_ResourceLocator_directives(const xds_core_v3_ResourceLocator* msg, size_t* size) {
  const upb_MiniTableField field = {6, UPB_SIZE(8, 56), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  const upb_Array* arr = upb_Message_GetArray(msg, &field);
  if (arr) {
    if (size) *size = arr->size;
    return (const xds_core_v3_ResourceLocator_Directive* const*)_upb_array_constptr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE bool xds_core_v3_ResourceLocator_has_directives(const xds_core_v3_ResourceLocator* msg) {
  size_t size;
  xds_core_v3_ResourceLocator_directives(msg, &size);
  return size != 0;
}

UPB_INLINE void xds_core_v3_ResourceLocator_set_scheme(xds_core_v3_ResourceLocator *msg, int32_t value) {
  const upb_MiniTableField field = {1, 0, 0, kUpb_NoSub, 5, kUpb_FieldMode_Scalar | kUpb_LabelFlags_IsAlternate | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE void xds_core_v3_ResourceLocator_set_id(xds_core_v3_ResourceLocator *msg, upb_StringView value) {
  const upb_MiniTableField field = {2, UPB_SIZE(16, 8), 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE void xds_core_v3_ResourceLocator_set_authority(xds_core_v3_ResourceLocator *msg, upb_StringView value) {
  const upb_MiniTableField field = {3, 24, 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE void xds_core_v3_ResourceLocator_set_resource_type(xds_core_v3_ResourceLocator *msg, upb_StringView value) {
  const upb_MiniTableField field = {4, UPB_SIZE(32, 40), 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE void xds_core_v3_ResourceLocator_set_exact_context(xds_core_v3_ResourceLocator *msg, struct xds_core_v3_ContextParams* value) {
  const upb_MiniTableField field = {5, UPB_SIZE(12, 64), -5, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE struct xds_core_v3_ContextParams* xds_core_v3_ResourceLocator_mutable_exact_context(xds_core_v3_ResourceLocator* msg, upb_Arena* arena) {
  struct xds_core_v3_ContextParams* sub = (struct xds_core_v3_ContextParams*)xds_core_v3_ResourceLocator_exact_context(msg);
  if (sub == NULL) {
    sub = (struct xds_core_v3_ContextParams*)_upb_Message_New(&xds_core_v3_ContextParams_msg_init, arena);
    if (sub) xds_core_v3_ResourceLocator_set_exact_context(msg, sub);
  }
  return sub;
}
UPB_INLINE xds_core_v3_ResourceLocator_Directive** xds_core_v3_ResourceLocator_mutable_directives(xds_core_v3_ResourceLocator* msg, size_t* size) {
  upb_MiniTableField field = {6, UPB_SIZE(8, 56), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetMutableArray(msg, &field);
  if (arr) {
    if (size) *size = arr->size;
    return (xds_core_v3_ResourceLocator_Directive**)_upb_array_ptr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE xds_core_v3_ResourceLocator_Directive** xds_core_v3_ResourceLocator_resize_directives(xds_core_v3_ResourceLocator* msg, size_t size, upb_Arena* arena) {
  upb_MiniTableField field = {6, UPB_SIZE(8, 56), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return (xds_core_v3_ResourceLocator_Directive**)upb_Message_ResizeArray(msg, &field, size, arena);
}
UPB_INLINE struct xds_core_v3_ResourceLocator_Directive* xds_core_v3_ResourceLocator_add_directives(xds_core_v3_ResourceLocator* msg, upb_Arena* arena) {
  upb_MiniTableField field = {6, UPB_SIZE(8, 56), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetOrCreateMutableArray(msg, &field, arena);
  if (!arr || !_upb_Array_ResizeUninitialized(arr, arr->size + 1, arena)) {
    return NULL;
  }
  struct xds_core_v3_ResourceLocator_Directive* sub = (struct xds_core_v3_ResourceLocator_Directive*)_upb_Message_New(&xds_core_v3_ResourceLocator_Directive_msg_init, arena);
  if (!arr || !sub) return NULL;
  _upb_Array_Set(arr, arr->size - 1, &sub, sizeof(sub));
  return sub;
}

/* xds.core.v3.ResourceLocator.Directive */

UPB_INLINE xds_core_v3_ResourceLocator_Directive* xds_core_v3_ResourceLocator_Directive_new(upb_Arena* arena) {
  return (xds_core_v3_ResourceLocator_Directive*)_upb_Message_New(&xds_core_v3_ResourceLocator_Directive_msg_init, arena);
}
UPB_INLINE xds_core_v3_ResourceLocator_Directive* xds_core_v3_ResourceLocator_Directive_parse(const char* buf, size_t size, upb_Arena* arena) {
  xds_core_v3_ResourceLocator_Directive* ret = xds_core_v3_ResourceLocator_Directive_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_core_v3_ResourceLocator_Directive_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE xds_core_v3_ResourceLocator_Directive* xds_core_v3_ResourceLocator_Directive_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  xds_core_v3_ResourceLocator_Directive* ret = xds_core_v3_ResourceLocator_Directive_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_core_v3_ResourceLocator_Directive_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* xds_core_v3_ResourceLocator_Directive_serialize(const xds_core_v3_ResourceLocator_Directive* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_core_v3_ResourceLocator_Directive_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* xds_core_v3_ResourceLocator_Directive_serialize_ex(const xds_core_v3_ResourceLocator_Directive* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_core_v3_ResourceLocator_Directive_msg_init, options, arena, &ptr, len);
  return ptr;
}
typedef enum {
  xds_core_v3_ResourceLocator_Directive_directive_alt = 1,
  xds_core_v3_ResourceLocator_Directive_directive_entry = 2,
  xds_core_v3_ResourceLocator_Directive_directive_NOT_SET = 0
} xds_core_v3_ResourceLocator_Directive_directive_oneofcases;
UPB_INLINE xds_core_v3_ResourceLocator_Directive_directive_oneofcases xds_core_v3_ResourceLocator_Directive_directive_case(const xds_core_v3_ResourceLocator_Directive* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), -1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return (xds_core_v3_ResourceLocator_Directive_directive_oneofcases)upb_Message_WhichOneofFieldNumber(msg, &field);
}
UPB_INLINE void xds_core_v3_ResourceLocator_Directive_clear_alt(xds_core_v3_ResourceLocator_Directive* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), -1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const xds_core_v3_ResourceLocator* xds_core_v3_ResourceLocator_Directive_alt(const xds_core_v3_ResourceLocator_Directive* msg) {
  const xds_core_v3_ResourceLocator* default_val = NULL;
  const xds_core_v3_ResourceLocator* ret;
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), -1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE bool xds_core_v3_ResourceLocator_Directive_has_alt(const xds_core_v3_ResourceLocator_Directive* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), -1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return _upb_Message_HasNonExtensionField(msg, &field);
}
UPB_INLINE void xds_core_v3_ResourceLocator_Directive_clear_entry(xds_core_v3_ResourceLocator_Directive* msg) {
  const upb_MiniTableField field = {2, UPB_SIZE(4, 8), -1, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE upb_StringView xds_core_v3_ResourceLocator_Directive_entry(const xds_core_v3_ResourceLocator_Directive* msg) {
  upb_StringView default_val = upb_StringView_FromString("");
  upb_StringView ret;
  const upb_MiniTableField field = {2, UPB_SIZE(4, 8), -1, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE bool xds_core_v3_ResourceLocator_Directive_has_entry(const xds_core_v3_ResourceLocator_Directive* msg) {
  const upb_MiniTableField field = {2, UPB_SIZE(4, 8), -1, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  return _upb_Message_HasNonExtensionField(msg, &field);
}

UPB_INLINE void xds_core_v3_ResourceLocator_Directive_set_alt(xds_core_v3_ResourceLocator_Directive *msg, xds_core_v3_ResourceLocator* value) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), -1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE struct xds_core_v3_ResourceLocator* xds_core_v3_ResourceLocator_Directive_mutable_alt(xds_core_v3_ResourceLocator_Directive* msg, upb_Arena* arena) {
  struct xds_core_v3_ResourceLocator* sub = (struct xds_core_v3_ResourceLocator*)xds_core_v3_ResourceLocator_Directive_alt(msg);
  if (sub == NULL) {
    sub = (struct xds_core_v3_ResourceLocator*)_upb_Message_New(&xds_core_v3_ResourceLocator_msg_init, arena);
    if (sub) xds_core_v3_ResourceLocator_Directive_set_alt(msg, sub);
  }
  return sub;
}
UPB_INLINE void xds_core_v3_ResourceLocator_Directive_set_entry(xds_core_v3_ResourceLocator_Directive *msg, upb_StringView value) {
  const upb_MiniTableField field = {2, UPB_SIZE(4, 8), -1, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}

extern const upb_MiniTableFile xds_core_v3_resource_locator_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* XDS_CORE_V3_RESOURCE_LOCATOR_PROTO_UPB_H_ */
