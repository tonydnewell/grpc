/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/listener/v3/listener.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/generated_code_support.h"
#include "envoy/config/listener/v3/listener.upb.h"
#include "envoy/config/accesslog/v3/accesslog.upb.h"
#include "envoy/config/core/v3/address.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "envoy/config/core/v3/extension.upb.h"
#include "envoy/config/core/v3/socket_option.upb.h"
#include "envoy/config/listener/v3/api_listener.upb.h"
#include "envoy/config/listener/v3/listener_components.upb.h"
#include "envoy/config/listener/v3/udp_listener_config.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "xds/annotations/v3/status.upb.h"
#include "xds/core/v3/collection_entry.upb.h"
#include "xds/type/matcher/v3/matcher.upb.h"
#include "envoy/annotations/deprecation.upb.h"
#include "udpa/annotations/security.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableSub envoy_config_listener_v3_AdditionalAddress_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_Address_msg_init},
  {.submsg = &envoy_config_core_v3_SocketOptionsOverride_msg_init},
};

static const upb_MiniTableField envoy_config_listener_v3_AdditionalAddress__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 2, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_listener_v3_AdditionalAddress_msg_init = {
  &envoy_config_listener_v3_AdditionalAddress_submsgs[0],
  &envoy_config_listener_v3_AdditionalAddress__fields[0],
  UPB_SIZE(16, 24), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_psm_1bt_maxmaxb},
    {0x0010000002010012, &upb_psm_1bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub envoy_config_listener_v3_ListenerCollection_submsgs[1] = {
  {.submsg = &xds_core_v3_CollectionEntry_msg_init},
};

static const upb_MiniTableField envoy_config_listener_v3_ListenerCollection__fields[1] = {
  {1, 0, 0, 0, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_listener_v3_ListenerCollection_msg_init = {
  &envoy_config_listener_v3_ListenerCollection_submsgs[0],
  &envoy_config_listener_v3_ListenerCollection__fields[0],
  8, 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f00000a, &upb_prm_1bt_maxmaxb},
  })
};

static const upb_MiniTableSub envoy_config_listener_v3_Listener_submsgs[23] = {
  {.submsg = &envoy_config_core_v3_Address_msg_init},
  {.submsg = &envoy_config_listener_v3_FilterChain_msg_init},
  {.submsg = &google_protobuf_BoolValue_msg_init},
  {.submsg = &google_protobuf_UInt32Value_msg_init},
  {.submsg = &envoy_config_core_v3_Metadata_msg_init},
  {.submsg = &envoy_config_listener_v3_Listener_DeprecatedV1_msg_init},
  {.submsg = &envoy_config_listener_v3_ListenerFilter_msg_init},
  {.submsg = &google_protobuf_BoolValue_msg_init},
  {.submsg = &google_protobuf_BoolValue_msg_init},
  {.submsg = &google_protobuf_UInt32Value_msg_init},
  {.submsg = &envoy_config_core_v3_SocketOption_msg_init},
  {.submsg = &google_protobuf_Duration_msg_init},
  {.submsg = &envoy_config_listener_v3_UdpListenerConfig_msg_init},
  {.submsg = &envoy_config_listener_v3_ApiListener_msg_init},
  {.submsg = &envoy_config_listener_v3_Listener_ConnectionBalanceConfig_msg_init},
  {.submsg = &envoy_config_accesslog_v3_AccessLog_msg_init},
  {.submsg = &google_protobuf_UInt32Value_msg_init},
  {.submsg = &envoy_config_listener_v3_FilterChain_msg_init},
  {.submsg = &google_protobuf_BoolValue_msg_init},
  {.submsg = &envoy_config_listener_v3_Listener_InternalListenerConfig_msg_init},
  {.submsg = &google_protobuf_BoolValue_msg_init},
  {.submsg = &xds_type_matcher_v3_Matcher_msg_init},
  {.submsg = &envoy_config_listener_v3_AdditionalAddress_msg_init},
};

static const upb_MiniTableField envoy_config_listener_v3_Listener__fields[31] = {
  {1, UPB_SIZE(120, 24), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 40), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(8, 48), 0, 1, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(12, 56), 2, 2, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(16, 64), 3, 3, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(20, 72), 4, 4, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(24, 80), 5, 5, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(28, 4), 0, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsAlternate | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {9, UPB_SIZE(32, 88), 0, 6, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {10, UPB_SIZE(36, 96), 6, 7, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {11, UPB_SIZE(40, 104), 7, 8, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {12, UPB_SIZE(44, 112), 8, 9, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {13, UPB_SIZE(48, 120), 0, 10, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {15, UPB_SIZE(52, 128), 9, 11, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {16, UPB_SIZE(56, 8), 0, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsAlternate | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {17, UPB_SIZE(60, 12), 0, kUpb_NoSub, 8, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {18, UPB_SIZE(64, 136), 10, 12, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {19, UPB_SIZE(68, 144), 11, 13, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {20, UPB_SIZE(72, 152), 12, 14, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {21, UPB_SIZE(76, 13), 0, kUpb_NoSub, 8, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {22, UPB_SIZE(80, 160), 0, 15, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {24, UPB_SIZE(84, 168), 13, 16, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {25, UPB_SIZE(88, 176), 14, 17, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {26, UPB_SIZE(92, 184), 15, 18, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {27, UPB_SIZE(116, 232), UPB_SIZE(-97, -17), 19, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {28, UPB_SIZE(128, 192), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {29, UPB_SIZE(100, 208), 16, 20, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {30, UPB_SIZE(104, 20), 0, kUpb_NoSub, 8, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {31, UPB_SIZE(105, 21), 0, kUpb_NoSub, 8, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {32, UPB_SIZE(108, 216), 17, 21, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {33, UPB_SIZE(112, 224), 0, 22, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_listener_v3_Listener_msg_init = {
  &envoy_config_listener_v3_Listener_submsgs[0],
  &envoy_config_listener_v3_Listener__fields[0],
  UPB_SIZE(136, 240), 31, kUpb_ExtMode_NonExtendable, 13, UPB_FASTTABLE_MASK(248), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x001800003f00000a, &upb_pss_1bt},
    {0x0028000001000012, &upb_psm_1bt_maxmaxb},
    {0x003000003f01001a, &upb_prm_1bt_maxmaxb},
    {0x0038000002020022, &upb_psm_1bt_maxmaxb},
    {0x004000000303002a, &upb_psm_1bt_maxmaxb},
    {0x0048000004040032, &upb_psm_1bt_maxmaxb},
    {0x005000000505003a, &upb_psm_1bt_max64b},
    {0x000400003f000040, &upb_psv4_1bt},
    {0x005800003f06004a, &upb_prm_1bt_maxmaxb},
    {0x0060000006070052, &upb_psm_1bt_maxmaxb},
    {0x006800000708005a, &upb_psm_1bt_maxmaxb},
    {0x0070000008090062, &upb_psm_1bt_maxmaxb},
    {0x007800003f0a006a, &upb_prm_1bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x00800000090b007a, &upb_psm_1bt_maxmaxb},
    {0x000800003f000180, &upb_psv4_2bt},
    {0x000c00003f000188, &upb_psb1_2bt},
    {0x008800000a0c0192, &upb_psm_2bt_maxmaxb},
    {0x009000000b0d019a, &upb_psm_2bt_maxmaxb},
    {0x009800000c0e01a2, &upb_psm_2bt_max64b},
    {0x000d00003f0001a8, &upb_psb1_2bt},
    {0x00a000003f0f01b2, &upb_prm_2bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x00a800000d1001c2, &upb_psm_2bt_maxmaxb},
    {0x00b000000e1101ca, &upb_psm_2bt_maxmaxb},
    {0x00b800000f1201d2, &upb_psm_2bt_maxmaxb},
    {0x00e800101b1301da, &upb_pom_2bt_max64b},
    {0x00c000003f0001e2, &upb_pss_2bt},
    {0x00d00000101401ea, &upb_psm_2bt_maxmaxb},
    {0x001400003f0001f0, &upb_psb1_2bt},
    {0x001500003f0001f8, &upb_psb1_2bt},
  })
};

static const upb_MiniTableSub envoy_config_listener_v3_Listener_DeprecatedV1_submsgs[1] = {
  {.submsg = &google_protobuf_BoolValue_msg_init},
};

static const upb_MiniTableField envoy_config_listener_v3_Listener_DeprecatedV1__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_listener_v3_Listener_DeprecatedV1_msg_init = {
  &envoy_config_listener_v3_Listener_DeprecatedV1_submsgs[0],
  &envoy_config_listener_v3_Listener_DeprecatedV1__fields[0],
  UPB_SIZE(8, 16), 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_psm_1bt_maxmaxb},
  })
};

static const upb_MiniTableSub envoy_config_listener_v3_Listener_ConnectionBalanceConfig_submsgs[2] = {
  {.submsg = &envoy_config_listener_v3_Listener_ConnectionBalanceConfig_ExactBalance_msg_init},
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msg_init},
};

static const upb_MiniTableField envoy_config_listener_v3_Listener_ConnectionBalanceConfig__fields[2] = {
  {1, UPB_SIZE(4, 8), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), -1, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_listener_v3_Listener_ConnectionBalanceConfig_msg_init = {
  &envoy_config_listener_v3_Listener_ConnectionBalanceConfig_submsgs[0],
  &envoy_config_listener_v3_Listener_ConnectionBalanceConfig__fields[0],
  UPB_SIZE(8, 16), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_pom_1bt_max64b},
    {0x0008000002010012, &upb_pom_1bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

const upb_MiniTable envoy_config_listener_v3_Listener_ConnectionBalanceConfig_ExactBalance_msg_init = {
  NULL,
  NULL,
  0, 0, kUpb_ExtMode_NonExtendable, 0, UPB_FASTTABLE_MASK(255), 0,
};

const upb_MiniTable envoy_config_listener_v3_Listener_InternalListenerConfig_msg_init = {
  NULL,
  NULL,
  0, 0, kUpb_ExtMode_NonExtendable, 0, UPB_FASTTABLE_MASK(255), 0,
};

const upb_MiniTable envoy_config_listener_v3_ListenerManager_msg_init = {
  NULL,
  NULL,
  0, 0, kUpb_ExtMode_NonExtendable, 0, UPB_FASTTABLE_MASK(255), 0,
};

const upb_MiniTable envoy_config_listener_v3_ValidationListenerManager_msg_init = {
  NULL,
  NULL,
  0, 0, kUpb_ExtMode_NonExtendable, 0, UPB_FASTTABLE_MASK(255), 0,
};

const upb_MiniTable envoy_config_listener_v3_ApiListenerManager_msg_init = {
  NULL,
  NULL,
  0, 0, kUpb_ExtMode_NonExtendable, 0, UPB_FASTTABLE_MASK(255), 0,
};

static const upb_MiniTable *messages_layout[10] = {
  &envoy_config_listener_v3_AdditionalAddress_msg_init,
  &envoy_config_listener_v3_ListenerCollection_msg_init,
  &envoy_config_listener_v3_Listener_msg_init,
  &envoy_config_listener_v3_Listener_DeprecatedV1_msg_init,
  &envoy_config_listener_v3_Listener_ConnectionBalanceConfig_msg_init,
  &envoy_config_listener_v3_Listener_ConnectionBalanceConfig_ExactBalance_msg_init,
  &envoy_config_listener_v3_Listener_InternalListenerConfig_msg_init,
  &envoy_config_listener_v3_ListenerManager_msg_init,
  &envoy_config_listener_v3_ValidationListenerManager_msg_init,
  &envoy_config_listener_v3_ApiListenerManager_msg_init,
};

const upb_MiniTableFile envoy_config_listener_v3_listener_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  10,
  0,
  0,
};

#include "upb/port/undef.inc"

