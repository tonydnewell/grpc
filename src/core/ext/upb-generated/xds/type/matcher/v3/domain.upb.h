/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/type/matcher/v3/domain.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef XDS_TYPE_MATCHER_V3_DOMAIN_PROTO_UPB_H_
#define XDS_TYPE_MATCHER_V3_DOMAIN_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct xds_type_matcher_v3_ServerNameMatcher;
struct xds_type_matcher_v3_ServerNameMatcher_DomainMatcher;
typedef struct xds_type_matcher_v3_ServerNameMatcher xds_type_matcher_v3_ServerNameMatcher;
typedef struct xds_type_matcher_v3_ServerNameMatcher_DomainMatcher xds_type_matcher_v3_ServerNameMatcher_DomainMatcher;
extern const upb_MiniTable xds_type_matcher_v3_ServerNameMatcher_msginit;
extern const upb_MiniTable xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_msginit;
struct xds_type_matcher_v3_Matcher_OnMatch;
extern const upb_MiniTable xds_type_matcher_v3_Matcher_OnMatch_msginit;



/* xds.type.matcher.v3.ServerNameMatcher */

UPB_INLINE xds_type_matcher_v3_ServerNameMatcher* xds_type_matcher_v3_ServerNameMatcher_new(upb_Arena* arena) {
  return (xds_type_matcher_v3_ServerNameMatcher*)_upb_Message_New(&xds_type_matcher_v3_ServerNameMatcher_msginit, arena);
}
UPB_INLINE xds_type_matcher_v3_ServerNameMatcher* xds_type_matcher_v3_ServerNameMatcher_parse(const char* buf, size_t size, upb_Arena* arena) {
  xds_type_matcher_v3_ServerNameMatcher* ret = xds_type_matcher_v3_ServerNameMatcher_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_type_matcher_v3_ServerNameMatcher_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE xds_type_matcher_v3_ServerNameMatcher* xds_type_matcher_v3_ServerNameMatcher_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  xds_type_matcher_v3_ServerNameMatcher* ret = xds_type_matcher_v3_ServerNameMatcher_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_type_matcher_v3_ServerNameMatcher_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* xds_type_matcher_v3_ServerNameMatcher_serialize(const xds_type_matcher_v3_ServerNameMatcher* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_type_matcher_v3_ServerNameMatcher_msginit, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* xds_type_matcher_v3_ServerNameMatcher_serialize_ex(const xds_type_matcher_v3_ServerNameMatcher* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_type_matcher_v3_ServerNameMatcher_msginit, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE bool xds_type_matcher_v3_ServerNameMatcher_has_domain_matchers(const xds_type_matcher_v3_ServerNameMatcher* msg) {
  return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0));
}
UPB_INLINE void xds_type_matcher_v3_ServerNameMatcher_clear_domain_matchers(const xds_type_matcher_v3_ServerNameMatcher* msg) {
  _upb_array_detach(msg, UPB_SIZE(0, 0));
}
UPB_INLINE const xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* const* xds_type_matcher_v3_ServerNameMatcher_domain_matchers(const xds_type_matcher_v3_ServerNameMatcher* msg, size_t* len) {
  return (const xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len);
}

UPB_INLINE xds_type_matcher_v3_ServerNameMatcher_DomainMatcher** xds_type_matcher_v3_ServerNameMatcher_mutable_domain_matchers(xds_type_matcher_v3_ServerNameMatcher* msg, size_t* len) {
  return (xds_type_matcher_v3_ServerNameMatcher_DomainMatcher**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE xds_type_matcher_v3_ServerNameMatcher_DomainMatcher** xds_type_matcher_v3_ServerNameMatcher_resize_domain_matchers(xds_type_matcher_v3_ServerNameMatcher* msg, size_t len, upb_Arena* arena) {
  return (xds_type_matcher_v3_ServerNameMatcher_DomainMatcher**)_upb_Array_Resize_accessor2(msg, UPB_SIZE(0, 0), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* xds_type_matcher_v3_ServerNameMatcher_add_domain_matchers(xds_type_matcher_v3_ServerNameMatcher* msg, upb_Arena* arena) {
  struct xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* sub = (struct xds_type_matcher_v3_ServerNameMatcher_DomainMatcher*)_upb_Message_New(&xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_msginit, arena);
  bool ok = _upb_Array_Append_accessor2(msg, UPB_SIZE(0, 0), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* xds.type.matcher.v3.ServerNameMatcher.DomainMatcher */

UPB_INLINE xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_new(upb_Arena* arena) {
  return (xds_type_matcher_v3_ServerNameMatcher_DomainMatcher*)_upb_Message_New(&xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_msginit, arena);
}
UPB_INLINE xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_parse(const char* buf, size_t size, upb_Arena* arena) {
  xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* ret = xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* ret = xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_serialize(const xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_msginit, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_serialize_ex(const xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_msginit, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_clear_domains(const xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* msg) {
  _upb_array_detach(msg, UPB_SIZE(4, 8));
}
UPB_INLINE upb_StringView const* xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_domains(const xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* msg, size_t* len) {
  return (upb_StringView const*)_upb_array_accessor(msg, UPB_SIZE(4, 8), len);
}
UPB_INLINE bool xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_has_on_match(const xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* msg) {
  return _upb_hasbit(msg, 1);
}
UPB_INLINE void xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_clear_on_match(const xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), const upb_Message*) = NULL;
}
UPB_INLINE const struct xds_type_matcher_v3_Matcher_OnMatch* xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_on_match(const xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), const struct xds_type_matcher_v3_Matcher_OnMatch*);
}

UPB_INLINE upb_StringView* xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_mutable_domains(xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* msg, size_t* len) {
  return (upb_StringView*)_upb_array_mutable_accessor(msg, UPB_SIZE(4, 8), len);
}
UPB_INLINE upb_StringView* xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_resize_domains(xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* msg, size_t len, upb_Arena* arena) {
  return (upb_StringView*)_upb_Array_Resize_accessor2(msg, UPB_SIZE(4, 8), len, UPB_SIZE(3, 4), arena);
}
UPB_INLINE bool xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_add_domains(xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* msg, upb_StringView val, upb_Arena* arena) {
  return _upb_Array_Append_accessor2(msg, UPB_SIZE(4, 8), UPB_SIZE(3, 4), &val, arena);
}
UPB_INLINE void xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_set_on_match(xds_type_matcher_v3_ServerNameMatcher_DomainMatcher *msg, struct xds_type_matcher_v3_Matcher_OnMatch* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), struct xds_type_matcher_v3_Matcher_OnMatch*) = value;
}
UPB_INLINE struct xds_type_matcher_v3_Matcher_OnMatch* xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_mutable_on_match(xds_type_matcher_v3_ServerNameMatcher_DomainMatcher* msg, upb_Arena* arena) {
  struct xds_type_matcher_v3_Matcher_OnMatch* sub = (struct xds_type_matcher_v3_Matcher_OnMatch*)xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_on_match(msg);
  if (sub == NULL) {
    sub = (struct xds_type_matcher_v3_Matcher_OnMatch*)_upb_Message_New(&xds_type_matcher_v3_Matcher_OnMatch_msginit, arena);
    if (!sub) return NULL;
    xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_set_on_match(msg, sub);
  }
  return sub;
}

extern const upb_MiniTable_File xds_type_matcher_v3_domain_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* XDS_TYPE_MATCHER_V3_DOMAIN_PROTO_UPB_H_ */