
/* AUTO-GENERATED!  DO NOT EDIT, CHANGES WILL BE LOST! */

/* generated by server/addb-codegen.py */

/*
 * Copyright (c) 2020 Seagate Technology LLC and/or its Affiliates
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * For any questions about this software or licensing,
 * please email opensource@seagate.com or cortx-questions@seagate.com.
 *
 */

#pragma once

#ifndef __S3_SERVER_ADDB_PLUGIN_AUTO_H__
#define __S3_SERVER_ADDB_PLUGIN_AUTO_H__

#include <addb2/addb2_internal.h>

/* See comments in addb-codegen.py and s3_addb.h for more details.
 *
 * This enum defines addb_action_type_id for ADDB logs.  These action types are
 * needed to distinguish different kinds of log entries from each other.
 */
enum S3AddbActionTypeId {
  S3_ADDB_RANGE_START = M0_ADDB2__EXT_RANGE_1,

  /* helper IDs e.g. for linking requests */

  /* ID of general purpose ADDB entry. */
  S3_ADDB_MEASUREMENT_ID = S3_ADDB_RANGE_START,

  /* ID of ADDB entry which keeps a mapping of addb_request_id to S3 API-level
   * UUID of the request. */
  S3_ADDB_REQUEST_ID,

  /* ID of ADDB entry which keeps a link between s3 request and motr op
   * request. */
  S3_ADDB_REQUEST_TO_MOTR_ID,

  /* Action classes identifiers: */
  S3_ADDB_FIRST_REQUEST_ID,

  /* Auth related routine */
  S3_ADDB_AUTH_ID = S3_ADDB_FIRST_REQUEST_ID,

  /* S3_ADDB_ACTION_BASE_ID is to be used in constructors, while action class
   * is still being constructed and it is not possible to identify what is the
   * class name of the instance (derived class name). */
  S3_ADDB_ACTION_BASE_ID,

  /* Auto-generated IDs are listed below. Sorry for strange format, it had to
   * be done this way to pass git-clang-format check. */

  /* MotrDeleteIndexAction: */
  S3_ADDB_MOTR_DELETE_INDEX_ACTION_ID,
  /* MotrDeleteKeyValueAction: */
  S3_ADDB_MOTR_DELETE_KEY_VALUE_ACTION_ID,
  /* MotrDeleteObjectAction: */
  S3_ADDB_MOTR_DELETE_OBJECT_ACTION_ID,
  /* MotrGetKeyValueAction: */
  S3_ADDB_MOTR_GET_KEY_VALUE_ACTION_ID,
  /* MotrHeadIndexAction: */
  S3_ADDB_MOTR_HEAD_INDEX_ACTION_ID,
  /* MotrHeadObjectAction: */
  S3_ADDB_MOTR_HEAD_OBJECT_ACTION_ID,
  /* MotrKVSListingAction: */
  S3_ADDB_MOTR_KVS_LISTING_ACTION_ID,
  /* MotrPutKeyValueAction: */
  S3_ADDB_MOTR_PUT_KEY_VALUE_ACTION_ID,
  /* S3AbortMultipartAction: */
  S3_ADDB_S3_ABORT_MULTIPART_ACTION_ID,
  /* S3AccountDeleteMetadataAction: */
  S3_ADDB_S3_ACCOUNT_DELETE_METADATA_ACTION_ID,
  /* S3BucketRemoteAddAction: */
  S3_ADDB_S3_BUCKET_REMOTE_ADD_ACTION_ID,
  /* S3CopyObjectAction: */
  S3_ADDB_S3_COPY_OBJECT_ACTION_ID,
  /* S3DeleteBucketAction: */
  S3_ADDB_S3_DELETE_BUCKET_ACTION_ID,
  /* S3DeleteBucketPolicyAction: */
  S3_ADDB_S3_DELETE_BUCKET_POLICY_ACTION_ID,
  /* S3DeleteBucketReplicationAction: */
  S3_ADDB_S3_DELETE_BUCKET_REPLICATION_ACTION_ID,
  /* S3DeleteBucketTaggingAction: */
  S3_ADDB_S3_DELETE_BUCKET_TAGGING_ACTION_ID,
  /* S3DeleteMultipleObjectsAction: */
  S3_ADDB_S3_DELETE_MULTIPLE_OBJECTS_ACTION_ID,
  /* S3DeleteObjectAction: */
  S3_ADDB_S3_DELETE_OBJECT_ACTION_ID,
  /* S3DeleteObjectTaggingAction: */
  S3_ADDB_S3_DELETE_OBJECT_TAGGING_ACTION_ID,
  /* S3GetAuditLogSchemaAction: */
  S3_ADDB_S3_GET_AUDIT_LOG_SCHEMA_ACTION_ID,
  /* S3GetBucketACLAction: */
  S3_ADDB_S3_GET_BUCKET_ACL_ACTION_ID,
  /* S3GetBucketActionV2: */
  S3_ADDB_S3_GET_BUCKET_ACTION_V2_ID,
  /* S3GetBucketPolicyAction: */
  S3_ADDB_S3_GET_BUCKET_POLICY_ACTION_ID,
  /* S3GetBucketReplicationAction: */
  S3_ADDB_S3_GET_BUCKET_REPLICATION_ACTION_ID,
  /* S3GetBucketTaggingAction: */
  S3_ADDB_S3_GET_BUCKET_TAGGING_ACTION_ID,
  /* S3GetBucketlocationAction: */
  S3_ADDB_S3_GET_BUCKETLOCATION_ACTION_ID,
  /* S3GetMultipartBucketAction: */
  S3_ADDB_S3_GET_MULTIPART_BUCKET_ACTION_ID,
  /* S3GetMultipartPartAction: */
  S3_ADDB_S3_GET_MULTIPART_PART_ACTION_ID,
  /* S3GetObjectACLAction: */
  S3_ADDB_S3_GET_OBJECT_ACL_ACTION_ID,
  /* S3GetObjectAction: */
  S3_ADDB_S3_GET_OBJECT_ACTION_ID,
  /* S3GetObjectTaggingAction: */
  S3_ADDB_S3_GET_OBJECT_TAGGING_ACTION_ID,
  /* S3GetServiceAction: */
  S3_ADDB_S3_GET_SERVICE_ACTION_ID,
  /* S3HeadBucketAction: */
  S3_ADDB_S3_HEAD_BUCKET_ACTION_ID,
  /* S3HeadObjectAction: */
  S3_ADDB_S3_HEAD_OBJECT_ACTION_ID,
  /* S3HeadServiceAction: */
  S3_ADDB_S3_HEAD_SERVICE_ACTION_ID,
  /* S3PostCompleteAction: */
  S3_ADDB_S3_POST_COMPLETE_ACTION_ID,
  /* S3PostMultipartObjectAction: */
  S3_ADDB_S3_POST_MULTIPART_OBJECT_ACTION_ID,
  /* S3PutBucketACLAction: */
  S3_ADDB_S3_PUT_BUCKET_ACL_ACTION_ID,
  /* S3PutBucketAction: */
  S3_ADDB_S3_PUT_BUCKET_ACTION_ID,
  /* S3PutBucketPolicyAction: */
  S3_ADDB_S3_PUT_BUCKET_POLICY_ACTION_ID,
  /* S3PutBucketReplicationAction: */
  S3_ADDB_S3_PUT_BUCKET_REPLICATION_ACTION_ID,
  /* S3PutBucketTaggingAction: */
  S3_ADDB_S3_PUT_BUCKET_TAGGING_ACTION_ID,
  /* S3PutChunkUploadObjectAction: */
  S3_ADDB_S3_PUT_CHUNK_UPLOAD_OBJECT_ACTION_ID,
  /* S3PutFiAction: */
  S3_ADDB_S3_PUT_FI_ACTION_ID,
  /* S3PutMultiObjectAction: */
  S3_ADDB_S3_PUT_MULTI_OBJECT_ACTION_ID,
  /* S3PutObjectACLAction: */
  S3_ADDB_S3_PUT_OBJECT_ACL_ACTION_ID,
  /* S3PutObjectAction: */
  S3_ADDB_S3_PUT_OBJECT_ACTION_ID,
  /* S3PutObjectTaggingAction: */
  S3_ADDB_S3_PUT_OBJECT_TAGGING_ACTION_ID,

  /* End of auto-generated IDs. */
  S3_ADDB_LAST_REQUEST_ID = S3_ADDB_S3_PUT_OBJECT_TAGGING_ACTION_ID,

  /* End of S3 server range. */
  S3_ADDB_RANGE_END = S3_ADDB_LAST_REQUEST_ID
};

#endif
