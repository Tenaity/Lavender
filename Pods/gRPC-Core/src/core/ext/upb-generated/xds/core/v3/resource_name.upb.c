/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/core/v3/resource_name.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "xds/core/v3/resource_name.upb.h"
#include "xds/annotations/v3/status.upb.h"
#include "xds/core/v3/context_params.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_sub xds_core_v3_ResourceName_submsgs[1] = {
  {.submsg = &xds_core_v3_ContextParams_msginit},
};

static const upb_msglayout_field xds_core_v3_ResourceName__fields[4] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(12, 24), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(20, 40), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(28, 56), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout xds_core_v3_ResourceName_msginit = {
  &xds_core_v3_ResourceName_submsgs[0],
  &xds_core_v3_ResourceName__fields[0],
  UPB_SIZE(32, 64), 4, _UPB_MSGEXT_NONE, 4, 255,
};

static const upb_msglayout *messages_layout[1] = {
  &xds_core_v3_ResourceName_msginit,
};

const upb_msglayout_file xds_core_v3_resource_name_proto_upb_file_layout = {
  messages_layout,
  NULL,
  1,
  0,
};

#include "upb/port_undef.inc"

