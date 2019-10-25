/*
 * Copyright 2018 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.2 */

#ifndef PB_GOOGLE_FIRESTORE_V1_QUERY_NANOPB_H_INCLUDED
#define PB_GOOGLE_FIRESTORE_V1_QUERY_NANOPB_H_INCLUDED
#include <pb.h>

#include "google/api/annotations.nanopb.h"

#include "google/firestore/v1/document.nanopb.h"

#include "google/protobuf/wrappers.nanopb.h"

#include "absl/strings/str_cat.h"
#include "nanopb_pretty_printers.h"

namespace firebase {
namespace firestore {
/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif


/* Enum definitions */
typedef enum _google_firestore_v1_StructuredQuery_Direction {
    google_firestore_v1_StructuredQuery_Direction_DIRECTION_UNSPECIFIED = 0,
    google_firestore_v1_StructuredQuery_Direction_ASCENDING = 1,
    google_firestore_v1_StructuredQuery_Direction_DESCENDING = 2
} google_firestore_v1_StructuredQuery_Direction;
#define _google_firestore_v1_StructuredQuery_Direction_MIN google_firestore_v1_StructuredQuery_Direction_DIRECTION_UNSPECIFIED
#define _google_firestore_v1_StructuredQuery_Direction_MAX google_firestore_v1_StructuredQuery_Direction_DESCENDING
#define _google_firestore_v1_StructuredQuery_Direction_ARRAYSIZE ((google_firestore_v1_StructuredQuery_Direction)(google_firestore_v1_StructuredQuery_Direction_DESCENDING+1))

typedef enum _google_firestore_v1_StructuredQuery_CompositeFilter_Operator {
    google_firestore_v1_StructuredQuery_CompositeFilter_Operator_OPERATOR_UNSPECIFIED = 0,
    google_firestore_v1_StructuredQuery_CompositeFilter_Operator_AND = 1
} google_firestore_v1_StructuredQuery_CompositeFilter_Operator;
#define _google_firestore_v1_StructuredQuery_CompositeFilter_Operator_MIN google_firestore_v1_StructuredQuery_CompositeFilter_Operator_OPERATOR_UNSPECIFIED
#define _google_firestore_v1_StructuredQuery_CompositeFilter_Operator_MAX google_firestore_v1_StructuredQuery_CompositeFilter_Operator_AND
#define _google_firestore_v1_StructuredQuery_CompositeFilter_Operator_ARRAYSIZE ((google_firestore_v1_StructuredQuery_CompositeFilter_Operator)(google_firestore_v1_StructuredQuery_CompositeFilter_Operator_AND+1))

typedef enum _google_firestore_v1_StructuredQuery_FieldFilter_Operator {
    google_firestore_v1_StructuredQuery_FieldFilter_Operator_OPERATOR_UNSPECIFIED = 0,
    google_firestore_v1_StructuredQuery_FieldFilter_Operator_LESS_THAN = 1,
    google_firestore_v1_StructuredQuery_FieldFilter_Operator_LESS_THAN_OR_EQUAL = 2,
    google_firestore_v1_StructuredQuery_FieldFilter_Operator_GREATER_THAN = 3,
    google_firestore_v1_StructuredQuery_FieldFilter_Operator_GREATER_THAN_OR_EQUAL = 4,
    google_firestore_v1_StructuredQuery_FieldFilter_Operator_EQUAL = 5,
    google_firestore_v1_StructuredQuery_FieldFilter_Operator_ARRAY_CONTAINS = 7,
    google_firestore_v1_StructuredQuery_FieldFilter_Operator_IN = 8,
    google_firestore_v1_StructuredQuery_FieldFilter_Operator_ARRAY_CONTAINS_ANY = 9
} google_firestore_v1_StructuredQuery_FieldFilter_Operator;
#define _google_firestore_v1_StructuredQuery_FieldFilter_Operator_MIN google_firestore_v1_StructuredQuery_FieldFilter_Operator_OPERATOR_UNSPECIFIED
#define _google_firestore_v1_StructuredQuery_FieldFilter_Operator_MAX google_firestore_v1_StructuredQuery_FieldFilter_Operator_ARRAY_CONTAINS_ANY
#define _google_firestore_v1_StructuredQuery_FieldFilter_Operator_ARRAYSIZE ((google_firestore_v1_StructuredQuery_FieldFilter_Operator)(google_firestore_v1_StructuredQuery_FieldFilter_Operator_ARRAY_CONTAINS_ANY+1))

typedef enum _google_firestore_v1_StructuredQuery_UnaryFilter_Operator {
    google_firestore_v1_StructuredQuery_UnaryFilter_Operator_OPERATOR_UNSPECIFIED = 0,
    google_firestore_v1_StructuredQuery_UnaryFilter_Operator_IS_NAN = 2,
    google_firestore_v1_StructuredQuery_UnaryFilter_Operator_IS_NULL = 3
} google_firestore_v1_StructuredQuery_UnaryFilter_Operator;
#define _google_firestore_v1_StructuredQuery_UnaryFilter_Operator_MIN google_firestore_v1_StructuredQuery_UnaryFilter_Operator_OPERATOR_UNSPECIFIED
#define _google_firestore_v1_StructuredQuery_UnaryFilter_Operator_MAX google_firestore_v1_StructuredQuery_UnaryFilter_Operator_IS_NULL
#define _google_firestore_v1_StructuredQuery_UnaryFilter_Operator_ARRAYSIZE ((google_firestore_v1_StructuredQuery_UnaryFilter_Operator)(google_firestore_v1_StructuredQuery_UnaryFilter_Operator_IS_NULL+1))

/* Struct definitions */
typedef struct _google_firestore_v1_StructuredQuery_FieldReference {
    pb_bytes_array_t *field_path;

    std::string ToString(int indent = 0) const {
        std::string result{"FieldReference("};

        result += absl::StrCat("field_path: ",
            ToStringImpl(field_path, indent), "\n");

        result += ')';
        return result;
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_StructuredQuery_FieldReference) */
} google_firestore_v1_StructuredQuery_FieldReference;

typedef struct _google_firestore_v1_StructuredQuery_Projection {
    pb_size_t fields_count;
    struct _google_firestore_v1_StructuredQuery_FieldReference *fields;

    std::string ToString(int indent = 0) const {
        std::string result{"Projection("};

        if (fields_count) result += absl::StrCat("fields: ",
            ToStringImpl(fields, fields_count, indent + 1), "\n");

        result += ')';
        return result;
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_StructuredQuery_Projection) */
} google_firestore_v1_StructuredQuery_Projection;

typedef struct _google_firestore_v1_Cursor {
    pb_size_t values_count;
    struct _google_firestore_v1_Value *values;
    bool before;

    std::string ToString(int indent = 0) const {
        std::string result{"Cursor("};

        if (values_count) result += absl::StrCat("values: ",
            ToStringImpl(values, values_count, indent + 1), "\n");
        result += absl::StrCat("before: ",
            ToStringImpl(before, indent), "\n");

        result += ')';
        return result;
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_Cursor) */
} google_firestore_v1_Cursor;

typedef struct _google_firestore_v1_StructuredQuery_CollectionSelector {
    pb_bytes_array_t *collection_id;
    bool all_descendants;

    std::string ToString(int indent = 0) const {
        std::string result{"CollectionSelector("};

        result += absl::StrCat("collection_id: ",
            ToStringImpl(collection_id, indent), "\n");
        result += absl::StrCat("all_descendants: ",
            ToStringImpl(all_descendants, indent), "\n");

        result += ')';
        return result;
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_StructuredQuery_CollectionSelector) */
} google_firestore_v1_StructuredQuery_CollectionSelector;

typedef struct _google_firestore_v1_StructuredQuery_CompositeFilter {
    google_firestore_v1_StructuredQuery_CompositeFilter_Operator op;
    pb_size_t filters_count;
    struct _google_firestore_v1_StructuredQuery_Filter *filters;

    std::string ToString(int indent = 0) const {
        std::string result{"CompositeFilter("};

        result += absl::StrCat("op: ",
            ToStringImpl(op, indent), "\n");
        if (filters_count) result += absl::StrCat("filters: ",
            ToStringImpl(filters, filters_count, indent + 1), "\n");

        result += ')';
        return result;
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_StructuredQuery_CompositeFilter) */
} google_firestore_v1_StructuredQuery_CompositeFilter;

typedef struct _google_firestore_v1_StructuredQuery_FieldFilter {
    google_firestore_v1_StructuredQuery_FieldReference field;
    google_firestore_v1_StructuredQuery_FieldFilter_Operator op;
    google_firestore_v1_Value value;

    std::string ToString(int indent = 0) const {
        std::string result{"FieldFilter("};

        result += absl::StrCat("field: ",
            ToStringImpl(field, indent), "\n");
        result += absl::StrCat("op: ",
            ToStringImpl(op, indent), "\n");
        result += absl::StrCat("value: ",
            ToStringImpl(value, indent), "\n");

        result += ')';
        return result;
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_StructuredQuery_FieldFilter) */
} google_firestore_v1_StructuredQuery_FieldFilter;

typedef struct _google_firestore_v1_StructuredQuery_Order {
    google_firestore_v1_StructuredQuery_FieldReference field;
    google_firestore_v1_StructuredQuery_Direction direction;

    std::string ToString(int indent = 0) const {
        std::string result{"Order("};

        result += absl::StrCat("field: ",
            ToStringImpl(field, indent), "\n");
        result += absl::StrCat("direction: ",
            ToStringImpl(direction, indent), "\n");

        result += ')';
        return result;
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_StructuredQuery_Order) */
} google_firestore_v1_StructuredQuery_Order;

typedef struct _google_firestore_v1_StructuredQuery_UnaryFilter {
    google_firestore_v1_StructuredQuery_UnaryFilter_Operator op;
    pb_size_t which_operand_type;
    union {
        google_firestore_v1_StructuredQuery_FieldReference field;
    };

    std::string ToString(int indent = 0) const {
        std::string result{"UnaryFilter("};

        switch (which_operand_type) {
          case google_firestore_v1_StructuredQuery_UnaryFilter_field_tag:
            result += absl::StrCat("field: ",
            ToStringImpl(field, indent), "\n");
            break;
        }

        result += absl::StrCat("op: ",
            ToStringImpl(op, indent), "\n");

        result += ')';
        return result;
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_StructuredQuery_UnaryFilter) */
} google_firestore_v1_StructuredQuery_UnaryFilter;

typedef struct _google_firestore_v1_StructuredQuery_Filter {
    pb_size_t which_filter_type;
    union {
        google_firestore_v1_StructuredQuery_CompositeFilter composite_filter;
        google_firestore_v1_StructuredQuery_FieldFilter field_filter;
        google_firestore_v1_StructuredQuery_UnaryFilter unary_filter;
    };

    std::string ToString(int indent = 0) const {
        std::string result{"Filter("};

        switch (which_filter_type) {
          case google_firestore_v1_StructuredQuery_Filter_composite_filter_tag:
            result += absl::StrCat("composite_filter: ",
            ToStringImpl(composite_filter, indent), "\n");
            break;
          case google_firestore_v1_StructuredQuery_Filter_field_filter_tag:
            result += absl::StrCat("field_filter: ",
            ToStringImpl(field_filter, indent), "\n");
            break;
          case google_firestore_v1_StructuredQuery_Filter_unary_filter_tag:
            result += absl::StrCat("unary_filter: ",
            ToStringImpl(unary_filter, indent), "\n");
            break;
        }


        result += ')';
        return result;
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_StructuredQuery_Filter) */
} google_firestore_v1_StructuredQuery_Filter;

typedef struct _google_firestore_v1_StructuredQuery {
    google_firestore_v1_StructuredQuery_Projection select;
    pb_size_t from_count;
    struct _google_firestore_v1_StructuredQuery_CollectionSelector *from;
    google_firestore_v1_StructuredQuery_Filter where;
    pb_size_t order_by_count;
    struct _google_firestore_v1_StructuredQuery_Order *order_by;
    bool has_limit;
    google_protobuf_Int32Value limit;
    int32_t offset;
    google_firestore_v1_Cursor start_at;
    google_firestore_v1_Cursor end_at;

    std::string ToString(int indent = 0) const {
        std::string result{"StructuredQuery("};

        result += absl::StrCat("select: ",
            ToStringImpl(select, indent), "\n");
        if (from_count) result += absl::StrCat("from: ",
            ToStringImpl(from, from_count, indent + 1), "\n");
        result += absl::StrCat("where: ",
            ToStringImpl(where, indent), "\n");
        if (order_by_count) result += absl::StrCat("order_by: ",
            ToStringImpl(order_by, order_by_count, indent + 1), "\n");
        result += absl::StrCat("start_at: ",
            ToStringImpl(start_at, indent), "\n");
        result += absl::StrCat("end_at: ",
            ToStringImpl(end_at, indent), "\n");
        result += absl::StrCat("offset: ",
            ToStringImpl(offset, indent), "\n");
        if (has_limit) result += absl::StrCat("limit: ",
            ToStringImpl(limit, indent), "\n");

        result += ')';
        return result;
    }
/* @@protoc_insertion_point(struct:google_firestore_v1_StructuredQuery) */
} google_firestore_v1_StructuredQuery;

/* Default values for struct fields */

/* Initializer values for message structs */
#define google_firestore_v1_StructuredQuery_init_default {google_firestore_v1_StructuredQuery_Projection_init_default, 0, NULL, google_firestore_v1_StructuredQuery_Filter_init_default, 0, NULL, false, google_protobuf_Int32Value_init_default, 0, google_firestore_v1_Cursor_init_default, google_firestore_v1_Cursor_init_default}
#define google_firestore_v1_StructuredQuery_CollectionSelector_init_default {NULL, 0}
#define google_firestore_v1_StructuredQuery_Filter_init_default {0, {google_firestore_v1_StructuredQuery_CompositeFilter_init_default}}
#define google_firestore_v1_StructuredQuery_CompositeFilter_init_default {_google_firestore_v1_StructuredQuery_CompositeFilter_Operator_MIN, 0, NULL}
#define google_firestore_v1_StructuredQuery_FieldFilter_init_default {google_firestore_v1_StructuredQuery_FieldReference_init_default, _google_firestore_v1_StructuredQuery_FieldFilter_Operator_MIN, google_firestore_v1_Value_init_default}
#define google_firestore_v1_StructuredQuery_UnaryFilter_init_default {_google_firestore_v1_StructuredQuery_UnaryFilter_Operator_MIN, 0, {google_firestore_v1_StructuredQuery_FieldReference_init_default}}
#define google_firestore_v1_StructuredQuery_Order_init_default {google_firestore_v1_StructuredQuery_FieldReference_init_default, _google_firestore_v1_StructuredQuery_Direction_MIN}
#define google_firestore_v1_StructuredQuery_FieldReference_init_default {NULL}
#define google_firestore_v1_StructuredQuery_Projection_init_default {0, NULL}
#define google_firestore_v1_Cursor_init_default  {0, NULL, 0}
#define google_firestore_v1_StructuredQuery_init_zero {google_firestore_v1_StructuredQuery_Projection_init_zero, 0, NULL, google_firestore_v1_StructuredQuery_Filter_init_zero, 0, NULL, false, google_protobuf_Int32Value_init_zero, 0, google_firestore_v1_Cursor_init_zero, google_firestore_v1_Cursor_init_zero}
#define google_firestore_v1_StructuredQuery_CollectionSelector_init_zero {NULL, 0}
#define google_firestore_v1_StructuredQuery_Filter_init_zero {0, {google_firestore_v1_StructuredQuery_CompositeFilter_init_zero}}
#define google_firestore_v1_StructuredQuery_CompositeFilter_init_zero {_google_firestore_v1_StructuredQuery_CompositeFilter_Operator_MIN, 0, NULL}
#define google_firestore_v1_StructuredQuery_FieldFilter_init_zero {google_firestore_v1_StructuredQuery_FieldReference_init_zero, _google_firestore_v1_StructuredQuery_FieldFilter_Operator_MIN, google_firestore_v1_Value_init_zero}
#define google_firestore_v1_StructuredQuery_UnaryFilter_init_zero {_google_firestore_v1_StructuredQuery_UnaryFilter_Operator_MIN, 0, {google_firestore_v1_StructuredQuery_FieldReference_init_zero}}
#define google_firestore_v1_StructuredQuery_Order_init_zero {google_firestore_v1_StructuredQuery_FieldReference_init_zero, _google_firestore_v1_StructuredQuery_Direction_MIN}
#define google_firestore_v1_StructuredQuery_FieldReference_init_zero {NULL}
#define google_firestore_v1_StructuredQuery_Projection_init_zero {0, NULL}
#define google_firestore_v1_Cursor_init_zero     {0, NULL, 0}

/* Field tags (for use in manual encoding/decoding) */
#define google_firestore_v1_StructuredQuery_FieldReference_field_path_tag 2
#define google_firestore_v1_StructuredQuery_Projection_fields_tag 2
#define google_firestore_v1_Cursor_values_tag    1
#define google_firestore_v1_Cursor_before_tag    2
#define google_firestore_v1_StructuredQuery_CollectionSelector_collection_id_tag 2
#define google_firestore_v1_StructuredQuery_CollectionSelector_all_descendants_tag 3
#define google_firestore_v1_StructuredQuery_CompositeFilter_op_tag 1
#define google_firestore_v1_StructuredQuery_CompositeFilter_filters_tag 2
#define google_firestore_v1_StructuredQuery_FieldFilter_field_tag 1
#define google_firestore_v1_StructuredQuery_FieldFilter_op_tag 2
#define google_firestore_v1_StructuredQuery_FieldFilter_value_tag 3
#define google_firestore_v1_StructuredQuery_Order_field_tag 1
#define google_firestore_v1_StructuredQuery_Order_direction_tag 2
#define google_firestore_v1_StructuredQuery_UnaryFilter_field_tag 2
#define google_firestore_v1_StructuredQuery_UnaryFilter_op_tag 1
#define google_firestore_v1_StructuredQuery_Filter_composite_filter_tag 1
#define google_firestore_v1_StructuredQuery_Filter_field_filter_tag 2
#define google_firestore_v1_StructuredQuery_Filter_unary_filter_tag 3
#define google_firestore_v1_StructuredQuery_select_tag 1
#define google_firestore_v1_StructuredQuery_from_tag 2
#define google_firestore_v1_StructuredQuery_where_tag 3
#define google_firestore_v1_StructuredQuery_order_by_tag 4
#define google_firestore_v1_StructuredQuery_start_at_tag 7
#define google_firestore_v1_StructuredQuery_end_at_tag 8
#define google_firestore_v1_StructuredQuery_offset_tag 6
#define google_firestore_v1_StructuredQuery_limit_tag 5

/* Struct field encoding specification for nanopb */
extern const pb_field_t google_firestore_v1_StructuredQuery_fields[9];
extern const pb_field_t google_firestore_v1_StructuredQuery_CollectionSelector_fields[3];
extern const pb_field_t google_firestore_v1_StructuredQuery_Filter_fields[4];
extern const pb_field_t google_firestore_v1_StructuredQuery_CompositeFilter_fields[3];
extern const pb_field_t google_firestore_v1_StructuredQuery_FieldFilter_fields[4];
extern const pb_field_t google_firestore_v1_StructuredQuery_UnaryFilter_fields[3];
extern const pb_field_t google_firestore_v1_StructuredQuery_Order_fields[3];
extern const pb_field_t google_firestore_v1_StructuredQuery_FieldReference_fields[2];
extern const pb_field_t google_firestore_v1_StructuredQuery_Projection_fields[2];
extern const pb_field_t google_firestore_v1_Cursor_fields[3];

/* Maximum encoded size of messages (where known) */
/* google_firestore_v1_StructuredQuery_size depends on runtime parameters */
/* google_firestore_v1_StructuredQuery_CollectionSelector_size depends on runtime parameters */
/* google_firestore_v1_StructuredQuery_Filter_size depends on runtime parameters */
/* google_firestore_v1_StructuredQuery_CompositeFilter_size depends on runtime parameters */
/* google_firestore_v1_StructuredQuery_FieldFilter_size depends on runtime parameters */
/* google_firestore_v1_StructuredQuery_UnaryFilter_size depends on runtime parameters */
/* google_firestore_v1_StructuredQuery_Order_size depends on runtime parameters */
/* google_firestore_v1_StructuredQuery_FieldReference_size depends on runtime parameters */
/* google_firestore_v1_StructuredQuery_Projection_size depends on runtime parameters */
/* google_firestore_v1_Cursor_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define QUERY_MESSAGES \


#endif


}  // namespace firestore
}  // namespace firebase
/* @@protoc_insertion_point(eof) */

#endif
