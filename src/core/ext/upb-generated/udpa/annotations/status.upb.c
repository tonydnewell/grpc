/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/annotations/status.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/collections/array_internal.h"
#include "upb/message/internal.h"
#include "upb/mini_table/enum_internal.h"
#include "udpa/annotations/status.upb.h"
#include "google/protobuf/descriptor.upb.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableField udpa_annotations_StatusAnnotation__fields[2] = {
  {1, 0, 0, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {2, 4, 0, kUpb_NoSub, 5, kUpb_FieldMode_Scalar | kUpb_LabelFlags_IsAlternate | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable udpa_annotations_StatusAnnotation_msg_init = {
  NULL,
  &udpa_annotations_StatusAnnotation__fields[0],
  8, 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f000008, &upb_psb1_1bt},
    {0x000400003f000010, &upb_psv4_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTable *messages_layout[1] = {
  &udpa_annotations_StatusAnnotation_msg_init,
};

extern const upb_MiniTable google_protobuf_FileOptions_msg_init;
extern const upb_MiniTable udpa_annotations_StatusAnnotation_msg_init;
const upb_MiniTableExtension udpa_annotations_file_status_ext = {
  {222707719, 0, 0, 0, 11, kUpb_FieldMode_Scalar | kUpb_LabelFlags_IsExtension | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  &google_protobuf_FileOptions_msg_init,
  {.submsg = &udpa_annotations_StatusAnnotation_msg_init},

};

static const upb_MiniTableExtension *extensions_layout[1] = {
  &udpa_annotations_file_status_ext,
};

const upb_MiniTableFile udpa_annotations_status_proto_upb_file_layout = {
  messages_layout,
  NULL,
  extensions_layout,
  1,
  0,
  1,
};

#include "upb/port/undef.inc"

