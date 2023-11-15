#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 388
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 209
#define ALIAS_COUNT 1
#define TOKEN_COUNT 116
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_header_comment_token1 = 2,
  anon_sym_SLASH_SLASH_SLASH = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  aux_sym_select_clause_token1 = 6,
  anon_sym_COMMA = 7,
  aux_sym_soql_using_clause_token1 = 8,
  aux_sym_soql_using_clause_token2 = 9,
  aux_sym_using_scope_type_token1 = 10,
  aux_sym_using_scope_type_token2 = 11,
  aux_sym_using_scope_type_token3 = 12,
  aux_sym_using_scope_type_token4 = 13,
  aux_sym_using_scope_type_token5 = 14,
  aux_sym_using_scope_type_token6 = 15,
  aux_sym_using_scope_type_token7 = 16,
  aux_sym_type_of_clause_token1 = 17,
  aux_sym_type_of_clause_token2 = 18,
  aux_sym_when_expression_token1 = 19,
  aux_sym_when_expression_token2 = 20,
  aux_sym_else_expression_token1 = 21,
  aux_sym_group_by_clause_token1 = 22,
  aux_sym_group_by_clause_token2 = 23,
  aux_sym_for_clause_token1 = 24,
  aux_sym_for_type_token1 = 25,
  aux_sym_for_type_token2 = 26,
  aux_sym_for_type_token3 = 27,
  aux_sym_having_clause_token1 = 28,
  aux_sym_having_and_expression_token1 = 29,
  aux_sym_having_or_expression_token1 = 30,
  aux_sym_having_not_expression_token1 = 31,
  aux_sym_from_clause_token1 = 32,
  aux_sym_storage_alias_token1 = 33,
  aux_sym_fields_expression_token1 = 34,
  aux_sym_fields_type_token1 = 35,
  aux_sym_fields_type_token2 = 36,
  aux_sym_fields_type_token3 = 37,
  aux_sym_where_clause_token1 = 38,
  aux_sym_soql_with_clause_token1 = 39,
  aux_sym_soql_with_type_token1 = 40,
  aux_sym_soql_with_type_token2 = 41,
  aux_sym_soql_with_type_token3 = 42,
  aux_sym_with_user_id_type_token1 = 43,
  anon_sym_EQ = 44,
  aux_sym_with_record_visibility_expression_token1 = 45,
  aux_sym_with_record_visibility_param_token1 = 46,
  aux_sym_with_record_visibility_param_token2 = 47,
  aux_sym_with_record_visibility_param_token3 = 48,
  aux_sym_with_data_cat_expression_token1 = 49,
  aux_sym_with_data_cat_expression_token2 = 50,
  aux_sym_with_data_cat_filter_type_token1 = 51,
  aux_sym_with_data_cat_filter_type_token2 = 52,
  aux_sym_with_data_cat_filter_type_token3 = 53,
  aux_sym_with_data_cat_filter_type_token4 = 54,
  aux_sym_limit_clause_token1 = 55,
  aux_sym_offset_clause_token1 = 56,
  aux_sym_update_type_token1 = 57,
  aux_sym_update_type_token2 = 58,
  aux_sym_order_by_clause_token1 = 59,
  aux_sym_order_direction_token1 = 60,
  aux_sym_order_direction_token2 = 61,
  aux_sym_order_null_direction_token1 = 62,
  aux_sym_order_null_direction_token2 = 63,
  aux_sym_order_null_direction_token3 = 64,
  aux_sym_geo_location_type_token1 = 65,
  aux_sym_function_expression_token1 = 66,
  anon_sym_DOT = 67,
  aux_sym_all_rows_clause_token1 = 68,
  aux_sym_boolean_token1 = 69,
  aux_sym_boolean_token2 = 70,
  anon_sym_BANG_EQ = 71,
  anon_sym_LT_GT = 72,
  anon_sym_LT = 73,
  anon_sym_LT_EQ = 74,
  anon_sym_GT = 75,
  anon_sym_GT_EQ = 76,
  aux_sym_value_comparison_operator_token1 = 77,
  aux_sym_set_comparison_operator_token1 = 78,
  aux_sym_set_comparison_operator_token2 = 79,
  aux_sym_set_comparison_operator_token3 = 80,
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
  sym_soql_using_clause = 125,
  sym_using_scope_type = 126,
  sym_type_of_clause = 127,
  sym_when_expression = 128,
  sym_else_expression = 129,
  sym_group_by_clause = 130,
  sym__group_by_expression = 131,
  sym_for_clause = 132,
  sym_for_type = 133,
  sym_having_clause = 134,
  sym__having_boolean_expression = 135,
  sym_having_and_expression = 136,
  sym_having_or_expression = 137,
  sym_having_not_expression = 138,
  sym__having_condition_expression = 139,
  sym_having_comparison_expression = 140,
  sym__having_comparison = 141,
  sym__having_value_comparison = 142,
  sym__having_set_comparison = 143,
  sym_from_clause = 144,
  sym_storage_identifier = 145,
  sym_storage_alias = 146,
  sym_fields_expression = 147,
  sym_fields_type = 148,
  sym_where_clause = 149,
  sym__boolean_expression = 150,
  sym_and_expression = 151,
  sym_or_expression = 152,
  sym_not_expression = 153,
  sym__condition_expression = 154,
  sym_comparison_expression = 155,
  sym__comparison = 156,
  sym__value_comparison = 157,
  sym__set_comparison = 158,
  sym_soql_with_clause = 159,
  sym_soql_with_type = 160,
  sym_with_user_id_type = 161,
  sym_with_record_visibility_expression = 162,
  sym_with_record_visibility_param = 163,
  sym_with_data_cat_expression = 164,
  sym_with_data_cat_filter = 165,
  sym_with_data_cat_filter_type = 166,
  sym_limit_clause = 167,
  sym_offset_clause = 168,
  sym_update_clause = 169,
  sym_update_type = 170,
  sym_alias_expression = 171,
  sym_order_by_clause = 172,
  sym_order_expression = 173,
  sym_order_direction = 174,
  sym_order_null_direction = 175,
  sym_geo_location_type = 176,
  sym__value_expression = 177,
  sym_function_expression = 178,
  sym_dotted_identifier = 179,
  sym_field_identifier = 180,
  sym_field_list = 181,
  sym_boolean = 182,
  sym_value_comparison_operator = 183,
  sym_set_comparison_operator = 184,
  sym_date_literal = 185,
  sym_date_literal_with_param = 186,
  sym__function_name = 187,
  sym_null_literal = 188,
  sym__soql_literal = 189,
  aux_sym_source_file_repeat1 = 190,
  aux_sym_select_clause_repeat1 = 191,
  aux_sym_type_of_clause_repeat1 = 192,
  aux_sym__group_by_expression_repeat1 = 193,
  aux_sym_for_clause_repeat1 = 194,
  aux_sym_having_and_expression_repeat1 = 195,
  aux_sym_having_or_expression_repeat1 = 196,
  aux_sym__having_set_comparison_repeat1 = 197,
  aux_sym_from_clause_repeat1 = 198,
  aux_sym_and_expression_repeat1 = 199,
  aux_sym_or_expression_repeat1 = 200,
  aux_sym_with_record_visibility_expression_repeat1 = 201,
  aux_sym_with_data_cat_expression_repeat1 = 202,
  aux_sym_with_data_cat_filter_repeat1 = 203,
  aux_sym_update_clause_repeat1 = 204,
  aux_sym_order_by_clause_repeat1 = 205,
  aux_sym_function_expression_repeat1 = 206,
  aux_sym_dotted_identifier_repeat1 = 207,
  aux_sym_field_list_repeat1 = 208,
  anon_alias_sym_NOT_IN = 209,
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
  [aux_sym_soql_using_clause_token2] = "USING_SCOPE",
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
  [aux_sym_group_by_clause_token2] = "GROUP_BY",
  [aux_sym_for_clause_token1] = "FOR",
  [aux_sym_for_type_token1] = "UPDATE",
  [aux_sym_for_type_token2] = "REFERENCE",
  [aux_sym_for_type_token3] = "VIEW",
  [aux_sym_having_clause_token1] = "HAVING",
  [aux_sym_having_and_expression_token1] = "AND",
  [aux_sym_having_or_expression_token1] = "OR",
  [aux_sym_having_not_expression_token1] = "NOT",
  [aux_sym_from_clause_token1] = "FROM",
  [aux_sym_storage_alias_token1] = "AS",
  [aux_sym_fields_expression_token1] = "FIELDS",
  [aux_sym_fields_type_token1] = "ALL",
  [aux_sym_fields_type_token2] = "CUSTOM",
  [aux_sym_fields_type_token3] = "STANDARD",
  [aux_sym_where_clause_token1] = "WHERE",
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
  [aux_sym_with_data_cat_expression_token2] = "DATA_CATEGORY",
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
  [aux_sym_order_null_direction_token2] = "NULLS_FIRST",
  [aux_sym_order_null_direction_token3] = "NULLS_LAST",
  [aux_sym_geo_location_type_token1] = "identifier",
  [aux_sym_function_expression_token1] = "identifier",
  [anon_sym_DOT] = ".",
  [aux_sym_all_rows_clause_token1] = "ALL_ROWS",
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
  [aux_sym_set_comparison_operator_token2] = "INCLUDES",
  [aux_sym_set_comparison_operator_token3] = "EXCLUDES",
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
  [sym__having_boolean_expression] = "_having_boolean_expression",
  [sym_having_and_expression] = "having_and_expression",
  [sym_having_or_expression] = "having_or_expression",
  [sym_having_not_expression] = "having_not_expression",
  [sym__having_condition_expression] = "_having_condition_expression",
  [sym_having_comparison_expression] = "having_comparison_expression",
  [sym__having_comparison] = "_having_comparison",
  [sym__having_value_comparison] = "_having_value_comparison",
  [sym__having_set_comparison] = "_having_set_comparison",
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
  [aux_sym_having_and_expression_repeat1] = "having_and_expression_repeat1",
  [aux_sym_having_or_expression_repeat1] = "having_or_expression_repeat1",
  [aux_sym__having_set_comparison_repeat1] = "_having_set_comparison_repeat1",
  [aux_sym_from_clause_repeat1] = "from_clause_repeat1",
  [aux_sym_and_expression_repeat1] = "and_expression_repeat1",
  [aux_sym_or_expression_repeat1] = "or_expression_repeat1",
  [aux_sym_with_record_visibility_expression_repeat1] = "with_record_visibility_expression_repeat1",
  [aux_sym_with_data_cat_expression_repeat1] = "with_data_cat_expression_repeat1",
  [aux_sym_with_data_cat_filter_repeat1] = "with_data_cat_filter_repeat1",
  [aux_sym_update_clause_repeat1] = "update_clause_repeat1",
  [aux_sym_order_by_clause_repeat1] = "order_by_clause_repeat1",
  [aux_sym_function_expression_repeat1] = "function_expression_repeat1",
  [aux_sym_dotted_identifier_repeat1] = "dotted_identifier_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [anon_alias_sym_NOT_IN] = "NOT_IN",
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
  [aux_sym_soql_using_clause_token2] = aux_sym_soql_using_clause_token1,
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
  [aux_sym_group_by_clause_token2] = aux_sym_group_by_clause_token1,
  [aux_sym_for_clause_token1] = aux_sym_for_clause_token1,
  [aux_sym_for_type_token1] = aux_sym_for_type_token1,
  [aux_sym_for_type_token2] = aux_sym_for_type_token2,
  [aux_sym_for_type_token3] = aux_sym_for_type_token3,
  [aux_sym_having_clause_token1] = aux_sym_having_clause_token1,
  [aux_sym_having_and_expression_token1] = aux_sym_having_and_expression_token1,
  [aux_sym_having_or_expression_token1] = aux_sym_having_or_expression_token1,
  [aux_sym_having_not_expression_token1] = aux_sym_having_not_expression_token1,
  [aux_sym_from_clause_token1] = aux_sym_from_clause_token1,
  [aux_sym_storage_alias_token1] = aux_sym_storage_alias_token1,
  [aux_sym_fields_expression_token1] = aux_sym_fields_expression_token1,
  [aux_sym_fields_type_token1] = aux_sym_fields_type_token1,
  [aux_sym_fields_type_token2] = aux_sym_fields_type_token2,
  [aux_sym_fields_type_token3] = aux_sym_fields_type_token3,
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
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
  [aux_sym_with_data_cat_expression_token2] = aux_sym_with_data_cat_expression_token1,
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
  [aux_sym_order_null_direction_token2] = aux_sym_order_null_direction_token1,
  [aux_sym_order_null_direction_token3] = aux_sym_order_null_direction_token3,
  [aux_sym_geo_location_type_token1] = sym_identifier,
  [aux_sym_function_expression_token1] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_all_rows_clause_token1] = aux_sym_all_rows_clause_token1,
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
  [sym__having_boolean_expression] = sym__having_boolean_expression,
  [sym_having_and_expression] = sym_having_and_expression,
  [sym_having_or_expression] = sym_having_or_expression,
  [sym_having_not_expression] = sym_having_not_expression,
  [sym__having_condition_expression] = sym__having_condition_expression,
  [sym_having_comparison_expression] = sym_having_comparison_expression,
  [sym__having_comparison] = sym__having_comparison,
  [sym__having_value_comparison] = sym__having_value_comparison,
  [sym__having_set_comparison] = sym__having_set_comparison,
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
  [aux_sym_having_and_expression_repeat1] = aux_sym_having_and_expression_repeat1,
  [aux_sym_having_or_expression_repeat1] = aux_sym_having_or_expression_repeat1,
  [aux_sym__having_set_comparison_repeat1] = aux_sym__having_set_comparison_repeat1,
  [aux_sym_from_clause_repeat1] = aux_sym_from_clause_repeat1,
  [aux_sym_and_expression_repeat1] = aux_sym_and_expression_repeat1,
  [aux_sym_or_expression_repeat1] = aux_sym_or_expression_repeat1,
  [aux_sym_with_record_visibility_expression_repeat1] = aux_sym_with_record_visibility_expression_repeat1,
  [aux_sym_with_data_cat_expression_repeat1] = aux_sym_with_data_cat_expression_repeat1,
  [aux_sym_with_data_cat_filter_repeat1] = aux_sym_with_data_cat_filter_repeat1,
  [aux_sym_update_clause_repeat1] = aux_sym_update_clause_repeat1,
  [aux_sym_order_by_clause_repeat1] = aux_sym_order_by_clause_repeat1,
  [aux_sym_function_expression_repeat1] = aux_sym_function_expression_repeat1,
  [aux_sym_dotted_identifier_repeat1] = aux_sym_dotted_identifier_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
  [anon_alias_sym_NOT_IN] = anon_alias_sym_NOT_IN,
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
  [aux_sym_soql_using_clause_token2] = {
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
  [aux_sym_group_by_clause_token2] = {
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
  [aux_sym_having_and_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_having_or_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_having_not_expression_token1] = {
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
  [aux_sym_with_data_cat_expression_token2] = {
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
  [aux_sym_order_null_direction_token3] = {
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
  [aux_sym_all_rows_clause_token1] = {
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
  [sym__having_boolean_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_having_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_having_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_having_not_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__having_condition_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_having_comparison_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__having_comparison] = {
    .visible = false,
    .named = true,
  },
  [sym__having_value_comparison] = {
    .visible = false,
    .named = true,
  },
  [sym__having_set_comparison] = {
    .visible = false,
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
  [aux_sym_having_and_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_having_or_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__having_set_comparison_repeat1] = {
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
  [anon_alias_sym_NOT_IN] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_function_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function_name] = "function_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function_name, 0},
  [1] =
    {field_function_name, 0, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [1] = aux_sym_order_by_clause_token1,
  },
  [4] = {
    [0] = anon_alias_sym_NOT_IN,
    [1] = anon_alias_sym_NOT_IN,
  },
  [5] = {
    [0] = aux_sym_order_null_direction_token3,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_string_literal_character_set_1(int32_t c) {
  return (c < 'T'
    ? (c < 'B'
      ? (c < '%'
        ? c == '"'
        : (c <= '%' || c == '\''))
      : (c <= 'B' || (c < 'N'
        ? c == 'F'
        : (c <= 'N' || c == 'R'))))
    : (c <= 'U' || (c < 'f'
      ? (c < '_'
        ? c == '\\'
        : (c <= '_' || c == 'b'))
      : (c <= 'f' || (c < 'r'
        ? c == 'n'
        : (c <= 'r' || (c >= 't' && c <= 'u')))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(632);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(640);
      if (lookahead == ')') ADVANCE(641);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == ',') ADVANCE(643);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(722);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(760);
      if (lookahead == '<') ADVANCE(728);
      if (lookahead == '=') ADVANCE(693);
      if (lookahead == '>') ADVANCE(730);
      if (lookahead == '?') ADVANCE(761);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(194);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(79);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(200);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(69);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(261);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(415);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(289);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(282);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(72);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(413);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(290);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(771);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(765);
      if (lookahead == '\\') ADVANCE(627);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(640);
      if (lookahead == ')') ADVANCE(641);
      if (lookahead == ',') ADVANCE(643);
      if (lookahead == '.') ADVANCE(722);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(833);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(832);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(640);
      if (lookahead == ')') ADVANCE(641);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(807);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(640);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(640);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(807);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(808);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(845);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(640);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(807);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(824);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(641);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(444);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(797);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(762);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(622);
      if (lookahead == 'Z') ADVANCE(778);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(608);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(633);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(638);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(614);
      if (lookahead == '1') ADVANCE(609);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(615);
      if (lookahead == '3') ADVANCE(607);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(618);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(610);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(619);
      END_STATE();
    case 23:
      if (lookahead == '9') ADVANCE(20);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(308);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(406);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(573);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(237);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(253);
      END_STATE();
    case 24:
      if (lookahead == '9') ADVANCE(21);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(309);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(409);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(574);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(238);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(254);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(613);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(611);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(612);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(726);
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
      if (lookahead == 'Z') ADVANCE(778);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(608);
      END_STATE();
    case 44:
      if (lookahead == 'Z') ADVANCE(778);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'Z') ADVANCE(778);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(517);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(267);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(125);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(423);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(351);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(274);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(100);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(222);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(541);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(171);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(173);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(169);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(352);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(555);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(425);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(426);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(427);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(424);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(495);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(590);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(367);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(337);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(211);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(428);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(353);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(432);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(434);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(500);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(605);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(606);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(543);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(544);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 123:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(380);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(319);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(678);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(700);
      END_STATE();
    case 124:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(297);
      END_STATE();
    case 125:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(252);
      END_STATE();
    case 126:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(713);
      END_STATE();
    case 127:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 128:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(712);
      END_STATE();
    case 129:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(567);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 130:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(405);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(416);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(511);
      END_STATE();
    case 131:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(326);
      END_STATE();
    case 132:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(212);
      END_STATE();
    case 133:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 134:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 135:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(523);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 140:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 141:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 142:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 146:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(671);
      END_STATE();
    case 147:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(656);
      END_STATE();
    case 148:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(692);
      END_STATE();
    case 149:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(684);
      END_STATE();
    case 150:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(647);
      END_STATE();
    case 151:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(689);
      END_STATE();
    case 152:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(695);
      END_STATE();
    case 153:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(77);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(294);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(390);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(570);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(229);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 154:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 155:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 156:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(76);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(293);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(389);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(569);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(228);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 157:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(391);
      END_STATE();
    case 158:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 159:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(481);
      END_STATE();
    case 160:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 161:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 162:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 163:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 164:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 165:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 166:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(582);
      END_STATE();
    case 167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(83);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 168:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(311);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(411);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(576);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(251);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(256);
      END_STATE();
    case 170:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 171:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 172:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(662);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(204);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(418);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(430);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 261:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(265);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(673);
      END_STATE();
    case 262:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(265);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 263:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(654);
      END_STATE();
    case 264:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 265:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(507);
      END_STATE();
    case 266:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(401);
      END_STATE();
    case 267:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(310);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(410);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(575);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(239);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(255);
      END_STATE();
    case 268:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(644);
      END_STATE();
    case 269:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(670);
      END_STATE();
    case 270:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(708);
      END_STATE();
    case 271:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(648);
      END_STATE();
    case 272:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(397);
      END_STATE();
    case 273:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(379);
      END_STATE();
    case 274:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(463);
      END_STATE();
    case 275:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 276:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 277:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(687);
      END_STATE();
    case 278:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(742);
      END_STATE();
    case 279:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(744);
      END_STATE();
    case 280:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(743);
      END_STATE();
    case 281:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(288);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 282:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(175);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 283:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(496);
      END_STATE();
    case 284:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(484);
      END_STATE();
    case 285:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(227);
      END_STATE();
    case 286:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(296);
      END_STATE();
    case 287:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 288:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 289:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 290:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 291:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 292:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 293:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 294:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 295:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 296:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 297:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 298:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 299:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 300:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      END_STATE();
    case 301:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 302:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 303:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(538);
      END_STATE();
    case 304:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 305:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(468);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 306:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 307:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 308:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(513);
      END_STATE();
    case 309:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 310:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 311:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 312:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(739);
      END_STATE();
    case 313:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(741);
      END_STATE();
    case 314:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(740);
      END_STATE();
    case 315:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(178);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(298);
      END_STATE();
    case 316:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(496);
      END_STATE();
    case 317:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(484);
      END_STATE();
    case 318:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(295);
      END_STATE();
    case 319:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(682);
      END_STATE();
    case 320:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(764);
      END_STATE();
    case 321:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 322:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 323:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 324:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(499);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(195);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(131);
      END_STATE();
    case 325:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(499);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(131);
      END_STATE();
    case 326:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      END_STATE();
    case 327:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 328:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 329:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 330:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 331:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 332:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 333:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 334:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 335:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 336:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 337:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 338:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 339:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 340:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 341:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 342:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 343:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 344:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 345:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(676);
      END_STATE();
    case 346:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(653);
      END_STATE();
    case 347:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(683);
      END_STATE();
    case 348:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 349:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 350:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(393);
      END_STATE();
    case 351:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(603);
      END_STATE();
    case 352:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(407);
      END_STATE();
    case 353:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 354:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 355:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 356:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(658);
      END_STATE();
    case 357:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(657);
      END_STATE();
    case 358:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(657);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 359:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(718);
      END_STATE();
    case 360:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 361:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 362:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 363:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 364:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 365:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 366:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 367:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 368:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(530);
      END_STATE();
    case 369:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(487);
      END_STATE();
    case 370:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(532);
      END_STATE();
    case 371:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 372:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 373:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 374:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 375:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(547);
      END_STATE();
    case 376:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(545);
      END_STATE();
    case 377:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 378:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 379:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(759);
      END_STATE();
    case 380:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(581);
      END_STATE();
    case 381:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 382:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(517);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 383:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 384:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 385:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 386:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 387:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 388:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 389:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 390:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 391:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 392:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 393:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 394:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 395:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(459);
      END_STATE();
    case 396:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 397:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 398:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 399:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 400:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 401:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 402:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 403:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 404:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 405:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 406:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 407:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 408:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 409:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 410:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(372);
      END_STATE();
    case 411:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 412:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(660);
      END_STATE();
    case 413:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 414:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 415:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      END_STATE();
    case 416:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(395);
      END_STATE();
    case 418:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(223);
      END_STATE();
    case 419:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(489);
      END_STATE();
    case 420:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 421:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 422:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(552);
      END_STATE();
    case 423:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(569);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 424:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(576);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(256);
      END_STATE();
    case 425:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(577);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(257);
      END_STATE();
    case 426:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(578);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(258);
      END_STATE();
    case 427:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(579);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(259);
      END_STATE();
    case 428:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(663);
      END_STATE();
    case 429:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 430:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 431:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(710);
      END_STATE();
    case 432:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(751);
      END_STATE();
    case 433:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(752);
      END_STATE();
    case 434:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(750);
      END_STATE();
    case 435:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(748);
      END_STATE();
    case 436:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(749);
      END_STATE();
    case 437:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(747);
      END_STATE();
    case 438:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 439:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(758);
      END_STATE();
    case 440:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(756);
      END_STATE();
    case 441:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(754);
      END_STATE();
    case 442:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(755);
      END_STATE();
    case 443:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(753);
      END_STATE();
    case 444:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(672);
      END_STATE();
    case 445:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(595);
      END_STATE();
    case 446:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 447:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 448:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 449:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 450:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 451:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 452:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 453:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 454:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 455:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 456:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 457:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 458:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 459:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 460:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 461:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 462:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 463:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 464:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 465:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 466:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 467:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 468:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 469:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 470:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 471:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 472:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 473:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(558);
      END_STATE();
    case 474:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 475:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(560);
      END_STATE();
    case 476:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 477:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(562);
      END_STATE();
    case 478:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(563);
      END_STATE();
    case 479:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(723);
      END_STATE();
    case 480:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(714);
      END_STATE();
    case 481:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(680);
      END_STATE();
    case 482:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(735);
      END_STATE();
    case 483:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(734);
      END_STATE();
    case 484:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(759);
      END_STATE();
    case 485:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(745);
      END_STATE();
    case 486:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(746);
      END_STATE();
    case 487:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(696);
      END_STATE();
    case 488:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(697);
      END_STATE();
    case 489:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(650);
      END_STATE();
    case 490:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 491:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 492:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 493:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      END_STATE();
    case 494:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 495:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(539);
      END_STATE();
    case 496:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 497:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(546);
      END_STATE();
    case 498:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(287);
      END_STATE();
    case 499:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 500:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(519);
      END_STATE();
    case 501:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 502:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(520);
      END_STATE();
    case 503:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 504:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 505:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(183);
      END_STATE();
    case 506:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 507:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      END_STATE();
    case 508:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(526);
      END_STATE();
    case 509:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      END_STATE();
    case 510:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      END_STATE();
    case 511:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(542);
      END_STATE();
    case 512:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(550);
      END_STATE();
    case 513:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      END_STATE();
    case 514:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 515:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      END_STATE();
    case 516:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      END_STATE();
    case 517:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(674);
      END_STATE();
    case 518:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      END_STATE();
    case 519:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(717);
      END_STATE();
    case 520:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      END_STATE();
    case 521:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(704);
      END_STATE();
    case 522:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(706);
      END_STATE();
    case 523:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(642);
      END_STATE();
    case 524:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(709);
      END_STATE();
    case 525:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(694);
      END_STATE();
    case 526:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(716);
      END_STATE();
    case 527:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 528:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 529:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(286);
      END_STATE();
    case 530:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      END_STATE();
    case 531:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 532:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 533:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      END_STATE();
    case 534:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      END_STATE();
    case 535:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 536:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(602);
      END_STATE();
    case 537:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      END_STATE();
    case 538:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(599);
      END_STATE();
    case 539:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      END_STATE();
    case 540:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(504);
      END_STATE();
    case 541:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 542:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      END_STATE();
    case 543:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 544:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 545:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      END_STATE();
    case 546:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 547:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      END_STATE();
    case 548:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 549:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      END_STATE();
    case 550:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 551:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 552:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(400);
      END_STATE();
    case 553:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 554:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 555:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 556:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      END_STATE();
    case 557:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 558:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 559:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 560:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      END_STATE();
    case 561:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      END_STATE();
    case 562:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      END_STATE();
    case 563:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      END_STATE();
    case 564:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 565:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(412);
      END_STATE();
    case 566:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 567:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(462);
      END_STATE();
    case 568:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(419);
      END_STATE();
    case 569:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 570:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 571:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 572:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 573:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 574:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 575:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 576:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 577:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 578:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 579:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 580:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(292);
      END_STATE();
    case 581:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(182);
      END_STATE();
    case 582:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(300);
      END_STATE();
    case 583:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(669);
      END_STATE();
    case 584:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(702);
      END_STATE();
    case 585:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(738);
      END_STATE();
    case 586:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(703);
      END_STATE();
    case 587:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 588:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(479);
      END_STATE();
    case 589:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(509);
      END_STATE();
    case 590:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(165);
      END_STATE();
    case 591:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(527);
      END_STATE();
    case 592:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(525);
      END_STATE();
    case 593:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 594:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(737);
      END_STATE();
    case 595:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(699);
      END_STATE();
    case 596:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(736);
      END_STATE();
    case 597:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(651);
      END_STATE();
    case 598:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(652);
      END_STATE();
    case 599:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 600:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(496);
      END_STATE();
    case 601:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(529);
      END_STATE();
    case 602:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 603:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(54);
      END_STATE();
    case 604:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(484);
      END_STATE();
    case 605:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(485);
      END_STATE();
    case 606:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(486);
      END_STATE();
    case 607:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(777);
      END_STATE();
    case 608:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(626);
      END_STATE();
    case 609:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(13);
      END_STATE();
    case 610:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(25);
      END_STATE();
    case 611:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(620);
      END_STATE();
    case 612:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(621);
      END_STATE();
    case 613:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(625);
      END_STATE();
    case 614:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 615:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(777);
      END_STATE();
    case 616:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(775);
      END_STATE();
    case 617:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(776);
      END_STATE();
    case 618:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(777);
      END_STATE();
    case 619:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 620:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 621:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      END_STATE();
    case 622:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 623:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 624:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(780);
      END_STATE();
    case 625:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 626:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 627:
      if (sym_string_literal_character_set_1(lookahead)) ADVANCE(2);
      END_STATE();
    case 628:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 629:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 630:
      if (eof) ADVANCE(632);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '(') ADVANCE(640);
      if (lookahead == ')') ADVANCE(641);
      if (lookahead == ',') ADVANCE(643);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(722);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '<') ADVANCE(728);
      if (lookahead == '=') ADVANCE(693);
      if (lookahead == '>') ADVANCE(730);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(503);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(232);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(305);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(69);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(262);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(414);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(304);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(630)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(775);
      END_STATE();
    case 631:
      if (eof) ADVANCE(632);
      if (lookahead == ')') ADVANCE(641);
      if (lookahead == ',') ADVANCE(643);
      if (lookahead == '.') ADVANCE(722);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(833);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(818);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(830);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(804);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(798);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(826);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(802);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(631)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '/') ADVANCE(638);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_soql_using_clause_token1);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_soql_using_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_soql_using_clause_token2);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token1);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token2);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token3);
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token4);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token5);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token6);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token7);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token2);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_when_expression_token1);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_when_expression_token2);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_else_expression_token1);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token2);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_for_type_token2);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_having_clause_token1);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_having_and_expression_token1);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_having_or_expression_token1);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_having_or_expression_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_having_not_expression_token1);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_having_not_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_fields_expression_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_fields_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_fields_type_token1);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_fields_type_token2);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_fields_type_token3);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_soql_with_clause_token1);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_soql_with_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token2);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token3);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_with_user_id_type_token1);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_expression_token1);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token1);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token2);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token3);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_with_data_cat_expression_token1);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_with_data_cat_expression_token2);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token1);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token2);
      if (lookahead == '_') ADVANCE(398);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token3);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token4);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_update_type_token1);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_update_type_token2);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token1);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token2);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token3);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token3);
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_all_rows_clause_token1);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(729);
      if (lookahead == '>') ADVANCE(727);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(731);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_value_comparison_operator_token1);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token2);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token3);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_date_literal_token1);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_date_literal_token2);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_date_literal_token3);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_date_literal_token4);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_date_literal_token5);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_date_literal_token6);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_date_literal_token7);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_date_literal_token8);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_date_literal_token9);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_date_literal_token10);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_date_literal_token11);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_date_literal_token12);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_date_literal_token13);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_date_literal_token14);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_date_literal_token15);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_date_literal_token16);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_date_literal_token17);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_date_literal_token18);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_date_literal_token19);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_date_literal_token20);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_date_literal_token21);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_date_literal_token22);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_date_literal_token23);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_date_literal_with_param_token1);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_bound_apex_expression);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(714);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(767);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(767);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(769);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(774);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(768);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(775);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(776);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_date_time);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_currency_literal);
      if (lookahead == '.') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_currency_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(780);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(800);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(786);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
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
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 630},
  [13] = {.lex_state = 630},
  [14] = {.lex_state = 630},
  [15] = {.lex_state = 630},
  [16] = {.lex_state = 630},
  [17] = {.lex_state = 630},
  [18] = {.lex_state = 630},
  [19] = {.lex_state = 630},
  [20] = {.lex_state = 630},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 631},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 631},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 631},
  [33] = {.lex_state = 631},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 631},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 631},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 631},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 630},
  [59] = {.lex_state = 7},
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
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 630},
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
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 630},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
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
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 8},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 8},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 8},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 8},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 630},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 630},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 8},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 8},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 5},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 630},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 5},
  [332] = {.lex_state = 5},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 630},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 5},
  [343] = {.lex_state = 5},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 634},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 5},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 5},
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
  [373] = {.lex_state = 630},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 5},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 5},
  [381] = {.lex_state = 634},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {(TSStateId)(-1)},
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
    [aux_sym_soql_using_clause_token2] = ACTIONS(1),
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
    [aux_sym_group_by_clause_token2] = ACTIONS(1),
    [aux_sym_for_clause_token1] = ACTIONS(1),
    [aux_sym_for_type_token1] = ACTIONS(1),
    [aux_sym_for_type_token2] = ACTIONS(1),
    [aux_sym_for_type_token3] = ACTIONS(1),
    [aux_sym_having_clause_token1] = ACTIONS(1),
    [aux_sym_having_and_expression_token1] = ACTIONS(1),
    [aux_sym_having_or_expression_token1] = ACTIONS(1),
    [aux_sym_having_not_expression_token1] = ACTIONS(1),
    [aux_sym_from_clause_token1] = ACTIONS(1),
    [aux_sym_storage_alias_token1] = ACTIONS(1),
    [aux_sym_fields_expression_token1] = ACTIONS(1),
    [aux_sym_fields_type_token1] = ACTIONS(1),
    [aux_sym_fields_type_token2] = ACTIONS(1),
    [aux_sym_fields_type_token3] = ACTIONS(1),
    [aux_sym_where_clause_token1] = ACTIONS(1),
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
    [aux_sym_with_data_cat_expression_token2] = ACTIONS(1),
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
    [aux_sym_order_null_direction_token3] = ACTIONS(1),
    [aux_sym_geo_location_type_token1] = ACTIONS(1),
    [aux_sym_function_expression_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_all_rows_clause_token1] = ACTIONS(1),
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
    [aux_sym_set_comparison_operator_token2] = ACTIONS(1),
    [aux_sym_set_comparison_operator_token3] = ACTIONS(1),
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
    [sym_source_file] = STATE(377),
    [sym_header_comment] = STATE(306),
    [sym_formatting_comment] = STATE(1),
    [sym__soql_query_expression] = STATE(364),
    [sym_soql_query_body] = STATE(362),
    [sym_select_clause] = STATE(303),
    [aux_sym_source_file_repeat1] = STATE(143),
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
    STATE(238), 1,
      sym__soql_literal,
    STATE(303), 1,
      sym_select_clause,
    STATE(354), 1,
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
    STATE(62), 4,
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
    STATE(243), 1,
      sym__soql_literal,
    STATE(303), 1,
      sym_select_clause,
    STATE(330), 1,
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
    STATE(62), 4,
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
    STATE(228), 1,
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
    STATE(62), 4,
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
    STATE(62), 4,
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
    STATE(250), 1,
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
    STATE(258), 4,
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
  [338] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(13), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(17), 1,
      aux_sym_null_literal_token1,
    ACTIONS(43), 1,
      sym_bound_apex_expression,
    STATE(7), 1,
      sym_formatting_comment,
    STATE(114), 1,
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
    STATE(62), 4,
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
  [402] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(13), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(17), 1,
      aux_sym_null_literal_token1,
    ACTIONS(45), 1,
      sym_bound_apex_expression,
    STATE(8), 1,
      sym_formatting_comment,
    STATE(290), 1,
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
    STATE(62), 4,
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
  [466] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(13), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(17), 1,
      aux_sym_null_literal_token1,
    ACTIONS(47), 1,
      sym_bound_apex_expression,
    STATE(9), 1,
      sym_formatting_comment,
    STATE(254), 1,
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
    STATE(62), 4,
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
  [530] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(33), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(37), 1,
      aux_sym_null_literal_token1,
    ACTIONS(49), 1,
      sym_bound_apex_expression,
    STATE(10), 1,
      sym_formatting_comment,
    STATE(264), 1,
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
    STATE(258), 4,
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
  [594] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(11), 1,
      sym_formatting_comment,
    ACTIONS(53), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    ACTIONS(51), 30,
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
  [639] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_DOT,
    STATE(12), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(60), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(55), 24,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [681] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(64), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(13), 1,
      sym_formatting_comment,
    ACTIONS(66), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(62), 24,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [725] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(14), 1,
      sym_formatting_comment,
    ACTIONS(60), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(55), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      anon_sym_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [764] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(64), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(15), 1,
      sym_formatting_comment,
    ACTIONS(72), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(68), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [808] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(16), 1,
      sym_formatting_comment,
    ACTIONS(76), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(74), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [843] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(17), 1,
      sym_formatting_comment,
    ACTIONS(80), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(78), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [878] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(18), 1,
      sym_formatting_comment,
    ACTIONS(72), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(68), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [913] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(19), 1,
      sym_formatting_comment,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(82), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [948] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(20), 1,
      sym_formatting_comment,
    ACTIONS(88), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_set_comparison_operator_token1,
    ACTIONS(86), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_not_expression_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
      aux_sym_order_null_direction_token1,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [981] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_soql_using_clause_token1,
    ACTIONS(94), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_where_clause_token1,
    ACTIONS(102), 1,
      aux_sym_soql_with_clause_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(108), 1,
      aux_sym_order_by_clause_token1,
    STATE(21), 1,
      sym_formatting_comment,
    STATE(22), 1,
      sym_soql_using_clause,
    STATE(28), 1,
      sym_where_clause,
    STATE(42), 1,
      sym_soql_with_clause,
    STATE(50), 1,
      sym_group_by_clause,
    STATE(90), 1,
      sym_order_by_clause,
    STATE(142), 1,
      sym_limit_clause,
    STATE(167), 1,
      sym_offset_clause,
    STATE(201), 1,
      sym_for_clause,
    STATE(308), 1,
      sym_update_clause,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1046] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_where_clause_token1,
    ACTIONS(102), 1,
      aux_sym_soql_with_clause_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(108), 1,
      aux_sym_order_by_clause_token1,
    STATE(22), 1,
      sym_formatting_comment,
    STATE(31), 1,
      sym_where_clause,
    STATE(40), 1,
      sym_soql_with_clause,
    STATE(63), 1,
      sym_group_by_clause,
    STATE(87), 1,
      sym_order_by_clause,
    STATE(140), 1,
      sym_limit_clause,
    STATE(175), 1,
      sym_offset_clause,
    STATE(218), 1,
      sym_for_clause,
    STATE(291), 1,
      sym_update_clause,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1105] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(112), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(118), 1,
      aux_sym_set_comparison_operator_token1,
    STATE(10), 1,
      sym_value_comparison_operator,
    STATE(23), 1,
      sym_formatting_comment,
    STATE(279), 1,
      sym__having_comparison,
    STATE(313), 1,
      sym_set_comparison_operator,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(120), 2,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
    STATE(280), 2,
      sym__having_value_comparison,
      sym__having_set_comparison,
    ACTIONS(114), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [1147] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(112), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(118), 1,
      aux_sym_set_comparison_operator_token1,
    STATE(5), 1,
      sym_value_comparison_operator,
    STATE(24), 1,
      sym_formatting_comment,
    STATE(65), 1,
      sym__comparison,
    STATE(239), 1,
      sym_set_comparison_operator,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(120), 2,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
    STATE(74), 2,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(114), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [1189] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(112), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(118), 1,
      aux_sym_set_comparison_operator_token1,
    STATE(6), 1,
      sym_value_comparison_operator,
    STATE(25), 1,
      sym_formatting_comment,
    STATE(225), 1,
      sym__comparison,
    STATE(242), 1,
      sym_set_comparison_operator,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(120), 2,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
    STATE(224), 2,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(114), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [1231] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(112), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(118), 1,
      aux_sym_set_comparison_operator_token1,
    STATE(7), 1,
      sym_value_comparison_operator,
    STATE(26), 1,
      sym_formatting_comment,
    STATE(104), 1,
      sym__having_comparison,
    STATE(288), 1,
      sym_set_comparison_operator,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(120), 2,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
    STATE(103), 2,
      sym__having_value_comparison,
      sym__having_set_comparison,
    ACTIONS(114), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [1273] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(27), 1,
      sym_formatting_comment,
    STATE(32), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(124), 11,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [1304] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(102), 1,
      aux_sym_soql_with_clause_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(108), 1,
      aux_sym_order_by_clause_token1,
    STATE(28), 1,
      sym_formatting_comment,
    STATE(40), 1,
      sym_soql_with_clause,
    STATE(63), 1,
      sym_group_by_clause,
    STATE(87), 1,
      sym_order_by_clause,
    STATE(140), 1,
      sym_limit_clause,
    STATE(175), 1,
      sym_offset_clause,
    STATE(218), 1,
      sym_for_clause,
    STATE(291), 1,
      sym_update_clause,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1357] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      anon_sym_DOT,
    STATE(29), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(60), 11,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [1386] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(135), 1,
      aux_sym_fields_expression_token1,
    ACTIONS(137), 1,
      aux_sym_function_expression_token1,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(30), 1,
      sym_formatting_comment,
    STATE(187), 1,
      sym_dotted_identifier,
    STATE(200), 1,
      sym__value_expression,
    STATE(235), 1,
      sym__selectable_expression,
    STATE(327), 1,
      sym_count_expression,
    STATE(344), 1,
      sym__function_name,
    STATE(190), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(314), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1433] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(102), 1,
      aux_sym_soql_with_clause_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(108), 1,
      aux_sym_order_by_clause_token1,
    STATE(31), 1,
      sym_formatting_comment,
    STATE(39), 1,
      sym_soql_with_clause,
    STATE(54), 1,
      sym_group_by_clause,
    STATE(96), 1,
      sym_order_by_clause,
    STATE(129), 1,
      sym_limit_clause,
    STATE(169), 1,
      sym_offset_clause,
    STATE(206), 1,
      sym_for_clause,
    STATE(312), 1,
      sym_update_clause,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1486] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(32), 1,
      sym_formatting_comment,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(66), 11,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [1517] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(33), 1,
      sym_formatting_comment,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(60), 11,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [1543] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(135), 1,
      aux_sym_fields_expression_token1,
    ACTIONS(137), 1,
      aux_sym_function_expression_token1,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(34), 1,
      sym_formatting_comment,
    STATE(187), 1,
      sym_dotted_identifier,
    STATE(200), 1,
      sym__value_expression,
    STATE(284), 1,
      sym__selectable_expression,
    STATE(339), 1,
      sym__function_name,
    STATE(190), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(314), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1587] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(18), 1,
      sym_dotted_identifier,
    STATE(24), 1,
      sym__value_expression,
    STATE(35), 1,
      sym_formatting_comment,
    STATE(44), 1,
      sym__condition_expression,
    STATE(77), 1,
      sym_comparison_expression,
    STATE(100), 1,
      sym__boolean_expression,
    STATE(376), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(101), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1633] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(145), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_dotted_identifier,
    STATE(25), 1,
      sym__value_expression,
    STATE(36), 1,
      sym_formatting_comment,
    STATE(192), 1,
      sym__condition_expression,
    STATE(231), 1,
      sym_comparison_expression,
    STATE(357), 1,
      sym__boolean_expression,
    STATE(376), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(101), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1679] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(145), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_dotted_identifier,
    STATE(25), 1,
      sym__value_expression,
    STATE(37), 1,
      sym_formatting_comment,
    STATE(192), 1,
      sym__condition_expression,
    STATE(231), 1,
      sym_comparison_expression,
    STATE(360), 1,
      sym__boolean_expression,
    STATE(376), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(101), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1725] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(38), 1,
      sym_formatting_comment,
    STATE(47), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    ACTIONS(157), 9,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1759] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(108), 1,
      aux_sym_order_by_clause_token1,
    STATE(39), 1,
      sym_formatting_comment,
    STATE(52), 1,
      sym_group_by_clause,
    STATE(85), 1,
      sym_order_by_clause,
    STATE(125), 1,
      sym_limit_clause,
    STATE(170), 1,
      sym_offset_clause,
    STATE(210), 1,
      sym_for_clause,
    STATE(319), 1,
      sym_update_clause,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1806] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(108), 1,
      aux_sym_order_by_clause_token1,
    STATE(40), 1,
      sym_formatting_comment,
    STATE(54), 1,
      sym_group_by_clause,
    STATE(96), 1,
      sym_order_by_clause,
    STATE(129), 1,
      sym_limit_clause,
    STATE(169), 1,
      sym_offset_clause,
    STATE(206), 1,
      sym_for_clause,
    STATE(312), 1,
      sym_update_clause,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1853] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(159), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(41), 1,
      sym_formatting_comment,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(167), 9,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1882] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(108), 1,
      aux_sym_order_by_clause_token1,
    STATE(42), 1,
      sym_formatting_comment,
    STATE(63), 1,
      sym_group_by_clause,
    STATE(87), 1,
      sym_order_by_clause,
    STATE(140), 1,
      sym_limit_clause,
    STATE(175), 1,
      sym_offset_clause,
    STATE(218), 1,
      sym_for_clause,
    STATE(291), 1,
      sym_update_clause,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1929] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(43), 1,
      sym_formatting_comment,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(124), 11,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [1954] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(171), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(173), 1,
      aux_sym_having_or_expression_token1,
    STATE(44), 1,
      sym_formatting_comment,
    STATE(67), 1,
      aux_sym_or_expression_repeat1,
    STATE(69), 1,
      aux_sym_and_expression_repeat1,
    ACTIONS(169), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1984] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      sym_formatting_comment,
    STATE(47), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(153), 11,
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
  [2010] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(46), 2,
      sym_formatting_comment,
      aux_sym_from_clause_repeat1,
    ACTIONS(165), 11,
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
  [2034] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_from_clause_repeat1,
    STATE(47), 1,
      sym_formatting_comment,
    ACTIONS(178), 11,
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
  [2060] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(182), 1,
      aux_sym_having_or_expression_token1,
    STATE(48), 1,
      sym_formatting_comment,
    ACTIONS(180), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2084] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(186), 1,
      aux_sym_having_or_expression_token1,
    STATE(49), 1,
      sym_formatting_comment,
    ACTIONS(184), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2107] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(108), 1,
      aux_sym_order_by_clause_token1,
    STATE(50), 1,
      sym_formatting_comment,
    STATE(87), 1,
      sym_order_by_clause,
    STATE(140), 1,
      sym_limit_clause,
    STATE(175), 1,
      sym_offset_clause,
    STATE(218), 1,
      sym_for_clause,
    STATE(291), 1,
      sym_update_clause,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2148] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(190), 1,
      aux_sym_having_or_expression_token1,
    STATE(51), 1,
      sym_formatting_comment,
    ACTIONS(188), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2171] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(108), 1,
      aux_sym_order_by_clause_token1,
    STATE(52), 1,
      sym_formatting_comment,
    STATE(84), 1,
      sym_order_by_clause,
    STATE(122), 1,
      sym_limit_clause,
    STATE(165), 1,
      sym_offset_clause,
    STATE(211), 1,
      sym_for_clause,
    STATE(298), 1,
      sym_update_clause,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2212] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(23), 1,
      sym_function_expression,
    STATE(53), 1,
      sym_formatting_comment,
    STATE(193), 1,
      sym__having_condition_expression,
    STATE(271), 1,
      sym_having_comparison_expression,
    STATE(369), 1,
      sym__having_boolean_expression,
    STATE(376), 1,
      sym__function_name,
    STATE(148), 3,
      sym_having_and_expression,
      sym_having_or_expression,
      sym_having_not_expression,
  [2251] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(108), 1,
      aux_sym_order_by_clause_token1,
    STATE(54), 1,
      sym_formatting_comment,
    STATE(85), 1,
      sym_order_by_clause,
    STATE(125), 1,
      sym_limit_clause,
    STATE(170), 1,
      sym_offset_clause,
    STATE(210), 1,
      sym_for_clause,
    STATE(319), 1,
      sym_update_clause,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2292] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(55), 1,
      sym_formatting_comment,
    ACTIONS(200), 12,
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
  [2313] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(204), 1,
      aux_sym_having_or_expression_token1,
    STATE(56), 1,
      sym_formatting_comment,
    ACTIONS(202), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2336] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(23), 1,
      sym_function_expression,
    STATE(57), 1,
      sym_formatting_comment,
    STATE(193), 1,
      sym__having_condition_expression,
    STATE(271), 1,
      sym_having_comparison_expression,
    STATE(351), 1,
      sym__having_boolean_expression,
    STATE(376), 1,
      sym__function_name,
    STATE(148), 3,
      sym_having_and_expression,
      sym_having_or_expression,
      sym_having_not_expression,
  [2375] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(210), 1,
      aux_sym_order_null_direction_token1,
    STATE(58), 1,
      sym_formatting_comment,
    STATE(102), 1,
      sym_order_direction,
    STATE(161), 1,
      sym_order_null_direction,
    ACTIONS(208), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [2404] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(196), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_function_expression,
    STATE(59), 1,
      sym_formatting_comment,
    STATE(75), 1,
      sym__having_condition_expression,
    STATE(107), 1,
      sym_having_comparison_expression,
    STATE(149), 1,
      sym__having_boolean_expression,
    STATE(376), 1,
      sym__function_name,
    STATE(148), 3,
      sym_having_and_expression,
      sym_having_or_expression,
      sym_having_not_expression,
  [2443] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(216), 1,
      aux_sym_having_or_expression_token1,
    STATE(60), 1,
      sym_formatting_comment,
    ACTIONS(214), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2466] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(61), 1,
      sym_formatting_comment,
    ACTIONS(218), 12,
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
  [2487] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(222), 1,
      aux_sym_having_or_expression_token1,
    STATE(62), 1,
      sym_formatting_comment,
    ACTIONS(220), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2510] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(108), 1,
      aux_sym_order_by_clause_token1,
    STATE(63), 1,
      sym_formatting_comment,
    STATE(96), 1,
      sym_order_by_clause,
    STATE(129), 1,
      sym_limit_clause,
    STATE(169), 1,
      sym_offset_clause,
    STATE(206), 1,
      sym_for_clause,
    STATE(312), 1,
      sym_update_clause,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2551] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(64), 1,
      sym_formatting_comment,
    ACTIONS(165), 12,
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
  [2572] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(226), 1,
      aux_sym_having_or_expression_token1,
    STATE(65), 1,
      sym_formatting_comment,
    ACTIONS(224), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2594] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(230), 1,
      aux_sym_having_or_expression_token1,
    STATE(66), 1,
      sym_formatting_comment,
    ACTIONS(228), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2616] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(173), 1,
      aux_sym_having_or_expression_token1,
    STATE(67), 1,
      sym_formatting_comment,
    STATE(76), 1,
      aux_sym_or_expression_repeat1,
    ACTIONS(232), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2640] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(236), 1,
      aux_sym_having_or_expression_token1,
    STATE(68), 1,
      sym_formatting_comment,
    ACTIONS(234), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2662] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(171), 1,
      aux_sym_having_and_expression_token1,
    STATE(69), 1,
      sym_formatting_comment,
    STATE(71), 1,
      aux_sym_and_expression_repeat1,
    ACTIONS(238), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2686] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(242), 1,
      aux_sym_having_or_expression_token1,
    STATE(70), 1,
      sym_formatting_comment,
    ACTIONS(240), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2708] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(246), 1,
      aux_sym_having_and_expression_token1,
    STATE(71), 2,
      sym_formatting_comment,
      aux_sym_and_expression_repeat1,
    ACTIONS(244), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2730] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(251), 1,
      aux_sym_having_or_expression_token1,
    STATE(72), 1,
      sym_formatting_comment,
    ACTIONS(249), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2752] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(255), 1,
      aux_sym_having_or_expression_token1,
    STATE(73), 1,
      sym_formatting_comment,
    ACTIONS(253), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2774] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(259), 1,
      aux_sym_having_or_expression_token1,
    STATE(74), 1,
      sym_formatting_comment,
    ACTIONS(257), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2796] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(263), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(265), 1,
      aux_sym_having_or_expression_token1,
    STATE(75), 1,
      sym_formatting_comment,
    STATE(98), 1,
      aux_sym_having_or_expression_repeat1,
    STATE(108), 1,
      aux_sym_having_and_expression_repeat1,
    ACTIONS(261), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2824] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(269), 1,
      aux_sym_having_or_expression_token1,
    STATE(76), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
    ACTIONS(267), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2846] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(274), 1,
      aux_sym_having_or_expression_token1,
    STATE(77), 1,
      sym_formatting_comment,
    ACTIONS(272), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2868] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(18), 1,
      sym_dotted_identifier,
    STATE(24), 1,
      sym__value_expression,
    STATE(77), 1,
      sym_comparison_expression,
    STATE(78), 1,
      sym_formatting_comment,
    STATE(92), 1,
      sym__condition_expression,
    STATE(376), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
  [2903] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(79), 1,
      sym_formatting_comment,
    ACTIONS(276), 10,
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
  [2922] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(80), 1,
      sym_formatting_comment,
    ACTIONS(278), 10,
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
  [2941] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(18), 1,
      sym_dotted_identifier,
    STATE(24), 1,
      sym__value_expression,
    STATE(77), 1,
      sym_comparison_expression,
    STATE(81), 1,
      sym_formatting_comment,
    STATE(116), 1,
      sym__condition_expression,
    STATE(376), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
  [2976] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(282), 1,
      aux_sym_having_and_expression_token1,
    STATE(82), 1,
      sym_formatting_comment,
    STATE(88), 1,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(280), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2999] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      sym_formatting_comment,
    STATE(86), 1,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(284), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3022] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    STATE(84), 1,
      sym_formatting_comment,
    STATE(134), 1,
      sym_limit_clause,
    STATE(164), 1,
      sym_offset_clause,
    STATE(208), 1,
      sym_for_clause,
    STATE(285), 1,
      sym_update_clause,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3057] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    STATE(85), 1,
      sym_formatting_comment,
    STATE(122), 1,
      sym_limit_clause,
    STATE(165), 1,
      sym_offset_clause,
    STATE(211), 1,
      sym_for_clause,
    STATE(298), 1,
      sym_update_clause,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3092] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      sym_formatting_comment,
    STATE(91), 1,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(290), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3115] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    STATE(87), 1,
      sym_formatting_comment,
    STATE(129), 1,
      sym_limit_clause,
    STATE(169), 1,
      sym_offset_clause,
    STATE(206), 1,
      sym_for_clause,
    STATE(312), 1,
      sym_update_clause,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3150] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(294), 1,
      aux_sym_having_and_expression_token1,
    STATE(88), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(292), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3171] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(18), 1,
      sym_dotted_identifier,
    STATE(24), 1,
      sym__value_expression,
    STATE(77), 1,
      sym_comparison_expression,
    STATE(89), 1,
      sym_formatting_comment,
    STATE(95), 1,
      sym__condition_expression,
    STATE(376), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
  [3206] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    STATE(90), 1,
      sym_formatting_comment,
    STATE(140), 1,
      sym_limit_clause,
    STATE(175), 1,
      sym_offset_clause,
    STATE(218), 1,
      sym_for_clause,
    STATE(291), 1,
      sym_update_clause,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3241] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(91), 2,
      sym_formatting_comment,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(297), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3262] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(92), 1,
      sym_formatting_comment,
    ACTIONS(244), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3281] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(304), 1,
      aux_sym_with_user_id_type_token1,
    ACTIONS(306), 1,
      aux_sym_with_record_visibility_expression_token1,
    ACTIONS(308), 1,
      aux_sym_with_data_cat_expression_token1,
    STATE(93), 1,
      sym_formatting_comment,
    STATE(138), 1,
      sym_soql_with_type,
    ACTIONS(302), 3,
      aux_sym_soql_with_type_token1,
      aux_sym_soql_with_type_token2,
      aux_sym_soql_with_type_token3,
    STATE(132), 3,
      sym_with_user_id_type,
      sym_with_record_visibility_expression,
      sym_with_data_cat_expression,
  [3310] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(282), 1,
      aux_sym_having_and_expression_token1,
    STATE(82), 1,
      aux_sym_with_data_cat_expression_repeat1,
    STATE(94), 1,
      sym_formatting_comment,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3333] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(312), 1,
      aux_sym_having_or_expression_token1,
    STATE(95), 1,
      sym_formatting_comment,
    ACTIONS(267), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3354] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(104), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    STATE(96), 1,
      sym_formatting_comment,
    STATE(125), 1,
      sym_limit_clause,
    STATE(170), 1,
      sym_offset_clause,
    STATE(210), 1,
      sym_for_clause,
    STATE(319), 1,
      sym_update_clause,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3389] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_dotted_identifier,
    STATE(25), 1,
      sym__value_expression,
    STATE(97), 1,
      sym_formatting_comment,
    STATE(231), 1,
      sym_comparison_expression,
    STATE(297), 1,
      sym__condition_expression,
    STATE(376), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
  [3424] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(265), 1,
      aux_sym_having_or_expression_token1,
    STATE(98), 1,
      sym_formatting_comment,
    STATE(117), 1,
      aux_sym_having_or_expression_repeat1,
    ACTIONS(314), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3446] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(318), 1,
      aux_sym_having_or_expression_token1,
    STATE(99), 1,
      sym_formatting_comment,
    ACTIONS(316), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3466] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(100), 1,
      sym_formatting_comment,
    ACTIONS(320), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3484] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(101), 1,
      sym_formatting_comment,
    ACTIONS(169), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3502] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(210), 1,
      aux_sym_order_null_direction_token1,
    STATE(102), 1,
      sym_formatting_comment,
    STATE(162), 1,
      sym_order_null_direction,
    ACTIONS(322), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [3524] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(326), 1,
      aux_sym_having_or_expression_token1,
    STATE(103), 1,
      sym_formatting_comment,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3544] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(330), 1,
      aux_sym_having_or_expression_token1,
    STATE(104), 1,
      sym_formatting_comment,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3564] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(334), 1,
      aux_sym_having_or_expression_token1,
    STATE(105), 1,
      sym_formatting_comment,
    ACTIONS(332), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3584] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(106), 1,
      sym_formatting_comment,
    ACTIONS(336), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3602] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(340), 1,
      aux_sym_having_or_expression_token1,
    STATE(107), 1,
      sym_formatting_comment,
    ACTIONS(338), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3622] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(263), 1,
      aux_sym_having_and_expression_token1,
    STATE(108), 1,
      sym_formatting_comment,
    STATE(118), 1,
      aux_sym_having_and_expression_repeat1,
    ACTIONS(342), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3644] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(109), 1,
      sym_formatting_comment,
    ACTIONS(297), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3662] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(346), 1,
      aux_sym_having_or_expression_token1,
    STATE(110), 1,
      sym_formatting_comment,
    ACTIONS(344), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3682] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(111), 1,
      sym_formatting_comment,
    ACTIONS(348), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3700] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(352), 1,
      aux_sym_having_or_expression_token1,
    STATE(112), 1,
      sym_formatting_comment,
    ACTIONS(350), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3720] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(113), 1,
      sym_formatting_comment,
    ACTIONS(354), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3738] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(358), 1,
      aux_sym_having_or_expression_token1,
    STATE(114), 1,
      sym_formatting_comment,
    ACTIONS(356), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3758] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(115), 1,
      sym_formatting_comment,
    ACTIONS(292), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3776] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(116), 1,
      sym_formatting_comment,
    ACTIONS(360), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_soql_with_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3794] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(364), 1,
      aux_sym_having_or_expression_token1,
    STATE(117), 2,
      sym_formatting_comment,
      aux_sym_having_or_expression_repeat1,
    ACTIONS(362), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3814] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(369), 1,
      aux_sym_having_and_expression_token1,
    STATE(118), 2,
      sym_formatting_comment,
      aux_sym_having_and_expression_repeat1,
    ACTIONS(367), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3834] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(374), 1,
      aux_sym_having_clause_token1,
    STATE(119), 1,
      sym_formatting_comment,
    STATE(163), 1,
      sym_having_clause,
    ACTIONS(372), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3856] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(120), 1,
      sym_formatting_comment,
    STATE(159), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(68), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(72), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [3881] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      sym_formatting_comment,
    STATE(135), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(378), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [3902] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    STATE(122), 1,
      sym_formatting_comment,
    STATE(164), 1,
      sym_offset_clause,
    STATE(208), 1,
      sym_for_clause,
    STATE(285), 1,
      sym_update_clause,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3931] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(123), 1,
      sym_formatting_comment,
    ACTIONS(382), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_null_direction_token1,
  [3948] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(18), 1,
      sym_dotted_identifier,
    STATE(58), 1,
      sym__value_expression,
    STATE(124), 1,
      sym_formatting_comment,
    STATE(151), 1,
      sym_order_expression,
    STATE(376), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
  [3977] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    STATE(125), 1,
      sym_formatting_comment,
    STATE(165), 1,
      sym_offset_clause,
    STATE(211), 1,
      sym_for_clause,
    STATE(298), 1,
      sym_update_clause,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4006] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(64), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      aux_sym_type_of_clause_token2,
    ACTIONS(386), 1,
      aux_sym_when_expression_token1,
    ACTIONS(388), 1,
      aux_sym_else_expression_token1,
    STATE(13), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(126), 1,
      sym_formatting_comment,
    STATE(171), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(262), 1,
      sym_when_expression,
    STATE(335), 1,
      sym_else_expression,
  [4037] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(137), 1,
      aux_sym_function_expression_token1,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym_formatting_comment,
    STATE(187), 1,
      sym_dotted_identifier,
    STATE(278), 1,
      sym__value_expression,
    STATE(339), 1,
      sym__function_name,
    STATE(190), 2,
      sym_function_expression,
      sym_field_identifier,
  [4066] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(128), 1,
      sym_formatting_comment,
    ACTIONS(367), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4083] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    STATE(129), 1,
      sym_formatting_comment,
    STATE(170), 1,
      sym_offset_clause,
    STATE(210), 1,
      sym_for_clause,
    STATE(319), 1,
      sym_update_clause,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4112] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(130), 1,
      sym_formatting_comment,
    ACTIONS(392), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4129] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(394), 1,
      aux_sym_having_or_expression_token1,
    STATE(131), 1,
      sym_formatting_comment,
    ACTIONS(362), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4148] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(132), 1,
      sym_formatting_comment,
    ACTIONS(396), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4165] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    STATE(133), 2,
      sym_formatting_comment,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(398), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4184] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    STATE(134), 1,
      sym_formatting_comment,
    STATE(168), 1,
      sym_offset_clause,
    STATE(203), 1,
      sym_for_clause,
    STATE(294), 1,
      sym_update_clause,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4213] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_order_by_clause_repeat1,
    STATE(135), 1,
      sym_formatting_comment,
    ACTIONS(405), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4234] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(136), 1,
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
  [4251] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(137), 1,
      sym_formatting_comment,
    ACTIONS(409), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4268] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(138), 1,
      sym_formatting_comment,
    ACTIONS(411), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4285] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(18), 1,
      sym_dotted_identifier,
    STATE(58), 1,
      sym__value_expression,
    STATE(121), 1,
      sym_order_expression,
    STATE(139), 1,
      sym_formatting_comment,
    STATE(376), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
  [4314] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    STATE(140), 1,
      sym_formatting_comment,
    STATE(169), 1,
      sym_offset_clause,
    STATE(206), 1,
      sym_for_clause,
    STATE(312), 1,
      sym_update_clause,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4343] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(415), 1,
      aux_sym_using_scope_type_token3,
    STATE(79), 1,
      sym_using_scope_type,
    STATE(141), 1,
      sym_formatting_comment,
    ACTIONS(413), 6,
      aux_sym_using_scope_type_token1,
      aux_sym_using_scope_type_token2,
      aux_sym_using_scope_type_token4,
      aux_sym_using_scope_type_token5,
      aux_sym_using_scope_type_token6,
      aux_sym_using_scope_type_token7,
  [4364] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_offset_clause_token1,
    STATE(142), 1,
      sym_formatting_comment,
    STATE(175), 1,
      sym_offset_clause,
    STATE(218), 1,
      sym_for_clause,
    STATE(291), 1,
      sym_update_clause,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4393] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_select_clause_token1,
    STATE(143), 1,
      sym_formatting_comment,
    STATE(204), 1,
      aux_sym_source_file_repeat1,
    STATE(303), 1,
      sym_select_clause,
    STATE(306), 1,
      sym_header_comment,
    STATE(362), 1,
      sym_soql_query_body,
    STATE(367), 1,
      sym__soql_query_expression,
  [4421] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_function_expression,
    STATE(107), 1,
      sym_having_comparison_expression,
    STATE(128), 1,
      sym__having_condition_expression,
    STATE(144), 1,
      sym_formatting_comment,
    STATE(376), 1,
      sym__function_name,
  [4449] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(18), 1,
      sym_dotted_identifier,
    STATE(119), 1,
      sym__group_by_expression,
    STATE(145), 1,
      sym_formatting_comment,
    STATE(376), 1,
      sym__function_name,
    STATE(83), 2,
      sym_function_expression,
      sym_field_identifier,
  [4475] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(146), 1,
      sym_formatting_comment,
    ACTIONS(417), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4491] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(64), 1,
      anon_sym_DOT,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(147), 1,
      sym_formatting_comment,
    STATE(181), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(421), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [4515] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(148), 1,
      sym_formatting_comment,
    ACTIONS(261), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4531] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(149), 1,
      sym_formatting_comment,
    ACTIONS(423), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4547] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_function_expression,
    STATE(107), 1,
      sym_having_comparison_expression,
    STATE(146), 1,
      sym__having_condition_expression,
    STATE(150), 1,
      sym_formatting_comment,
    STATE(376), 1,
      sym__function_name,
  [4575] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(151), 1,
      sym_formatting_comment,
    ACTIONS(398), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4591] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(425), 1,
      anon_sym_DOT,
    ACTIONS(55), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(152), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(60), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [4611] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_function_expression,
    STATE(107), 1,
      sym_having_comparison_expression,
    STATE(131), 1,
      sym__having_condition_expression,
    STATE(153), 1,
      sym_formatting_comment,
    STATE(376), 1,
      sym__function_name,
  [4639] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(154), 1,
      sym_formatting_comment,
    ACTIONS(428), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4655] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(137), 1,
      aux_sym_function_expression_token1,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(155), 1,
      sym_formatting_comment,
    STATE(187), 1,
      sym_dotted_identifier,
    STATE(251), 1,
      sym__value_expression,
    STATE(339), 1,
      sym__function_name,
    STATE(190), 2,
      sym_function_expression,
      sym_field_identifier,
  [4681] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(156), 1,
      sym_formatting_comment,
    ACTIONS(430), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4697] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(137), 1,
      aux_sym_function_expression_token1,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(157), 1,
      sym_formatting_comment,
    STATE(187), 1,
      sym_dotted_identifier,
    STATE(320), 1,
      sym__value_expression,
    STATE(339), 1,
      sym__function_name,
    STATE(190), 2,
      sym_function_expression,
      sym_field_identifier,
  [4723] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(23), 1,
      sym_function_expression,
    STATE(158), 1,
      sym_formatting_comment,
    STATE(271), 1,
      sym_having_comparison_expression,
    STATE(289), 1,
      sym__having_condition_expression,
    STATE(376), 1,
      sym__function_name,
  [4751] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(152), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(159), 1,
      sym_formatting_comment,
    ACTIONS(62), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(66), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [4773] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(137), 1,
      aux_sym_function_expression_token1,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(160), 1,
      sym_formatting_comment,
    STATE(187), 1,
      sym_dotted_identifier,
    STATE(278), 1,
      sym__value_expression,
    STATE(339), 1,
      sym__function_name,
    STATE(190), 2,
      sym_function_expression,
      sym_field_identifier,
  [4799] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(161), 1,
      sym_formatting_comment,
    ACTIONS(322), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4815] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(162), 1,
      sym_formatting_comment,
    ACTIONS(432), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4831] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(163), 1,
      sym_formatting_comment,
    ACTIONS(434), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4847] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    STATE(164), 1,
      sym_formatting_comment,
    STATE(203), 1,
      sym_for_clause,
    STATE(294), 1,
      sym_update_clause,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4870] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    STATE(165), 1,
      sym_formatting_comment,
    STATE(208), 1,
      sym_for_clause,
    STATE(285), 1,
      sym_update_clause,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4893] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(436), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(438), 1,
      sym_bound_apex_expression,
    ACTIONS(440), 1,
      sym_identifier,
    STATE(166), 1,
      sym_formatting_comment,
    STATE(187), 1,
      sym_dotted_identifier,
    STATE(328), 1,
      sym_geo_location_type,
    STATE(383), 1,
      sym_field_identifier,
  [4918] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    STATE(167), 1,
      sym_formatting_comment,
    STATE(218), 1,
      sym_for_clause,
    STATE(291), 1,
      sym_update_clause,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4941] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    STATE(168), 1,
      sym_formatting_comment,
    STATE(202), 1,
      sym_for_clause,
    STATE(282), 1,
      sym_update_clause,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4964] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    STATE(169), 1,
      sym_formatting_comment,
    STATE(210), 1,
      sym_for_clause,
    STATE(319), 1,
      sym_update_clause,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4987] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    STATE(170), 1,
      sym_formatting_comment,
    STATE(211), 1,
      sym_for_clause,
    STATE(298), 1,
      sym_update_clause,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5010] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(386), 1,
      aux_sym_when_expression_token1,
    ACTIONS(388), 1,
      aux_sym_else_expression_token1,
    ACTIONS(444), 1,
      aux_sym_type_of_clause_token2,
    STATE(171), 1,
      sym_formatting_comment,
    STATE(178), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(262), 1,
      sym_when_expression,
    STATE(356), 1,
      sym_else_expression,
  [5035] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(64), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(172), 1,
      sym_formatting_comment,
    ACTIONS(446), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5054] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(173), 1,
      sym_formatting_comment,
    ACTIONS(55), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(60), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5071] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(384), 1,
      aux_sym_type_of_clause_token2,
    ACTIONS(386), 1,
      aux_sym_when_expression_token1,
    ACTIONS(388), 1,
      aux_sym_else_expression_token1,
    STATE(171), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(174), 1,
      sym_formatting_comment,
    STATE(262), 1,
      sym_when_expression,
    STATE(335), 1,
      sym_else_expression,
  [5096] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_for_clause_token1,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    STATE(175), 1,
      sym_formatting_comment,
    STATE(206), 1,
      sym_for_clause,
    STATE(312), 1,
      sym_update_clause,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5119] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(436), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(438), 1,
      sym_bound_apex_expression,
    ACTIONS(440), 1,
      sym_identifier,
    STATE(176), 1,
      sym_formatting_comment,
    STATE(187), 1,
      sym_dotted_identifier,
    STATE(382), 1,
      sym_geo_location_type,
    STATE(383), 1,
      sym_field_identifier,
  [5144] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(147), 1,
      aux_sym_function_expression_token1,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(18), 1,
      sym_dotted_identifier,
    STATE(177), 1,
      sym_formatting_comment,
    STATE(376), 1,
      sym__function_name,
    STATE(109), 2,
      sym_function_expression,
      sym_field_identifier,
  [5167] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(450), 1,
      aux_sym_when_expression_token1,
    STATE(262), 1,
      sym_when_expression,
    ACTIONS(448), 2,
      aux_sym_type_of_clause_token2,
      aux_sym_else_expression_token1,
    STATE(178), 2,
      sym_formatting_comment,
      aux_sym_type_of_clause_repeat1,
  [5185] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    STATE(179), 2,
      sym_formatting_comment,
      aux_sym_for_clause_repeat1,
    ACTIONS(453), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [5201] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      sym_formatting_comment,
    STATE(181), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(421), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5219] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      sym_formatting_comment,
    STATE(188), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(458), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5237] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(182), 1,
      sym_formatting_comment,
    ACTIONS(460), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_offset_clause_token1,
  [5251] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      sym_formatting_comment,
    STATE(189), 1,
      aux_sym_for_clause_repeat1,
    ACTIONS(462), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [5269] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(184), 1,
      sym_formatting_comment,
    ACTIONS(74), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(76), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5285] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(185), 1,
      sym_formatting_comment,
    ACTIONS(78), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(80), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5301] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(186), 1,
      sym_formatting_comment,
    ACTIONS(82), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(84), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5317] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(187), 1,
      sym_formatting_comment,
    ACTIONS(68), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(72), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5333] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    STATE(188), 2,
      sym_formatting_comment,
      aux_sym_field_list_repeat1,
    ACTIONS(446), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5349] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_for_clause_repeat1,
    STATE(189), 1,
      sym_formatting_comment,
    ACTIONS(469), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [5367] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(190), 1,
      sym_formatting_comment,
    ACTIONS(86), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(88), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5383] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(473), 1,
      aux_sym_with_data_cat_filter_type_token2,
    STATE(191), 1,
      sym_formatting_comment,
    STATE(316), 1,
      sym_with_data_cat_filter_type,
    ACTIONS(471), 3,
      aux_sym_with_data_cat_filter_type_token1,
      aux_sym_with_data_cat_filter_type_token3,
      aux_sym_with_data_cat_filter_type_token4,
  [5401] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(171), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(475), 1,
      aux_sym_having_or_expression_token1,
    STATE(69), 1,
      aux_sym_and_expression_repeat1,
    STATE(192), 1,
      sym_formatting_comment,
    STATE(229), 1,
      aux_sym_or_expression_repeat1,
  [5423] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(263), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(477), 1,
      aux_sym_having_or_expression_token1,
    STATE(108), 1,
      aux_sym_having_and_expression_repeat1,
    STATE(193), 1,
      sym_formatting_comment,
    STATE(272), 1,
      aux_sym_having_or_expression_repeat1,
  [5445] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(194), 1,
      sym_formatting_comment,
    ACTIONS(446), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5458] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(479), 1,
      sym_identifier,
    STATE(38), 1,
      sym_storage_identifier,
    STATE(43), 1,
      sym_dotted_identifier,
    STATE(45), 1,
      sym_storage_alias,
    STATE(195), 1,
      sym_formatting_comment,
  [5477] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(196), 2,
      sym_formatting_comment,
      aux_sym_update_clause_repeat1,
  [5492] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(197), 1,
      sym_formatting_comment,
    ACTIONS(453), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_type_token1,
  [5505] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(486), 1,
      sym_bound_apex_expression,
    ACTIONS(488), 1,
      sym_identifier,
    STATE(187), 1,
      sym_dotted_identifier,
    STATE(198), 1,
      sym_formatting_comment,
    STATE(384), 1,
      sym_field_identifier,
  [5524] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(183), 1,
      sym_for_type,
    STATE(199), 1,
      sym_formatting_comment,
    ACTIONS(490), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [5539] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      aux_sym_from_clause_token1,
    ACTIONS(496), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(498), 1,
      sym_identifier,
    STATE(200), 1,
      sym_formatting_comment,
  [5558] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    STATE(201), 1,
      sym_formatting_comment,
    STATE(291), 1,
      sym_update_clause,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5575] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    STATE(202), 1,
      sym_formatting_comment,
    STATE(310), 1,
      sym_update_clause,
    ACTIONS(500), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5592] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    STATE(203), 1,
      sym_formatting_comment,
    STATE(282), 1,
      sym_update_clause,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5609] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(502), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      aux_sym_select_clause_token1,
    STATE(306), 1,
      sym_header_comment,
    STATE(204), 2,
      sym_formatting_comment,
      aux_sym_source_file_repeat1,
  [5626] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(205), 1,
      sym_formatting_comment,
    ACTIONS(507), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
  [5639] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    STATE(206), 1,
      sym_formatting_comment,
    STATE(319), 1,
      sym_update_clause,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5656] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(509), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(207), 1,
      sym_formatting_comment,
    STATE(286), 1,
      sym_with_record_visibility_param,
    ACTIONS(511), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [5673] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    STATE(208), 1,
      sym_formatting_comment,
    STATE(294), 1,
      sym_update_clause,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5690] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(509), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(209), 1,
      sym_formatting_comment,
    STATE(256), 1,
      sym_with_record_visibility_param,
    ACTIONS(511), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [5707] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    STATE(210), 1,
      sym_formatting_comment,
    STATE(298), 1,
      sym_update_clause,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5724] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    STATE(211), 1,
      sym_formatting_comment,
    STATE(285), 1,
      sym_update_clause,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5741] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      sym_formatting_comment,
    STATE(216), 1,
      aux_sym_update_clause_repeat1,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5758] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(479), 1,
      sym_identifier,
    STATE(41), 1,
      sym_storage_identifier,
    STATE(43), 1,
      sym_dotted_identifier,
    STATE(64), 1,
      sym_storage_alias,
    STATE(213), 1,
      sym_formatting_comment,
  [5777] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(214), 1,
      sym_formatting_comment,
    ACTIONS(517), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_type_token1,
  [5790] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(215), 1,
      sym_formatting_comment,
    STATE(337), 1,
      sym_fields_type,
    ACTIONS(519), 3,
      aux_sym_fields_type_token1,
      aux_sym_fields_type_token2,
      aux_sym_fields_type_token3,
  [5805] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_update_clause_repeat1,
    STATE(216), 1,
      sym_formatting_comment,
    ACTIONS(521), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5822] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(488), 1,
      sym_identifier,
    ACTIONS(523), 1,
      sym_bound_apex_expression,
    STATE(187), 1,
      sym_dotted_identifier,
    STATE(217), 1,
      sym_formatting_comment,
    STATE(338), 1,
      sym_field_identifier,
  [5841] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_for_type_token1,
    STATE(218), 1,
      sym_formatting_comment,
    STATE(312), 1,
      sym_update_clause,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [5858] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(197), 1,
      sym_for_type,
    STATE(219), 1,
      sym_formatting_comment,
    ACTIONS(490), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [5873] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(220), 2,
      sym_formatting_comment,
      aux_sym__having_set_comparison_repeat1,
  [5887] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(221), 1,
      sym_formatting_comment,
    ACTIONS(184), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [5899] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(222), 1,
      sym_formatting_comment,
    ACTIONS(240), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [5911] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    STATE(223), 2,
      sym_formatting_comment,
      aux_sym_function_expression_repeat1,
  [5925] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(224), 1,
      sym_formatting_comment,
    ACTIONS(257), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [5937] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(225), 1,
      sym_formatting_comment,
    ACTIONS(224), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [5949] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(537), 1,
      aux_sym_from_clause_token1,
    STATE(226), 1,
      sym_formatting_comment,
    STATE(281), 1,
      aux_sym_select_clause_repeat1,
  [5965] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(227), 1,
      sym_formatting_comment,
  [5981] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(228), 1,
      sym_formatting_comment,
  [5997] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(475), 1,
      aux_sym_having_or_expression_token1,
    STATE(229), 1,
      sym_formatting_comment,
    STATE(241), 1,
      aux_sym_or_expression_repeat1,
  [6013] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(230), 1,
      sym_formatting_comment,
    ACTIONS(545), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6025] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(231), 1,
      sym_formatting_comment,
    ACTIONS(272), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6037] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(547), 1,
      sym_identifier,
    STATE(180), 1,
      sym_dotted_identifier,
    STATE(230), 1,
      sym_field_list,
    STATE(232), 1,
      sym_formatting_comment,
  [6053] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(233), 1,
      sym_formatting_comment,
  [6069] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(234), 1,
      sym_formatting_comment,
    ACTIONS(180), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6081] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      aux_sym_from_clause_token1,
    STATE(226), 1,
      aux_sym_select_clause_repeat1,
    STATE(235), 1,
      sym_formatting_comment,
  [6097] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(236), 1,
      sym_formatting_comment,
    ACTIONS(481), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6109] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    STATE(237), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_filter_repeat1,
  [6123] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(238), 1,
      sym_formatting_comment,
  [6139] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      sym_bound_apex_expression,
    STATE(68), 1,
      sym_subquery,
    STATE(239), 1,
      sym_formatting_comment,
  [6155] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(240), 1,
      sym_formatting_comment,
  [6171] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(566), 1,
      aux_sym_having_or_expression_token1,
    STATE(241), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
  [6185] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      sym_bound_apex_expression,
    STATE(242), 1,
      sym_formatting_comment,
    STATE(266), 1,
      sym_subquery,
  [6201] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      sym_formatting_comment,
    STATE(270), 1,
      aux_sym__having_set_comparison_repeat1,
  [6217] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_function_expression_repeat1,
    STATE(244), 1,
      sym_formatting_comment,
  [6233] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(245), 1,
      sym_formatting_comment,
    STATE(287), 1,
      sym_boolean,
    ACTIONS(9), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [6247] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(246), 1,
      sym_formatting_comment,
    ACTIONS(202), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6259] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      sym_formatting_comment,
    STATE(274), 1,
      aux_sym_with_record_visibility_expression_repeat1,
  [6275] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_with_data_cat_filter_repeat1,
    STATE(248), 1,
      sym_formatting_comment,
  [6291] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(249), 1,
      sym_formatting_comment,
    ACTIONS(214), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6303] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(250), 1,
      sym_formatting_comment,
    ACTIONS(249), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6315] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_function_expression_repeat1,
    STATE(251), 1,
      sym_formatting_comment,
  [6331] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(236), 1,
      sym_update_type,
    STATE(252), 1,
      sym_formatting_comment,
    ACTIONS(589), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [6345] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_function_expression_repeat1,
    STATE(253), 1,
      sym_formatting_comment,
  [6361] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(254), 1,
      sym_formatting_comment,
  [6377] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(547), 1,
      sym_identifier,
    STATE(180), 1,
      sym_dotted_identifier,
    STATE(255), 1,
      sym_formatting_comment,
    STATE(350), 1,
      sym_field_list,
  [6393] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_with_record_visibility_expression_repeat1,
    STATE(256), 1,
      sym_formatting_comment,
  [6409] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      aux_sym_with_data_cat_filter_repeat1,
    STATE(257), 1,
      sym_formatting_comment,
  [6425] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(258), 1,
      sym_formatting_comment,
    ACTIONS(220), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6437] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(259), 1,
      sym_formatting_comment,
    ACTIONS(332), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6449] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(260), 1,
      sym_formatting_comment,
    ACTIONS(344), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6461] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(261), 1,
      sym_formatting_comment,
    ACTIONS(253), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6473] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(262), 1,
      sym_formatting_comment,
    ACTIONS(599), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6485] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(263), 1,
      sym_formatting_comment,
    ACTIONS(350), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6497] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(264), 1,
      sym_formatting_comment,
    ACTIONS(356), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6509] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(601), 1,
      aux_sym_having_or_expression_token1,
    STATE(265), 2,
      sym_formatting_comment,
      aux_sym_having_or_expression_repeat1,
  [6523] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(266), 1,
      sym_formatting_comment,
    ACTIONS(234), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6535] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(212), 1,
      sym_update_type,
    STATE(267), 1,
      sym_formatting_comment,
    ACTIONS(589), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [6549] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(268), 1,
      sym_formatting_comment,
    ACTIONS(316), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6561] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_select_clause_token1,
    STATE(269), 1,
      sym_formatting_comment,
    STATE(303), 1,
      sym_select_clause,
    STATE(330), 1,
      sym_soql_query_body,
  [6577] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(270), 1,
      sym_formatting_comment,
  [6593] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(271), 1,
      sym_formatting_comment,
    ACTIONS(338), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6605] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    ACTIONS(477), 1,
      aux_sym_having_or_expression_token1,
    STATE(265), 1,
      aux_sym_having_or_expression_repeat1,
    STATE(272), 1,
      sym_formatting_comment,
  [6621] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(273), 1,
      sym_formatting_comment,
    ACTIONS(606), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6633] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    STATE(274), 2,
      sym_formatting_comment,
      aux_sym_with_record_visibility_expression_repeat1,
  [6647] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(275), 1,
      sym_formatting_comment,
    ACTIONS(228), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6659] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(276), 1,
      sym_formatting_comment,
    ACTIONS(188), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6671] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(159), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(277), 1,
      sym_formatting_comment,
  [6687] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_function_expression_repeat1,
    STATE(278), 1,
      sym_formatting_comment,
  [6703] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(279), 1,
      sym_formatting_comment,
    ACTIONS(328), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6715] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(280), 1,
      sym_formatting_comment,
    ACTIONS(324), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [6727] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      aux_sym_from_clause_token1,
    STATE(281), 2,
      sym_formatting_comment,
      aux_sym_select_clause_repeat1,
  [6741] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(282), 1,
      sym_formatting_comment,
    ACTIONS(500), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6752] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(283), 1,
      sym_formatting_comment,
    ACTIONS(620), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [6763] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(284), 1,
      sym_formatting_comment,
    ACTIONS(618), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [6774] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(285), 1,
      sym_formatting_comment,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6785] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(286), 1,
      sym_formatting_comment,
    ACTIONS(608), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6796] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(287), 1,
      sym_formatting_comment,
    ACTIONS(622), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6807] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    ACTIONS(626), 1,
      sym_bound_apex_expression,
    STATE(288), 1,
      sym_formatting_comment,
  [6820] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(289), 1,
      sym_formatting_comment,
    ACTIONS(362), 2,
      anon_sym_RPAREN,
      aux_sym_having_or_expression_token1,
  [6831] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(290), 1,
      sym_formatting_comment,
    ACTIONS(525), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6842] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(291), 1,
      sym_formatting_comment,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6853] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(628), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(630), 1,
      aux_sym_select_clause_token1,
    STATE(292), 1,
      sym_formatting_comment,
  [6866] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(293), 1,
      sym_formatting_comment,
    ACTIONS(632), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [6877] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(294), 1,
      sym_formatting_comment,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6888] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(295), 1,
      sym_formatting_comment,
    ACTIONS(634), 2,
      anon_sym_LPAREN,
      sym_bound_apex_expression,
  [6899] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(296), 1,
      sym_formatting_comment,
    ACTIONS(636), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [6910] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(297), 1,
      sym_formatting_comment,
    ACTIONS(267), 2,
      anon_sym_RPAREN,
      aux_sym_having_or_expression_token1,
  [6921] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(298), 1,
      sym_formatting_comment,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [6932] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(638), 1,
      sym_identifier,
    STATE(115), 1,
      sym_with_data_cat_filter,
    STATE(299), 1,
      sym_formatting_comment,
  [6945] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(300), 1,
      sym_formatting_comment,
    ACTIONS(640), 2,
      sym_bound_apex_expression,
      sym_int,
  [6956] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(642), 1,
      sym_identifier,
    STATE(174), 1,
      sym_dotted_identifier,
    STATE(301), 1,
      sym_formatting_comment,
  [6969] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(302), 1,
      sym_formatting_comment,
    ACTIONS(644), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [6980] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(646), 1,
      aux_sym_from_clause_token1,
    STATE(21), 1,
      sym_from_clause,
    STATE(303), 1,
      sym_formatting_comment,
  [6993] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(304), 1,
      sym_formatting_comment,
    ACTIONS(648), 2,
      anon_sym_LPAREN,
      sym_bound_apex_expression,
  [7004] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(305), 1,
      sym_formatting_comment,
    ACTIONS(650), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [7015] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(652), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(654), 1,
      aux_sym_select_clause_token1,
    STATE(306), 1,
      sym_formatting_comment,
  [7028] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(307), 1,
      sym_formatting_comment,
    ACTIONS(553), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7039] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(308), 1,
      sym_formatting_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7050] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(638), 1,
      sym_identifier,
    STATE(94), 1,
      sym_with_data_cat_filter,
    STATE(309), 1,
      sym_formatting_comment,
  [7063] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(310), 1,
      sym_formatting_comment,
    ACTIONS(656), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7074] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(311), 1,
      sym_formatting_comment,
    ACTIONS(658), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [7085] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(312), 1,
      sym_formatting_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7096] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(660), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      sym_bound_apex_expression,
    STATE(313), 1,
      sym_formatting_comment,
  [7109] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(314), 1,
      sym_formatting_comment,
    ACTIONS(492), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [7120] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(315), 1,
      sym_formatting_comment,
    ACTIONS(664), 2,
      sym_bound_apex_expression,
      sym_int,
  [7131] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(666), 1,
      anon_sym_LPAREN,
    ACTIONS(668), 1,
      sym_identifier,
    STATE(316), 1,
      sym_formatting_comment,
  [7144] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(670), 1,
      sym_identifier,
    STATE(194), 1,
      sym_dotted_identifier,
    STATE(317), 1,
      sym_formatting_comment,
  [7157] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(318), 1,
      sym_formatting_comment,
    ACTIONS(672), 2,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
  [7168] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(319), 1,
      sym_formatting_comment,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7179] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(320), 1,
      sym_formatting_comment,
    ACTIONS(530), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7190] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(674), 1,
      aux_sym_order_null_direction_token2,
    ACTIONS(676), 1,
      aux_sym_order_null_direction_token3,
    STATE(321), 1,
      sym_formatting_comment,
  [7203] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(678), 1,
      aux_sym_when_expression_token2,
    STATE(322), 1,
      sym_formatting_comment,
  [7213] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(680), 1,
      anon_sym_COLON,
    STATE(323), 1,
      sym_formatting_comment,
  [7223] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(682), 1,
      aux_sym_group_by_clause_token2,
    STATE(324), 1,
      sym_formatting_comment,
  [7233] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    STATE(325), 1,
      sym_formatting_comment,
  [7243] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(686), 1,
      anon_sym_LPAREN,
    STATE(326), 1,
      sym_formatting_comment,
  [7253] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(551), 1,
      aux_sym_from_clause_token1,
    STATE(327), 1,
      sym_formatting_comment,
  [7263] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      sym_formatting_comment,
  [7273] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      sym_formatting_comment,
  [7283] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      sym_formatting_comment,
  [7293] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(694), 1,
      sym_identifier,
    STATE(331), 1,
      sym_formatting_comment,
  [7303] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(696), 1,
      sym_identifier,
    STATE(332), 1,
      sym_formatting_comment,
  [7313] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      sym_formatting_comment,
  [7323] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(700), 1,
      anon_sym_EQ,
    STATE(334), 1,
      sym_formatting_comment,
  [7333] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(444), 1,
      aux_sym_type_of_clause_token2,
    STATE(335), 1,
      sym_formatting_comment,
  [7343] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_formatting_comment,
  [7353] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    STATE(337), 1,
      sym_formatting_comment,
  [7363] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      sym_formatting_comment,
  [7373] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    STATE(339), 1,
      sym_formatting_comment,
  [7383] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(710), 1,
      sym_decimal,
    STATE(340), 1,
      sym_formatting_comment,
  [7393] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(712), 1,
      aux_sym_from_clause_token1,
    STATE(341), 1,
      sym_formatting_comment,
  [7403] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(714), 1,
      sym_identifier,
    STATE(342), 1,
      sym_formatting_comment,
  [7413] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(716), 1,
      sym_identifier,
    STATE(343), 1,
      sym_formatting_comment,
  [7423] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(718), 1,
      anon_sym_LPAREN,
    STATE(344), 1,
      sym_formatting_comment,
  [7433] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(720), 1,
      anon_sym_EQ,
    STATE(345), 1,
      sym_formatting_comment,
  [7443] = 3,
    ACTIONS(722), 1,
      aux_sym_header_comment_token1,
    ACTIONS(724), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(346), 1,
      sym_formatting_comment,
  [7453] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
    STATE(347), 1,
      sym_formatting_comment,
  [7463] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(728), 1,
      aux_sym_with_data_cat_expression_token2,
    STATE(348), 1,
      sym_formatting_comment,
  [7473] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(730), 1,
      sym_identifier,
    STATE(349), 1,
      sym_formatting_comment,
  [7483] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(732), 1,
      aux_sym_type_of_clause_token2,
    STATE(350), 1,
      sym_formatting_comment,
  [7493] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      sym_formatting_comment,
  [7503] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      sym_formatting_comment,
  [7513] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      sym_formatting_comment,
  [7523] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    STATE(354), 1,
      sym_formatting_comment,
  [7533] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(742), 1,
      sym_identifier,
    STATE(355), 1,
      sym_formatting_comment,
  [7543] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(744), 1,
      aux_sym_type_of_clause_token2,
    STATE(356), 1,
      sym_formatting_comment,
  [7553] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      sym_formatting_comment,
  [7563] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(748), 1,
      aux_sym_group_by_clause_token2,
    STATE(358), 1,
      sym_formatting_comment,
  [7573] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(750), 1,
      aux_sym_set_comparison_operator_token1,
    STATE(359), 1,
      sym_formatting_comment,
  [7583] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      sym_formatting_comment,
  [7593] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(754), 1,
      aux_sym_soql_using_clause_token2,
    STATE(361), 1,
      sym_formatting_comment,
  [7603] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
    STATE(362), 1,
      sym_formatting_comment,
  [7613] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(758), 1,
      sym_int,
    STATE(363), 1,
      sym_formatting_comment,
  [7623] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(760), 1,
      ts_builtin_sym_end,
    STATE(364), 1,
      sym_formatting_comment,
  [7633] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(762), 1,
      sym_int,
    STATE(365), 1,
      sym_formatting_comment,
  [7643] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(764), 1,
      sym_int,
    STATE(366), 1,
      sym_formatting_comment,
  [7653] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(766), 1,
      ts_builtin_sym_end,
    STATE(367), 1,
      sym_formatting_comment,
  [7663] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      sym_formatting_comment,
  [7673] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      sym_formatting_comment,
  [7683] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(772), 1,
      sym_string_literal,
    STATE(370), 1,
      sym_formatting_comment,
  [7693] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(371), 1,
      sym_formatting_comment,
  [7703] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(774), 1,
      sym_string_literal,
    STATE(372), 1,
      sym_formatting_comment,
  [7713] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(776), 1,
      sym_decimal,
    STATE(373), 1,
      sym_formatting_comment,
  [7723] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    STATE(374), 1,
      sym_formatting_comment,
  [7733] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(780), 1,
      sym_identifier,
    STATE(375), 1,
      sym_formatting_comment,
  [7743] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(782), 1,
      anon_sym_LPAREN,
    STATE(376), 1,
      sym_formatting_comment,
  [7753] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(784), 1,
      ts_builtin_sym_end,
    STATE(377), 1,
      sym_formatting_comment,
  [7763] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(786), 1,
      anon_sym_COLON,
    STATE(378), 1,
      sym_formatting_comment,
  [7773] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(788), 1,
      sym_string_literal,
    STATE(379), 1,
      sym_formatting_comment,
  [7783] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(790), 1,
      sym_identifier,
    STATE(380), 1,
      sym_formatting_comment,
  [7793] = 3,
    ACTIONS(724), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(792), 1,
      aux_sym_header_comment_token1,
    STATE(381), 1,
      sym_formatting_comment,
  [7803] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      sym_formatting_comment,
  [7813] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(796), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      sym_formatting_comment,
  [7823] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    STATE(384), 1,
      sym_formatting_comment,
  [7833] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(800), 1,
      anon_sym_EQ,
    STATE(385), 1,
      sym_formatting_comment,
  [7843] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    STATE(386), 1,
      sym_formatting_comment,
  [7853] = 1,
    ACTIONS(804), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 274,
  [SMALL_STATE(7)] = 338,
  [SMALL_STATE(8)] = 402,
  [SMALL_STATE(9)] = 466,
  [SMALL_STATE(10)] = 530,
  [SMALL_STATE(11)] = 594,
  [SMALL_STATE(12)] = 639,
  [SMALL_STATE(13)] = 681,
  [SMALL_STATE(14)] = 725,
  [SMALL_STATE(15)] = 764,
  [SMALL_STATE(16)] = 808,
  [SMALL_STATE(17)] = 843,
  [SMALL_STATE(18)] = 878,
  [SMALL_STATE(19)] = 913,
  [SMALL_STATE(20)] = 948,
  [SMALL_STATE(21)] = 981,
  [SMALL_STATE(22)] = 1046,
  [SMALL_STATE(23)] = 1105,
  [SMALL_STATE(24)] = 1147,
  [SMALL_STATE(25)] = 1189,
  [SMALL_STATE(26)] = 1231,
  [SMALL_STATE(27)] = 1273,
  [SMALL_STATE(28)] = 1304,
  [SMALL_STATE(29)] = 1357,
  [SMALL_STATE(30)] = 1386,
  [SMALL_STATE(31)] = 1433,
  [SMALL_STATE(32)] = 1486,
  [SMALL_STATE(33)] = 1517,
  [SMALL_STATE(34)] = 1543,
  [SMALL_STATE(35)] = 1587,
  [SMALL_STATE(36)] = 1633,
  [SMALL_STATE(37)] = 1679,
  [SMALL_STATE(38)] = 1725,
  [SMALL_STATE(39)] = 1759,
  [SMALL_STATE(40)] = 1806,
  [SMALL_STATE(41)] = 1853,
  [SMALL_STATE(42)] = 1882,
  [SMALL_STATE(43)] = 1929,
  [SMALL_STATE(44)] = 1954,
  [SMALL_STATE(45)] = 1984,
  [SMALL_STATE(46)] = 2010,
  [SMALL_STATE(47)] = 2034,
  [SMALL_STATE(48)] = 2060,
  [SMALL_STATE(49)] = 2084,
  [SMALL_STATE(50)] = 2107,
  [SMALL_STATE(51)] = 2148,
  [SMALL_STATE(52)] = 2171,
  [SMALL_STATE(53)] = 2212,
  [SMALL_STATE(54)] = 2251,
  [SMALL_STATE(55)] = 2292,
  [SMALL_STATE(56)] = 2313,
  [SMALL_STATE(57)] = 2336,
  [SMALL_STATE(58)] = 2375,
  [SMALL_STATE(59)] = 2404,
  [SMALL_STATE(60)] = 2443,
  [SMALL_STATE(61)] = 2466,
  [SMALL_STATE(62)] = 2487,
  [SMALL_STATE(63)] = 2510,
  [SMALL_STATE(64)] = 2551,
  [SMALL_STATE(65)] = 2572,
  [SMALL_STATE(66)] = 2594,
  [SMALL_STATE(67)] = 2616,
  [SMALL_STATE(68)] = 2640,
  [SMALL_STATE(69)] = 2662,
  [SMALL_STATE(70)] = 2686,
  [SMALL_STATE(71)] = 2708,
  [SMALL_STATE(72)] = 2730,
  [SMALL_STATE(73)] = 2752,
  [SMALL_STATE(74)] = 2774,
  [SMALL_STATE(75)] = 2796,
  [SMALL_STATE(76)] = 2824,
  [SMALL_STATE(77)] = 2846,
  [SMALL_STATE(78)] = 2868,
  [SMALL_STATE(79)] = 2903,
  [SMALL_STATE(80)] = 2922,
  [SMALL_STATE(81)] = 2941,
  [SMALL_STATE(82)] = 2976,
  [SMALL_STATE(83)] = 2999,
  [SMALL_STATE(84)] = 3022,
  [SMALL_STATE(85)] = 3057,
  [SMALL_STATE(86)] = 3092,
  [SMALL_STATE(87)] = 3115,
  [SMALL_STATE(88)] = 3150,
  [SMALL_STATE(89)] = 3171,
  [SMALL_STATE(90)] = 3206,
  [SMALL_STATE(91)] = 3241,
  [SMALL_STATE(92)] = 3262,
  [SMALL_STATE(93)] = 3281,
  [SMALL_STATE(94)] = 3310,
  [SMALL_STATE(95)] = 3333,
  [SMALL_STATE(96)] = 3354,
  [SMALL_STATE(97)] = 3389,
  [SMALL_STATE(98)] = 3424,
  [SMALL_STATE(99)] = 3446,
  [SMALL_STATE(100)] = 3466,
  [SMALL_STATE(101)] = 3484,
  [SMALL_STATE(102)] = 3502,
  [SMALL_STATE(103)] = 3524,
  [SMALL_STATE(104)] = 3544,
  [SMALL_STATE(105)] = 3564,
  [SMALL_STATE(106)] = 3584,
  [SMALL_STATE(107)] = 3602,
  [SMALL_STATE(108)] = 3622,
  [SMALL_STATE(109)] = 3644,
  [SMALL_STATE(110)] = 3662,
  [SMALL_STATE(111)] = 3682,
  [SMALL_STATE(112)] = 3700,
  [SMALL_STATE(113)] = 3720,
  [SMALL_STATE(114)] = 3738,
  [SMALL_STATE(115)] = 3758,
  [SMALL_STATE(116)] = 3776,
  [SMALL_STATE(117)] = 3794,
  [SMALL_STATE(118)] = 3814,
  [SMALL_STATE(119)] = 3834,
  [SMALL_STATE(120)] = 3856,
  [SMALL_STATE(121)] = 3881,
  [SMALL_STATE(122)] = 3902,
  [SMALL_STATE(123)] = 3931,
  [SMALL_STATE(124)] = 3948,
  [SMALL_STATE(125)] = 3977,
  [SMALL_STATE(126)] = 4006,
  [SMALL_STATE(127)] = 4037,
  [SMALL_STATE(128)] = 4066,
  [SMALL_STATE(129)] = 4083,
  [SMALL_STATE(130)] = 4112,
  [SMALL_STATE(131)] = 4129,
  [SMALL_STATE(132)] = 4148,
  [SMALL_STATE(133)] = 4165,
  [SMALL_STATE(134)] = 4184,
  [SMALL_STATE(135)] = 4213,
  [SMALL_STATE(136)] = 4234,
  [SMALL_STATE(137)] = 4251,
  [SMALL_STATE(138)] = 4268,
  [SMALL_STATE(139)] = 4285,
  [SMALL_STATE(140)] = 4314,
  [SMALL_STATE(141)] = 4343,
  [SMALL_STATE(142)] = 4364,
  [SMALL_STATE(143)] = 4393,
  [SMALL_STATE(144)] = 4421,
  [SMALL_STATE(145)] = 4449,
  [SMALL_STATE(146)] = 4475,
  [SMALL_STATE(147)] = 4491,
  [SMALL_STATE(148)] = 4515,
  [SMALL_STATE(149)] = 4531,
  [SMALL_STATE(150)] = 4547,
  [SMALL_STATE(151)] = 4575,
  [SMALL_STATE(152)] = 4591,
  [SMALL_STATE(153)] = 4611,
  [SMALL_STATE(154)] = 4639,
  [SMALL_STATE(155)] = 4655,
  [SMALL_STATE(156)] = 4681,
  [SMALL_STATE(157)] = 4697,
  [SMALL_STATE(158)] = 4723,
  [SMALL_STATE(159)] = 4751,
  [SMALL_STATE(160)] = 4773,
  [SMALL_STATE(161)] = 4799,
  [SMALL_STATE(162)] = 4815,
  [SMALL_STATE(163)] = 4831,
  [SMALL_STATE(164)] = 4847,
  [SMALL_STATE(165)] = 4870,
  [SMALL_STATE(166)] = 4893,
  [SMALL_STATE(167)] = 4918,
  [SMALL_STATE(168)] = 4941,
  [SMALL_STATE(169)] = 4964,
  [SMALL_STATE(170)] = 4987,
  [SMALL_STATE(171)] = 5010,
  [SMALL_STATE(172)] = 5035,
  [SMALL_STATE(173)] = 5054,
  [SMALL_STATE(174)] = 5071,
  [SMALL_STATE(175)] = 5096,
  [SMALL_STATE(176)] = 5119,
  [SMALL_STATE(177)] = 5144,
  [SMALL_STATE(178)] = 5167,
  [SMALL_STATE(179)] = 5185,
  [SMALL_STATE(180)] = 5201,
  [SMALL_STATE(181)] = 5219,
  [SMALL_STATE(182)] = 5237,
  [SMALL_STATE(183)] = 5251,
  [SMALL_STATE(184)] = 5269,
  [SMALL_STATE(185)] = 5285,
  [SMALL_STATE(186)] = 5301,
  [SMALL_STATE(187)] = 5317,
  [SMALL_STATE(188)] = 5333,
  [SMALL_STATE(189)] = 5349,
  [SMALL_STATE(190)] = 5367,
  [SMALL_STATE(191)] = 5383,
  [SMALL_STATE(192)] = 5401,
  [SMALL_STATE(193)] = 5423,
  [SMALL_STATE(194)] = 5445,
  [SMALL_STATE(195)] = 5458,
  [SMALL_STATE(196)] = 5477,
  [SMALL_STATE(197)] = 5492,
  [SMALL_STATE(198)] = 5505,
  [SMALL_STATE(199)] = 5524,
  [SMALL_STATE(200)] = 5539,
  [SMALL_STATE(201)] = 5558,
  [SMALL_STATE(202)] = 5575,
  [SMALL_STATE(203)] = 5592,
  [SMALL_STATE(204)] = 5609,
  [SMALL_STATE(205)] = 5626,
  [SMALL_STATE(206)] = 5639,
  [SMALL_STATE(207)] = 5656,
  [SMALL_STATE(208)] = 5673,
  [SMALL_STATE(209)] = 5690,
  [SMALL_STATE(210)] = 5707,
  [SMALL_STATE(211)] = 5724,
  [SMALL_STATE(212)] = 5741,
  [SMALL_STATE(213)] = 5758,
  [SMALL_STATE(214)] = 5777,
  [SMALL_STATE(215)] = 5790,
  [SMALL_STATE(216)] = 5805,
  [SMALL_STATE(217)] = 5822,
  [SMALL_STATE(218)] = 5841,
  [SMALL_STATE(219)] = 5858,
  [SMALL_STATE(220)] = 5873,
  [SMALL_STATE(221)] = 5887,
  [SMALL_STATE(222)] = 5899,
  [SMALL_STATE(223)] = 5911,
  [SMALL_STATE(224)] = 5925,
  [SMALL_STATE(225)] = 5937,
  [SMALL_STATE(226)] = 5949,
  [SMALL_STATE(227)] = 5965,
  [SMALL_STATE(228)] = 5981,
  [SMALL_STATE(229)] = 5997,
  [SMALL_STATE(230)] = 6013,
  [SMALL_STATE(231)] = 6025,
  [SMALL_STATE(232)] = 6037,
  [SMALL_STATE(233)] = 6053,
  [SMALL_STATE(234)] = 6069,
  [SMALL_STATE(235)] = 6081,
  [SMALL_STATE(236)] = 6097,
  [SMALL_STATE(237)] = 6109,
  [SMALL_STATE(238)] = 6123,
  [SMALL_STATE(239)] = 6139,
  [SMALL_STATE(240)] = 6155,
  [SMALL_STATE(241)] = 6171,
  [SMALL_STATE(242)] = 6185,
  [SMALL_STATE(243)] = 6201,
  [SMALL_STATE(244)] = 6217,
  [SMALL_STATE(245)] = 6233,
  [SMALL_STATE(246)] = 6247,
  [SMALL_STATE(247)] = 6259,
  [SMALL_STATE(248)] = 6275,
  [SMALL_STATE(249)] = 6291,
  [SMALL_STATE(250)] = 6303,
  [SMALL_STATE(251)] = 6315,
  [SMALL_STATE(252)] = 6331,
  [SMALL_STATE(253)] = 6345,
  [SMALL_STATE(254)] = 6361,
  [SMALL_STATE(255)] = 6377,
  [SMALL_STATE(256)] = 6393,
  [SMALL_STATE(257)] = 6409,
  [SMALL_STATE(258)] = 6425,
  [SMALL_STATE(259)] = 6437,
  [SMALL_STATE(260)] = 6449,
  [SMALL_STATE(261)] = 6461,
  [SMALL_STATE(262)] = 6473,
  [SMALL_STATE(263)] = 6485,
  [SMALL_STATE(264)] = 6497,
  [SMALL_STATE(265)] = 6509,
  [SMALL_STATE(266)] = 6523,
  [SMALL_STATE(267)] = 6535,
  [SMALL_STATE(268)] = 6549,
  [SMALL_STATE(269)] = 6561,
  [SMALL_STATE(270)] = 6577,
  [SMALL_STATE(271)] = 6593,
  [SMALL_STATE(272)] = 6605,
  [SMALL_STATE(273)] = 6621,
  [SMALL_STATE(274)] = 6633,
  [SMALL_STATE(275)] = 6647,
  [SMALL_STATE(276)] = 6659,
  [SMALL_STATE(277)] = 6671,
  [SMALL_STATE(278)] = 6687,
  [SMALL_STATE(279)] = 6703,
  [SMALL_STATE(280)] = 6715,
  [SMALL_STATE(281)] = 6727,
  [SMALL_STATE(282)] = 6741,
  [SMALL_STATE(283)] = 6752,
  [SMALL_STATE(284)] = 6763,
  [SMALL_STATE(285)] = 6774,
  [SMALL_STATE(286)] = 6785,
  [SMALL_STATE(287)] = 6796,
  [SMALL_STATE(288)] = 6807,
  [SMALL_STATE(289)] = 6820,
  [SMALL_STATE(290)] = 6831,
  [SMALL_STATE(291)] = 6842,
  [SMALL_STATE(292)] = 6853,
  [SMALL_STATE(293)] = 6866,
  [SMALL_STATE(294)] = 6877,
  [SMALL_STATE(295)] = 6888,
  [SMALL_STATE(296)] = 6899,
  [SMALL_STATE(297)] = 6910,
  [SMALL_STATE(298)] = 6921,
  [SMALL_STATE(299)] = 6932,
  [SMALL_STATE(300)] = 6945,
  [SMALL_STATE(301)] = 6956,
  [SMALL_STATE(302)] = 6969,
  [SMALL_STATE(303)] = 6980,
  [SMALL_STATE(304)] = 6993,
  [SMALL_STATE(305)] = 7004,
  [SMALL_STATE(306)] = 7015,
  [SMALL_STATE(307)] = 7028,
  [SMALL_STATE(308)] = 7039,
  [SMALL_STATE(309)] = 7050,
  [SMALL_STATE(310)] = 7063,
  [SMALL_STATE(311)] = 7074,
  [SMALL_STATE(312)] = 7085,
  [SMALL_STATE(313)] = 7096,
  [SMALL_STATE(314)] = 7109,
  [SMALL_STATE(315)] = 7120,
  [SMALL_STATE(316)] = 7131,
  [SMALL_STATE(317)] = 7144,
  [SMALL_STATE(318)] = 7157,
  [SMALL_STATE(319)] = 7168,
  [SMALL_STATE(320)] = 7179,
  [SMALL_STATE(321)] = 7190,
  [SMALL_STATE(322)] = 7203,
  [SMALL_STATE(323)] = 7213,
  [SMALL_STATE(324)] = 7223,
  [SMALL_STATE(325)] = 7233,
  [SMALL_STATE(326)] = 7243,
  [SMALL_STATE(327)] = 7253,
  [SMALL_STATE(328)] = 7263,
  [SMALL_STATE(329)] = 7273,
  [SMALL_STATE(330)] = 7283,
  [SMALL_STATE(331)] = 7293,
  [SMALL_STATE(332)] = 7303,
  [SMALL_STATE(333)] = 7313,
  [SMALL_STATE(334)] = 7323,
  [SMALL_STATE(335)] = 7333,
  [SMALL_STATE(336)] = 7343,
  [SMALL_STATE(337)] = 7353,
  [SMALL_STATE(338)] = 7363,
  [SMALL_STATE(339)] = 7373,
  [SMALL_STATE(340)] = 7383,
  [SMALL_STATE(341)] = 7393,
  [SMALL_STATE(342)] = 7403,
  [SMALL_STATE(343)] = 7413,
  [SMALL_STATE(344)] = 7423,
  [SMALL_STATE(345)] = 7433,
  [SMALL_STATE(346)] = 7443,
  [SMALL_STATE(347)] = 7453,
  [SMALL_STATE(348)] = 7463,
  [SMALL_STATE(349)] = 7473,
  [SMALL_STATE(350)] = 7483,
  [SMALL_STATE(351)] = 7493,
  [SMALL_STATE(352)] = 7503,
  [SMALL_STATE(353)] = 7513,
  [SMALL_STATE(354)] = 7523,
  [SMALL_STATE(355)] = 7533,
  [SMALL_STATE(356)] = 7543,
  [SMALL_STATE(357)] = 7553,
  [SMALL_STATE(358)] = 7563,
  [SMALL_STATE(359)] = 7573,
  [SMALL_STATE(360)] = 7583,
  [SMALL_STATE(361)] = 7593,
  [SMALL_STATE(362)] = 7603,
  [SMALL_STATE(363)] = 7613,
  [SMALL_STATE(364)] = 7623,
  [SMALL_STATE(365)] = 7633,
  [SMALL_STATE(366)] = 7643,
  [SMALL_STATE(367)] = 7653,
  [SMALL_STATE(368)] = 7663,
  [SMALL_STATE(369)] = 7673,
  [SMALL_STATE(370)] = 7683,
  [SMALL_STATE(371)] = 7693,
  [SMALL_STATE(372)] = 7703,
  [SMALL_STATE(373)] = 7713,
  [SMALL_STATE(374)] = 7723,
  [SMALL_STATE(375)] = 7733,
  [SMALL_STATE(376)] = 7743,
  [SMALL_STATE(377)] = 7753,
  [SMALL_STATE(378)] = 7763,
  [SMALL_STATE(379)] = 7773,
  [SMALL_STATE(380)] = 7783,
  [SMALL_STATE(381)] = 7793,
  [SMALL_STATE(382)] = 7803,
  [SMALL_STATE(383)] = 7813,
  [SMALL_STATE(384)] = 7823,
  [SMALL_STATE(385)] = 7833,
  [SMALL_STATE(386)] = 7843,
  [SMALL_STATE(387)] = 7853,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_comparison_operator, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_comparison_operator, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(355),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 8, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 8, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 4, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 4, .production_id = 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 5, .production_id = 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 5, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_expression, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_expression, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_identifier, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storage_identifier, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(375),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(213),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_literal, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_literal, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal_with_param, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal_with_param, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__soql_literal, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__soql_literal, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_expression, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2), SHIFT_REPEAT(78),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_comparison, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_comparison, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 5),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comparison, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comparison, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_boolean_expression, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2), SHIFT_REPEAT(89),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_using_clause, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_scope_type, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2), SHIFT_REPEAT(299),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2), SHIFT_REPEAT(177),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_or_expression, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_condition_expression, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_condition_expression, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_comparison, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_comparison, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_comparison_expression, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_having_comparison_expression, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_set_comparison, 5),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_set_comparison, 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 6),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_condition_expression, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_condition_expression, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_and_expression, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_set_comparison, 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_set_comparison, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 5),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_set_comparison, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_set_comparison, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_value_comparison, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_value_comparison, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_having_or_expression_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_having_or_expression_repeat1, 2), SHIFT_REPEAT(153),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_having_and_expression_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_having_and_expression_repeat1, 2), SHIFT_REPEAT(144),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, .production_id = 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_user_id_type, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_having_or_expression_repeat1, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_type, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2), SHIFT_REPEAT(124),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 4, .production_id = 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_clause, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_not_expression, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_clause, 2),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(349),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_null_direction, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_null_direction, 2, .production_id = 5),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 4),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2), SHIFT_REPEAT(332),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2), SHIFT_REPEAT(219),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(317),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2), SHIFT_REPEAT(252),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selectable_expression, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selectable_expression, 1),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(381),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_clause, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_type, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__having_set_comparison_repeat1, 2),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__having_set_comparison_repeat1, 2), SHIFT_REPEAT(8),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2), SHIFT_REPEAT(157),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_expression, 4),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2), SHIFT_REPEAT(331),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2), SHIFT_REPEAT(97),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 1),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_having_or_expression_repeat1, 2), SHIFT_REPEAT(158),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_type, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2), SHIFT_REPEAT(207),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2), SHIFT_REPEAT(34),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_clause_repeat1, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter_type, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_param, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_comment, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_comment, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 4),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_comparison_operator, 2, .production_id = 4),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_expression, 4),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_comparison_operator, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 3),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 11),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 5),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 6, .production_id = 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_type, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_expression, 3, .production_id = 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expression, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__soql_query_expression, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [784] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatting_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_soql(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
