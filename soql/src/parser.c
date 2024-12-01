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
#define STATE_COUNT 796
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 195
#define ALIAS_COUNT 0
#define TOKEN_COUNT 112
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 515

enum ts_symbol_identifiers {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_header_comment_token1 = 2,
  anon_sym_SLASH_SLASH_SLASH = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  aux_sym_select_clause_token1 = 6,
  anon_sym_COMMA = 7,
  aux_sym_soql_using_clause_token1 = 8,
  aux_sym_using_scope_type_token1 = 9,
  aux_sym_using_scope_type_token2 = 10,
  aux_sym_using_scope_type_token3 = 11,
  aux_sym_using_scope_type_token4 = 12,
  aux_sym_using_scope_type_token5 = 13,
  aux_sym_using_scope_type_token6 = 14,
  aux_sym_using_scope_type_token7 = 15,
  aux_sym_type_of_clause_token1 = 16,
  aux_sym_type_of_clause_token2 = 17,
  aux_sym_when_expression_token1 = 18,
  aux_sym_when_expression_token2 = 19,
  aux_sym_else_expression_token1 = 20,
  aux_sym_group_by_clause_token1 = 21,
  aux_sym_for_clause_token1 = 22,
  aux_sym_for_type_token1 = 23,
  aux_sym_for_type_token2 = 24,
  aux_sym_for_type_token3 = 25,
  aux_sym_having_clause_token1 = 26,
  aux_sym_from_clause_token1 = 27,
  aux_sym_storage_alias_token1 = 28,
  aux_sym_fields_expression_token1 = 29,
  aux_sym_fields_type_token1 = 30,
  aux_sym_fields_type_token2 = 31,
  aux_sym_fields_type_token3 = 32,
  aux_sym_where_clause_token1 = 33,
  aux_sym_and_expression_token1 = 34,
  aux_sym_or_expression_token1 = 35,
  aux_sym_not_expression_token1 = 36,
  aux_sym_soql_with_clause_token1 = 37,
  aux_sym_soql_with_type_token1 = 38,
  aux_sym_soql_with_type_token2 = 39,
  aux_sym_soql_with_type_token3 = 40,
  aux_sym_with_user_id_type_token1 = 41,
  anon_sym_EQ = 42,
  aux_sym_with_record_visibility_expression_token1 = 43,
  aux_sym_with_record_visibility_param_token1 = 44,
  aux_sym_with_record_visibility_param_token2 = 45,
  aux_sym_with_record_visibility_param_token3 = 46,
  aux_sym_with_data_cat_expression_token1 = 47,
  aux_sym_with_data_cat_filter_type_token1 = 48,
  aux_sym_with_data_cat_filter_type_token2 = 49,
  aux_sym_with_data_cat_filter_type_token3 = 50,
  aux_sym_with_data_cat_filter_type_token4 = 51,
  aux_sym_limit_clause_token1 = 52,
  aux_sym_offset_clause_token1 = 53,
  aux_sym_update_type_token1 = 54,
  aux_sym_update_type_token2 = 55,
  aux_sym_order_by_clause_token1 = 56,
  aux_sym_order_direction_token1 = 57,
  aux_sym_order_direction_token2 = 58,
  aux_sym_order_null_direction_token1 = 59,
  aux_sym_order_null_direction_token2 = 60,
  aux_sym_geo_location_type_token1 = 61,
  aux_sym_function_expression_token1 = 62,
  anon_sym_DOT = 63,
  aux_sym_boolean_token1 = 64,
  aux_sym_boolean_token2 = 65,
  anon_sym_BANG_EQ = 66,
  anon_sym_LT_GT = 67,
  anon_sym_LT = 68,
  anon_sym_LT_EQ = 69,
  anon_sym_GT = 70,
  anon_sym_GT_EQ = 71,
  aux_sym_value_comparison_operator_token1 = 72,
  aux_sym_set_comparison_operator_token1 = 73,
  aux_sym_set_comparison_operator_token2 = 74,
  aux_sym_set_comparison_operator_token3 = 75,
  aux_sym_set_comparison_operator_token4 = 76,
  aux_sym_date_literal_token1 = 77,
  aux_sym_date_literal_token2 = 78,
  aux_sym_date_literal_token3 = 79,
  aux_sym_date_literal_token4 = 80,
  aux_sym_date_literal_token5 = 81,
  aux_sym_date_literal_token6 = 82,
  aux_sym_date_literal_token7 = 83,
  aux_sym_date_literal_token8 = 84,
  aux_sym_date_literal_token9 = 85,
  aux_sym_date_literal_token10 = 86,
  aux_sym_date_literal_token11 = 87,
  aux_sym_date_literal_token12 = 88,
  aux_sym_date_literal_token13 = 89,
  aux_sym_date_literal_token14 = 90,
  aux_sym_date_literal_token15 = 91,
  aux_sym_date_literal_token16 = 92,
  aux_sym_date_literal_token17 = 93,
  aux_sym_date_literal_token18 = 94,
  aux_sym_date_literal_token19 = 95,
  aux_sym_date_literal_token20 = 96,
  aux_sym_date_literal_token21 = 97,
  aux_sym_date_literal_token22 = 98,
  aux_sym_date_literal_token23 = 99,
  aux_sym_date_literal_with_param_token1 = 100,
  anon_sym_COLON = 101,
  anon_sym_QMARK = 102,
  sym_bound_apex_expression = 103,
  aux_sym_null_literal_token1 = 104,
  sym_string_literal = 105,
  sym_int = 106,
  sym_decimal = 107,
  sym_date = 108,
  sym_date_time = 109,
  sym_currency_literal = 110,
  sym_identifier = 111,
  sym_source_file = 112,
  sym_header_comment = 113,
  sym_formatting_comment = 114,
  sym__soql_query_expression = 115,
  sym_subquery = 116,
  sym_soql_query_body = 117,
  sym_count_expression = 118,
  sym_select_clause = 119,
  sym__selectable_expression = 120,
  sym_soql_using_clause = 121,
  sym_using_scope_type = 122,
  sym_type_of_clause = 123,
  sym_when_expression = 124,
  sym_else_expression = 125,
  sym_group_by_clause = 126,
  sym__group_by_expression = 127,
  sym_for_clause = 128,
  sym_for_type = 129,
  sym_having_clause = 130,
  sym_from_clause = 131,
  sym_storage_identifier = 132,
  sym_storage_alias = 133,
  sym_fields_expression = 134,
  sym_fields_type = 135,
  sym_where_clause = 136,
  sym__boolean_expression = 137,
  sym_and_expression = 138,
  sym_or_expression = 139,
  sym_not_expression = 140,
  sym__condition_expression = 141,
  sym_comparison_expression = 142,
  sym__comparison = 143,
  sym__value_comparison = 144,
  sym__set_comparison = 145,
  sym_comparable_list = 146,
  sym_soql_with_clause = 147,
  sym_soql_with_type = 148,
  sym_with_user_id_type = 149,
  sym_with_record_visibility_expression = 150,
  sym_with_record_visibility_param = 151,
  sym_with_data_cat_expression = 152,
  sym_with_data_cat_filter = 153,
  sym_with_data_cat_filter_type = 154,
  sym_limit_clause = 155,
  sym_offset_clause = 156,
  sym_update_clause = 157,
  sym_update_type = 158,
  sym_alias_expression = 159,
  sym_order_by_clause = 160,
  sym_order_expression = 161,
  sym_order_direction = 162,
  sym_order_null_direction = 163,
  sym_geo_location_type = 164,
  sym__value_expression = 165,
  sym_function_expression = 166,
  sym_dotted_identifier = 167,
  sym_field_identifier = 168,
  sym_field_list = 169,
  sym_boolean = 170,
  sym_value_comparison_operator = 171,
  sym_set_comparison_operator = 172,
  sym_date_literal = 173,
  sym_date_literal_with_param = 174,
  sym__function_name = 175,
  sym_null_literal = 176,
  sym__soql_literal = 177,
  aux_sym_source_file_repeat1 = 178,
  aux_sym_select_clause_repeat1 = 179,
  aux_sym_type_of_clause_repeat1 = 180,
  aux_sym__group_by_expression_repeat1 = 181,
  aux_sym_for_clause_repeat1 = 182,
  aux_sym_from_clause_repeat1 = 183,
  aux_sym_and_expression_repeat1 = 184,
  aux_sym_or_expression_repeat1 = 185,
  aux_sym_comparable_list_repeat1 = 186,
  aux_sym_with_record_visibility_expression_repeat1 = 187,
  aux_sym_with_data_cat_expression_repeat1 = 188,
  aux_sym_with_data_cat_filter_repeat1 = 189,
  aux_sym_update_clause_repeat1 = 190,
  aux_sym_order_by_clause_repeat1 = 191,
  aux_sym_function_expression_repeat1 = 192,
  aux_sym_dotted_identifier_repeat1 = 193,
  aux_sym_field_list_repeat1 = 194,
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
  [aux_sym_soql_using_clause_token1] = "USING_SCOPE",
  [aux_sym_using_scope_type_token1] = "delegated",
  [aux_sym_using_scope_type_token2] = "everything",
  [aux_sym_using_scope_type_token3] = "mine",
  [aux_sym_using_scope_type_token4] = "mine_and_my_groups",
  [aux_sym_using_scope_type_token5] = "my_territory",
  [aux_sym_using_scope_type_token6] = "my_team_territory",
  [aux_sym_using_scope_type_token7] = "team",
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
  [anon_sym_EQ] = "=",
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
  [sym_soql_using_clause] = "using_clause",
  [sym_using_scope_type] = "using_scope_type",
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
  [aux_sym_soql_using_clause_token1] = aux_sym_soql_using_clause_token1,
  [aux_sym_using_scope_type_token1] = aux_sym_using_scope_type_token1,
  [aux_sym_using_scope_type_token2] = aux_sym_using_scope_type_token2,
  [aux_sym_using_scope_type_token3] = aux_sym_using_scope_type_token3,
  [aux_sym_using_scope_type_token4] = aux_sym_using_scope_type_token4,
  [aux_sym_using_scope_type_token5] = aux_sym_using_scope_type_token5,
  [aux_sym_using_scope_type_token6] = aux_sym_using_scope_type_token6,
  [aux_sym_using_scope_type_token7] = aux_sym_using_scope_type_token7,
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
  [anon_sym_EQ] = anon_sym_EQ,
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
  [sym_soql_using_clause] = sym_soql_using_clause,
  [sym_using_scope_type] = sym_using_scope_type,
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
  [aux_sym_soql_using_clause_token1] = {
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
  [anon_sym_EQ] = {
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
  [sym_soql_using_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_using_scope_type] = {
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
  field_for_clause = 1,
  field_from_clause = 2,
  field_function_name = 3,
  field_group_by_clause = 4,
  field_limit_clause = 5,
  field_offset_clause = 6,
  field_order_by_clause = 7,
  field_select_clause = 8,
  field_update_clause = 9,
  field_using_clause = 10,
  field_where_clause = 11,
  field_with_clause = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_for_clause] = "for_clause",
  [field_from_clause] = "from_clause",
  [field_function_name] = "function_name",
  [field_group_by_clause] = "group_by_clause",
  [field_limit_clause] = "limit_clause",
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
  [49] = {.index = 175, .length = 5},
  [50] = {.index = 180, .length = 5},
  [51] = {.index = 185, .length = 5},
  [52] = {.index = 190, .length = 5},
  [53] = {.index = 195, .length = 5},
  [54] = {.index = 200, .length = 5},
  [55] = {.index = 205, .length = 5},
  [56] = {.index = 210, .length = 5},
  [57] = {.index = 215, .length = 5},
  [58] = {.index = 220, .length = 5},
  [59] = {.index = 225, .length = 5},
  [60] = {.index = 230, .length = 5},
  [61] = {.index = 235, .length = 5},
  [62] = {.index = 240, .length = 5},
  [63] = {.index = 245, .length = 5},
  [64] = {.index = 250, .length = 5},
  [65] = {.index = 255, .length = 5},
  [66] = {.index = 260, .length = 5},
  [67] = {.index = 265, .length = 5},
  [68] = {.index = 270, .length = 5},
  [69] = {.index = 275, .length = 5},
  [70] = {.index = 280, .length = 5},
  [71] = {.index = 285, .length = 5},
  [72] = {.index = 290, .length = 5},
  [73] = {.index = 295, .length = 5},
  [74] = {.index = 300, .length = 5},
  [75] = {.index = 305, .length = 5},
  [76] = {.index = 310, .length = 5},
  [77] = {.index = 315, .length = 5},
  [78] = {.index = 320, .length = 5},
  [79] = {.index = 325, .length = 5},
  [80] = {.index = 330, .length = 5},
  [81] = {.index = 335, .length = 5},
  [82] = {.index = 340, .length = 5},
  [83] = {.index = 345, .length = 5},
  [84] = {.index = 350, .length = 5},
  [85] = {.index = 355, .length = 5},
  [86] = {.index = 360, .length = 5},
  [87] = {.index = 365, .length = 5},
  [88] = {.index = 370, .length = 5},
  [89] = {.index = 375, .length = 5},
  [90] = {.index = 380, .length = 5},
  [91] = {.index = 385, .length = 5},
  [92] = {.index = 390, .length = 5},
  [93] = {.index = 395, .length = 5},
  [94] = {.index = 400, .length = 5},
  [95] = {.index = 405, .length = 5},
  [96] = {.index = 410, .length = 5},
  [97] = {.index = 415, .length = 5},
  [98] = {.index = 420, .length = 5},
  [99] = {.index = 425, .length = 5},
  [100] = {.index = 430, .length = 5},
  [101] = {.index = 435, .length = 5},
  [102] = {.index = 440, .length = 5},
  [103] = {.index = 445, .length = 5},
  [104] = {.index = 450, .length = 5},
  [105] = {.index = 455, .length = 5},
  [106] = {.index = 460, .length = 5},
  [107] = {.index = 465, .length = 5},
  [108] = {.index = 470, .length = 5},
  [109] = {.index = 475, .length = 5},
  [110] = {.index = 480, .length = 5},
  [111] = {.index = 485, .length = 5},
  [112] = {.index = 490, .length = 5},
  [113] = {.index = 495, .length = 5},
  [114] = {.index = 500, .length = 5},
  [115] = {.index = 505, .length = 5},
  [116] = {.index = 510, .length = 5},
  [117] = {.index = 515, .length = 5},
  [118] = {.index = 520, .length = 5},
  [119] = {.index = 525, .length = 5},
  [120] = {.index = 530, .length = 5},
  [121] = {.index = 535, .length = 5},
  [122] = {.index = 540, .length = 5},
  [123] = {.index = 545, .length = 5},
  [124] = {.index = 550, .length = 5},
  [125] = {.index = 555, .length = 5},
  [126] = {.index = 560, .length = 5},
  [127] = {.index = 565, .length = 5},
  [128] = {.index = 570, .length = 5},
  [129] = {.index = 575, .length = 5},
  [130] = {.index = 580, .length = 5},
  [131] = {.index = 585, .length = 5},
  [132] = {.index = 590, .length = 5},
  [133] = {.index = 595, .length = 6},
  [134] = {.index = 601, .length = 6},
  [135] = {.index = 607, .length = 6},
  [136] = {.index = 613, .length = 6},
  [137] = {.index = 619, .length = 6},
  [138] = {.index = 625, .length = 6},
  [139] = {.index = 631, .length = 6},
  [140] = {.index = 637, .length = 6},
  [141] = {.index = 643, .length = 6},
  [142] = {.index = 649, .length = 6},
  [143] = {.index = 655, .length = 6},
  [144] = {.index = 661, .length = 6},
  [145] = {.index = 667, .length = 6},
  [146] = {.index = 673, .length = 6},
  [147] = {.index = 679, .length = 6},
  [148] = {.index = 685, .length = 6},
  [149] = {.index = 691, .length = 6},
  [150] = {.index = 697, .length = 6},
  [151] = {.index = 703, .length = 6},
  [152] = {.index = 709, .length = 6},
  [153] = {.index = 715, .length = 6},
  [154] = {.index = 721, .length = 6},
  [155] = {.index = 727, .length = 6},
  [156] = {.index = 733, .length = 6},
  [157] = {.index = 739, .length = 6},
  [158] = {.index = 745, .length = 6},
  [159] = {.index = 751, .length = 6},
  [160] = {.index = 757, .length = 6},
  [161] = {.index = 763, .length = 6},
  [162] = {.index = 769, .length = 6},
  [163] = {.index = 775, .length = 6},
  [164] = {.index = 781, .length = 6},
  [165] = {.index = 787, .length = 6},
  [166] = {.index = 793, .length = 6},
  [167] = {.index = 799, .length = 6},
  [168] = {.index = 805, .length = 6},
  [169] = {.index = 811, .length = 6},
  [170] = {.index = 817, .length = 6},
  [171] = {.index = 823, .length = 6},
  [172] = {.index = 829, .length = 6},
  [173] = {.index = 835, .length = 6},
  [174] = {.index = 841, .length = 6},
  [175] = {.index = 847, .length = 6},
  [176] = {.index = 853, .length = 6},
  [177] = {.index = 859, .length = 6},
  [178] = {.index = 865, .length = 6},
  [179] = {.index = 871, .length = 6},
  [180] = {.index = 877, .length = 6},
  [181] = {.index = 883, .length = 6},
  [182] = {.index = 889, .length = 6},
  [183] = {.index = 895, .length = 6},
  [184] = {.index = 901, .length = 6},
  [185] = {.index = 907, .length = 6},
  [186] = {.index = 913, .length = 6},
  [187] = {.index = 919, .length = 6},
  [188] = {.index = 925, .length = 6},
  [189] = {.index = 931, .length = 6},
  [190] = {.index = 937, .length = 6},
  [191] = {.index = 943, .length = 6},
  [192] = {.index = 949, .length = 6},
  [193] = {.index = 955, .length = 6},
  [194] = {.index = 961, .length = 6},
  [195] = {.index = 967, .length = 6},
  [196] = {.index = 973, .length = 6},
  [197] = {.index = 979, .length = 6},
  [198] = {.index = 985, .length = 6},
  [199] = {.index = 991, .length = 6},
  [200] = {.index = 997, .length = 6},
  [201] = {.index = 1003, .length = 6},
  [202] = {.index = 1009, .length = 6},
  [203] = {.index = 1015, .length = 6},
  [204] = {.index = 1021, .length = 6},
  [205] = {.index = 1027, .length = 6},
  [206] = {.index = 1033, .length = 6},
  [207] = {.index = 1039, .length = 6},
  [208] = {.index = 1045, .length = 6},
  [209] = {.index = 1051, .length = 6},
  [210] = {.index = 1057, .length = 6},
  [211] = {.index = 1063, .length = 6},
  [212] = {.index = 1069, .length = 6},
  [213] = {.index = 1075, .length = 6},
  [214] = {.index = 1081, .length = 6},
  [215] = {.index = 1087, .length = 6},
  [216] = {.index = 1093, .length = 6},
  [217] = {.index = 1099, .length = 6},
  [218] = {.index = 1105, .length = 6},
  [219] = {.index = 1111, .length = 6},
  [220] = {.index = 1117, .length = 6},
  [221] = {.index = 1123, .length = 6},
  [222] = {.index = 1129, .length = 6},
  [223] = {.index = 1135, .length = 6},
  [224] = {.index = 1141, .length = 6},
  [225] = {.index = 1147, .length = 6},
  [226] = {.index = 1153, .length = 6},
  [227] = {.index = 1159, .length = 6},
  [228] = {.index = 1165, .length = 6},
  [229] = {.index = 1171, .length = 6},
  [230] = {.index = 1177, .length = 6},
  [231] = {.index = 1183, .length = 6},
  [232] = {.index = 1189, .length = 6},
  [233] = {.index = 1195, .length = 6},
  [234] = {.index = 1201, .length = 6},
  [235] = {.index = 1207, .length = 6},
  [236] = {.index = 1213, .length = 6},
  [237] = {.index = 1219, .length = 6},
  [238] = {.index = 1225, .length = 6},
  [239] = {.index = 1231, .length = 6},
  [240] = {.index = 1237, .length = 6},
  [241] = {.index = 1243, .length = 6},
  [242] = {.index = 1249, .length = 6},
  [243] = {.index = 1255, .length = 6},
  [244] = {.index = 1261, .length = 6},
  [245] = {.index = 1267, .length = 6},
  [246] = {.index = 1273, .length = 6},
  [247] = {.index = 1279, .length = 6},
  [248] = {.index = 1285, .length = 6},
  [249] = {.index = 1291, .length = 6},
  [250] = {.index = 1297, .length = 6},
  [251] = {.index = 1303, .length = 6},
  [252] = {.index = 1309, .length = 6},
  [253] = {.index = 1315, .length = 6},
  [254] = {.index = 1321, .length = 6},
  [255] = {.index = 1327, .length = 6},
  [256] = {.index = 1333, .length = 6},
  [257] = {.index = 1339, .length = 6},
  [258] = {.index = 1345, .length = 6},
  [259] = {.index = 1351, .length = 7},
  [260] = {.index = 1358, .length = 7},
  [261] = {.index = 1365, .length = 7},
  [262] = {.index = 1372, .length = 7},
  [263] = {.index = 1379, .length = 7},
  [264] = {.index = 1386, .length = 7},
  [265] = {.index = 1393, .length = 7},
  [266] = {.index = 1400, .length = 7},
  [267] = {.index = 1407, .length = 7},
  [268] = {.index = 1414, .length = 7},
  [269] = {.index = 1421, .length = 7},
  [270] = {.index = 1428, .length = 7},
  [271] = {.index = 1435, .length = 7},
  [272] = {.index = 1442, .length = 7},
  [273] = {.index = 1449, .length = 7},
  [274] = {.index = 1456, .length = 7},
  [275] = {.index = 1463, .length = 7},
  [276] = {.index = 1470, .length = 7},
  [277] = {.index = 1477, .length = 7},
  [278] = {.index = 1484, .length = 7},
  [279] = {.index = 1491, .length = 7},
  [280] = {.index = 1498, .length = 7},
  [281] = {.index = 1505, .length = 7},
  [282] = {.index = 1512, .length = 7},
  [283] = {.index = 1519, .length = 7},
  [284] = {.index = 1526, .length = 7},
  [285] = {.index = 1533, .length = 7},
  [286] = {.index = 1540, .length = 7},
  [287] = {.index = 1547, .length = 7},
  [288] = {.index = 1554, .length = 7},
  [289] = {.index = 1561, .length = 7},
  [290] = {.index = 1568, .length = 7},
  [291] = {.index = 1575, .length = 7},
  [292] = {.index = 1582, .length = 7},
  [293] = {.index = 1589, .length = 7},
  [294] = {.index = 1596, .length = 7},
  [295] = {.index = 1603, .length = 7},
  [296] = {.index = 1610, .length = 7},
  [297] = {.index = 1617, .length = 7},
  [298] = {.index = 1624, .length = 7},
  [299] = {.index = 1631, .length = 7},
  [300] = {.index = 1638, .length = 7},
  [301] = {.index = 1645, .length = 7},
  [302] = {.index = 1652, .length = 7},
  [303] = {.index = 1659, .length = 7},
  [304] = {.index = 1666, .length = 7},
  [305] = {.index = 1673, .length = 7},
  [306] = {.index = 1680, .length = 7},
  [307] = {.index = 1687, .length = 7},
  [308] = {.index = 1694, .length = 7},
  [309] = {.index = 1701, .length = 7},
  [310] = {.index = 1708, .length = 7},
  [311] = {.index = 1715, .length = 7},
  [312] = {.index = 1722, .length = 7},
  [313] = {.index = 1729, .length = 7},
  [314] = {.index = 1736, .length = 7},
  [315] = {.index = 1743, .length = 7},
  [316] = {.index = 1750, .length = 7},
  [317] = {.index = 1757, .length = 7},
  [318] = {.index = 1764, .length = 7},
  [319] = {.index = 1771, .length = 7},
  [320] = {.index = 1778, .length = 7},
  [321] = {.index = 1785, .length = 7},
  [322] = {.index = 1792, .length = 7},
  [323] = {.index = 1799, .length = 7},
  [324] = {.index = 1806, .length = 7},
  [325] = {.index = 1813, .length = 7},
  [326] = {.index = 1820, .length = 7},
  [327] = {.index = 1827, .length = 7},
  [328] = {.index = 1834, .length = 7},
  [329] = {.index = 1841, .length = 7},
  [330] = {.index = 1848, .length = 7},
  [331] = {.index = 1855, .length = 7},
  [332] = {.index = 1862, .length = 7},
  [333] = {.index = 1869, .length = 7},
  [334] = {.index = 1876, .length = 7},
  [335] = {.index = 1883, .length = 7},
  [336] = {.index = 1890, .length = 7},
  [337] = {.index = 1897, .length = 7},
  [338] = {.index = 1904, .length = 7},
  [339] = {.index = 1911, .length = 7},
  [340] = {.index = 1918, .length = 7},
  [341] = {.index = 1925, .length = 7},
  [342] = {.index = 1932, .length = 7},
  [343] = {.index = 1939, .length = 7},
  [344] = {.index = 1946, .length = 7},
  [345] = {.index = 1953, .length = 7},
  [346] = {.index = 1960, .length = 7},
  [347] = {.index = 1967, .length = 7},
  [348] = {.index = 1974, .length = 7},
  [349] = {.index = 1981, .length = 7},
  [350] = {.index = 1988, .length = 7},
  [351] = {.index = 1995, .length = 7},
  [352] = {.index = 2002, .length = 7},
  [353] = {.index = 2009, .length = 7},
  [354] = {.index = 2016, .length = 7},
  [355] = {.index = 2023, .length = 7},
  [356] = {.index = 2030, .length = 7},
  [357] = {.index = 2037, .length = 7},
  [358] = {.index = 2044, .length = 7},
  [359] = {.index = 2051, .length = 7},
  [360] = {.index = 2058, .length = 7},
  [361] = {.index = 2065, .length = 7},
  [362] = {.index = 2072, .length = 7},
  [363] = {.index = 2079, .length = 7},
  [364] = {.index = 2086, .length = 7},
  [365] = {.index = 2093, .length = 7},
  [366] = {.index = 2100, .length = 7},
  [367] = {.index = 2107, .length = 7},
  [368] = {.index = 2114, .length = 7},
  [369] = {.index = 2121, .length = 7},
  [370] = {.index = 2128, .length = 7},
  [371] = {.index = 2135, .length = 7},
  [372] = {.index = 2142, .length = 7},
  [373] = {.index = 2149, .length = 7},
  [374] = {.index = 2156, .length = 7},
  [375] = {.index = 2163, .length = 7},
  [376] = {.index = 2170, .length = 7},
  [377] = {.index = 2177, .length = 7},
  [378] = {.index = 2184, .length = 7},
  [379] = {.index = 2191, .length = 7},
  [380] = {.index = 2198, .length = 7},
  [381] = {.index = 2205, .length = 7},
  [382] = {.index = 2212, .length = 7},
  [383] = {.index = 2219, .length = 7},
  [384] = {.index = 2226, .length = 7},
  [385] = {.index = 2233, .length = 8},
  [386] = {.index = 2241, .length = 8},
  [387] = {.index = 2249, .length = 8},
  [388] = {.index = 2257, .length = 8},
  [389] = {.index = 2265, .length = 8},
  [390] = {.index = 2273, .length = 8},
  [391] = {.index = 2281, .length = 8},
  [392] = {.index = 2289, .length = 8},
  [393] = {.index = 2297, .length = 8},
  [394] = {.index = 2305, .length = 8},
  [395] = {.index = 2313, .length = 8},
  [396] = {.index = 2321, .length = 8},
  [397] = {.index = 2329, .length = 8},
  [398] = {.index = 2337, .length = 8},
  [399] = {.index = 2345, .length = 8},
  [400] = {.index = 2353, .length = 8},
  [401] = {.index = 2361, .length = 8},
  [402] = {.index = 2369, .length = 8},
  [403] = {.index = 2377, .length = 8},
  [404] = {.index = 2385, .length = 8},
  [405] = {.index = 2393, .length = 8},
  [406] = {.index = 2401, .length = 8},
  [407] = {.index = 2409, .length = 8},
  [408] = {.index = 2417, .length = 8},
  [409] = {.index = 2425, .length = 8},
  [410] = {.index = 2433, .length = 8},
  [411] = {.index = 2441, .length = 8},
  [412] = {.index = 2449, .length = 8},
  [413] = {.index = 2457, .length = 8},
  [414] = {.index = 2465, .length = 8},
  [415] = {.index = 2473, .length = 8},
  [416] = {.index = 2481, .length = 8},
  [417] = {.index = 2489, .length = 8},
  [418] = {.index = 2497, .length = 8},
  [419] = {.index = 2505, .length = 8},
  [420] = {.index = 2513, .length = 8},
  [421] = {.index = 2521, .length = 8},
  [422] = {.index = 2529, .length = 8},
  [423] = {.index = 2537, .length = 8},
  [424] = {.index = 2545, .length = 8},
  [425] = {.index = 2553, .length = 8},
  [426] = {.index = 2561, .length = 8},
  [427] = {.index = 2569, .length = 8},
  [428] = {.index = 2577, .length = 8},
  [429] = {.index = 2585, .length = 8},
  [430] = {.index = 2593, .length = 8},
  [431] = {.index = 2601, .length = 8},
  [432] = {.index = 2609, .length = 8},
  [433] = {.index = 2617, .length = 8},
  [434] = {.index = 2625, .length = 8},
  [435] = {.index = 2633, .length = 8},
  [436] = {.index = 2641, .length = 8},
  [437] = {.index = 2649, .length = 8},
  [438] = {.index = 2657, .length = 8},
  [439] = {.index = 2665, .length = 8},
  [440] = {.index = 2673, .length = 8},
  [441] = {.index = 2681, .length = 8},
  [442] = {.index = 2689, .length = 8},
  [443] = {.index = 2697, .length = 8},
  [444] = {.index = 2705, .length = 8},
  [445] = {.index = 2713, .length = 8},
  [446] = {.index = 2721, .length = 8},
  [447] = {.index = 2729, .length = 8},
  [448] = {.index = 2737, .length = 8},
  [449] = {.index = 2745, .length = 8},
  [450] = {.index = 2753, .length = 8},
  [451] = {.index = 2761, .length = 8},
  [452] = {.index = 2769, .length = 8},
  [453] = {.index = 2777, .length = 8},
  [454] = {.index = 2785, .length = 8},
  [455] = {.index = 2793, .length = 8},
  [456] = {.index = 2801, .length = 8},
  [457] = {.index = 2809, .length = 8},
  [458] = {.index = 2817, .length = 8},
  [459] = {.index = 2825, .length = 8},
  [460] = {.index = 2833, .length = 8},
  [461] = {.index = 2841, .length = 8},
  [462] = {.index = 2849, .length = 8},
  [463] = {.index = 2857, .length = 8},
  [464] = {.index = 2865, .length = 8},
  [465] = {.index = 2873, .length = 8},
  [466] = {.index = 2881, .length = 8},
  [467] = {.index = 2889, .length = 8},
  [468] = {.index = 2897, .length = 8},
  [469] = {.index = 2905, .length = 9},
  [470] = {.index = 2914, .length = 9},
  [471] = {.index = 2923, .length = 9},
  [472] = {.index = 2932, .length = 9},
  [473] = {.index = 2941, .length = 9},
  [474] = {.index = 2950, .length = 9},
  [475] = {.index = 2959, .length = 9},
  [476] = {.index = 2968, .length = 9},
  [477] = {.index = 2977, .length = 9},
  [478] = {.index = 2986, .length = 9},
  [479] = {.index = 2995, .length = 9},
  [480] = {.index = 3004, .length = 9},
  [481] = {.index = 3013, .length = 9},
  [482] = {.index = 3022, .length = 9},
  [483] = {.index = 3031, .length = 9},
  [484] = {.index = 3040, .length = 9},
  [485] = {.index = 3049, .length = 9},
  [486] = {.index = 3058, .length = 9},
  [487] = {.index = 3067, .length = 9},
  [488] = {.index = 3076, .length = 9},
  [489] = {.index = 3085, .length = 9},
  [490] = {.index = 3094, .length = 9},
  [491] = {.index = 3103, .length = 9},
  [492] = {.index = 3112, .length = 9},
  [493] = {.index = 3121, .length = 9},
  [494] = {.index = 3130, .length = 9},
  [495] = {.index = 3139, .length = 9},
  [496] = {.index = 3148, .length = 9},
  [497] = {.index = 3157, .length = 9},
  [498] = {.index = 3166, .length = 9},
  [499] = {.index = 3175, .length = 9},
  [500] = {.index = 3184, .length = 9},
  [501] = {.index = 3193, .length = 9},
  [502] = {.index = 3202, .length = 9},
  [503] = {.index = 3211, .length = 9},
  [504] = {.index = 3220, .length = 9},
  [505] = {.index = 3229, .length = 10},
  [506] = {.index = 3239, .length = 10},
  [507] = {.index = 3249, .length = 10},
  [508] = {.index = 3259, .length = 10},
  [509] = {.index = 3269, .length = 10},
  [510] = {.index = 3279, .length = 10},
  [511] = {.index = 3289, .length = 10},
  [512] = {.index = 3299, .length = 10},
  [513] = {.index = 3309, .length = 10},
  [514] = {.index = 3319, .length = 11},
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
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [180] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [185] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [190] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_using_clause, 2},
  [195] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [200] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_using_clause, 2},
  [205] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [210] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [215] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [220] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [225] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [230] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [235] =
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [240] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [245] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [250] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [255] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [260] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [265] =
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [270] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [275] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [280] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_using_clause, 2},
  [285] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [290] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_using_clause, 2},
  [295] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [300] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [305] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [310] =
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_using_clause, 2},
  [315] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [320] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_select_clause, 0},
  [325] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
  [330] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [335] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
  [340] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [345] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [350] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [355] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [360] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [365] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [370] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [375] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [380] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_where_clause, 2},
  [385] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [390] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_where_clause, 2},
  [395] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [400] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [405] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [410] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [415] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [420] =
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [425] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [430] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [435] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_where_clause, 2},
  [440] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [445] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_where_clause, 2},
  [450] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [455] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [460] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [465] =
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_where_clause, 2},
  [470] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [475] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [480] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [485] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_with_clause, 2},
  [490] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [495] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_with_clause, 2},
  [500] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [505] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [510] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_with_clause, 2},
  [515] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [520] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_with_clause, 2},
  [525] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [530] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [535] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [540] =
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
    {field_with_clause, 2},
  [545] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_limit_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [550] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
  [555] =
    {field_from_clause, 1},
    {field_limit_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [560] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_offset_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [565] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [570] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
  [575] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
  [580] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [585] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
  [590] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 4},
  [595] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [601] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [607] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [613] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [619] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [625] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [631] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [637] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [643] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [649] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [655] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [661] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [667] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [673] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [679] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [685] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [691] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [697] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [703] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [709] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [715] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [721] =
    {field_from_clause, 1},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [727] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [733] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [739] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [745] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [751] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [757] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [763] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [769] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [775] =
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [781] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [787] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [793] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [799] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [805] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [811] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [817] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [823] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [829] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [835] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [841] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [847] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [853] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [859] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [865] =
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [871] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [877] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [883] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [889] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [895] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [901] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [907] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [913] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [919] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [925] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_using_clause, 2},
  [931] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [937] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
  [943] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [949] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [955] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [961] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [967] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [973] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [979] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [985] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [991] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [997] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1003] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1009] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1015] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1021] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1027] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1033] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1039] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1045] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1051] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1057] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1063] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1069] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1075] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1081] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1087] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1093] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1099] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1105] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1111] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1117] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1123] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1129] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1135] =
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1141] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1147] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1153] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1159] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1165] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1171] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1177] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1183] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1189] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1195] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_where_clause, 2},
  [1201] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1207] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1213] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1219] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1225] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1231] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1237] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1243] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1249] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1255] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1261] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1267] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1273] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1279] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1285] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1291] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1297] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1303] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1309] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [1315] =
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
    {field_with_clause, 2},
  [1321] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [1327] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [1333] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
  [1339] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [1345] =
    {field_for_clause, 4},
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 5},
  [1351] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1358] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [1365] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1372] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1379] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1386] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [1393] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [1400] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1407] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [1414] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1421] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1428] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1435] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1442] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1449] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1456] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1463] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1470] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1477] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1484] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1491] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1498] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1505] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1512] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1519] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1526] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1533] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1540] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1547] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1554] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1561] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1568] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1575] =
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1582] =
    {field_from_clause, 1},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1589] =
    {field_from_clause, 1},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [1596] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1603] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1610] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1617] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1624] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1631] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1638] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1645] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1652] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1659] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [1666] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1673] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1680] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1687] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1694] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1701] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1708] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1715] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1722] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1729] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1736] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1743] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1750] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1757] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1764] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1771] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1778] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1785] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1792] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1799] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [1806] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1813] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1820] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [1827] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1834] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_using_clause, 2},
  [1841] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
  [1848] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
  [1855] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [1862] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
  [1869] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
  [1876] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [1883] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1890] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [1897] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [1904] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [1911] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1918] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1925] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [1932] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [1939] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [1946] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1953] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1960] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1967] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1974] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1981] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1988] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [1995] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2002] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2009] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2016] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2023] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2030] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2037] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2044] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2051] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2058] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2065] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2072] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2079] =
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2086] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [2093] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [2100] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [2107] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [2114] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_where_clause, 2},
  [2121] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2128] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [2135] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2142] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2149] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2156] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [2163] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [2170] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2177] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [2184] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2191] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2198] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2205] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [2212] =
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2219] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_offset_clause, 4},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 6},
    {field_with_clause, 2},
  [2226] =
    {field_for_clause, 5},
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_offset_clause, 4},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 6},
  [2233] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
  [2241] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
  [2249] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [2257] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
  [2265] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
  [2273] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2281] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2289] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2297] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2305] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2313] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2321] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2329] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2337] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2345] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2353] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2361] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2369] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2377] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2385] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2393] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2401] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2409] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2417] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2425] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2433] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2441] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2449] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2457] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2465] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2473] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2481] =
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2489] =
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2497] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2505] =
    {field_from_clause, 1},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2513] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2521] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2529] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2537] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2545] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2553] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2561] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2569] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2577] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2585] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2593] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2601] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2609] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2617] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2625] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2633] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2641] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2649] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2657] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2665] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2673] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
  [2681] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 7},
  [2689] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
  [2697] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
  [2705] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [2713] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
  [2721] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
  [2729] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2737] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2745] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2753] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2761] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2769] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2777] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2785] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2793] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2801] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2809] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2817] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2825] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2833] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2841] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2849] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
  [2857] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_with_clause, 2},
  [2865] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_with_clause, 2},
  [2873] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [2881] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_with_clause, 2},
  [2889] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_with_clause, 2},
  [2897] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_with_clause, 2},
  [2905] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
  [2914] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2923] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2932] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2941] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2950] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2959] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2968] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2977] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2986] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2995] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3004] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3013] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 7},
    {field_offset_clause, 8},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3022] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3031] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3040] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3049] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3058] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3067] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3076] =
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3085] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [3094] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [3103] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [3112] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [3121] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [3130] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [3139] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [3148] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [3157] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_where_clause, 2},
  [3166] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [3175] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [3184] =
    {field_for_clause, 8},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [3193] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [3202] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [3211] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [3220] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 8},
    {field_with_clause, 2},
  [3229] =
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
  [3239] =
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
  [3249] =
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
  [3259] =
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
  [3269] =
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
  [3279] =
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
  [3289] =
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
  [3299] =
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
  [3309] =
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
  [3319] =
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
  [6] = 4,
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
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 8,
  [26] = 9,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 30,
  [33] = 10,
  [34] = 34,
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
  [101] = 77,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 11,
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
  [140] = 140,
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
  [162] = 9,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 8,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 170,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
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
  [203] = 10,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
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
  [229] = 229,
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
  [245] = 242,
  [246] = 246,
  [247] = 247,
  [248] = 45,
  [249] = 13,
  [250] = 250,
  [251] = 15,
  [252] = 12,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 16,
  [257] = 14,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 270,
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
  [407] = 289,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 41,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 73,
  [433] = 62,
  [434] = 65,
  [435] = 68,
  [436] = 70,
  [437] = 59,
  [438] = 61,
  [439] = 67,
  [440] = 46,
  [441] = 49,
  [442] = 66,
  [443] = 50,
  [444] = 63,
  [445] = 445,
  [446] = 64,
  [447] = 424,
  [448] = 418,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 412,
  [453] = 451,
  [454] = 454,
  [455] = 71,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
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
  [719] = 91,
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
  [736] = 736,
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
  [769] = 747,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 775,
  [777] = 777,
  [778] = 778,
  [779] = 770,
  [780] = 774,
  [781] = 781,
  [782] = 740,
  [783] = 783,
  [784] = 770,
  [785] = 742,
  [786] = 786,
  [787] = 761,
  [788] = 771,
  [789] = 768,
  [790] = 790,
  [791] = 750,
  [792] = 792,
  [793] = 781,
  [794] = 794,
  [795] = 795,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(650);
      ADVANCE_MAP(
        '!', 28,
        '\'', 2,
        '(', 658,
        ')', 659,
        '*', 10,
        ',', 661,
        '-', 634,
        '.', 732,
        '/', 15,
        ':', 770,
        '<', 737,
        '=', 707,
        '>', 739,
        '?', 771,
        'A', 123,
        'a', 123,
        'B', 199,
        'b', 199,
        'C', 575,
        'c', 575,
        'D', 68,
        'd', 68,
        'E', 331,
        'e', 331,
        'F', 78,
        'f', 78,
        'G', 203,
        'g', 203,
        'H', 69,
        'h', 69,
        'I', 362,
        'i', 362,
        'L', 102,
        'l', 102,
        'M', 70,
        'm', 70,
        'N', 46,
        'n', 46,
        'O', 265,
        'o', 265,
        'R', 177,
        'r', 177,
        'S', 178,
        's', 178,
        'T', 202,
        't', 202,
        'U', 424,
        'u', 424,
        'V', 298,
        'v', 298,
        'W', 287,
        'w', 287,
        'Y', 258,
        'y', 258,
      );
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\'', 2,
        '*', 10,
        '-', 634,
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
        'U', 421,
        'u', 421,
        'V', 297,
        'v', 297,
        'Y', 246,
        'y', 246,
      );
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(781);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(775);
      if (lookahead == '\\') ADVANCE(645);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '(', 658,
        ')', 659,
        ',', 661,
        '.', 732,
        '/', 17,
        'A', 845,
        'a', 845,
        'F', 840,
        'f', 840,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(658);
      if (lookahead == ')') ADVANCE(659);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(814);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(658);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '(', 658,
        '/', 17,
        'D', 814,
        'd', 814,
        'F', 815,
        'f', 815,
        'T', 855,
        't', 855,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(658);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(814);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(834);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(659);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(452);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(807);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(772);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'Z') ADVANCE(788);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(620);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(651);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(656);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(632);
      if (lookahead == '1') ADVANCE(621);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(633);
      if (lookahead == '3') ADVANCE(619);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(636);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(622);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(637);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '9', 20,
        'F', 315,
        'f', 315,
        'M', 414,
        'm', 414,
        'N', 61,
        'n', 61,
        'Q', 584,
        'q', 584,
        'W', 240,
        'w', 240,
        'Y', 256,
        'y', 256,
      );
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '9', 21,
        'F', 316,
        'f', 316,
        'M', 416,
        'm', 416,
        'N', 61,
        'n', 61,
        'Q', 585,
        'q', 585,
        'W', 241,
        'w', 241,
        'Y', 257,
        'y', 257,
      );
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(631);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(629);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(630);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(735);
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
      if (lookahead == 'Z') ADVANCE(788);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(620);
      END_STATE();
    case 44:
      if (lookahead == 'Z') ADVANCE(788);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'Z') ADVANCE(788);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(526);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(338);
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
      if (lookahead == '_') ADVANCE(432);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(603);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(356);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(550);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(358);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(278);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(226);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(175);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(176);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(558);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(174);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(434);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(360);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(435);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(436);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(433);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(591);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(376);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(618);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 78:
      ADVANCE_MAP(
        'A', 344,
        'a', 344,
        'I', 215,
        'i', 215,
        'O', 437,
        'o', 437,
        'R', 386,
        'r', 386,
      );
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(607);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(543);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(504);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(614);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(616);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(554);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(557);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(563);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(480);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(485);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 123:
      ADVANCE_MAP(
        'B', 389,
        'b', 389,
        'L', 326,
        'l', 326,
        'N', 149,
        'n', 149,
        'S', 687,
        's', 687,
        'T', 713,
        't', 713,
      );
      END_STATE();
    case 124:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(605);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 125:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(606);
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
          lookahead == 'c') ADVANCE(725);
      END_STATE();
    case 129:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(324);
      END_STATE();
    case 130:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(724);
      END_STATE();
    case 131:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(579);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 132:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 133:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(396);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(217);
      END_STATE();
    case 134:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 135:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(530);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 140:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 141:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 142:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(415);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
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
          lookahead == 'd') ADVANCE(696);
      END_STATE();
    case 150:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(672);
      END_STATE();
    case 151:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(706);
      END_STATE();
    case 152:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(693);
      END_STATE();
    case 153:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(663);
      END_STATE();
    case 154:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 155:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(703);
      END_STATE();
    case 156:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(709);
      END_STATE();
    case 157:
      ADVANCE_MAP(
        'D', 76,
        'd', 76,
        'F', 296,
        'f', 296,
        'M', 398,
        'm', 398,
        'Q', 581,
        'q', 581,
        'W', 235,
        'w', 235,
        'Y', 252,
        'y', 252,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 158:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 159:
      ADVANCE_MAP(
        'D', 75,
        'd', 75,
        'F', 295,
        'f', 295,
        'M', 397,
        'm', 397,
        'Q', 580,
        'q', 580,
        'W', 234,
        'w', 234,
        'Y', 251,
        'y', 251,
      );
      END_STATE();
    case 160:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(488);
      END_STATE();
    case 161:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(81);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(399);
      END_STATE();
    case 162:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 163:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 164:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 165:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 166:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 168:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 170:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 171:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 172:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(593);
      END_STATE();
    case 173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 174:
      ADVANCE_MAP(
        'D', 99,
        'd', 99,
        'F', 318,
        'f', 318,
        'M', 420,
        'm', 420,
        'Q', 587,
        'q', 587,
        'W', 254,
        'w', 254,
        'Y', 260,
        'y', 260,
      );
      END_STATE();
    case 175:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 176:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 178:
      ADVANCE_MAP(
        'E', 131,
        'e', 131,
        'T', 77,
        't', 77,
        'U', 425,
        'u', 425,
        'Y', 519,
        'y', 519,
      );
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(741);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 202:
      ADVANCE_MAP(
        'E', 74,
        'e', 74,
        'H', 207,
        'h', 207,
        'O', 161,
        'o', 161,
        'R', 80,
        'r', 80,
        'Y', 427,
        'y', 427,
      );
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(500);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 265:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(270);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 266:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(270);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 267:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(670);
      END_STATE();
    case 268:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 269:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(309);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 270:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(516);
      END_STATE();
    case 271:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(409);
      END_STATE();
    case 272:
      ADVANCE_MAP(
        'F', 317,
        'f', 317,
        'M', 418,
        'm', 418,
        'Q', 586,
        'q', 586,
        'W', 243,
        'w', 243,
        'Y', 259,
        'y', 259,
      );
      END_STATE();
    case 273:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(684);
      END_STATE();
    case 274:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(721);
      END_STATE();
    case 275:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(664);
      END_STATE();
    case 276:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(626);
      END_STATE();
    case 277:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(387);
      END_STATE();
    case 278:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(471);
      END_STATE();
    case 279:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(406);
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
          lookahead == 'h') ADVANCE(701);
      END_STATE();
    case 283:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(752);
      END_STATE();
    case 284:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(754);
      END_STATE();
    case 285:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(753);
      END_STATE();
    case 286:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(294);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 287:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(527);
      END_STATE();
    case 288:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(491);
      END_STATE();
    case 289:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(230);
      END_STATE();
    case 290:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(505);
      END_STATE();
    case 291:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 292:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 293:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 294:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 295:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 296:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 297:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 298:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 299:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 300:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 301:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 302:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 303:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(508);
      END_STATE();
    case 304:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 305:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 306:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 307:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 308:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(367);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 309:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(478);
      END_STATE();
    case 310:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 311:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 312:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      END_STATE();
    case 313:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 314:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(572);
      END_STATE();
    case 315:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 316:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 317:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(524);
      END_STATE();
    case 318:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(525);
      END_STATE();
    case 319:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(749);
      END_STATE();
    case 320:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(751);
      END_STATE();
    case 321:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(750);
      END_STATE();
    case 322:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(183);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(301);
      END_STATE();
    case 323:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(491);
      END_STATE();
    case 324:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(302);
      END_STATE();
    case 325:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(505);
      END_STATE();
    case 326:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(691);
      END_STATE();
    case 327:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(774);
      END_STATE();
    case 328:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 329:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 330:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 331:
      ADVANCE_MAP(
        'L', 507,
        'l', 507,
        'N', 150,
        'n', 150,
        'V', 200,
        'v', 200,
        'X', 132,
        'x', 132,
      );
      END_STATE();
    case 332:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(507);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 333:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 334:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(582);
      END_STATE();
    case 335:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(391);
      END_STATE();
    case 336:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 337:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 338:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(327);
      END_STATE();
    case 339:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 340:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 341:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(343);
      END_STATE();
    case 342:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(394);
      END_STATE();
    case 343:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(502);
      END_STATE();
    case 344:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(512);
      END_STATE();
    case 345:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 346:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(583);
      END_STATE();
    case 347:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 348:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 349:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 350:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 351:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 352:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(685);
      END_STATE();
    case 353:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(669);
      END_STATE();
    case 354:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(692);
      END_STATE();
    case 355:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 356:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(417);
      END_STATE();
    case 357:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 358:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(617);
      END_STATE();
    case 359:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 360:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(419);
      END_STATE();
    case 361:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 362:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(742);
      END_STATE();
    case 363:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(674);
      END_STATE();
    case 364:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 365:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(673);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 366:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(728);
      END_STATE();
    case 367:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(743);
      END_STATE();
    case 368:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 369:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 370:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 371:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 372:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 373:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 374:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 375:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(538);
      END_STATE();
    case 376:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 377:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(494);
      END_STATE();
    case 378:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(540);
      END_STATE();
    case 379:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(541);
      END_STATE();
    case 380:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 381:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      END_STATE();
    case 382:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 383:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 384:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(567);
      END_STATE();
    case 385:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 386:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 387:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(769);
      END_STATE();
    case 388:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 389:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 390:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 391:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 392:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 393:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 394:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(597);
      END_STATE();
    case 395:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 396:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 397:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 398:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 399:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(462);
      END_STATE();
    case 400:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 401:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 402:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(464);
      END_STATE();
    case 403:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 404:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 405:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 406:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 407:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(542);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(341);
      END_STATE();
    case 408:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 409:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(476);
      END_STATE();
    case 410:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 411:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(578);
      END_STATE();
    case 412:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 413:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 414:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 415:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(463);
      END_STATE();
    case 416:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 417:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 418:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 419:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 420:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 421:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 422:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(624);
      END_STATE();
    case 423:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 424:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(162);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      END_STATE();
    case 425:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(430);
      END_STATE();
    case 426:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(496);
      END_STATE();
    case 427:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 428:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 429:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 430:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(402);
      END_STATE();
    case 431:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(571);
      END_STATE();
    case 432:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(580);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(251);
      END_STATE();
    case 433:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(587);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(260);
      END_STATE();
    case 434:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(588);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(261);
      END_STATE();
    case 435:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(589);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(262);
      END_STATE();
    case 436:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(590);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(263);
      END_STATE();
    case 437:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(677);
      END_STATE();
    case 438:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(611);
      END_STATE();
    case 439:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 440:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(761);
      END_STATE();
    case 441:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(762);
      END_STATE();
    case 442:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(760);
      END_STATE();
    case 443:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(758);
      END_STATE();
    case 444:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(759);
      END_STATE();
    case 445:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 446:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(767);
      END_STATE();
    case 447:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(768);
      END_STATE();
    case 448:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(766);
      END_STATE();
    case 449:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(764);
      END_STATE();
    case 450:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(765);
      END_STATE();
    case 451:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(763);
      END_STATE();
    case 452:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(697);
      END_STATE();
    case 453:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 454:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 455:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 456:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(608);
      END_STATE();
    case 457:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 458:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(609);
      END_STATE();
    case 459:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 460:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(610);
      END_STATE();
    case 461:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 462:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 463:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 464:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 465:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 466:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 467:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 468:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(628);
      END_STATE();
    case 469:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 470:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 471:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 472:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 473:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 474:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 475:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 476:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 477:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 478:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 479:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 480:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(560);
      END_STATE();
    case 481:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 482:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(562);
      END_STATE();
    case 483:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(564);
      END_STATE();
    case 484:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 485:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 486:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 487:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 488:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(689);
      END_STATE();
    case 489:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(745);
      END_STATE();
    case 490:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(744);
      END_STATE();
    case 491:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(769);
      END_STATE();
    case 492:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(755);
      END_STATE();
    case 493:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(756);
      END_STATE();
    case 494:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(710);
      END_STATE();
    case 495:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(711);
      END_STATE();
    case 496:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(666);
      END_STATE();
    case 497:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 498:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 499:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 500:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      END_STATE();
    case 501:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 502:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(625);
      END_STATE();
    case 503:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      END_STATE();
    case 504:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(535);
      END_STATE();
    case 505:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 506:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      END_STATE();
    case 507:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 508:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(293);
      END_STATE();
    case 509:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(509);
      END_STATE();
    case 510:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 511:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 512:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      END_STATE();
    case 513:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 514:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(532);
      END_STATE();
    case 515:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      END_STATE();
    case 516:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(222);
      END_STATE();
    case 517:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(568);
      END_STATE();
    case 518:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      END_STATE();
    case 519:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(551);
      END_STATE();
    case 520:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(569);
      END_STATE();
    case 521:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(552);
      END_STATE();
    case 522:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      END_STATE();
    case 523:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      END_STATE();
    case 524:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 525:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      END_STATE();
    case 526:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(699);
      END_STATE();
    case 527:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      END_STATE();
    case 528:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(717);
      END_STATE();
    case 529:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(719);
      END_STATE();
    case 530:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(660);
      END_STATE();
    case 531:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(722);
      END_STATE();
    case 532:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(727);
      END_STATE();
    case 533:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(726);
      END_STATE();
    case 534:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(708);
      END_STATE();
    case 535:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 536:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 537:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      END_STATE();
    case 538:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(290);
      END_STATE();
    case 539:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 540:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      END_STATE();
    case 541:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      END_STATE();
    case 542:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(627);
      END_STATE();
    case 543:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 544:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(285);
      END_STATE();
    case 545:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(615);
      END_STATE();
    case 546:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      END_STATE();
    case 547:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(510);
      END_STATE();
    case 548:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(392);
      END_STATE();
    case 549:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(612);
      END_STATE();
    case 550:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 551:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 552:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 553:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 554:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 555:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 556:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(224);
      END_STATE();
    case 557:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      END_STATE();
    case 558:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 559:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 560:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      END_STATE();
    case 561:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(238);
      END_STATE();
    case 562:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 563:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 564:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      END_STATE();
    case 565:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      END_STATE();
    case 566:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      END_STATE();
    case 567:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(247);
      END_STATE();
    case 568:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 569:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 570:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      END_STATE();
    case 571:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      END_STATE();
    case 572:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(410);
      END_STATE();
    case 573:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 574:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 575:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(503);
      END_STATE();
    case 576:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(422);
      END_STATE();
    case 577:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 578:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 579:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(469);
      END_STATE();
    case 580:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 581:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 582:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 583:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 584:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 585:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 586:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 587:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 588:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 589:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 590:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 591:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(300);
      END_STATE();
    case 592:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(187);
      END_STATE();
    case 593:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(303);
      END_STATE();
    case 594:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(683);
      END_STATE();
    case 595:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(715);
      END_STATE();
    case 596:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(748);
      END_STATE();
    case 597:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(716);
      END_STATE();
    case 598:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 599:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(520);
      END_STATE();
    case 600:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(167);
      END_STATE();
    case 601:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(534);
      END_STATE();
    case 602:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(573);
      END_STATE();
    case 603:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 604:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(747);
      END_STATE();
    case 605:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(676);
      END_STATE();
    case 606:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(723);
      END_STATE();
    case 607:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(746);
      END_STATE();
    case 608:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(667);
      END_STATE();
    case 609:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(712);
      END_STATE();
    case 610:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(668);
      END_STATE();
    case 611:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(537);
      END_STATE();
    case 612:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 613:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(491);
      END_STATE();
    case 614:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(492);
      END_STATE();
    case 615:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 616:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(493);
      END_STATE();
    case 617:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 618:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(505);
      END_STATE();
    case 619:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(787);
      END_STATE();
    case 620:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(644);
      END_STATE();
    case 621:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(13);
      END_STATE();
    case 622:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(25);
      END_STATE();
    case 623:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 624:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 625:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 626:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(509);
      END_STATE();
    case 627:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 628:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 629:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(638);
      END_STATE();
    case 630:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(639);
      END_STATE();
    case 631:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(643);
      END_STATE();
    case 632:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 633:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(787);
      END_STATE();
    case 634:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      END_STATE();
    case 635:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      END_STATE();
    case 636:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      END_STATE();
    case 637:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 638:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 639:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      END_STATE();
    case 640:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 641:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 642:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      END_STATE();
    case 643:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 644:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 645:
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
    case 646:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 647:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 648:
      if (eof) ADVANCE(650);
      ADVANCE_MAP(
        '!', 28,
        '(', 658,
        ')', 659,
        ',', 661,
        '-', 634,
        '.', 732,
        '/', 17,
        '<', 737,
        '=', 707,
        '>', 739,
        'A', 511,
        'a', 511,
        'D', 231,
        'd', 231,
        'E', 332,
        'e', 332,
        'F', 385,
        'f', 385,
        'H', 69,
        'h', 69,
        'I', 362,
        'i', 362,
        'L', 292,
        'l', 292,
        'N', 407,
        'n', 407,
        'O', 266,
        'o', 266,
        'T', 465,
        't', 465,
        'U', 423,
        'u', 423,
        'V', 311,
        'v', 311,
        'W', 289,
        'w', 289,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(648);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      END_STATE();
    case 649:
      if (eof) ADVANCE(650);
      ADVANCE_MAP(
        ')', 659,
        ',', 661,
        '.', 732,
        '/', 17,
        'A', 845,
        'a', 845,
        'F', 831,
        'f', 831,
        'G', 839,
        'g', 839,
        'L', 816,
        'l', 816,
        'O', 809,
        'o', 809,
        'U', 837,
        'u', 837,
        'W', 813,
        'w', 813,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(649);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '/') ADVANCE(656);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(654);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(652);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(655);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(655);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(655);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(655);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_soql_using_clause_token1);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token1);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token2);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token3);
      if (lookahead == '_') ADVANCE(100);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token4);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token5);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token6);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token7);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token2);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_when_expression_token1);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_when_expression_token2);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_else_expression_token1);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_for_type_token2);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(569);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_having_clause_token1);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_fields_expression_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_fields_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_fields_type_token1);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_fields_type_token2);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_fields_type_token3);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_and_expression_token1);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_or_expression_token1);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_or_expression_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_not_expression_token1);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_not_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_soql_with_clause_token1);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_soql_with_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token1);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token2);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token3);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_with_user_id_type_token1);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_expression_token1);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token1);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token2);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token3);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_with_data_cat_expression_token1);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token1);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token2);
      if (lookahead == '_') ADVANCE(404);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token3);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token4);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_update_type_token1);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_update_type_token2);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token1);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token2);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(738);
      if (lookahead == '>') ADVANCE(736);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(740);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_value_comparison_operator_token1);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(346);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token2);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token3);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token4);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_date_literal_token1);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_date_literal_token2);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_date_literal_token3);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_date_literal_token4);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_date_literal_token5);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_date_literal_token6);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_date_literal_token7);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_date_literal_token8);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_date_literal_token9);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_date_literal_token10);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_date_literal_token11);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_date_literal_token12);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_date_literal_token13);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_date_literal_token14);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_date_literal_token15);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_date_literal_token16);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_date_literal_token17);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_date_literal_token18);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_date_literal_token19);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_date_literal_token20);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_date_literal_token21);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_date_literal_token22);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_date_literal_token23);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_date_literal_with_param_token1);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_bound_apex_expression);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(625);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(776);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(777);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_date_time);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_currency_literal);
      if (lookahead == '.') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_currency_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(810);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(804);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(797);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
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
  [8] = {.lex_state = 648},
  [9] = {.lex_state = 648},
  [10] = {.lex_state = 648},
  [11] = {.lex_state = 648},
  [12] = {.lex_state = 648},
  [13] = {.lex_state = 648},
  [14] = {.lex_state = 648},
  [15] = {.lex_state = 648},
  [16] = {.lex_state = 648},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 648},
  [20] = {.lex_state = 648},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 649},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 649},
  [26] = {.lex_state = 649},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 649},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 649},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 649},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 649},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 648},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
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
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 648},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
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
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 648},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 4},
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
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 4},
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
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 4},
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
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
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
  [229] = {.lex_state = 0},
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
  [242] = {.lex_state = 9},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 3},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 3},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
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
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
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
  [321] = {.lex_state = 3},
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
  [344] = {.lex_state = 5},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
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
  [382] = {.lex_state = 0},
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
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
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
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 648},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 5},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 8},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 648},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 8},
  [433] = {.lex_state = 8},
  [434] = {.lex_state = 8},
  [435] = {.lex_state = 8},
  [436] = {.lex_state = 8},
  [437] = {.lex_state = 8},
  [438] = {.lex_state = 8},
  [439] = {.lex_state = 8},
  [440] = {.lex_state = 8},
  [441] = {.lex_state = 8},
  [442] = {.lex_state = 8},
  [443] = {.lex_state = 8},
  [444] = {.lex_state = 8},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 8},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 5},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 8},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
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
  [475] = {.lex_state = 0},
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
  [491] = {.lex_state = 5},
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
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
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
  [565] = {.lex_state = 5},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 5},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 5},
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
  [605] = {.lex_state = 5},
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
  [666] = {.lex_state = 0},
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
  [719] = {.lex_state = 8},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 652},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 648},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 5},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 5},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 5},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 652},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 5},
  [779] = {.lex_state = 5},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 5},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 5},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 5},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 648},
  [795] = {(TSStateId)(-1)},
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
    [aux_sym_soql_using_clause_token1] = ACTIONS(1),
    [aux_sym_using_scope_type_token1] = ACTIONS(1),
    [aux_sym_using_scope_type_token2] = ACTIONS(1),
    [aux_sym_using_scope_type_token3] = ACTIONS(1),
    [aux_sym_using_scope_type_token4] = ACTIONS(1),
    [aux_sym_using_scope_type_token5] = ACTIONS(1),
    [aux_sym_using_scope_type_token6] = ACTIONS(1),
    [aux_sym_using_scope_type_token7] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_source_file] = STATE(743),
    [sym_header_comment] = STATE(471),
    [sym_formatting_comment] = STATE(1),
    [sym__soql_query_expression] = STATE(748),
    [sym_soql_query_body] = STATE(772),
    [sym_select_clause] = STATE(470),
    [aux_sym_source_file_repeat1] = STATE(164),
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
    STATE(412), 1,
      sym__soql_literal,
    STATE(470), 1,
      sym_select_clause,
    STATE(747), 1,
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
    STATE(49), 4,
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
    STATE(452), 1,
      sym__soql_literal,
    STATE(470), 1,
      sym_select_clause,
    STATE(769), 1,
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
    STATE(49), 4,
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
    STATE(67), 1,
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
    STATE(49), 4,
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
    STATE(656), 1,
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
    STATE(49), 4,
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
    STATE(439), 1,
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
    STATE(441), 4,
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
  [338] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(7), 1,
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
  [383] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(8), 1,
      sym_formatting_comment,
    STATE(9), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(47), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      anon_sym_EQ,
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
  [428] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(55), 1,
      anon_sym_DOT,
    STATE(9), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(58), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(53), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      anon_sym_EQ,
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
  [471] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(10), 1,
      sym_formatting_comment,
    ACTIONS(58), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(53), 26,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      anon_sym_EQ,
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
  [511] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(11), 1,
      sym_formatting_comment,
    ACTIONS(64), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(60), 22,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      anon_sym_EQ,
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
  [556] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(12), 1,
      sym_formatting_comment,
    ACTIONS(68), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(66), 22,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      anon_sym_EQ,
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
  [592] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(13), 1,
      sym_formatting_comment,
    ACTIONS(72), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(70), 22,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      anon_sym_EQ,
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
  [628] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(14), 1,
      sym_formatting_comment,
    ACTIONS(76), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(74), 22,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      anon_sym_EQ,
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
  [664] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(15), 1,
      sym_formatting_comment,
    ACTIONS(64), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(60), 22,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      anon_sym_EQ,
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
  [700] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(16), 1,
      sym_formatting_comment,
    ACTIONS(80), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(78), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      anon_sym_EQ,
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
  [734] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(84), 1,
      aux_sym_soql_using_clause_token1,
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
    STATE(17), 1,
      sym_formatting_comment,
    STATE(18), 1,
      sym_soql_using_clause,
    STATE(24), 1,
      sym_where_clause,
    STATE(34), 1,
      sym_soql_with_clause,
    STATE(51), 1,
      sym_group_by_clause,
    STATE(105), 1,
      sym_order_by_clause,
    STATE(155), 1,
      sym_limit_clause,
    STATE(235), 1,
      sym_offset_clause,
    STATE(329), 1,
      sym_for_clause,
    STATE(598), 1,
      sym_update_clause,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [799] = 19,
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
    STATE(18), 1,
      sym_formatting_comment,
    STATE(23), 1,
      sym_where_clause,
    STATE(36), 1,
      sym_soql_with_clause,
    STATE(58), 1,
      sym_group_by_clause,
    STATE(100), 1,
      sym_order_by_clause,
    STATE(147), 1,
      sym_limit_clause,
    STATE(218), 1,
      sym_offset_clause,
    STATE(320), 1,
      sym_for_clause,
    STATE(477), 1,
      sym_update_clause,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [858] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(108), 1,
      aux_sym_set_comparison_operator_token1,
    STATE(4), 1,
      sym_value_comparison_operator,
    STATE(19), 1,
      sym_formatting_comment,
    STATE(62), 1,
      sym__comparison,
    STATE(289), 1,
      sym_set_comparison_operator,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(65), 2,
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
  [898] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(108), 1,
      aux_sym_set_comparison_operator_token1,
    STATE(6), 1,
      sym_value_comparison_operator,
    STATE(20), 1,
      sym_formatting_comment,
    STATE(407), 1,
      sym_set_comparison_operator,
    STATE(433), 1,
      sym__comparison,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(434), 2,
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
  [938] = 14,
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
    STATE(21), 1,
      sym_formatting_comment,
    STATE(251), 1,
      sym_dotted_identifier,
    STATE(321), 1,
      sym__value_expression,
    STATE(426), 1,
      sym__selectable_expression,
    STATE(749), 1,
      sym_count_expression,
    STATE(758), 1,
      sym__function_name,
    STATE(256), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(585), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [985] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(22), 1,
      sym_formatting_comment,
    STATE(25), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(124), 8,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1016] = 17,
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
    STATE(23), 1,
      sym_formatting_comment,
    STATE(35), 1,
      sym_soql_with_clause,
    STATE(47), 1,
      sym_group_by_clause,
    STATE(84), 1,
      sym_order_by_clause,
    STATE(134), 1,
      sym_limit_clause,
    STATE(201), 1,
      sym_offset_clause,
    STATE(318), 1,
      sym_for_clause,
    STATE(459), 1,
      sym_update_clause,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1069] = 17,
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
    STATE(38), 1,
      sym_soql_with_clause,
    STATE(60), 1,
      sym_group_by_clause,
    STATE(103), 1,
      sym_order_by_clause,
    STATE(156), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym_offset_clause,
    STATE(376), 1,
      sym_for_clause,
    STATE(663), 1,
      sym_update_clause,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1122] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(25), 1,
      sym_formatting_comment,
    STATE(26), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(51), 8,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1153] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(132), 1,
      anon_sym_DOT,
    STATE(26), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(58), 8,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1182] = 14,
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
    STATE(15), 1,
      sym_dotted_identifier,
    STATE(19), 1,
      sym__value_expression,
    STATE(27), 1,
      sym_formatting_comment,
    STATE(45), 1,
      sym__condition_expression,
    STATE(71), 1,
      sym_comparison_expression,
    STATE(114), 1,
      sym__boolean_expression,
    STATE(785), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(110), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1228] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(28), 1,
      sym_formatting_comment,
    STATE(42), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(147), 6,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [1262] = 14,
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
    STATE(15), 1,
      sym_dotted_identifier,
    STATE(19), 1,
      sym__value_expression,
    STATE(29), 1,
      sym_formatting_comment,
    STATE(45), 1,
      sym__condition_expression,
    STATE(71), 1,
      sym_comparison_expression,
    STATE(167), 1,
      sym__boolean_expression,
    STATE(785), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(110), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1308] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(137), 1,
      aux_sym_not_expression_token1,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(30), 1,
      sym_formatting_comment,
    STATE(248), 1,
      sym__condition_expression,
    STATE(455), 1,
      sym_comparison_expression,
    STATE(776), 1,
      sym__boolean_expression,
    STATE(785), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(110), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1354] = 13,
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
    STATE(31), 1,
      sym_formatting_comment,
    STATE(251), 1,
      sym_dotted_identifier,
    STATE(321), 1,
      sym__value_expression,
    STATE(500), 1,
      sym__selectable_expression,
    STATE(742), 1,
      sym__function_name,
    STATE(256), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(585), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1398] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(137), 1,
      aux_sym_not_expression_token1,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(32), 1,
      sym_formatting_comment,
    STATE(248), 1,
      sym__condition_expression,
    STATE(455), 1,
      sym_comparison_expression,
    STATE(775), 1,
      sym__boolean_expression,
    STATE(785), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(110), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1444] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(33), 1,
      sym_formatting_comment,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_DOT,
    ACTIONS(58), 8,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1470] = 15,
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
    STATE(34), 1,
      sym_formatting_comment,
    STATE(55), 1,
      sym_group_by_clause,
    STATE(104), 1,
      sym_order_by_clause,
    STATE(158), 1,
      sym_limit_clause,
    STATE(237), 1,
      sym_offset_clause,
    STATE(403), 1,
      sym_for_clause,
    STATE(729), 1,
      sym_update_clause,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1517] = 15,
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
    STATE(52), 1,
      sym_group_by_clause,
    STATE(95), 1,
      sym_order_by_clause,
    STATE(126), 1,
      sym_limit_clause,
    STATE(209), 1,
      sym_offset_clause,
    STATE(279), 1,
      sym_for_clause,
    STATE(734), 1,
      sym_update_clause,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1564] = 15,
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
    STATE(36), 1,
      sym_formatting_comment,
    STATE(56), 1,
      sym_group_by_clause,
    STATE(86), 1,
      sym_order_by_clause,
    STATE(151), 1,
      sym_limit_clause,
    STATE(219), 1,
      sym_offset_clause,
    STATE(328), 1,
      sym_for_clause,
    STATE(478), 1,
      sym_update_clause,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1611] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(37), 1,
      sym_formatting_comment,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(124), 8,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1636] = 15,
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
    STATE(57), 1,
      sym_group_by_clause,
    STATE(88), 1,
      sym_order_by_clause,
    STATE(130), 1,
      sym_limit_clause,
    STATE(206), 1,
      sym_offset_clause,
    STATE(392), 1,
      sym_for_clause,
    STATE(672), 1,
      sym_update_clause,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1683] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(149), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(39), 1,
      sym_formatting_comment,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(165), 6,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [1712] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    STATE(40), 2,
      sym_formatting_comment,
      aux_sym_from_clause_repeat1,
    ACTIONS(163), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1736] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(172), 1,
      aux_sym_or_expression_token1,
    STATE(41), 1,
      sym_formatting_comment,
    ACTIONS(170), 12,
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
  [1760] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_from_clause_repeat1,
    STATE(42), 1,
      sym_formatting_comment,
    ACTIONS(174), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1786] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_from_clause_repeat1,
    STATE(43), 1,
      sym_formatting_comment,
    ACTIONS(143), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1812] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(44), 1,
      sym_formatting_comment,
    STATE(82), 1,
      sym_order_direction,
    STATE(165), 1,
      sym_order_null_direction,
    ACTIONS(178), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(180), 2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [1842] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(184), 1,
      aux_sym_and_expression_token1,
    ACTIONS(186), 1,
      aux_sym_or_expression_token1,
    STATE(45), 1,
      sym_formatting_comment,
    STATE(72), 1,
      aux_sym_and_expression_repeat1,
    STATE(73), 1,
      aux_sym_or_expression_repeat1,
    ACTIONS(182), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1872] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(190), 1,
      aux_sym_or_expression_token1,
    STATE(46), 1,
      sym_formatting_comment,
    ACTIONS(188), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1895] = 13,
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
    STATE(47), 1,
      sym_formatting_comment,
    STATE(94), 1,
      sym_order_by_clause,
    STATE(123), 1,
      sym_limit_clause,
    STATE(185), 1,
      sym_offset_clause,
    STATE(276), 1,
      sym_for_clause,
    STATE(718), 1,
      sym_update_clause,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1936] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(48), 1,
      sym_formatting_comment,
    ACTIONS(194), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1957] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(198), 1,
      aux_sym_or_expression_token1,
    STATE(49), 1,
      sym_formatting_comment,
    ACTIONS(196), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1980] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(202), 1,
      aux_sym_or_expression_token1,
    STATE(50), 1,
      sym_formatting_comment,
    ACTIONS(200), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2003] = 13,
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
    STATE(51), 1,
      sym_formatting_comment,
    STATE(102), 1,
      sym_order_by_clause,
    STATE(116), 1,
      sym_limit_clause,
    STATE(227), 1,
      sym_offset_clause,
    STATE(335), 1,
      sym_for_clause,
    STATE(542), 1,
      sym_update_clause,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2044] = 13,
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
    STATE(99), 1,
      sym_order_by_clause,
    STATE(142), 1,
      sym_limit_clause,
    STATE(204), 1,
      sym_offset_clause,
    STATE(330), 1,
      sym_for_clause,
    STATE(479), 1,
      sym_update_clause,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2085] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(53), 1,
      sym_formatting_comment,
    ACTIONS(208), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2106] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(54), 1,
      sym_formatting_comment,
    ACTIONS(163), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2127] = 13,
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
    STATE(89), 1,
      sym_order_by_clause,
    STATE(139), 1,
      sym_limit_clause,
    STATE(183), 1,
      sym_offset_clause,
    STATE(404), 1,
      sym_for_clause,
    STATE(730), 1,
      sym_update_clause,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2168] = 13,
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
    STATE(56), 1,
      sym_formatting_comment,
    STATE(96), 1,
      sym_order_by_clause,
    STATE(129), 1,
      sym_limit_clause,
    STATE(244), 1,
      sym_offset_clause,
    STATE(285), 1,
      sym_for_clause,
    STATE(482), 1,
      sym_update_clause,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2209] = 13,
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
    STATE(57), 1,
      sym_formatting_comment,
    STATE(97), 1,
      sym_order_by_clause,
    STATE(133), 1,
      sym_limit_clause,
    STATE(186), 1,
      sym_offset_clause,
    STATE(300), 1,
      sym_for_clause,
    STATE(596), 1,
      sym_update_clause,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2250] = 13,
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
    STATE(58), 1,
      sym_formatting_comment,
    STATE(83), 1,
      sym_order_by_clause,
    STATE(152), 1,
      sym_limit_clause,
    STATE(230), 1,
      sym_offset_clause,
    STATE(305), 1,
      sym_for_clause,
    STATE(706), 1,
      sym_update_clause,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2291] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(220), 1,
      aux_sym_or_expression_token1,
    STATE(59), 1,
      sym_formatting_comment,
    ACTIONS(218), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2314] = 13,
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
    STATE(87), 1,
      sym_order_by_clause,
    STATE(120), 1,
      sym_limit_clause,
    STATE(210), 1,
      sym_offset_clause,
    STATE(373), 1,
      sym_for_clause,
    STATE(606), 1,
      sym_update_clause,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2355] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(226), 1,
      aux_sym_or_expression_token1,
    STATE(61), 1,
      sym_formatting_comment,
    ACTIONS(224), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2378] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(230), 1,
      aux_sym_or_expression_token1,
    STATE(62), 1,
      sym_formatting_comment,
    ACTIONS(228), 10,
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
  [2400] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(234), 1,
      aux_sym_or_expression_token1,
    STATE(63), 1,
      sym_formatting_comment,
    ACTIONS(232), 10,
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
  [2422] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(238), 1,
      aux_sym_or_expression_token1,
    STATE(64), 1,
      sym_formatting_comment,
    ACTIONS(236), 10,
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
  [2444] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(242), 1,
      aux_sym_or_expression_token1,
    STATE(65), 1,
      sym_formatting_comment,
    ACTIONS(240), 10,
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
  [2466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(246), 1,
      aux_sym_or_expression_token1,
    STATE(66), 1,
      sym_formatting_comment,
    ACTIONS(244), 10,
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
  [2488] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(250), 1,
      aux_sym_or_expression_token1,
    STATE(67), 1,
      sym_formatting_comment,
    ACTIONS(248), 10,
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
  [2510] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(254), 1,
      aux_sym_or_expression_token1,
    STATE(68), 1,
      sym_formatting_comment,
    ACTIONS(252), 10,
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
  [2532] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(258), 1,
      aux_sym_and_expression_token1,
    STATE(69), 2,
      sym_formatting_comment,
      aux_sym_and_expression_repeat1,
    ACTIONS(256), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2554] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(263), 1,
      aux_sym_or_expression_token1,
    STATE(70), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
    ACTIONS(261), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2576] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(268), 1,
      aux_sym_or_expression_token1,
    STATE(71), 1,
      sym_formatting_comment,
    ACTIONS(266), 10,
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
  [2598] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(184), 1,
      aux_sym_and_expression_token1,
    STATE(69), 1,
      aux_sym_and_expression_repeat1,
    STATE(72), 1,
      sym_formatting_comment,
    ACTIONS(270), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2622] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(186), 1,
      aux_sym_or_expression_token1,
    STATE(70), 1,
      aux_sym_or_expression_repeat1,
    STATE(73), 1,
      sym_formatting_comment,
    ACTIONS(272), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2646] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(74), 2,
      sym_formatting_comment,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(274), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2667] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym__group_by_expression_repeat1,
    STATE(75), 1,
      sym_formatting_comment,
    ACTIONS(279), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2690] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(15), 1,
      sym_dotted_identifier,
    STATE(19), 1,
      sym__value_expression,
    STATE(71), 1,
      sym_comparison_expression,
    STATE(76), 1,
      sym_formatting_comment,
    STATE(90), 1,
      sym__condition_expression,
    STATE(785), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
  [2725] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(15), 1,
      sym_dotted_identifier,
    STATE(19), 1,
      sym__value_expression,
    STATE(71), 1,
      sym_comparison_expression,
    STATE(77), 1,
      sym_formatting_comment,
    STATE(91), 1,
      sym__condition_expression,
    STATE(785), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
  [2760] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(78), 1,
      sym_formatting_comment,
    ACTIONS(283), 10,
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
  [2779] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(79), 1,
      sym_formatting_comment,
    ACTIONS(285), 10,
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
  [2798] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym__group_by_expression_repeat1,
    STATE(80), 1,
      sym_formatting_comment,
    ACTIONS(287), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2821] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(291), 1,
      aux_sym_and_expression_token1,
    STATE(81), 1,
      sym_formatting_comment,
    STATE(93), 1,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(289), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2844] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(82), 1,
      sym_formatting_comment,
    STATE(174), 1,
      sym_order_null_direction,
    ACTIONS(180), 2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
    ACTIONS(293), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [2867] = 11,
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
    STATE(83), 1,
      sym_formatting_comment,
    STATE(122), 1,
      sym_limit_clause,
    STATE(198), 1,
      sym_offset_clause,
    STATE(275), 1,
      sym_for_clause,
    STATE(699), 1,
      sym_update_clause,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2902] = 11,
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
    STATE(84), 1,
      sym_formatting_comment,
    STATE(128), 1,
      sym_limit_clause,
    STATE(240), 1,
      sym_offset_clause,
    STATE(283), 1,
      sym_for_clause,
    STATE(474), 1,
      sym_update_clause,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2937] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(15), 1,
      sym_dotted_identifier,
    STATE(19), 1,
      sym__value_expression,
    STATE(71), 1,
      sym_comparison_expression,
    STATE(85), 1,
      sym_formatting_comment,
    STATE(107), 1,
      sym__condition_expression,
    STATE(785), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
  [2972] = 11,
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
    STATE(131), 1,
      sym_limit_clause,
    STATE(179), 1,
      sym_offset_clause,
    STATE(288), 1,
      sym_for_clause,
    STATE(504), 1,
      sym_update_clause,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3007] = 11,
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
    STATE(87), 1,
      sym_formatting_comment,
    STATE(132), 1,
      sym_limit_clause,
    STATE(184), 1,
      sym_offset_clause,
    STATE(299), 1,
      sym_for_clause,
    STATE(589), 1,
      sym_update_clause,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3042] = 11,
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
    STATE(135), 1,
      sym_limit_clause,
    STATE(190), 1,
      sym_offset_clause,
    STATE(304), 1,
      sym_for_clause,
    STATE(624), 1,
      sym_update_clause,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3077] = 11,
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
    STATE(161), 1,
      sym_limit_clause,
    STATE(194), 1,
      sym_offset_clause,
    STATE(312), 1,
      sym_for_clause,
    STATE(709), 1,
      sym_update_clause,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3112] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(90), 1,
      sym_formatting_comment,
    ACTIONS(256), 10,
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
  [3131] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(307), 1,
      aux_sym_or_expression_token1,
    STATE(91), 1,
      sym_formatting_comment,
    ACTIONS(261), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3152] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(311), 1,
      aux_sym_with_user_id_type_token1,
    ACTIONS(313), 1,
      aux_sym_with_record_visibility_expression_token1,
    ACTIONS(315), 1,
      aux_sym_with_data_cat_expression_token1,
    STATE(92), 1,
      sym_formatting_comment,
    STATE(159), 1,
      sym_soql_with_type,
    ACTIONS(309), 3,
      aux_sym_soql_with_type_token1,
      aux_sym_soql_with_type_token2,
      aux_sym_soql_with_type_token3,
    STATE(157), 3,
      sym_with_user_id_type,
      sym_with_record_visibility_expression,
      sym_with_data_cat_expression,
  [3181] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(291), 1,
      aux_sym_and_expression_token1,
    STATE(93), 1,
      sym_formatting_comment,
    STATE(98), 1,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(317), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3204] = 11,
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
    STATE(141), 1,
      sym_limit_clause,
    STATE(202), 1,
      sym_offset_clause,
    STATE(327), 1,
      sym_for_clause,
    STATE(475), 1,
      sym_update_clause,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3239] = 11,
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
    STATE(95), 1,
      sym_formatting_comment,
    STATE(144), 1,
      sym_limit_clause,
    STATE(207), 1,
      sym_offset_clause,
    STATE(334), 1,
      sym_for_clause,
    STATE(489), 1,
      sym_update_clause,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3274] = 11,
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
    STATE(145), 1,
      sym_limit_clause,
    STATE(246), 1,
      sym_offset_clause,
    STATE(342), 1,
      sym_for_clause,
    STATE(506), 1,
      sym_update_clause,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3309] = 11,
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
    STATE(146), 1,
      sym_limit_clause,
    STATE(214), 1,
      sym_offset_clause,
    STATE(355), 1,
      sym_for_clause,
    STATE(543), 1,
      sym_update_clause,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3344] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(329), 1,
      aux_sym_and_expression_token1,
    STATE(98), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(327), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3365] = 11,
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
    STATE(99), 1,
      sym_formatting_comment,
    STATE(150), 1,
      sym_limit_clause,
    STATE(223), 1,
      sym_offset_clause,
    STATE(375), 1,
      sym_for_clause,
    STATE(600), 1,
      sym_update_clause,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3400] = 11,
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
    STATE(100), 1,
      sym_formatting_comment,
    STATE(153), 1,
      sym_limit_clause,
    STATE(229), 1,
      sym_offset_clause,
    STATE(343), 1,
      sym_for_clause,
    STATE(531), 1,
      sym_update_clause,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3435] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(101), 1,
      sym_formatting_comment,
    STATE(455), 1,
      sym_comparison_expression,
    STATE(719), 1,
      sym__condition_expression,
    STATE(785), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
  [3470] = 11,
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
    STATE(154), 1,
      sym_limit_clause,
    STATE(234), 1,
      sym_offset_clause,
    STATE(367), 1,
      sym_for_clause,
    STATE(590), 1,
      sym_update_clause,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3505] = 11,
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
    STATE(103), 1,
      sym_formatting_comment,
    STATE(138), 1,
      sym_limit_clause,
    STATE(177), 1,
      sym_offset_clause,
    STATE(402), 1,
      sym_for_clause,
    STATE(717), 1,
      sym_update_clause,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3540] = 11,
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
    STATE(104), 1,
      sym_formatting_comment,
    STATE(143), 1,
      sym_limit_clause,
    STATE(193), 1,
      sym_offset_clause,
    STATE(359), 1,
      sym_for_clause,
    STATE(728), 1,
      sym_update_clause,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3575] = 11,
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
    STATE(105), 1,
      sym_formatting_comment,
    STATE(160), 1,
      sym_limit_clause,
    STATE(241), 1,
      sym_offset_clause,
    STATE(267), 1,
      sym_for_clause,
    STATE(723), 1,
      sym_update_clause,
    ACTIONS(342), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3610] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(106), 1,
      sym_formatting_comment,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3628] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(107), 1,
      sym_formatting_comment,
    ACTIONS(344), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3646] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(348), 1,
      aux_sym_having_clause_token1,
    STATE(108), 1,
      sym_formatting_comment,
    STATE(166), 1,
      sym_having_clause,
    ACTIONS(346), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3668] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(109), 1,
      sym_formatting_comment,
    ACTIONS(274), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3686] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(110), 1,
      sym_formatting_comment,
    ACTIONS(182), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3704] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(111), 1,
      sym_formatting_comment,
    ACTIONS(350), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3722] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(112), 1,
      sym_formatting_comment,
    ACTIONS(352), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3740] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(113), 1,
      sym_formatting_comment,
    ACTIONS(354), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
  [3758] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(114), 1,
      sym_formatting_comment,
    ACTIONS(356), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3776] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(115), 1,
      sym_formatting_comment,
    ACTIONS(358), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3794] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(116), 1,
      sym_formatting_comment,
    STATE(231), 1,
      sym_offset_clause,
    STATE(356), 1,
      sym_for_clause,
    STATE(550), 1,
      sym_update_clause,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3823] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(15), 1,
      sym_dotted_identifier,
    STATE(44), 1,
      sym__value_expression,
    STATE(117), 1,
      sym_formatting_comment,
    STATE(136), 1,
      sym_order_expression,
    STATE(785), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
  [3852] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      anon_sym_DOT,
    STATE(118), 1,
      sym_formatting_comment,
    STATE(171), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(60), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(64), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [3877] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(119), 1,
      sym_formatting_comment,
    ACTIONS(364), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3894] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(120), 1,
      sym_formatting_comment,
    STATE(182), 1,
      sym_offset_clause,
    STATE(297), 1,
      sym_for_clause,
    STATE(573), 1,
      sym_update_clause,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3923] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    STATE(121), 2,
      sym_formatting_comment,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(368), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [3942] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(122), 1,
      sym_formatting_comment,
    STATE(199), 1,
      sym_offset_clause,
    STATE(323), 1,
      sym_for_clause,
    STATE(466), 1,
      sym_update_clause,
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3971] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(123), 1,
      sym_formatting_comment,
    STATE(200), 1,
      sym_offset_clause,
    STATE(325), 1,
      sym_for_clause,
    STATE(472), 1,
      sym_update_clause,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4000] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_order_by_clause_repeat1,
    STATE(124), 1,
      sym_formatting_comment,
    ACTIONS(377), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4021] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(118), 1,
      aux_sym_function_expression_token1,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_formatting_comment,
    STATE(251), 1,
      sym_dotted_identifier,
    STATE(424), 1,
      sym__value_expression,
    STATE(742), 1,
      sym__function_name,
    STATE(256), 2,
      sym_function_expression,
      sym_field_identifier,
  [4050] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(126), 1,
      sym_formatting_comment,
    STATE(205), 1,
      sym_offset_clause,
    STATE(331), 1,
      sym_for_clause,
    STATE(483), 1,
      sym_update_clause,
    ACTIONS(383), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4079] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(387), 1,
      aux_sym_using_scope_type_token3,
    STATE(79), 1,
      sym_using_scope_type,
    STATE(127), 1,
      sym_formatting_comment,
    ACTIONS(385), 6,
      aux_sym_using_scope_type_token1,
      aux_sym_using_scope_type_token2,
      aux_sym_using_scope_type_token4,
      aux_sym_using_scope_type_token5,
      aux_sym_using_scope_type_token6,
      aux_sym_using_scope_type_token7,
  [4100] = 9,
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
    STATE(208), 1,
      sym_offset_clause,
    STATE(337), 1,
      sym_for_clause,
    STATE(496), 1,
      sym_update_clause,
    ACTIONS(389), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4129] = 9,
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
    STATE(176), 1,
      sym_offset_clause,
    STATE(340), 1,
      sym_for_clause,
    STATE(502), 1,
      sym_update_clause,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4158] = 9,
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
    STATE(188), 1,
      sym_offset_clause,
    STATE(302), 1,
      sym_for_clause,
    STATE(608), 1,
      sym_update_clause,
    ACTIONS(393), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4187] = 9,
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
    STATE(211), 1,
      sym_offset_clause,
    STATE(346), 1,
      sym_for_clause,
    STATE(513), 1,
      sym_update_clause,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4216] = 9,
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
    STATE(212), 1,
      sym_offset_clause,
    STATE(351), 1,
      sym_for_clause,
    STATE(532), 1,
      sym_update_clause,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4245] = 9,
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
    STATE(213), 1,
      sym_offset_clause,
    STATE(353), 1,
      sym_for_clause,
    STATE(538), 1,
      sym_update_clause,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4274] = 9,
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
    STATE(236), 1,
      sym_offset_clause,
    STATE(281), 1,
      sym_for_clause,
    STATE(461), 1,
      sym_update_clause,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4303] = 9,
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
    STATE(215), 1,
      sym_offset_clause,
    STATE(358), 1,
      sym_for_clause,
    STATE(456), 1,
      sym_update_clause,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4332] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym_order_by_clause_repeat1,
    STATE(136), 1,
      sym_formatting_comment,
    ACTIONS(405), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4353] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(137), 1,
      sym_formatting_comment,
    ACTIONS(407), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4370] = 9,
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
    STATE(191), 1,
      sym_offset_clause,
    STATE(307), 1,
      sym_for_clause,
    STATE(657), 1,
      sym_update_clause,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4399] = 9,
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
    STATE(192), 1,
      sym_offset_clause,
    STATE(309), 1,
      sym_for_clause,
    STATE(683), 1,
      sym_update_clause,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4428] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(413), 1,
      aux_sym_type_of_clause_token2,
    ACTIONS(415), 1,
      aux_sym_when_expression_token1,
    ACTIONS(417), 1,
      aux_sym_else_expression_token1,
    STATE(8), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(140), 1,
      sym_formatting_comment,
    STATE(232), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(431), 1,
      sym_when_expression,
    STATE(766), 1,
      sym_else_expression,
  [4459] = 9,
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
    STATE(220), 1,
      sym_offset_clause,
    STATE(370), 1,
      sym_for_clause,
    STATE(591), 1,
      sym_update_clause,
    ACTIONS(419), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4488] = 9,
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
    STATE(221), 1,
      sym_offset_clause,
    STATE(372), 1,
      sym_for_clause,
    STATE(595), 1,
      sym_update_clause,
    ACTIONS(421), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4517] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(143), 1,
      sym_formatting_comment,
    STATE(195), 1,
      sym_offset_clause,
    STATE(314), 1,
      sym_for_clause,
    STATE(716), 1,
      sym_update_clause,
    ACTIONS(423), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4546] = 9,
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
    STATE(224), 1,
      sym_offset_clause,
    STATE(378), 1,
      sym_for_clause,
    STATE(607), 1,
      sym_update_clause,
    ACTIONS(425), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4575] = 9,
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
    STATE(225), 1,
      sym_offset_clause,
    STATE(382), 1,
      sym_for_clause,
    STATE(620), 1,
      sym_update_clause,
    ACTIONS(427), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4604] = 9,
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
    STATE(226), 1,
      sym_offset_clause,
    STATE(388), 1,
      sym_for_clause,
    STATE(641), 1,
      sym_update_clause,
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4633] = 9,
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
    STATE(222), 1,
      sym_offset_clause,
    STATE(332), 1,
      sym_for_clause,
    STATE(488), 1,
      sym_update_clause,
    ACTIONS(431), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4662] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(15), 1,
      sym_dotted_identifier,
    STATE(44), 1,
      sym__value_expression,
    STATE(148), 1,
      sym_formatting_comment,
    STATE(172), 1,
      sym_order_expression,
    STATE(785), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
  [4691] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(149), 1,
      sym_formatting_comment,
    ACTIONS(433), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4708] = 9,
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
    STATE(228), 1,
      sym_offset_clause,
    STATE(394), 1,
      sym_for_clause,
    STATE(673), 1,
      sym_update_clause,
    ACTIONS(435), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4737] = 9,
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
    STATE(178), 1,
      sym_offset_clause,
    STATE(286), 1,
      sym_for_clause,
    STATE(495), 1,
      sym_update_clause,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4766] = 9,
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
    STATE(243), 1,
      sym_offset_clause,
    STATE(273), 1,
      sym_for_clause,
    STATE(635), 1,
      sym_update_clause,
    ACTIONS(439), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4795] = 9,
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
    STATE(180), 1,
      sym_offset_clause,
    STATE(291), 1,
      sym_for_clause,
    STATE(530), 1,
      sym_update_clause,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4824] = 9,
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
    STATE(181), 1,
      sym_offset_clause,
    STATE(294), 1,
      sym_for_clause,
    STATE(554), 1,
      sym_update_clause,
    ACTIONS(443), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4853] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(155), 1,
      sym_formatting_comment,
    STATE(239), 1,
      sym_offset_clause,
    STATE(406), 1,
      sym_for_clause,
    STATE(465), 1,
      sym_update_clause,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4882] = 9,
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
    STATE(238), 1,
      sym_offset_clause,
    STATE(400), 1,
      sym_for_clause,
    STATE(708), 1,
      sym_update_clause,
    ACTIONS(447), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4911] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(157), 1,
      sym_formatting_comment,
    ACTIONS(449), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4928] = 9,
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
    STATE(187), 1,
      sym_offset_clause,
    STATE(405), 1,
      sym_for_clause,
    STATE(732), 1,
      sym_update_clause,
    ACTIONS(451), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4957] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(159), 1,
      sym_formatting_comment,
    ACTIONS(453), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4974] = 9,
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
    STATE(197), 1,
      sym_offset_clause,
    STATE(264), 1,
      sym_for_clause,
    STATE(457), 1,
      sym_update_clause,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5003] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_offset_clause_token1,
    STATE(161), 1,
      sym_formatting_comment,
    STATE(216), 1,
      sym_offset_clause,
    STATE(363), 1,
      sym_for_clause,
    STATE(564), 1,
      sym_update_clause,
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5032] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(459), 1,
      anon_sym_DOT,
    ACTIONS(53), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(162), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(58), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5052] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(163), 1,
      sym_formatting_comment,
    STATE(247), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(464), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5076] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_select_clause_token1,
    STATE(164), 1,
      sym_formatting_comment,
    STATE(383), 1,
      aux_sym_source_file_repeat1,
    STATE(470), 1,
      sym_select_clause,
    STATE(471), 1,
      sym_header_comment,
    STATE(744), 1,
      sym__soql_query_expression,
    STATE(772), 1,
      sym_soql_query_body,
  [5104] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(165), 1,
      sym_formatting_comment,
    ACTIONS(293), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5120] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(166), 1,
      sym_formatting_comment,
    ACTIONS(466), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5136] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(167), 1,
      sym_formatting_comment,
    ACTIONS(468), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5152] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(118), 1,
      aux_sym_function_expression_token1,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(168), 1,
      sym_formatting_comment,
    STATE(251), 1,
      sym_dotted_identifier,
    STATE(652), 1,
      sym__value_expression,
    STATE(742), 1,
      sym__function_name,
    STATE(256), 2,
      sym_function_expression,
      sym_field_identifier,
  [5178] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(15), 1,
      sym_dotted_identifier,
    STATE(108), 1,
      sym__group_by_expression,
    STATE(169), 1,
      sym_formatting_comment,
    STATE(785), 1,
      sym__function_name,
    STATE(80), 2,
      sym_function_expression,
      sym_field_identifier,
  [5204] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(118), 1,
      aux_sym_function_expression_token1,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(170), 1,
      sym_formatting_comment,
    STATE(251), 1,
      sym_dotted_identifier,
    STATE(424), 1,
      sym__value_expression,
    STATE(742), 1,
      sym__function_name,
    STATE(256), 2,
      sym_function_expression,
      sym_field_identifier,
  [5230] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(362), 1,
      anon_sym_DOT,
    STATE(162), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(171), 1,
      sym_formatting_comment,
    ACTIONS(47), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(51), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5252] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(172), 1,
      sym_formatting_comment,
    ACTIONS(368), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5268] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(173), 1,
      sym_formatting_comment,
    ACTIONS(470), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5284] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(174), 1,
      sym_formatting_comment,
    ACTIONS(472), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5300] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(118), 1,
      aux_sym_function_expression_token1,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(175), 1,
      sym_formatting_comment,
    STATE(251), 1,
      sym_dotted_identifier,
    STATE(447), 1,
      sym__value_expression,
    STATE(742), 1,
      sym__function_name,
    STATE(256), 2,
      sym_function_expression,
      sym_field_identifier,
  [5326] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(176), 1,
      sym_formatting_comment,
    STATE(381), 1,
      sym_for_clause,
    STATE(616), 1,
      sym_update_clause,
    ACTIONS(474), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5349] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(177), 1,
      sym_formatting_comment,
    STATE(308), 1,
      sym_for_clause,
    STATE(667), 1,
      sym_update_clause,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5372] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(178), 1,
      sym_formatting_comment,
    STATE(345), 1,
      sym_for_clause,
    STATE(509), 1,
      sym_update_clause,
    ACTIONS(478), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5395] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(179), 1,
      sym_formatting_comment,
    STATE(347), 1,
      sym_for_clause,
    STATE(515), 1,
      sym_update_clause,
    ACTIONS(480), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5418] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(180), 1,
      sym_formatting_comment,
    STATE(348), 1,
      sym_for_clause,
    STATE(519), 1,
      sym_update_clause,
    ACTIONS(482), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5441] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(181), 1,
      sym_formatting_comment,
    STATE(349), 1,
      sym_for_clause,
    STATE(524), 1,
      sym_update_clause,
    ACTIONS(484), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5464] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(182), 1,
      sym_formatting_comment,
    STATE(350), 1,
      sym_for_clause,
    STATE(527), 1,
      sym_update_clause,
    ACTIONS(486), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5487] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(183), 1,
      sym_formatting_comment,
    STATE(311), 1,
      sym_for_clause,
    STATE(695), 1,
      sym_update_clause,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5510] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(184), 1,
      sym_formatting_comment,
    STATE(352), 1,
      sym_for_clause,
    STATE(534), 1,
      sym_update_clause,
    ACTIONS(490), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5533] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(185), 1,
      sym_formatting_comment,
    STATE(326), 1,
      sym_for_clause,
    STATE(473), 1,
      sym_update_clause,
    ACTIONS(492), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5556] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(186), 1,
      sym_formatting_comment,
    STATE(354), 1,
      sym_for_clause,
    STATE(540), 1,
      sym_update_clause,
    ACTIONS(494), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5579] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(187), 1,
      sym_formatting_comment,
    STATE(313), 1,
      sym_for_clause,
    STATE(712), 1,
      sym_update_clause,
    ACTIONS(496), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5602] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(188), 1,
      sym_formatting_comment,
    STATE(357), 1,
      sym_for_clause,
    STATE(546), 1,
      sym_update_clause,
    ACTIONS(498), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5625] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym_function_expression_token1,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(15), 1,
      sym_dotted_identifier,
    STATE(189), 1,
      sym_formatting_comment,
    STATE(785), 1,
      sym__function_name,
    STATE(109), 2,
      sym_function_expression,
      sym_field_identifier,
  [5648] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(190), 1,
      sym_formatting_comment,
    STATE(360), 1,
      sym_for_clause,
    STATE(551), 1,
      sym_update_clause,
    ACTIONS(500), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5671] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(191), 1,
      sym_formatting_comment,
    STATE(361), 1,
      sym_for_clause,
    STATE(555), 1,
      sym_update_clause,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5694] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(192), 1,
      sym_formatting_comment,
    STATE(362), 1,
      sym_for_clause,
    STATE(559), 1,
      sym_update_clause,
    ACTIONS(504), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5717] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(193), 1,
      sym_formatting_comment,
    STATE(315), 1,
      sym_for_clause,
    STATE(720), 1,
      sym_update_clause,
    ACTIONS(506), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5740] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(194), 1,
      sym_formatting_comment,
    STATE(365), 1,
      sym_for_clause,
    STATE(566), 1,
      sym_update_clause,
    ACTIONS(508), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5763] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(195), 1,
      sym_formatting_comment,
    STATE(366), 1,
      sym_for_clause,
    STATE(569), 1,
      sym_update_clause,
    ACTIONS(510), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5786] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(196), 1,
      sym_formatting_comment,
    ACTIONS(512), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5805] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(197), 1,
      sym_formatting_comment,
    STATE(316), 1,
      sym_for_clause,
    STATE(724), 1,
      sym_update_clause,
    ACTIONS(514), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5828] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(198), 1,
      sym_formatting_comment,
    STATE(324), 1,
      sym_for_clause,
    STATE(468), 1,
      sym_update_clause,
    ACTIONS(516), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5851] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(199), 1,
      sym_formatting_comment,
    STATE(368), 1,
      sym_for_clause,
    STATE(582), 1,
      sym_update_clause,
    ACTIONS(518), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5874] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(200), 1,
      sym_formatting_comment,
    STATE(369), 1,
      sym_for_clause,
    STATE(586), 1,
      sym_update_clause,
    ACTIONS(520), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5897] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(201), 1,
      sym_formatting_comment,
    STATE(282), 1,
      sym_for_clause,
    STATE(467), 1,
      sym_update_clause,
    ACTIONS(522), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5920] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(202), 1,
      sym_formatting_comment,
    STATE(371), 1,
      sym_for_clause,
    STATE(593), 1,
      sym_update_clause,
    ACTIONS(524), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5943] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(203), 1,
      sym_formatting_comment,
    ACTIONS(53), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(58), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5960] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(204), 1,
      sym_formatting_comment,
    STATE(374), 1,
      sym_for_clause,
    STATE(597), 1,
      sym_update_clause,
    ACTIONS(526), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5983] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(205), 1,
      sym_formatting_comment,
    STATE(377), 1,
      sym_for_clause,
    STATE(602), 1,
      sym_update_clause,
    ACTIONS(528), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6006] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(206), 1,
      sym_formatting_comment,
    STATE(303), 1,
      sym_for_clause,
    STATE(615), 1,
      sym_update_clause,
    ACTIONS(530), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6029] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(207), 1,
      sym_formatting_comment,
    STATE(379), 1,
      sym_for_clause,
    STATE(609), 1,
      sym_update_clause,
    ACTIONS(532), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6052] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(208), 1,
      sym_formatting_comment,
    STATE(380), 1,
      sym_for_clause,
    STATE(612), 1,
      sym_update_clause,
    ACTIONS(534), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6075] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(209), 1,
      sym_formatting_comment,
    STATE(333), 1,
      sym_for_clause,
    STATE(485), 1,
      sym_update_clause,
    ACTIONS(536), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6098] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(210), 1,
      sym_formatting_comment,
    STATE(298), 1,
      sym_for_clause,
    STATE(578), 1,
      sym_update_clause,
    ACTIONS(538), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6121] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(211), 1,
      sym_formatting_comment,
    STATE(385), 1,
      sym_for_clause,
    STATE(625), 1,
      sym_update_clause,
    ACTIONS(540), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6144] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(212), 1,
      sym_formatting_comment,
    STATE(386), 1,
      sym_for_clause,
    STATE(632), 1,
      sym_update_clause,
    ACTIONS(542), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6167] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(213), 1,
      sym_formatting_comment,
    STATE(387), 1,
      sym_for_clause,
    STATE(636), 1,
      sym_update_clause,
    ACTIONS(544), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6190] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(214), 1,
      sym_formatting_comment,
    STATE(389), 1,
      sym_for_clause,
    STATE(643), 1,
      sym_update_clause,
    ACTIONS(546), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6213] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(215), 1,
      sym_formatting_comment,
    STATE(390), 1,
      sym_for_clause,
    STATE(647), 1,
      sym_update_clause,
    ACTIONS(548), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6236] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(216), 1,
      sym_formatting_comment,
    STATE(391), 1,
      sym_for_clause,
    STATE(653), 1,
      sym_update_clause,
    ACTIONS(550), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6259] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(413), 1,
      aux_sym_type_of_clause_token2,
    ACTIONS(415), 1,
      aux_sym_when_expression_token1,
    ACTIONS(417), 1,
      aux_sym_else_expression_token1,
    STATE(217), 1,
      sym_formatting_comment,
    STATE(232), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(431), 1,
      sym_when_expression,
    STATE(766), 1,
      sym_else_expression,
  [6284] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(218), 1,
      sym_formatting_comment,
    STATE(338), 1,
      sym_for_clause,
    STATE(501), 1,
      sym_update_clause,
    ACTIONS(552), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6307] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(219), 1,
      sym_formatting_comment,
    STATE(287), 1,
      sym_for_clause,
    STATE(497), 1,
      sym_update_clause,
    ACTIONS(554), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6330] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(220), 1,
      sym_formatting_comment,
    STATE(262), 1,
      sym_for_clause,
    STATE(664), 1,
      sym_update_clause,
    ACTIONS(556), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6353] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(221), 1,
      sym_formatting_comment,
    STATE(393), 1,
      sym_for_clause,
    STATE(668), 1,
      sym_update_clause,
    ACTIONS(558), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6376] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(222), 1,
      sym_formatting_comment,
    STATE(290), 1,
      sym_for_clause,
    STATE(512), 1,
      sym_update_clause,
    ACTIONS(560), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6399] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(223), 1,
      sym_formatting_comment,
    STATE(395), 1,
      sym_for_clause,
    STATE(675), 1,
      sym_update_clause,
    ACTIONS(562), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6422] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(224), 1,
      sym_formatting_comment,
    STATE(396), 1,
      sym_for_clause,
    STATE(678), 1,
      sym_update_clause,
    ACTIONS(564), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6445] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(225), 1,
      sym_formatting_comment,
    STATE(397), 1,
      sym_for_clause,
    STATE(684), 1,
      sym_update_clause,
    ACTIONS(566), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6468] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(226), 1,
      sym_formatting_comment,
    STATE(398), 1,
      sym_for_clause,
    STATE(690), 1,
      sym_update_clause,
    ACTIONS(568), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6491] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(227), 1,
      sym_formatting_comment,
    STATE(364), 1,
      sym_for_clause,
    STATE(572), 1,
      sym_update_clause,
    ACTIONS(570), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6514] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(228), 1,
      sym_formatting_comment,
    STATE(399), 1,
      sym_for_clause,
    STATE(700), 1,
      sym_update_clause,
    ACTIONS(572), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6537] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(229), 1,
      sym_formatting_comment,
    STATE(292), 1,
      sym_for_clause,
    STATE(536), 1,
      sym_update_clause,
    ACTIONS(574), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6560] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(230), 1,
      sym_formatting_comment,
    STATE(274), 1,
      sym_for_clause,
    STATE(659), 1,
      sym_update_clause,
    ACTIONS(576), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6583] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(231), 1,
      sym_formatting_comment,
    STATE(293), 1,
      sym_for_clause,
    STATE(541), 1,
      sym_update_clause,
    ACTIONS(578), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6606] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(415), 1,
      aux_sym_when_expression_token1,
    ACTIONS(417), 1,
      aux_sym_else_expression_token1,
    ACTIONS(580), 1,
      aux_sym_type_of_clause_token2,
    STATE(232), 1,
      sym_formatting_comment,
    STATE(260), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(431), 1,
      sym_when_expression,
    STATE(764), 1,
      sym_else_expression,
  [6631] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(233), 1,
      sym_formatting_comment,
    STATE(401), 1,
      sym_for_clause,
    STATE(711), 1,
      sym_update_clause,
    ACTIONS(582), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6654] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(234), 1,
      sym_formatting_comment,
    STATE(296), 1,
      sym_for_clause,
    STATE(562), 1,
      sym_update_clause,
    ACTIONS(584), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6677] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(235), 1,
      sym_formatting_comment,
    STATE(265), 1,
      sym_for_clause,
    STATE(558), 1,
      sym_update_clause,
    ACTIONS(586), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6700] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(236), 1,
      sym_formatting_comment,
    STATE(336), 1,
      sym_for_clause,
    STATE(492), 1,
      sym_update_clause,
    ACTIONS(588), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6723] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(237), 1,
      sym_formatting_comment,
    STATE(408), 1,
      sym_for_clause,
    STATE(736), 1,
      sym_update_clause,
    ACTIONS(590), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6746] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(238), 1,
      sym_formatting_comment,
    STATE(306), 1,
      sym_for_clause,
    STATE(639), 1,
      sym_update_clause,
    ACTIONS(592), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6769] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(239), 1,
      sym_formatting_comment,
    STATE(263), 1,
      sym_for_clause,
    STATE(508), 1,
      sym_update_clause,
    ACTIONS(594), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6792] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(240), 1,
      sym_formatting_comment,
    STATE(339), 1,
      sym_for_clause,
    STATE(498), 1,
      sym_update_clause,
    ACTIONS(596), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6815] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(241), 1,
      sym_formatting_comment,
    STATE(266), 1,
      sym_for_clause,
    STATE(484), 1,
      sym_update_clause,
    ACTIONS(598), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6838] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(600), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(602), 1,
      sym_bound_apex_expression,
    ACTIONS(604), 1,
      sym_identifier,
    STATE(242), 1,
      sym_formatting_comment,
    STATE(251), 1,
      sym_dotted_identifier,
    STATE(754), 1,
      sym_field_identifier,
    STATE(768), 1,
      sym_geo_location_type,
  [6863] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(243), 1,
      sym_formatting_comment,
    STATE(322), 1,
      sym_for_clause,
    STATE(462), 1,
      sym_update_clause,
    ACTIONS(606), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6886] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(244), 1,
      sym_formatting_comment,
    STATE(341), 1,
      sym_for_clause,
    STATE(503), 1,
      sym_update_clause,
    ACTIONS(608), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6909] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(600), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(602), 1,
      sym_bound_apex_expression,
    ACTIONS(604), 1,
      sym_identifier,
    STATE(245), 1,
      sym_formatting_comment,
    STATE(251), 1,
      sym_dotted_identifier,
    STATE(754), 1,
      sym_field_identifier,
    STATE(789), 1,
      sym_geo_location_type,
  [6934] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
      aux_sym_for_clause_token1,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(246), 1,
      sym_formatting_comment,
    STATE(384), 1,
      sym_for_clause,
    STATE(621), 1,
      sym_update_clause,
    ACTIONS(610), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6957] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      sym_formatting_comment,
    STATE(258), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(612), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6975] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(184), 1,
      aux_sym_and_expression_token1,
    ACTIONS(614), 1,
      aux_sym_or_expression_token1,
    STATE(72), 1,
      aux_sym_and_expression_repeat1,
    STATE(248), 1,
      sym_formatting_comment,
    STATE(432), 1,
      aux_sym_or_expression_repeat1,
  [6997] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(249), 1,
      sym_formatting_comment,
    ACTIONS(70), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(72), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7013] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(250), 1,
      sym_formatting_comment,
    ACTIONS(616), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_offset_clause_token1,
  [7027] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(251), 1,
      sym_formatting_comment,
    ACTIONS(60), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(64), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7043] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(252), 1,
      sym_formatting_comment,
    ACTIONS(66), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(68), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7059] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      sym_formatting_comment,
    STATE(254), 1,
      aux_sym_for_clause_repeat1,
    ACTIONS(618), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [7077] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    STATE(254), 2,
      sym_formatting_comment,
      aux_sym_for_clause_repeat1,
    ACTIONS(622), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [7093] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(629), 1,
      aux_sym_with_data_cat_filter_type_token2,
    STATE(255), 1,
      sym_formatting_comment,
    STATE(574), 1,
      sym_with_data_cat_filter_type,
    ACTIONS(627), 3,
      aux_sym_with_data_cat_filter_type_token1,
      aux_sym_with_data_cat_filter_type_token3,
      aux_sym_with_data_cat_filter_type_token4,
  [7111] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(256), 1,
      sym_formatting_comment,
    ACTIONS(78), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(80), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7127] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(257), 1,
      sym_formatting_comment,
    ACTIONS(74), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(76), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7143] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    STATE(258), 2,
      sym_formatting_comment,
      aux_sym_field_list_repeat1,
    ACTIONS(512), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [7159] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_field_list_repeat1,
    STATE(259), 1,
      sym_formatting_comment,
    ACTIONS(464), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [7177] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(636), 1,
      aux_sym_when_expression_token1,
    STATE(431), 1,
      sym_when_expression,
    ACTIONS(634), 2,
      aux_sym_type_of_clause_token2,
      aux_sym_else_expression_token1,
    STATE(260), 2,
      sym_formatting_comment,
      aux_sym_type_of_clause_repeat1,
  [7195] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_for_clause_repeat1,
    STATE(261), 1,
      sym_formatting_comment,
    ACTIONS(639), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [7213] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(262), 1,
      sym_formatting_comment,
    STATE(696), 1,
      sym_update_clause,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7230] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(263), 1,
      sym_formatting_comment,
    STATE(721), 1,
      sym_update_clause,
    ACTIONS(643), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7247] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(264), 1,
      sym_formatting_comment,
    STATE(722), 1,
      sym_update_clause,
    ACTIONS(645), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7264] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(265), 1,
      sym_formatting_comment,
    STATE(674), 1,
      sym_update_clause,
    ACTIONS(647), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7281] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(266), 1,
      sym_formatting_comment,
    STATE(725), 1,
      sym_update_clause,
    ACTIONS(649), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7298] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(267), 1,
      sym_formatting_comment,
    STATE(707), 1,
      sym_update_clause,
    ACTIONS(651), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7315] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(268), 1,
      sym_formatting_comment,
    ACTIONS(622), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_type_token1,
  [7328] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    ACTIONS(653), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(269), 2,
      sym_formatting_comment,
      aux_sym_update_clause_repeat1,
  [7343] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(658), 1,
      sym_bound_apex_expression,
    ACTIONS(660), 1,
      sym_identifier,
    STATE(251), 1,
      sym_dotted_identifier,
    STATE(270), 1,
      sym_formatting_comment,
    STATE(791), 1,
      sym_field_identifier,
  [7362] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(662), 1,
      sym_identifier,
    STATE(37), 1,
      sym_dotted_identifier,
    STATE(39), 1,
      sym_storage_identifier,
    STATE(54), 1,
      sym_storage_alias,
    STATE(271), 1,
      sym_formatting_comment,
  [7381] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(660), 1,
      sym_identifier,
    ACTIONS(664), 1,
      sym_bound_apex_expression,
    STATE(251), 1,
      sym_dotted_identifier,
    STATE(272), 1,
      sym_formatting_comment,
    STATE(750), 1,
      sym_field_identifier,
  [7400] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(273), 1,
      sym_formatting_comment,
    STATE(460), 1,
      sym_update_clause,
    ACTIONS(666), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7417] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(274), 1,
      sym_formatting_comment,
    STATE(463), 1,
      sym_update_clause,
    ACTIONS(668), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7434] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(275), 1,
      sym_formatting_comment,
    STATE(464), 1,
      sym_update_clause,
    ACTIONS(670), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7451] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(276), 1,
      sym_formatting_comment,
    STATE(469), 1,
      sym_update_clause,
    ACTIONS(672), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7468] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(268), 1,
      sym_for_type,
    STATE(277), 1,
      sym_formatting_comment,
    ACTIONS(674), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [7483] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_update_clause_repeat1,
    STATE(278), 1,
      sym_formatting_comment,
    ACTIONS(676), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7500] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(279), 1,
      sym_formatting_comment,
    STATE(480), 1,
      sym_update_clause,
    ACTIONS(680), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7517] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(280), 1,
      sym_formatting_comment,
    ACTIONS(682), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_type_token1,
  [7530] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(281), 1,
      sym_formatting_comment,
    STATE(490), 1,
      sym_update_clause,
    ACTIONS(684), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7547] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(282), 1,
      sym_formatting_comment,
    STATE(493), 1,
      sym_update_clause,
    ACTIONS(686), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7564] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(283), 1,
      sym_formatting_comment,
    STATE(494), 1,
      sym_update_clause,
    ACTIONS(688), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7581] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_update_clause_repeat1,
    STATE(284), 1,
      sym_formatting_comment,
    ACTIONS(690), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7598] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(285), 1,
      sym_formatting_comment,
    STATE(499), 1,
      sym_update_clause,
    ACTIONS(692), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7615] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(286), 1,
      sym_formatting_comment,
    STATE(507), 1,
      sym_update_clause,
    ACTIONS(694), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7632] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(287), 1,
      sym_formatting_comment,
    STATE(510), 1,
      sym_update_clause,
    ACTIONS(696), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7649] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(288), 1,
      sym_formatting_comment,
    STATE(511), 1,
      sym_update_clause,
    ACTIONS(698), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7666] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(700), 1,
      anon_sym_LPAREN,
    ACTIONS(702), 1,
      sym_bound_apex_expression,
    STATE(289), 1,
      sym_formatting_comment,
    STATE(66), 2,
      sym_subquery,
      sym_comparable_list,
  [7683] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(290), 1,
      sym_formatting_comment,
    STATE(516), 1,
      sym_update_clause,
    ACTIONS(704), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7700] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(291), 1,
      sym_formatting_comment,
    STATE(517), 1,
      sym_update_clause,
    ACTIONS(706), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7717] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(292), 1,
      sym_formatting_comment,
    STATE(520), 1,
      sym_update_clause,
    ACTIONS(708), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7734] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(293), 1,
      sym_formatting_comment,
    STATE(521), 1,
      sym_update_clause,
    ACTIONS(710), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7751] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(294), 1,
      sym_formatting_comment,
    STATE(522), 1,
      sym_update_clause,
    ACTIONS(712), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7768] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(714), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(295), 1,
      sym_formatting_comment,
    STATE(419), 1,
      sym_with_record_visibility_param,
    ACTIONS(716), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [7785] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(296), 1,
      sym_formatting_comment,
    STATE(525), 1,
      sym_update_clause,
    ACTIONS(718), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7802] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(297), 1,
      sym_formatting_comment,
    STATE(526), 1,
      sym_update_clause,
    ACTIONS(720), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7819] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(298), 1,
      sym_formatting_comment,
    STATE(528), 1,
      sym_update_clause,
    ACTIONS(722), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7836] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(299), 1,
      sym_formatting_comment,
    STATE(529), 1,
      sym_update_clause,
    ACTIONS(724), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7853] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(300), 1,
      sym_formatting_comment,
    STATE(535), 1,
      sym_update_clause,
    ACTIONS(726), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7870] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(261), 1,
      sym_for_type,
    STATE(301), 1,
      sym_formatting_comment,
    ACTIONS(674), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [7885] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(302), 1,
      sym_formatting_comment,
    STATE(544), 1,
      sym_update_clause,
    ACTIONS(728), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7902] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(303), 1,
      sym_formatting_comment,
    STATE(547), 1,
      sym_update_clause,
    ACTIONS(730), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7919] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(304), 1,
      sym_formatting_comment,
    STATE(548), 1,
      sym_update_clause,
    ACTIONS(732), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7936] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(305), 1,
      sym_formatting_comment,
    STATE(619), 1,
      sym_update_clause,
    ACTIONS(734), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7953] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(306), 1,
      sym_formatting_comment,
    STATE(552), 1,
      sym_update_clause,
    ACTIONS(736), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7970] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(307), 1,
      sym_formatting_comment,
    STATE(553), 1,
      sym_update_clause,
    ACTIONS(738), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7987] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(308), 1,
      sym_formatting_comment,
    STATE(556), 1,
      sym_update_clause,
    ACTIONS(740), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8004] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(309), 1,
      sym_formatting_comment,
    STATE(557), 1,
      sym_update_clause,
    ACTIONS(742), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8021] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(310), 1,
      sym_formatting_comment,
    ACTIONS(744), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
  [8034] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(311), 1,
      sym_formatting_comment,
    STATE(560), 1,
      sym_update_clause,
    ACTIONS(746), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8051] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(312), 1,
      sym_formatting_comment,
    STATE(561), 1,
      sym_update_clause,
    ACTIONS(748), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8068] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(313), 1,
      sym_formatting_comment,
    STATE(567), 1,
      sym_update_clause,
    ACTIONS(750), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8085] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(314), 1,
      sym_formatting_comment,
    STATE(568), 1,
      sym_update_clause,
    ACTIONS(752), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8102] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(315), 1,
      sym_formatting_comment,
    STATE(570), 1,
      sym_update_clause,
    ACTIONS(754), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8119] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(316), 1,
      sym_formatting_comment,
    STATE(571), 1,
      sym_update_clause,
    ACTIONS(756), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8136] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(317), 1,
      sym_formatting_comment,
    ACTIONS(512), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [8149] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(318), 1,
      sym_formatting_comment,
    STATE(726), 1,
      sym_update_clause,
    ACTIONS(758), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8166] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(714), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(319), 1,
      sym_formatting_comment,
    STATE(576), 1,
      sym_with_record_visibility_param,
    ACTIONS(716), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [8183] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(320), 1,
      sym_formatting_comment,
    STATE(715), 1,
      sym_update_clause,
    ACTIONS(760), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8200] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      aux_sym_from_clause_token1,
    ACTIONS(766), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(768), 1,
      sym_identifier,
    STATE(321), 1,
      sym_formatting_comment,
  [8219] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(322), 1,
      sym_formatting_comment,
    STATE(580), 1,
      sym_update_clause,
    ACTIONS(770), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8236] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(323), 1,
      sym_formatting_comment,
    STATE(581), 1,
      sym_update_clause,
    ACTIONS(772), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8253] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(324), 1,
      sym_formatting_comment,
    STATE(583), 1,
      sym_update_clause,
    ACTIONS(774), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8270] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(325), 1,
      sym_formatting_comment,
    STATE(584), 1,
      sym_update_clause,
    ACTIONS(776), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8287] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(326), 1,
      sym_formatting_comment,
    STATE(587), 1,
      sym_update_clause,
    ACTIONS(778), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8304] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(327), 1,
      sym_formatting_comment,
    STATE(588), 1,
      sym_update_clause,
    ACTIONS(780), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8321] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(328), 1,
      sym_formatting_comment,
    STATE(486), 1,
      sym_update_clause,
    ACTIONS(782), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8338] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(329), 1,
      sym_formatting_comment,
    STATE(577), 1,
      sym_update_clause,
    ACTIONS(784), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8355] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(330), 1,
      sym_formatting_comment,
    STATE(594), 1,
      sym_update_clause,
    ACTIONS(786), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8372] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(331), 1,
      sym_formatting_comment,
    STATE(601), 1,
      sym_update_clause,
    ACTIONS(788), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8389] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(332), 1,
      sym_formatting_comment,
    STATE(505), 1,
      sym_update_clause,
    ACTIONS(790), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8406] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(333), 1,
      sym_formatting_comment,
    STATE(603), 1,
      sym_update_clause,
    ACTIONS(792), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8423] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(334), 1,
      sym_formatting_comment,
    STATE(604), 1,
      sym_update_clause,
    ACTIONS(794), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8440] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(335), 1,
      sym_formatting_comment,
    STATE(537), 1,
      sym_update_clause,
    ACTIONS(796), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8457] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(336), 1,
      sym_formatting_comment,
    STATE(610), 1,
      sym_update_clause,
    ACTIONS(798), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8474] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(337), 1,
      sym_formatting_comment,
    STATE(611), 1,
      sym_update_clause,
    ACTIONS(800), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8491] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(338), 1,
      sym_formatting_comment,
    STATE(514), 1,
      sym_update_clause,
    ACTIONS(802), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8508] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(339), 1,
      sym_formatting_comment,
    STATE(613), 1,
      sym_update_clause,
    ACTIONS(804), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8525] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(340), 1,
      sym_formatting_comment,
    STATE(614), 1,
      sym_update_clause,
    ACTIONS(806), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8542] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(341), 1,
      sym_formatting_comment,
    STATE(617), 1,
      sym_update_clause,
    ACTIONS(808), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8559] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(342), 1,
      sym_formatting_comment,
    STATE(618), 1,
      sym_update_clause,
    ACTIONS(810), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8576] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(343), 1,
      sym_formatting_comment,
    STATE(518), 1,
      sym_update_clause,
    ACTIONS(812), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8593] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(662), 1,
      sym_identifier,
    STATE(28), 1,
      sym_storage_identifier,
    STATE(37), 1,
      sym_dotted_identifier,
    STATE(43), 1,
      sym_storage_alias,
    STATE(344), 1,
      sym_formatting_comment,
  [8612] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(345), 1,
      sym_formatting_comment,
    STATE(622), 1,
      sym_update_clause,
    ACTIONS(814), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8629] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(346), 1,
      sym_formatting_comment,
    STATE(623), 1,
      sym_update_clause,
    ACTIONS(816), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8646] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(347), 1,
      sym_formatting_comment,
    STATE(626), 1,
      sym_update_clause,
    ACTIONS(818), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8663] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(348), 1,
      sym_formatting_comment,
    STATE(627), 1,
      sym_update_clause,
    ACTIONS(820), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8680] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(349), 1,
      sym_formatting_comment,
    STATE(628), 1,
      sym_update_clause,
    ACTIONS(822), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8697] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(350), 1,
      sym_formatting_comment,
    STATE(629), 1,
      sym_update_clause,
    ACTIONS(824), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8714] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(351), 1,
      sym_formatting_comment,
    STATE(630), 1,
      sym_update_clause,
    ACTIONS(826), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8731] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(352), 1,
      sym_formatting_comment,
    STATE(633), 1,
      sym_update_clause,
    ACTIONS(828), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8748] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(353), 1,
      sym_formatting_comment,
    STATE(634), 1,
      sym_update_clause,
    ACTIONS(830), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8765] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(354), 1,
      sym_formatting_comment,
    STATE(637), 1,
      sym_update_clause,
    ACTIONS(832), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8782] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(355), 1,
      sym_formatting_comment,
    STATE(638), 1,
      sym_update_clause,
    ACTIONS(834), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8799] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(356), 1,
      sym_formatting_comment,
    STATE(539), 1,
      sym_update_clause,
    ACTIONS(836), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8816] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(357), 1,
      sym_formatting_comment,
    STATE(644), 1,
      sym_update_clause,
    ACTIONS(838), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8833] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(358), 1,
      sym_formatting_comment,
    STATE(645), 1,
      sym_update_clause,
    ACTIONS(840), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8850] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(359), 1,
      sym_formatting_comment,
    STATE(714), 1,
      sym_update_clause,
    ACTIONS(842), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8867] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(360), 1,
      sym_formatting_comment,
    STATE(648), 1,
      sym_update_clause,
    ACTIONS(844), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8884] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(361), 1,
      sym_formatting_comment,
    STATE(649), 1,
      sym_update_clause,
    ACTIONS(846), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8901] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(362), 1,
      sym_formatting_comment,
    STATE(650), 1,
      sym_update_clause,
    ACTIONS(848), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8918] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(363), 1,
      sym_formatting_comment,
    STATE(651), 1,
      sym_update_clause,
    ACTIONS(850), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8935] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(364), 1,
      sym_formatting_comment,
    STATE(545), 1,
      sym_update_clause,
    ACTIONS(852), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8952] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(365), 1,
      sym_formatting_comment,
    STATE(654), 1,
      sym_update_clause,
    ACTIONS(854), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8969] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(366), 1,
      sym_formatting_comment,
    STATE(655), 1,
      sym_update_clause,
    ACTIONS(856), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8986] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(367), 1,
      sym_formatting_comment,
    STATE(549), 1,
      sym_update_clause,
    ACTIONS(858), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9003] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(368), 1,
      sym_formatting_comment,
    STATE(660), 1,
      sym_update_clause,
    ACTIONS(860), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9020] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(369), 1,
      sym_formatting_comment,
    STATE(661), 1,
      sym_update_clause,
    ACTIONS(862), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9037] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(370), 1,
      sym_formatting_comment,
    STATE(662), 1,
      sym_update_clause,
    ACTIONS(864), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9054] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(371), 1,
      sym_formatting_comment,
    STATE(665), 1,
      sym_update_clause,
    ACTIONS(866), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9071] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(372), 1,
      sym_formatting_comment,
    STATE(666), 1,
      sym_update_clause,
    ACTIONS(868), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9088] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(373), 1,
      sym_formatting_comment,
    STATE(563), 1,
      sym_update_clause,
    ACTIONS(870), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9105] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(374), 1,
      sym_formatting_comment,
    STATE(669), 1,
      sym_update_clause,
    ACTIONS(872), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9122] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(375), 1,
      sym_formatting_comment,
    STATE(670), 1,
      sym_update_clause,
    ACTIONS(874), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9139] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(376), 1,
      sym_formatting_comment,
    STATE(640), 1,
      sym_update_clause,
    ACTIONS(876), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9156] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(377), 1,
      sym_formatting_comment,
    STATE(676), 1,
      sym_update_clause,
    ACTIONS(878), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9173] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(378), 1,
      sym_formatting_comment,
    STATE(677), 1,
      sym_update_clause,
    ACTIONS(880), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9190] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(379), 1,
      sym_formatting_comment,
    STATE(679), 1,
      sym_update_clause,
    ACTIONS(882), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9207] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(380), 1,
      sym_formatting_comment,
    STATE(680), 1,
      sym_update_clause,
    ACTIONS(884), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9224] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(381), 1,
      sym_formatting_comment,
    STATE(681), 1,
      sym_update_clause,
    ACTIONS(886), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9241] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(382), 1,
      sym_formatting_comment,
    STATE(682), 1,
      sym_update_clause,
    ACTIONS(888), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9258] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(890), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(893), 1,
      aux_sym_select_clause_token1,
    STATE(471), 1,
      sym_header_comment,
    STATE(383), 2,
      sym_formatting_comment,
      aux_sym_source_file_repeat1,
  [9275] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(384), 1,
      sym_formatting_comment,
    STATE(685), 1,
      sym_update_clause,
    ACTIONS(895), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9292] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(385), 1,
      sym_formatting_comment,
    STATE(686), 1,
      sym_update_clause,
    ACTIONS(897), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9309] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(386), 1,
      sym_formatting_comment,
    STATE(687), 1,
      sym_update_clause,
    ACTIONS(899), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9326] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(387), 1,
      sym_formatting_comment,
    STATE(688), 1,
      sym_update_clause,
    ACTIONS(901), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9343] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(388), 1,
      sym_formatting_comment,
    STATE(689), 1,
      sym_update_clause,
    ACTIONS(903), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9360] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(389), 1,
      sym_formatting_comment,
    STATE(691), 1,
      sym_update_clause,
    ACTIONS(905), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9377] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(390), 1,
      sym_formatting_comment,
    STATE(692), 1,
      sym_update_clause,
    ACTIONS(907), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9394] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(391), 1,
      sym_formatting_comment,
    STATE(693), 1,
      sym_update_clause,
    ACTIONS(909), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9411] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(392), 1,
      sym_formatting_comment,
    STATE(599), 1,
      sym_update_clause,
    ACTIONS(911), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9428] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(393), 1,
      sym_formatting_comment,
    STATE(697), 1,
      sym_update_clause,
    ACTIONS(913), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9445] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(394), 1,
      sym_formatting_comment,
    STATE(698), 1,
      sym_update_clause,
    ACTIONS(915), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9462] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(395), 1,
      sym_formatting_comment,
    STATE(701), 1,
      sym_update_clause,
    ACTIONS(917), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9479] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(396), 1,
      sym_formatting_comment,
    STATE(702), 1,
      sym_update_clause,
    ACTIONS(919), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9496] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(397), 1,
      sym_formatting_comment,
    STATE(703), 1,
      sym_update_clause,
    ACTIONS(921), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9513] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(398), 1,
      sym_formatting_comment,
    STATE(704), 1,
      sym_update_clause,
    ACTIONS(923), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9530] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(399), 1,
      sym_formatting_comment,
    STATE(705), 1,
      sym_update_clause,
    ACTIONS(925), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9547] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(400), 1,
      sym_formatting_comment,
    STATE(631), 1,
      sym_update_clause,
    ACTIONS(927), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9564] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(401), 1,
      sym_formatting_comment,
    STATE(642), 1,
      sym_update_clause,
    ACTIONS(929), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9581] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(402), 1,
      sym_formatting_comment,
    STATE(646), 1,
      sym_update_clause,
    ACTIONS(931), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9598] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(403), 1,
      sym_formatting_comment,
    STATE(731), 1,
      sym_update_clause,
    ACTIONS(933), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9615] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(404), 1,
      sym_formatting_comment,
    STATE(671), 1,
      sym_update_clause,
    ACTIONS(935), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9632] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(405), 1,
      sym_formatting_comment,
    STATE(710), 1,
      sym_update_clause,
    ACTIONS(937), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9649] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(406), 1,
      sym_formatting_comment,
    STATE(735), 1,
      sym_update_clause,
    ACTIONS(939), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9666] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(941), 1,
      anon_sym_LPAREN,
    ACTIONS(943), 1,
      sym_bound_apex_expression,
    STATE(407), 1,
      sym_formatting_comment,
    STATE(442), 2,
      sym_subquery,
      sym_comparable_list,
  [9683] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_for_type_token1,
    STATE(408), 1,
      sym_formatting_comment,
    STATE(713), 1,
      sym_update_clause,
    ACTIONS(945), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9700] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(409), 1,
      sym_formatting_comment,
    STATE(746), 1,
      sym_fields_type,
    ACTIONS(947), 3,
      aux_sym_fields_type_token1,
      aux_sym_fields_type_token2,
      aux_sym_fields_type_token3,
  [9715] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    STATE(410), 2,
      sym_formatting_comment,
      aux_sym_function_expression_repeat1,
  [9729] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(957), 1,
      aux_sym_from_clause_token1,
    STATE(411), 2,
      sym_formatting_comment,
      aux_sym_select_clause_repeat1,
  [9743] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(412), 1,
      sym_formatting_comment,
    STATE(451), 1,
      aux_sym_comparable_list_repeat1,
  [9759] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(413), 1,
      sym_formatting_comment,
    STATE(575), 1,
      sym_boolean,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [9773] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    STATE(414), 2,
      sym_formatting_comment,
      aux_sym_comparable_list_repeat1,
  [9787] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(415), 1,
      sym_formatting_comment,
    STATE(422), 1,
      aux_sym_with_data_cat_filter_repeat1,
  [9803] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(416), 1,
      sym_formatting_comment,
    ACTIONS(972), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9815] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(974), 1,
      anon_sym_RPAREN,
    ACTIONS(976), 1,
      anon_sym_COMMA,
    STATE(417), 1,
      sym_formatting_comment,
    STATE(454), 1,
      aux_sym_with_record_visibility_expression_repeat1,
  [9831] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    STATE(410), 1,
      aux_sym_function_expression_repeat1,
    STATE(418), 1,
      sym_formatting_comment,
  [9847] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(976), 1,
      anon_sym_COMMA,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_with_record_visibility_expression_repeat1,
    STATE(419), 1,
      sym_formatting_comment,
  [9863] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_select_clause_token1,
    STATE(420), 1,
      sym_formatting_comment,
    STATE(470), 1,
      sym_select_clause,
    STATE(747), 1,
      sym_soql_query_body,
  [9879] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(984), 1,
      anon_sym_COMMA,
    ACTIONS(986), 1,
      aux_sym_from_clause_token1,
    STATE(411), 1,
      aux_sym_select_clause_repeat1,
    STATE(421), 1,
      sym_formatting_comment,
  [9895] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    STATE(422), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_filter_repeat1,
  [9909] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(423), 1,
      sym_formatting_comment,
    STATE(428), 1,
      sym_update_type,
    ACTIONS(993), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [9923] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      aux_sym_function_expression_repeat1,
    STATE(424), 1,
      sym_formatting_comment,
  [9939] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(997), 1,
      sym_identifier,
    STATE(259), 1,
      sym_dotted_identifier,
    STATE(425), 1,
      sym_formatting_comment,
    STATE(767), 1,
      sym_field_list,
  [9955] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(984), 1,
      anon_sym_COMMA,
    ACTIONS(999), 1,
      aux_sym_from_clause_token1,
    STATE(421), 1,
      aux_sym_select_clause_repeat1,
    STATE(426), 1,
      sym_formatting_comment,
  [9971] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(427), 1,
      sym_formatting_comment,
    ACTIONS(170), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [9983] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(428), 1,
      sym_formatting_comment,
    ACTIONS(653), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9995] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_with_data_cat_filter_repeat1,
    STATE(429), 1,
      sym_formatting_comment,
  [10011] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(284), 1,
      sym_update_type,
    STATE(430), 1,
      sym_formatting_comment,
    ACTIONS(993), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [10025] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(431), 1,
      sym_formatting_comment,
    ACTIONS(1003), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [10037] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    ACTIONS(614), 1,
      aux_sym_or_expression_token1,
    STATE(432), 1,
      sym_formatting_comment,
    STATE(436), 1,
      aux_sym_or_expression_repeat1,
  [10053] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(433), 1,
      sym_formatting_comment,
    ACTIONS(228), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10065] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(434), 1,
      sym_formatting_comment,
    ACTIONS(240), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10077] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(435), 1,
      sym_formatting_comment,
    ACTIONS(252), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10089] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(1005), 1,
      aux_sym_or_expression_token1,
    STATE(436), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
  [10103] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(437), 1,
      sym_formatting_comment,
    ACTIONS(218), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10115] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(438), 1,
      sym_formatting_comment,
    ACTIONS(224), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10127] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(439), 1,
      sym_formatting_comment,
    ACTIONS(248), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10139] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(440), 1,
      sym_formatting_comment,
    ACTIONS(188), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10151] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(441), 1,
      sym_formatting_comment,
    ACTIONS(196), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10163] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(442), 1,
      sym_formatting_comment,
    ACTIONS(244), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10175] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(443), 1,
      sym_formatting_comment,
    ACTIONS(200), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10187] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(444), 1,
      sym_formatting_comment,
    ACTIONS(232), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10199] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_DOT,
    STATE(171), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(445), 1,
      sym_formatting_comment,
  [10215] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(446), 1,
      sym_formatting_comment,
    ACTIONS(236), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10227] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      sym_formatting_comment,
    STATE(448), 1,
      aux_sym_function_expression_repeat1,
  [10243] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_function_expression_repeat1,
    STATE(448), 1,
      sym_formatting_comment,
  [10259] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(997), 1,
      sym_identifier,
    STATE(259), 1,
      sym_dotted_identifier,
    STATE(449), 1,
      sym_formatting_comment,
    STATE(450), 1,
      sym_field_list,
  [10275] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(450), 1,
      sym_formatting_comment,
    ACTIONS(1012), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [10287] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_comparable_list_repeat1,
    STATE(451), 1,
      sym_formatting_comment,
  [10303] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
    STATE(452), 1,
      sym_formatting_comment,
    STATE(453), 1,
      aux_sym_comparable_list_repeat1,
  [10319] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_comparable_list_repeat1,
    STATE(453), 1,
      sym_formatting_comment,
  [10335] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1020), 1,
      anon_sym_RPAREN,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    STATE(454), 2,
      sym_formatting_comment,
      aux_sym_with_record_visibility_expression_repeat1,
  [10349] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(455), 1,
      sym_formatting_comment,
    ACTIONS(266), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [10361] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(456), 1,
      sym_formatting_comment,
    ACTIONS(1025), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10372] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(457), 1,
      sym_formatting_comment,
    ACTIONS(1027), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10383] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(458), 1,
      sym_formatting_comment,
    ACTIONS(1029), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [10394] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(459), 1,
      sym_formatting_comment,
    ACTIONS(1031), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10405] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(460), 1,
      sym_formatting_comment,
    ACTIONS(1033), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10416] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(461), 1,
      sym_formatting_comment,
    ACTIONS(1035), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10427] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(462), 1,
      sym_formatting_comment,
    ACTIONS(1037), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10438] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(463), 1,
      sym_formatting_comment,
    ACTIONS(1039), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10449] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(464), 1,
      sym_formatting_comment,
    ACTIONS(1041), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10460] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(465), 1,
      sym_formatting_comment,
    ACTIONS(1043), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10471] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(466), 1,
      sym_formatting_comment,
    ACTIONS(1045), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10482] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(467), 1,
      sym_formatting_comment,
    ACTIONS(1047), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10493] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(468), 1,
      sym_formatting_comment,
    ACTIONS(1049), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10504] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(469), 1,
      sym_formatting_comment,
    ACTIONS(1051), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10515] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1053), 1,
      aux_sym_from_clause_token1,
    STATE(17), 1,
      sym_from_clause,
    STATE(470), 1,
      sym_formatting_comment,
  [10528] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1055), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1057), 1,
      aux_sym_select_clause_token1,
    STATE(471), 1,
      sym_formatting_comment,
  [10541] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(472), 1,
      sym_formatting_comment,
    ACTIONS(1059), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10552] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(473), 1,
      sym_formatting_comment,
    ACTIONS(1061), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10563] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(474), 1,
      sym_formatting_comment,
    ACTIONS(1063), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10574] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(475), 1,
      sym_formatting_comment,
    ACTIONS(1065), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10585] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1067), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1069), 1,
      aux_sym_select_clause_token1,
    STATE(476), 1,
      sym_formatting_comment,
  [10598] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(477), 1,
      sym_formatting_comment,
    ACTIONS(1071), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10609] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(478), 1,
      sym_formatting_comment,
    ACTIONS(1073), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10620] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(479), 1,
      sym_formatting_comment,
    ACTIONS(1075), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10631] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(480), 1,
      sym_formatting_comment,
    ACTIONS(1077), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10642] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(481), 1,
      sym_formatting_comment,
    ACTIONS(1079), 2,
      anon_sym_LPAREN,
      sym_bound_apex_expression,
  [10653] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(482), 1,
      sym_formatting_comment,
    ACTIONS(1081), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10664] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(483), 1,
      sym_formatting_comment,
    ACTIONS(1083), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10675] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(484), 1,
      sym_formatting_comment,
    ACTIONS(1085), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10686] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(485), 1,
      sym_formatting_comment,
    ACTIONS(1087), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10697] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(486), 1,
      sym_formatting_comment,
    ACTIONS(1089), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10708] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(487), 1,
      sym_formatting_comment,
    ACTIONS(1091), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [10719] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(488), 1,
      sym_formatting_comment,
    ACTIONS(1093), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10730] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(489), 1,
      sym_formatting_comment,
    ACTIONS(1095), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10741] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(490), 1,
      sym_formatting_comment,
    ACTIONS(1097), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10752] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1099), 1,
      sym_identifier,
    STATE(217), 1,
      sym_dotted_identifier,
    STATE(491), 1,
      sym_formatting_comment,
  [10765] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(492), 1,
      sym_formatting_comment,
    ACTIONS(1101), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10776] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(493), 1,
      sym_formatting_comment,
    ACTIONS(1103), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10787] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(494), 1,
      sym_formatting_comment,
    ACTIONS(1105), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10798] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(495), 1,
      sym_formatting_comment,
    ACTIONS(1107), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10809] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(496), 1,
      sym_formatting_comment,
    ACTIONS(1109), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10820] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(497), 1,
      sym_formatting_comment,
    ACTIONS(1111), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10831] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(498), 1,
      sym_formatting_comment,
    ACTIONS(1113), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10842] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(499), 1,
      sym_formatting_comment,
    ACTIONS(1115), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10853] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(500), 1,
      sym_formatting_comment,
    ACTIONS(957), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [10864] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(501), 1,
      sym_formatting_comment,
    ACTIONS(1117), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10875] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(502), 1,
      sym_formatting_comment,
    ACTIONS(1119), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10886] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(503), 1,
      sym_formatting_comment,
    ACTIONS(1121), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10897] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(504), 1,
      sym_formatting_comment,
    ACTIONS(1123), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10908] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(505), 1,
      sym_formatting_comment,
    ACTIONS(1125), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10919] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(506), 1,
      sym_formatting_comment,
    ACTIONS(1127), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10930] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(507), 1,
      sym_formatting_comment,
    ACTIONS(1129), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10941] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(508), 1,
      sym_formatting_comment,
    ACTIONS(1131), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10952] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(509), 1,
      sym_formatting_comment,
    ACTIONS(1133), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10963] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(510), 1,
      sym_formatting_comment,
    ACTIONS(1135), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10974] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(511), 1,
      sym_formatting_comment,
    ACTIONS(1137), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10985] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(512), 1,
      sym_formatting_comment,
    ACTIONS(1139), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [10996] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(513), 1,
      sym_formatting_comment,
    ACTIONS(1141), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11007] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(514), 1,
      sym_formatting_comment,
    ACTIONS(1143), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11018] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(515), 1,
      sym_formatting_comment,
    ACTIONS(1145), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11029] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(516), 1,
      sym_formatting_comment,
    ACTIONS(1147), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11040] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(517), 1,
      sym_formatting_comment,
    ACTIONS(1149), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11051] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(518), 1,
      sym_formatting_comment,
    ACTIONS(1151), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11062] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(519), 1,
      sym_formatting_comment,
    ACTIONS(1153), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11073] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(520), 1,
      sym_formatting_comment,
    ACTIONS(1155), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11084] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(521), 1,
      sym_formatting_comment,
    ACTIONS(1157), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11095] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(522), 1,
      sym_formatting_comment,
    ACTIONS(1159), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11106] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(523), 1,
      sym_formatting_comment,
    ACTIONS(1161), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [11117] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(524), 1,
      sym_formatting_comment,
    ACTIONS(1163), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11128] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(525), 1,
      sym_formatting_comment,
    ACTIONS(1165), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11139] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(526), 1,
      sym_formatting_comment,
    ACTIONS(1167), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11150] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(527), 1,
      sym_formatting_comment,
    ACTIONS(1169), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11161] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(528), 1,
      sym_formatting_comment,
    ACTIONS(1171), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11172] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(529), 1,
      sym_formatting_comment,
    ACTIONS(1173), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11183] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(530), 1,
      sym_formatting_comment,
    ACTIONS(1175), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11194] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(531), 1,
      sym_formatting_comment,
    ACTIONS(1177), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11205] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(532), 1,
      sym_formatting_comment,
    ACTIONS(1179), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11216] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1181), 1,
      sym_identifier,
    STATE(317), 1,
      sym_dotted_identifier,
    STATE(533), 1,
      sym_formatting_comment,
  [11229] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(534), 1,
      sym_formatting_comment,
    ACTIONS(1183), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11240] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(535), 1,
      sym_formatting_comment,
    ACTIONS(1185), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11251] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(536), 1,
      sym_formatting_comment,
    ACTIONS(1187), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11262] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(537), 1,
      sym_formatting_comment,
    ACTIONS(1189), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11273] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(538), 1,
      sym_formatting_comment,
    ACTIONS(1191), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11284] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(539), 1,
      sym_formatting_comment,
    ACTIONS(1193), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11295] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(540), 1,
      sym_formatting_comment,
    ACTIONS(1195), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11306] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(541), 1,
      sym_formatting_comment,
    ACTIONS(1197), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11317] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(542), 1,
      sym_formatting_comment,
    ACTIONS(1199), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11328] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(543), 1,
      sym_formatting_comment,
    ACTIONS(1201), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11339] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(544), 1,
      sym_formatting_comment,
    ACTIONS(1203), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11350] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(545), 1,
      sym_formatting_comment,
    ACTIONS(1205), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11361] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(546), 1,
      sym_formatting_comment,
    ACTIONS(1207), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11372] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(547), 1,
      sym_formatting_comment,
    ACTIONS(1209), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11383] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(548), 1,
      sym_formatting_comment,
    ACTIONS(1211), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11394] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(549), 1,
      sym_formatting_comment,
    ACTIONS(1213), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11405] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(550), 1,
      sym_formatting_comment,
    ACTIONS(1215), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11416] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(551), 1,
      sym_formatting_comment,
    ACTIONS(1217), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11427] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(552), 1,
      sym_formatting_comment,
    ACTIONS(1219), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11438] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(553), 1,
      sym_formatting_comment,
    ACTIONS(1221), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11449] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(554), 1,
      sym_formatting_comment,
    ACTIONS(1223), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11460] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(555), 1,
      sym_formatting_comment,
    ACTIONS(1225), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11471] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(556), 1,
      sym_formatting_comment,
    ACTIONS(1227), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11482] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(557), 1,
      sym_formatting_comment,
    ACTIONS(1229), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11493] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(558), 1,
      sym_formatting_comment,
    ACTIONS(1231), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11504] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(559), 1,
      sym_formatting_comment,
    ACTIONS(1233), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11515] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(560), 1,
      sym_formatting_comment,
    ACTIONS(1235), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11526] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(561), 1,
      sym_formatting_comment,
    ACTIONS(1237), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11537] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(562), 1,
      sym_formatting_comment,
    ACTIONS(1239), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11548] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(563), 1,
      sym_formatting_comment,
    ACTIONS(1241), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11559] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(564), 1,
      sym_formatting_comment,
    ACTIONS(1243), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11570] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(565), 1,
      sym_formatting_comment,
    ACTIONS(1245), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [11581] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(566), 1,
      sym_formatting_comment,
    ACTIONS(1247), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11592] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(567), 1,
      sym_formatting_comment,
    ACTIONS(1249), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11603] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(568), 1,
      sym_formatting_comment,
    ACTIONS(1251), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11614] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(569), 1,
      sym_formatting_comment,
    ACTIONS(1253), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11625] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(570), 1,
      sym_formatting_comment,
    ACTIONS(1255), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11636] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(571), 1,
      sym_formatting_comment,
    ACTIONS(1257), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11647] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(572), 1,
      sym_formatting_comment,
    ACTIONS(1259), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11658] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(573), 1,
      sym_formatting_comment,
    ACTIONS(1261), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11669] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1263), 1,
      anon_sym_LPAREN,
    ACTIONS(1265), 1,
      sym_identifier,
    STATE(574), 1,
      sym_formatting_comment,
  [11682] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(575), 1,
      sym_formatting_comment,
    ACTIONS(1267), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11693] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(576), 1,
      sym_formatting_comment,
    ACTIONS(1020), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11704] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(577), 1,
      sym_formatting_comment,
    ACTIONS(1269), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11715] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(578), 1,
      sym_formatting_comment,
    ACTIONS(1271), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11726] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1273), 1,
      sym_identifier,
    STATE(106), 1,
      sym_with_data_cat_filter,
    STATE(579), 1,
      sym_formatting_comment,
  [11739] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(580), 1,
      sym_formatting_comment,
    ACTIONS(1275), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11750] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(581), 1,
      sym_formatting_comment,
    ACTIONS(1277), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11761] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(582), 1,
      sym_formatting_comment,
    ACTIONS(1279), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11772] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(583), 1,
      sym_formatting_comment,
    ACTIONS(1281), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11783] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(584), 1,
      sym_formatting_comment,
    ACTIONS(1283), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11794] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(585), 1,
      sym_formatting_comment,
    ACTIONS(762), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [11805] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(586), 1,
      sym_formatting_comment,
    ACTIONS(1285), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11816] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(587), 1,
      sym_formatting_comment,
    ACTIONS(1287), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11827] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(588), 1,
      sym_formatting_comment,
    ACTIONS(1289), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11838] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(589), 1,
      sym_formatting_comment,
    ACTIONS(1291), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11849] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(590), 1,
      sym_formatting_comment,
    ACTIONS(1293), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11860] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(591), 1,
      sym_formatting_comment,
    ACTIONS(1295), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11871] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(592), 1,
      sym_formatting_comment,
    ACTIONS(1297), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [11882] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(593), 1,
      sym_formatting_comment,
    ACTIONS(1299), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11893] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(594), 1,
      sym_formatting_comment,
    ACTIONS(1301), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11904] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(595), 1,
      sym_formatting_comment,
    ACTIONS(1303), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11915] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(596), 1,
      sym_formatting_comment,
    ACTIONS(1305), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11926] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(597), 1,
      sym_formatting_comment,
    ACTIONS(1307), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11937] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(598), 1,
      sym_formatting_comment,
    ACTIONS(1309), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11948] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(599), 1,
      sym_formatting_comment,
    ACTIONS(1311), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11959] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(600), 1,
      sym_formatting_comment,
    ACTIONS(1313), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11970] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(601), 1,
      sym_formatting_comment,
    ACTIONS(1315), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11981] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(602), 1,
      sym_formatting_comment,
    ACTIONS(1317), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [11992] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(603), 1,
      sym_formatting_comment,
    ACTIONS(1319), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12003] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(604), 1,
      sym_formatting_comment,
    ACTIONS(1321), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12014] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1273), 1,
      sym_identifier,
    STATE(81), 1,
      sym_with_data_cat_filter,
    STATE(605), 1,
      sym_formatting_comment,
  [12027] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(606), 1,
      sym_formatting_comment,
    ACTIONS(1323), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12038] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(607), 1,
      sym_formatting_comment,
    ACTIONS(1325), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12049] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(608), 1,
      sym_formatting_comment,
    ACTIONS(1327), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12060] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(609), 1,
      sym_formatting_comment,
    ACTIONS(1329), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12071] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(610), 1,
      sym_formatting_comment,
    ACTIONS(1331), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12082] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(611), 1,
      sym_formatting_comment,
    ACTIONS(1333), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12093] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(612), 1,
      sym_formatting_comment,
    ACTIONS(1335), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12104] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(613), 1,
      sym_formatting_comment,
    ACTIONS(1337), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12115] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(614), 1,
      sym_formatting_comment,
    ACTIONS(1339), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12126] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(615), 1,
      sym_formatting_comment,
    ACTIONS(1341), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12137] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(616), 1,
      sym_formatting_comment,
    ACTIONS(1343), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12148] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(617), 1,
      sym_formatting_comment,
    ACTIONS(1345), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12159] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(618), 1,
      sym_formatting_comment,
    ACTIONS(1347), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12170] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(619), 1,
      sym_formatting_comment,
    ACTIONS(1349), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12181] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(620), 1,
      sym_formatting_comment,
    ACTIONS(1351), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12192] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(621), 1,
      sym_formatting_comment,
    ACTIONS(1353), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12203] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(622), 1,
      sym_formatting_comment,
    ACTIONS(1355), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12214] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(623), 1,
      sym_formatting_comment,
    ACTIONS(1357), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12225] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(624), 1,
      sym_formatting_comment,
    ACTIONS(1359), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12236] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(625), 1,
      sym_formatting_comment,
    ACTIONS(1361), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12247] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(626), 1,
      sym_formatting_comment,
    ACTIONS(1363), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12258] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(627), 1,
      sym_formatting_comment,
    ACTIONS(1365), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12269] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(628), 1,
      sym_formatting_comment,
    ACTIONS(1367), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12280] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(629), 1,
      sym_formatting_comment,
    ACTIONS(1369), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12291] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(630), 1,
      sym_formatting_comment,
    ACTIONS(1371), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12302] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(631), 1,
      sym_formatting_comment,
    ACTIONS(1373), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12313] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(632), 1,
      sym_formatting_comment,
    ACTIONS(1375), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12324] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(633), 1,
      sym_formatting_comment,
    ACTIONS(1377), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12335] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(634), 1,
      sym_formatting_comment,
    ACTIONS(1379), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12346] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(635), 1,
      sym_formatting_comment,
    ACTIONS(1381), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12357] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(636), 1,
      sym_formatting_comment,
    ACTIONS(1383), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12368] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(637), 1,
      sym_formatting_comment,
    ACTIONS(1385), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12379] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(638), 1,
      sym_formatting_comment,
    ACTIONS(1387), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12390] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(639), 1,
      sym_formatting_comment,
    ACTIONS(1389), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12401] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(640), 1,
      sym_formatting_comment,
    ACTIONS(1391), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12412] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(641), 1,
      sym_formatting_comment,
    ACTIONS(1393), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12423] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(642), 1,
      sym_formatting_comment,
    ACTIONS(1395), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12434] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(643), 1,
      sym_formatting_comment,
    ACTIONS(1397), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12445] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(644), 1,
      sym_formatting_comment,
    ACTIONS(1399), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12456] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(645), 1,
      sym_formatting_comment,
    ACTIONS(1401), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12467] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(646), 1,
      sym_formatting_comment,
    ACTIONS(1403), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12478] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(647), 1,
      sym_formatting_comment,
    ACTIONS(1405), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12489] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(648), 1,
      sym_formatting_comment,
    ACTIONS(1407), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12500] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(649), 1,
      sym_formatting_comment,
    ACTIONS(1409), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12511] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(650), 1,
      sym_formatting_comment,
    ACTIONS(1411), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12522] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(651), 1,
      sym_formatting_comment,
    ACTIONS(1413), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12533] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(652), 1,
      sym_formatting_comment,
    ACTIONS(949), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12544] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(653), 1,
      sym_formatting_comment,
    ACTIONS(1415), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12555] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(654), 1,
      sym_formatting_comment,
    ACTIONS(1417), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12566] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(655), 1,
      sym_formatting_comment,
    ACTIONS(1419), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12577] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(656), 1,
      sym_formatting_comment,
    ACTIONS(963), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12588] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(657), 1,
      sym_formatting_comment,
    ACTIONS(1421), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12599] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(658), 1,
      sym_formatting_comment,
    ACTIONS(1423), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [12610] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(659), 1,
      sym_formatting_comment,
    ACTIONS(1425), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12621] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(660), 1,
      sym_formatting_comment,
    ACTIONS(1427), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12632] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(661), 1,
      sym_formatting_comment,
    ACTIONS(1429), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12643] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(662), 1,
      sym_formatting_comment,
    ACTIONS(1431), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12654] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(663), 1,
      sym_formatting_comment,
    ACTIONS(1433), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12665] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(664), 1,
      sym_formatting_comment,
    ACTIONS(1435), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12676] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(665), 1,
      sym_formatting_comment,
    ACTIONS(1437), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12687] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(666), 1,
      sym_formatting_comment,
    ACTIONS(1439), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12698] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(667), 1,
      sym_formatting_comment,
    ACTIONS(1441), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12709] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(668), 1,
      sym_formatting_comment,
    ACTIONS(1443), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12720] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(669), 1,
      sym_formatting_comment,
    ACTIONS(1445), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12731] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(670), 1,
      sym_formatting_comment,
    ACTIONS(1447), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12742] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(671), 1,
      sym_formatting_comment,
    ACTIONS(1449), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12753] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(672), 1,
      sym_formatting_comment,
    ACTIONS(1451), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12764] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(673), 1,
      sym_formatting_comment,
    ACTIONS(1453), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12775] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(674), 1,
      sym_formatting_comment,
    ACTIONS(1455), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12786] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(675), 1,
      sym_formatting_comment,
    ACTIONS(1457), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12797] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(676), 1,
      sym_formatting_comment,
    ACTIONS(1459), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12808] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(677), 1,
      sym_formatting_comment,
    ACTIONS(1461), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12819] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(678), 1,
      sym_formatting_comment,
    ACTIONS(1463), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12830] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(679), 1,
      sym_formatting_comment,
    ACTIONS(1465), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12841] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(680), 1,
      sym_formatting_comment,
    ACTIONS(1467), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12852] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(681), 1,
      sym_formatting_comment,
    ACTIONS(1469), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12863] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(682), 1,
      sym_formatting_comment,
    ACTIONS(1471), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12874] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(683), 1,
      sym_formatting_comment,
    ACTIONS(1473), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12885] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(684), 1,
      sym_formatting_comment,
    ACTIONS(1475), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12896] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(685), 1,
      sym_formatting_comment,
    ACTIONS(1477), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12907] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(686), 1,
      sym_formatting_comment,
    ACTIONS(1479), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12918] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(687), 1,
      sym_formatting_comment,
    ACTIONS(1481), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12929] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(688), 1,
      sym_formatting_comment,
    ACTIONS(1483), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12940] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(689), 1,
      sym_formatting_comment,
    ACTIONS(1485), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12951] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(690), 1,
      sym_formatting_comment,
    ACTIONS(1487), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12962] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(691), 1,
      sym_formatting_comment,
    ACTIONS(1489), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12973] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(692), 1,
      sym_formatting_comment,
    ACTIONS(1491), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12984] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(693), 1,
      sym_formatting_comment,
    ACTIONS(1493), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [12995] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(694), 1,
      sym_formatting_comment,
    ACTIONS(988), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13006] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(695), 1,
      sym_formatting_comment,
    ACTIONS(1495), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13017] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(696), 1,
      sym_formatting_comment,
    ACTIONS(1497), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13028] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(697), 1,
      sym_formatting_comment,
    ACTIONS(1499), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13039] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(698), 1,
      sym_formatting_comment,
    ACTIONS(1501), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13050] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(699), 1,
      sym_formatting_comment,
    ACTIONS(1503), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13061] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(700), 1,
      sym_formatting_comment,
    ACTIONS(1505), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13072] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(701), 1,
      sym_formatting_comment,
    ACTIONS(1507), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13083] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(702), 1,
      sym_formatting_comment,
    ACTIONS(1509), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13094] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(703), 1,
      sym_formatting_comment,
    ACTIONS(1511), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13105] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(704), 1,
      sym_formatting_comment,
    ACTIONS(1513), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13116] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(705), 1,
      sym_formatting_comment,
    ACTIONS(1515), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13127] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(706), 1,
      sym_formatting_comment,
    ACTIONS(1517), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13138] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(707), 1,
      sym_formatting_comment,
    ACTIONS(1519), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13149] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(708), 1,
      sym_formatting_comment,
    ACTIONS(1521), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13160] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(709), 1,
      sym_formatting_comment,
    ACTIONS(1523), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13171] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(710), 1,
      sym_formatting_comment,
    ACTIONS(1525), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13182] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(711), 1,
      sym_formatting_comment,
    ACTIONS(1527), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13193] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(712), 1,
      sym_formatting_comment,
    ACTIONS(1529), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13204] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(713), 1,
      sym_formatting_comment,
    ACTIONS(1531), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13215] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(714), 1,
      sym_formatting_comment,
    ACTIONS(1533), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13226] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(715), 1,
      sym_formatting_comment,
    ACTIONS(1535), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13237] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(716), 1,
      sym_formatting_comment,
    ACTIONS(1537), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13248] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(717), 1,
      sym_formatting_comment,
    ACTIONS(1539), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13259] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(718), 1,
      sym_formatting_comment,
    ACTIONS(1541), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13270] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(719), 1,
      sym_formatting_comment,
    ACTIONS(261), 2,
      anon_sym_RPAREN,
      aux_sym_or_expression_token1,
  [13281] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(720), 1,
      sym_formatting_comment,
    ACTIONS(1543), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13292] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(721), 1,
      sym_formatting_comment,
    ACTIONS(1545), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13303] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(722), 1,
      sym_formatting_comment,
    ACTIONS(1547), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13314] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(723), 1,
      sym_formatting_comment,
    ACTIONS(1549), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13325] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(724), 1,
      sym_formatting_comment,
    ACTIONS(1551), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13336] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(725), 1,
      sym_formatting_comment,
    ACTIONS(1553), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13347] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(726), 1,
      sym_formatting_comment,
    ACTIONS(1555), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13358] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(727), 1,
      sym_formatting_comment,
    ACTIONS(1557), 2,
      sym_bound_apex_expression,
      sym_int,
  [13369] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(728), 1,
      sym_formatting_comment,
    ACTIONS(1559), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13380] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(729), 1,
      sym_formatting_comment,
    ACTIONS(1561), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13391] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(730), 1,
      sym_formatting_comment,
    ACTIONS(1563), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13402] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(731), 1,
      sym_formatting_comment,
    ACTIONS(1565), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13413] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(732), 1,
      sym_formatting_comment,
    ACTIONS(1567), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13424] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(733), 1,
      sym_formatting_comment,
    ACTIONS(1569), 2,
      sym_bound_apex_expression,
      sym_int,
  [13435] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(734), 1,
      sym_formatting_comment,
    ACTIONS(1571), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13446] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(735), 1,
      sym_formatting_comment,
    ACTIONS(1573), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13457] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(736), 1,
      sym_formatting_comment,
    ACTIONS(1575), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [13468] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(737), 1,
      sym_formatting_comment,
    ACTIONS(1577), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [13479] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1579), 1,
      aux_sym_when_expression_token2,
    STATE(738), 1,
      sym_formatting_comment,
  [13489] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1581), 1,
      anon_sym_COMMA,
    STATE(739), 1,
      sym_formatting_comment,
  [13499] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1583), 1,
      anon_sym_RPAREN,
    STATE(740), 1,
      sym_formatting_comment,
  [13509] = 3,
    ACTIONS(1585), 1,
      aux_sym_header_comment_token1,
    ACTIONS(1587), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(741), 1,
      sym_formatting_comment,
  [13519] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1589), 1,
      anon_sym_LPAREN,
    STATE(742), 1,
      sym_formatting_comment,
  [13529] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1591), 1,
      ts_builtin_sym_end,
    STATE(743), 1,
      sym_formatting_comment,
  [13539] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1593), 1,
      ts_builtin_sym_end,
    STATE(744), 1,
      sym_formatting_comment,
  [13549] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1595), 1,
      sym_decimal,
    STATE(745), 1,
      sym_formatting_comment,
  [13559] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1597), 1,
      anon_sym_RPAREN,
    STATE(746), 1,
      sym_formatting_comment,
  [13569] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1599), 1,
      anon_sym_RPAREN,
    STATE(747), 1,
      sym_formatting_comment,
  [13579] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1601), 1,
      ts_builtin_sym_end,
    STATE(748), 1,
      sym_formatting_comment,
  [13589] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(999), 1,
      aux_sym_from_clause_token1,
    STATE(749), 1,
      sym_formatting_comment,
  [13599] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1603), 1,
      anon_sym_COMMA,
    STATE(750), 1,
      sym_formatting_comment,
  [13609] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1605), 1,
      anon_sym_EQ,
    STATE(751), 1,
      sym_formatting_comment,
  [13619] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1607), 1,
      anon_sym_EQ,
    STATE(752), 1,
      sym_formatting_comment,
  [13629] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1609), 1,
      sym_identifier,
    STATE(753), 1,
      sym_formatting_comment,
  [13639] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1611), 1,
      anon_sym_COMMA,
    STATE(754), 1,
      sym_formatting_comment,
  [13649] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1613), 1,
      aux_sym_from_clause_token1,
    STATE(755), 1,
      sym_formatting_comment,
  [13659] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1615), 1,
      anon_sym_LPAREN,
    STATE(756), 1,
      sym_formatting_comment,
  [13669] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1617), 1,
      anon_sym_EQ,
    STATE(757), 1,
      sym_formatting_comment,
  [13679] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1619), 1,
      anon_sym_LPAREN,
    STATE(758), 1,
      sym_formatting_comment,
  [13689] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1621), 1,
      anon_sym_RPAREN,
    STATE(759), 1,
      sym_formatting_comment,
  [13699] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1623), 1,
      anon_sym_RPAREN,
    STATE(760), 1,
      sym_formatting_comment,
  [13709] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1625), 1,
      anon_sym_COLON,
    STATE(761), 1,
      sym_formatting_comment,
  [13719] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1627), 1,
      sym_identifier,
    STATE(762), 1,
      sym_formatting_comment,
  [13729] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1629), 1,
      anon_sym_LPAREN,
    STATE(763), 1,
      sym_formatting_comment,
  [13739] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1631), 1,
      aux_sym_type_of_clause_token2,
    STATE(764), 1,
      sym_formatting_comment,
  [13749] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1633), 1,
      anon_sym_COMMA,
    STATE(765), 1,
      sym_formatting_comment,
  [13759] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(580), 1,
      aux_sym_type_of_clause_token2,
    STATE(766), 1,
      sym_formatting_comment,
  [13769] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1635), 1,
      aux_sym_type_of_clause_token2,
    STATE(767), 1,
      sym_formatting_comment,
  [13779] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1637), 1,
      anon_sym_COMMA,
    STATE(768), 1,
      sym_formatting_comment,
  [13789] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1639), 1,
      anon_sym_RPAREN,
    STATE(769), 1,
      sym_formatting_comment,
  [13799] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1641), 1,
      sym_identifier,
    STATE(770), 1,
      sym_formatting_comment,
  [13809] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1643), 1,
      sym_string_literal,
    STATE(771), 1,
      sym_formatting_comment,
  [13819] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1645), 1,
      ts_builtin_sym_end,
    STATE(772), 1,
      sym_formatting_comment,
  [13829] = 3,
    ACTIONS(1587), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1647), 1,
      aux_sym_header_comment_token1,
    STATE(773), 1,
      sym_formatting_comment,
  [13839] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1649), 1,
      sym_int,
    STATE(774), 1,
      sym_formatting_comment,
  [13849] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1651), 1,
      anon_sym_RPAREN,
    STATE(775), 1,
      sym_formatting_comment,
  [13859] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_RPAREN,
    STATE(776), 1,
      sym_formatting_comment,
  [13869] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1655), 1,
      sym_int,
    STATE(777), 1,
      sym_formatting_comment,
  [13879] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1657), 1,
      sym_identifier,
    STATE(778), 1,
      sym_formatting_comment,
  [13889] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1659), 1,
      sym_identifier,
    STATE(779), 1,
      sym_formatting_comment,
  [13899] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1661), 1,
      sym_int,
    STATE(780), 1,
      sym_formatting_comment,
  [13909] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1663), 1,
      anon_sym_LPAREN,
    STATE(781), 1,
      sym_formatting_comment,
  [13919] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1665), 1,
      anon_sym_RPAREN,
    STATE(782), 1,
      sym_formatting_comment,
  [13929] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1667), 1,
      anon_sym_LPAREN,
    STATE(783), 1,
      sym_formatting_comment,
  [13939] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1669), 1,
      sym_identifier,
    STATE(784), 1,
      sym_formatting_comment,
  [13949] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1671), 1,
      anon_sym_LPAREN,
    STATE(785), 1,
      sym_formatting_comment,
  [13959] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1673), 1,
      sym_identifier,
    STATE(786), 1,
      sym_formatting_comment,
  [13969] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1675), 1,
      anon_sym_COLON,
    STATE(787), 1,
      sym_formatting_comment,
  [13979] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1677), 1,
      sym_string_literal,
    STATE(788), 1,
      sym_formatting_comment,
  [13989] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1679), 1,
      anon_sym_COMMA,
    STATE(789), 1,
      sym_formatting_comment,
  [13999] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1681), 1,
      sym_string_literal,
    STATE(790), 1,
      sym_formatting_comment,
  [14009] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1683), 1,
      anon_sym_COMMA,
    STATE(791), 1,
      sym_formatting_comment,
  [14019] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1685), 1,
      sym_identifier,
    STATE(792), 1,
      sym_formatting_comment,
  [14029] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1687), 1,
      anon_sym_LPAREN,
    STATE(793), 1,
      sym_formatting_comment,
  [14039] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1689), 1,
      sym_decimal,
    STATE(794), 1,
      sym_formatting_comment,
  [14049] = 1,
    ACTIONS(1691), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 274,
  [SMALL_STATE(7)] = 338,
  [SMALL_STATE(8)] = 383,
  [SMALL_STATE(9)] = 428,
  [SMALL_STATE(10)] = 471,
  [SMALL_STATE(11)] = 511,
  [SMALL_STATE(12)] = 556,
  [SMALL_STATE(13)] = 592,
  [SMALL_STATE(14)] = 628,
  [SMALL_STATE(15)] = 664,
  [SMALL_STATE(16)] = 700,
  [SMALL_STATE(17)] = 734,
  [SMALL_STATE(18)] = 799,
  [SMALL_STATE(19)] = 858,
  [SMALL_STATE(20)] = 898,
  [SMALL_STATE(21)] = 938,
  [SMALL_STATE(22)] = 985,
  [SMALL_STATE(23)] = 1016,
  [SMALL_STATE(24)] = 1069,
  [SMALL_STATE(25)] = 1122,
  [SMALL_STATE(26)] = 1153,
  [SMALL_STATE(27)] = 1182,
  [SMALL_STATE(28)] = 1228,
  [SMALL_STATE(29)] = 1262,
  [SMALL_STATE(30)] = 1308,
  [SMALL_STATE(31)] = 1354,
  [SMALL_STATE(32)] = 1398,
  [SMALL_STATE(33)] = 1444,
  [SMALL_STATE(34)] = 1470,
  [SMALL_STATE(35)] = 1517,
  [SMALL_STATE(36)] = 1564,
  [SMALL_STATE(37)] = 1611,
  [SMALL_STATE(38)] = 1636,
  [SMALL_STATE(39)] = 1683,
  [SMALL_STATE(40)] = 1712,
  [SMALL_STATE(41)] = 1736,
  [SMALL_STATE(42)] = 1760,
  [SMALL_STATE(43)] = 1786,
  [SMALL_STATE(44)] = 1812,
  [SMALL_STATE(45)] = 1842,
  [SMALL_STATE(46)] = 1872,
  [SMALL_STATE(47)] = 1895,
  [SMALL_STATE(48)] = 1936,
  [SMALL_STATE(49)] = 1957,
  [SMALL_STATE(50)] = 1980,
  [SMALL_STATE(51)] = 2003,
  [SMALL_STATE(52)] = 2044,
  [SMALL_STATE(53)] = 2085,
  [SMALL_STATE(54)] = 2106,
  [SMALL_STATE(55)] = 2127,
  [SMALL_STATE(56)] = 2168,
  [SMALL_STATE(57)] = 2209,
  [SMALL_STATE(58)] = 2250,
  [SMALL_STATE(59)] = 2291,
  [SMALL_STATE(60)] = 2314,
  [SMALL_STATE(61)] = 2355,
  [SMALL_STATE(62)] = 2378,
  [SMALL_STATE(63)] = 2400,
  [SMALL_STATE(64)] = 2422,
  [SMALL_STATE(65)] = 2444,
  [SMALL_STATE(66)] = 2466,
  [SMALL_STATE(67)] = 2488,
  [SMALL_STATE(68)] = 2510,
  [SMALL_STATE(69)] = 2532,
  [SMALL_STATE(70)] = 2554,
  [SMALL_STATE(71)] = 2576,
  [SMALL_STATE(72)] = 2598,
  [SMALL_STATE(73)] = 2622,
  [SMALL_STATE(74)] = 2646,
  [SMALL_STATE(75)] = 2667,
  [SMALL_STATE(76)] = 2690,
  [SMALL_STATE(77)] = 2725,
  [SMALL_STATE(78)] = 2760,
  [SMALL_STATE(79)] = 2779,
  [SMALL_STATE(80)] = 2798,
  [SMALL_STATE(81)] = 2821,
  [SMALL_STATE(82)] = 2844,
  [SMALL_STATE(83)] = 2867,
  [SMALL_STATE(84)] = 2902,
  [SMALL_STATE(85)] = 2937,
  [SMALL_STATE(86)] = 2972,
  [SMALL_STATE(87)] = 3007,
  [SMALL_STATE(88)] = 3042,
  [SMALL_STATE(89)] = 3077,
  [SMALL_STATE(90)] = 3112,
  [SMALL_STATE(91)] = 3131,
  [SMALL_STATE(92)] = 3152,
  [SMALL_STATE(93)] = 3181,
  [SMALL_STATE(94)] = 3204,
  [SMALL_STATE(95)] = 3239,
  [SMALL_STATE(96)] = 3274,
  [SMALL_STATE(97)] = 3309,
  [SMALL_STATE(98)] = 3344,
  [SMALL_STATE(99)] = 3365,
  [SMALL_STATE(100)] = 3400,
  [SMALL_STATE(101)] = 3435,
  [SMALL_STATE(102)] = 3470,
  [SMALL_STATE(103)] = 3505,
  [SMALL_STATE(104)] = 3540,
  [SMALL_STATE(105)] = 3575,
  [SMALL_STATE(106)] = 3610,
  [SMALL_STATE(107)] = 3628,
  [SMALL_STATE(108)] = 3646,
  [SMALL_STATE(109)] = 3668,
  [SMALL_STATE(110)] = 3686,
  [SMALL_STATE(111)] = 3704,
  [SMALL_STATE(112)] = 3722,
  [SMALL_STATE(113)] = 3740,
  [SMALL_STATE(114)] = 3758,
  [SMALL_STATE(115)] = 3776,
  [SMALL_STATE(116)] = 3794,
  [SMALL_STATE(117)] = 3823,
  [SMALL_STATE(118)] = 3852,
  [SMALL_STATE(119)] = 3877,
  [SMALL_STATE(120)] = 3894,
  [SMALL_STATE(121)] = 3923,
  [SMALL_STATE(122)] = 3942,
  [SMALL_STATE(123)] = 3971,
  [SMALL_STATE(124)] = 4000,
  [SMALL_STATE(125)] = 4021,
  [SMALL_STATE(126)] = 4050,
  [SMALL_STATE(127)] = 4079,
  [SMALL_STATE(128)] = 4100,
  [SMALL_STATE(129)] = 4129,
  [SMALL_STATE(130)] = 4158,
  [SMALL_STATE(131)] = 4187,
  [SMALL_STATE(132)] = 4216,
  [SMALL_STATE(133)] = 4245,
  [SMALL_STATE(134)] = 4274,
  [SMALL_STATE(135)] = 4303,
  [SMALL_STATE(136)] = 4332,
  [SMALL_STATE(137)] = 4353,
  [SMALL_STATE(138)] = 4370,
  [SMALL_STATE(139)] = 4399,
  [SMALL_STATE(140)] = 4428,
  [SMALL_STATE(141)] = 4459,
  [SMALL_STATE(142)] = 4488,
  [SMALL_STATE(143)] = 4517,
  [SMALL_STATE(144)] = 4546,
  [SMALL_STATE(145)] = 4575,
  [SMALL_STATE(146)] = 4604,
  [SMALL_STATE(147)] = 4633,
  [SMALL_STATE(148)] = 4662,
  [SMALL_STATE(149)] = 4691,
  [SMALL_STATE(150)] = 4708,
  [SMALL_STATE(151)] = 4737,
  [SMALL_STATE(152)] = 4766,
  [SMALL_STATE(153)] = 4795,
  [SMALL_STATE(154)] = 4824,
  [SMALL_STATE(155)] = 4853,
  [SMALL_STATE(156)] = 4882,
  [SMALL_STATE(157)] = 4911,
  [SMALL_STATE(158)] = 4928,
  [SMALL_STATE(159)] = 4957,
  [SMALL_STATE(160)] = 4974,
  [SMALL_STATE(161)] = 5003,
  [SMALL_STATE(162)] = 5032,
  [SMALL_STATE(163)] = 5052,
  [SMALL_STATE(164)] = 5076,
  [SMALL_STATE(165)] = 5104,
  [SMALL_STATE(166)] = 5120,
  [SMALL_STATE(167)] = 5136,
  [SMALL_STATE(168)] = 5152,
  [SMALL_STATE(169)] = 5178,
  [SMALL_STATE(170)] = 5204,
  [SMALL_STATE(171)] = 5230,
  [SMALL_STATE(172)] = 5252,
  [SMALL_STATE(173)] = 5268,
  [SMALL_STATE(174)] = 5284,
  [SMALL_STATE(175)] = 5300,
  [SMALL_STATE(176)] = 5326,
  [SMALL_STATE(177)] = 5349,
  [SMALL_STATE(178)] = 5372,
  [SMALL_STATE(179)] = 5395,
  [SMALL_STATE(180)] = 5418,
  [SMALL_STATE(181)] = 5441,
  [SMALL_STATE(182)] = 5464,
  [SMALL_STATE(183)] = 5487,
  [SMALL_STATE(184)] = 5510,
  [SMALL_STATE(185)] = 5533,
  [SMALL_STATE(186)] = 5556,
  [SMALL_STATE(187)] = 5579,
  [SMALL_STATE(188)] = 5602,
  [SMALL_STATE(189)] = 5625,
  [SMALL_STATE(190)] = 5648,
  [SMALL_STATE(191)] = 5671,
  [SMALL_STATE(192)] = 5694,
  [SMALL_STATE(193)] = 5717,
  [SMALL_STATE(194)] = 5740,
  [SMALL_STATE(195)] = 5763,
  [SMALL_STATE(196)] = 5786,
  [SMALL_STATE(197)] = 5805,
  [SMALL_STATE(198)] = 5828,
  [SMALL_STATE(199)] = 5851,
  [SMALL_STATE(200)] = 5874,
  [SMALL_STATE(201)] = 5897,
  [SMALL_STATE(202)] = 5920,
  [SMALL_STATE(203)] = 5943,
  [SMALL_STATE(204)] = 5960,
  [SMALL_STATE(205)] = 5983,
  [SMALL_STATE(206)] = 6006,
  [SMALL_STATE(207)] = 6029,
  [SMALL_STATE(208)] = 6052,
  [SMALL_STATE(209)] = 6075,
  [SMALL_STATE(210)] = 6098,
  [SMALL_STATE(211)] = 6121,
  [SMALL_STATE(212)] = 6144,
  [SMALL_STATE(213)] = 6167,
  [SMALL_STATE(214)] = 6190,
  [SMALL_STATE(215)] = 6213,
  [SMALL_STATE(216)] = 6236,
  [SMALL_STATE(217)] = 6259,
  [SMALL_STATE(218)] = 6284,
  [SMALL_STATE(219)] = 6307,
  [SMALL_STATE(220)] = 6330,
  [SMALL_STATE(221)] = 6353,
  [SMALL_STATE(222)] = 6376,
  [SMALL_STATE(223)] = 6399,
  [SMALL_STATE(224)] = 6422,
  [SMALL_STATE(225)] = 6445,
  [SMALL_STATE(226)] = 6468,
  [SMALL_STATE(227)] = 6491,
  [SMALL_STATE(228)] = 6514,
  [SMALL_STATE(229)] = 6537,
  [SMALL_STATE(230)] = 6560,
  [SMALL_STATE(231)] = 6583,
  [SMALL_STATE(232)] = 6606,
  [SMALL_STATE(233)] = 6631,
  [SMALL_STATE(234)] = 6654,
  [SMALL_STATE(235)] = 6677,
  [SMALL_STATE(236)] = 6700,
  [SMALL_STATE(237)] = 6723,
  [SMALL_STATE(238)] = 6746,
  [SMALL_STATE(239)] = 6769,
  [SMALL_STATE(240)] = 6792,
  [SMALL_STATE(241)] = 6815,
  [SMALL_STATE(242)] = 6838,
  [SMALL_STATE(243)] = 6863,
  [SMALL_STATE(244)] = 6886,
  [SMALL_STATE(245)] = 6909,
  [SMALL_STATE(246)] = 6934,
  [SMALL_STATE(247)] = 6957,
  [SMALL_STATE(248)] = 6975,
  [SMALL_STATE(249)] = 6997,
  [SMALL_STATE(250)] = 7013,
  [SMALL_STATE(251)] = 7027,
  [SMALL_STATE(252)] = 7043,
  [SMALL_STATE(253)] = 7059,
  [SMALL_STATE(254)] = 7077,
  [SMALL_STATE(255)] = 7093,
  [SMALL_STATE(256)] = 7111,
  [SMALL_STATE(257)] = 7127,
  [SMALL_STATE(258)] = 7143,
  [SMALL_STATE(259)] = 7159,
  [SMALL_STATE(260)] = 7177,
  [SMALL_STATE(261)] = 7195,
  [SMALL_STATE(262)] = 7213,
  [SMALL_STATE(263)] = 7230,
  [SMALL_STATE(264)] = 7247,
  [SMALL_STATE(265)] = 7264,
  [SMALL_STATE(266)] = 7281,
  [SMALL_STATE(267)] = 7298,
  [SMALL_STATE(268)] = 7315,
  [SMALL_STATE(269)] = 7328,
  [SMALL_STATE(270)] = 7343,
  [SMALL_STATE(271)] = 7362,
  [SMALL_STATE(272)] = 7381,
  [SMALL_STATE(273)] = 7400,
  [SMALL_STATE(274)] = 7417,
  [SMALL_STATE(275)] = 7434,
  [SMALL_STATE(276)] = 7451,
  [SMALL_STATE(277)] = 7468,
  [SMALL_STATE(278)] = 7483,
  [SMALL_STATE(279)] = 7500,
  [SMALL_STATE(280)] = 7517,
  [SMALL_STATE(281)] = 7530,
  [SMALL_STATE(282)] = 7547,
  [SMALL_STATE(283)] = 7564,
  [SMALL_STATE(284)] = 7581,
  [SMALL_STATE(285)] = 7598,
  [SMALL_STATE(286)] = 7615,
  [SMALL_STATE(287)] = 7632,
  [SMALL_STATE(288)] = 7649,
  [SMALL_STATE(289)] = 7666,
  [SMALL_STATE(290)] = 7683,
  [SMALL_STATE(291)] = 7700,
  [SMALL_STATE(292)] = 7717,
  [SMALL_STATE(293)] = 7734,
  [SMALL_STATE(294)] = 7751,
  [SMALL_STATE(295)] = 7768,
  [SMALL_STATE(296)] = 7785,
  [SMALL_STATE(297)] = 7802,
  [SMALL_STATE(298)] = 7819,
  [SMALL_STATE(299)] = 7836,
  [SMALL_STATE(300)] = 7853,
  [SMALL_STATE(301)] = 7870,
  [SMALL_STATE(302)] = 7885,
  [SMALL_STATE(303)] = 7902,
  [SMALL_STATE(304)] = 7919,
  [SMALL_STATE(305)] = 7936,
  [SMALL_STATE(306)] = 7953,
  [SMALL_STATE(307)] = 7970,
  [SMALL_STATE(308)] = 7987,
  [SMALL_STATE(309)] = 8004,
  [SMALL_STATE(310)] = 8021,
  [SMALL_STATE(311)] = 8034,
  [SMALL_STATE(312)] = 8051,
  [SMALL_STATE(313)] = 8068,
  [SMALL_STATE(314)] = 8085,
  [SMALL_STATE(315)] = 8102,
  [SMALL_STATE(316)] = 8119,
  [SMALL_STATE(317)] = 8136,
  [SMALL_STATE(318)] = 8149,
  [SMALL_STATE(319)] = 8166,
  [SMALL_STATE(320)] = 8183,
  [SMALL_STATE(321)] = 8200,
  [SMALL_STATE(322)] = 8219,
  [SMALL_STATE(323)] = 8236,
  [SMALL_STATE(324)] = 8253,
  [SMALL_STATE(325)] = 8270,
  [SMALL_STATE(326)] = 8287,
  [SMALL_STATE(327)] = 8304,
  [SMALL_STATE(328)] = 8321,
  [SMALL_STATE(329)] = 8338,
  [SMALL_STATE(330)] = 8355,
  [SMALL_STATE(331)] = 8372,
  [SMALL_STATE(332)] = 8389,
  [SMALL_STATE(333)] = 8406,
  [SMALL_STATE(334)] = 8423,
  [SMALL_STATE(335)] = 8440,
  [SMALL_STATE(336)] = 8457,
  [SMALL_STATE(337)] = 8474,
  [SMALL_STATE(338)] = 8491,
  [SMALL_STATE(339)] = 8508,
  [SMALL_STATE(340)] = 8525,
  [SMALL_STATE(341)] = 8542,
  [SMALL_STATE(342)] = 8559,
  [SMALL_STATE(343)] = 8576,
  [SMALL_STATE(344)] = 8593,
  [SMALL_STATE(345)] = 8612,
  [SMALL_STATE(346)] = 8629,
  [SMALL_STATE(347)] = 8646,
  [SMALL_STATE(348)] = 8663,
  [SMALL_STATE(349)] = 8680,
  [SMALL_STATE(350)] = 8697,
  [SMALL_STATE(351)] = 8714,
  [SMALL_STATE(352)] = 8731,
  [SMALL_STATE(353)] = 8748,
  [SMALL_STATE(354)] = 8765,
  [SMALL_STATE(355)] = 8782,
  [SMALL_STATE(356)] = 8799,
  [SMALL_STATE(357)] = 8816,
  [SMALL_STATE(358)] = 8833,
  [SMALL_STATE(359)] = 8850,
  [SMALL_STATE(360)] = 8867,
  [SMALL_STATE(361)] = 8884,
  [SMALL_STATE(362)] = 8901,
  [SMALL_STATE(363)] = 8918,
  [SMALL_STATE(364)] = 8935,
  [SMALL_STATE(365)] = 8952,
  [SMALL_STATE(366)] = 8969,
  [SMALL_STATE(367)] = 8986,
  [SMALL_STATE(368)] = 9003,
  [SMALL_STATE(369)] = 9020,
  [SMALL_STATE(370)] = 9037,
  [SMALL_STATE(371)] = 9054,
  [SMALL_STATE(372)] = 9071,
  [SMALL_STATE(373)] = 9088,
  [SMALL_STATE(374)] = 9105,
  [SMALL_STATE(375)] = 9122,
  [SMALL_STATE(376)] = 9139,
  [SMALL_STATE(377)] = 9156,
  [SMALL_STATE(378)] = 9173,
  [SMALL_STATE(379)] = 9190,
  [SMALL_STATE(380)] = 9207,
  [SMALL_STATE(381)] = 9224,
  [SMALL_STATE(382)] = 9241,
  [SMALL_STATE(383)] = 9258,
  [SMALL_STATE(384)] = 9275,
  [SMALL_STATE(385)] = 9292,
  [SMALL_STATE(386)] = 9309,
  [SMALL_STATE(387)] = 9326,
  [SMALL_STATE(388)] = 9343,
  [SMALL_STATE(389)] = 9360,
  [SMALL_STATE(390)] = 9377,
  [SMALL_STATE(391)] = 9394,
  [SMALL_STATE(392)] = 9411,
  [SMALL_STATE(393)] = 9428,
  [SMALL_STATE(394)] = 9445,
  [SMALL_STATE(395)] = 9462,
  [SMALL_STATE(396)] = 9479,
  [SMALL_STATE(397)] = 9496,
  [SMALL_STATE(398)] = 9513,
  [SMALL_STATE(399)] = 9530,
  [SMALL_STATE(400)] = 9547,
  [SMALL_STATE(401)] = 9564,
  [SMALL_STATE(402)] = 9581,
  [SMALL_STATE(403)] = 9598,
  [SMALL_STATE(404)] = 9615,
  [SMALL_STATE(405)] = 9632,
  [SMALL_STATE(406)] = 9649,
  [SMALL_STATE(407)] = 9666,
  [SMALL_STATE(408)] = 9683,
  [SMALL_STATE(409)] = 9700,
  [SMALL_STATE(410)] = 9715,
  [SMALL_STATE(411)] = 9729,
  [SMALL_STATE(412)] = 9743,
  [SMALL_STATE(413)] = 9759,
  [SMALL_STATE(414)] = 9773,
  [SMALL_STATE(415)] = 9787,
  [SMALL_STATE(416)] = 9803,
  [SMALL_STATE(417)] = 9815,
  [SMALL_STATE(418)] = 9831,
  [SMALL_STATE(419)] = 9847,
  [SMALL_STATE(420)] = 9863,
  [SMALL_STATE(421)] = 9879,
  [SMALL_STATE(422)] = 9895,
  [SMALL_STATE(423)] = 9909,
  [SMALL_STATE(424)] = 9923,
  [SMALL_STATE(425)] = 9939,
  [SMALL_STATE(426)] = 9955,
  [SMALL_STATE(427)] = 9971,
  [SMALL_STATE(428)] = 9983,
  [SMALL_STATE(429)] = 9995,
  [SMALL_STATE(430)] = 10011,
  [SMALL_STATE(431)] = 10025,
  [SMALL_STATE(432)] = 10037,
  [SMALL_STATE(433)] = 10053,
  [SMALL_STATE(434)] = 10065,
  [SMALL_STATE(435)] = 10077,
  [SMALL_STATE(436)] = 10089,
  [SMALL_STATE(437)] = 10103,
  [SMALL_STATE(438)] = 10115,
  [SMALL_STATE(439)] = 10127,
  [SMALL_STATE(440)] = 10139,
  [SMALL_STATE(441)] = 10151,
  [SMALL_STATE(442)] = 10163,
  [SMALL_STATE(443)] = 10175,
  [SMALL_STATE(444)] = 10187,
  [SMALL_STATE(445)] = 10199,
  [SMALL_STATE(446)] = 10215,
  [SMALL_STATE(447)] = 10227,
  [SMALL_STATE(448)] = 10243,
  [SMALL_STATE(449)] = 10259,
  [SMALL_STATE(450)] = 10275,
  [SMALL_STATE(451)] = 10287,
  [SMALL_STATE(452)] = 10303,
  [SMALL_STATE(453)] = 10319,
  [SMALL_STATE(454)] = 10335,
  [SMALL_STATE(455)] = 10349,
  [SMALL_STATE(456)] = 10361,
  [SMALL_STATE(457)] = 10372,
  [SMALL_STATE(458)] = 10383,
  [SMALL_STATE(459)] = 10394,
  [SMALL_STATE(460)] = 10405,
  [SMALL_STATE(461)] = 10416,
  [SMALL_STATE(462)] = 10427,
  [SMALL_STATE(463)] = 10438,
  [SMALL_STATE(464)] = 10449,
  [SMALL_STATE(465)] = 10460,
  [SMALL_STATE(466)] = 10471,
  [SMALL_STATE(467)] = 10482,
  [SMALL_STATE(468)] = 10493,
  [SMALL_STATE(469)] = 10504,
  [SMALL_STATE(470)] = 10515,
  [SMALL_STATE(471)] = 10528,
  [SMALL_STATE(472)] = 10541,
  [SMALL_STATE(473)] = 10552,
  [SMALL_STATE(474)] = 10563,
  [SMALL_STATE(475)] = 10574,
  [SMALL_STATE(476)] = 10585,
  [SMALL_STATE(477)] = 10598,
  [SMALL_STATE(478)] = 10609,
  [SMALL_STATE(479)] = 10620,
  [SMALL_STATE(480)] = 10631,
  [SMALL_STATE(481)] = 10642,
  [SMALL_STATE(482)] = 10653,
  [SMALL_STATE(483)] = 10664,
  [SMALL_STATE(484)] = 10675,
  [SMALL_STATE(485)] = 10686,
  [SMALL_STATE(486)] = 10697,
  [SMALL_STATE(487)] = 10708,
  [SMALL_STATE(488)] = 10719,
  [SMALL_STATE(489)] = 10730,
  [SMALL_STATE(490)] = 10741,
  [SMALL_STATE(491)] = 10752,
  [SMALL_STATE(492)] = 10765,
  [SMALL_STATE(493)] = 10776,
  [SMALL_STATE(494)] = 10787,
  [SMALL_STATE(495)] = 10798,
  [SMALL_STATE(496)] = 10809,
  [SMALL_STATE(497)] = 10820,
  [SMALL_STATE(498)] = 10831,
  [SMALL_STATE(499)] = 10842,
  [SMALL_STATE(500)] = 10853,
  [SMALL_STATE(501)] = 10864,
  [SMALL_STATE(502)] = 10875,
  [SMALL_STATE(503)] = 10886,
  [SMALL_STATE(504)] = 10897,
  [SMALL_STATE(505)] = 10908,
  [SMALL_STATE(506)] = 10919,
  [SMALL_STATE(507)] = 10930,
  [SMALL_STATE(508)] = 10941,
  [SMALL_STATE(509)] = 10952,
  [SMALL_STATE(510)] = 10963,
  [SMALL_STATE(511)] = 10974,
  [SMALL_STATE(512)] = 10985,
  [SMALL_STATE(513)] = 10996,
  [SMALL_STATE(514)] = 11007,
  [SMALL_STATE(515)] = 11018,
  [SMALL_STATE(516)] = 11029,
  [SMALL_STATE(517)] = 11040,
  [SMALL_STATE(518)] = 11051,
  [SMALL_STATE(519)] = 11062,
  [SMALL_STATE(520)] = 11073,
  [SMALL_STATE(521)] = 11084,
  [SMALL_STATE(522)] = 11095,
  [SMALL_STATE(523)] = 11106,
  [SMALL_STATE(524)] = 11117,
  [SMALL_STATE(525)] = 11128,
  [SMALL_STATE(526)] = 11139,
  [SMALL_STATE(527)] = 11150,
  [SMALL_STATE(528)] = 11161,
  [SMALL_STATE(529)] = 11172,
  [SMALL_STATE(530)] = 11183,
  [SMALL_STATE(531)] = 11194,
  [SMALL_STATE(532)] = 11205,
  [SMALL_STATE(533)] = 11216,
  [SMALL_STATE(534)] = 11229,
  [SMALL_STATE(535)] = 11240,
  [SMALL_STATE(536)] = 11251,
  [SMALL_STATE(537)] = 11262,
  [SMALL_STATE(538)] = 11273,
  [SMALL_STATE(539)] = 11284,
  [SMALL_STATE(540)] = 11295,
  [SMALL_STATE(541)] = 11306,
  [SMALL_STATE(542)] = 11317,
  [SMALL_STATE(543)] = 11328,
  [SMALL_STATE(544)] = 11339,
  [SMALL_STATE(545)] = 11350,
  [SMALL_STATE(546)] = 11361,
  [SMALL_STATE(547)] = 11372,
  [SMALL_STATE(548)] = 11383,
  [SMALL_STATE(549)] = 11394,
  [SMALL_STATE(550)] = 11405,
  [SMALL_STATE(551)] = 11416,
  [SMALL_STATE(552)] = 11427,
  [SMALL_STATE(553)] = 11438,
  [SMALL_STATE(554)] = 11449,
  [SMALL_STATE(555)] = 11460,
  [SMALL_STATE(556)] = 11471,
  [SMALL_STATE(557)] = 11482,
  [SMALL_STATE(558)] = 11493,
  [SMALL_STATE(559)] = 11504,
  [SMALL_STATE(560)] = 11515,
  [SMALL_STATE(561)] = 11526,
  [SMALL_STATE(562)] = 11537,
  [SMALL_STATE(563)] = 11548,
  [SMALL_STATE(564)] = 11559,
  [SMALL_STATE(565)] = 11570,
  [SMALL_STATE(566)] = 11581,
  [SMALL_STATE(567)] = 11592,
  [SMALL_STATE(568)] = 11603,
  [SMALL_STATE(569)] = 11614,
  [SMALL_STATE(570)] = 11625,
  [SMALL_STATE(571)] = 11636,
  [SMALL_STATE(572)] = 11647,
  [SMALL_STATE(573)] = 11658,
  [SMALL_STATE(574)] = 11669,
  [SMALL_STATE(575)] = 11682,
  [SMALL_STATE(576)] = 11693,
  [SMALL_STATE(577)] = 11704,
  [SMALL_STATE(578)] = 11715,
  [SMALL_STATE(579)] = 11726,
  [SMALL_STATE(580)] = 11739,
  [SMALL_STATE(581)] = 11750,
  [SMALL_STATE(582)] = 11761,
  [SMALL_STATE(583)] = 11772,
  [SMALL_STATE(584)] = 11783,
  [SMALL_STATE(585)] = 11794,
  [SMALL_STATE(586)] = 11805,
  [SMALL_STATE(587)] = 11816,
  [SMALL_STATE(588)] = 11827,
  [SMALL_STATE(589)] = 11838,
  [SMALL_STATE(590)] = 11849,
  [SMALL_STATE(591)] = 11860,
  [SMALL_STATE(592)] = 11871,
  [SMALL_STATE(593)] = 11882,
  [SMALL_STATE(594)] = 11893,
  [SMALL_STATE(595)] = 11904,
  [SMALL_STATE(596)] = 11915,
  [SMALL_STATE(597)] = 11926,
  [SMALL_STATE(598)] = 11937,
  [SMALL_STATE(599)] = 11948,
  [SMALL_STATE(600)] = 11959,
  [SMALL_STATE(601)] = 11970,
  [SMALL_STATE(602)] = 11981,
  [SMALL_STATE(603)] = 11992,
  [SMALL_STATE(604)] = 12003,
  [SMALL_STATE(605)] = 12014,
  [SMALL_STATE(606)] = 12027,
  [SMALL_STATE(607)] = 12038,
  [SMALL_STATE(608)] = 12049,
  [SMALL_STATE(609)] = 12060,
  [SMALL_STATE(610)] = 12071,
  [SMALL_STATE(611)] = 12082,
  [SMALL_STATE(612)] = 12093,
  [SMALL_STATE(613)] = 12104,
  [SMALL_STATE(614)] = 12115,
  [SMALL_STATE(615)] = 12126,
  [SMALL_STATE(616)] = 12137,
  [SMALL_STATE(617)] = 12148,
  [SMALL_STATE(618)] = 12159,
  [SMALL_STATE(619)] = 12170,
  [SMALL_STATE(620)] = 12181,
  [SMALL_STATE(621)] = 12192,
  [SMALL_STATE(622)] = 12203,
  [SMALL_STATE(623)] = 12214,
  [SMALL_STATE(624)] = 12225,
  [SMALL_STATE(625)] = 12236,
  [SMALL_STATE(626)] = 12247,
  [SMALL_STATE(627)] = 12258,
  [SMALL_STATE(628)] = 12269,
  [SMALL_STATE(629)] = 12280,
  [SMALL_STATE(630)] = 12291,
  [SMALL_STATE(631)] = 12302,
  [SMALL_STATE(632)] = 12313,
  [SMALL_STATE(633)] = 12324,
  [SMALL_STATE(634)] = 12335,
  [SMALL_STATE(635)] = 12346,
  [SMALL_STATE(636)] = 12357,
  [SMALL_STATE(637)] = 12368,
  [SMALL_STATE(638)] = 12379,
  [SMALL_STATE(639)] = 12390,
  [SMALL_STATE(640)] = 12401,
  [SMALL_STATE(641)] = 12412,
  [SMALL_STATE(642)] = 12423,
  [SMALL_STATE(643)] = 12434,
  [SMALL_STATE(644)] = 12445,
  [SMALL_STATE(645)] = 12456,
  [SMALL_STATE(646)] = 12467,
  [SMALL_STATE(647)] = 12478,
  [SMALL_STATE(648)] = 12489,
  [SMALL_STATE(649)] = 12500,
  [SMALL_STATE(650)] = 12511,
  [SMALL_STATE(651)] = 12522,
  [SMALL_STATE(652)] = 12533,
  [SMALL_STATE(653)] = 12544,
  [SMALL_STATE(654)] = 12555,
  [SMALL_STATE(655)] = 12566,
  [SMALL_STATE(656)] = 12577,
  [SMALL_STATE(657)] = 12588,
  [SMALL_STATE(658)] = 12599,
  [SMALL_STATE(659)] = 12610,
  [SMALL_STATE(660)] = 12621,
  [SMALL_STATE(661)] = 12632,
  [SMALL_STATE(662)] = 12643,
  [SMALL_STATE(663)] = 12654,
  [SMALL_STATE(664)] = 12665,
  [SMALL_STATE(665)] = 12676,
  [SMALL_STATE(666)] = 12687,
  [SMALL_STATE(667)] = 12698,
  [SMALL_STATE(668)] = 12709,
  [SMALL_STATE(669)] = 12720,
  [SMALL_STATE(670)] = 12731,
  [SMALL_STATE(671)] = 12742,
  [SMALL_STATE(672)] = 12753,
  [SMALL_STATE(673)] = 12764,
  [SMALL_STATE(674)] = 12775,
  [SMALL_STATE(675)] = 12786,
  [SMALL_STATE(676)] = 12797,
  [SMALL_STATE(677)] = 12808,
  [SMALL_STATE(678)] = 12819,
  [SMALL_STATE(679)] = 12830,
  [SMALL_STATE(680)] = 12841,
  [SMALL_STATE(681)] = 12852,
  [SMALL_STATE(682)] = 12863,
  [SMALL_STATE(683)] = 12874,
  [SMALL_STATE(684)] = 12885,
  [SMALL_STATE(685)] = 12896,
  [SMALL_STATE(686)] = 12907,
  [SMALL_STATE(687)] = 12918,
  [SMALL_STATE(688)] = 12929,
  [SMALL_STATE(689)] = 12940,
  [SMALL_STATE(690)] = 12951,
  [SMALL_STATE(691)] = 12962,
  [SMALL_STATE(692)] = 12973,
  [SMALL_STATE(693)] = 12984,
  [SMALL_STATE(694)] = 12995,
  [SMALL_STATE(695)] = 13006,
  [SMALL_STATE(696)] = 13017,
  [SMALL_STATE(697)] = 13028,
  [SMALL_STATE(698)] = 13039,
  [SMALL_STATE(699)] = 13050,
  [SMALL_STATE(700)] = 13061,
  [SMALL_STATE(701)] = 13072,
  [SMALL_STATE(702)] = 13083,
  [SMALL_STATE(703)] = 13094,
  [SMALL_STATE(704)] = 13105,
  [SMALL_STATE(705)] = 13116,
  [SMALL_STATE(706)] = 13127,
  [SMALL_STATE(707)] = 13138,
  [SMALL_STATE(708)] = 13149,
  [SMALL_STATE(709)] = 13160,
  [SMALL_STATE(710)] = 13171,
  [SMALL_STATE(711)] = 13182,
  [SMALL_STATE(712)] = 13193,
  [SMALL_STATE(713)] = 13204,
  [SMALL_STATE(714)] = 13215,
  [SMALL_STATE(715)] = 13226,
  [SMALL_STATE(716)] = 13237,
  [SMALL_STATE(717)] = 13248,
  [SMALL_STATE(718)] = 13259,
  [SMALL_STATE(719)] = 13270,
  [SMALL_STATE(720)] = 13281,
  [SMALL_STATE(721)] = 13292,
  [SMALL_STATE(722)] = 13303,
  [SMALL_STATE(723)] = 13314,
  [SMALL_STATE(724)] = 13325,
  [SMALL_STATE(725)] = 13336,
  [SMALL_STATE(726)] = 13347,
  [SMALL_STATE(727)] = 13358,
  [SMALL_STATE(728)] = 13369,
  [SMALL_STATE(729)] = 13380,
  [SMALL_STATE(730)] = 13391,
  [SMALL_STATE(731)] = 13402,
  [SMALL_STATE(732)] = 13413,
  [SMALL_STATE(733)] = 13424,
  [SMALL_STATE(734)] = 13435,
  [SMALL_STATE(735)] = 13446,
  [SMALL_STATE(736)] = 13457,
  [SMALL_STATE(737)] = 13468,
  [SMALL_STATE(738)] = 13479,
  [SMALL_STATE(739)] = 13489,
  [SMALL_STATE(740)] = 13499,
  [SMALL_STATE(741)] = 13509,
  [SMALL_STATE(742)] = 13519,
  [SMALL_STATE(743)] = 13529,
  [SMALL_STATE(744)] = 13539,
  [SMALL_STATE(745)] = 13549,
  [SMALL_STATE(746)] = 13559,
  [SMALL_STATE(747)] = 13569,
  [SMALL_STATE(748)] = 13579,
  [SMALL_STATE(749)] = 13589,
  [SMALL_STATE(750)] = 13599,
  [SMALL_STATE(751)] = 13609,
  [SMALL_STATE(752)] = 13619,
  [SMALL_STATE(753)] = 13629,
  [SMALL_STATE(754)] = 13639,
  [SMALL_STATE(755)] = 13649,
  [SMALL_STATE(756)] = 13659,
  [SMALL_STATE(757)] = 13669,
  [SMALL_STATE(758)] = 13679,
  [SMALL_STATE(759)] = 13689,
  [SMALL_STATE(760)] = 13699,
  [SMALL_STATE(761)] = 13709,
  [SMALL_STATE(762)] = 13719,
  [SMALL_STATE(763)] = 13729,
  [SMALL_STATE(764)] = 13739,
  [SMALL_STATE(765)] = 13749,
  [SMALL_STATE(766)] = 13759,
  [SMALL_STATE(767)] = 13769,
  [SMALL_STATE(768)] = 13779,
  [SMALL_STATE(769)] = 13789,
  [SMALL_STATE(770)] = 13799,
  [SMALL_STATE(771)] = 13809,
  [SMALL_STATE(772)] = 13819,
  [SMALL_STATE(773)] = 13829,
  [SMALL_STATE(774)] = 13839,
  [SMALL_STATE(775)] = 13849,
  [SMALL_STATE(776)] = 13859,
  [SMALL_STATE(777)] = 13869,
  [SMALL_STATE(778)] = 13879,
  [SMALL_STATE(779)] = 13889,
  [SMALL_STATE(780)] = 13899,
  [SMALL_STATE(781)] = 13909,
  [SMALL_STATE(782)] = 13919,
  [SMALL_STATE(783)] = 13929,
  [SMALL_STATE(784)] = 13939,
  [SMALL_STATE(785)] = 13949,
  [SMALL_STATE(786)] = 13959,
  [SMALL_STATE(787)] = 13969,
  [SMALL_STATE(788)] = 13979,
  [SMALL_STATE(789)] = 13989,
  [SMALL_STATE(790)] = 13999,
  [SMALL_STATE(791)] = 14009,
  [SMALL_STATE(792)] = 14019,
  [SMALL_STATE(793)] = 14029,
  [SMALL_STATE(794)] = 14039,
  [SMALL_STATE(795)] = 14049,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_comparison_operator, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_comparison_operator, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(770),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1, 0, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 4, 0, 12),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 4, 0, 12),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 8, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 8, 0, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 5, 0, 12),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 5, 0, 12),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_expression, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_expression, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 2, 0, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_identifier, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storage_identifier, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 15),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 6),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(784),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 7),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 57),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 16),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 29),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_clause_repeat1, 2, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_literal, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_literal, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 55),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__soql_literal, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__soql_literal, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal_with_param, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal_with_param, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 149),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 34),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 62),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 93),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 13),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 27),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_expression, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparable_list, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparable_list, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparable_list, 4, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparable_list, 4, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comparison, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comparison, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_comparison, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_comparison, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2, 0, 0),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_scope_type, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_using_clause, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 53),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 61),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 67),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 91),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 98),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 112),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 147),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 154),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 168),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 213),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(579),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 283),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 20),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 25),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 33),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 39),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 11),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 2, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 5, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 6, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 22),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_user_id_type, 3, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 88),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 140),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 144),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 151),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 161),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 165),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 95),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 176),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 206),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 210),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 58),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 221),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 2, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 4, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 105),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 109),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 276),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 280),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 120),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 291),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 311),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 351),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 17),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 5, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 407),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 64),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 50),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 74),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 84),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 8),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 30),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_type, 1, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 36),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_clause, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 46),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 241),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(779),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_clause, 2, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_null_direction, 1, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 3, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 306),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 106),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 171),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 177),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 185),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 195),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 201),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 110),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 207),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 145),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 211),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 115),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 216),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 222),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 230),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 236),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 121),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 242),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 250),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 129),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 141),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 265),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 271),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 59),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 277),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 281),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 286),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 96),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 292),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 300),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 152),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 89),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 320),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 340),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 346),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 352),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 360),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 375),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 18),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 65),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 396),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 402),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 69),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 408),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 416),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 431),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 453),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 23),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 481),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 75),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 51),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 79),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 31),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 85),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 9),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 156),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 37),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 100),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 41),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 162),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 47),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 135),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 166),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 312),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2, 0, 0),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0), SHIFT_REPEAT(533),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2, 0, 0),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(762),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 472),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 124),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 128),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 43),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 131),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 45),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2, 0, 0),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(423),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 134),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 137),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 139),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 143),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 3, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 150),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_type, 1, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 155),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 158),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 160),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 2, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 164),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 170),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 173),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 175),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 180),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 184),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 187),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 190),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 194),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 197),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 200),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 203),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 205),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 209),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 215),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 218),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 220),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 49),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 225),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 229),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 232),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 235),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_clause, 2, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 238),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 240),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 245),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 249),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 252),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 256),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 56),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 14),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selectable_expression, 1, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selectable_expression, 1, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 260),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 264),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 267),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 270),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 273),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 275),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 63),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 5),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 279),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 285),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 68),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 288),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 290),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 21),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 295),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 299),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 71),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 302),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 305),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 308),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 310),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 73),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 315),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 319),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 322),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 326),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 331),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 335),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 339),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 342),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 345),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 348),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 350),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 78),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 355),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 359),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 119),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 362),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 366),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 370),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 374),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 81),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 377),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 381),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 83),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 387),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 391),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 395),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 398),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 401),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 87),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 404),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 406),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 28),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 411),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 415),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 418),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 422),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 426),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 430),
  [890] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(741),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 433),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 437),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 444),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 448),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 452),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 455),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 459),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 465),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 94),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 476),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 480),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 483),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 487),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 493),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 500),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 508),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 99),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 102),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 104),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 35),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 108),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 114),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 40),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 117),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2, 0, 0),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2, 0, 0),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparable_list_repeat1, 2, 0, 0),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparable_list_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_type, 1, 0, 0),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 3, 0, 0),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2, 0, 0),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2, 0, 0), SHIFT_REPEAT(753),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2, 0, 0),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 1, 0, 0),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_expression, 4, 0, 0),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2, 0, 0),
  [1022] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 361),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 130),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 2, 0, 0),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 60),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 259),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 157),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 261),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 262),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 263),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 42),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 266),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 159),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 268),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 269),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 272),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 274),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 163),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 278),
  [1067] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_comment, 2, 0, 0),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_comment, 2, 0, 0),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 19),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 66),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 282),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 284),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_comparison_operator, 1, 0, 0),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 167),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 287),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 132),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 289),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 169),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_expression, 4, 0, 0),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 70),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 293),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 294),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 296),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 297),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 298),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 172),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 301),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 174),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 303),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 304),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 72),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 307),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 309),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 178),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 179),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 313),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 314),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 125),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 316),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 317),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 318),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 181),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 321),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 182),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 323),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 324),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 325),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 183),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 327),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 328),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 329),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 330),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 3, 0, 0),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 332),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 333),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 334),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 336),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 337),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 338),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 186),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 76),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 341),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 343),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 344),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 188),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 77),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 347),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 189),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 349),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 191),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 24),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 353),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 354),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 192),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 356),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 357),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 358),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 193),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 80),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 363),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 364),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 365),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 196),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 367),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 368),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 369),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 44),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 371),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 372),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 373),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 198),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 199),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 376),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter_type, 1, 0, 0),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 378),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 379),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 380),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 382),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 383),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 384),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 82),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 202),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_param, 3, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 26),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 204),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 385),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 386),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 388),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 389),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 390),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 392),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 393),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 394),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 208),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 86),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 397),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 5, 0, 0),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 399),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 400),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 403),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 212),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 405),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 10),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 214),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 409),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 410),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 412),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 413),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 414),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 90),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 417),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 217),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 419),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 420),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 421),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 423),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 424),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 425),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 219),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 427),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 428),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 429),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 133),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 432),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 434),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 435),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 436),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 223),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 438),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 439),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 440),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 441),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 442),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 443),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 224),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 445),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 446),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 447),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 136),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 449),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 450),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 451),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 226),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 92),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 454),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 227),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 456),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 457),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 458),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 228),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 460),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 461),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 462),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 463),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 464),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 466),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 467),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 468),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 231),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 3, 0, 0),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 138),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 469),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 470),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 471),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 32),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 473),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 474),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 475),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 233),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 477),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 478),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 479),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 234),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 97),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 482),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 126),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 484),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 485),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 486),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 488),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 489),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 490),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 491),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 492),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 237),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 494),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 495),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 496),
  [1481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 497),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 498),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 499),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 501),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 502),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 503),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 504),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 239),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 505),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 506),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 507),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 142),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 509),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 510),
  [1509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 511),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 512),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 513),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 11, 0, 514),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 52),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 127),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 101),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 243),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 244),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 103),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 246),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 247),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 248),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 54),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 251),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 107),
  [1541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 146),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 253),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 254),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 255),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 48),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 257),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 258),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 148),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 122),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 38),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 111),
  [1565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 113),
  [1567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 116),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 153),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 123),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 118),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 4, 0, 0),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1591] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 1, 0, 0),
  [1613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_expression, 3, 0, 12),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_type, 1, 0, 0),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 6, 0, 1),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expression, 2, 0, 0),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__soql_query_expression, 1, 0, 0),
  [1647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatting_comment, 2, 0, 0),
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
