#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 814
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 205
#define ALIAS_COUNT 0
#define TOKEN_COUNT 116
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 517

enum ts_symbol_identifiers {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_header_comment_token1 = 2,
  anon_sym_SLASH_SLASH_SLASH = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  aux_sym_select_clause_token1 = 6,
  anon_sym_COMMA = 7,
  aux_sym_using_clause_token1 = 8,
  aux_sym_using_scope_clause_token1 = 9,
  aux_sym_using_scope_type_token1 = 10,
  aux_sym_using_scope_type_token2 = 11,
  aux_sym_using_scope_type_token3 = 12,
  aux_sym_using_scope_type_token4 = 13,
  aux_sym_using_scope_type_token5 = 14,
  aux_sym_using_scope_type_token6 = 15,
  aux_sym_using_scope_type_token7 = 16,
  aux_sym_using_lookup_clause_token1 = 17,
  aux_sym_using_listview_clause_token1 = 18,
  anon_sym_EQ = 19,
  aux_sym_using_lookup_bind_clause_token1 = 20,
  aux_sym_type_of_clause_token1 = 21,
  aux_sym_type_of_clause_token2 = 22,
  aux_sym_when_expression_token1 = 23,
  aux_sym_when_expression_token2 = 24,
  aux_sym_else_expression_token1 = 25,
  aux_sym_group_by_clause_token1 = 26,
  aux_sym_for_clause_token1 = 27,
  aux_sym_for_type_token1 = 28,
  aux_sym_for_type_token2 = 29,
  aux_sym_for_type_token3 = 30,
  aux_sym_having_clause_token1 = 31,
  aux_sym_from_clause_token1 = 32,
  aux_sym_storage_alias_token1 = 33,
  aux_sym_fields_expression_token1 = 34,
  aux_sym_fields_type_token1 = 35,
  aux_sym_fields_type_token2 = 36,
  aux_sym_fields_type_token3 = 37,
  aux_sym_where_clause_token1 = 38,
  aux_sym_and_expression_token1 = 39,
  aux_sym_or_expression_token1 = 40,
  aux_sym_not_expression_token1 = 41,
  aux_sym_soql_with_clause_token1 = 42,
  aux_sym_soql_with_type_token1 = 43,
  aux_sym_soql_with_type_token2 = 44,
  aux_sym_soql_with_type_token3 = 45,
  aux_sym_with_user_id_type_token1 = 46,
  aux_sym_with_record_visibility_expression_token1 = 47,
  aux_sym_with_record_visibility_param_token1 = 48,
  aux_sym_with_record_visibility_param_token2 = 49,
  aux_sym_with_record_visibility_param_token3 = 50,
  aux_sym_with_data_cat_expression_token1 = 51,
  aux_sym_with_data_cat_filter_type_token1 = 52,
  aux_sym_with_data_cat_filter_type_token2 = 53,
  aux_sym_with_data_cat_filter_type_token3 = 54,
  aux_sym_with_data_cat_filter_type_token4 = 55,
  aux_sym_limit_clause_token1 = 56,
  aux_sym_offset_clause_token1 = 57,
  aux_sym_update_type_token1 = 58,
  aux_sym_update_type_token2 = 59,
  aux_sym_order_by_clause_token1 = 60,
  aux_sym_order_direction_token1 = 61,
  aux_sym_order_direction_token2 = 62,
  aux_sym_order_null_direction_token1 = 63,
  aux_sym_order_null_direction_token2 = 64,
  aux_sym_geo_location_type_token1 = 65,
  aux_sym_function_expression_token1 = 66,
  anon_sym_DOT = 67,
  aux_sym_boolean_token1 = 68,
  aux_sym_boolean_token2 = 69,
  anon_sym_BANG_EQ = 70,
  anon_sym_LT_GT = 71,
  anon_sym_LT = 72,
  anon_sym_LT_EQ = 73,
  anon_sym_GT = 74,
  anon_sym_GT_EQ = 75,
  aux_sym_value_comparison_operator_token1 = 76,
  aux_sym_set_comparison_operator_token1 = 77,
  aux_sym_set_comparison_operator_token2 = 78,
  aux_sym_set_comparison_operator_token3 = 79,
  aux_sym_set_comparison_operator_token4 = 80,
  aux_sym_date_literal_token1 = 81,
  aux_sym_date_literal_token2 = 82,
  aux_sym_date_literal_token3 = 83,
  aux_sym_date_literal_token4 = 84,
  aux_sym_date_literal_token5 = 85,
  aux_sym_date_literal_token6 = 86,
  aux_sym_date_literal_token7 = 87,
  aux_sym_date_literal_token8 = 88,
  aux_sym_date_literal_token9 = 89,
  aux_sym_date_literal_token10 = 90,
  aux_sym_date_literal_token11 = 91,
  aux_sym_date_literal_token12 = 92,
  aux_sym_date_literal_token13 = 93,
  aux_sym_date_literal_token14 = 94,
  aux_sym_date_literal_token15 = 95,
  aux_sym_date_literal_token16 = 96,
  aux_sym_date_literal_token17 = 97,
  aux_sym_date_literal_token18 = 98,
  aux_sym_date_literal_token19 = 99,
  aux_sym_date_literal_token20 = 100,
  aux_sym_date_literal_token21 = 101,
  aux_sym_date_literal_token22 = 102,
  aux_sym_date_literal_token23 = 103,
  aux_sym_date_literal_with_param_token1 = 104,
  anon_sym_COLON = 105,
  anon_sym_QMARK = 106,
  sym_bound_apex_expression = 107,
  aux_sym_null_literal_token1 = 108,
  sym_string_literal = 109,
  sym_int = 110,
  sym_decimal = 111,
  sym_date = 112,
  sym_date_time = 113,
  sym_currency_literal = 114,
  sym_identifier = 115,
  sym_source_file = 116,
  sym_header_comment = 117,
  sym_formatting_comment = 118,
  sym__soql_query_expression = 119,
  sym_subquery = 120,
  sym_soql_query_body = 121,
  sym_count_expression = 122,
  sym_select_clause = 123,
  sym__selectable_expression = 124,
  sym_using_clause = 125,
  sym_using_scope_clause = 126,
  sym_using_scope_type = 127,
  sym_using_lookup_clause = 128,
  sym_using_listview_clause = 129,
  sym_using_lookup_bind_clause = 130,
  sym_using_lookup_bind_expression = 131,
  sym_type_of_clause = 132,
  sym_when_expression = 133,
  sym_else_expression = 134,
  sym_group_by_clause = 135,
  sym__group_by_expression = 136,
  sym_for_clause = 137,
  sym_for_type = 138,
  sym_having_clause = 139,
  sym_from_clause = 140,
  sym_storage_identifier = 141,
  sym_storage_alias = 142,
  sym_fields_expression = 143,
  sym_fields_type = 144,
  sym_where_clause = 145,
  sym__boolean_expression = 146,
  sym_and_expression = 147,
  sym_or_expression = 148,
  sym_not_expression = 149,
  sym__condition_expression = 150,
  sym_comparison_expression = 151,
  sym__comparison = 152,
  sym__value_comparison = 153,
  sym__set_comparison = 154,
  sym_comparable_list = 155,
  sym_soql_with_clause = 156,
  sym_soql_with_type = 157,
  sym_with_user_id_type = 158,
  sym_with_record_visibility_expression = 159,
  sym_with_record_visibility_param = 160,
  sym_with_data_cat_expression = 161,
  sym_with_data_cat_filter = 162,
  sym_with_data_cat_filter_type = 163,
  sym_limit_clause = 164,
  sym_offset_clause = 165,
  sym_update_clause = 166,
  sym_update_type = 167,
  sym_alias_expression = 168,
  sym_order_by_clause = 169,
  sym_order_expression = 170,
  sym_order_direction = 171,
  sym_order_null_direction = 172,
  sym_geo_location_type = 173,
  sym__value_expression = 174,
  sym_function_expression = 175,
  sym_dotted_identifier = 176,
  sym_field_identifier = 177,
  sym_field_list = 178,
  sym_boolean = 179,
  sym_value_comparison_operator = 180,
  sym_set_comparison_operator = 181,
  sym_date_literal = 182,
  sym_date_literal_with_param = 183,
  sym__function_name = 184,
  sym_null_literal = 185,
  sym__soql_literal = 186,
  aux_sym_source_file_repeat1 = 187,
  aux_sym_select_clause_repeat1 = 188,
  aux_sym_using_lookup_bind_clause_repeat1 = 189,
  aux_sym_type_of_clause_repeat1 = 190,
  aux_sym__group_by_expression_repeat1 = 191,
  aux_sym_for_clause_repeat1 = 192,
  aux_sym_from_clause_repeat1 = 193,
  aux_sym_and_expression_repeat1 = 194,
  aux_sym_or_expression_repeat1 = 195,
  aux_sym_comparable_list_repeat1 = 196,
  aux_sym_with_record_visibility_expression_repeat1 = 197,
  aux_sym_with_data_cat_expression_repeat1 = 198,
  aux_sym_with_data_cat_filter_repeat1 = 199,
  aux_sym_update_clause_repeat1 = 200,
  aux_sym_order_by_clause_repeat1 = 201,
  aux_sym_function_expression_repeat1 = 202,
  aux_sym_dotted_identifier_repeat1 = 203,
  aux_sym_field_list_repeat1 = 204,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_header_comment_token1] = "header_comment_token1",
  [anon_sym_SLASH_SLASH_SLASH] = "///",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_select_clause_token1] = "SELECT",
  [anon_sym_COMMA] = ",",
  [aux_sym_using_clause_token1] = "USING",
  [aux_sym_using_scope_clause_token1] = "SCOPE",
  [aux_sym_using_scope_type_token1] = "delegated",
  [aux_sym_using_scope_type_token2] = "everything",
  [aux_sym_using_scope_type_token3] = "mine",
  [aux_sym_using_scope_type_token4] = "mine_and_my_groups",
  [aux_sym_using_scope_type_token5] = "my_territory",
  [aux_sym_using_scope_type_token6] = "my_team_territory",
  [aux_sym_using_scope_type_token7] = "team",
  [aux_sym_using_lookup_clause_token1] = "LOOKUP",
  [aux_sym_using_listview_clause_token1] = "ListView",
  [anon_sym_EQ] = "=",
  [aux_sym_using_lookup_bind_clause_token1] = "BIND",
  [aux_sym_type_of_clause_token1] = "TYPEOF",
  [aux_sym_type_of_clause_token2] = "END",
  [aux_sym_when_expression_token1] = "WHEN",
  [aux_sym_when_expression_token2] = "THEN",
  [aux_sym_else_expression_token1] = "ELSE",
  [aux_sym_group_by_clause_token1] = "GROUP_BY",
  [aux_sym_for_clause_token1] = "FOR",
  [aux_sym_for_type_token1] = "UPDATE",
  [aux_sym_for_type_token2] = "REFERENCE",
  [aux_sym_for_type_token3] = "VIEW",
  [aux_sym_having_clause_token1] = "HAVING",
  [aux_sym_from_clause_token1] = "FROM",
  [aux_sym_storage_alias_token1] = "AS",
  [aux_sym_fields_expression_token1] = "FIELDS",
  [aux_sym_fields_type_token1] = "ALL",
  [aux_sym_fields_type_token2] = "CUSTOM",
  [aux_sym_fields_type_token3] = "STANDARD",
  [aux_sym_where_clause_token1] = "WHERE",
  [aux_sym_and_expression_token1] = "AND",
  [aux_sym_or_expression_token1] = "OR",
  [aux_sym_not_expression_token1] = "NOT",
  [aux_sym_soql_with_clause_token1] = "WITH",
  [aux_sym_soql_with_type_token1] = "Security_Enforced",
  [aux_sym_soql_with_type_token2] = "User_Mode",
  [aux_sym_soql_with_type_token3] = "System_Mode",
  [aux_sym_with_user_id_type_token1] = "UserId",
  [aux_sym_with_record_visibility_expression_token1] = "RecordVisibilityContext",
  [aux_sym_with_record_visibility_param_token1] = "maxDescriptorPerRecord",
  [aux_sym_with_record_visibility_param_token2] = "supportsDomains",
  [aux_sym_with_record_visibility_param_token3] = "supportsDelegates",
  [aux_sym_with_data_cat_expression_token1] = "DATA_CATEGORY",
  [aux_sym_with_data_cat_filter_type_token1] = "AT",
  [aux_sym_with_data_cat_filter_type_token2] = "ABOVE",
  [aux_sym_with_data_cat_filter_type_token3] = "BELOW",
  [aux_sym_with_data_cat_filter_type_token4] = "ABOVE_OR_BELOW",
  [aux_sym_limit_clause_token1] = "LIMIT",
  [aux_sym_offset_clause_token1] = "OFFSET",
  [aux_sym_update_type_token1] = "TRACKING",
  [aux_sym_update_type_token2] = "VIEWSTAT",
  [aux_sym_order_by_clause_token1] = "ORDER_BY",
  [aux_sym_order_direction_token1] = "ASC",
  [aux_sym_order_direction_token2] = "DESC",
  [aux_sym_order_null_direction_token1] = "NULLS_FIRST",
  [aux_sym_order_null_direction_token2] = "NULLS_LAST",
  [aux_sym_geo_location_type_token1] = "identifier",
  [aux_sym_function_expression_token1] = "identifier",
  [anon_sym_DOT] = ".",
  [aux_sym_boolean_token1] = "TRUE",
  [aux_sym_boolean_token2] = "FALSE",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [aux_sym_value_comparison_operator_token1] = "LIKE",
  [aux_sym_set_comparison_operator_token1] = "IN",
  [aux_sym_set_comparison_operator_token2] = "NOT_IN",
  [aux_sym_set_comparison_operator_token3] = "INCLUDES",
  [aux_sym_set_comparison_operator_token4] = "EXCLUDES",
  [aux_sym_date_literal_token1] = "YESTERDAY",
  [aux_sym_date_literal_token2] = "TODAY",
  [aux_sym_date_literal_token3] = "TOMORROW",
  [aux_sym_date_literal_token4] = "LAST_WEEK",
  [aux_sym_date_literal_token5] = "THIS_WEEK",
  [aux_sym_date_literal_token6] = "NEXT_WEEK",
  [aux_sym_date_literal_token7] = "LAST_MONTH",
  [aux_sym_date_literal_token8] = "THIS_MONTH",
  [aux_sym_date_literal_token9] = "NEXT_MONTH",
  [aux_sym_date_literal_token10] = "LAST_90_DAYS",
  [aux_sym_date_literal_token11] = "NEXT_90_DAYS",
  [aux_sym_date_literal_token12] = "THIS_QUARTER",
  [aux_sym_date_literal_token13] = "LAST_QUARTER",
  [aux_sym_date_literal_token14] = "NEXT_QUARTER",
  [aux_sym_date_literal_token15] = "THIS_YEAR",
  [aux_sym_date_literal_token16] = "LAST_YEAR",
  [aux_sym_date_literal_token17] = "NEXT_YEAR",
  [aux_sym_date_literal_token18] = "THIS_FISCAL_QUARTER",
  [aux_sym_date_literal_token19] = "LAST_FISCAL_QUARTER",
  [aux_sym_date_literal_token20] = "NEXT_FISCAL_QUARTER",
  [aux_sym_date_literal_token21] = "THIS_FISCAL_YEAR",
  [aux_sym_date_literal_token22] = "LAST_FISCAL_YEAR",
  [aux_sym_date_literal_token23] = "NEXT_FISCAL_YEAR",
  [aux_sym_date_literal_with_param_token1] = "date_literal",
  [anon_sym_COLON] = ":",
  [anon_sym_QMARK] = "\?",
  [sym_bound_apex_expression] = "bound_apex_expression",
  [aux_sym_null_literal_token1] = "NULL",
  [sym_string_literal] = "string_literal",
  [sym_int] = "int",
  [sym_decimal] = "decimal",
  [sym_date] = "date",
  [sym_date_time] = "date_time",
  [sym_currency_literal] = "currency_literal",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_header_comment] = "header_comment",
  [sym_formatting_comment] = "formatting_comment",
  [sym__soql_query_expression] = "_soql_query_expression",
  [sym_subquery] = "subquery",
  [sym_soql_query_body] = "soql_query_body",
  [sym_count_expression] = "count_expression",
  [sym_select_clause] = "select_clause",
  [sym__selectable_expression] = "_selectable_expression",
  [sym_using_clause] = "using_clause",
  [sym_using_scope_clause] = "using_scope_clause",
  [sym_using_scope_type] = "using_scope_type",
  [sym_using_lookup_clause] = "using_lookup_clause",
  [sym_using_listview_clause] = "using_listview_clause",
  [sym_using_lookup_bind_clause] = "using_lookup_bind_clause",
  [sym_using_lookup_bind_expression] = "using_lookup_bind_expression",
  [sym_type_of_clause] = "type_of_clause",
  [sym_when_expression] = "when_expression",
  [sym_else_expression] = "else_expression",
  [sym_group_by_clause] = "group_by_clause",
  [sym__group_by_expression] = "_group_by_expression",
  [sym_for_clause] = "for_clause",
  [sym_for_type] = "for_type",
  [sym_having_clause] = "having_clause",
  [sym_from_clause] = "from_clause",
  [sym_storage_identifier] = "storage_identifier",
  [sym_storage_alias] = "storage_alias",
  [sym_fields_expression] = "fields_expression",
  [sym_fields_type] = "fields_type",
  [sym_where_clause] = "where_clause",
  [sym__boolean_expression] = "_boolean_expression",
  [sym_and_expression] = "and_expression",
  [sym_or_expression] = "or_expression",
  [sym_not_expression] = "not_expression",
  [sym__condition_expression] = "_condition_expression",
  [sym_comparison_expression] = "comparison_expression",
  [sym__comparison] = "_comparison",
  [sym__value_comparison] = "_value_comparison",
  [sym__set_comparison] = "_set_comparison",
  [sym_comparable_list] = "comparable_list",
  [sym_soql_with_clause] = "with_clause",
  [sym_soql_with_type] = "with_type",
  [sym_with_user_id_type] = "with_user_id_type",
  [sym_with_record_visibility_expression] = "with_record_visibility_expression",
  [sym_with_record_visibility_param] = "with_record_visibility_param",
  [sym_with_data_cat_expression] = "with_data_cat_expression",
  [sym_with_data_cat_filter] = "with_data_cat_filter",
  [sym_with_data_cat_filter_type] = "with_data_cat_filter_type",
  [sym_limit_clause] = "limit_clause",
  [sym_offset_clause] = "offset_clause",
  [sym_update_clause] = "update_clause",
  [sym_update_type] = "update_type",
  [sym_alias_expression] = "alias_expression",
  [sym_order_by_clause] = "order_by_clause",
  [sym_order_expression] = "order_expression",
  [sym_order_direction] = "order_direction",
  [sym_order_null_direction] = "order_null_direction",
  [sym_geo_location_type] = "geo_location_type",
  [sym__value_expression] = "_value_expression",
  [sym_function_expression] = "function_expression",
  [sym_dotted_identifier] = "dotted_identifier",
  [sym_field_identifier] = "field_identifier",
  [sym_field_list] = "field_list",
  [sym_boolean] = "boolean",
  [sym_value_comparison_operator] = "value_comparison_operator",
  [sym_set_comparison_operator] = "set_comparison_operator",
  [sym_date_literal] = "date_literal",
  [sym_date_literal_with_param] = "date_literal_with_param",
  [sym__function_name] = "_function_name",
  [sym_null_literal] = "null_literal",
  [sym__soql_literal] = "_soql_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_select_clause_repeat1] = "select_clause_repeat1",
  [aux_sym_using_lookup_bind_clause_repeat1] = "using_lookup_bind_clause_repeat1",
  [aux_sym_type_of_clause_repeat1] = "type_of_clause_repeat1",
  [aux_sym__group_by_expression_repeat1] = "_group_by_expression_repeat1",
  [aux_sym_for_clause_repeat1] = "for_clause_repeat1",
  [aux_sym_from_clause_repeat1] = "from_clause_repeat1",
  [aux_sym_and_expression_repeat1] = "and_expression_repeat1",
  [aux_sym_or_expression_repeat1] = "or_expression_repeat1",
  [aux_sym_comparable_list_repeat1] = "comparable_list_repeat1",
  [aux_sym_with_record_visibility_expression_repeat1] = "with_record_visibility_expression_repeat1",
  [aux_sym_with_data_cat_expression_repeat1] = "with_data_cat_expression_repeat1",
  [aux_sym_with_data_cat_filter_repeat1] = "with_data_cat_filter_repeat1",
  [aux_sym_update_clause_repeat1] = "update_clause_repeat1",
  [aux_sym_order_by_clause_repeat1] = "order_by_clause_repeat1",
  [aux_sym_function_expression_repeat1] = "function_expression_repeat1",
  [aux_sym_dotted_identifier_repeat1] = "dotted_identifier_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_header_comment_token1] = aux_sym_header_comment_token1,
  [anon_sym_SLASH_SLASH_SLASH] = anon_sym_SLASH_SLASH_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_select_clause_token1] = aux_sym_select_clause_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_using_clause_token1] = aux_sym_using_clause_token1,
  [aux_sym_using_scope_clause_token1] = aux_sym_using_scope_clause_token1,
  [aux_sym_using_scope_type_token1] = aux_sym_using_scope_type_token1,
  [aux_sym_using_scope_type_token2] = aux_sym_using_scope_type_token2,
  [aux_sym_using_scope_type_token3] = aux_sym_using_scope_type_token3,
  [aux_sym_using_scope_type_token4] = aux_sym_using_scope_type_token4,
  [aux_sym_using_scope_type_token5] = aux_sym_using_scope_type_token5,
  [aux_sym_using_scope_type_token6] = aux_sym_using_scope_type_token6,
  [aux_sym_using_scope_type_token7] = aux_sym_using_scope_type_token7,
  [aux_sym_using_lookup_clause_token1] = aux_sym_using_lookup_clause_token1,
  [aux_sym_using_listview_clause_token1] = aux_sym_using_listview_clause_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_using_lookup_bind_clause_token1] = aux_sym_using_lookup_bind_clause_token1,
  [aux_sym_type_of_clause_token1] = aux_sym_type_of_clause_token1,
  [aux_sym_type_of_clause_token2] = aux_sym_type_of_clause_token2,
  [aux_sym_when_expression_token1] = aux_sym_when_expression_token1,
  [aux_sym_when_expression_token2] = aux_sym_when_expression_token2,
  [aux_sym_else_expression_token1] = aux_sym_else_expression_token1,
  [aux_sym_group_by_clause_token1] = aux_sym_group_by_clause_token1,
  [aux_sym_for_clause_token1] = aux_sym_for_clause_token1,
  [aux_sym_for_type_token1] = aux_sym_for_type_token1,
  [aux_sym_for_type_token2] = aux_sym_for_type_token2,
  [aux_sym_for_type_token3] = aux_sym_for_type_token3,
  [aux_sym_having_clause_token1] = aux_sym_having_clause_token1,
  [aux_sym_from_clause_token1] = aux_sym_from_clause_token1,
  [aux_sym_storage_alias_token1] = aux_sym_storage_alias_token1,
  [aux_sym_fields_expression_token1] = aux_sym_fields_expression_token1,
  [aux_sym_fields_type_token1] = aux_sym_fields_type_token1,
  [aux_sym_fields_type_token2] = aux_sym_fields_type_token2,
  [aux_sym_fields_type_token3] = aux_sym_fields_type_token3,
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
  [aux_sym_and_expression_token1] = aux_sym_and_expression_token1,
  [aux_sym_or_expression_token1] = aux_sym_or_expression_token1,
  [aux_sym_not_expression_token1] = aux_sym_not_expression_token1,
  [aux_sym_soql_with_clause_token1] = aux_sym_soql_with_clause_token1,
  [aux_sym_soql_with_type_token1] = aux_sym_soql_with_type_token1,
  [aux_sym_soql_with_type_token2] = aux_sym_soql_with_type_token2,
  [aux_sym_soql_with_type_token3] = aux_sym_soql_with_type_token3,
  [aux_sym_with_user_id_type_token1] = aux_sym_with_user_id_type_token1,
  [aux_sym_with_record_visibility_expression_token1] = aux_sym_with_record_visibility_expression_token1,
  [aux_sym_with_record_visibility_param_token1] = aux_sym_with_record_visibility_param_token1,
  [aux_sym_with_record_visibility_param_token2] = aux_sym_with_record_visibility_param_token2,
  [aux_sym_with_record_visibility_param_token3] = aux_sym_with_record_visibility_param_token3,
  [aux_sym_with_data_cat_expression_token1] = aux_sym_with_data_cat_expression_token1,
  [aux_sym_with_data_cat_filter_type_token1] = aux_sym_with_data_cat_filter_type_token1,
  [aux_sym_with_data_cat_filter_type_token2] = aux_sym_with_data_cat_filter_type_token2,
  [aux_sym_with_data_cat_filter_type_token3] = aux_sym_with_data_cat_filter_type_token3,
  [aux_sym_with_data_cat_filter_type_token4] = aux_sym_with_data_cat_filter_type_token4,
  [aux_sym_limit_clause_token1] = aux_sym_limit_clause_token1,
  [aux_sym_offset_clause_token1] = aux_sym_offset_clause_token1,
  [aux_sym_update_type_token1] = aux_sym_update_type_token1,
  [aux_sym_update_type_token2] = aux_sym_update_type_token2,
  [aux_sym_order_by_clause_token1] = aux_sym_order_by_clause_token1,
  [aux_sym_order_direction_token1] = aux_sym_order_direction_token1,
  [aux_sym_order_direction_token2] = aux_sym_order_direction_token2,
  [aux_sym_order_null_direction_token1] = aux_sym_order_null_direction_token1,
  [aux_sym_order_null_direction_token2] = aux_sym_order_null_direction_token2,
  [aux_sym_geo_location_type_token1] = sym_identifier,
  [aux_sym_function_expression_token1] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_boolean_token1] = aux_sym_boolean_token1,
  [aux_sym_boolean_token2] = aux_sym_boolean_token2,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [aux_sym_value_comparison_operator_token1] = aux_sym_value_comparison_operator_token1,
  [aux_sym_set_comparison_operator_token1] = aux_sym_set_comparison_operator_token1,
  [aux_sym_set_comparison_operator_token2] = aux_sym_set_comparison_operator_token2,
  [aux_sym_set_comparison_operator_token3] = aux_sym_set_comparison_operator_token3,
  [aux_sym_set_comparison_operator_token4] = aux_sym_set_comparison_operator_token4,
  [aux_sym_date_literal_token1] = aux_sym_date_literal_token1,
  [aux_sym_date_literal_token2] = aux_sym_date_literal_token2,
  [aux_sym_date_literal_token3] = aux_sym_date_literal_token3,
  [aux_sym_date_literal_token4] = aux_sym_date_literal_token4,
  [aux_sym_date_literal_token5] = aux_sym_date_literal_token5,
  [aux_sym_date_literal_token6] = aux_sym_date_literal_token6,
  [aux_sym_date_literal_token7] = aux_sym_date_literal_token7,
  [aux_sym_date_literal_token8] = aux_sym_date_literal_token8,
  [aux_sym_date_literal_token9] = aux_sym_date_literal_token9,
  [aux_sym_date_literal_token10] = aux_sym_date_literal_token10,
  [aux_sym_date_literal_token11] = aux_sym_date_literal_token11,
  [aux_sym_date_literal_token12] = aux_sym_date_literal_token12,
  [aux_sym_date_literal_token13] = aux_sym_date_literal_token13,
  [aux_sym_date_literal_token14] = aux_sym_date_literal_token14,
  [aux_sym_date_literal_token15] = aux_sym_date_literal_token15,
  [aux_sym_date_literal_token16] = aux_sym_date_literal_token16,
  [aux_sym_date_literal_token17] = aux_sym_date_literal_token17,
  [aux_sym_date_literal_token18] = aux_sym_date_literal_token18,
  [aux_sym_date_literal_token19] = aux_sym_date_literal_token19,
  [aux_sym_date_literal_token20] = aux_sym_date_literal_token20,
  [aux_sym_date_literal_token21] = aux_sym_date_literal_token21,
  [aux_sym_date_literal_token22] = aux_sym_date_literal_token22,
  [aux_sym_date_literal_token23] = aux_sym_date_literal_token23,
  [aux_sym_date_literal_with_param_token1] = sym_date_literal,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_bound_apex_expression] = sym_bound_apex_expression,
  [aux_sym_null_literal_token1] = aux_sym_null_literal_token1,
  [sym_string_literal] = sym_string_literal,
  [sym_int] = sym_int,
  [sym_decimal] = sym_decimal,
  [sym_date] = sym_date,
  [sym_date_time] = sym_date_time,
  [sym_currency_literal] = sym_currency_literal,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_header_comment] = sym_header_comment,
  [sym_formatting_comment] = sym_formatting_comment,
  [sym__soql_query_expression] = sym__soql_query_expression,
  [sym_subquery] = sym_subquery,
  [sym_soql_query_body] = sym_soql_query_body,
  [sym_count_expression] = sym_count_expression,
  [sym_select_clause] = sym_select_clause,
  [sym__selectable_expression] = sym__selectable_expression,
  [sym_using_clause] = sym_using_clause,
  [sym_using_scope_clause] = sym_using_scope_clause,
  [sym_using_scope_type] = sym_using_scope_type,
  [sym_using_lookup_clause] = sym_using_lookup_clause,
  [sym_using_listview_clause] = sym_using_listview_clause,
  [sym_using_lookup_bind_clause] = sym_using_lookup_bind_clause,
  [sym_using_lookup_bind_expression] = sym_using_lookup_bind_expression,
  [sym_type_of_clause] = sym_type_of_clause,
  [sym_when_expression] = sym_when_expression,
  [sym_else_expression] = sym_else_expression,
  [sym_group_by_clause] = sym_group_by_clause,
  [sym__group_by_expression] = sym__group_by_expression,
  [sym_for_clause] = sym_for_clause,
  [sym_for_type] = sym_for_type,
  [sym_having_clause] = sym_having_clause,
  [sym_from_clause] = sym_from_clause,
  [sym_storage_identifier] = sym_storage_identifier,
  [sym_storage_alias] = sym_storage_alias,
  [sym_fields_expression] = sym_fields_expression,
  [sym_fields_type] = sym_fields_type,
  [sym_where_clause] = sym_where_clause,
  [sym__boolean_expression] = sym__boolean_expression,
  [sym_and_expression] = sym_and_expression,
  [sym_or_expression] = sym_or_expression,
  [sym_not_expression] = sym_not_expression,
  [sym__condition_expression] = sym__condition_expression,
  [sym_comparison_expression] = sym_comparison_expression,
  [sym__comparison] = sym__comparison,
  [sym__value_comparison] = sym__value_comparison,
  [sym__set_comparison] = sym__set_comparison,
  [sym_comparable_list] = sym_comparable_list,
  [sym_soql_with_clause] = sym_soql_with_clause,
  [sym_soql_with_type] = sym_soql_with_type,
  [sym_with_user_id_type] = sym_with_user_id_type,
  [sym_with_record_visibility_expression] = sym_with_record_visibility_expression,
  [sym_with_record_visibility_param] = sym_with_record_visibility_param,
  [sym_with_data_cat_expression] = sym_with_data_cat_expression,
  [sym_with_data_cat_filter] = sym_with_data_cat_filter,
  [sym_with_data_cat_filter_type] = sym_with_data_cat_filter_type,
  [sym_limit_clause] = sym_limit_clause,
  [sym_offset_clause] = sym_offset_clause,
  [sym_update_clause] = sym_update_clause,
  [sym_update_type] = sym_update_type,
  [sym_alias_expression] = sym_alias_expression,
  [sym_order_by_clause] = sym_order_by_clause,
  [sym_order_expression] = sym_order_expression,
  [sym_order_direction] = sym_order_direction,
  [sym_order_null_direction] = sym_order_null_direction,
  [sym_geo_location_type] = sym_geo_location_type,
  [sym__value_expression] = sym__value_expression,
  [sym_function_expression] = sym_function_expression,
  [sym_dotted_identifier] = sym_dotted_identifier,
  [sym_field_identifier] = sym_field_identifier,
  [sym_field_list] = sym_field_list,
  [sym_boolean] = sym_boolean,
  [sym_value_comparison_operator] = sym_value_comparison_operator,
  [sym_set_comparison_operator] = sym_set_comparison_operator,
  [sym_date_literal] = sym_date_literal,
  [sym_date_literal_with_param] = sym_date_literal_with_param,
  [sym__function_name] = sym__function_name,
  [sym_null_literal] = sym_null_literal,
  [sym__soql_literal] = sym__soql_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_select_clause_repeat1] = aux_sym_select_clause_repeat1,
  [aux_sym_using_lookup_bind_clause_repeat1] = aux_sym_using_lookup_bind_clause_repeat1,
  [aux_sym_type_of_clause_repeat1] = aux_sym_type_of_clause_repeat1,
  [aux_sym__group_by_expression_repeat1] = aux_sym__group_by_expression_repeat1,
  [aux_sym_for_clause_repeat1] = aux_sym_for_clause_repeat1,
  [aux_sym_from_clause_repeat1] = aux_sym_from_clause_repeat1,
  [aux_sym_and_expression_repeat1] = aux_sym_and_expression_repeat1,
  [aux_sym_or_expression_repeat1] = aux_sym_or_expression_repeat1,
  [aux_sym_comparable_list_repeat1] = aux_sym_comparable_list_repeat1,
  [aux_sym_with_record_visibility_expression_repeat1] = aux_sym_with_record_visibility_expression_repeat1,
  [aux_sym_with_data_cat_expression_repeat1] = aux_sym_with_data_cat_expression_repeat1,
  [aux_sym_with_data_cat_filter_repeat1] = aux_sym_with_data_cat_filter_repeat1,
  [aux_sym_update_clause_repeat1] = aux_sym_update_clause_repeat1,
  [aux_sym_order_by_clause_repeat1] = aux_sym_order_by_clause_repeat1,
  [aux_sym_function_expression_repeat1] = aux_sym_function_expression_repeat1,
  [aux_sym_dotted_identifier_repeat1] = aux_sym_dotted_identifier_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_header_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_scope_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_scope_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_scope_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_scope_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_scope_type_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_scope_type_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_scope_type_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_scope_type_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_lookup_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_listview_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_lookup_bind_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_of_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_of_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_when_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_when_expression_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_else_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_group_by_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_for_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_for_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_for_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_for_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_having_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_storage_alias_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_fields_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_fields_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_fields_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_fields_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_where_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_and_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_or_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_not_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_soql_with_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_soql_with_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_soql_with_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_soql_with_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_user_id_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_record_visibility_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_record_visibility_param_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_record_visibility_param_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_record_visibility_param_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_data_cat_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_data_cat_filter_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_data_cat_filter_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_data_cat_filter_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_data_cat_filter_type_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_limit_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_offset_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_update_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_update_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_by_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_direction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_direction_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_null_direction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_null_direction_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_geo_location_type_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_expression_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_comparison_operator_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_comparison_operator_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_comparison_operator_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_comparison_operator_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_set_comparison_operator_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token11] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token12] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token13] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token14] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token15] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token16] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token17] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token18] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token19] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token20] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token21] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token22] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_token23] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_literal_with_param_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_bound_apex_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_null_literal_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_date_time] = {
    .visible = true,
    .named = true,
  },
  [sym_currency_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_header_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_formatting_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__soql_query_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_subquery] = {
    .visible = true,
    .named = true,
  },
  [sym_soql_query_body] = {
    .visible = true,
    .named = true,
  },
  [sym_count_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_select_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__selectable_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_using_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_using_scope_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_using_scope_type] = {
    .visible = true,
    .named = true,
  },
  [sym_using_lookup_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_using_listview_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_using_lookup_bind_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_using_lookup_bind_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type_of_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_when_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_else_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_group_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__group_by_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_for_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_for_type] = {
    .visible = true,
    .named = true,
  },
  [sym_having_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_from_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_storage_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_storage_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_fields_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_fields_type] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_not_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__condition_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_comparison_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__comparison] = {
    .visible = false,
    .named = true,
  },
  [sym__value_comparison] = {
    .visible = false,
    .named = true,
  },
  [sym__set_comparison] = {
    .visible = false,
    .named = true,
  },
  [sym_comparable_list] = {
    .visible = true,
    .named = true,
  },
  [sym_soql_with_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_soql_with_type] = {
    .visible = true,
    .named = true,
  },
  [sym_with_user_id_type] = {
    .visible = true,
    .named = true,
  },
  [sym_with_record_visibility_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_record_visibility_param] = {
    .visible = true,
    .named = true,
  },
  [sym_with_data_cat_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_data_cat_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_with_data_cat_filter_type] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_offset_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_update_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_update_type] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_order_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_order_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_order_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_order_null_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_geo_location_type] = {
    .visible = true,
    .named = true,
  },
  [sym__value_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_function_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_field_list] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_value_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_set_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_date_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_date_literal_with_param] = {
    .visible = true,
    .named = true,
  },
  [sym__function_name] = {
    .visible = false,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__soql_literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_using_lookup_bind_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_of_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__group_by_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_and_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_or_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comparable_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_with_record_visibility_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_with_data_cat_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_with_data_cat_filter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_update_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_order_by_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dotted_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_bound_value = 1,
  field_field = 2,
  field_for_clause = 3,
  field_from_clause = 4,
  field_function_name = 5,
  field_group_by_clause = 6,
  field_limit_clause = 7,
  field_lookup_field = 8,
  field_offset_clause = 9,
  field_order_by_clause = 10,
  field_select_clause = 11,
  field_update_clause = 12,
  field_using_clause = 13,
  field_where_clause = 14,
  field_with_clause = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_bound_value] = "bound_value",
  [field_field] = "field",
  [field_for_clause] = "for_clause",
  [field_from_clause] = "from_clause",
  [field_function_name] = "function_name",
  [field_group_by_clause] = "group_by_clause",
  [field_limit_clause] = "limit_clause",
  [field_lookup_field] = "lookup_field",
  [field_offset_clause] = "offset_clause",
  [field_order_by_clause] = "order_by_clause",
  [field_select_clause] = "select_clause",
  [field_update_clause] = "update_clause",
  [field_using_clause] = "using_clause",
  [field_where_clause] = "where_clause",
  [field_with_clause] = "with_clause",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 3},
  [6] = {.index = 12, .length = 3},
  [7] = {.index = 15, .length = 3},
  [8] = {.index = 18, .length = 3},
  [9] = {.index = 21, .length = 3},
  [10] = {.index = 24, .length = 3},
  [11] = {.index = 27, .length = 3},
  [12] = {.index = 30, .length = 1},
  [13] = {.index = 31, .length = 4},
  [14] = {.index = 35, .length = 4},
  [15] = {.index = 39, .length = 4},
  [16] = {.index = 43, .length = 4},
  [17] = {.index = 47, .length = 4},
  [18] = {.index = 51, .length = 4},
  [19] = {.index = 55, .length = 4},
  [20] = {.index = 59, .length = 4},
  [21] = {.index = 63, .length = 4},
  [22] = {.index = 67, .length = 4},
  [23] = {.index = 71, .length = 4},
  [24] = {.index = 75, .length = 4},
  [25] = {.index = 79, .length = 4},
  [26] = {.index = 83, .length = 4},
  [27] = {.index = 87, .length = 4},
  [28] = {.index = 91, .length = 4},
  [29] = {.index = 95, .length = 4},
  [30] = {.index = 99, .length = 4},
  [31] = {.index = 103, .length = 4},
  [32] = {.index = 107, .length = 4},
  [33] = {.index = 111, .length = 4},
  [34] = {.index = 115, .length = 4},
  [35] = {.index = 119, .length = 4},
  [36] = {.index = 123, .length = 4},
  [37] = {.index = 127, .length = 4},
  [38] = {.index = 131, .length = 4},
  [39] = {.index = 135, .length = 4},
  [40] = {.index = 139, .length = 4},
  [41] = {.index = 143, .length = 4},
  [42] = {.index = 147, .length = 4},
  [43] = {.index = 151, .length = 4},
  [44] = {.index = 155, .length = 4},
  [45] = {.index = 159, .length = 4},
  [46] = {.index = 163, .length = 4},
  [47] = {.index = 167, .length = 4},
  [48] = {.index = 171, .length = 4},
  [49] = {.index = 175, .length = 1},
  [50] = {.index = 176, .length = 5},
  [51] = {.index = 181, .length = 5},
  [52] = {.index = 186, .length = 5},
  [53] = {.index = 191, .length = 5},
  [54] = {.index = 196, .length = 5},
  [55] = {.index = 201, .length = 5},
  [56] = {.index = 206, .length = 5},
  [57] = {.index = 211, .length = 5},
  [58] = {.index = 216, .length = 5},
  [59] = {.index = 221, .length = 5},
  [60] = {.index = 226, .length = 5},
  [61] = {.index = 231, .length = 5},
  [62] = {.index = 236, .length = 5},
  [63] = {.index = 241, .length = 5},
  [64] = {.index = 246, .length = 5},
  [65] = {.index = 251, .length = 5},
  [66] = {.index = 256, .length = 5},
  [67] = {.index = 261, .length = 5},
  [68] = {.index = 266, .length = 5},
  [69] = {.index = 271, .length = 5},
  [70] = {.index = 276, .length = 5},
  [71] = {.index = 281, .length = 5},
  [72] = {.index = 286, .length = 5},
  [73] = {.index = 291, .length = 5},
  [74] = {.index = 296, .length = 5},
  [75] = {.index = 301, .length = 5},
  [76] = {.index = 306, .length = 5},
  [77] = {.index = 311, .length = 5},
  [78] = {.index = 316, .length = 5},
  [79] = {.index = 321, .length = 5},
  [80] = {.index = 326, .length = 5},
  [81] = {.index = 331, .length = 5},
  [82] = {.index = 336, .length = 5},
  [83] = {.index = 341, .length = 5},
  [84] = {.index = 346, .length = 5},
  [85] = {.index = 351, .length = 5},
  [86] = {.index = 356, .length = 5},
  [87] = {.index = 361, .length = 5},
  [88] = {.index = 366, .length = 5},
  [89] = {.index = 371, .length = 5},
  [90] = {.index = 376, .length = 5},
  [91] = {.index = 381, .length = 5},
  [92] = {.index = 386, .length = 5},
  [93] = {.index = 391, .length = 5},
  [94] = {.index = 396, .length = 5},
  [95] = {.index = 401, .length = 5},
  [96] = {.index = 406, .length = 5},
  [97] = {.index = 411, .length = 5},
  [98] = {.index = 416, .length = 5},
  [99] = {.index = 421, .length = 5},
  [100] = {.index = 426, .length = 5},
  [101] = {.index = 431, .length = 5},
  [102] = {.index = 436, .length = 5},
  [103] = {.index = 441, .length = 5},
  [104] = {.index = 446, .length = 5},
  [105] = {.index = 451, .length = 5},
  [106] = {.index = 456, .length = 5},
  [107] = {.index = 461, .length = 5},
  [108] = {.index = 466, .length = 5},
  [109] = {.index = 471, .length = 5},
  [110] = {.index = 476, .length = 5},
  [111] = {.index = 481, .length = 5},
  [112] = {.index = 486, .length = 5},
  [113] = {.index = 491, .length = 5},
  [114] = {.index = 496, .length = 5},
  [115] = {.index = 501, .length = 5},
  [116] = {.index = 506, .length = 5},
  [117] = {.index = 511, .length = 5},
  [118] = {.index = 516, .length = 5},
  [119] = {.index = 521, .length = 5},
  [120] = {.index = 526, .length = 5},
  [121] = {.index = 531, .length = 5},
  [122] = {.index = 536, .length = 5},
  [123] = {.index = 541, .length = 5},
  [124] = {.index = 546, .length = 5},
  [125] = {.index = 551, .length = 5},
  [126] = {.index = 556, .length = 5},
  [127] = {.index = 561, .length = 5},
  [128] = {.index = 566, .length = 5},
  [129] = {.index = 571, .length = 5},
  [130] = {.index = 576, .length = 5},
  [131] = {.index = 581, .length = 5},
  [132] = {.index = 586, .length = 5},
  [133] = {.index = 591, .length = 5},
  [134] = {.index = 596, .length = 6},
  [135] = {.index = 602, .length = 6},
  [136] = {.index = 608, .length = 6},
  [137] = {.index = 614, .length = 6},
  [138] = {.index = 620, .length = 6},
  [139] = {.index = 626, .length = 6},
  [140] = {.index = 632, .length = 6},
  [141] = {.index = 638, .length = 6},
  [142] = {.index = 644, .length = 6},
  [143] = {.index = 650, .length = 6},
  [144] = {.index = 656, .length = 6},
  [145] = {.index = 662, .length = 6},
  [146] = {.index = 668, .length = 6},
  [147] = {.index = 674, .length = 6},
  [148] = {.index = 680, .length = 6},
  [149] = {.index = 686, .length = 6},
  [150] = {.index = 692, .length = 6},
  [151] = {.index = 698, .length = 6},
  [152] = {.index = 704, .length = 6},
  [153] = {.index = 710, .length = 6},
  [154] = {.index = 716, .length = 6},
  [155] = {.index = 722, .length = 6},
  [156] = {.index = 728, .length = 6},
  [157] = {.index = 734, .length = 6},
  [158] = {.index = 740, .length = 6},
  [159] = {.index = 746, .length = 6},
  [160] = {.index = 752, .length = 6},
  [161] = {.index = 758, .length = 6},
  [162] = {.index = 764, .length = 6},
  [163] = {.index = 770, .length = 6},
  [164] = {.index = 776, .length = 6},
  [165] = {.index = 782, .length = 6},
  [166] = {.index = 788, .length = 6},
  [167] = {.index = 794, .length = 6},
  [168] = {.index = 800, .length = 6},
  [169] = {.index = 806, .length = 6},
  [170] = {.index = 812, .length = 6},
  [171] = {.index = 818, .length = 6},
  [172] = {.index = 824, .length = 6},
  [173] = {.index = 830, .length = 6},
  [174] = {.index = 836, .length = 6},
  [175] = {.index = 842, .length = 6},
  [176] = {.index = 848, .length = 6},
  [177] = {.index = 854, .length = 6},
  [178] = {.index = 860, .length = 6},
  [179] = {.index = 866, .length = 6},
  [180] = {.index = 872, .length = 6},
  [181] = {.index = 878, .length = 6},
  [182] = {.index = 884, .length = 6},
  [183] = {.index = 890, .length = 6},
  [184] = {.index = 896, .length = 6},
  [185] = {.index = 902, .length = 6},
  [186] = {.index = 908, .length = 6},
  [187] = {.index = 914, .length = 6},
  [188] = {.index = 920, .length = 6},
  [189] = {.index = 926, .length = 6},
  [190] = {.index = 932, .length = 6},
  [191] = {.index = 938, .length = 6},
  [192] = {.index = 944, .length = 6},
  [193] = {.index = 950, .length = 6},
  [194] = {.index = 956, .length = 6},
  [195] = {.index = 962, .length = 6},
  [196] = {.index = 968, .length = 6},
  [197] = {.index = 974, .length = 6},
  [198] = {.index = 980, .length = 6},
  [199] = {.index = 986, .length = 6},
  [200] = {.index = 992, .length = 6},
  [201] = {.index = 998, .length = 6},
  [202] = {.index = 1004, .length = 6},
  [203] = {.index = 1010, .length = 6},
  [204] = {.index = 1016, .length = 6},
  [205] = {.index = 1022, .length = 6},
  [206] = {.index = 1028, .length = 6},
  [207] = {.index = 1034, .length = 6},
  [208] = {.index = 1040, .length = 6},
  [209] = {.index = 1046, .length = 6},
  [210] = {.index = 1052, .length = 6},
  [211] = {.index = 1058, .length = 6},
  [212] = {.index = 1064, .length = 6},
  [213] = {.index = 1070, .length = 6},
  [214] = {.index = 1076, .length = 6},
  [215] = {.index = 1082, .length = 6},
  [216] = {.index = 1088, .length = 6},
  [217] = {.index = 1094, .length = 6},
  [218] = {.index = 1100, .length = 6},
  [219] = {.index = 1106, .length = 6},
  [220] = {.index = 1112, .length = 6},
  [221] = {.index = 1118, .length = 6},
  [222] = {.index = 1124, .length = 6},
  [223] = {.index = 1130, .length = 6},
  [224] = {.index = 1136, .length = 6},
  [225] = {.index = 1142, .length = 6},
  [226] = {.index = 1148, .length = 6},
  [227] = {.index = 1154, .length = 6},
  [228] = {.index = 1160, .length = 6},
  [229] = {.index = 1166, .length = 6},
  [230] = {.index = 1172, .length = 6},
  [231] = {.index = 1178, .length = 6},
  [232] = {.index = 1184, .length = 6},
  [233] = {.index = 1190, .length = 6},
  [234] = {.index = 1196, .length = 6},
  [235] = {.index = 1202, .length = 6},
  [236] = {.index = 1208, .length = 6},
  [237] = {.index = 1214, .length = 6},
  [238] = {.index = 1220, .length = 6},
  [239] = {.index = 1226, .length = 6},
  [240] = {.index = 1232, .length = 6},
  [241] = {.index = 1238, .length = 6},
  [242] = {.index = 1244, .length = 6},
  [243] = {.index = 1250, .length = 6},
  [244] = {.index = 1256, .length = 6},
  [245] = {.index = 1262, .length = 6},
  [246] = {.index = 1268, .length = 6},
  [247] = {.index = 1274, .length = 6},
  [248] = {.index = 1280, .length = 6},
  [249] = {.index = 1286, .length = 6},
  [250] = {.index = 1292, .length = 6},
  [251] = {.index = 1298, .length = 6},
  [252] = {.index = 1304, .length = 6},
  [253] = {.index = 1310, .length = 6},
  [254] = {.index = 1316, .length = 6},
  [255] = {.index = 1322, .length = 6},
  [256] = {.index = 1328, .length = 6},
  [257] = {.index = 1334, .length = 6},
  [258] = {.index = 1340, .length = 6},
  [259] = {.index = 1346, .length = 6},
  [260] = {.index = 1352, .length = 7},
  [261] = {.index = 1359, .length = 7},
  [262] = {.index = 1366, .length = 7},
  [263] = {.index = 1373, .length = 7},
  [264] = {.index = 1380, .length = 7},
  [265] = {.index = 1387, .length = 7},
  [266] = {.index = 1394, .length = 7},
  [267] = {.index = 1401, .length = 7},
  [268] = {.index = 1408, .length = 7},
  [269] = {.index = 1415, .length = 7},
  [270] = {.index = 1422, .length = 7},
  [271] = {.index = 1429, .length = 7},
  [272] = {.index = 1436, .length = 7},
  [273] = {.index = 1443, .length = 7},
  [274] = {.index = 1450, .length = 7},
  [275] = {.index = 1457, .length = 7},
  [276] = {.index = 1464, .length = 7},
  [277] = {.index = 1471, .length = 7},
  [278] = {.index = 1478, .length = 7},
  [279] = {.index = 1485, .length = 7},
  [280] = {.index = 1492, .length = 7},
  [281] = {.index = 1499, .length = 7},
  [282] = {.index = 1506, .length = 7},
  [283] = {.index = 1513, .length = 7},
  [284] = {.index = 1520, .length = 7},
  [285] = {.index = 1527, .length = 7},
  [286] = {.index = 1534, .length = 7},
  [287] = {.index = 1541, .length = 7},
  [288] = {.index = 1548, .length = 7},
  [289] = {.index = 1555, .length = 7},
  [290] = {.index = 1562, .length = 7},
  [291] = {.index = 1569, .length = 7},
  [292] = {.index = 1576, .length = 7},
  [293] = {.index = 1583, .length = 7},
  [294] = {.index = 1590, .length = 7},
  [295] = {.index = 1597, .length = 7},
  [296] = {.index = 1604, .length = 7},
  [297] = {.index = 1611, .length = 7},
  [298] = {.index = 1618, .length = 7},
  [299] = {.index = 1625, .length = 7},
  [300] = {.index = 1632, .length = 7},
  [301] = {.index = 1639, .length = 7},
  [302] = {.index = 1646, .length = 7},
  [303] = {.index = 1653, .length = 7},
  [304] = {.index = 1660, .length = 7},
  [305] = {.index = 1667, .length = 7},
  [306] = {.index = 1674, .length = 7},
  [307] = {.index = 1681, .length = 7},
  [308] = {.index = 1688, .length = 7},
  [309] = {.index = 1695, .length = 7},
  [310] = {.index = 1702, .length = 7},
  [311] = {.index = 1709, .length = 7},
  [312] = {.index = 1716, .length = 7},
  [313] = {.index = 1723, .length = 7},
  [314] = {.index = 1730, .length = 7},
  [315] = {.index = 1737, .length = 7},
  [316] = {.index = 1744, .length = 7},
  [317] = {.index = 1751, .length = 7},
  [318] = {.index = 1758, .length = 7},
  [319] = {.index = 1765, .length = 7},
  [320] = {.index = 1772, .length = 7},
  [321] = {.index = 1779, .length = 7},
  [322] = {.index = 1786, .length = 7},
  [323] = {.index = 1793, .length = 7},
  [324] = {.index = 1800, .length = 7},
  [325] = {.index = 1807, .length = 7},
  [326] = {.index = 1814, .length = 7},
  [327] = {.index = 1821, .length = 7},
  [328] = {.index = 1828, .length = 7},
  [329] = {.index = 1835, .length = 7},
  [330] = {.index = 1842, .length = 7},
  [331] = {.index = 1849, .length = 7},
  [332] = {.index = 1856, .length = 7},
  [333] = {.index = 1863, .length = 7},
  [334] = {.index = 1870, .length = 7},
  [335] = {.index = 1877, .length = 7},
  [336] = {.index = 1884, .length = 7},
  [337] = {.index = 1891, .length = 7},
  [338] = {.index = 1898, .length = 7},
  [339] = {.index = 1905, .length = 7},
  [340] = {.index = 1912, .length = 7},
  [341] = {.index = 1919, .length = 7},
  [342] = {.index = 1926, .length = 7},
  [343] = {.index = 1933, .length = 7},
  [344] = {.index = 1940, .length = 7},
  [345] = {.index = 1947, .length = 7},
  [346] = {.index = 1954, .length = 7},
  [347] = {.index = 1961, .length = 7},
  [348] = {.index = 1968, .length = 7},
  [349] = {.index = 1975, .length = 7},
  [350] = {.index = 1982, .length = 7},
  [351] = {.index = 1989, .length = 7},
  [352] = {.index = 1996, .length = 7},
  [353] = {.index = 2003, .length = 7},
  [354] = {.index = 2010, .length = 7},
  [355] = {.index = 2017, .length = 7},
  [356] = {.index = 2024, .length = 7},
  [357] = {.index = 2031, .length = 7},
  [358] = {.index = 2038, .length = 7},
  [359] = {.index = 2045, .length = 7},
  [360] = {.index = 2052, .length = 7},
  [361] = {.index = 2059, .length = 7},
  [362] = {.index = 2066, .length = 7},
  [363] = {.index = 2073, .length = 7},
  [364] = {.index = 2080, .length = 7},
  [365] = {.index = 2087, .length = 7},
  [366] = {.index = 2094, .length = 7},
  [367] = {.index = 2101, .length = 7},
  [368] = {.index = 2108, .length = 7},
  [369] = {.index = 2115, .length = 7},
  [370] = {.index = 2122, .length = 7},
  [371] = {.index = 2129, .length = 7},
  [372] = {.index = 2136, .length = 7},
  [373] = {.index = 2143, .length = 7},
  [374] = {.index = 2150, .length = 7},
  [375] = {.index = 2157, .length = 7},
  [376] = {.index = 2164, .length = 7},
  [377] = {.index = 2171, .length = 7},
  [378] = {.index = 2178, .length = 7},
  [379] = {.index = 2185, .length = 7},
  [380] = {.index = 2192, .length = 7},
  [381] = {.index = 2199, .length = 7},
  [382] = {.index = 2206, .length = 7},
  [383] = {.index = 2213, .length = 7},
  [384] = {.index = 2220, .length = 7},
  [385] = {.index = 2227, .length = 7},
  [386] = {.index = 2234, .length = 8},
  [387] = {.index = 2242, .length = 8},
  [388] = {.index = 2250, .length = 8},
  [389] = {.index = 2258, .length = 8},
  [390] = {.index = 2266, .length = 8},
  [391] = {.index = 2274, .length = 8},
  [392] = {.index = 2282, .length = 8},
  [393] = {.index = 2290, .length = 8},
  [394] = {.index = 2298, .length = 8},
  [395] = {.index = 2306, .length = 8},
  [396] = {.index = 2314, .length = 8},
  [397] = {.index = 2322, .length = 8},
  [398] = {.index = 2330, .length = 8},
  [399] = {.index = 2338, .length = 8},
  [400] = {.index = 2346, .length = 8},
  [401] = {.index = 2354, .length = 8},
  [402] = {.index = 2362, .length = 8},
  [403] = {.index = 2370, .length = 8},
  [404] = {.index = 2378, .length = 8},
  [405] = {.index = 2386, .length = 8},
  [406] = {.index = 2394, .length = 8},
  [407] = {.index = 2402, .length = 8},
  [408] = {.index = 2410, .length = 8},
  [409] = {.index = 2418, .length = 8},
  [410] = {.index = 2426, .length = 8},
  [411] = {.index = 2434, .length = 8},
  [412] = {.index = 2442, .length = 8},
  [413] = {.index = 2450, .length = 8},
  [414] = {.index = 2458, .length = 8},
  [415] = {.index = 2466, .length = 8},
  [416] = {.index = 2474, .length = 8},
  [417] = {.index = 2482, .length = 8},
  [418] = {.index = 2490, .length = 8},
  [419] = {.index = 2498, .length = 8},
  [420] = {.index = 2506, .length = 8},
  [421] = {.index = 2514, .length = 8},
  [422] = {.index = 2522, .length = 8},
  [423] = {.index = 2530, .length = 8},
  [424] = {.index = 2538, .length = 8},
  [425] = {.index = 2546, .length = 8},
  [426] = {.index = 2554, .length = 8},
  [427] = {.index = 2562, .length = 8},
  [428] = {.index = 2570, .length = 8},
  [429] = {.index = 2578, .length = 8},
  [430] = {.index = 2586, .length = 8},
  [431] = {.index = 2594, .length = 8},
  [432] = {.index = 2602, .length = 8},
  [433] = {.index = 2610, .length = 8},
  [434] = {.index = 2618, .length = 8},
  [435] = {.index = 2626, .length = 8},
  [436] = {.index = 2634, .length = 8},
  [437] = {.index = 2642, .length = 8},
  [438] = {.index = 2650, .length = 8},
  [439] = {.index = 2658, .length = 8},
  [440] = {.index = 2666, .length = 8},
  [441] = {.index = 2674, .length = 8},
  [442] = {.index = 2682, .length = 8},
  [443] = {.index = 2690, .length = 8},
  [444] = {.index = 2698, .length = 8},
  [445] = {.index = 2706, .length = 8},
  [446] = {.index = 2714, .length = 8},
  [447] = {.index = 2722, .length = 8},
  [448] = {.index = 2730, .length = 8},
  [449] = {.index = 2738, .length = 8},
  [450] = {.index = 2746, .length = 8},
  [451] = {.index = 2754, .length = 8},
  [452] = {.index = 2762, .length = 8},
  [453] = {.index = 2770, .length = 8},
  [454] = {.index = 2778, .length = 8},
  [455] = {.index = 2786, .length = 8},
  [456] = {.index = 2794, .length = 8},
  [457] = {.index = 2802, .length = 8},
  [458] = {.index = 2810, .length = 8},
  [459] = {.index = 2818, .length = 8},
  [460] = {.index = 2826, .length = 8},
  [461] = {.index = 2834, .length = 8},
  [462] = {.index = 2842, .length = 8},
  [463] = {.index = 2850, .length = 8},
  [464] = {.index = 2858, .length = 8},
  [465] = {.index = 2866, .length = 8},
  [466] = {.index = 2874, .length = 8},
  [467] = {.index = 2882, .length = 8},
  [468] = {.index = 2890, .length = 8},
  [469] = {.index = 2898, .length = 8},
  [470] = {.index = 2906, .length = 2},
  [471] = {.index = 2908, .length = 9},
  [472] = {.index = 2917, .length = 9},
  [473] = {.index = 2926, .length = 9},
  [474] = {.index = 2935, .length = 9},
  [475] = {.index = 2944, .length = 9},
  [476] = {.index = 2953, .length = 9},
  [477] = {.index = 2962, .length = 9},
  [478] = {.index = 2971, .length = 9},
  [479] = {.index = 2980, .length = 9},
  [480] = {.index = 2989, .length = 9},
  [481] = {.index = 2998, .length = 9},
  [482] = {.index = 3007, .length = 9},
  [483] = {.index = 3016, .length = 9},
  [484] = {.index = 3025, .length = 9},
  [485] = {.index = 3034, .length = 9},
  [486] = {.index = 3043, .length = 9},
  [487] = {.index = 3052, .length = 9},
  [488] = {.index = 3061, .length = 9},
  [489] = {.index = 3070, .length = 9},
  [490] = {.index = 3079, .length = 9},
  [491] = {.index = 3088, .length = 9},
  [492] = {.index = 3097, .length = 9},
  [493] = {.index = 3106, .length = 9},
  [494] = {.index = 3115, .length = 9},
  [495] = {.index = 3124, .length = 9},
  [496] = {.index = 3133, .length = 9},
  [497] = {.index = 3142, .length = 9},
  [498] = {.index = 3151, .length = 9},
  [499] = {.index = 3160, .length = 9},
  [500] = {.index = 3169, .length = 9},
  [501] = {.index = 3178, .length = 9},
  [502] = {.index = 3187, .length = 9},
  [503] = {.index = 3196, .length = 9},
  [504] = {.index = 3205, .length = 9},
  [505] = {.index = 3214, .length = 9},
  [506] = {.index = 3223, .length = 9},
  [507] = {.index = 3232, .length = 10},
  [508] = {.index = 3242, .length = 10},
  [509] = {.index = 3252, .length = 10},
  [510] = {.index = 3262, .length = 10},
  [511] = {.index = 3272, .length = 10},
  [512] = {.index = 3282, .length = 10},
  [513] = {.index = 3292, .length = 10},
  [514] = {.index = 3302, .length = 10},
  [515] = {.index = 3312, .length = 10},
  [516] = {.index = 3322, .length = 11},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function_name, 0},
  [1] =
    {field_from_clause, 1},
    {field_select_clause, 0},
  [3] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [6] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_select_clause, 0},
  [9] =
    {field_for_clause, 2},
    {field_from_clause, 1},
    {field_select_clause, 0},
  [12] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [15] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [18] =
    {field_from_clause, 1},
    {field_limit_clause, 2},
    {field_select_clause, 0},
  [21] =
    {field_from_clause, 1},
    {field_offset_clause, 2},
    {field_select_clause, 0},
  [24] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 2},
  [27] =
    {field_from_clause, 1},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
  [30] =
    {field_function_name, 0, .inherited = true},
  [31] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [35] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [39] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [43] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [47] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [51] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [55] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 3},
    {field_using_clause, 2},
  [59] =
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [63] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_select_clause, 0},
  [67] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_select_clause, 0},
  [71] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
  [75] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 3},
  [79] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [83] =
    {field_for_clause, 2},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 3},
  [87] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [91] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [95] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [99] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [103] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [107] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 3},
    {field_where_clause, 2},
  [111] =
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [115] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [119] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [123] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [127] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [131] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 3},
    {field_with_clause, 2},
  [135] =
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [139] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_limit_clause, 2},
    {field_select_clause, 0},
  [143] =
    {field_from_clause, 1},
    {field_limit_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
  [147] =
    {field_from_clause, 1},
    {field_limit_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 3},
  [151] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_offset_clause, 2},
    {field_select_clause, 0},
  [155] =
    {field_from_clause, 1},
    {field_offset_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 3},
  [159] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
  [163] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
  [167] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
  [171] =
    {field_from_clause, 1},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 3},
  [175] =
    {field_lookup_field, 1},
  [176] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [181] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [186] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [191] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_using_clause, 2},
  [196] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [201] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_using_clause, 2},
  [206] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [211] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [216] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [221] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [226] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [231] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [236] =
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [241] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [246] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [251] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [256] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [261] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [266] =
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [271] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [276] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [281] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_using_clause, 2},
  [286] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [291] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_using_clause, 2},
  [296] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [301] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [306] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [311] =
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_using_clause, 2},
  [316] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [321] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_select_clause, 0},
  [326] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
  [331] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [336] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
  [341] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [346] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [351] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [356] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [361] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [366] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [371] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [376] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [381] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_where_clause, 2},
  [386] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [391] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_where_clause, 2},
  [396] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [401] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [406] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [411] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [416] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [421] =
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [426] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [431] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [436] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_where_clause, 2},
  [441] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [446] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_where_clause, 2},
  [451] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [456] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [461] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [466] =
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_where_clause, 2},
  [471] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [476] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [481] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [486] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_with_clause, 2},
  [491] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [496] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_with_clause, 2},
  [501] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [506] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [511] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_with_clause, 2},
  [516] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [521] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_with_clause, 2},
  [526] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [531] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [536] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [541] =
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_with_clause, 2},
  [546] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_limit_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [551] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
  [556] =
    {field_from_clause, 1},
    {field_limit_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [561] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_offset_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [566] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [571] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
  [576] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
  [581] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [586] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
  [591] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [596] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [602] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [608] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [614] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [620] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [626] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [632] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [638] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [644] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [650] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [656] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [662] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [668] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [674] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [680] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [686] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [692] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [698] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [704] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [710] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [716] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [722] =
    {field_from_clause, 1},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [728] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [734] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [740] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [746] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [752] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [758] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [764] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [770] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [776] =
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [782] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [788] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [794] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [800] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [806] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [812] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [818] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [824] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [830] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [836] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [842] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [848] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [854] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [860] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [866] =
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [872] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [878] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [884] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [890] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [896] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [902] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [908] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [914] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [920] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [926] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [932] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [938] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
  [944] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [950] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [956] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [962] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [968] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [974] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [980] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [986] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [992] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [998] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1004] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1010] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1016] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1022] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1028] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1034] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1040] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1046] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1052] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1058] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1064] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1070] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1076] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1082] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1088] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1094] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1100] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1106] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1112] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1118] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1124] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1130] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1136] =
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1142] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1148] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1154] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1160] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1166] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1172] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1178] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1184] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1190] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1196] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1202] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1208] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1214] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1220] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1226] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1232] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1238] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1244] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1250] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1256] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1262] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1268] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1274] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1280] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1286] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1292] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1298] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1304] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1310] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1316] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1322] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [1328] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [1334] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
  [1340] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [1346] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [1352] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1359] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [1366] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1373] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1380] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1387] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [1394] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [1401] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1408] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [1415] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1422] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1429] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1436] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1443] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1450] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1457] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1464] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1471] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1478] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1485] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1492] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1499] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1506] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1513] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1520] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1527] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1534] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1541] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1548] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1555] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1562] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1569] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1576] =
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1583] =
    {field_from_clause, 1},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1590] =
    {field_from_clause, 1},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1597] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1604] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1611] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1618] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1625] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1632] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1639] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1646] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1653] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1660] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1667] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1674] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1681] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1688] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1695] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1702] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1709] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1716] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1723] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1730] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1737] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1744] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1751] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1758] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1765] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1772] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1779] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1786] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1793] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1800] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1807] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1814] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1821] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [1828] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1835] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1842] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
  [1849] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
  [1856] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [1863] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
  [1870] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
  [1877] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [1884] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1891] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [1898] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [1905] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [1912] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1919] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1926] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [1933] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1940] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [1947] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1954] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1961] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1968] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1975] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1982] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1989] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1996] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2003] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2010] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2017] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2024] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2031] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2038] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2045] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2052] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2059] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2066] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2073] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2080] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2087] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [2094] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [2101] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [2108] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [2115] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [2122] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2129] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [2136] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2143] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2150] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2157] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [2164] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [2171] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2178] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [2185] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2192] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2199] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2206] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [2213] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2220] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2227] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 6},
  [2234] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
  [2242] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
  [2250] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [2258] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
  [2266] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
  [2274] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2282] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2290] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2298] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2306] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2314] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2322] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2330] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2338] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2346] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2354] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2362] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2370] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2378] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2386] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2394] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2402] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2410] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2418] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2426] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2434] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2442] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2450] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2458] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2466] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2474] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2482] =
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2490] =
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2498] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2506] =
    {field_from_clause, 1},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2514] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2522] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2530] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2538] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2546] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2554] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2562] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2570] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2578] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2586] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2594] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2602] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2610] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2618] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2626] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2634] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2642] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2650] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2658] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2666] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2674] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
  [2682] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 7},
  [2690] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
  [2698] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
  [2706] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [2714] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
  [2722] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
  [2730] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2738] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2746] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2754] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2762] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2770] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2778] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2786] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2794] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2802] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2810] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2818] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2826] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2834] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2842] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2850] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
  [2858] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_with_clause, 2},
  [2866] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_with_clause, 2},
  [2874] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [2882] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_with_clause, 2},
  [2890] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_with_clause, 2},
  [2898] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_with_clause, 2},
  [2906] =
    {field_bound_value, 2},
    {field_field, 0},
  [2908] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
  [2917] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2926] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2935] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2944] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2953] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2962] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2971] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2980] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2989] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2998] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3007] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3016] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 7},
    {field_offset_clause, 8},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3025] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3034] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3043] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3052] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3061] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3070] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3079] =
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3088] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3097] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [3106] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [3115] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [3124] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [3133] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [3142] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [3151] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [3160] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_where_clause, 2},
  [3169] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [3178] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [3187] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [3196] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [3205] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [3214] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [3223] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_with_clause, 2},
  [3232] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 9},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [3242] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_select_clause, 0},
    {field_update_clause, 9},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3252] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 9},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3262] =
    {field_for_clause, 9},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 7},
    {field_offset_clause, 8},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3272] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 7},
    {field_offset_clause, 8},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 9},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3282] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 9},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3292] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 9},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3302] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 9},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [3312] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 9},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [3322] =
    {field_for_clause, 9},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 7},
    {field_offset_clause, 8},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 10},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 10,
  [27] = 9,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 29,
  [34] = 11,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 82,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 12,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 10,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 9,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 182,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 208,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 11,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 14,
  [259] = 259,
  [260] = 260,
  [261] = 13,
  [262] = 51,
  [263] = 263,
  [264] = 264,
  [265] = 17,
  [266] = 15,
  [267] = 267,
  [268] = 16,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 409,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 285,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 421,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 437,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 41,
  [448] = 68,
  [449] = 74,
  [450] = 75,
  [451] = 76,
  [452] = 69,
  [453] = 71,
  [454] = 44,
  [455] = 42,
  [456] = 72,
  [457] = 46,
  [458] = 47,
  [459] = 67,
  [460] = 49,
  [461] = 77,
  [462] = 80,
  [463] = 463,
  [464] = 442,
  [465] = 427,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 84,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 786,
  [789] = 765,
  [790] = 790,
  [791] = 791,
  [792] = 792,
  [793] = 793,
  [794] = 793,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 781,
  [799] = 799,
  [800] = 755,
  [801] = 801,
  [802] = 765,
  [803] = 787,
  [804] = 804,
  [805] = 805,
  [806] = 778,
  [807] = 770,
  [808] = 805,
  [809] = 769,
  [810] = 810,
  [811] = 796,
  [812] = 812,
  [813] = 813,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(658);
      ADVANCE_MAP(
        '!', 28,
        '\'', 2,
        '(', 666,
        ')', 667,
        '*', 10,
        ',', 669,
        '-', 642,
        '.', 745,
        '/', 15,
        ':', 783,
        '<', 750,
        '=', 682,
        '>', 752,
        '?', 784,
        'A', 123,
        'a', 123,
        'B', 199,
        'b', 199,
        'C', 581,
        'c', 581,
        'D', 68,
        'd', 68,
        'E', 334,
        'e', 334,
        'F', 77,
        'f', 77,
        'G', 202,
        'g', 202,
        'H', 69,
        'h', 69,
        'I', 365,
        'i', 365,
        'L', 101,
        'l', 101,
        'M', 70,
        'm', 70,
        'N', 46,
        'n', 46,
        'O', 265,
        'o', 265,
        'R', 178,
        'r', 178,
        'S', 133,
        's', 133,
        'T', 201,
        't', 201,
        'U', 429,
        'u', 429,
        'V', 298,
        'v', 298,
        'W', 287,
        'w', 287,
        'Y', 258,
        'y', 258,
      );
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\'', 2,
        '*', 10,
        '-', 642,
        '/', 17,
        'F', 72,
        'f', 72,
        'L', 73,
        'l', 73,
        'N', 51,
        'n', 51,
        'R', 197,
        'r', 197,
        'S', 206,
        's', 206,
        'T', 286,
        't', 286,
        'U', 426,
        'u', 426,
        'V', 297,
        'v', 297,
        'Y', 248,
        'y', 248,
      );
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(788);
      if (lookahead == '\\') ADVANCE(653);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '(', 666,
        ')', 667,
        ',', 669,
        '.', 745,
        '/', 17,
        'A', 858,
        'a', 858,
        'F', 853,
        'f', 853,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(666);
      if (lookahead == ')') ADVANCE(667);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(827);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(666);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '(', 666,
        '/', 17,
        'D', 827,
        'd', 827,
        'F', 828,
        'f', 828,
        'T', 868,
        't', 868,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(666);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(827);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(847);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(667);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(457);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(820);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(785);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == 'Z') ADVANCE(801);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(629);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(659);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(664);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(640);
      if (lookahead == '1') ADVANCE(630);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(641);
      if (lookahead == '3') ADVANCE(628);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(644);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(631);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(645);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '9', 20,
        'F', 316,
        'f', 316,
        'M', 416,
        'm', 416,
        'N', 61,
        'n', 61,
        'Q', 591,
        'q', 591,
        'W', 241,
        'w', 241,
        'Y', 256,
        'y', 256,
      );
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '9', 21,
        'F', 317,
        'f', 317,
        'M', 419,
        'm', 419,
        'N', 61,
        'n', 61,
        'Q', 592,
        'q', 592,
        'W', 244,
        'w', 244,
        'Y', 257,
        'y', 257,
      );
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(639);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(637);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(638);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(748);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'H') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'M') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == 'V') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 'Z') ADVANCE(801);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(629);
      END_STATE();
    case 44:
      if (lookahead == 'Z') ADVANCE(801);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'Z') ADVANCE(801);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(611);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(531);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(341);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(272);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(127);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(437);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(557);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(361);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(278);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(227);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(176);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(177);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(565);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(175);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(439);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(363);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(440);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(441);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(438);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(598);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(609);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(632);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 77:
      ADVANCE_MAP(
        'A', 347,
        'a', 347,
        'I', 214,
        'i', 214,
        'O', 442,
        'o', 442,
        'R', 389,
        'r', 389,
      );
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(616);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(549);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(622);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(510);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(564);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(486);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(487);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(489);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(490);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(492);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 123:
      ADVANCE_MAP(
        'B', 393,
        'b', 393,
        'L', 329,
        'l', 329,
        'N', 149,
        'n', 149,
        'S', 701,
        's', 701,
        'T', 726,
        't', 726,
      );
      END_STATE();
    case 124:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(614);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 125:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(615);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 126:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(305);
      END_STATE();
    case 127:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(255);
      END_STATE();
    case 128:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(738);
      END_STATE();
    case 129:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(737);
      END_STATE();
    case 130:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 131:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(585);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 132:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 133:
      ADVANCE_MAP(
        'C', 415,
        'c', 415,
        'E', 131,
        'e', 131,
        'T', 98,
        't', 98,
        'U', 430,
        'u', 430,
        'Y', 524,
        'y', 524,
      );
      END_STATE();
    case 134:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(399);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(216);
      END_STATE();
    case 135:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(535);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(459);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 140:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 141:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 142:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(418);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(424);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 149:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(710);
      END_STATE();
    case 150:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(686);
      END_STATE();
    case 151:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(683);
      END_STATE();
    case 152:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(720);
      END_STATE();
    case 153:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(707);
      END_STATE();
    case 154:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(673);
      END_STATE();
    case 155:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 156:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(717);
      END_STATE();
    case 157:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(722);
      END_STATE();
    case 158:
      ADVANCE_MAP(
        'D', 76,
        'd', 76,
        'F', 296,
        'f', 296,
        'M', 402,
        'm', 402,
        'Q', 588,
        'q', 588,
        'W', 236,
        'w', 236,
        'Y', 253,
        'y', 253,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 159:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 160:
      ADVANCE_MAP(
        'D', 75,
        'd', 75,
        'F', 295,
        'f', 295,
        'M', 401,
        'm', 401,
        'Q', 587,
        'q', 587,
        'W', 235,
        'w', 235,
        'Y', 252,
        'y', 252,
      );
      END_STATE();
    case 161:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(494);
      END_STATE();
    case 162:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(403);
      END_STATE();
    case 163:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 164:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 165:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 166:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 168:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 170:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 171:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 172:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(601);
      END_STATE();
    case 174:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(81);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 175:
      ADVANCE_MAP(
        'D', 99,
        'd', 99,
        'F', 319,
        'f', 319,
        'M', 423,
        'm', 423,
        'Q', 594,
        'q', 594,
        'W', 247,
        'w', 247,
        'Y', 260,
        'y', 260,
      );
      END_STATE();
    case 176:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 177:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(746);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(747);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 201:
      ADVANCE_MAP(
        'E', 74,
        'e', 74,
        'H', 207,
        'h', 207,
        'O', 162,
        'o', 162,
        'R', 79,
        'r', 79,
        'Y', 433,
        'y', 433,
      );
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(350);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 265:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(270);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(712);
      END_STATE();
    case 266:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(270);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 267:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(684);
      END_STATE();
    case 268:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 269:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(310);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 270:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(521);
      END_STATE();
    case 271:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(412);
      END_STATE();
    case 272:
      ADVANCE_MAP(
        'F', 318,
        'f', 318,
        'M', 421,
        'm', 421,
        'Q', 593,
        'q', 593,
        'W', 246,
        'w', 246,
        'Y', 259,
        'y', 259,
      );
      END_STATE();
    case 273:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(670);
      END_STATE();
    case 274:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(698);
      END_STATE();
    case 275:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(734);
      END_STATE();
    case 276:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(674);
      END_STATE();
    case 277:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(391);
      END_STATE();
    case 278:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(477);
      END_STATE();
    case 279:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(409);
      END_STATE();
    case 280:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 281:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 282:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(715);
      END_STATE();
    case 283:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(765);
      END_STATE();
    case 284:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(767);
      END_STATE();
    case 285:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(766);
      END_STATE();
    case 286:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(294);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 287:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 288:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(497);
      END_STATE();
    case 289:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(511);
      END_STATE();
    case 290:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 291:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 292:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 293:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 294:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 295:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 296:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 297:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 298:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 299:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 300:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(436);
      END_STATE();
    case 301:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 302:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 303:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 304:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 305:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 306:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 307:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 308:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 309:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 310:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 311:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 312:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 313:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 314:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 315:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(578);
      END_STATE();
    case 316:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(527);
      END_STATE();
    case 317:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 318:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(529);
      END_STATE();
    case 319:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 320:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(762);
      END_STATE();
    case 321:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(764);
      END_STATE();
    case 322:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(763);
      END_STATE();
    case 323:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(183);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(301);
      END_STATE();
    case 324:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(183);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(543);
      END_STATE();
    case 325:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(497);
      END_STATE();
    case 326:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(583);
      END_STATE();
    case 327:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(302);
      END_STATE();
    case 328:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(511);
      END_STATE();
    case 329:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 330:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(787);
      END_STATE();
    case 331:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 332:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 333:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 334:
      ADVANCE_MAP(
        'L', 513,
        'l', 513,
        'N', 150,
        'n', 150,
        'V', 200,
        'v', 200,
        'X', 132,
        'x', 132,
      );
      END_STATE();
    case 335:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(513);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 336:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 337:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(589);
      END_STATE();
    case 338:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 339:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 340:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 341:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 342:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 343:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 344:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 345:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(508);
      END_STATE();
    case 346:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 347:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(517);
      END_STATE();
    case 348:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 349:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(590);
      END_STATE();
    case 350:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 351:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 352:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 353:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 354:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 355:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(699);
      END_STATE();
    case 356:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(679);
      END_STATE();
    case 357:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(706);
      END_STATE();
    case 358:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 359:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 360:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(420);
      END_STATE();
    case 361:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(626);
      END_STATE();
    case 362:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 363:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(422);
      END_STATE();
    case 364:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 365:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(755);
      END_STATE();
    case 366:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(688);
      END_STATE();
    case 367:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(687);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 368:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(741);
      END_STATE();
    case 369:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(756);
      END_STATE();
    case 370:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 371:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 372:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 373:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 374:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 375:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 376:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 377:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 378:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 379:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 380:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 381:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      END_STATE();
    case 382:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(548);
      END_STATE();
    case 383:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(550);
      END_STATE();
    case 384:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(552);
      END_STATE();
    case 385:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 386:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 387:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(574);
      END_STATE();
    case 388:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 389:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 390:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 391:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(782);
      END_STATE();
    case 392:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(582);
      END_STATE();
    case 393:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 394:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 395:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 396:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 397:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 398:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 399:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 400:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(606);
      END_STATE();
    case 401:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 402:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 403:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 404:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 405:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 406:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(469);
      END_STATE();
    case 407:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(461);
      END_STATE();
    case 408:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(462);
      END_STATE();
    case 409:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(463);
      END_STATE();
    case 410:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(547);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 411:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(479);
      END_STATE();
    case 412:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 413:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 414:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 415:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 416:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 417:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 418:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 419:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 420:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 421:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 422:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 423:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 424:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 425:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(680);
      END_STATE();
    case 426:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 427:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(633);
      END_STATE();
    case 428:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 429:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(163);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      END_STATE();
    case 430:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(406);
      END_STATE();
    case 432:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(502);
      END_STATE();
    case 433:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 434:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 435:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 436:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(577);
      END_STATE();
    case 437:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(587);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(252);
      END_STATE();
    case 438:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(594);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(260);
      END_STATE();
    case 439:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(595);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(261);
      END_STATE();
    case 440:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(596);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(262);
      END_STATE();
    case 441:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(597);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(263);
      END_STATE();
    case 442:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
      END_STATE();
    case 443:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 444:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 445:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(774);
      END_STATE();
    case 446:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(775);
      END_STATE();
    case 447:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(773);
      END_STATE();
    case 448:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(771);
      END_STATE();
    case 449:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(772);
      END_STATE();
    case 450:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(770);
      END_STATE();
    case 451:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(780);
      END_STATE();
    case 452:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(781);
      END_STATE();
    case 453:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(779);
      END_STATE();
    case 454:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(777);
      END_STATE();
    case 455:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(778);
      END_STATE();
    case 456:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 457:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      END_STATE();
    case 458:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 459:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 460:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 461:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 462:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 463:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(618);
      END_STATE();
    case 464:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 465:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 466:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 467:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 468:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 469:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 470:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 471:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 472:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 473:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 474:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(636);
      END_STATE();
    case 475:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 476:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 477:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 478:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 479:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 480:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 481:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 482:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 483:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 484:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(563);
      END_STATE();
    case 485:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 486:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 487:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 488:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 489:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 490:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 491:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 492:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 493:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 494:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(703);
      END_STATE();
    case 495:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(758);
      END_STATE();
    case 496:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(757);
      END_STATE();
    case 497:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(782);
      END_STATE();
    case 498:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(768);
      END_STATE();
    case 499:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(769);
      END_STATE();
    case 500:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(723);
      END_STATE();
    case 501:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(724);
      END_STATE();
    case 502:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(676);
      END_STATE();
    case 503:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 504:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 505:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 506:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      END_STATE();
    case 507:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 508:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(634);
      END_STATE();
    case 509:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(555);
      END_STATE();
    case 510:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(540);
      END_STATE();
    case 511:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 512:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      END_STATE();
    case 513:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 514:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(293);
      END_STATE();
    case 515:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(129);
      END_STATE();
    case 516:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 517:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      END_STATE();
    case 518:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 519:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(537);
      END_STATE();
    case 520:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(538);
      END_STATE();
    case 521:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(226);
      END_STATE();
    case 522:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(575);
      END_STATE();
    case 523:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      END_STATE();
    case 524:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      END_STATE();
    case 525:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(576);
      END_STATE();
    case 526:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(559);
      END_STATE();
    case 527:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      END_STATE();
    case 528:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      END_STATE();
    case 529:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 530:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      END_STATE();
    case 531:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(713);
      END_STATE();
    case 532:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 533:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(730);
      END_STATE();
    case 534:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(732);
      END_STATE();
    case 535:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(668);
      END_STATE();
    case 536:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      END_STATE();
    case 537:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(740);
      END_STATE();
    case 538:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(739);
      END_STATE();
    case 539:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(721);
      END_STATE();
    case 540:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 541:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 542:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(290);
      END_STATE();
    case 543:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      END_STATE();
    case 544:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(289);
      END_STATE();
    case 545:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 546:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      END_STATE();
    case 547:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(635);
      END_STATE();
    case 548:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      END_STATE();
    case 549:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(309);
      END_STATE();
    case 550:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(285);
      END_STATE();
    case 551:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(624);
      END_STATE();
    case 552:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      END_STATE();
    case 553:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      END_STATE();
    case 554:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(620);
      END_STATE();
    case 555:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(396);
      END_STATE();
    case 556:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      END_STATE();
    case 557:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 558:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 559:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 560:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 561:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      END_STATE();
    case 562:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      END_STATE();
    case 563:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(224);
      END_STATE();
    case 564:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 565:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 566:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      END_STATE();
    case 567:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(238);
      END_STATE();
    case 568:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      END_STATE();
    case 569:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 570:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      END_STATE();
    case 571:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      END_STATE();
    case 572:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      END_STATE();
    case 573:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      END_STATE();
    case 574:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(249);
      END_STATE();
    case 575:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 576:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 577:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(411);
      END_STATE();
    case 578:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(413);
      END_STATE();
    case 579:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 580:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 581:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(509);
      END_STATE();
    case 582:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(427);
      END_STATE();
    case 583:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(425);
      END_STATE();
    case 584:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 585:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(475);
      END_STATE();
    case 586:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 587:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 588:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 589:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 590:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 591:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 592:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 593:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 594:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 595:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 596:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 597:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 598:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(299);
      END_STATE();
    case 599:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(187);
      END_STATE();
    case 600:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(312);
      END_STATE();
    case 601:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(303);
      END_STATE();
    case 602:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(697);
      END_STATE();
    case 603:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(728);
      END_STATE();
    case 604:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(681);
      END_STATE();
    case 605:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(761);
      END_STATE();
    case 606:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(729);
      END_STATE();
    case 607:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 608:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(525);
      END_STATE();
    case 609:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(168);
      END_STATE();
    case 610:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(539);
      END_STATE();
    case 611:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(579);
      END_STATE();
    case 612:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 613:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(760);
      END_STATE();
    case 614:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(690);
      END_STATE();
    case 615:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(736);
      END_STATE();
    case 616:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(759);
      END_STATE();
    case 617:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(677);
      END_STATE();
    case 618:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(725);
      END_STATE();
    case 619:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(678);
      END_STATE();
    case 620:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 621:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(542);
      END_STATE();
    case 622:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(497);
      END_STATE();
    case 623:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(498);
      END_STATE();
    case 624:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 625:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(499);
      END_STATE();
    case 626:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 627:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(511);
      END_STATE();
    case 628:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(800);
      END_STATE();
    case 629:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(652);
      END_STATE();
    case 630:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(13);
      END_STATE();
    case 631:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(25);
      END_STATE();
    case 632:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 633:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 634:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 635:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 636:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 637:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(646);
      END_STATE();
    case 638:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(647);
      END_STATE();
    case 639:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(651);
      END_STATE();
    case 640:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 641:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(800);
      END_STATE();
    case 642:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      END_STATE();
    case 643:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      END_STATE();
    case 644:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(800);
      END_STATE();
    case 645:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 646:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 647:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(801);
      END_STATE();
    case 648:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 649:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 650:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(803);
      END_STATE();
    case 651:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 652:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 653:
      ADVANCE_MAP(
        '"', 2,
        '%', 2,
        '\'', 2,
        'B', 2,
        'F', 2,
        'N', 2,
        'R', 2,
        'T', 2,
        'U', 2,
        '\\', 2,
        '_', 2,
        'b', 2,
        'f', 2,
        'n', 2,
        'r', 2,
        't', 2,
        'u', 2,
      );
      END_STATE();
    case 654:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 655:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 656:
      if (eof) ADVANCE(658);
      ADVANCE_MAP(
        '!', 28,
        '(', 666,
        ')', 667,
        '*', 10,
        ',', 669,
        '-', 642,
        '.', 745,
        '/', 17,
        '<', 750,
        '=', 682,
        '>', 752,
        'A', 515,
        'a', 515,
        'B', 292,
        'b', 292,
        'D', 232,
        'd', 232,
        'E', 335,
        'e', 335,
        'F', 388,
        'f', 388,
        'G', 458,
        'g', 458,
        'H', 69,
        'h', 69,
        'I', 365,
        'i', 365,
        'L', 291,
        'l', 291,
        'N', 410,
        'n', 410,
        'O', 266,
        'o', 266,
        'T', 470,
        't', 470,
        'U', 428,
        'u', 428,
        'V', 313,
        'v', 313,
        'W', 287,
        'w', 287,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(656);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      END_STATE();
    case 657:
      if (eof) ADVANCE(658);
      ADVANCE_MAP(
        ')', 667,
        ',', 669,
        '.', 745,
        '/', 17,
        'A', 858,
        'a', 858,
        'F', 844,
        'f', 844,
        'G', 852,
        'g', 852,
        'L', 829,
        'l', 829,
        'O', 822,
        'o', 822,
        'U', 850,
        'u', 850,
        'W', 826,
        'w', 826,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(657);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '/') ADVANCE(664);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(662);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(660);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(663);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(663);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(663);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(663);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_using_scope_clause_token1);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token1);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token2);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token3);
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token4);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token5);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token6);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token7);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_using_lookup_clause_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_using_listview_clause_token1);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_using_lookup_bind_clause_token1);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token2);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_when_expression_token1);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_when_expression_token2);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_else_expression_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_for_type_token2);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(576);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_having_clause_token1);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_fields_expression_token1);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_fields_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_fields_type_token1);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_fields_type_token2);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_fields_type_token3);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_and_expression_token1);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_or_expression_token1);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_or_expression_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_not_expression_token1);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_not_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_soql_with_clause_token1);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_soql_with_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token1);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token2);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token3);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_with_user_id_type_token1);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_expression_token1);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token1);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token2);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token3);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_with_data_cat_expression_token1);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token1);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token2);
      if (lookahead == '_') ADVANCE(407);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token3);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token4);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_update_type_token1);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_update_type_token2);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token1);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token2);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(751);
      if (lookahead == '>') ADVANCE(749);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(753);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_value_comparison_operator_token1);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token2);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token3);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token4);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_date_literal_token1);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_date_literal_token2);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_date_literal_token3);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_date_literal_token4);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_date_literal_token5);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_date_literal_token6);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_date_literal_token7);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_date_literal_token8);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_date_literal_token9);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_date_literal_token10);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_date_literal_token11);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_date_literal_token12);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_date_literal_token13);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_date_literal_token14);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_date_literal_token15);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_date_literal_token16);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_date_literal_token17);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_date_literal_token18);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_date_literal_token19);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_date_literal_token20);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_date_literal_token21);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_date_literal_token22);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_date_literal_token23);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_date_literal_with_param_token1);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_bound_apex_expression);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(634);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(797);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_date_time);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_currency_literal);
      if (lookahead == '.') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_currency_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(803);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(823);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(817);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(810);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 656},
  [10] = {.lex_state = 656},
  [11] = {.lex_state = 656},
  [12] = {.lex_state = 656},
  [13] = {.lex_state = 656},
  [14] = {.lex_state = 656},
  [15] = {.lex_state = 656},
  [16] = {.lex_state = 656},
  [17] = {.lex_state = 656},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 656},
  [21] = {.lex_state = 656},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 657},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 657},
  [27] = {.lex_state = 657},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 657},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 657},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 657},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 657},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 656},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 656},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 656},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 3},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 3},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 3},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 5},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 3},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 5},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 1},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 1},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 5},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 5},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 5},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 656},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 8},
  [448] = {.lex_state = 8},
  [449] = {.lex_state = 8},
  [450] = {.lex_state = 8},
  [451] = {.lex_state = 8},
  [452] = {.lex_state = 8},
  [453] = {.lex_state = 8},
  [454] = {.lex_state = 8},
  [455] = {.lex_state = 8},
  [456] = {.lex_state = 8},
  [457] = {.lex_state = 8},
  [458] = {.lex_state = 8},
  [459] = {.lex_state = 8},
  [460] = {.lex_state = 8},
  [461] = {.lex_state = 8},
  [462] = {.lex_state = 8},
  [463] = {.lex_state = 656},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 5},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 5},
  [511] = {.lex_state = 5},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 5},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 5},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 5},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 656},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 5},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 5},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 8},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 5},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 656},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 660},
  [763] = {.lex_state = 5},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 5},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 5},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 5},
  [776] = {.lex_state = 660},
  [777] = {.lex_state = 5},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 5},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 5},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 5},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 5},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_formatting_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_select_clause_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_using_clause_token1] = ACTIONS(1),
    [aux_sym_using_scope_clause_token1] = ACTIONS(1),
    [aux_sym_using_scope_type_token1] = ACTIONS(1),
    [aux_sym_using_scope_type_token2] = ACTIONS(1),
    [aux_sym_using_scope_type_token3] = ACTIONS(1),
    [aux_sym_using_scope_type_token4] = ACTIONS(1),
    [aux_sym_using_scope_type_token5] = ACTIONS(1),
    [aux_sym_using_scope_type_token6] = ACTIONS(1),
    [aux_sym_using_scope_type_token7] = ACTIONS(1),
    [aux_sym_using_lookup_clause_token1] = ACTIONS(1),
    [aux_sym_using_listview_clause_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_using_lookup_bind_clause_token1] = ACTIONS(1),
    [aux_sym_type_of_clause_token1] = ACTIONS(1),
    [aux_sym_type_of_clause_token2] = ACTIONS(1),
    [aux_sym_when_expression_token1] = ACTIONS(1),
    [aux_sym_when_expression_token2] = ACTIONS(1),
    [aux_sym_else_expression_token1] = ACTIONS(1),
    [aux_sym_group_by_clause_token1] = ACTIONS(1),
    [aux_sym_for_clause_token1] = ACTIONS(1),
    [aux_sym_for_type_token1] = ACTIONS(1),
    [aux_sym_for_type_token2] = ACTIONS(1),
    [aux_sym_for_type_token3] = ACTIONS(1),
    [aux_sym_having_clause_token1] = ACTIONS(1),
    [aux_sym_from_clause_token1] = ACTIONS(1),
    [aux_sym_storage_alias_token1] = ACTIONS(1),
    [aux_sym_fields_expression_token1] = ACTIONS(1),
    [aux_sym_fields_type_token1] = ACTIONS(1),
    [aux_sym_fields_type_token2] = ACTIONS(1),
    [aux_sym_fields_type_token3] = ACTIONS(1),
    [aux_sym_where_clause_token1] = ACTIONS(1),
    [aux_sym_and_expression_token1] = ACTIONS(1),
    [aux_sym_or_expression_token1] = ACTIONS(1),
    [aux_sym_not_expression_token1] = ACTIONS(1),
    [aux_sym_soql_with_clause_token1] = ACTIONS(1),
    [aux_sym_soql_with_type_token1] = ACTIONS(1),
    [aux_sym_soql_with_type_token2] = ACTIONS(1),
    [aux_sym_soql_with_type_token3] = ACTIONS(1),
    [aux_sym_with_user_id_type_token1] = ACTIONS(1),
    [aux_sym_with_record_visibility_expression_token1] = ACTIONS(1),
    [aux_sym_with_record_visibility_param_token1] = ACTIONS(1),
    [aux_sym_with_record_visibility_param_token2] = ACTIONS(1),
    [aux_sym_with_record_visibility_param_token3] = ACTIONS(1),
    [aux_sym_with_data_cat_expression_token1] = ACTIONS(1),
    [aux_sym_with_data_cat_filter_type_token1] = ACTIONS(1),
    [aux_sym_with_data_cat_filter_type_token2] = ACTIONS(1),
    [aux_sym_with_data_cat_filter_type_token3] = ACTIONS(1),
    [aux_sym_with_data_cat_filter_type_token4] = ACTIONS(1),
    [aux_sym_limit_clause_token1] = ACTIONS(1),
    [aux_sym_offset_clause_token1] = ACTIONS(1),
    [aux_sym_update_type_token1] = ACTIONS(1),
    [aux_sym_update_type_token2] = ACTIONS(1),
    [aux_sym_order_by_clause_token1] = ACTIONS(1),
    [aux_sym_order_direction_token2] = ACTIONS(1),
    [aux_sym_order_null_direction_token1] = ACTIONS(1),
    [aux_sym_order_null_direction_token2] = ACTIONS(1),
    [aux_sym_geo_location_type_token1] = ACTIONS(1),
    [aux_sym_function_expression_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [aux_sym_value_comparison_operator_token1] = ACTIONS(1),
    [aux_sym_set_comparison_operator_token1] = ACTIONS(1),
    [aux_sym_set_comparison_operator_token3] = ACTIONS(1),
    [aux_sym_set_comparison_operator_token4] = ACTIONS(1),
    [aux_sym_date_literal_token1] = ACTIONS(1),
    [aux_sym_date_literal_token2] = ACTIONS(1),
    [aux_sym_date_literal_token3] = ACTIONS(1),
    [aux_sym_date_literal_token4] = ACTIONS(1),
    [aux_sym_date_literal_token5] = ACTIONS(1),
    [aux_sym_date_literal_token6] = ACTIONS(1),
    [aux_sym_date_literal_token7] = ACTIONS(1),
    [aux_sym_date_literal_token8] = ACTIONS(1),
    [aux_sym_date_literal_token9] = ACTIONS(1),
    [aux_sym_date_literal_token10] = ACTIONS(1),
    [aux_sym_date_literal_token11] = ACTIONS(1),
    [aux_sym_date_literal_token12] = ACTIONS(1),
    [aux_sym_date_literal_token13] = ACTIONS(1),
    [aux_sym_date_literal_token14] = ACTIONS(1),
    [aux_sym_date_literal_token15] = ACTIONS(1),
    [aux_sym_date_literal_token16] = ACTIONS(1),
    [aux_sym_date_literal_token17] = ACTIONS(1),
    [aux_sym_date_literal_token18] = ACTIONS(1),
    [aux_sym_date_literal_token19] = ACTIONS(1),
    [aux_sym_date_literal_token20] = ACTIONS(1),
    [aux_sym_date_literal_token21] = ACTIONS(1),
    [aux_sym_date_literal_token22] = ACTIONS(1),
    [aux_sym_date_literal_token23] = ACTIONS(1),
    [aux_sym_date_literal_with_param_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_bound_apex_expression] = ACTIONS(1),
    [aux_sym_null_literal_token1] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_date_time] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(795),
    [sym_header_comment] = STATE(546),
    [sym_formatting_comment] = STATE(1),
    [sym__soql_query_expression] = STATE(758),
    [sym_soql_query_body] = STATE(801),
    [sym_select_clause] = STATE(607),
    [aux_sym_source_file_repeat1] = STATE(178),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(3),
    [aux_sym_select_clause_token1] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_select_clause_token1,
    ACTIONS(13), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(15), 1,
      sym_bound_apex_expression,
    ACTIONS(17), 1,
      aux_sym_null_literal_token1,
    STATE(2), 1,
      sym_formatting_comment,
    STATE(427), 1,
      sym__soql_literal,
    STATE(607), 1,
      sym_select_clause,
    STATE(786), 1,
      sym_soql_query_body,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(19), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(21), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(47), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(11), 23,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
  [73] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_select_clause_token1,
    ACTIONS(13), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(17), 1,
      aux_sym_null_literal_token1,
    ACTIONS(23), 1,
      sym_bound_apex_expression,
    STATE(3), 1,
      sym_formatting_comment,
    STATE(465), 1,
      sym__soql_literal,
    STATE(607), 1,
      sym_select_clause,
    STATE(788), 1,
      sym_soql_query_body,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(19), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(21), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(47), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(11), 23,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
  [146] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(13), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(17), 1,
      aux_sym_null_literal_token1,
    ACTIONS(25), 1,
      sym_bound_apex_expression,
    STATE(4), 1,
      sym_formatting_comment,
    STATE(671), 1,
      sym__soql_literal,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(19), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(21), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(47), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(11), 23,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
  [210] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(13), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(17), 1,
      aux_sym_null_literal_token1,
    ACTIONS(27), 1,
      sym_bound_apex_expression,
    STATE(5), 1,
      sym_formatting_comment,
    STATE(72), 1,
      sym__soql_literal,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(19), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(21), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(47), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(11), 23,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
  [274] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(33), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(35), 1,
      sym_bound_apex_expression,
    ACTIONS(37), 1,
      aux_sym_null_literal_token1,
    STATE(6), 1,
      sym_formatting_comment,
    STATE(456), 1,
      sym__soql_literal,
    ACTIONS(29), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(39), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(41), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(458), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(31), 23,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
  [338] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(13), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(17), 1,
      aux_sym_null_literal_token1,
    STATE(7), 1,
      sym_formatting_comment,
    STATE(78), 1,
      sym__soql_literal,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(19), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(21), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(47), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(11), 23,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
  [399] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(8), 1,
      sym_formatting_comment,
    ACTIONS(45), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    ACTIONS(43), 30,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      aux_sym_date_literal_token1,
      aux_sym_date_literal_token2,
      aux_sym_date_literal_token3,
      aux_sym_date_literal_token4,
      aux_sym_date_literal_token5,
      aux_sym_date_literal_token6,
      aux_sym_date_literal_token7,
      aux_sym_date_literal_token8,
      aux_sym_date_literal_token9,
      aux_sym_date_literal_token10,
      aux_sym_date_literal_token11,
      aux_sym_date_literal_token12,
      aux_sym_date_literal_token13,
      aux_sym_date_literal_token14,
      aux_sym_date_literal_token15,
      aux_sym_date_literal_token16,
      aux_sym_date_literal_token17,
      aux_sym_date_literal_token18,
      aux_sym_date_literal_token19,
      aux_sym_date_literal_token20,
      aux_sym_date_literal_token21,
      aux_sym_date_literal_token22,
      aux_sym_date_literal_token23,
      aux_sym_date_literal_with_param_token1,
      sym_bound_apex_expression,
      aux_sym_null_literal_token1,
      sym_string_literal,
      sym_date_time,
  [444] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(9), 1,
      sym_formatting_comment,
    STATE(10), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(47), 29,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      aux_sym_using_lookup_bind_clause_token1,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
      aux_sym_set_comparison_operator_token4,
  [493] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_DOT,
    STATE(10), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(58), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(53), 29,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      aux_sym_using_lookup_bind_clause_token1,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
      aux_sym_set_comparison_operator_token4,
  [540] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(11), 1,
      sym_formatting_comment,
    ACTIONS(58), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(53), 30,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      aux_sym_using_lookup_bind_clause_token1,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
      anon_sym_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
      aux_sym_set_comparison_operator_token4,
  [584] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(12), 1,
      sym_formatting_comment,
    ACTIONS(64), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(60), 22,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
      aux_sym_set_comparison_operator_token4,
  [629] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(13), 1,
      sym_formatting_comment,
    ACTIONS(68), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(66), 22,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
      aux_sym_set_comparison_operator_token4,
  [665] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(14), 1,
      sym_formatting_comment,
    ACTIONS(72), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(70), 22,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
      aux_sym_set_comparison_operator_token4,
  [701] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(15), 1,
      sym_formatting_comment,
    ACTIONS(76), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(74), 22,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
      aux_sym_set_comparison_operator_token4,
  [737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(16), 1,
      sym_formatting_comment,
    ACTIONS(64), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(60), 22,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
      aux_sym_set_comparison_operator_token4,
  [773] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(17), 1,
      sym_formatting_comment,
    ACTIONS(80), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(78), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
      aux_sym_set_comparison_operator_token4,
  [807] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(84), 1,
      aux_sym_using_clause_token1,
    ACTIONS(86), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(92), 1,
      aux_sym_where_clause_token1,
    ACTIONS(94), 1,
      aux_sym_soql_with_clause_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(18), 1,
      sym_formatting_comment,
    STATE(19), 1,
      sym_using_clause,
    STATE(25), 1,
      sym_where_clause,
    STATE(38), 1,
      sym_soql_with_clause,
    STATE(52), 1,
      sym_group_by_clause,
    STATE(97), 1,
      sym_order_by_clause,
    STATE(135), 1,
      sym_limit_clause,
    STATE(211), 1,
      sym_offset_clause,
    STATE(394), 1,
      sym_for_clause,
    STATE(730), 1,
      sym_update_clause,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [872] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(86), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(92), 1,
      aux_sym_where_clause_token1,
    ACTIONS(94), 1,
      aux_sym_soql_with_clause_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(19), 1,
      sym_formatting_comment,
    STATE(24), 1,
      sym_where_clause,
    STATE(39), 1,
      sym_soql_with_clause,
    STATE(65), 1,
      sym_group_by_clause,
    STATE(94), 1,
      sym_order_by_clause,
    STATE(133), 1,
      sym_limit_clause,
    STATE(217), 1,
      sym_offset_clause,
    STATE(309), 1,
      sym_for_clause,
    STATE(712), 1,
      sym_update_clause,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [931] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(108), 1,
      aux_sym_set_comparison_operator_token1,
    STATE(5), 1,
      sym_value_comparison_operator,
    STATE(20), 1,
      sym_formatting_comment,
    STATE(75), 1,
      sym__comparison,
    STATE(409), 1,
      sym_set_comparison_operator,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(76), 2,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(110), 3,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
      aux_sym_set_comparison_operator_token4,
    ACTIONS(104), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [971] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(108), 1,
      aux_sym_set_comparison_operator_token1,
    STATE(6), 1,
      sym_value_comparison_operator,
    STATE(21), 1,
      sym_formatting_comment,
    STATE(415), 1,
      sym_set_comparison_operator,
    STATE(450), 1,
      sym__comparison,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(451), 2,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(110), 3,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
      aux_sym_set_comparison_operator_token4,
    ACTIONS(104), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [1011] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(116), 1,
      aux_sym_fields_expression_token1,
    ACTIONS(118), 1,
      aux_sym_function_expression_token1,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(22), 1,
      sym_formatting_comment,
    STATE(268), 1,
      sym_dotted_identifier,
    STATE(348), 1,
      sym__value_expression,
    STATE(436), 1,
      sym__selectable_expression,
    STATE(757), 1,
      sym_count_expression,
    STATE(764), 1,
      sym__function_name,
    STATE(265), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(506), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1058] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(23), 1,
      sym_formatting_comment,
    STATE(27), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(124), 9,
      aux_sym_using_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1089] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(86), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(94), 1,
      aux_sym_soql_with_clause_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(24), 1,
      sym_formatting_comment,
    STATE(37), 1,
      sym_soql_with_clause,
    STATE(62), 1,
      sym_group_by_clause,
    STATE(107), 1,
      sym_order_by_clause,
    STATE(128), 1,
      sym_limit_clause,
    STATE(187), 1,
      sym_offset_clause,
    STATE(296), 1,
      sym_for_clause,
    STATE(518), 1,
      sym_update_clause,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1142] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(86), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(94), 1,
      aux_sym_soql_with_clause_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(25), 1,
      sym_formatting_comment,
    STATE(35), 1,
      sym_soql_with_clause,
    STATE(54), 1,
      sym_group_by_clause,
    STATE(96), 1,
      sym_order_by_clause,
    STATE(141), 1,
      sym_limit_clause,
    STATE(220), 1,
      sym_offset_clause,
    STATE(336), 1,
      sym_for_clause,
    STATE(490), 1,
      sym_update_clause,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1195] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(132), 1,
      anon_sym_DOT,
    STATE(26), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(58), 9,
      aux_sym_using_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1224] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(27), 1,
      sym_formatting_comment,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(51), 9,
      aux_sym_using_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1255] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_not_expression_token1,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(16), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(28), 1,
      sym_formatting_comment,
    STATE(51), 1,
      sym__condition_expression,
    STATE(68), 1,
      sym_comparison_expression,
    STATE(116), 1,
      sym__boolean_expression,
    STATE(803), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(117), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1301] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(137), 1,
      aux_sym_not_expression_token1,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_dotted_identifier,
    STATE(21), 1,
      sym__value_expression,
    STATE(29), 1,
      sym_formatting_comment,
    STATE(262), 1,
      sym__condition_expression,
    STATE(448), 1,
      sym_comparison_expression,
    STATE(793), 1,
      sym__boolean_expression,
    STATE(803), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(117), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1347] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_not_expression_token1,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(16), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(30), 1,
      sym_formatting_comment,
    STATE(51), 1,
      sym__condition_expression,
    STATE(68), 1,
      sym_comparison_expression,
    STATE(184), 1,
      sym__boolean_expression,
    STATE(803), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(117), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1393] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(31), 1,
      sym_formatting_comment,
    STATE(48), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(149), 7,
      aux_sym_using_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [1427] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(116), 1,
      aux_sym_fields_expression_token1,
    ACTIONS(118), 1,
      aux_sym_function_expression_token1,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(32), 1,
      sym_formatting_comment,
    STATE(268), 1,
      sym_dotted_identifier,
    STATE(348), 1,
      sym__value_expression,
    STATE(486), 1,
      sym__selectable_expression,
    STATE(787), 1,
      sym__function_name,
    STATE(265), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(506), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1471] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(137), 1,
      aux_sym_not_expression_token1,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_dotted_identifier,
    STATE(21), 1,
      sym__value_expression,
    STATE(33), 1,
      sym_formatting_comment,
    STATE(262), 1,
      sym__condition_expression,
    STATE(448), 1,
      sym_comparison_expression,
    STATE(794), 1,
      sym__boolean_expression,
    STATE(803), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(117), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1517] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(34), 1,
      sym_formatting_comment,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_DOT,
    ACTIONS(58), 9,
      aux_sym_using_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1543] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(86), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(35), 1,
      sym_formatting_comment,
    STATE(53), 1,
      sym_group_by_clause,
    STATE(114), 1,
      sym_order_by_clause,
    STATE(134), 1,
      sym_limit_clause,
    STATE(235), 1,
      sym_offset_clause,
    STATE(302), 1,
      sym_for_clause,
    STATE(662), 1,
      sym_update_clause,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1590] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(151), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(36), 1,
      sym_formatting_comment,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(159), 7,
      aux_sym_using_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [1619] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(86), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(37), 1,
      sym_formatting_comment,
    STATE(55), 1,
      sym_group_by_clause,
    STATE(88), 1,
      sym_order_by_clause,
    STATE(147), 1,
      sym_limit_clause,
    STATE(223), 1,
      sym_offset_clause,
    STATE(299), 1,
      sym_for_clause,
    STATE(573), 1,
      sym_update_clause,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1666] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(86), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(38), 1,
      sym_formatting_comment,
    STATE(60), 1,
      sym_group_by_clause,
    STATE(102), 1,
      sym_order_by_clause,
    STATE(142), 1,
      sym_limit_clause,
    STATE(234), 1,
      sym_offset_clause,
    STATE(385), 1,
      sym_for_clause,
    STATE(503), 1,
      sym_update_clause,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1713] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(86), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(39), 1,
      sym_formatting_comment,
    STATE(66), 1,
      sym_group_by_clause,
    STATE(110), 1,
      sym_order_by_clause,
    STATE(129), 1,
      sym_limit_clause,
    STATE(215), 1,
      sym_offset_clause,
    STATE(352), 1,
      sym_for_clause,
    STATE(543), 1,
      sym_update_clause,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1760] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(40), 1,
      sym_formatting_comment,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(124), 9,
      aux_sym_using_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1785] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(169), 1,
      aux_sym_or_expression_token1,
    STATE(41), 1,
      sym_formatting_comment,
    ACTIONS(167), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_from_clause_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1809] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(173), 1,
      aux_sym_or_expression_token1,
    STATE(42), 1,
      sym_formatting_comment,
    ACTIONS(171), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1833] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(43), 2,
      sym_formatting_comment,
      aux_sym_from_clause_repeat1,
    ACTIONS(157), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1857] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(180), 1,
      aux_sym_or_expression_token1,
    STATE(44), 1,
      sym_formatting_comment,
    ACTIONS(178), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1881] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      sym_formatting_comment,
    STATE(48), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(145), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1907] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(184), 1,
      aux_sym_or_expression_token1,
    STATE(46), 1,
      sym_formatting_comment,
    ACTIONS(182), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1931] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(188), 1,
      aux_sym_or_expression_token1,
    STATE(47), 1,
      sym_formatting_comment,
    ACTIONS(186), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1955] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_from_clause_repeat1,
    STATE(48), 1,
      sym_formatting_comment,
    ACTIONS(190), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1981] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(194), 1,
      aux_sym_or_expression_token1,
    STATE(49), 1,
      sym_formatting_comment,
    ACTIONS(192), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2005] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(50), 1,
      sym_formatting_comment,
    STATE(100), 1,
      sym_order_direction,
    STATE(181), 1,
      sym_order_null_direction,
    ACTIONS(198), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(200), 2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
    ACTIONS(196), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [2035] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(204), 1,
      aux_sym_and_expression_token1,
    ACTIONS(206), 1,
      aux_sym_or_expression_token1,
    STATE(51), 1,
      sym_formatting_comment,
    STATE(73), 1,
      aux_sym_and_expression_repeat1,
    STATE(74), 1,
      aux_sym_or_expression_repeat1,
    ACTIONS(202), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2065] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(52), 1,
      sym_formatting_comment,
    STATE(113), 1,
      sym_order_by_clause,
    STATE(139), 1,
      sym_limit_clause,
    STATE(202), 1,
      sym_offset_clause,
    STATE(397), 1,
      sym_for_clause,
    STATE(479), 1,
      sym_update_clause,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2106] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(53), 1,
      sym_formatting_comment,
    STATE(90), 1,
      sym_order_by_clause,
    STATE(152), 1,
      sym_limit_clause,
    STATE(200), 1,
      sym_offset_clause,
    STATE(390), 1,
      sym_for_clause,
    STATE(734), 1,
      sym_update_clause,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2147] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(54), 1,
      sym_formatting_comment,
    STATE(112), 1,
      sym_order_by_clause,
    STATE(132), 1,
      sym_limit_clause,
    STATE(212), 1,
      sym_offset_clause,
    STATE(279), 1,
      sym_for_clause,
    STATE(617), 1,
      sym_update_clause,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2188] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(55), 1,
      sym_formatting_comment,
    STATE(92), 1,
      sym_order_by_clause,
    STATE(157), 1,
      sym_limit_clause,
    STATE(218), 1,
      sym_offset_clause,
    STATE(301), 1,
      sym_for_clause,
    STATE(487), 1,
      sym_update_clause,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2229] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      sym_formatting_comment,
    STATE(59), 1,
      aux_sym_using_lookup_bind_clause_repeat1,
    ACTIONS(216), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2254] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(222), 1,
      aux_sym_using_lookup_bind_clause_token1,
    STATE(57), 1,
      sym_formatting_comment,
    STATE(115), 1,
      sym_using_lookup_bind_clause,
    ACTIONS(220), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2279] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(58), 2,
      sym_formatting_comment,
      aux_sym_using_lookup_bind_clause_repeat1,
    ACTIONS(224), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2302] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_using_lookup_bind_clause_repeat1,
    STATE(59), 1,
      sym_formatting_comment,
    ACTIONS(229), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2327] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(60), 1,
      sym_formatting_comment,
    STATE(81), 1,
      sym_order_by_clause,
    STATE(137), 1,
      sym_limit_clause,
    STATE(254), 1,
      sym_offset_clause,
    STATE(377), 1,
      sym_for_clause,
    STATE(743), 1,
      sym_update_clause,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2368] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(61), 1,
      sym_formatting_comment,
    ACTIONS(233), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2389] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(62), 1,
      sym_formatting_comment,
    STATE(86), 1,
      sym_order_by_clause,
    STATE(145), 1,
      sym_limit_clause,
    STATE(253), 1,
      sym_offset_clause,
    STATE(288), 1,
      sym_for_clause,
    STATE(555), 1,
      sym_update_clause,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2430] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(63), 1,
      sym_formatting_comment,
    ACTIONS(237), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2451] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(64), 1,
      sym_formatting_comment,
    ACTIONS(157), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2472] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(65), 1,
      sym_formatting_comment,
    STATE(101), 1,
      sym_order_by_clause,
    STATE(146), 1,
      sym_limit_clause,
    STATE(243), 1,
      sym_offset_clause,
    STATE(413), 1,
      sym_for_clause,
    STATE(494), 1,
      sym_update_clause,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2513] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(100), 1,
      aux_sym_order_by_clause_token1,
    STATE(66), 1,
      sym_formatting_comment,
    STATE(89), 1,
      sym_order_by_clause,
    STATE(149), 1,
      sym_limit_clause,
    STATE(192), 1,
      sym_offset_clause,
    STATE(320), 1,
      sym_for_clause,
    STATE(605), 1,
      sym_update_clause,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2554] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(245), 1,
      aux_sym_or_expression_token1,
    STATE(67), 1,
      sym_formatting_comment,
    ACTIONS(243), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2576] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(249), 1,
      aux_sym_or_expression_token1,
    STATE(68), 1,
      sym_formatting_comment,
    ACTIONS(247), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2598] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(253), 1,
      aux_sym_or_expression_token1,
    STATE(69), 1,
      sym_formatting_comment,
    ACTIONS(251), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2620] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(257), 1,
      aux_sym_and_expression_token1,
    STATE(70), 2,
      sym_formatting_comment,
      aux_sym_and_expression_repeat1,
    ACTIONS(255), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2642] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(262), 1,
      aux_sym_or_expression_token1,
    STATE(71), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
    ACTIONS(260), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2664] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(267), 1,
      aux_sym_or_expression_token1,
    STATE(72), 1,
      sym_formatting_comment,
    ACTIONS(265), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2686] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(204), 1,
      aux_sym_and_expression_token1,
    STATE(70), 1,
      aux_sym_and_expression_repeat1,
    STATE(73), 1,
      sym_formatting_comment,
    ACTIONS(269), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2710] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(206), 1,
      aux_sym_or_expression_token1,
    STATE(71), 1,
      aux_sym_or_expression_repeat1,
    STATE(74), 1,
      sym_formatting_comment,
    ACTIONS(271), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2734] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(275), 1,
      aux_sym_or_expression_token1,
    STATE(75), 1,
      sym_formatting_comment,
    ACTIONS(273), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2756] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(279), 1,
      aux_sym_or_expression_token1,
    STATE(76), 1,
      sym_formatting_comment,
    ACTIONS(277), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2778] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(283), 1,
      aux_sym_or_expression_token1,
    STATE(77), 1,
      sym_formatting_comment,
    ACTIONS(281), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2800] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(78), 1,
      sym_formatting_comment,
    ACTIONS(285), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2820] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(79), 1,
      sym_formatting_comment,
    ACTIONS(224), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2840] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(289), 1,
      aux_sym_or_expression_token1,
    STATE(80), 1,
      sym_formatting_comment,
    ACTIONS(287), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2862] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(81), 1,
      sym_formatting_comment,
    STATE(154), 1,
      sym_limit_clause,
    STATE(207), 1,
      sym_offset_clause,
    STATE(274), 1,
      sym_for_clause,
    STATE(520), 1,
      sym_update_clause,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2897] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(16), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(68), 1,
      sym_comparison_expression,
    STATE(82), 1,
      sym_formatting_comment,
    STATE(84), 1,
      sym__condition_expression,
    STATE(803), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
  [2932] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(83), 1,
      sym_formatting_comment,
    ACTIONS(255), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2951] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(293), 1,
      aux_sym_or_expression_token1,
    STATE(84), 1,
      sym_formatting_comment,
    ACTIONS(260), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2972] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(297), 1,
      aux_sym_and_expression_token1,
    STATE(85), 1,
      sym_formatting_comment,
    STATE(91), 1,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(295), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2995] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(86), 1,
      sym_formatting_comment,
    STATE(156), 1,
      sym_limit_clause,
    STATE(216), 1,
      sym_offset_clause,
    STATE(298), 1,
      sym_for_clause,
    STATE(484), 1,
      sym_update_clause,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3030] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(303), 1,
      aux_sym_with_user_id_type_token1,
    ACTIONS(305), 1,
      aux_sym_with_record_visibility_expression_token1,
    ACTIONS(307), 1,
      aux_sym_with_data_cat_expression_token1,
    STATE(87), 1,
      sym_formatting_comment,
    STATE(168), 1,
      sym_soql_with_type,
    ACTIONS(301), 3,
      aux_sym_soql_with_type_token1,
      aux_sym_soql_with_type_token2,
      aux_sym_soql_with_type_token3,
    STATE(167), 3,
      sym_with_user_id_type,
      sym_with_record_visibility_expression,
      sym_with_data_cat_expression,
  [3059] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(88), 1,
      sym_formatting_comment,
    STATE(158), 1,
      sym_limit_clause,
    STATE(221), 1,
      sym_offset_clause,
    STATE(308), 1,
      sym_for_clause,
    STATE(496), 1,
      sym_update_clause,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3094] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(89), 1,
      sym_formatting_comment,
    STATE(159), 1,
      sym_limit_clause,
    STATE(225), 1,
      sym_offset_clause,
    STATE(318), 1,
      sym_for_clause,
    STATE(512), 1,
      sym_update_clause,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3129] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(90), 1,
      sym_formatting_comment,
    STATE(160), 1,
      sym_limit_clause,
    STATE(230), 1,
      sym_offset_clause,
    STATE(334), 1,
      sym_for_clause,
    STATE(549), 1,
      sym_update_clause,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3164] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(317), 1,
      aux_sym_and_expression_token1,
    STATE(91), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(315), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3185] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(92), 1,
      sym_formatting_comment,
    STATE(164), 1,
      sym_limit_clause,
    STATE(239), 1,
      sym_offset_clause,
    STATE(361), 1,
      sym_for_clause,
    STATE(610), 1,
      sym_update_clause,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3220] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(93), 2,
      sym_formatting_comment,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3241] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(94), 1,
      sym_formatting_comment,
    STATE(130), 1,
      sym_limit_clause,
    STATE(248), 1,
      sym_offset_clause,
    STATE(303), 1,
      sym_for_clause,
    STATE(569), 1,
      sym_update_clause,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3276] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(297), 1,
      aux_sym_and_expression_token1,
    STATE(85), 1,
      aux_sym_with_data_cat_expression_repeat1,
    STATE(95), 1,
      sym_formatting_comment,
    ACTIONS(329), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3299] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(96), 1,
      sym_formatting_comment,
    STATE(136), 1,
      sym_limit_clause,
    STATE(250), 1,
      sym_offset_clause,
    STATE(349), 1,
      sym_for_clause,
    STATE(725), 1,
      sym_update_clause,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3334] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(97), 1,
      sym_formatting_comment,
    STATE(171), 1,
      sym_limit_clause,
    STATE(255), 1,
      sym_offset_clause,
    STATE(408), 1,
      sym_for_clause,
    STATE(548), 1,
      sym_update_clause,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3369] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym__group_by_expression_repeat1,
    STATE(98), 1,
      sym_formatting_comment,
    ACTIONS(335), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3392] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(99), 1,
      sym_formatting_comment,
    ACTIONS(339), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3411] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(100), 1,
      sym_formatting_comment,
    STATE(183), 1,
      sym_order_null_direction,
    ACTIONS(200), 2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
    ACTIONS(341), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [3434] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(101), 1,
      sym_formatting_comment,
    STATE(144), 1,
      sym_limit_clause,
    STATE(251), 1,
      sym_offset_clause,
    STATE(284), 1,
      sym_for_clause,
    STATE(547), 1,
      sym_update_clause,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3469] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(102), 1,
      sym_formatting_comment,
    STATE(138), 1,
      sym_limit_clause,
    STATE(189), 1,
      sym_offset_clause,
    STATE(275), 1,
      sym_for_clause,
    STATE(745), 1,
      sym_update_clause,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3504] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(103), 1,
      sym_formatting_comment,
    ACTIONS(347), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3523] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym__group_by_expression_repeat1,
    STATE(104), 1,
      sym_formatting_comment,
    ACTIONS(349), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3546] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(105), 1,
      sym_formatting_comment,
    ACTIONS(351), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3565] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(16), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(68), 1,
      sym_comparison_expression,
    STATE(106), 1,
      sym_formatting_comment,
    STATE(123), 1,
      sym__condition_expression,
    STATE(803), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
  [3600] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(107), 1,
      sym_formatting_comment,
    STATE(148), 1,
      sym_limit_clause,
    STATE(190), 1,
      sym_offset_clause,
    STATE(313), 1,
      sym_for_clause,
    STATE(598), 1,
      sym_update_clause,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3635] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(108), 1,
      sym_formatting_comment,
    ACTIONS(355), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3654] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(16), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(68), 1,
      sym_comparison_expression,
    STATE(83), 1,
      sym__condition_expression,
    STATE(109), 1,
      sym_formatting_comment,
    STATE(803), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
  [3689] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(110), 1,
      sym_formatting_comment,
    STATE(150), 1,
      sym_limit_clause,
    STATE(194), 1,
      sym_offset_clause,
    STATE(344), 1,
      sym_for_clause,
    STATE(631), 1,
      sym_update_clause,
    ACTIONS(357), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3724] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_dotted_identifier,
    STATE(21), 1,
      sym__value_expression,
    STATE(111), 1,
      sym_formatting_comment,
    STATE(448), 1,
      sym_comparison_expression,
    STATE(736), 1,
      sym__condition_expression,
    STATE(803), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
  [3759] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(112), 1,
      sym_formatting_comment,
    STATE(151), 1,
      sym_limit_clause,
    STATE(198), 1,
      sym_offset_clause,
    STATE(384), 1,
      sym_for_clause,
    STATE(727), 1,
      sym_update_clause,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3794] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(113), 1,
      sym_formatting_comment,
    STATE(131), 1,
      sym_limit_clause,
    STATE(199), 1,
      sym_offset_clause,
    STATE(386), 1,
      sym_for_clause,
    STATE(603), 1,
      sym_update_clause,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3829] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(114), 1,
      sym_formatting_comment,
    STATE(153), 1,
      sym_limit_clause,
    STATE(203), 1,
      sym_offset_clause,
    STATE(406), 1,
      sym_for_clause,
    STATE(750), 1,
      sym_update_clause,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3864] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(115), 1,
      sym_formatting_comment,
    ACTIONS(365), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3883] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(116), 1,
      sym_formatting_comment,
    ACTIONS(367), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3901] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(117), 1,
      sym_formatting_comment,
    ACTIONS(202), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3919] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(118), 1,
      sym_formatting_comment,
    ACTIONS(322), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3937] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(119), 1,
      sym_formatting_comment,
    ACTIONS(369), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3955] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(120), 1,
      sym_formatting_comment,
    ACTIONS(315), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3973] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(121), 1,
      sym_formatting_comment,
    ACTIONS(371), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
  [3991] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(375), 1,
      aux_sym_having_clause_token1,
    STATE(122), 1,
      sym_formatting_comment,
    STATE(175), 1,
      sym_having_clause,
    ACTIONS(373), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4013] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(123), 1,
      sym_formatting_comment,
    ACTIONS(377), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4031] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(124), 1,
      sym_formatting_comment,
    ACTIONS(379), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4049] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(125), 1,
      sym_formatting_comment,
    ACTIONS(381), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4067] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(126), 1,
      sym_formatting_comment,
    ACTIONS(383), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4084] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      sym_formatting_comment,
    STATE(170), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(385), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4105] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(128), 1,
      sym_formatting_comment,
    STATE(188), 1,
      sym_offset_clause,
    STATE(306), 1,
      sym_for_clause,
    STATE(580), 1,
      sym_update_clause,
    ACTIONS(389), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4134] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(129), 1,
      sym_formatting_comment,
    STATE(193), 1,
      sym_offset_clause,
    STATE(335), 1,
      sym_for_clause,
    STATE(616), 1,
      sym_update_clause,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4163] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(130), 1,
      sym_formatting_comment,
    STATE(195), 1,
      sym_offset_clause,
    STATE(351), 1,
      sym_for_clause,
    STATE(656), 1,
      sym_update_clause,
    ACTIONS(393), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4192] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(131), 1,
      sym_formatting_comment,
    STATE(196), 1,
      sym_offset_clause,
    STATE(362), 1,
      sym_for_clause,
    STATE(686), 1,
      sym_update_clause,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4221] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(132), 1,
      sym_formatting_comment,
    STATE(197), 1,
      sym_offset_clause,
    STATE(371), 1,
      sym_for_clause,
    STATE(711), 1,
      sym_update_clause,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4250] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(133), 1,
      sym_formatting_comment,
    STATE(233), 1,
      sym_offset_clause,
    STATE(290), 1,
      sym_for_clause,
    STATE(551), 1,
      sym_update_clause,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4279] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(134), 1,
      sym_formatting_comment,
    STATE(201), 1,
      sym_offset_clause,
    STATE(401), 1,
      sym_for_clause,
    STATE(747), 1,
      sym_update_clause,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4308] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(135), 1,
      sym_formatting_comment,
    STATE(238), 1,
      sym_offset_clause,
    STATE(400), 1,
      sym_for_clause,
    STATE(524), 1,
      sym_update_clause,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4337] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(136), 1,
      sym_formatting_comment,
    STATE(204), 1,
      sym_offset_clause,
    STATE(412), 1,
      sym_for_clause,
    STATE(735), 1,
      sym_update_clause,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4366] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(137), 1,
      sym_formatting_comment,
    STATE(205), 1,
      sym_offset_clause,
    STATE(416), 1,
      sym_for_clause,
    STATE(471), 1,
      sym_update_clause,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4395] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(138), 1,
      sym_formatting_comment,
    STATE(186), 1,
      sym_offset_clause,
    STATE(278), 1,
      sym_for_clause,
    STATE(675), 1,
      sym_update_clause,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4424] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(139), 1,
      sym_formatting_comment,
    STATE(252), 1,
      sym_offset_clause,
    STATE(329), 1,
      sym_for_clause,
    STATE(581), 1,
      sym_update_clause,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4453] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_DOT,
    STATE(140), 1,
      sym_formatting_comment,
    STATE(180), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(60), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(64), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [4478] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(141), 1,
      sym_formatting_comment,
    STATE(246), 1,
      sym_offset_clause,
    STATE(319), 1,
      sym_for_clause,
    STATE(687), 1,
      sym_update_clause,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4507] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(142), 1,
      sym_formatting_comment,
    STATE(256), 1,
      sym_offset_clause,
    STATE(403), 1,
      sym_for_clause,
    STATE(749), 1,
      sym_update_clause,
    ACTIONS(417), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4536] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(143), 2,
      sym_formatting_comment,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(419), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4555] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(144), 1,
      sym_formatting_comment,
    STATE(213), 1,
      sym_offset_clause,
    STATE(292), 1,
      sym_for_clause,
    STATE(476), 1,
      sym_update_clause,
    ACTIONS(424), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4584] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(145), 1,
      sym_formatting_comment,
    STATE(214), 1,
      sym_offset_clause,
    STATE(295), 1,
      sym_for_clause,
    STATE(480), 1,
      sym_update_clause,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4613] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(146), 1,
      sym_formatting_comment,
    STATE(249), 1,
      sym_offset_clause,
    STATE(276), 1,
      sym_for_clause,
    STATE(538), 1,
      sym_update_clause,
    ACTIONS(428), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4642] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(147), 1,
      sym_formatting_comment,
    STATE(219), 1,
      sym_offset_clause,
    STATE(305), 1,
      sym_for_clause,
    STATE(492), 1,
      sym_update_clause,
    ACTIONS(430), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4671] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(148), 1,
      sym_formatting_comment,
    STATE(222), 1,
      sym_offset_clause,
    STATE(312), 1,
      sym_for_clause,
    STATE(502), 1,
      sym_update_clause,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4700] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(149), 1,
      sym_formatting_comment,
    STATE(257), 1,
      sym_offset_clause,
    STATE(315), 1,
      sym_for_clause,
    STATE(507), 1,
      sym_update_clause,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4729] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(150), 1,
      sym_formatting_comment,
    STATE(226), 1,
      sym_offset_clause,
    STATE(322), 1,
      sym_for_clause,
    STATE(519), 1,
      sym_update_clause,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4758] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(151), 1,
      sym_formatting_comment,
    STATE(227), 1,
      sym_offset_clause,
    STATE(328), 1,
      sym_for_clause,
    STATE(539), 1,
      sym_update_clause,
    ACTIONS(438), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4787] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(152), 1,
      sym_formatting_comment,
    STATE(228), 1,
      sym_offset_clause,
    STATE(331), 1,
      sym_for_clause,
    STATE(544), 1,
      sym_update_clause,
    ACTIONS(440), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4816] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(153), 1,
      sym_formatting_comment,
    STATE(231), 1,
      sym_offset_clause,
    STATE(338), 1,
      sym_for_clause,
    STATE(556), 1,
      sym_update_clause,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4845] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(154), 1,
      sym_formatting_comment,
    STATE(232), 1,
      sym_offset_clause,
    STATE(343), 1,
      sym_for_clause,
    STATE(568), 1,
      sym_update_clause,
    ACTIONS(444), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4874] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(155), 1,
      sym_formatting_comment,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4891] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(156), 1,
      sym_formatting_comment,
    STATE(236), 1,
      sym_offset_clause,
    STATE(355), 1,
      sym_for_clause,
    STATE(599), 1,
      sym_update_clause,
    ACTIONS(448), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4920] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(157), 1,
      sym_formatting_comment,
    STATE(237), 1,
      sym_offset_clause,
    STATE(358), 1,
      sym_for_clause,
    STATE(604), 1,
      sym_update_clause,
    ACTIONS(450), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4949] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(158), 1,
      sym_formatting_comment,
    STATE(240), 1,
      sym_offset_clause,
    STATE(365), 1,
      sym_for_clause,
    STATE(618), 1,
      sym_update_clause,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4978] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(159), 1,
      sym_formatting_comment,
    STATE(241), 1,
      sym_offset_clause,
    STATE(370), 1,
      sym_for_clause,
    STATE(632), 1,
      sym_update_clause,
    ACTIONS(454), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5007] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(160), 1,
      sym_formatting_comment,
    STATE(242), 1,
      sym_offset_clause,
    STATE(376), 1,
      sym_for_clause,
    STATE(652), 1,
      sym_update_clause,
    ACTIONS(456), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5036] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(118), 1,
      aux_sym_function_expression_token1,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_formatting_comment,
    STATE(268), 1,
      sym_dotted_identifier,
    STATE(434), 1,
      sym__value_expression,
    STATE(787), 1,
      sym__function_name,
    STATE(265), 2,
      sym_function_expression,
      sym_field_identifier,
  [5065] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(462), 1,
      aux_sym_using_scope_type_token3,
    STATE(108), 1,
      sym_using_scope_type,
    STATE(162), 1,
      sym_formatting_comment,
    ACTIONS(460), 6,
      aux_sym_using_scope_type_token1,
      aux_sym_using_scope_type_token2,
      aux_sym_using_scope_type_token4,
      aux_sym_using_scope_type_token5,
      aux_sym_using_scope_type_token6,
      aux_sym_using_scope_type_token7,
  [5086] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(163), 1,
      sym_formatting_comment,
    ACTIONS(464), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5103] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(164), 1,
      sym_formatting_comment,
    STATE(245), 1,
      sym_offset_clause,
    STATE(389), 1,
      sym_for_clause,
    STATE(688), 1,
      sym_update_clause,
    ACTIONS(466), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5132] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(16), 1,
      sym_dotted_identifier,
    STATE(50), 1,
      sym__value_expression,
    STATE(127), 1,
      sym_order_expression,
    STATE(165), 1,
      sym_formatting_comment,
    STATE(803), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
  [5161] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(468), 1,
      aux_sym_type_of_clause_token2,
    ACTIONS(470), 1,
      aux_sym_when_expression_token1,
    ACTIONS(472), 1,
      aux_sym_else_expression_token1,
    STATE(9), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(166), 1,
      sym_formatting_comment,
    STATE(224), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(423), 1,
      sym_when_expression,
    STATE(761), 1,
      sym_else_expression,
  [5192] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(167), 1,
      sym_formatting_comment,
    ACTIONS(474), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5209] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(168), 1,
      sym_formatting_comment,
    ACTIONS(476), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5226] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(16), 1,
      sym_dotted_identifier,
    STATE(50), 1,
      sym__value_expression,
    STATE(169), 1,
      sym_formatting_comment,
    STATE(179), 1,
      sym_order_expression,
    STATE(803), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
  [5255] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_order_by_clause_repeat1,
    STATE(170), 1,
      sym_formatting_comment,
    ACTIONS(478), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5276] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(171), 1,
      sym_formatting_comment,
    STATE(191), 1,
      sym_offset_clause,
    STATE(289), 1,
      sym_for_clause,
    STATE(673), 1,
      sym_update_clause,
    ACTIONS(480), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5305] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(172), 1,
      sym_formatting_comment,
    STATE(271), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(484), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5329] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(118), 1,
      aux_sym_function_expression_token1,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(173), 1,
      sym_formatting_comment,
    STATE(268), 1,
      sym_dotted_identifier,
    STATE(469), 1,
      sym__value_expression,
    STATE(787), 1,
      sym__function_name,
    STATE(265), 2,
      sym_function_expression,
      sym_field_identifier,
  [5355] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(53), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(174), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(58), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5375] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(175), 1,
      sym_formatting_comment,
    ACTIONS(489), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5391] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(176), 1,
      sym_formatting_comment,
    ACTIONS(491), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5407] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(16), 1,
      sym_dotted_identifier,
    STATE(122), 1,
      sym__group_by_expression,
    STATE(177), 1,
      sym_formatting_comment,
    STATE(803), 1,
      sym__function_name,
    STATE(104), 2,
      sym_function_expression,
      sym_field_identifier,
  [5433] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_select_clause_token1,
    STATE(178), 1,
      sym_formatting_comment,
    STATE(405), 1,
      aux_sym_source_file_repeat1,
    STATE(546), 1,
      sym_header_comment,
    STATE(607), 1,
      sym_select_clause,
    STATE(801), 1,
      sym_soql_query_body,
    STATE(810), 1,
      sym__soql_query_expression,
  [5461] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(179), 1,
      sym_formatting_comment,
    ACTIONS(419), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5477] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(413), 1,
      anon_sym_DOT,
    STATE(174), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(180), 1,
      sym_formatting_comment,
    ACTIONS(47), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(51), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5499] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(181), 1,
      sym_formatting_comment,
    ACTIONS(341), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5515] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(118), 1,
      aux_sym_function_expression_token1,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(182), 1,
      sym_formatting_comment,
    STATE(268), 1,
      sym_dotted_identifier,
    STATE(421), 1,
      sym__value_expression,
    STATE(787), 1,
      sym__function_name,
    STATE(265), 2,
      sym_function_expression,
      sym_field_identifier,
  [5541] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(183), 1,
      sym_formatting_comment,
    ACTIONS(493), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5557] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(184), 1,
      sym_formatting_comment,
    ACTIONS(495), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5573] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(118), 1,
      aux_sym_function_expression_token1,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(185), 1,
      sym_formatting_comment,
    STATE(268), 1,
      sym_dotted_identifier,
    STATE(434), 1,
      sym__value_expression,
    STATE(787), 1,
      sym__function_name,
    STATE(265), 2,
      sym_function_expression,
      sym_field_identifier,
  [5599] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(186), 1,
      sym_formatting_comment,
    STATE(346), 1,
      sym_for_clause,
    STATE(574), 1,
      sym_update_clause,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5622] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(187), 1,
      sym_formatting_comment,
    STATE(310), 1,
      sym_for_clause,
    STATE(585), 1,
      sym_update_clause,
    ACTIONS(499), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5645] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(188), 1,
      sym_formatting_comment,
    STATE(311), 1,
      sym_for_clause,
    STATE(499), 1,
      sym_update_clause,
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5668] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(189), 1,
      sym_formatting_comment,
    STATE(280), 1,
      sym_for_clause,
    STATE(724), 1,
      sym_update_clause,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5691] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(190), 1,
      sym_formatting_comment,
    STATE(314), 1,
      sym_for_clause,
    STATE(504), 1,
      sym_update_clause,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5714] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(191), 1,
      sym_formatting_comment,
    STATE(281), 1,
      sym_for_clause,
    STATE(732), 1,
      sym_update_clause,
    ACTIONS(507), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5737] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(192), 1,
      sym_formatting_comment,
    STATE(317), 1,
      sym_for_clause,
    STATE(508), 1,
      sym_update_clause,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5760] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(193), 1,
      sym_formatting_comment,
    STATE(321), 1,
      sym_for_clause,
    STATE(515), 1,
      sym_update_clause,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5783] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(194), 1,
      sym_formatting_comment,
    STATE(324), 1,
      sym_for_clause,
    STATE(521), 1,
      sym_update_clause,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5806] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(195), 1,
      sym_formatting_comment,
    STATE(325), 1,
      sym_for_clause,
    STATE(525), 1,
      sym_update_clause,
    ACTIONS(515), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5829] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(196), 1,
      sym_formatting_comment,
    STATE(326), 1,
      sym_for_clause,
    STATE(530), 1,
      sym_update_clause,
    ACTIONS(517), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5852] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(197), 1,
      sym_formatting_comment,
    STATE(327), 1,
      sym_for_clause,
    STATE(534), 1,
      sym_update_clause,
    ACTIONS(519), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5875] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(198), 1,
      sym_formatting_comment,
    STATE(330), 1,
      sym_for_clause,
    STATE(540), 1,
      sym_update_clause,
    ACTIONS(521), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5898] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(199), 1,
      sym_formatting_comment,
    STATE(366), 1,
      sym_for_clause,
    STATE(689), 1,
      sym_update_clause,
    ACTIONS(523), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5921] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(200), 1,
      sym_formatting_comment,
    STATE(333), 1,
      sym_for_clause,
    STATE(545), 1,
      sym_update_clause,
    ACTIONS(525), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5944] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(201), 1,
      sym_formatting_comment,
    STATE(337), 1,
      sym_for_clause,
    STATE(552), 1,
      sym_update_clause,
    ACTIONS(527), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5967] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(202), 1,
      sym_formatting_comment,
    STATE(363), 1,
      sym_for_clause,
    STATE(593), 1,
      sym_update_clause,
    ACTIONS(529), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5990] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(203), 1,
      sym_formatting_comment,
    STATE(340), 1,
      sym_for_clause,
    STATE(558), 1,
      sym_update_clause,
    ACTIONS(531), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6013] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(204), 1,
      sym_formatting_comment,
    STATE(341), 1,
      sym_for_clause,
    STATE(562), 1,
      sym_update_clause,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6036] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(205), 1,
      sym_formatting_comment,
    STATE(342), 1,
      sym_for_clause,
    STATE(565), 1,
      sym_update_clause,
    ACTIONS(535), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6059] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(468), 1,
      aux_sym_type_of_clause_token2,
    ACTIONS(470), 1,
      aux_sym_when_expression_token1,
    ACTIONS(472), 1,
      aux_sym_else_expression_token1,
    STATE(206), 1,
      sym_formatting_comment,
    STATE(224), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(423), 1,
      sym_when_expression,
    STATE(761), 1,
      sym_else_expression,
  [6084] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(207), 1,
      sym_formatting_comment,
    STATE(345), 1,
      sym_for_clause,
    STATE(570), 1,
      sym_update_clause,
    ACTIONS(537), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6107] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(539), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(541), 1,
      sym_bound_apex_expression,
    ACTIONS(543), 1,
      sym_identifier,
    STATE(208), 1,
      sym_formatting_comment,
    STATE(268), 1,
      sym_dotted_identifier,
    STATE(799), 1,
      sym_field_identifier,
    STATE(807), 1,
      sym_geo_location_type,
  [6132] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(209), 1,
      sym_formatting_comment,
    ACTIONS(545), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6151] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(539), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(541), 1,
      sym_bound_apex_expression,
    ACTIONS(543), 1,
      sym_identifier,
    STATE(210), 1,
      sym_formatting_comment,
    STATE(268), 1,
      sym_dotted_identifier,
    STATE(770), 1,
      sym_geo_location_type,
    STATE(799), 1,
      sym_field_identifier,
  [6176] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(211), 1,
      sym_formatting_comment,
    STATE(407), 1,
      sym_for_clause,
    STATE(537), 1,
      sym_update_clause,
    ACTIONS(547), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6199] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(212), 1,
      sym_formatting_comment,
    STATE(381), 1,
      sym_for_clause,
    STATE(722), 1,
      sym_update_clause,
    ACTIONS(549), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6222] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(213), 1,
      sym_formatting_comment,
    STATE(420), 1,
      sym_for_clause,
    STATE(590), 1,
      sym_update_clause,
    ACTIONS(551), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6245] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(214), 1,
      sym_formatting_comment,
    STATE(354), 1,
      sym_for_clause,
    STATE(594), 1,
      sym_update_clause,
    ACTIONS(553), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6268] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(215), 1,
      sym_formatting_comment,
    STATE(339), 1,
      sym_for_clause,
    STATE(619), 1,
      sym_update_clause,
    ACTIONS(555), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6291] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(216), 1,
      sym_formatting_comment,
    STATE(357), 1,
      sym_for_clause,
    STATE(601), 1,
      sym_update_clause,
    ACTIONS(557), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6314] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(217), 1,
      sym_formatting_comment,
    STATE(300), 1,
      sym_for_clause,
    STATE(557), 1,
      sym_update_clause,
    ACTIONS(559), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6337] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(218), 1,
      sym_formatting_comment,
    STATE(360), 1,
      sym_for_clause,
    STATE(606), 1,
      sym_update_clause,
    ACTIONS(561), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6360] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(219), 1,
      sym_formatting_comment,
    STATE(364), 1,
      sym_for_clause,
    STATE(613), 1,
      sym_update_clause,
    ACTIONS(563), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6383] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(220), 1,
      sym_formatting_comment,
    STATE(347), 1,
      sym_for_clause,
    STATE(705), 1,
      sym_update_clause,
    ACTIONS(565), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6406] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(221), 1,
      sym_formatting_comment,
    STATE(367), 1,
      sym_for_clause,
    STATE(620), 1,
      sym_update_clause,
    ACTIONS(567), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6429] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(222), 1,
      sym_formatting_comment,
    STATE(368), 1,
      sym_for_clause,
    STATE(624), 1,
      sym_update_clause,
    ACTIONS(569), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6452] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(223), 1,
      sym_formatting_comment,
    STATE(307), 1,
      sym_for_clause,
    STATE(493), 1,
      sym_update_clause,
    ACTIONS(571), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6475] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(470), 1,
      aux_sym_when_expression_token1,
    ACTIONS(472), 1,
      aux_sym_else_expression_token1,
    ACTIONS(573), 1,
      aux_sym_type_of_clause_token2,
    STATE(224), 1,
      sym_formatting_comment,
    STATE(260), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(423), 1,
      sym_when_expression,
    STATE(804), 1,
      sym_else_expression,
  [6500] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(225), 1,
      sym_formatting_comment,
    STATE(372), 1,
      sym_for_clause,
    STATE(634), 1,
      sym_update_clause,
    ACTIONS(575), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6523] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(226), 1,
      sym_formatting_comment,
    STATE(373), 1,
      sym_for_clause,
    STATE(637), 1,
      sym_update_clause,
    ACTIONS(577), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6546] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(227), 1,
      sym_formatting_comment,
    STATE(374), 1,
      sym_for_clause,
    STATE(644), 1,
      sym_update_clause,
    ACTIONS(579), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6569] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(228), 1,
      sym_formatting_comment,
    STATE(375), 1,
      sym_for_clause,
    STATE(648), 1,
      sym_update_clause,
    ACTIONS(581), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6592] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(229), 1,
      sym_formatting_comment,
    ACTIONS(53), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(58), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [6609] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(230), 1,
      sym_formatting_comment,
    STATE(378), 1,
      sym_for_clause,
    STATE(653), 1,
      sym_update_clause,
    ACTIONS(583), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6632] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(231), 1,
      sym_formatting_comment,
    STATE(379), 1,
      sym_for_clause,
    STATE(657), 1,
      sym_update_clause,
    ACTIONS(585), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6655] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(232), 1,
      sym_formatting_comment,
    STATE(380), 1,
      sym_for_clause,
    STATE(663), 1,
      sym_update_clause,
    ACTIONS(587), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6678] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(233), 1,
      sym_formatting_comment,
    STATE(350), 1,
      sym_for_clause,
    STATE(643), 1,
      sym_update_clause,
    ACTIONS(589), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6701] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(234), 1,
      sym_formatting_comment,
    STATE(417), 1,
      sym_for_clause,
    STATE(753), 1,
      sym_update_clause,
    ACTIONS(591), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6724] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(235), 1,
      sym_formatting_comment,
    STATE(404), 1,
      sym_for_clause,
    STATE(748), 1,
      sym_update_clause,
    ACTIONS(593), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6747] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(236), 1,
      sym_formatting_comment,
    STATE(387), 1,
      sym_for_clause,
    STATE(680), 1,
      sym_update_clause,
    ACTIONS(595), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6770] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(237), 1,
      sym_formatting_comment,
    STATE(388), 1,
      sym_for_clause,
    STATE(683), 1,
      sym_update_clause,
    ACTIONS(597), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6793] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(238), 1,
      sym_formatting_comment,
    STATE(286), 1,
      sym_for_clause,
    STATE(488), 1,
      sym_update_clause,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6816] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(239), 1,
      sym_formatting_comment,
    STATE(391), 1,
      sym_for_clause,
    STATE(690), 1,
      sym_update_clause,
    ACTIONS(601), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6839] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(240), 1,
      sym_formatting_comment,
    STATE(392), 1,
      sym_for_clause,
    STATE(694), 1,
      sym_update_clause,
    ACTIONS(603), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6862] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(241), 1,
      sym_formatting_comment,
    STATE(393), 1,
      sym_for_clause,
    STATE(699), 1,
      sym_update_clause,
    ACTIONS(605), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6885] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(242), 1,
      sym_formatting_comment,
    STATE(273), 1,
      sym_for_clause,
    STATE(706), 1,
      sym_update_clause,
    ACTIONS(607), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6908] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(243), 1,
      sym_formatting_comment,
    STATE(282), 1,
      sym_for_clause,
    STATE(542), 1,
      sym_update_clause,
    ACTIONS(609), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6931] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(16), 1,
      sym_dotted_identifier,
    STATE(244), 1,
      sym_formatting_comment,
    STATE(803), 1,
      sym__function_name,
    STATE(118), 2,
      sym_function_expression,
      sym_field_identifier,
  [6954] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(245), 1,
      sym_formatting_comment,
    STATE(396), 1,
      sym_for_clause,
    STATE(716), 1,
      sym_update_clause,
    ACTIONS(611), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6977] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(246), 1,
      sym_formatting_comment,
    STATE(411), 1,
      sym_for_clause,
    STATE(468), 1,
      sym_update_clause,
    ACTIONS(613), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7000] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(615), 1,
      aux_sym_using_scope_clause_token1,
    ACTIONS(617), 1,
      aux_sym_using_lookup_clause_token1,
    ACTIONS(619), 1,
      aux_sym_using_listview_clause_token1,
    STATE(247), 1,
      sym_formatting_comment,
    STATE(103), 3,
      sym_using_scope_clause,
      sym_using_lookup_clause,
      sym_using_listview_clause,
  [7021] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(248), 1,
      sym_formatting_comment,
    STATE(356), 1,
      sym_for_clause,
    STATE(667), 1,
      sym_update_clause,
    ACTIONS(621), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7044] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(249), 1,
      sym_formatting_comment,
    STATE(291), 1,
      sym_for_clause,
    STATE(472), 1,
      sym_update_clause,
    ACTIONS(623), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7067] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(250), 1,
      sym_formatting_comment,
    STATE(414), 1,
      sym_for_clause,
    STATE(739), 1,
      sym_update_clause,
    ACTIONS(625), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7090] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(251), 1,
      sym_formatting_comment,
    STATE(294), 1,
      sym_for_clause,
    STATE(477), 1,
      sym_update_clause,
    ACTIONS(627), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7113] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(252), 1,
      sym_formatting_comment,
    STATE(359), 1,
      sym_for_clause,
    STATE(670), 1,
      sym_update_clause,
    ACTIONS(629), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7136] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(253), 1,
      sym_formatting_comment,
    STATE(297), 1,
      sym_for_clause,
    STATE(754), 1,
      sym_update_clause,
    ACTIONS(631), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7159] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(254), 1,
      sym_formatting_comment,
    STATE(418), 1,
      sym_for_clause,
    STATE(483), 1,
      sym_update_clause,
    ACTIONS(633), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7182] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(255), 1,
      sym_formatting_comment,
    STATE(293), 1,
      sym_for_clause,
    STATE(731), 1,
      sym_update_clause,
    ACTIONS(635), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7205] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(256), 1,
      sym_formatting_comment,
    STATE(277), 1,
      sym_for_clause,
    STATE(586), 1,
      sym_update_clause,
    ACTIONS(637), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7228] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(257), 1,
      sym_formatting_comment,
    STATE(369), 1,
      sym_for_clause,
    STATE(628), 1,
      sym_update_clause,
    ACTIONS(639), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7251] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(258), 1,
      sym_formatting_comment,
    ACTIONS(70), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(72), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7267] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      sym_formatting_comment,
    STATE(263), 1,
      aux_sym_for_clause_repeat1,
    ACTIONS(641), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [7285] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(647), 1,
      aux_sym_when_expression_token1,
    STATE(423), 1,
      sym_when_expression,
    ACTIONS(645), 2,
      aux_sym_type_of_clause_token2,
      aux_sym_else_expression_token1,
    STATE(260), 2,
      sym_formatting_comment,
      aux_sym_type_of_clause_repeat1,
  [7303] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(261), 1,
      sym_formatting_comment,
    ACTIONS(66), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(68), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7319] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 1,
      aux_sym_and_expression_token1,
    ACTIONS(650), 1,
      aux_sym_or_expression_token1,
    STATE(73), 1,
      aux_sym_and_expression_repeat1,
    STATE(262), 1,
      sym_formatting_comment,
    STATE(449), 1,
      aux_sym_or_expression_repeat1,
  [7341] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    STATE(263), 2,
      sym_formatting_comment,
      aux_sym_for_clause_repeat1,
    ACTIONS(652), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [7357] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      sym_formatting_comment,
    STATE(271), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(484), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [7375] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(265), 1,
      sym_formatting_comment,
    ACTIONS(78), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(80), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7391] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(266), 1,
      sym_formatting_comment,
    ACTIONS(74), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(76), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7407] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(659), 1,
      aux_sym_with_data_cat_filter_type_token2,
    STATE(267), 1,
      sym_formatting_comment,
    STATE(511), 1,
      sym_with_data_cat_filter_type,
    ACTIONS(657), 3,
      aux_sym_with_data_cat_filter_type_token1,
      aux_sym_with_data_cat_filter_type_token3,
      aux_sym_with_data_cat_filter_type_token4,
  [7425] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(268), 1,
      sym_formatting_comment,
    ACTIONS(60), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(64), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7441] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(269), 2,
      sym_formatting_comment,
      aux_sym_field_list_repeat1,
    ACTIONS(545), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [7457] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_for_clause_repeat1,
    STATE(270), 1,
      sym_formatting_comment,
    ACTIONS(664), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [7475] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_field_list_repeat1,
    STATE(271), 1,
      sym_formatting_comment,
    ACTIONS(666), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [7493] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(272), 1,
      sym_formatting_comment,
    ACTIONS(668), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_offset_clause_token1,
  [7507] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(273), 1,
      sym_formatting_comment,
    STATE(720), 1,
      sym_update_clause,
    ACTIONS(670), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7524] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(274), 1,
      sym_formatting_comment,
    STATE(567), 1,
      sym_update_clause,
    ACTIONS(672), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7541] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(275), 1,
      sym_formatting_comment,
    STATE(600), 1,
      sym_update_clause,
    ACTIONS(674), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7558] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(276), 1,
      sym_formatting_comment,
    STATE(470), 1,
      sym_update_clause,
    ACTIONS(676), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7575] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(277), 1,
      sym_formatting_comment,
    STATE(571), 1,
      sym_update_clause,
    ACTIONS(678), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7592] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(278), 1,
      sym_formatting_comment,
    STATE(572), 1,
      sym_update_clause,
    ACTIONS(680), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7609] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(279), 1,
      sym_formatting_comment,
    STATE(693), 1,
      sym_update_clause,
    ACTIONS(682), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7626] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(280), 1,
      sym_formatting_comment,
    STATE(575), 1,
      sym_update_clause,
    ACTIONS(684), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7643] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(281), 1,
      sym_formatting_comment,
    STATE(576), 1,
      sym_update_clause,
    ACTIONS(686), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7660] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(282), 1,
      sym_formatting_comment,
    STATE(473), 1,
      sym_update_clause,
    ACTIONS(688), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7677] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(283), 1,
      sym_formatting_comment,
    ACTIONS(545), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [7690] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(284), 1,
      sym_formatting_comment,
    STATE(474), 1,
      sym_update_clause,
    ACTIONS(690), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7707] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(692), 1,
      sym_bound_apex_expression,
    ACTIONS(694), 1,
      sym_identifier,
    STATE(268), 1,
      sym_dotted_identifier,
    STATE(285), 1,
      sym_formatting_comment,
    STATE(769), 1,
      sym_field_identifier,
  [7726] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(286), 1,
      sym_formatting_comment,
    STATE(726), 1,
      sym_update_clause,
    ACTIONS(696), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7743] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(698), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(287), 1,
      sym_formatting_comment,
    STATE(584), 1,
      sym_with_record_visibility_param,
    ACTIONS(700), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [7760] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(288), 1,
      sym_formatting_comment,
    STATE(478), 1,
      sym_update_clause,
    ACTIONS(702), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7777] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(289), 1,
      sym_formatting_comment,
    STATE(729), 1,
      sym_update_clause,
    ACTIONS(704), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7794] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(290), 1,
      sym_formatting_comment,
    STATE(633), 1,
      sym_update_clause,
    ACTIONS(706), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7811] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(291), 1,
      sym_formatting_comment,
    STATE(587), 1,
      sym_update_clause,
    ACTIONS(708), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7828] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(292), 1,
      sym_formatting_comment,
    STATE(588), 1,
      sym_update_clause,
    ACTIONS(710), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7845] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(293), 1,
      sym_formatting_comment,
    STATE(733), 1,
      sym_update_clause,
    ACTIONS(712), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7862] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(294), 1,
      sym_formatting_comment,
    STATE(591), 1,
      sym_update_clause,
    ACTIONS(714), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7879] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(295), 1,
      sym_formatting_comment,
    STATE(592), 1,
      sym_update_clause,
    ACTIONS(716), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7896] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(296), 1,
      sym_formatting_comment,
    STATE(561), 1,
      sym_update_clause,
    ACTIONS(718), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7913] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(297), 1,
      sym_formatting_comment,
    STATE(595), 1,
      sym_update_clause,
    ACTIONS(720), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7930] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(298), 1,
      sym_formatting_comment,
    STATE(596), 1,
      sym_update_clause,
    ACTIONS(722), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7947] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(299), 1,
      sym_formatting_comment,
    STATE(489), 1,
      sym_update_clause,
    ACTIONS(724), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7964] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(300), 1,
      sym_formatting_comment,
    STATE(647), 1,
      sym_update_clause,
    ACTIONS(726), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7981] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(301), 1,
      sym_formatting_comment,
    STATE(602), 1,
      sym_update_clause,
    ACTIONS(728), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7998] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(302), 1,
      sym_formatting_comment,
    STATE(744), 1,
      sym_update_clause,
    ACTIONS(730), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8015] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(303), 1,
      sym_formatting_comment,
    STATE(651), 1,
      sym_update_clause,
    ACTIONS(732), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8032] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(734), 1,
      sym_identifier,
    STATE(36), 1,
      sym_storage_identifier,
    STATE(40), 1,
      sym_dotted_identifier,
    STATE(64), 1,
      sym_storage_alias,
    STATE(304), 1,
      sym_formatting_comment,
  [8051] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(305), 1,
      sym_formatting_comment,
    STATE(611), 1,
      sym_update_clause,
    ACTIONS(736), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8068] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(306), 1,
      sym_formatting_comment,
    STATE(497), 1,
      sym_update_clause,
    ACTIONS(738), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8085] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(307), 1,
      sym_formatting_comment,
    STATE(614), 1,
      sym_update_clause,
    ACTIONS(740), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8102] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(308), 1,
      sym_formatting_comment,
    STATE(615), 1,
      sym_update_clause,
    ACTIONS(742), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8119] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(309), 1,
      sym_formatting_comment,
    STATE(498), 1,
      sym_update_clause,
    ACTIONS(744), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8136] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(310), 1,
      sym_formatting_comment,
    STATE(500), 1,
      sym_update_clause,
    ACTIONS(746), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8153] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(311), 1,
      sym_formatting_comment,
    STATE(621), 1,
      sym_update_clause,
    ACTIONS(748), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8170] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(312), 1,
      sym_formatting_comment,
    STATE(622), 1,
      sym_update_clause,
    ACTIONS(750), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8187] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(313), 1,
      sym_formatting_comment,
    STATE(501), 1,
      sym_update_clause,
    ACTIONS(752), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8204] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(314), 1,
      sym_formatting_comment,
    STATE(625), 1,
      sym_update_clause,
    ACTIONS(754), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8221] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(315), 1,
      sym_formatting_comment,
    STATE(626), 1,
      sym_update_clause,
    ACTIONS(756), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8238] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(316), 1,
      sym_formatting_comment,
    STATE(759), 1,
      sym_fields_type,
    ACTIONS(758), 3,
      aux_sym_fields_type_token1,
      aux_sym_fields_type_token2,
      aux_sym_fields_type_token3,
  [8253] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(317), 1,
      sym_formatting_comment,
    STATE(629), 1,
      sym_update_clause,
    ACTIONS(760), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8270] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(318), 1,
      sym_formatting_comment,
    STATE(630), 1,
      sym_update_clause,
    ACTIONS(762), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8287] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(319), 1,
      sym_formatting_comment,
    STATE(752), 1,
      sym_update_clause,
    ACTIONS(764), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8304] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(320), 1,
      sym_formatting_comment,
    STATE(505), 1,
      sym_update_clause,
    ACTIONS(766), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8321] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(321), 1,
      sym_formatting_comment,
    STATE(635), 1,
      sym_update_clause,
    ACTIONS(768), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8338] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(322), 1,
      sym_formatting_comment,
    STATE(636), 1,
      sym_update_clause,
    ACTIONS(770), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8355] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(323), 1,
      sym_formatting_comment,
    ACTIONS(652), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_type_token1,
  [8368] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(324), 1,
      sym_formatting_comment,
    STATE(638), 1,
      sym_update_clause,
    ACTIONS(772), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8385] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(325), 1,
      sym_formatting_comment,
    STATE(639), 1,
      sym_update_clause,
    ACTIONS(774), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8402] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(326), 1,
      sym_formatting_comment,
    STATE(640), 1,
      sym_update_clause,
    ACTIONS(776), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8419] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(327), 1,
      sym_formatting_comment,
    STATE(641), 1,
      sym_update_clause,
    ACTIONS(778), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8436] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(328), 1,
      sym_formatting_comment,
    STATE(642), 1,
      sym_update_clause,
    ACTIONS(780), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8453] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(329), 1,
      sym_formatting_comment,
    STATE(668), 1,
      sym_update_clause,
    ACTIONS(782), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8470] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(330), 1,
      sym_formatting_comment,
    STATE(645), 1,
      sym_update_clause,
    ACTIONS(784), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8487] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(331), 1,
      sym_formatting_comment,
    STATE(646), 1,
      sym_update_clause,
    ACTIONS(786), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8504] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    ACTIONS(788), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(332), 2,
      sym_formatting_comment,
      aux_sym_update_clause_repeat1,
  [8519] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(333), 1,
      sym_formatting_comment,
    STATE(649), 1,
      sym_update_clause,
    ACTIONS(793), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8536] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(334), 1,
      sym_formatting_comment,
    STATE(650), 1,
      sym_update_clause,
    ACTIONS(795), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8553] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(335), 1,
      sym_formatting_comment,
    STATE(513), 1,
      sym_update_clause,
    ACTIONS(797), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8570] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(336), 1,
      sym_formatting_comment,
    STATE(627), 1,
      sym_update_clause,
    ACTIONS(799), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8587] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(337), 1,
      sym_formatting_comment,
    STATE(654), 1,
      sym_update_clause,
    ACTIONS(801), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8604] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(338), 1,
      sym_formatting_comment,
    STATE(655), 1,
      sym_update_clause,
    ACTIONS(803), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8621] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(339), 1,
      sym_formatting_comment,
    STATE(516), 1,
      sym_update_clause,
    ACTIONS(805), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8638] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(340), 1,
      sym_formatting_comment,
    STATE(658), 1,
      sym_update_clause,
    ACTIONS(807), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8655] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(341), 1,
      sym_formatting_comment,
    STATE(659), 1,
      sym_update_clause,
    ACTIONS(809), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8672] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(342), 1,
      sym_formatting_comment,
    STATE(660), 1,
      sym_update_clause,
    ACTIONS(811), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8689] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(343), 1,
      sym_formatting_comment,
    STATE(661), 1,
      sym_update_clause,
    ACTIONS(813), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8706] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(344), 1,
      sym_formatting_comment,
    STATE(517), 1,
      sym_update_clause,
    ACTIONS(815), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8723] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(345), 1,
      sym_formatting_comment,
    STATE(664), 1,
      sym_update_clause,
    ACTIONS(817), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8740] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(346), 1,
      sym_formatting_comment,
    STATE(665), 1,
      sym_update_clause,
    ACTIONS(819), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8757] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(347), 1,
      sym_formatting_comment,
    STATE(467), 1,
      sym_update_clause,
    ACTIONS(821), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8774] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    ACTIONS(825), 1,
      aux_sym_from_clause_token1,
    ACTIONS(827), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(829), 1,
      sym_identifier,
    STATE(348), 1,
      sym_formatting_comment,
  [8793] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(349), 1,
      sym_formatting_comment,
    STATE(481), 1,
      sym_update_clause,
    ACTIONS(831), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8810] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(350), 1,
      sym_formatting_comment,
    STATE(522), 1,
      sym_update_clause,
    ACTIONS(833), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8827] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(351), 1,
      sym_formatting_comment,
    STATE(523), 1,
      sym_update_clause,
    ACTIONS(835), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8844] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(352), 1,
      sym_formatting_comment,
    STATE(608), 1,
      sym_update_clause,
    ACTIONS(837), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8861] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(353), 1,
      sym_formatting_comment,
    ACTIONS(839), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
  [8874] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(354), 1,
      sym_formatting_comment,
    STATE(677), 1,
      sym_update_clause,
    ACTIONS(841), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8891] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(355), 1,
      sym_formatting_comment,
    STATE(678), 1,
      sym_update_clause,
    ACTIONS(843), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8908] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(356), 1,
      sym_formatting_comment,
    STATE(526), 1,
      sym_update_clause,
    ACTIONS(845), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8925] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(357), 1,
      sym_formatting_comment,
    STATE(681), 1,
      sym_update_clause,
    ACTIONS(847), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8942] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(358), 1,
      sym_formatting_comment,
    STATE(682), 1,
      sym_update_clause,
    ACTIONS(849), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8959] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(359), 1,
      sym_formatting_comment,
    STATE(527), 1,
      sym_update_clause,
    ACTIONS(851), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8976] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(360), 1,
      sym_formatting_comment,
    STATE(684), 1,
      sym_update_clause,
    ACTIONS(853), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8993] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(361), 1,
      sym_formatting_comment,
    STATE(685), 1,
      sym_update_clause,
    ACTIONS(855), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9010] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(362), 1,
      sym_formatting_comment,
    STATE(528), 1,
      sym_update_clause,
    ACTIONS(857), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9027] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(363), 1,
      sym_formatting_comment,
    STATE(672), 1,
      sym_update_clause,
    ACTIONS(859), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9044] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(364), 1,
      sym_formatting_comment,
    STATE(691), 1,
      sym_update_clause,
    ACTIONS(861), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9061] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(365), 1,
      sym_formatting_comment,
    STATE(692), 1,
      sym_update_clause,
    ACTIONS(863), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9078] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(366), 1,
      sym_formatting_comment,
    STATE(531), 1,
      sym_update_clause,
    ACTIONS(865), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9095] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(367), 1,
      sym_formatting_comment,
    STATE(695), 1,
      sym_update_clause,
    ACTIONS(867), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9112] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(368), 1,
      sym_formatting_comment,
    STATE(696), 1,
      sym_update_clause,
    ACTIONS(869), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9129] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(369), 1,
      sym_formatting_comment,
    STATE(697), 1,
      sym_update_clause,
    ACTIONS(871), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9146] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(370), 1,
      sym_formatting_comment,
    STATE(698), 1,
      sym_update_clause,
    ACTIONS(873), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9163] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(371), 1,
      sym_formatting_comment,
    STATE(532), 1,
      sym_update_clause,
    ACTIONS(875), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9180] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(372), 1,
      sym_formatting_comment,
    STATE(700), 1,
      sym_update_clause,
    ACTIONS(877), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9197] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(373), 1,
      sym_formatting_comment,
    STATE(701), 1,
      sym_update_clause,
    ACTIONS(879), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9214] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(374), 1,
      sym_formatting_comment,
    STATE(702), 1,
      sym_update_clause,
    ACTIONS(881), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9231] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(375), 1,
      sym_formatting_comment,
    STATE(703), 1,
      sym_update_clause,
    ACTIONS(883), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9248] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(376), 1,
      sym_formatting_comment,
    STATE(704), 1,
      sym_update_clause,
    ACTIONS(885), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9265] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(377), 1,
      sym_formatting_comment,
    STATE(742), 1,
      sym_update_clause,
    ACTIONS(887), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9282] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(378), 1,
      sym_formatting_comment,
    STATE(707), 1,
      sym_update_clause,
    ACTIONS(889), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9299] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(379), 1,
      sym_formatting_comment,
    STATE(708), 1,
      sym_update_clause,
    ACTIONS(891), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9316] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(380), 1,
      sym_formatting_comment,
    STATE(709), 1,
      sym_update_clause,
    ACTIONS(893), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9333] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(381), 1,
      sym_formatting_comment,
    STATE(535), 1,
      sym_update_clause,
    ACTIONS(895), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9350] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(734), 1,
      sym_identifier,
    STATE(31), 1,
      sym_storage_identifier,
    STATE(40), 1,
      sym_dotted_identifier,
    STATE(45), 1,
      sym_storage_alias,
    STATE(382), 1,
      sym_formatting_comment,
  [9369] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(383), 1,
      sym_formatting_comment,
    ACTIONS(897), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_type_token1,
  [9382] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(384), 1,
      sym_formatting_comment,
    STATE(536), 1,
      sym_update_clause,
    ACTIONS(899), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9399] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(385), 1,
      sym_formatting_comment,
    STATE(746), 1,
      sym_update_clause,
    ACTIONS(901), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9416] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(386), 1,
      sym_formatting_comment,
    STATE(674), 1,
      sym_update_clause,
    ACTIONS(903), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9433] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(387), 1,
      sym_formatting_comment,
    STATE(713), 1,
      sym_update_clause,
    ACTIONS(905), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9450] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(388), 1,
      sym_formatting_comment,
    STATE(714), 1,
      sym_update_clause,
    ACTIONS(907), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9467] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(389), 1,
      sym_formatting_comment,
    STATE(715), 1,
      sym_update_clause,
    ACTIONS(909), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9484] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(390), 1,
      sym_formatting_comment,
    STATE(541), 1,
      sym_update_clause,
    ACTIONS(911), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9501] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(391), 1,
      sym_formatting_comment,
    STATE(717), 1,
      sym_update_clause,
    ACTIONS(913), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9518] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(392), 1,
      sym_formatting_comment,
    STATE(718), 1,
      sym_update_clause,
    ACTIONS(915), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9535] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(393), 1,
      sym_formatting_comment,
    STATE(719), 1,
      sym_update_clause,
    ACTIONS(917), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9552] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(394), 1,
      sym_formatting_comment,
    STATE(482), 1,
      sym_update_clause,
    ACTIONS(919), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9569] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(323), 1,
      sym_for_type,
    STATE(395), 1,
      sym_formatting_comment,
    ACTIONS(921), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [9584] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(396), 1,
      sym_formatting_comment,
    STATE(721), 1,
      sym_update_clause,
    ACTIONS(923), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9601] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(397), 1,
      sym_formatting_comment,
    STATE(577), 1,
      sym_update_clause,
    ACTIONS(925), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9618] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym_update_clause_repeat1,
    STATE(398), 1,
      sym_formatting_comment,
    ACTIONS(927), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9635] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    STATE(398), 1,
      aux_sym_update_clause_repeat1,
    STATE(399), 1,
      sym_formatting_comment,
    ACTIONS(931), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9652] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(400), 1,
      sym_formatting_comment,
    STATE(751), 1,
      sym_update_clause,
    ACTIONS(933), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9669] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(401), 1,
      sym_formatting_comment,
    STATE(550), 1,
      sym_update_clause,
    ACTIONS(935), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9686] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(270), 1,
      sym_for_type,
    STATE(402), 1,
      sym_formatting_comment,
    ACTIONS(921), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [9701] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(403), 1,
      sym_formatting_comment,
    STATE(582), 1,
      sym_update_clause,
    ACTIONS(937), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9718] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(404), 1,
      sym_formatting_comment,
    STATE(553), 1,
      sym_update_clause,
    ACTIONS(939), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9735] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(941), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(944), 1,
      aux_sym_select_clause_token1,
    STATE(546), 1,
      sym_header_comment,
    STATE(405), 2,
      sym_formatting_comment,
      aux_sym_source_file_repeat1,
  [9752] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(406), 1,
      sym_formatting_comment,
    STATE(554), 1,
      sym_update_clause,
    ACTIONS(946), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9769] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(407), 1,
      sym_formatting_comment,
    STATE(495), 1,
      sym_update_clause,
    ACTIONS(948), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9786] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(408), 1,
      sym_formatting_comment,
    STATE(509), 1,
      sym_update_clause,
    ACTIONS(950), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9803] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(952), 1,
      anon_sym_LPAREN,
    ACTIONS(954), 1,
      sym_bound_apex_expression,
    STATE(409), 1,
      sym_formatting_comment,
    STATE(67), 2,
      sym_subquery,
      sym_comparable_list,
  [9820] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(698), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(410), 1,
      sym_formatting_comment,
    STATE(435), 1,
      sym_with_record_visibility_param,
    ACTIONS(700), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [9837] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(411), 1,
      sym_formatting_comment,
    STATE(559), 1,
      sym_update_clause,
    ACTIONS(956), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9854] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(412), 1,
      sym_formatting_comment,
    STATE(560), 1,
      sym_update_clause,
    ACTIONS(958), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9871] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(413), 1,
      sym_formatting_comment,
    STATE(529), 1,
      sym_update_clause,
    ACTIONS(960), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9888] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(414), 1,
      sym_formatting_comment,
    STATE(563), 1,
      sym_update_clause,
    ACTIONS(962), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9905] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(964), 1,
      anon_sym_LPAREN,
    ACTIONS(966), 1,
      sym_bound_apex_expression,
    STATE(415), 1,
      sym_formatting_comment,
    STATE(459), 2,
      sym_subquery,
      sym_comparable_list,
  [9922] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(416), 1,
      sym_formatting_comment,
    STATE(564), 1,
      sym_update_clause,
    ACTIONS(968), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9939] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(417), 1,
      sym_formatting_comment,
    STATE(589), 1,
      sym_update_clause,
    ACTIONS(970), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9956] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(418), 1,
      sym_formatting_comment,
    STATE(566), 1,
      sym_update_clause,
    ACTIONS(972), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9973] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(974), 1,
      sym_bound_apex_expression,
    STATE(268), 1,
      sym_dotted_identifier,
    STATE(419), 1,
      sym_formatting_comment,
    STATE(809), 1,
      sym_field_identifier,
  [9992] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(420), 1,
      sym_formatting_comment,
    STATE(676), 1,
      sym_update_clause,
    ACTIONS(976), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10009] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym_formatting_comment,
    STATE(464), 1,
      aux_sym_function_expression_repeat1,
  [10025] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(264), 1,
      sym_dotted_identifier,
    STATE(422), 1,
      sym_formatting_comment,
    STATE(766), 1,
      sym_field_list,
  [10041] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(423), 1,
      sym_formatting_comment,
    ACTIONS(984), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [10053] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(424), 1,
      sym_formatting_comment,
    ACTIONS(986), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [10065] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(264), 1,
      sym_dotted_identifier,
    STATE(424), 1,
      sym_field_list,
    STATE(425), 1,
      sym_formatting_comment,
  [10081] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    ACTIONS(990), 1,
      aux_sym_from_clause_token1,
    STATE(426), 1,
      sym_formatting_comment,
    STATE(433), 1,
      aux_sym_select_clause_repeat1,
  [10097] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    ACTIONS(994), 1,
      anon_sym_COMMA,
    STATE(427), 1,
      sym_formatting_comment,
    STATE(437), 1,
      aux_sym_comparable_list_repeat1,
  [10113] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(428), 1,
      sym_formatting_comment,
    STATE(583), 1,
      sym_boolean,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [10127] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    ACTIONS(998), 1,
      anon_sym_COMMA,
    STATE(429), 1,
      sym_formatting_comment,
    STATE(438), 1,
      aux_sym_with_record_visibility_expression_repeat1,
  [10143] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
    STATE(430), 2,
      sym_formatting_comment,
      aux_sym_function_expression_repeat1,
  [10157] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_DOT,
    STATE(180), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(431), 1,
      sym_formatting_comment,
  [10173] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(432), 1,
      sym_formatting_comment,
    ACTIONS(788), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10185] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      aux_sym_from_clause_token1,
    STATE(433), 2,
      sym_formatting_comment,
      aux_sym_select_clause_repeat1,
  [10199] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      sym_formatting_comment,
    STATE(442), 1,
      aux_sym_function_expression_repeat1,
  [10215] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(998), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym_with_record_visibility_expression_repeat1,
    STATE(435), 1,
      sym_formatting_comment,
  [10231] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    ACTIONS(1014), 1,
      aux_sym_from_clause_token1,
    STATE(426), 1,
      aux_sym_select_clause_repeat1,
    STATE(436), 1,
      sym_formatting_comment,
  [10247] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(994), 1,
      anon_sym_COMMA,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      sym_formatting_comment,
    STATE(443), 1,
      aux_sym_comparable_list_repeat1,
  [10263] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
    ACTIONS(1020), 1,
      anon_sym_COMMA,
    STATE(438), 2,
      sym_formatting_comment,
      aux_sym_with_record_visibility_expression_repeat1,
  [10277] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      sym_formatting_comment,
    STATE(444), 1,
      aux_sym_with_data_cat_filter_repeat1,
  [10293] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(399), 1,
      sym_update_type,
    STATE(440), 1,
      sym_formatting_comment,
    ACTIONS(1027), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [10307] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(994), 1,
      anon_sym_COMMA,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      sym_formatting_comment,
    STATE(443), 1,
      aux_sym_comparable_list_repeat1,
  [10323] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      aux_sym_function_expression_repeat1,
    STATE(442), 1,
      sym_formatting_comment,
  [10339] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    ACTIONS(1035), 1,
      anon_sym_COMMA,
    STATE(443), 2,
      sym_formatting_comment,
      aux_sym_comparable_list_repeat1,
  [10353] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      sym_formatting_comment,
    STATE(445), 1,
      aux_sym_with_data_cat_filter_repeat1,
  [10369] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1040), 1,
      anon_sym_RPAREN,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(445), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_filter_repeat1,
  [10383] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_select_clause_token1,
    STATE(446), 1,
      sym_formatting_comment,
    STATE(607), 1,
      sym_select_clause,
    STATE(786), 1,
      sym_soql_query_body,
  [10399] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(447), 1,
      sym_formatting_comment,
    ACTIONS(167), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10411] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(448), 1,
      sym_formatting_comment,
    ACTIONS(247), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10423] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(650), 1,
      aux_sym_or_expression_token1,
    STATE(449), 1,
      sym_formatting_comment,
    STATE(453), 1,
      aux_sym_or_expression_repeat1,
  [10439] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(450), 1,
      sym_formatting_comment,
    ACTIONS(273), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10451] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(451), 1,
      sym_formatting_comment,
    ACTIONS(277), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10463] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(452), 1,
      sym_formatting_comment,
    ACTIONS(251), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10475] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    ACTIONS(1045), 1,
      aux_sym_or_expression_token1,
    STATE(453), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
  [10489] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(454), 1,
      sym_formatting_comment,
    ACTIONS(178), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10501] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(455), 1,
      sym_formatting_comment,
    ACTIONS(171), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10513] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(456), 1,
      sym_formatting_comment,
    ACTIONS(265), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10525] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(457), 1,
      sym_formatting_comment,
    ACTIONS(182), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10537] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(458), 1,
      sym_formatting_comment,
    ACTIONS(186), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10549] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(459), 1,
      sym_formatting_comment,
    ACTIONS(243), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10561] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(460), 1,
      sym_formatting_comment,
    ACTIONS(192), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10573] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(461), 1,
      sym_formatting_comment,
    ACTIONS(281), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10585] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(462), 1,
      sym_formatting_comment,
    ACTIONS(287), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10597] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(432), 1,
      sym_update_type,
    STATE(463), 1,
      sym_formatting_comment,
    ACTIONS(1027), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [10611] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      aux_sym_function_expression_repeat1,
    STATE(464), 1,
      sym_formatting_comment,
  [10627] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(994), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      aux_sym_comparable_list_repeat1,
    STATE(465), 1,
      sym_formatting_comment,
  [10643] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(466), 1,
      sym_formatting_comment,
    ACTIONS(1052), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10655] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(467), 1,
      sym_formatting_comment,
    ACTIONS(1054), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10666] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(468), 1,
      sym_formatting_comment,
    ACTIONS(1056), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10677] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(469), 1,
      sym_formatting_comment,
    ACTIONS(1000), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10688] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(470), 1,
      sym_formatting_comment,
    ACTIONS(1058), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10699] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(471), 1,
      sym_formatting_comment,
    ACTIONS(1060), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10710] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(472), 1,
      sym_formatting_comment,
    ACTIONS(1062), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10721] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(473), 1,
      sym_formatting_comment,
    ACTIONS(1064), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10732] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(474), 1,
      sym_formatting_comment,
    ACTIONS(1066), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10743] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1068), 1,
      sym_identifier,
    STATE(56), 1,
      sym_using_lookup_bind_expression,
    STATE(475), 1,
      sym_formatting_comment,
  [10756] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(476), 1,
      sym_formatting_comment,
    ACTIONS(1070), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10767] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(477), 1,
      sym_formatting_comment,
    ACTIONS(1072), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10778] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(478), 1,
      sym_formatting_comment,
    ACTIONS(1074), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10789] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(479), 1,
      sym_formatting_comment,
    ACTIONS(1076), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10800] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(480), 1,
      sym_formatting_comment,
    ACTIONS(1078), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10811] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(481), 1,
      sym_formatting_comment,
    ACTIONS(1080), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10822] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(482), 1,
      sym_formatting_comment,
    ACTIONS(1082), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10833] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(483), 1,
      sym_formatting_comment,
    ACTIONS(1084), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10844] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(484), 1,
      sym_formatting_comment,
    ACTIONS(1086), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10855] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(485), 1,
      sym_formatting_comment,
    ACTIONS(1088), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [10866] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(486), 1,
      sym_formatting_comment,
    ACTIONS(1008), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [10877] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(487), 1,
      sym_formatting_comment,
    ACTIONS(1090), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10888] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(488), 1,
      sym_formatting_comment,
    ACTIONS(1092), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10899] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(489), 1,
      sym_formatting_comment,
    ACTIONS(1094), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10910] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(490), 1,
      sym_formatting_comment,
    ACTIONS(1096), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10921] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(491), 1,
      sym_formatting_comment,
    ACTIONS(1098), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [10932] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(492), 1,
      sym_formatting_comment,
    ACTIONS(1100), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10943] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(493), 1,
      sym_formatting_comment,
    ACTIONS(1102), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10954] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(494), 1,
      sym_formatting_comment,
    ACTIONS(1104), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10965] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(495), 1,
      sym_formatting_comment,
    ACTIONS(1106), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10976] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(496), 1,
      sym_formatting_comment,
    ACTIONS(1108), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10987] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(497), 1,
      sym_formatting_comment,
    ACTIONS(1110), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10998] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(498), 1,
      sym_formatting_comment,
    ACTIONS(1112), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11009] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(499), 1,
      sym_formatting_comment,
    ACTIONS(1114), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11020] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(500), 1,
      sym_formatting_comment,
    ACTIONS(1116), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11031] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(501), 1,
      sym_formatting_comment,
    ACTIONS(1118), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11042] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(502), 1,
      sym_formatting_comment,
    ACTIONS(1120), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11053] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(503), 1,
      sym_formatting_comment,
    ACTIONS(1122), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11064] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(504), 1,
      sym_formatting_comment,
    ACTIONS(1124), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11075] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(505), 1,
      sym_formatting_comment,
    ACTIONS(1126), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11086] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(506), 1,
      sym_formatting_comment,
    ACTIONS(823), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [11097] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(507), 1,
      sym_formatting_comment,
    ACTIONS(1128), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11108] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(508), 1,
      sym_formatting_comment,
    ACTIONS(1130), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11119] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(509), 1,
      sym_formatting_comment,
    ACTIONS(1132), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11130] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(510), 1,
      sym_formatting_comment,
    ACTIONS(1134), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [11141] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1136), 1,
      anon_sym_LPAREN,
    ACTIONS(1138), 1,
      sym_identifier,
    STATE(511), 1,
      sym_formatting_comment,
  [11154] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(512), 1,
      sym_formatting_comment,
    ACTIONS(1140), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11165] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(513), 1,
      sym_formatting_comment,
    ACTIONS(1142), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11176] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1144), 1,
      sym_identifier,
    STATE(120), 1,
      sym_with_data_cat_filter,
    STATE(514), 1,
      sym_formatting_comment,
  [11189] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(515), 1,
      sym_formatting_comment,
    ACTIONS(1146), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11200] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(516), 1,
      sym_formatting_comment,
    ACTIONS(1148), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11211] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(517), 1,
      sym_formatting_comment,
    ACTIONS(1150), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11222] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(518), 1,
      sym_formatting_comment,
    ACTIONS(1152), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11233] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(519), 1,
      sym_formatting_comment,
    ACTIONS(1154), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11244] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(520), 1,
      sym_formatting_comment,
    ACTIONS(1156), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11255] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(521), 1,
      sym_formatting_comment,
    ACTIONS(1158), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11266] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(522), 1,
      sym_formatting_comment,
    ACTIONS(1160), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11277] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(523), 1,
      sym_formatting_comment,
    ACTIONS(1162), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11288] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(524), 1,
      sym_formatting_comment,
    ACTIONS(1164), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11299] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(525), 1,
      sym_formatting_comment,
    ACTIONS(1166), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11310] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(526), 1,
      sym_formatting_comment,
    ACTIONS(1168), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11321] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(527), 1,
      sym_formatting_comment,
    ACTIONS(1170), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11332] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(528), 1,
      sym_formatting_comment,
    ACTIONS(1172), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11343] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(529), 1,
      sym_formatting_comment,
    ACTIONS(1174), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11354] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(530), 1,
      sym_formatting_comment,
    ACTIONS(1176), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11365] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(531), 1,
      sym_formatting_comment,
    ACTIONS(1178), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11376] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(532), 1,
      sym_formatting_comment,
    ACTIONS(1180), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11387] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1182), 1,
      sym_identifier,
    STATE(57), 1,
      sym_dotted_identifier,
    STATE(533), 1,
      sym_formatting_comment,
  [11400] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(534), 1,
      sym_formatting_comment,
    ACTIONS(1184), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11411] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(535), 1,
      sym_formatting_comment,
    ACTIONS(1186), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11422] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(536), 1,
      sym_formatting_comment,
    ACTIONS(1188), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11433] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(537), 1,
      sym_formatting_comment,
    ACTIONS(1190), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11444] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(538), 1,
      sym_formatting_comment,
    ACTIONS(1192), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11455] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(539), 1,
      sym_formatting_comment,
    ACTIONS(1194), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11466] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(540), 1,
      sym_formatting_comment,
    ACTIONS(1196), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11477] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(541), 1,
      sym_formatting_comment,
    ACTIONS(1198), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11488] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(542), 1,
      sym_formatting_comment,
    ACTIONS(1200), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11499] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(543), 1,
      sym_formatting_comment,
    ACTIONS(1202), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11510] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(544), 1,
      sym_formatting_comment,
    ACTIONS(1204), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11521] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(545), 1,
      sym_formatting_comment,
    ACTIONS(1206), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11532] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1208), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1210), 1,
      aux_sym_select_clause_token1,
    STATE(546), 1,
      sym_formatting_comment,
  [11545] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(547), 1,
      sym_formatting_comment,
    ACTIONS(1212), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11556] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(548), 1,
      sym_formatting_comment,
    ACTIONS(1214), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11567] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(549), 1,
      sym_formatting_comment,
    ACTIONS(1216), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11578] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(550), 1,
      sym_formatting_comment,
    ACTIONS(1218), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11589] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(551), 1,
      sym_formatting_comment,
    ACTIONS(1220), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11600] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(552), 1,
      sym_formatting_comment,
    ACTIONS(1222), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11611] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(553), 1,
      sym_formatting_comment,
    ACTIONS(1224), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11622] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(554), 1,
      sym_formatting_comment,
    ACTIONS(1226), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11633] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(555), 1,
      sym_formatting_comment,
    ACTIONS(1228), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11644] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(556), 1,
      sym_formatting_comment,
    ACTIONS(1230), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11655] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(557), 1,
      sym_formatting_comment,
    ACTIONS(1232), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11666] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(558), 1,
      sym_formatting_comment,
    ACTIONS(1234), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11677] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(559), 1,
      sym_formatting_comment,
    ACTIONS(1236), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11688] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(560), 1,
      sym_formatting_comment,
    ACTIONS(1238), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11699] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(561), 1,
      sym_formatting_comment,
    ACTIONS(1240), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11710] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(562), 1,
      sym_formatting_comment,
    ACTIONS(1242), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11721] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(563), 1,
      sym_formatting_comment,
    ACTIONS(1244), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11732] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(564), 1,
      sym_formatting_comment,
    ACTIONS(1246), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11743] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(565), 1,
      sym_formatting_comment,
    ACTIONS(1248), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11754] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(566), 1,
      sym_formatting_comment,
    ACTIONS(1250), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11765] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(567), 1,
      sym_formatting_comment,
    ACTIONS(1252), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11776] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(568), 1,
      sym_formatting_comment,
    ACTIONS(1254), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11787] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(569), 1,
      sym_formatting_comment,
    ACTIONS(1256), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11798] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(570), 1,
      sym_formatting_comment,
    ACTIONS(1258), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11809] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(571), 1,
      sym_formatting_comment,
    ACTIONS(1260), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11820] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(572), 1,
      sym_formatting_comment,
    ACTIONS(1262), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11831] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(573), 1,
      sym_formatting_comment,
    ACTIONS(1264), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11842] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(574), 1,
      sym_formatting_comment,
    ACTIONS(1266), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11853] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(575), 1,
      sym_formatting_comment,
    ACTIONS(1268), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11864] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(576), 1,
      sym_formatting_comment,
    ACTIONS(1270), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11875] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(577), 1,
      sym_formatting_comment,
    ACTIONS(1272), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11886] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1068), 1,
      sym_identifier,
    STATE(79), 1,
      sym_using_lookup_bind_expression,
    STATE(578), 1,
      sym_formatting_comment,
  [11899] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(579), 1,
      sym_formatting_comment,
    ACTIONS(1274), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [11910] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(580), 1,
      sym_formatting_comment,
    ACTIONS(1276), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11921] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(581), 1,
      sym_formatting_comment,
    ACTIONS(1278), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11932] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(582), 1,
      sym_formatting_comment,
    ACTIONS(1280), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11943] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(583), 1,
      sym_formatting_comment,
    ACTIONS(1282), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11954] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(584), 1,
      sym_formatting_comment,
    ACTIONS(1018), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11965] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(585), 1,
      sym_formatting_comment,
    ACTIONS(1284), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11976] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(586), 1,
      sym_formatting_comment,
    ACTIONS(1286), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11987] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(587), 1,
      sym_formatting_comment,
    ACTIONS(1288), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11998] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(588), 1,
      sym_formatting_comment,
    ACTIONS(1290), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12009] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(589), 1,
      sym_formatting_comment,
    ACTIONS(1292), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12020] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(590), 1,
      sym_formatting_comment,
    ACTIONS(1294), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12031] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(591), 1,
      sym_formatting_comment,
    ACTIONS(1296), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12042] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(592), 1,
      sym_formatting_comment,
    ACTIONS(1298), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12053] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(593), 1,
      sym_formatting_comment,
    ACTIONS(1300), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12064] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(594), 1,
      sym_formatting_comment,
    ACTIONS(1302), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12075] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(595), 1,
      sym_formatting_comment,
    ACTIONS(1304), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12086] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(596), 1,
      sym_formatting_comment,
    ACTIONS(1306), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12097] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(597), 1,
      sym_formatting_comment,
    ACTIONS(1308), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [12108] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(598), 1,
      sym_formatting_comment,
    ACTIONS(1310), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12119] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(599), 1,
      sym_formatting_comment,
    ACTIONS(1312), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12130] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(600), 1,
      sym_formatting_comment,
    ACTIONS(1314), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12141] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(601), 1,
      sym_formatting_comment,
    ACTIONS(1316), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12152] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(602), 1,
      sym_formatting_comment,
    ACTIONS(1318), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12163] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(603), 1,
      sym_formatting_comment,
    ACTIONS(1320), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12174] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(604), 1,
      sym_formatting_comment,
    ACTIONS(1322), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12185] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(605), 1,
      sym_formatting_comment,
    ACTIONS(1324), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12196] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(606), 1,
      sym_formatting_comment,
    ACTIONS(1326), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12207] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1328), 1,
      aux_sym_from_clause_token1,
    STATE(18), 1,
      sym_from_clause,
    STATE(607), 1,
      sym_formatting_comment,
  [12220] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(608), 1,
      sym_formatting_comment,
    ACTIONS(1330), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12231] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(609), 1,
      sym_formatting_comment,
    ACTIONS(1332), 2,
      sym_bound_apex_expression,
      sym_int,
  [12242] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(610), 1,
      sym_formatting_comment,
    ACTIONS(1334), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12253] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(611), 1,
      sym_formatting_comment,
    ACTIONS(1336), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12264] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(612), 1,
      sym_formatting_comment,
    ACTIONS(1338), 2,
      anon_sym_LPAREN,
      sym_bound_apex_expression,
  [12275] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(613), 1,
      sym_formatting_comment,
    ACTIONS(1340), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12286] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(614), 1,
      sym_formatting_comment,
    ACTIONS(1342), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12297] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(615), 1,
      sym_formatting_comment,
    ACTIONS(1344), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12308] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(616), 1,
      sym_formatting_comment,
    ACTIONS(1346), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12319] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(617), 1,
      sym_formatting_comment,
    ACTIONS(1348), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12330] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(618), 1,
      sym_formatting_comment,
    ACTIONS(1350), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12341] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(619), 1,
      sym_formatting_comment,
    ACTIONS(1352), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12352] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(620), 1,
      sym_formatting_comment,
    ACTIONS(1354), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12363] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(621), 1,
      sym_formatting_comment,
    ACTIONS(1356), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12374] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(622), 1,
      sym_formatting_comment,
    ACTIONS(1358), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12385] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(623), 1,
      sym_formatting_comment,
    ACTIONS(1360), 2,
      sym_bound_apex_expression,
      sym_int,
  [12396] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(624), 1,
      sym_formatting_comment,
    ACTIONS(1362), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12407] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(625), 1,
      sym_formatting_comment,
    ACTIONS(1364), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12418] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(626), 1,
      sym_formatting_comment,
    ACTIONS(1366), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12429] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(627), 1,
      sym_formatting_comment,
    ACTIONS(1368), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12440] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(628), 1,
      sym_formatting_comment,
    ACTIONS(1370), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12451] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(629), 1,
      sym_formatting_comment,
    ACTIONS(1372), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12462] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(630), 1,
      sym_formatting_comment,
    ACTIONS(1374), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12473] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(631), 1,
      sym_formatting_comment,
    ACTIONS(1376), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12484] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(632), 1,
      sym_formatting_comment,
    ACTIONS(1378), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12495] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(633), 1,
      sym_formatting_comment,
    ACTIONS(1380), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12506] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(634), 1,
      sym_formatting_comment,
    ACTIONS(1382), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12517] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(635), 1,
      sym_formatting_comment,
    ACTIONS(1384), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12528] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(636), 1,
      sym_formatting_comment,
    ACTIONS(1386), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12539] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(637), 1,
      sym_formatting_comment,
    ACTIONS(1388), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12550] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(638), 1,
      sym_formatting_comment,
    ACTIONS(1390), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12561] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(639), 1,
      sym_formatting_comment,
    ACTIONS(1392), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12572] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(640), 1,
      sym_formatting_comment,
    ACTIONS(1394), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12583] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(641), 1,
      sym_formatting_comment,
    ACTIONS(1396), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12594] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(642), 1,
      sym_formatting_comment,
    ACTIONS(1398), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12605] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(643), 1,
      sym_formatting_comment,
    ACTIONS(1400), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12616] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(644), 1,
      sym_formatting_comment,
    ACTIONS(1402), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12627] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(645), 1,
      sym_formatting_comment,
    ACTIONS(1404), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12638] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(646), 1,
      sym_formatting_comment,
    ACTIONS(1406), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12649] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(647), 1,
      sym_formatting_comment,
    ACTIONS(1408), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12660] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(648), 1,
      sym_formatting_comment,
    ACTIONS(1410), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12671] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(649), 1,
      sym_formatting_comment,
    ACTIONS(1412), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12682] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(650), 1,
      sym_formatting_comment,
    ACTIONS(1414), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12693] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(651), 1,
      sym_formatting_comment,
    ACTIONS(1416), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12704] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(652), 1,
      sym_formatting_comment,
    ACTIONS(1418), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12715] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(653), 1,
      sym_formatting_comment,
    ACTIONS(1420), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12726] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(654), 1,
      sym_formatting_comment,
    ACTIONS(1422), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12737] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(655), 1,
      sym_formatting_comment,
    ACTIONS(1424), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12748] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(656), 1,
      sym_formatting_comment,
    ACTIONS(1426), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12759] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(657), 1,
      sym_formatting_comment,
    ACTIONS(1428), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12770] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(658), 1,
      sym_formatting_comment,
    ACTIONS(1430), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12781] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(659), 1,
      sym_formatting_comment,
    ACTIONS(1432), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12792] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(660), 1,
      sym_formatting_comment,
    ACTIONS(1434), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12803] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(661), 1,
      sym_formatting_comment,
    ACTIONS(1436), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12814] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(662), 1,
      sym_formatting_comment,
    ACTIONS(1438), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12825] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(663), 1,
      sym_formatting_comment,
    ACTIONS(1440), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12836] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(664), 1,
      sym_formatting_comment,
    ACTIONS(1442), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12847] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(665), 1,
      sym_formatting_comment,
    ACTIONS(1444), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12858] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(666), 1,
      sym_formatting_comment,
    ACTIONS(1446), 2,
      sym_bound_apex_expression,
      sym_decimal,
  [12869] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(667), 1,
      sym_formatting_comment,
    ACTIONS(1448), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12880] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(668), 1,
      sym_formatting_comment,
    ACTIONS(1450), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12891] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1452), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1454), 1,
      aux_sym_select_clause_token1,
    STATE(669), 1,
      sym_formatting_comment,
  [12904] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(670), 1,
      sym_formatting_comment,
    ACTIONS(1456), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12915] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(671), 1,
      sym_formatting_comment,
    ACTIONS(1033), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12926] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(672), 1,
      sym_formatting_comment,
    ACTIONS(1458), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12937] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(673), 1,
      sym_formatting_comment,
    ACTIONS(1460), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12948] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(674), 1,
      sym_formatting_comment,
    ACTIONS(1462), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12959] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(675), 1,
      sym_formatting_comment,
    ACTIONS(1464), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12970] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(676), 1,
      sym_formatting_comment,
    ACTIONS(1466), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12981] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(677), 1,
      sym_formatting_comment,
    ACTIONS(1468), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12992] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(678), 1,
      sym_formatting_comment,
    ACTIONS(1470), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13003] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(679), 1,
      sym_formatting_comment,
  [13016] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(680), 1,
      sym_formatting_comment,
    ACTIONS(1472), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13027] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(681), 1,
      sym_formatting_comment,
    ACTIONS(1474), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13038] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(682), 1,
      sym_formatting_comment,
    ACTIONS(1476), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13049] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(683), 1,
      sym_formatting_comment,
    ACTIONS(1478), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13060] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(684), 1,
      sym_formatting_comment,
    ACTIONS(1480), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13071] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(685), 1,
      sym_formatting_comment,
    ACTIONS(1482), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13082] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(686), 1,
      sym_formatting_comment,
    ACTIONS(1484), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13093] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(687), 1,
      sym_formatting_comment,
    ACTIONS(1486), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13104] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(688), 1,
      sym_formatting_comment,
    ACTIONS(1488), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13115] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(689), 1,
      sym_formatting_comment,
    ACTIONS(1490), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13126] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(690), 1,
      sym_formatting_comment,
    ACTIONS(1492), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13137] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(691), 1,
      sym_formatting_comment,
    ACTIONS(1494), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13148] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(692), 1,
      sym_formatting_comment,
    ACTIONS(1496), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13159] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(693), 1,
      sym_formatting_comment,
    ACTIONS(1498), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13170] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(694), 1,
      sym_formatting_comment,
    ACTIONS(1500), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13181] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(695), 1,
      sym_formatting_comment,
    ACTIONS(1502), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13192] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(696), 1,
      sym_formatting_comment,
    ACTIONS(1504), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13203] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(697), 1,
      sym_formatting_comment,
    ACTIONS(1506), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13214] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(698), 1,
      sym_formatting_comment,
    ACTIONS(1508), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13225] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(699), 1,
      sym_formatting_comment,
    ACTIONS(1510), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13236] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(700), 1,
      sym_formatting_comment,
    ACTIONS(1512), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13247] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(701), 1,
      sym_formatting_comment,
    ACTIONS(1514), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13258] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(702), 1,
      sym_formatting_comment,
    ACTIONS(1516), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13269] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(703), 1,
      sym_formatting_comment,
    ACTIONS(1518), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13280] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(704), 1,
      sym_formatting_comment,
    ACTIONS(1520), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13291] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(705), 1,
      sym_formatting_comment,
    ACTIONS(1522), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13302] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(706), 1,
      sym_formatting_comment,
    ACTIONS(1524), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13313] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(707), 1,
      sym_formatting_comment,
    ACTIONS(1526), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13324] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(708), 1,
      sym_formatting_comment,
    ACTIONS(1528), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13335] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(709), 1,
      sym_formatting_comment,
    ACTIONS(1530), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13346] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(710), 1,
      sym_formatting_comment,
    ACTIONS(1040), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13357] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(711), 1,
      sym_formatting_comment,
    ACTIONS(1532), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13368] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(712), 1,
      sym_formatting_comment,
    ACTIONS(1534), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13379] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(713), 1,
      sym_formatting_comment,
    ACTIONS(1536), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13390] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(714), 1,
      sym_formatting_comment,
    ACTIONS(1538), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13401] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(715), 1,
      sym_formatting_comment,
    ACTIONS(1540), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13412] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(716), 1,
      sym_formatting_comment,
    ACTIONS(1542), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13423] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(717), 1,
      sym_formatting_comment,
    ACTIONS(1544), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13434] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(718), 1,
      sym_formatting_comment,
    ACTIONS(1546), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13445] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(719), 1,
      sym_formatting_comment,
    ACTIONS(1548), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13456] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(720), 1,
      sym_formatting_comment,
    ACTIONS(1550), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13467] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(721), 1,
      sym_formatting_comment,
    ACTIONS(1552), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13478] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(722), 1,
      sym_formatting_comment,
    ACTIONS(1554), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13489] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1144), 1,
      sym_identifier,
    STATE(95), 1,
      sym_with_data_cat_filter,
    STATE(723), 1,
      sym_formatting_comment,
  [13502] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(724), 1,
      sym_formatting_comment,
    ACTIONS(1556), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13513] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(725), 1,
      sym_formatting_comment,
    ACTIONS(1558), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13524] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(726), 1,
      sym_formatting_comment,
    ACTIONS(1560), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13535] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(727), 1,
      sym_formatting_comment,
    ACTIONS(1562), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13546] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1564), 1,
      sym_identifier,
    STATE(206), 1,
      sym_dotted_identifier,
    STATE(728), 1,
      sym_formatting_comment,
  [13559] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(729), 1,
      sym_formatting_comment,
    ACTIONS(1566), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13570] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(730), 1,
      sym_formatting_comment,
    ACTIONS(1568), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13581] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(731), 1,
      sym_formatting_comment,
    ACTIONS(1570), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13592] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(732), 1,
      sym_formatting_comment,
    ACTIONS(1572), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13603] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(733), 1,
      sym_formatting_comment,
    ACTIONS(1574), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13614] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(734), 1,
      sym_formatting_comment,
    ACTIONS(1576), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13625] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(735), 1,
      sym_formatting_comment,
    ACTIONS(1578), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13636] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(736), 1,
      sym_formatting_comment,
    ACTIONS(260), 2,
      anon_sym_RPAREN,
      aux_sym_or_expression_token1,
  [13647] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(737), 1,
      sym_formatting_comment,
    ACTIONS(1580), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [13658] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1582), 1,
      sym_identifier,
    STATE(283), 1,
      sym_dotted_identifier,
    STATE(738), 1,
      sym_formatting_comment,
  [13671] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(739), 1,
      sym_formatting_comment,
    ACTIONS(1584), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13682] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(740), 1,
      sym_formatting_comment,
    ACTIONS(1586), 2,
      sym_bound_apex_expression,
      sym_decimal,
  [13693] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(741), 1,
      sym_formatting_comment,
    ACTIONS(1588), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [13704] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(742), 1,
      sym_formatting_comment,
    ACTIONS(1590), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13715] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(743), 1,
      sym_formatting_comment,
    ACTIONS(1592), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13726] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(744), 1,
      sym_formatting_comment,
    ACTIONS(1594), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13737] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(745), 1,
      sym_formatting_comment,
    ACTIONS(1596), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13748] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(746), 1,
      sym_formatting_comment,
    ACTIONS(1598), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13759] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(747), 1,
      sym_formatting_comment,
    ACTIONS(1600), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13770] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(748), 1,
      sym_formatting_comment,
    ACTIONS(1602), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13781] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(749), 1,
      sym_formatting_comment,
    ACTIONS(1604), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13792] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(750), 1,
      sym_formatting_comment,
    ACTIONS(1606), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13803] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(751), 1,
      sym_formatting_comment,
    ACTIONS(1608), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13814] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(752), 1,
      sym_formatting_comment,
    ACTIONS(1610), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13825] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(753), 1,
      sym_formatting_comment,
    ACTIONS(1612), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13836] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(754), 1,
      sym_formatting_comment,
    ACTIONS(1614), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13847] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1616), 1,
      anon_sym_RPAREN,
    STATE(755), 1,
      sym_formatting_comment,
  [13857] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1618), 1,
      anon_sym_COMMA,
    STATE(756), 1,
      sym_formatting_comment,
  [13867] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1014), 1,
      aux_sym_from_clause_token1,
    STATE(757), 1,
      sym_formatting_comment,
  [13877] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1620), 1,
      ts_builtin_sym_end,
    STATE(758), 1,
      sym_formatting_comment,
  [13887] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1622), 1,
      anon_sym_RPAREN,
    STATE(759), 1,
      sym_formatting_comment,
  [13897] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1624), 1,
      anon_sym_EQ,
    STATE(760), 1,
      sym_formatting_comment,
  [13907] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(573), 1,
      aux_sym_type_of_clause_token2,
    STATE(761), 1,
      sym_formatting_comment,
  [13917] = 3,
    ACTIONS(1626), 1,
      aux_sym_header_comment_token1,
    ACTIONS(1628), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(762), 1,
      sym_formatting_comment,
  [13927] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1630), 1,
      sym_identifier,
    STATE(763), 1,
      sym_formatting_comment,
  [13937] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1632), 1,
      anon_sym_LPAREN,
    STATE(764), 1,
      sym_formatting_comment,
  [13947] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1634), 1,
      sym_identifier,
    STATE(765), 1,
      sym_formatting_comment,
  [13957] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1636), 1,
      aux_sym_type_of_clause_token2,
    STATE(766), 1,
      sym_formatting_comment,
  [13967] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1638), 1,
      anon_sym_EQ,
    STATE(767), 1,
      sym_formatting_comment,
  [13977] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1640), 1,
      sym_identifier,
    STATE(768), 1,
      sym_formatting_comment,
  [13987] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1642), 1,
      anon_sym_COMMA,
    STATE(769), 1,
      sym_formatting_comment,
  [13997] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1644), 1,
      anon_sym_COMMA,
    STATE(770), 1,
      sym_formatting_comment,
  [14007] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1646), 1,
      sym_string_literal,
    STATE(771), 1,
      sym_formatting_comment,
  [14017] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1648), 1,
      aux_sym_when_expression_token2,
    STATE(772), 1,
      sym_formatting_comment,
  [14027] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1650), 1,
      anon_sym_EQ,
    STATE(773), 1,
      sym_formatting_comment,
  [14037] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1652), 1,
      aux_sym_from_clause_token1,
    STATE(774), 1,
      sym_formatting_comment,
  [14047] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1654), 1,
      sym_identifier,
    STATE(775), 1,
      sym_formatting_comment,
  [14057] = 3,
    ACTIONS(1628), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1656), 1,
      aux_sym_header_comment_token1,
    STATE(776), 1,
      sym_formatting_comment,
  [14067] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1658), 1,
      sym_identifier,
    STATE(777), 1,
      sym_formatting_comment,
  [14077] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1660), 1,
      sym_string_literal,
    STATE(778), 1,
      sym_formatting_comment,
  [14087] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1662), 1,
      anon_sym_EQ,
    STATE(779), 1,
      sym_formatting_comment,
  [14097] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1664), 1,
      anon_sym_COMMA,
    STATE(780), 1,
      sym_formatting_comment,
  [14107] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1666), 1,
      sym_int,
    STATE(781), 1,
      sym_formatting_comment,
  [14117] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1668), 1,
      sym_identifier,
    STATE(782), 1,
      sym_formatting_comment,
  [14127] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1670), 1,
      anon_sym_RPAREN,
    STATE(783), 1,
      sym_formatting_comment,
  [14137] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1672), 1,
      sym_int,
    STATE(784), 1,
      sym_formatting_comment,
  [14147] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1674), 1,
      sym_identifier,
    STATE(785), 1,
      sym_formatting_comment,
  [14157] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1676), 1,
      anon_sym_RPAREN,
    STATE(786), 1,
      sym_formatting_comment,
  [14167] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1678), 1,
      anon_sym_LPAREN,
    STATE(787), 1,
      sym_formatting_comment,
  [14177] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1680), 1,
      anon_sym_RPAREN,
    STATE(788), 1,
      sym_formatting_comment,
  [14187] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1682), 1,
      sym_identifier,
    STATE(789), 1,
      sym_formatting_comment,
  [14197] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1684), 1,
      anon_sym_LPAREN,
    STATE(790), 1,
      sym_formatting_comment,
  [14207] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1686), 1,
      anon_sym_EQ,
    STATE(791), 1,
      sym_formatting_comment,
  [14217] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1688), 1,
      anon_sym_LPAREN,
    STATE(792), 1,
      sym_formatting_comment,
  [14227] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1690), 1,
      anon_sym_RPAREN,
    STATE(793), 1,
      sym_formatting_comment,
  [14237] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1692), 1,
      anon_sym_RPAREN,
    STATE(794), 1,
      sym_formatting_comment,
  [14247] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1694), 1,
      ts_builtin_sym_end,
    STATE(795), 1,
      sym_formatting_comment,
  [14257] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1696), 1,
      anon_sym_LPAREN,
    STATE(796), 1,
      sym_formatting_comment,
  [14267] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1698), 1,
      anon_sym_LPAREN,
    STATE(797), 1,
      sym_formatting_comment,
  [14277] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1700), 1,
      sym_int,
    STATE(798), 1,
      sym_formatting_comment,
  [14287] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1702), 1,
      anon_sym_COMMA,
    STATE(799), 1,
      sym_formatting_comment,
  [14297] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1704), 1,
      anon_sym_RPAREN,
    STATE(800), 1,
      sym_formatting_comment,
  [14307] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1706), 1,
      ts_builtin_sym_end,
    STATE(801), 1,
      sym_formatting_comment,
  [14317] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1708), 1,
      sym_identifier,
    STATE(802), 1,
      sym_formatting_comment,
  [14327] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1710), 1,
      anon_sym_LPAREN,
    STATE(803), 1,
      sym_formatting_comment,
  [14337] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1712), 1,
      aux_sym_type_of_clause_token2,
    STATE(804), 1,
      sym_formatting_comment,
  [14347] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1714), 1,
      anon_sym_COLON,
    STATE(805), 1,
      sym_formatting_comment,
  [14357] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1716), 1,
      sym_string_literal,
    STATE(806), 1,
      sym_formatting_comment,
  [14367] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1718), 1,
      anon_sym_COMMA,
    STATE(807), 1,
      sym_formatting_comment,
  [14377] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1720), 1,
      anon_sym_COLON,
    STATE(808), 1,
      sym_formatting_comment,
  [14387] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1722), 1,
      anon_sym_COMMA,
    STATE(809), 1,
      sym_formatting_comment,
  [14397] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1724), 1,
      ts_builtin_sym_end,
    STATE(810), 1,
      sym_formatting_comment,
  [14407] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1726), 1,
      anon_sym_LPAREN,
    STATE(811), 1,
      sym_formatting_comment,
  [14417] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1728), 1,
      anon_sym_RPAREN,
    STATE(812), 1,
      sym_formatting_comment,
  [14427] = 1,
    ACTIONS(1730), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 274,
  [SMALL_STATE(7)] = 338,
  [SMALL_STATE(8)] = 399,
  [SMALL_STATE(9)] = 444,
  [SMALL_STATE(10)] = 493,
  [SMALL_STATE(11)] = 540,
  [SMALL_STATE(12)] = 584,
  [SMALL_STATE(13)] = 629,
  [SMALL_STATE(14)] = 665,
  [SMALL_STATE(15)] = 701,
  [SMALL_STATE(16)] = 737,
  [SMALL_STATE(17)] = 773,
  [SMALL_STATE(18)] = 807,
  [SMALL_STATE(19)] = 872,
  [SMALL_STATE(20)] = 931,
  [SMALL_STATE(21)] = 971,
  [SMALL_STATE(22)] = 1011,
  [SMALL_STATE(23)] = 1058,
  [SMALL_STATE(24)] = 1089,
  [SMALL_STATE(25)] = 1142,
  [SMALL_STATE(26)] = 1195,
  [SMALL_STATE(27)] = 1224,
  [SMALL_STATE(28)] = 1255,
  [SMALL_STATE(29)] = 1301,
  [SMALL_STATE(30)] = 1347,
  [SMALL_STATE(31)] = 1393,
  [SMALL_STATE(32)] = 1427,
  [SMALL_STATE(33)] = 1471,
  [SMALL_STATE(34)] = 1517,
  [SMALL_STATE(35)] = 1543,
  [SMALL_STATE(36)] = 1590,
  [SMALL_STATE(37)] = 1619,
  [SMALL_STATE(38)] = 1666,
  [SMALL_STATE(39)] = 1713,
  [SMALL_STATE(40)] = 1760,
  [SMALL_STATE(41)] = 1785,
  [SMALL_STATE(42)] = 1809,
  [SMALL_STATE(43)] = 1833,
  [SMALL_STATE(44)] = 1857,
  [SMALL_STATE(45)] = 1881,
  [SMALL_STATE(46)] = 1907,
  [SMALL_STATE(47)] = 1931,
  [SMALL_STATE(48)] = 1955,
  [SMALL_STATE(49)] = 1981,
  [SMALL_STATE(50)] = 2005,
  [SMALL_STATE(51)] = 2035,
  [SMALL_STATE(52)] = 2065,
  [SMALL_STATE(53)] = 2106,
  [SMALL_STATE(54)] = 2147,
  [SMALL_STATE(55)] = 2188,
  [SMALL_STATE(56)] = 2229,
  [SMALL_STATE(57)] = 2254,
  [SMALL_STATE(58)] = 2279,
  [SMALL_STATE(59)] = 2302,
  [SMALL_STATE(60)] = 2327,
  [SMALL_STATE(61)] = 2368,
  [SMALL_STATE(62)] = 2389,
  [SMALL_STATE(63)] = 2430,
  [SMALL_STATE(64)] = 2451,
  [SMALL_STATE(65)] = 2472,
  [SMALL_STATE(66)] = 2513,
  [SMALL_STATE(67)] = 2554,
  [SMALL_STATE(68)] = 2576,
  [SMALL_STATE(69)] = 2598,
  [SMALL_STATE(70)] = 2620,
  [SMALL_STATE(71)] = 2642,
  [SMALL_STATE(72)] = 2664,
  [SMALL_STATE(73)] = 2686,
  [SMALL_STATE(74)] = 2710,
  [SMALL_STATE(75)] = 2734,
  [SMALL_STATE(76)] = 2756,
  [SMALL_STATE(77)] = 2778,
  [SMALL_STATE(78)] = 2800,
  [SMALL_STATE(79)] = 2820,
  [SMALL_STATE(80)] = 2840,
  [SMALL_STATE(81)] = 2862,
  [SMALL_STATE(82)] = 2897,
  [SMALL_STATE(83)] = 2932,
  [SMALL_STATE(84)] = 2951,
  [SMALL_STATE(85)] = 2972,
  [SMALL_STATE(86)] = 2995,
  [SMALL_STATE(87)] = 3030,
  [SMALL_STATE(88)] = 3059,
  [SMALL_STATE(89)] = 3094,
  [SMALL_STATE(90)] = 3129,
  [SMALL_STATE(91)] = 3164,
  [SMALL_STATE(92)] = 3185,
  [SMALL_STATE(93)] = 3220,
  [SMALL_STATE(94)] = 3241,
  [SMALL_STATE(95)] = 3276,
  [SMALL_STATE(96)] = 3299,
  [SMALL_STATE(97)] = 3334,
  [SMALL_STATE(98)] = 3369,
  [SMALL_STATE(99)] = 3392,
  [SMALL_STATE(100)] = 3411,
  [SMALL_STATE(101)] = 3434,
  [SMALL_STATE(102)] = 3469,
  [SMALL_STATE(103)] = 3504,
  [SMALL_STATE(104)] = 3523,
  [SMALL_STATE(105)] = 3546,
  [SMALL_STATE(106)] = 3565,
  [SMALL_STATE(107)] = 3600,
  [SMALL_STATE(108)] = 3635,
  [SMALL_STATE(109)] = 3654,
  [SMALL_STATE(110)] = 3689,
  [SMALL_STATE(111)] = 3724,
  [SMALL_STATE(112)] = 3759,
  [SMALL_STATE(113)] = 3794,
  [SMALL_STATE(114)] = 3829,
  [SMALL_STATE(115)] = 3864,
  [SMALL_STATE(116)] = 3883,
  [SMALL_STATE(117)] = 3901,
  [SMALL_STATE(118)] = 3919,
  [SMALL_STATE(119)] = 3937,
  [SMALL_STATE(120)] = 3955,
  [SMALL_STATE(121)] = 3973,
  [SMALL_STATE(122)] = 3991,
  [SMALL_STATE(123)] = 4013,
  [SMALL_STATE(124)] = 4031,
  [SMALL_STATE(125)] = 4049,
  [SMALL_STATE(126)] = 4067,
  [SMALL_STATE(127)] = 4084,
  [SMALL_STATE(128)] = 4105,
  [SMALL_STATE(129)] = 4134,
  [SMALL_STATE(130)] = 4163,
  [SMALL_STATE(131)] = 4192,
  [SMALL_STATE(132)] = 4221,
  [SMALL_STATE(133)] = 4250,
  [SMALL_STATE(134)] = 4279,
  [SMALL_STATE(135)] = 4308,
  [SMALL_STATE(136)] = 4337,
  [SMALL_STATE(137)] = 4366,
  [SMALL_STATE(138)] = 4395,
  [SMALL_STATE(139)] = 4424,
  [SMALL_STATE(140)] = 4453,
  [SMALL_STATE(141)] = 4478,
  [SMALL_STATE(142)] = 4507,
  [SMALL_STATE(143)] = 4536,
  [SMALL_STATE(144)] = 4555,
  [SMALL_STATE(145)] = 4584,
  [SMALL_STATE(146)] = 4613,
  [SMALL_STATE(147)] = 4642,
  [SMALL_STATE(148)] = 4671,
  [SMALL_STATE(149)] = 4700,
  [SMALL_STATE(150)] = 4729,
  [SMALL_STATE(151)] = 4758,
  [SMALL_STATE(152)] = 4787,
  [SMALL_STATE(153)] = 4816,
  [SMALL_STATE(154)] = 4845,
  [SMALL_STATE(155)] = 4874,
  [SMALL_STATE(156)] = 4891,
  [SMALL_STATE(157)] = 4920,
  [SMALL_STATE(158)] = 4949,
  [SMALL_STATE(159)] = 4978,
  [SMALL_STATE(160)] = 5007,
  [SMALL_STATE(161)] = 5036,
  [SMALL_STATE(162)] = 5065,
  [SMALL_STATE(163)] = 5086,
  [SMALL_STATE(164)] = 5103,
  [SMALL_STATE(165)] = 5132,
  [SMALL_STATE(166)] = 5161,
  [SMALL_STATE(167)] = 5192,
  [SMALL_STATE(168)] = 5209,
  [SMALL_STATE(169)] = 5226,
  [SMALL_STATE(170)] = 5255,
  [SMALL_STATE(171)] = 5276,
  [SMALL_STATE(172)] = 5305,
  [SMALL_STATE(173)] = 5329,
  [SMALL_STATE(174)] = 5355,
  [SMALL_STATE(175)] = 5375,
  [SMALL_STATE(176)] = 5391,
  [SMALL_STATE(177)] = 5407,
  [SMALL_STATE(178)] = 5433,
  [SMALL_STATE(179)] = 5461,
  [SMALL_STATE(180)] = 5477,
  [SMALL_STATE(181)] = 5499,
  [SMALL_STATE(182)] = 5515,
  [SMALL_STATE(183)] = 5541,
  [SMALL_STATE(184)] = 5557,
  [SMALL_STATE(185)] = 5573,
  [SMALL_STATE(186)] = 5599,
  [SMALL_STATE(187)] = 5622,
  [SMALL_STATE(188)] = 5645,
  [SMALL_STATE(189)] = 5668,
  [SMALL_STATE(190)] = 5691,
  [SMALL_STATE(191)] = 5714,
  [SMALL_STATE(192)] = 5737,
  [SMALL_STATE(193)] = 5760,
  [SMALL_STATE(194)] = 5783,
  [SMALL_STATE(195)] = 5806,
  [SMALL_STATE(196)] = 5829,
  [SMALL_STATE(197)] = 5852,
  [SMALL_STATE(198)] = 5875,
  [SMALL_STATE(199)] = 5898,
  [SMALL_STATE(200)] = 5921,
  [SMALL_STATE(201)] = 5944,
  [SMALL_STATE(202)] = 5967,
  [SMALL_STATE(203)] = 5990,
  [SMALL_STATE(204)] = 6013,
  [SMALL_STATE(205)] = 6036,
  [SMALL_STATE(206)] = 6059,
  [SMALL_STATE(207)] = 6084,
  [SMALL_STATE(208)] = 6107,
  [SMALL_STATE(209)] = 6132,
  [SMALL_STATE(210)] = 6151,
  [SMALL_STATE(211)] = 6176,
  [SMALL_STATE(212)] = 6199,
  [SMALL_STATE(213)] = 6222,
  [SMALL_STATE(214)] = 6245,
  [SMALL_STATE(215)] = 6268,
  [SMALL_STATE(216)] = 6291,
  [SMALL_STATE(217)] = 6314,
  [SMALL_STATE(218)] = 6337,
  [SMALL_STATE(219)] = 6360,
  [SMALL_STATE(220)] = 6383,
  [SMALL_STATE(221)] = 6406,
  [SMALL_STATE(222)] = 6429,
  [SMALL_STATE(223)] = 6452,
  [SMALL_STATE(224)] = 6475,
  [SMALL_STATE(225)] = 6500,
  [SMALL_STATE(226)] = 6523,
  [SMALL_STATE(227)] = 6546,
  [SMALL_STATE(228)] = 6569,
  [SMALL_STATE(229)] = 6592,
  [SMALL_STATE(230)] = 6609,
  [SMALL_STATE(231)] = 6632,
  [SMALL_STATE(232)] = 6655,
  [SMALL_STATE(233)] = 6678,
  [SMALL_STATE(234)] = 6701,
  [SMALL_STATE(235)] = 6724,
  [SMALL_STATE(236)] = 6747,
  [SMALL_STATE(237)] = 6770,
  [SMALL_STATE(238)] = 6793,
  [SMALL_STATE(239)] = 6816,
  [SMALL_STATE(240)] = 6839,
  [SMALL_STATE(241)] = 6862,
  [SMALL_STATE(242)] = 6885,
  [SMALL_STATE(243)] = 6908,
  [SMALL_STATE(244)] = 6931,
  [SMALL_STATE(245)] = 6954,
  [SMALL_STATE(246)] = 6977,
  [SMALL_STATE(247)] = 7000,
  [SMALL_STATE(248)] = 7021,
  [SMALL_STATE(249)] = 7044,
  [SMALL_STATE(250)] = 7067,
  [SMALL_STATE(251)] = 7090,
  [SMALL_STATE(252)] = 7113,
  [SMALL_STATE(253)] = 7136,
  [SMALL_STATE(254)] = 7159,
  [SMALL_STATE(255)] = 7182,
  [SMALL_STATE(256)] = 7205,
  [SMALL_STATE(257)] = 7228,
  [SMALL_STATE(258)] = 7251,
  [SMALL_STATE(259)] = 7267,
  [SMALL_STATE(260)] = 7285,
  [SMALL_STATE(261)] = 7303,
  [SMALL_STATE(262)] = 7319,
  [SMALL_STATE(263)] = 7341,
  [SMALL_STATE(264)] = 7357,
  [SMALL_STATE(265)] = 7375,
  [SMALL_STATE(266)] = 7391,
  [SMALL_STATE(267)] = 7407,
  [SMALL_STATE(268)] = 7425,
  [SMALL_STATE(269)] = 7441,
  [SMALL_STATE(270)] = 7457,
  [SMALL_STATE(271)] = 7475,
  [SMALL_STATE(272)] = 7493,
  [SMALL_STATE(273)] = 7507,
  [SMALL_STATE(274)] = 7524,
  [SMALL_STATE(275)] = 7541,
  [SMALL_STATE(276)] = 7558,
  [SMALL_STATE(277)] = 7575,
  [SMALL_STATE(278)] = 7592,
  [SMALL_STATE(279)] = 7609,
  [SMALL_STATE(280)] = 7626,
  [SMALL_STATE(281)] = 7643,
  [SMALL_STATE(282)] = 7660,
  [SMALL_STATE(283)] = 7677,
  [SMALL_STATE(284)] = 7690,
  [SMALL_STATE(285)] = 7707,
  [SMALL_STATE(286)] = 7726,
  [SMALL_STATE(287)] = 7743,
  [SMALL_STATE(288)] = 7760,
  [SMALL_STATE(289)] = 7777,
  [SMALL_STATE(290)] = 7794,
  [SMALL_STATE(291)] = 7811,
  [SMALL_STATE(292)] = 7828,
  [SMALL_STATE(293)] = 7845,
  [SMALL_STATE(294)] = 7862,
  [SMALL_STATE(295)] = 7879,
  [SMALL_STATE(296)] = 7896,
  [SMALL_STATE(297)] = 7913,
  [SMALL_STATE(298)] = 7930,
  [SMALL_STATE(299)] = 7947,
  [SMALL_STATE(300)] = 7964,
  [SMALL_STATE(301)] = 7981,
  [SMALL_STATE(302)] = 7998,
  [SMALL_STATE(303)] = 8015,
  [SMALL_STATE(304)] = 8032,
  [SMALL_STATE(305)] = 8051,
  [SMALL_STATE(306)] = 8068,
  [SMALL_STATE(307)] = 8085,
  [SMALL_STATE(308)] = 8102,
  [SMALL_STATE(309)] = 8119,
  [SMALL_STATE(310)] = 8136,
  [SMALL_STATE(311)] = 8153,
  [SMALL_STATE(312)] = 8170,
  [SMALL_STATE(313)] = 8187,
  [SMALL_STATE(314)] = 8204,
  [SMALL_STATE(315)] = 8221,
  [SMALL_STATE(316)] = 8238,
  [SMALL_STATE(317)] = 8253,
  [SMALL_STATE(318)] = 8270,
  [SMALL_STATE(319)] = 8287,
  [SMALL_STATE(320)] = 8304,
  [SMALL_STATE(321)] = 8321,
  [SMALL_STATE(322)] = 8338,
  [SMALL_STATE(323)] = 8355,
  [SMALL_STATE(324)] = 8368,
  [SMALL_STATE(325)] = 8385,
  [SMALL_STATE(326)] = 8402,
  [SMALL_STATE(327)] = 8419,
  [SMALL_STATE(328)] = 8436,
  [SMALL_STATE(329)] = 8453,
  [SMALL_STATE(330)] = 8470,
  [SMALL_STATE(331)] = 8487,
  [SMALL_STATE(332)] = 8504,
  [SMALL_STATE(333)] = 8519,
  [SMALL_STATE(334)] = 8536,
  [SMALL_STATE(335)] = 8553,
  [SMALL_STATE(336)] = 8570,
  [SMALL_STATE(337)] = 8587,
  [SMALL_STATE(338)] = 8604,
  [SMALL_STATE(339)] = 8621,
  [SMALL_STATE(340)] = 8638,
  [SMALL_STATE(341)] = 8655,
  [SMALL_STATE(342)] = 8672,
  [SMALL_STATE(343)] = 8689,
  [SMALL_STATE(344)] = 8706,
  [SMALL_STATE(345)] = 8723,
  [SMALL_STATE(346)] = 8740,
  [SMALL_STATE(347)] = 8757,
  [SMALL_STATE(348)] = 8774,
  [SMALL_STATE(349)] = 8793,
  [SMALL_STATE(350)] = 8810,
  [SMALL_STATE(351)] = 8827,
  [SMALL_STATE(352)] = 8844,
  [SMALL_STATE(353)] = 8861,
  [SMALL_STATE(354)] = 8874,
  [SMALL_STATE(355)] = 8891,
  [SMALL_STATE(356)] = 8908,
  [SMALL_STATE(357)] = 8925,
  [SMALL_STATE(358)] = 8942,
  [SMALL_STATE(359)] = 8959,
  [SMALL_STATE(360)] = 8976,
  [SMALL_STATE(361)] = 8993,
  [SMALL_STATE(362)] = 9010,
  [SMALL_STATE(363)] = 9027,
  [SMALL_STATE(364)] = 9044,
  [SMALL_STATE(365)] = 9061,
  [SMALL_STATE(366)] = 9078,
  [SMALL_STATE(367)] = 9095,
  [SMALL_STATE(368)] = 9112,
  [SMALL_STATE(369)] = 9129,
  [SMALL_STATE(370)] = 9146,
  [SMALL_STATE(371)] = 9163,
  [SMALL_STATE(372)] = 9180,
  [SMALL_STATE(373)] = 9197,
  [SMALL_STATE(374)] = 9214,
  [SMALL_STATE(375)] = 9231,
  [SMALL_STATE(376)] = 9248,
  [SMALL_STATE(377)] = 9265,
  [SMALL_STATE(378)] = 9282,
  [SMALL_STATE(379)] = 9299,
  [SMALL_STATE(380)] = 9316,
  [SMALL_STATE(381)] = 9333,
  [SMALL_STATE(382)] = 9350,
  [SMALL_STATE(383)] = 9369,
  [SMALL_STATE(384)] = 9382,
  [SMALL_STATE(385)] = 9399,
  [SMALL_STATE(386)] = 9416,
  [SMALL_STATE(387)] = 9433,
  [SMALL_STATE(388)] = 9450,
  [SMALL_STATE(389)] = 9467,
  [SMALL_STATE(390)] = 9484,
  [SMALL_STATE(391)] = 9501,
  [SMALL_STATE(392)] = 9518,
  [SMALL_STATE(393)] = 9535,
  [SMALL_STATE(394)] = 9552,
  [SMALL_STATE(395)] = 9569,
  [SMALL_STATE(396)] = 9584,
  [SMALL_STATE(397)] = 9601,
  [SMALL_STATE(398)] = 9618,
  [SMALL_STATE(399)] = 9635,
  [SMALL_STATE(400)] = 9652,
  [SMALL_STATE(401)] = 9669,
  [SMALL_STATE(402)] = 9686,
  [SMALL_STATE(403)] = 9701,
  [SMALL_STATE(404)] = 9718,
  [SMALL_STATE(405)] = 9735,
  [SMALL_STATE(406)] = 9752,
  [SMALL_STATE(407)] = 9769,
  [SMALL_STATE(408)] = 9786,
  [SMALL_STATE(409)] = 9803,
  [SMALL_STATE(410)] = 9820,
  [SMALL_STATE(411)] = 9837,
  [SMALL_STATE(412)] = 9854,
  [SMALL_STATE(413)] = 9871,
  [SMALL_STATE(414)] = 9888,
  [SMALL_STATE(415)] = 9905,
  [SMALL_STATE(416)] = 9922,
  [SMALL_STATE(417)] = 9939,
  [SMALL_STATE(418)] = 9956,
  [SMALL_STATE(419)] = 9973,
  [SMALL_STATE(420)] = 9992,
  [SMALL_STATE(421)] = 10009,
  [SMALL_STATE(422)] = 10025,
  [SMALL_STATE(423)] = 10041,
  [SMALL_STATE(424)] = 10053,
  [SMALL_STATE(425)] = 10065,
  [SMALL_STATE(426)] = 10081,
  [SMALL_STATE(427)] = 10097,
  [SMALL_STATE(428)] = 10113,
  [SMALL_STATE(429)] = 10127,
  [SMALL_STATE(430)] = 10143,
  [SMALL_STATE(431)] = 10157,
  [SMALL_STATE(432)] = 10173,
  [SMALL_STATE(433)] = 10185,
  [SMALL_STATE(434)] = 10199,
  [SMALL_STATE(435)] = 10215,
  [SMALL_STATE(436)] = 10231,
  [SMALL_STATE(437)] = 10247,
  [SMALL_STATE(438)] = 10263,
  [SMALL_STATE(439)] = 10277,
  [SMALL_STATE(440)] = 10293,
  [SMALL_STATE(441)] = 10307,
  [SMALL_STATE(442)] = 10323,
  [SMALL_STATE(443)] = 10339,
  [SMALL_STATE(444)] = 10353,
  [SMALL_STATE(445)] = 10369,
  [SMALL_STATE(446)] = 10383,
  [SMALL_STATE(447)] = 10399,
  [SMALL_STATE(448)] = 10411,
  [SMALL_STATE(449)] = 10423,
  [SMALL_STATE(450)] = 10439,
  [SMALL_STATE(451)] = 10451,
  [SMALL_STATE(452)] = 10463,
  [SMALL_STATE(453)] = 10475,
  [SMALL_STATE(454)] = 10489,
  [SMALL_STATE(455)] = 10501,
  [SMALL_STATE(456)] = 10513,
  [SMALL_STATE(457)] = 10525,
  [SMALL_STATE(458)] = 10537,
  [SMALL_STATE(459)] = 10549,
  [SMALL_STATE(460)] = 10561,
  [SMALL_STATE(461)] = 10573,
  [SMALL_STATE(462)] = 10585,
  [SMALL_STATE(463)] = 10597,
  [SMALL_STATE(464)] = 10611,
  [SMALL_STATE(465)] = 10627,
  [SMALL_STATE(466)] = 10643,
  [SMALL_STATE(467)] = 10655,
  [SMALL_STATE(468)] = 10666,
  [SMALL_STATE(469)] = 10677,
  [SMALL_STATE(470)] = 10688,
  [SMALL_STATE(471)] = 10699,
  [SMALL_STATE(472)] = 10710,
  [SMALL_STATE(473)] = 10721,
  [SMALL_STATE(474)] = 10732,
  [SMALL_STATE(475)] = 10743,
  [SMALL_STATE(476)] = 10756,
  [SMALL_STATE(477)] = 10767,
  [SMALL_STATE(478)] = 10778,
  [SMALL_STATE(479)] = 10789,
  [SMALL_STATE(480)] = 10800,
  [SMALL_STATE(481)] = 10811,
  [SMALL_STATE(482)] = 10822,
  [SMALL_STATE(483)] = 10833,
  [SMALL_STATE(484)] = 10844,
  [SMALL_STATE(485)] = 10855,
  [SMALL_STATE(486)] = 10866,
  [SMALL_STATE(487)] = 10877,
  [SMALL_STATE(488)] = 10888,
  [SMALL_STATE(489)] = 10899,
  [SMALL_STATE(490)] = 10910,
  [SMALL_STATE(491)] = 10921,
  [SMALL_STATE(492)] = 10932,
  [SMALL_STATE(493)] = 10943,
  [SMALL_STATE(494)] = 10954,
  [SMALL_STATE(495)] = 10965,
  [SMALL_STATE(496)] = 10976,
  [SMALL_STATE(497)] = 10987,
  [SMALL_STATE(498)] = 10998,
  [SMALL_STATE(499)] = 11009,
  [SMALL_STATE(500)] = 11020,
  [SMALL_STATE(501)] = 11031,
  [SMALL_STATE(502)] = 11042,
  [SMALL_STATE(503)] = 11053,
  [SMALL_STATE(504)] = 11064,
  [SMALL_STATE(505)] = 11075,
  [SMALL_STATE(506)] = 11086,
  [SMALL_STATE(507)] = 11097,
  [SMALL_STATE(508)] = 11108,
  [SMALL_STATE(509)] = 11119,
  [SMALL_STATE(510)] = 11130,
  [SMALL_STATE(511)] = 11141,
  [SMALL_STATE(512)] = 11154,
  [SMALL_STATE(513)] = 11165,
  [SMALL_STATE(514)] = 11176,
  [SMALL_STATE(515)] = 11189,
  [SMALL_STATE(516)] = 11200,
  [SMALL_STATE(517)] = 11211,
  [SMALL_STATE(518)] = 11222,
  [SMALL_STATE(519)] = 11233,
  [SMALL_STATE(520)] = 11244,
  [SMALL_STATE(521)] = 11255,
  [SMALL_STATE(522)] = 11266,
  [SMALL_STATE(523)] = 11277,
  [SMALL_STATE(524)] = 11288,
  [SMALL_STATE(525)] = 11299,
  [SMALL_STATE(526)] = 11310,
  [SMALL_STATE(527)] = 11321,
  [SMALL_STATE(528)] = 11332,
  [SMALL_STATE(529)] = 11343,
  [SMALL_STATE(530)] = 11354,
  [SMALL_STATE(531)] = 11365,
  [SMALL_STATE(532)] = 11376,
  [SMALL_STATE(533)] = 11387,
  [SMALL_STATE(534)] = 11400,
  [SMALL_STATE(535)] = 11411,
  [SMALL_STATE(536)] = 11422,
  [SMALL_STATE(537)] = 11433,
  [SMALL_STATE(538)] = 11444,
  [SMALL_STATE(539)] = 11455,
  [SMALL_STATE(540)] = 11466,
  [SMALL_STATE(541)] = 11477,
  [SMALL_STATE(542)] = 11488,
  [SMALL_STATE(543)] = 11499,
  [SMALL_STATE(544)] = 11510,
  [SMALL_STATE(545)] = 11521,
  [SMALL_STATE(546)] = 11532,
  [SMALL_STATE(547)] = 11545,
  [SMALL_STATE(548)] = 11556,
  [SMALL_STATE(549)] = 11567,
  [SMALL_STATE(550)] = 11578,
  [SMALL_STATE(551)] = 11589,
  [SMALL_STATE(552)] = 11600,
  [SMALL_STATE(553)] = 11611,
  [SMALL_STATE(554)] = 11622,
  [SMALL_STATE(555)] = 11633,
  [SMALL_STATE(556)] = 11644,
  [SMALL_STATE(557)] = 11655,
  [SMALL_STATE(558)] = 11666,
  [SMALL_STATE(559)] = 11677,
  [SMALL_STATE(560)] = 11688,
  [SMALL_STATE(561)] = 11699,
  [SMALL_STATE(562)] = 11710,
  [SMALL_STATE(563)] = 11721,
  [SMALL_STATE(564)] = 11732,
  [SMALL_STATE(565)] = 11743,
  [SMALL_STATE(566)] = 11754,
  [SMALL_STATE(567)] = 11765,
  [SMALL_STATE(568)] = 11776,
  [SMALL_STATE(569)] = 11787,
  [SMALL_STATE(570)] = 11798,
  [SMALL_STATE(571)] = 11809,
  [SMALL_STATE(572)] = 11820,
  [SMALL_STATE(573)] = 11831,
  [SMALL_STATE(574)] = 11842,
  [SMALL_STATE(575)] = 11853,
  [SMALL_STATE(576)] = 11864,
  [SMALL_STATE(577)] = 11875,
  [SMALL_STATE(578)] = 11886,
  [SMALL_STATE(579)] = 11899,
  [SMALL_STATE(580)] = 11910,
  [SMALL_STATE(581)] = 11921,
  [SMALL_STATE(582)] = 11932,
  [SMALL_STATE(583)] = 11943,
  [SMALL_STATE(584)] = 11954,
  [SMALL_STATE(585)] = 11965,
  [SMALL_STATE(586)] = 11976,
  [SMALL_STATE(587)] = 11987,
  [SMALL_STATE(588)] = 11998,
  [SMALL_STATE(589)] = 12009,
  [SMALL_STATE(590)] = 12020,
  [SMALL_STATE(591)] = 12031,
  [SMALL_STATE(592)] = 12042,
  [SMALL_STATE(593)] = 12053,
  [SMALL_STATE(594)] = 12064,
  [SMALL_STATE(595)] = 12075,
  [SMALL_STATE(596)] = 12086,
  [SMALL_STATE(597)] = 12097,
  [SMALL_STATE(598)] = 12108,
  [SMALL_STATE(599)] = 12119,
  [SMALL_STATE(600)] = 12130,
  [SMALL_STATE(601)] = 12141,
  [SMALL_STATE(602)] = 12152,
  [SMALL_STATE(603)] = 12163,
  [SMALL_STATE(604)] = 12174,
  [SMALL_STATE(605)] = 12185,
  [SMALL_STATE(606)] = 12196,
  [SMALL_STATE(607)] = 12207,
  [SMALL_STATE(608)] = 12220,
  [SMALL_STATE(609)] = 12231,
  [SMALL_STATE(610)] = 12242,
  [SMALL_STATE(611)] = 12253,
  [SMALL_STATE(612)] = 12264,
  [SMALL_STATE(613)] = 12275,
  [SMALL_STATE(614)] = 12286,
  [SMALL_STATE(615)] = 12297,
  [SMALL_STATE(616)] = 12308,
  [SMALL_STATE(617)] = 12319,
  [SMALL_STATE(618)] = 12330,
  [SMALL_STATE(619)] = 12341,
  [SMALL_STATE(620)] = 12352,
  [SMALL_STATE(621)] = 12363,
  [SMALL_STATE(622)] = 12374,
  [SMALL_STATE(623)] = 12385,
  [SMALL_STATE(624)] = 12396,
  [SMALL_STATE(625)] = 12407,
  [SMALL_STATE(626)] = 12418,
  [SMALL_STATE(627)] = 12429,
  [SMALL_STATE(628)] = 12440,
  [SMALL_STATE(629)] = 12451,
  [SMALL_STATE(630)] = 12462,
  [SMALL_STATE(631)] = 12473,
  [SMALL_STATE(632)] = 12484,
  [SMALL_STATE(633)] = 12495,
  [SMALL_STATE(634)] = 12506,
  [SMALL_STATE(635)] = 12517,
  [SMALL_STATE(636)] = 12528,
  [SMALL_STATE(637)] = 12539,
  [SMALL_STATE(638)] = 12550,
  [SMALL_STATE(639)] = 12561,
  [SMALL_STATE(640)] = 12572,
  [SMALL_STATE(641)] = 12583,
  [SMALL_STATE(642)] = 12594,
  [SMALL_STATE(643)] = 12605,
  [SMALL_STATE(644)] = 12616,
  [SMALL_STATE(645)] = 12627,
  [SMALL_STATE(646)] = 12638,
  [SMALL_STATE(647)] = 12649,
  [SMALL_STATE(648)] = 12660,
  [SMALL_STATE(649)] = 12671,
  [SMALL_STATE(650)] = 12682,
  [SMALL_STATE(651)] = 12693,
  [SMALL_STATE(652)] = 12704,
  [SMALL_STATE(653)] = 12715,
  [SMALL_STATE(654)] = 12726,
  [SMALL_STATE(655)] = 12737,
  [SMALL_STATE(656)] = 12748,
  [SMALL_STATE(657)] = 12759,
  [SMALL_STATE(658)] = 12770,
  [SMALL_STATE(659)] = 12781,
  [SMALL_STATE(660)] = 12792,
  [SMALL_STATE(661)] = 12803,
  [SMALL_STATE(662)] = 12814,
  [SMALL_STATE(663)] = 12825,
  [SMALL_STATE(664)] = 12836,
  [SMALL_STATE(665)] = 12847,
  [SMALL_STATE(666)] = 12858,
  [SMALL_STATE(667)] = 12869,
  [SMALL_STATE(668)] = 12880,
  [SMALL_STATE(669)] = 12891,
  [SMALL_STATE(670)] = 12904,
  [SMALL_STATE(671)] = 12915,
  [SMALL_STATE(672)] = 12926,
  [SMALL_STATE(673)] = 12937,
  [SMALL_STATE(674)] = 12948,
  [SMALL_STATE(675)] = 12959,
  [SMALL_STATE(676)] = 12970,
  [SMALL_STATE(677)] = 12981,
  [SMALL_STATE(678)] = 12992,
  [SMALL_STATE(679)] = 13003,
  [SMALL_STATE(680)] = 13016,
  [SMALL_STATE(681)] = 13027,
  [SMALL_STATE(682)] = 13038,
  [SMALL_STATE(683)] = 13049,
  [SMALL_STATE(684)] = 13060,
  [SMALL_STATE(685)] = 13071,
  [SMALL_STATE(686)] = 13082,
  [SMALL_STATE(687)] = 13093,
  [SMALL_STATE(688)] = 13104,
  [SMALL_STATE(689)] = 13115,
  [SMALL_STATE(690)] = 13126,
  [SMALL_STATE(691)] = 13137,
  [SMALL_STATE(692)] = 13148,
  [SMALL_STATE(693)] = 13159,
  [SMALL_STATE(694)] = 13170,
  [SMALL_STATE(695)] = 13181,
  [SMALL_STATE(696)] = 13192,
  [SMALL_STATE(697)] = 13203,
  [SMALL_STATE(698)] = 13214,
  [SMALL_STATE(699)] = 13225,
  [SMALL_STATE(700)] = 13236,
  [SMALL_STATE(701)] = 13247,
  [SMALL_STATE(702)] = 13258,
  [SMALL_STATE(703)] = 13269,
  [SMALL_STATE(704)] = 13280,
  [SMALL_STATE(705)] = 13291,
  [SMALL_STATE(706)] = 13302,
  [SMALL_STATE(707)] = 13313,
  [SMALL_STATE(708)] = 13324,
  [SMALL_STATE(709)] = 13335,
  [SMALL_STATE(710)] = 13346,
  [SMALL_STATE(711)] = 13357,
  [SMALL_STATE(712)] = 13368,
  [SMALL_STATE(713)] = 13379,
  [SMALL_STATE(714)] = 13390,
  [SMALL_STATE(715)] = 13401,
  [SMALL_STATE(716)] = 13412,
  [SMALL_STATE(717)] = 13423,
  [SMALL_STATE(718)] = 13434,
  [SMALL_STATE(719)] = 13445,
  [SMALL_STATE(720)] = 13456,
  [SMALL_STATE(721)] = 13467,
  [SMALL_STATE(722)] = 13478,
  [SMALL_STATE(723)] = 13489,
  [SMALL_STATE(724)] = 13502,
  [SMALL_STATE(725)] = 13513,
  [SMALL_STATE(726)] = 13524,
  [SMALL_STATE(727)] = 13535,
  [SMALL_STATE(728)] = 13546,
  [SMALL_STATE(729)] = 13559,
  [SMALL_STATE(730)] = 13570,
  [SMALL_STATE(731)] = 13581,
  [SMALL_STATE(732)] = 13592,
  [SMALL_STATE(733)] = 13603,
  [SMALL_STATE(734)] = 13614,
  [SMALL_STATE(735)] = 13625,
  [SMALL_STATE(736)] = 13636,
  [SMALL_STATE(737)] = 13647,
  [SMALL_STATE(738)] = 13658,
  [SMALL_STATE(739)] = 13671,
  [SMALL_STATE(740)] = 13682,
  [SMALL_STATE(741)] = 13693,
  [SMALL_STATE(742)] = 13704,
  [SMALL_STATE(743)] = 13715,
  [SMALL_STATE(744)] = 13726,
  [SMALL_STATE(745)] = 13737,
  [SMALL_STATE(746)] = 13748,
  [SMALL_STATE(747)] = 13759,
  [SMALL_STATE(748)] = 13770,
  [SMALL_STATE(749)] = 13781,
  [SMALL_STATE(750)] = 13792,
  [SMALL_STATE(751)] = 13803,
  [SMALL_STATE(752)] = 13814,
  [SMALL_STATE(753)] = 13825,
  [SMALL_STATE(754)] = 13836,
  [SMALL_STATE(755)] = 13847,
  [SMALL_STATE(756)] = 13857,
  [SMALL_STATE(757)] = 13867,
  [SMALL_STATE(758)] = 13877,
  [SMALL_STATE(759)] = 13887,
  [SMALL_STATE(760)] = 13897,
  [SMALL_STATE(761)] = 13907,
  [SMALL_STATE(762)] = 13917,
  [SMALL_STATE(763)] = 13927,
  [SMALL_STATE(764)] = 13937,
  [SMALL_STATE(765)] = 13947,
  [SMALL_STATE(766)] = 13957,
  [SMALL_STATE(767)] = 13967,
  [SMALL_STATE(768)] = 13977,
  [SMALL_STATE(769)] = 13987,
  [SMALL_STATE(770)] = 13997,
  [SMALL_STATE(771)] = 14007,
  [SMALL_STATE(772)] = 14017,
  [SMALL_STATE(773)] = 14027,
  [SMALL_STATE(774)] = 14037,
  [SMALL_STATE(775)] = 14047,
  [SMALL_STATE(776)] = 14057,
  [SMALL_STATE(777)] = 14067,
  [SMALL_STATE(778)] = 14077,
  [SMALL_STATE(779)] = 14087,
  [SMALL_STATE(780)] = 14097,
  [SMALL_STATE(781)] = 14107,
  [SMALL_STATE(782)] = 14117,
  [SMALL_STATE(783)] = 14127,
  [SMALL_STATE(784)] = 14137,
  [SMALL_STATE(785)] = 14147,
  [SMALL_STATE(786)] = 14157,
  [SMALL_STATE(787)] = 14167,
  [SMALL_STATE(788)] = 14177,
  [SMALL_STATE(789)] = 14187,
  [SMALL_STATE(790)] = 14197,
  [SMALL_STATE(791)] = 14207,
  [SMALL_STATE(792)] = 14217,
  [SMALL_STATE(793)] = 14227,
  [SMALL_STATE(794)] = 14237,
  [SMALL_STATE(795)] = 14247,
  [SMALL_STATE(796)] = 14257,
  [SMALL_STATE(797)] = 14267,
  [SMALL_STATE(798)] = 14277,
  [SMALL_STATE(799)] = 14287,
  [SMALL_STATE(800)] = 14297,
  [SMALL_STATE(801)] = 14307,
  [SMALL_STATE(802)] = 14317,
  [SMALL_STATE(803)] = 14327,
  [SMALL_STATE(804)] = 14337,
  [SMALL_STATE(805)] = 14347,
  [SMALL_STATE(806)] = 14357,
  [SMALL_STATE(807)] = 14367,
  [SMALL_STATE(808)] = 14377,
  [SMALL_STATE(809)] = 14387,
  [SMALL_STATE(810)] = 14397,
  [SMALL_STATE(811)] = 14407,
  [SMALL_STATE(812)] = 14417,
  [SMALL_STATE(813)] = 14427,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_comparison_operator, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_comparison_operator, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(789),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1, 0, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 4, 0, 12),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 4, 0, 12),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 5, 0, 12),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 5, 0, 12),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 8, 0, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 8, 0, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_expression, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_expression, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 2, 0, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_identifier, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storage_identifier, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 15),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 6),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(802),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 29),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_clause_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 58),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 7),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 16),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal, 1, 0, 0),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_literal, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_literal, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__soql_literal, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__soql_literal, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal_with_param, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal_with_param, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 94),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 27),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 150),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_lookup_bind_clause, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_lookup_clause, 2, 0, 49),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_using_lookup_bind_clause_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_using_lookup_bind_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(578),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_lookup_bind_clause, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 34),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 56),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 13),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 63),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2, 0, 0),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_comparison, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_comparison, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_expression, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comparison, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comparison, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparable_list, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparable_list, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_lookup_bind_expression, 3, 0, 470),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparable_list, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparable_list, 4, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 113),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 148),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 155),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 169),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 214),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2, 0, 0),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(514),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 284),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2, 0, 0),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 20),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 33),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 11),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_listview_clause, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 54),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 39),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_scope_type, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 62),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_scope_clause, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 68),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 92),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 25),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 99),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_lookup_clause, 3, 0, 49),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 5, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 6, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_user_id_type, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 59),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 65),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 75),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 85),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 89),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 17),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 96),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 8),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 106),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 110),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 121),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 22),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 30),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 36),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 141),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 145),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 51),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 152),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 162),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 166),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 177),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 207),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 211),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 222),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 242),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 4, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 277),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 281),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 292),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 312),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 352),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 5, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 408),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_type, 1, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_clause, 2, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 46),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1, 0, 0),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(765),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_null_direction, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 3, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_clause, 2, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 251),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 60),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 157),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 122),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 163),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 130),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 167),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 172),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 178),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 186),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 196),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 202),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 208),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 86),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 212),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 217),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 23),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 223),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 231),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 237),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 243),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 9),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 90),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 266),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 272),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 66),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 278),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 18),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 282),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 287),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 31),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 293),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 301),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 153),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 313),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 321),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 341),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 347),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 353),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 361),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 376),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 70),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 37),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 97),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 397),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 403),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 41),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 409),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 417),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 432),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 454),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 52),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 483),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 101),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 76),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 136),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 107),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 142),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 80),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 146),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 111),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 47),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 116),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 307),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2, 0, 0),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(785),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2, 0, 0),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0), SHIFT_REPEAT(738),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 502),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 241),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 120),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 135),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 246),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 250),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 88),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 253),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 257),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 138),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 140),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 125),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 144),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 129),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 69),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 261),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 265),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 132),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 268),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 271),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 57),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 274),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 276),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 151),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 72),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 280),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 95),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 74),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 286),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 156),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 289),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 291),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 14),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 159),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 296),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 300),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 161),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 303),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 306),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 309),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 311),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 100),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 165),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 316),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 320),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 323),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 327),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 332),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 336),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 340),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 79),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 343),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 346),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2, 0, 0),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(463),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 349),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 351),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 171),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 28),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 356),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 360),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 174),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 363),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 367),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 371),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 375),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 176),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 378),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 382),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 103),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selectable_expression, 1, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selectable_expression, 1, 0, 0),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 105),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 181),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 185),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 64),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_clause, 2, 0, 0),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 392),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 396),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 188),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 399),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 402),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 191),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 405),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 407),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 195),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 82),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 412),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 416),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 198),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 419),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 423),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 427),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 431),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 201),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 434),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 438),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 445),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 449),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 453),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 109),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 456),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 460),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 466),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 204),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_type, 1, 0, 0),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 206),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 35),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 84),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 474),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 478),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 482),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 210),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 485),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 489),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 495),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 5),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 510),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 21),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 3, 0, 0),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 2, 0, 0),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 40),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 216),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 115),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 219),
  [941] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(762),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 221),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 43),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 45),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 226),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 230),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 50),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 233),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 236),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 118),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 239),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 388),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 1, 0, 0),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_expression, 4, 0, 0),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 3, 0, 0),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2, 0, 0),
  [1002] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2, 0, 0),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2, 0, 0),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2, 0, 0),
  [1020] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparable_list_repeat1, 2, 0, 0),
  [1035] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparable_list_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2, 0, 0),
  [1042] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2, 0, 0), SHIFT_REPEAT(775),
  [1045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_type, 1, 0, 0),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 228),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 227),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 260),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 238),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 262),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 263),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 264),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 267),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 269),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 270),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 24),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 273),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 229),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 26),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 240),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 279),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 2, 0, 0),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 283),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 126),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 285),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 32),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 3, 0, 0),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 288),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 290),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 53),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 127),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 294),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 295),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 55),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 297),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 298),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 299),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 302),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 38),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 304),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 305),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 308),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 310),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 128),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter_type, 1, 0, 0),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 314),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 315),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 317),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 318),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 319),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 61),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 322),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 244),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 324),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 325),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 326),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 42),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 328),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 329),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 330),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 331),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 134),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 333),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 334),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 335),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 337),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 338),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 339),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 44),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 137),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 342),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 344),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 345),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 139),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 67),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 348),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 350),
  [1208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 143),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 48),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 354),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 355),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 71),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 357),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 358),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 359),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 147),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 362),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 73),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 364),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 365),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 366),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 149),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 368),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 369),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 370),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 372),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 373),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 374),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 377),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 77),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 379),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 380),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 381),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 154),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 383),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 384),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 385),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 78),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 4, 0, 0),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 158),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 81),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 245),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_param, 3, 0, 0),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 160),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 247),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 386),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 387),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 248),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 389),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 390),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 391),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 83),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 393),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 394),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 395),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_expression, 4, 0, 0),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 164),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 398),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 249),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 400),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 401),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 87),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 404),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 168),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 406),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 170),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 410),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 411),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_comparison_operator, 1, 0, 0),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 413),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 414),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 415),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 173),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 91),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 418),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 175),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 420),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 421),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 422),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 424),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 425),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 426),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 93),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 428),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 429),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 430),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 179),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 433),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 180),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 435),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 436),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 437),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 439),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 440),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 441),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 442),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 443),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 444),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 182),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 446),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 447),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 448),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 183),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 450),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 451),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 452),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 184),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 455),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 457),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 458),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 459),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 187),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 461),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 462),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 463),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 464),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 465),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 98),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 467),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 468),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 469),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 189),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 190),
  [1452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_comment, 2, 0, 0),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_comment, 2, 0, 0),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 192),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 193),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 131),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 194),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 252),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 471),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 472),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 473),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 475),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 476),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 477),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 479),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 480),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 481),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 197),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 102),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 484),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 199),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 486),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 487),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 488),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 200),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 490),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 491),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 492),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 493),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 494),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 496),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 497),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 498),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 499),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 500),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 501),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 104),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 503),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 504),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 505),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 506),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 203),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 19),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 507),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 508),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 509),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 511),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 512),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 513),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 514),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 515),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 11, 0, 516),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 205),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 254),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 108),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 255),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 209),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 256),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 10),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 133),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 258),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 259),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 213),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 232),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 3, 0, 0),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 234),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 5, 0, 0),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 235),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 112),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 215),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 123),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 114),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 218),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 220),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 117),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 224),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 124),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 225),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 119),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 275),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 6, 0, 1),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [1628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expression, 2, 0, 0),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_expression, 3, 0, 12),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_type, 1, 0, 0),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1694] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 1, 0, 0),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__soql_query_expression, 1, 0, 0),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatting_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_soql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
