/* This file was generated by upb_generator from the input file:
 *
 *     envoy/type/matcher/v3/http_inputs.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated.
 * NO CHECKED-IN PROTOBUF GENCODE */

#ifndef ENVOY_TYPE_MATCHER_V3_HTTP_INPUTS_PROTO_UPBDEFS_H_
#define ENVOY_TYPE_MATCHER_V3_HTTP_INPUTS_PROTO_UPBDEFS_H_

#include "upb/reflection/def.h"
#include "upb/reflection/internal/def_pool.h"

#include "upb/port/def.inc" // Must be last.
#ifdef __cplusplus
extern "C" {
#endif

extern _upb_DefPool_Init envoy_type_matcher_v3_http_inputs_proto_upbdefinit;

UPB_INLINE const upb_MessageDef *envoy_type_matcher_v3_HttpRequestHeaderMatchInput_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_type_matcher_v3_http_inputs_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.type.matcher.v3.HttpRequestHeaderMatchInput");
}

UPB_INLINE const upb_MessageDef *envoy_type_matcher_v3_HttpRequestTrailerMatchInput_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_type_matcher_v3_http_inputs_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.type.matcher.v3.HttpRequestTrailerMatchInput");
}

UPB_INLINE const upb_MessageDef *envoy_type_matcher_v3_HttpResponseHeaderMatchInput_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_type_matcher_v3_http_inputs_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.type.matcher.v3.HttpResponseHeaderMatchInput");
}

UPB_INLINE const upb_MessageDef *envoy_type_matcher_v3_HttpResponseTrailerMatchInput_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_type_matcher_v3_http_inputs_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.type.matcher.v3.HttpResponseTrailerMatchInput");
}

UPB_INLINE const upb_MessageDef *envoy_type_matcher_v3_HttpRequestQueryParamMatchInput_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_type_matcher_v3_http_inputs_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.type.matcher.v3.HttpRequestQueryParamMatchInput");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* ENVOY_TYPE_MATCHER_V3_HTTP_INPUTS_PROTO_UPBDEFS_H_ */