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
#define STATE_COUNT 505
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 246
#define ALIAS_COUNT 1
#define TOKEN_COUNT 134
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_header_comment_token1 = 2,
  anon_sym_SLASH_SLASH_SLASH = 3,
  aux_sym_find_clause_token1 = 4,
  aux_sym_in_clause_token1 = 5,
  aux_sym_in_clause_token2 = 6,
  aux_sym_in_type_token1 = 7,
  aux_sym_in_type_token2 = 8,
  aux_sym_in_type_token3 = 9,
  aux_sym_in_type_token4 = 10,
  aux_sym_in_type_token5 = 11,
  sym_term_separator_start = 12,
  sym_term_separator_end = 13,
  sym_term = 14,
  aux_sym_returning_clause_token1 = 15,
  anon_sym_COMMA = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  aux_sym_using_clause_token1 = 19,
  aux_sym_using_clause_token2 = 20,
  anon_sym_EQ = 21,
  aux_sym_with_division_expression_token1 = 22,
  aux_sym_with_highlight_token1 = 23,
  aux_sym_with_metadata_expression_token1 = 24,
  aux_sym_with_network_expression_token1 = 25,
  aux_sym_with_pricebook_expression_token1 = 26,
  aux_sym_with_snippet_expression_token1 = 27,
  aux_sym_with_snippet_expression_token2 = 28,
  aux_sym_with_spell_correction_expression_token1 = 29,
  aux_sym_sosl_with_clause_token1 = 30,
  aux_sym_select_clause_token1 = 31,
  aux_sym_soql_using_clause_token1 = 32,
  aux_sym_using_scope_type_token1 = 33,
  aux_sym_using_scope_type_token2 = 34,
  aux_sym_using_scope_type_token3 = 35,
  aux_sym_using_scope_type_token4 = 36,
  aux_sym_using_scope_type_token5 = 37,
  aux_sym_using_scope_type_token6 = 38,
  aux_sym_using_scope_type_token7 = 39,
  aux_sym_type_of_clause_token1 = 40,
  aux_sym_type_of_clause_token2 = 41,
  aux_sym_when_expression_token1 = 42,
  aux_sym_when_expression_token2 = 43,
  aux_sym_else_expression_token1 = 44,
  aux_sym_group_by_clause_token1 = 45,
  aux_sym_group_by_clause_token2 = 46,
  aux_sym_for_clause_token1 = 47,
  aux_sym_for_type_token1 = 48,
  aux_sym_for_type_token2 = 49,
  aux_sym_for_type_token3 = 50,
  aux_sym_having_clause_token1 = 51,
  aux_sym_having_and_expression_token1 = 52,
  aux_sym_having_or_expression_token1 = 53,
  aux_sym_having_not_expression_token1 = 54,
  aux_sym_from_clause_token1 = 55,
  aux_sym_storage_alias_token1 = 56,
  aux_sym_fields_type_token1 = 57,
  aux_sym_fields_type_token2 = 58,
  aux_sym_where_clause_token1 = 59,
  aux_sym_soql_with_type_token1 = 60,
  aux_sym_soql_with_type_token2 = 61,
  aux_sym_soql_with_type_token3 = 62,
  aux_sym_with_user_id_type_token1 = 63,
  aux_sym_with_record_visibility_expression_token1 = 64,
  aux_sym_with_record_visibility_param_token1 = 65,
  aux_sym_with_record_visibility_param_token2 = 66,
  aux_sym_with_record_visibility_param_token3 = 67,
  aux_sym_with_data_cat_expression_token1 = 68,
  aux_sym_with_data_cat_expression_token2 = 69,
  aux_sym_with_data_cat_filter_type_token1 = 70,
  aux_sym_with_data_cat_filter_type_token2 = 71,
  aux_sym_with_data_cat_filter_type_token3 = 72,
  aux_sym_with_data_cat_filter_type_token4 = 73,
  aux_sym_limit_clause_token1 = 74,
  aux_sym_offset_clause_token1 = 75,
  aux_sym_update_type_token1 = 76,
  aux_sym_update_type_token2 = 77,
  aux_sym_order_by_clause_token1 = 78,
  aux_sym_order_direction_token1 = 79,
  aux_sym_order_direction_token2 = 80,
  aux_sym_order_null_direction_token1 = 81,
  aux_sym_order_null_direction_token2 = 82,
  aux_sym_order_null_direction_token3 = 83,
  aux_sym_geo_location_type_token1 = 84,
  aux_sym_function_expression_token1 = 85,
  anon_sym_DOT = 86,
  aux_sym_all_rows_clause_token1 = 87,
  aux_sym_boolean_token1 = 88,
  aux_sym_boolean_token2 = 89,
  anon_sym_BANG_EQ = 90,
  anon_sym_LT_GT = 91,
  anon_sym_LT = 92,
  anon_sym_LT_EQ = 93,
  anon_sym_GT = 94,
  anon_sym_GT_EQ = 95,
  aux_sym_value_comparison_operator_token1 = 96,
  aux_sym_set_comparison_operator_token1 = 97,
  aux_sym_set_comparison_operator_token2 = 98,
  aux_sym_date_literal_token1 = 99,
  aux_sym_date_literal_token2 = 100,
  aux_sym_date_literal_token3 = 101,
  aux_sym_date_literal_token4 = 102,
  aux_sym_date_literal_token5 = 103,
  aux_sym_date_literal_token6 = 104,
  aux_sym_date_literal_token7 = 105,
  aux_sym_date_literal_token8 = 106,
  aux_sym_date_literal_token9 = 107,
  aux_sym_date_literal_token10 = 108,
  aux_sym_date_literal_token11 = 109,
  aux_sym_date_literal_token12 = 110,
  aux_sym_date_literal_token13 = 111,
  aux_sym_date_literal_token14 = 112,
  aux_sym_date_literal_token15 = 113,
  aux_sym_date_literal_token16 = 114,
  aux_sym_date_literal_token17 = 115,
  aux_sym_date_literal_token18 = 116,
  aux_sym_date_literal_token19 = 117,
  aux_sym_date_literal_token20 = 118,
  aux_sym_date_literal_token21 = 119,
  aux_sym_date_literal_token22 = 120,
  aux_sym_date_literal_token23 = 121,
  aux_sym_date_literal_with_param_token1 = 122,
  anon_sym_COLON = 123,
  anon_sym_QMARK = 124,
  sym_bound_apex_expression = 125,
  aux_sym_null_literal_token1 = 126,
  sym_string_literal = 127,
  sym_int = 128,
  sym_decimal = 129,
  sym_date = 130,
  sym_date_time = 131,
  sym_currency_literal = 132,
  sym_identifier = 133,
  sym_source_file = 134,
  sym_header_comment = 135,
  sym_formatting_comment = 136,
  sym__query_expression = 137,
  sym_sosl_query_body = 138,
  sym_find_clause = 139,
  sym_in_clause = 140,
  sym_in_type = 141,
  sym_returning_clause = 142,
  sym_sobject_return = 143,
  sym_selected_fields = 144,
  sym__selectable_expression = 145,
  sym_using_clause = 146,
  sym_subquery = 147,
  sym_with_division_expression = 148,
  sym_with_highlight = 149,
  sym_with_metadata_expression = 150,
  sym_with_network_expression = 151,
  sym_with_pricebook_expression = 152,
  sym_with_snippet_expression = 153,
  sym_with_spell_correction_expression = 154,
  sym_sosl_with_type = 155,
  sym_sosl_with_clause = 156,
  sym_soql_query_body = 157,
  sym_count_expression = 158,
  sym_select_clause = 159,
  sym_soql_using_clause = 160,
  sym_using_scope_type = 161,
  sym_type_of_clause = 162,
  sym_when_expression = 163,
  sym_else_expression = 164,
  sym_group_by_clause = 165,
  sym__group_by_expression = 166,
  sym_for_clause = 167,
  sym_for_type = 168,
  sym_having_clause = 169,
  sym__having_boolean_expression = 170,
  sym_having_and_expression = 171,
  sym_having_or_expression = 172,
  sym_having_not_expression = 173,
  sym__having_condition_expression = 174,
  sym_having_comparison_expression = 175,
  sym__having_comparison = 176,
  sym__having_value_comparison = 177,
  sym__having_set_comparison = 178,
  sym_from_clause = 179,
  sym_storage_identifier = 180,
  sym_storage_alias = 181,
  sym_fields_expression = 182,
  sym_fields_type = 183,
  sym_where_clause = 184,
  sym__boolean_expression = 185,
  sym_and_expression = 186,
  sym_or_expression = 187,
  sym_not_expression = 188,
  sym__condition_expression = 189,
  sym_comparison_expression = 190,
  sym__comparison = 191,
  sym__value_comparison = 192,
  sym__set_comparison = 193,
  sym_soql_with_clause = 194,
  sym_soql_with_type = 195,
  sym_with_user_id_type = 196,
  sym_with_record_visibility_expression = 197,
  sym_with_record_visibility_param = 198,
  sym_with_data_cat_expression = 199,
  sym_with_data_cat_filter = 200,
  sym_with_data_cat_filter_type = 201,
  sym_limit_clause = 202,
  sym_offset_clause = 203,
  sym_update_clause = 204,
  sym_update_type = 205,
  sym_alias_expression = 206,
  sym_order_by_clause = 207,
  sym_order_expression = 208,
  sym_order_direction = 209,
  sym_order_null_direction = 210,
  sym_geo_location_type = 211,
  sym__value_expression = 212,
  sym_function_expression = 213,
  sym_dotted_identifier = 214,
  sym_field_identifier = 215,
  sym_field_list = 216,
  sym_boolean = 217,
  sym_value_comparison_operator = 218,
  sym_set_comparison_operator = 219,
  sym_date_literal = 220,
  sym_date_literal_with_param = 221,
  sym__function_name = 222,
  sym_null_literal = 223,
  sym__soql_literal = 224,
  aux_sym_sosl_query_body_repeat1 = 225,
  aux_sym_sosl_query_body_repeat2 = 226,
  aux_sym_returning_clause_repeat1 = 227,
  aux_sym_selected_fields_repeat1 = 228,
  aux_sym_type_of_clause_repeat1 = 229,
  aux_sym__group_by_expression_repeat1 = 230,
  aux_sym_for_clause_repeat1 = 231,
  aux_sym_having_and_expression_repeat1 = 232,
  aux_sym_having_or_expression_repeat1 = 233,
  aux_sym__having_set_comparison_repeat1 = 234,
  aux_sym_from_clause_repeat1 = 235,
  aux_sym_and_expression_repeat1 = 236,
  aux_sym_or_expression_repeat1 = 237,
  aux_sym_with_record_visibility_expression_repeat1 = 238,
  aux_sym_with_data_cat_expression_repeat1 = 239,
  aux_sym_with_data_cat_filter_repeat1 = 240,
  aux_sym_update_clause_repeat1 = 241,
  aux_sym_order_by_clause_repeat1 = 242,
  aux_sym_function_expression_repeat1 = 243,
  aux_sym_dotted_identifier_repeat1 = 244,
  aux_sym_field_list_repeat1 = 245,
  anon_alias_sym_NOT_IN = 246,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_header_comment_token1] = "header_comment_token1",
  [anon_sym_SLASH_SLASH_SLASH] = "///",
  [aux_sym_find_clause_token1] = "FIND",
  [aux_sym_in_clause_token1] = "IN",
  [aux_sym_in_clause_token2] = "FIELDS",
  [aux_sym_in_type_token1] = "ALL",
  [aux_sym_in_type_token2] = "EMAIL",
  [aux_sym_in_type_token3] = "NAME",
  [aux_sym_in_type_token4] = "PHONE",
  [aux_sym_in_type_token5] = "SIDEBAR",
  [sym_term_separator_start] = "term_separator_start",
  [sym_term_separator_end] = "term_separator_end",
  [sym_term] = "term",
  [aux_sym_returning_clause_token1] = "RETURNING",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_using_clause_token1] = "USING",
  [aux_sym_using_clause_token2] = "ListView",
  [anon_sym_EQ] = "=",
  [aux_sym_with_division_expression_token1] = "DIVISION",
  [aux_sym_with_highlight_token1] = "HIGHLIGHT",
  [aux_sym_with_metadata_expression_token1] = "METADATA",
  [aux_sym_with_network_expression_token1] = "NETWORK",
  [aux_sym_with_pricebook_expression_token1] = "PricebookId",
  [aux_sym_with_snippet_expression_token1] = "SNIPPET",
  [aux_sym_with_snippet_expression_token2] = "target_length",
  [aux_sym_with_spell_correction_expression_token1] = "SPELL_CORRECTION",
  [aux_sym_sosl_with_clause_token1] = "WITH",
  [aux_sym_select_clause_token1] = "SELECT",
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
  [aux_sym_fields_type_token1] = "CUSTOM",
  [aux_sym_fields_type_token2] = "STANDARD",
  [aux_sym_where_clause_token1] = "WHERE",
  [aux_sym_soql_with_type_token1] = "Security_Enforced",
  [aux_sym_soql_with_type_token2] = "User_Mode",
  [aux_sym_soql_with_type_token3] = "System_Mode",
  [aux_sym_with_user_id_type_token1] = "UserId",
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
  [aux_sym_set_comparison_operator_token1] = "INCLUDES",
  [aux_sym_set_comparison_operator_token2] = "EXCLUDES",
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
  [sym__query_expression] = "_query_expression",
  [sym_sosl_query_body] = "sosl_query_body",
  [sym_find_clause] = "find_clause",
  [sym_in_clause] = "in_clause",
  [sym_in_type] = "in_type",
  [sym_returning_clause] = "returning_clause",
  [sym_sobject_return] = "sobject_return",
  [sym_selected_fields] = "selected_fields",
  [sym__selectable_expression] = "_selectable_expression",
  [sym_using_clause] = "using_clause",
  [sym_subquery] = "subquery",
  [sym_with_division_expression] = "with_division_expression",
  [sym_with_highlight] = "with_highlight",
  [sym_with_metadata_expression] = "with_metadata_expression",
  [sym_with_network_expression] = "with_network_expression",
  [sym_with_pricebook_expression] = "with_pricebook_expression",
  [sym_with_snippet_expression] = "with_snippet_expression",
  [sym_with_spell_correction_expression] = "with_spell_correction_expression",
  [sym_sosl_with_type] = "with_type",
  [sym_sosl_with_clause] = "with_clause",
  [sym_soql_query_body] = "soql_query_body",
  [sym_count_expression] = "count_expression",
  [sym_select_clause] = "select_clause",
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
  [aux_sym_sosl_query_body_repeat1] = "sosl_query_body_repeat1",
  [aux_sym_sosl_query_body_repeat2] = "sosl_query_body_repeat2",
  [aux_sym_returning_clause_repeat1] = "returning_clause_repeat1",
  [aux_sym_selected_fields_repeat1] = "selected_fields_repeat1",
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
  [aux_sym_find_clause_token1] = aux_sym_find_clause_token1,
  [aux_sym_in_clause_token1] = aux_sym_in_clause_token1,
  [aux_sym_in_clause_token2] = aux_sym_in_clause_token2,
  [aux_sym_in_type_token1] = aux_sym_in_type_token1,
  [aux_sym_in_type_token2] = aux_sym_in_type_token2,
  [aux_sym_in_type_token3] = aux_sym_in_type_token3,
  [aux_sym_in_type_token4] = aux_sym_in_type_token4,
  [aux_sym_in_type_token5] = aux_sym_in_type_token5,
  [sym_term_separator_start] = sym_term_separator_start,
  [sym_term_separator_end] = sym_term_separator_end,
  [sym_term] = sym_term,
  [aux_sym_returning_clause_token1] = aux_sym_returning_clause_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_using_clause_token1] = aux_sym_using_clause_token1,
  [aux_sym_using_clause_token2] = aux_sym_using_clause_token2,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_with_division_expression_token1] = aux_sym_with_division_expression_token1,
  [aux_sym_with_highlight_token1] = aux_sym_with_highlight_token1,
  [aux_sym_with_metadata_expression_token1] = aux_sym_with_metadata_expression_token1,
  [aux_sym_with_network_expression_token1] = aux_sym_with_network_expression_token1,
  [aux_sym_with_pricebook_expression_token1] = aux_sym_with_pricebook_expression_token1,
  [aux_sym_with_snippet_expression_token1] = aux_sym_with_snippet_expression_token1,
  [aux_sym_with_snippet_expression_token2] = aux_sym_with_snippet_expression_token2,
  [aux_sym_with_spell_correction_expression_token1] = aux_sym_with_spell_correction_expression_token1,
  [aux_sym_sosl_with_clause_token1] = aux_sym_sosl_with_clause_token1,
  [aux_sym_select_clause_token1] = aux_sym_select_clause_token1,
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
  [aux_sym_fields_type_token1] = aux_sym_fields_type_token1,
  [aux_sym_fields_type_token2] = aux_sym_fields_type_token2,
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
  [aux_sym_soql_with_type_token1] = aux_sym_soql_with_type_token1,
  [aux_sym_soql_with_type_token2] = aux_sym_soql_with_type_token2,
  [aux_sym_soql_with_type_token3] = aux_sym_soql_with_type_token3,
  [aux_sym_with_user_id_type_token1] = aux_sym_with_user_id_type_token1,
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
  [sym__query_expression] = sym__query_expression,
  [sym_sosl_query_body] = sym_sosl_query_body,
  [sym_find_clause] = sym_find_clause,
  [sym_in_clause] = sym_in_clause,
  [sym_in_type] = sym_in_type,
  [sym_returning_clause] = sym_returning_clause,
  [sym_sobject_return] = sym_sobject_return,
  [sym_selected_fields] = sym_selected_fields,
  [sym__selectable_expression] = sym__selectable_expression,
  [sym_using_clause] = sym_using_clause,
  [sym_subquery] = sym_subquery,
  [sym_with_division_expression] = sym_with_division_expression,
  [sym_with_highlight] = sym_with_highlight,
  [sym_with_metadata_expression] = sym_with_metadata_expression,
  [sym_with_network_expression] = sym_with_network_expression,
  [sym_with_pricebook_expression] = sym_with_pricebook_expression,
  [sym_with_snippet_expression] = sym_with_snippet_expression,
  [sym_with_spell_correction_expression] = sym_with_spell_correction_expression,
  [sym_sosl_with_type] = sym_sosl_with_type,
  [sym_sosl_with_clause] = sym_sosl_with_clause,
  [sym_soql_query_body] = sym_soql_query_body,
  [sym_count_expression] = sym_count_expression,
  [sym_select_clause] = sym_select_clause,
  [sym_soql_using_clause] = sym_using_clause,
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
  [sym_soql_with_clause] = sym_sosl_with_clause,
  [sym_soql_with_type] = sym_sosl_with_type,
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
  [aux_sym_sosl_query_body_repeat1] = aux_sym_sosl_query_body_repeat1,
  [aux_sym_sosl_query_body_repeat2] = aux_sym_sosl_query_body_repeat2,
  [aux_sym_returning_clause_repeat1] = aux_sym_returning_clause_repeat1,
  [aux_sym_selected_fields_repeat1] = aux_sym_selected_fields_repeat1,
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
  [aux_sym_find_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_type_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_type_token5] = {
    .visible = true,
    .named = false,
  },
  [sym_term_separator_start] = {
    .visible = true,
    .named = true,
  },
  [sym_term_separator_end] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_returning_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [aux_sym_using_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_division_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_highlight_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_metadata_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_network_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_pricebook_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_snippet_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_snippet_expression_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_spell_correction_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sosl_with_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_clause_token1] = {
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
  [aux_sym_fields_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_fields_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_where_clause_token1] = {
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
  [sym__query_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_sosl_query_body] = {
    .visible = true,
    .named = true,
  },
  [sym_find_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_in_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_in_type] = {
    .visible = true,
    .named = true,
  },
  [sym_returning_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_sobject_return] = {
    .visible = true,
    .named = true,
  },
  [sym_selected_fields] = {
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
  [sym_subquery] = {
    .visible = true,
    .named = true,
  },
  [sym_with_division_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_highlight] = {
    .visible = true,
    .named = true,
  },
  [sym_with_metadata_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_network_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_pricebook_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_snippet_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_with_spell_correction_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_sosl_with_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sosl_with_clause] = {
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
  [aux_sym_sosl_query_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sosl_query_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_returning_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selected_fields_repeat1] = {
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
  [4] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function_name, 0},
  [1] =
    {field_function_name, 0, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = anon_alias_sym_NOT_IN,
    [1] = anon_alias_sym_NOT_IN,
  },
  [3] = {
    [1] = aux_sym_order_by_clause_token1,
  },
  [5] = {
    [0] = aux_sym_soql_using_clause_token1,
  },
  [6] = {
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
      if (eof) ADVANCE(723);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == ',') ADVANCE(749);
      if (lookahead == '-') ADVANCE(709);
      if (lookahead == '.') ADVANCE(837);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(874);
      if (lookahead == '<') ADVANCE(843);
      if (lookahead == '=') ADVANCE(755);
      if (lookahead == '>') ADVANCE(845);
      if (lookahead == '?') ADVANCE(875);
      if (lookahead == '{') ADVANCE(741);
      if (lookahead == '}') ADVANCE(742);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(218);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(74);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(87);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(222);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(414);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(292);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(320);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(488);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(329);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(319);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(887);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == ',') ADVANCE(749);
      if (lookahead == '-') ADVANCE(709);
      if (lookahead == '.') ADVANCE(837);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '<') ADVANCE(843);
      if (lookahead == '=') ADVANCE(755);
      if (lookahead == '>') ADVANCE(845);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(582);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(259);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(348);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(75);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(414);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(293);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(537);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(487);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(349);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(889);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '-') ADVANCE(709);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(226);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(485);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(331);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(885);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(721);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(879);
      if (lookahead == '\\') ADVANCE(720);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == ',') ADVANCE(749);
      if (lookahead == '.') ADVANCE(837);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(950);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(921);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(913);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(951);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(918);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(919);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == ',') ADVANCE(749);
      if (lookahead == '.') ADVANCE(837);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(950);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(946);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(919);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(920);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(961);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(750);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(919);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(934);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == ',') ADVANCE(749);
      if (lookahead == '.') ADVANCE(837);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(950);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(937);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(945);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(921);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(913);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(942);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(917);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(751);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(413);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(911);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(876);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(715);
      if (lookahead == 'Z') ADVANCE(892);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(701);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(724);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(729);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(745);
      if (lookahead == '\\') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(746);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(707);
      if (lookahead == '1') ADVANCE(702);
      END_STATE();
    case 23:
      if (lookahead == '0') ADVANCE(708);
      if (lookahead == '3') ADVANCE(700);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(711);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(703);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(712);
      END_STATE();
    case 27:
      if (lookahead == '9') ADVANCE(24);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(358);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(478);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(664);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(265);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(281);
      END_STATE();
    case 28:
      if (lookahead == '9') ADVANCE(25);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(359);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(480);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(665);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(266);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(282);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(706);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(704);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(705);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(841);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'H') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'M') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'V') ADVANCE(37);
      END_STATE();
    case 47:
      if (lookahead == 'Z') ADVANCE(892);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(701);
      END_STATE();
    case 48:
      if (lookahead == 'Z') ADVANCE(892);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'Z') ADVANCE(892);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(176);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(407);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(611);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(598);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(385);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(298);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(497);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(173);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(138);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(408);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(158);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(410);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(309);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(394);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(115);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(243);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(628);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(193);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(195);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(191);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(643);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(499);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(412);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(500);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(501);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(498);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(619);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(575);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(671);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(671);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(684);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(427);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(813);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(758);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(615);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(591);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(520);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(227);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(489);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(692);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(395);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(502);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(689);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(411);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(550);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(529);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(636);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(605);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(641);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(576);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(695);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(697);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(588);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(630);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(631);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(554);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(556);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(557);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(558);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 136:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(444);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(372);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(799);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(815);
      END_STATE();
    case 137:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(464);
      END_STATE();
    case 138:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(279);
      END_STATE();
    case 139:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(340);
      END_STATE();
    case 140:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(101);
      END_STATE();
    case 141:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(828);
      END_STATE();
    case 142:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(371);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(827);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(381);
      END_STATE();
    case 145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(476);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(351);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(273);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(486);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(590);
      END_STATE();
    case 146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(453);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(239);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(658);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 149:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(603);
      END_STATE();
    case 150:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(528);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(462);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(661);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(481);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(467);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(638);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 164:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(792);
      END_STATE();
    case 165:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(777);
      END_STATE();
    case 166:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(732);
      END_STATE();
    case 167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(808);
      END_STATE();
    case 168:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(802);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(768);
      END_STATE();
    case 170:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(760);
      END_STATE();
    case 171:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(805);
      END_STATE();
    case 172:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(810);
      END_STATE();
    case 173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(335);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(451);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(660);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(258);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 174:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 175:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 176:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(334);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(450);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(659);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(257);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(276);
      END_STATE();
    case 177:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(458);
      END_STATE();
    case 178:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(561);
      END_STATE();
    case 179:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 180:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 181:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 182:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 183:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 184:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 185:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 186:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 187:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 188:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(674);
      END_STATE();
    case 189:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 190:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 191:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(361);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(483);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(667);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(278);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(285);
      END_STATE();
    case 192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(681);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(770);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(738);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(816);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(840);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(835);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(783);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(475);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(166);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(581);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 292:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(296);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(794);
      END_STATE();
    case 293:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(296);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 294:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(775);
      END_STATE();
    case 295:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 296:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(587);
      END_STATE();
    case 297:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(470);
      END_STATE();
    case 298:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(360);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(482);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(666);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(267);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(284);
      END_STATE();
    case 299:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(321);
      END_STATE();
    case 300:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(752);
      END_STATE();
    case 301:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(791);
      END_STATE();
    case 302:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(823);
      END_STATE();
    case 303:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(748);
      END_STATE();
    case 304:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(769);
      END_STATE();
    case 305:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(324);
      END_STATE();
    case 306:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(443);
      END_STATE();
    case 307:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(625);
      END_STATE();
    case 308:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(253);
      END_STATE();
    case 309:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(540);
      END_STATE();
    case 310:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 311:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(465);
      END_STATE();
    case 312:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 313:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(764);
      END_STATE();
    case 314:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(856);
      END_STATE();
    case 315:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(858);
      END_STATE();
    case 316:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(857);
      END_STATE();
    case 317:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(762);
      END_STATE();
    case 318:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(327);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      END_STATE();
    case 319:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(612);
      END_STATE();
    case 320:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(474);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 321:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(387);
      END_STATE();
    case 322:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(577);
      END_STATE();
    case 323:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(564);
      END_STATE();
    case 324:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(606);
      END_STATE();
    case 325:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(251);
      END_STATE();
    case 326:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(356);
      END_STATE();
    case 327:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 328:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 329:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 330:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 331:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      END_STATE();
    case 332:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 333:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(579);
      END_STATE();
    case 334:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(589);
      END_STATE();
    case 335:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 336:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 337:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(601);
      END_STATE();
    case 338:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 339:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 340:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(397);
      END_STATE();
    case 341:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 342:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(618);
      END_STATE();
    case 343:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(457);
      END_STATE();
    case 344:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(460);
      END_STATE();
    case 345:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(645);
      END_STATE();
    case 346:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 347:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 348:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(544);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 349:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 351:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 352:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(583);
      END_STATE();
    case 354:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 355:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(650);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(594);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(595);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(597);
      END_STATE();
    case 362:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(759);
      END_STATE();
    case 363:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(853);
      END_STATE();
    case 364:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(855);
      END_STATE();
    case 365:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(854);
      END_STATE();
    case 366:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(199);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(337);
      END_STATE();
    case 367:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(199);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(337);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      END_STATE();
    case 368:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(577);
      END_STATE();
    case 369:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(341);
      END_STATE();
    case 370:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(564);
      END_STATE();
    case 371:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(354);
      END_STATE();
    case 372:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(736);
      END_STATE();
    case 373:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(878);
      END_STATE();
    case 374:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(737);
      END_STATE();
    case 375:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 376:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 377:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 378:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(580);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(223);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(144);
      END_STATE();
    case 379:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(580);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(144);
      END_STATE();
    case 380:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 381:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(662);
      END_STATE();
    case 382:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 383:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(229);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      END_STATE();
    case 384:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 385:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      END_STATE();
    case 386:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 387:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 388:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 389:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 390:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 391:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 392:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(560);
      END_STATE();
    case 394:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 396:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 397:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 398:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(663);
      END_STATE();
    case 399:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 400:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 401:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 402:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 403:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(797);
      END_STATE();
    case 404:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(774);
      END_STATE();
    case 405:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(801);
      END_STATE();
    case 406:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 407:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(201);
      END_STATE();
    case 408:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(477);
      END_STATE();
    case 409:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 410:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(696);
      END_STATE();
    case 411:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 412:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(479);
      END_STATE();
    case 413:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 414:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 415:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(779);
      END_STATE();
    case 416:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(778);
      END_STATE();
    case 417:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(778);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 418:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(756);
      END_STATE();
    case 419:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(833);
      END_STATE();
    case 420:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(763);
      END_STATE();
    case 421:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 422:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(300);
      END_STATE();
    case 423:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 424:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 425:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 426:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 427:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 428:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 429:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 430:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(616);
      END_STATE();
    case 431:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(567);
      END_STATE();
    case 432:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(620);
      END_STATE();
    case 433:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 434:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(621);
      END_STATE();
    case 435:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(623);
      END_STATE();
    case 436:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 437:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(635);
      END_STATE();
    case 438:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 439:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 440:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(632);
      END_STATE();
    case 441:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 442:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(655);
      END_STATE();
    case 443:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(873);
      END_STATE();
    case 444:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 445:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 446:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 447:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(598);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 448:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 449:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(676);
      END_STATE();
    case 450:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 451:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 452:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 453:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 454:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 455:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(679);
      END_STATE();
    case 456:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 457:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 458:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 459:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 460:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 461:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 462:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 463:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 464:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 465:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 466:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 467:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 468:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 469:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 470:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 471:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 472:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 473:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 474:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(433);
      END_STATE();
    case 475:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 476:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 477:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 478:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 479:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 480:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 481:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 482:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 483:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 484:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(781);
      END_STATE();
    case 485:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      END_STATE();
    case 486:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(494);
      END_STATE();
    case 487:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 488:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(179);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      END_STATE();
    case 489:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(245);
      END_STATE();
    case 490:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(569);
      END_STATE();
    case 491:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 492:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 493:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(492);
      END_STATE();
    case 494:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(463);
      END_STATE();
    case 495:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(291);
      END_STATE();
    case 496:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(647);
      END_STATE();
    case 497:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(659);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(276);
      END_STATE();
    case 498:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(667);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(285);
      END_STATE();
    case 499:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(668);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(286);
      END_STATE();
    case 500:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(669);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(287);
      END_STATE();
    case 501:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(670);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(288);
      END_STATE();
    case 502:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(784);
      END_STATE();
    case 503:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 504:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 505:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(825);
      END_STATE();
    case 506:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(740);
      END_STATE();
    case 507:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(865);
      END_STATE();
    case 508:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(866);
      END_STATE();
    case 509:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(864);
      END_STATE();
    case 510:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(862);
      END_STATE();
    case 511:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 512:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(861);
      END_STATE();
    case 513:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(871);
      END_STATE();
    case 514:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(872);
      END_STATE();
    case 515:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(870);
      END_STATE();
    case 516:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(868);
      END_STATE();
    case 517:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(869);
      END_STATE();
    case 518:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(867);
      END_STATE();
    case 519:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(793);
      END_STATE();
    case 520:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 521:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 522:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(688);
      END_STATE();
    case 523:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 524:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(690);
      END_STATE();
    case 525:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 526:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 527:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
      END_STATE();
    case 528:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 529:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(577);
      END_STATE();
    case 530:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 531:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 532:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(564);
      END_STATE();
    case 533:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 534:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(533);
      END_STATE();
    case 535:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 536:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(626);
      END_STATE();
    case 537:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 538:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 539:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 540:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 541:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 542:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 543:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 544:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(581);
      END_STATE();
    case 545:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 546:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 547:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 548:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 549:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 550:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(642);
      END_STATE();
    case 551:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 552:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(644);
      END_STATE();
    case 553:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(646);
      END_STATE();
    case 554:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(648);
      END_STATE();
    case 555:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(649);
      END_STATE();
    case 556:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(651);
      END_STATE();
    case 557:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(652);
      END_STATE();
    case 558:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(653);
      END_STATE();
    case 559:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(838);
      END_STATE();
    case 560:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(829);
      END_STATE();
    case 561:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(734);
      END_STATE();
    case 562:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(849);
      END_STATE();
    case 563:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(848);
      END_STATE();
    case 564:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(873);
      END_STATE();
    case 565:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(859);
      END_STATE();
    case 566:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(860);
      END_STATE();
    case 567:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(811);
      END_STATE();
    case 568:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(812);
      END_STATE();
    case 569:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(771);
      END_STATE();
    case 570:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 571:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      END_STATE();
    case 572:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 573:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      END_STATE();
    case 574:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 575:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(633);
      END_STATE();
    case 576:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(599);
      END_STATE();
    case 577:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 578:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      END_STATE();
    case 579:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      END_STATE();
    case 580:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 581:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      END_STATE();
    case 582:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 583:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(330);
      END_STATE();
    case 584:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 585:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      END_STATE();
    case 586:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 587:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(250);
      END_STATE();
    case 588:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(608);
      END_STATE();
    case 589:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      END_STATE();
    case 590:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(629);
      END_STATE();
    case 591:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(634);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(333);
      END_STATE();
    case 592:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(639);
      END_STATE();
    case 593:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(637);
      END_STATE();
    case 594:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      END_STATE();
    case 595:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      END_STATE();
    case 596:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(162);
      END_STATE();
    case 597:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      END_STATE();
    case 598:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(795);
      END_STATE();
    case 599:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(832);
      END_STATE();
    case 600:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(830);
      END_STATE();
    case 601:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(819);
      END_STATE();
    case 602:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(821);
      END_STATE();
    case 603:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(766);
      END_STATE();
    case 604:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(761);
      END_STATE();
    case 605:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(824);
      END_STATE();
    case 606:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(757);
      END_STATE();
    case 607:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(809);
      END_STATE();
    case 608:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(831);
      END_STATE();
    case 609:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 610:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 611:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(682);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(609);
      END_STATE();
    case 612:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 613:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(673);
      END_STATE();
    case 614:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 615:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 616:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      END_STATE();
    case 617:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 618:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(694);
      END_STATE();
    case 619:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(224);
      END_STATE();
    case 620:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 621:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 622:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 623:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 624:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(699);
      END_STATE();
    case 625:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 626:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(584);
      END_STATE();
    case 627:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      END_STATE();
    case 628:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      END_STATE();
    case 629:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 630:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 631:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 632:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 633:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(448);
      END_STATE();
    case 634:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 635:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      END_STATE();
    case 636:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      END_STATE();
    case 637:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 638:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(344);
      END_STATE();
    case 639:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      END_STATE();
    case 640:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 641:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      END_STATE();
    case 642:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(248);
      END_STATE();
    case 643:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(261);
      END_STATE();
    case 644:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      END_STATE();
    case 645:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      END_STATE();
    case 646:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 647:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(469);
      END_STATE();
    case 648:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      END_STATE();
    case 649:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 650:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(471);
      END_STATE();
    case 651:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 652:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 653:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 654:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 655:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(484);
      END_STATE();
    case 656:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 657:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(490);
      END_STATE();
    case 658:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(525);
      END_STATE();
    case 659:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 660:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 661:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(541);
      END_STATE();
    case 662:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 663:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 664:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 665:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 666:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 667:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 668:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 669:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 670:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 671:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(352);
      END_STATE();
    case 672:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(205);
      END_STATE();
    case 673:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(347);
      END_STATE();
    case 674:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(353);
      END_STATE();
    case 675:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(790);
      END_STATE();
    case 676:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(817);
      END_STATE();
    case 677:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(754);
      END_STATE();
    case 678:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(852);
      END_STATE();
    case 679:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(818);
      END_STATE();
    case 680:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 681:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(559);
      END_STATE();
    case 682:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(461);
      END_STATE();
    case 683:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(593);
      END_STATE();
    case 684:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(187);
      END_STATE();
    case 685:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(607);
      END_STATE();
    case 686:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 687:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(851);
      END_STATE();
    case 688:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(814);
      END_STATE();
    case 689:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(850);
      END_STATE();
    case 690:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(772);
      END_STATE();
    case 691:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(773);
      END_STATE();
    case 692:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(577);
      END_STATE();
    case 693:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(614);
      END_STATE();
    case 694:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 695:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(564);
      END_STATE();
    case 696:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 697:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(565);
      END_STATE();
    case 698:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(566);
      END_STATE();
    case 699:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(151);
      END_STATE();
    case 700:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(891);
      END_STATE();
    case 701:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(719);
      END_STATE();
    case 702:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(16);
      END_STATE();
    case 703:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(29);
      END_STATE();
    case 704:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(713);
      END_STATE();
    case 705:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(714);
      END_STATE();
    case 706:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(718);
      END_STATE();
    case 707:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 708:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(891);
      END_STATE();
    case 709:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(889);
      END_STATE();
    case 710:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(890);
      END_STATE();
    case 711:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(891);
      END_STATE();
    case 712:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 713:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 714:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(892);
      END_STATE();
    case 715:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 716:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 717:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(894);
      END_STATE();
    case 718:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 719:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 720:
      if (sym_string_literal_character_set_1(lookahead)) ADVANCE(3);
      END_STATE();
    case 721:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      END_STATE();
    case 722:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '/') ADVANCE(729);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(746);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_find_clause_token1);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_in_clause_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(398);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_in_clause_token2);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_in_clause_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_in_type_token1);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_in_type_token2);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_in_type_token3);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_in_type_token4);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_in_type_token5);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_term_separator_start);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_term_separator_end);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '/') ADVANCE(745);
      if (lookahead == '\\') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(746);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '/') ADVANCE(730);
      if (lookahead == '\\') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(746);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '/') ADVANCE(744);
      if (lookahead == '\\') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(746);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '\\') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(746);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '\\') ADVANCE(747);
      if (lookahead != 0) ADVANCE(746);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_returning_clause_token1);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_using_clause_token2);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_with_division_expression_token1);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_with_highlight_token1);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_with_metadata_expression_token1);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_with_network_expression_token1);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_with_pricebook_expression_token1);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_with_snippet_expression_token1);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_with_snippet_expression_token2);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_with_spell_correction_expression_token1);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_sosl_with_clause_token1);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_sosl_with_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_soql_using_clause_token1);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token1);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token2);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token3);
      if (lookahead == '_') ADVANCE(114);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token4);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token5);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token6);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token7);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token2);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_when_expression_token1);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_when_expression_token2);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_else_expression_token1);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token2);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_for_type_token2);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(637);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_having_clause_token1);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_having_and_expression_token1);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_having_or_expression_token1);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_having_or_expression_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_having_not_expression_token1);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_having_not_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_fields_type_token1);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_fields_type_token2);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token1);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token2);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token3);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_with_user_id_type_token1);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_expression_token1);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token1);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token2);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token3);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_with_data_cat_expression_token1);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_with_data_cat_expression_token2);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token1);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token2);
      if (lookahead == '_') ADVANCE(466);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token3);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token4);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_update_type_token1);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_update_type_token2);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token1);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token2);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token3);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token3);
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_all_rows_clause_token1);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(844);
      if (lookahead == '>') ADVANCE(842);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(846);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_value_comparison_operator_token1);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token1);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token2);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_date_literal_token1);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_date_literal_token2);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_date_literal_token3);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_date_literal_token4);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_date_literal_token5);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_date_literal_token6);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_date_literal_token7);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_date_literal_token8);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_date_literal_token9);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_date_literal_token10);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_date_literal_token11);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_date_literal_token12);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_date_literal_token13);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_date_literal_token14);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_date_literal_token15);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_date_literal_token16);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_date_literal_token17);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_date_literal_token18);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_date_literal_token19);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_date_literal_token20);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_date_literal_token21);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_date_literal_token22);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_date_literal_token23);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_date_literal_with_param_token1);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_bound_apex_expression);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(829);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(887);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(880);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(881);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(881);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(888);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(722);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(882);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(887);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(887);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(889);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(890);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_date_time);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_currency_literal);
      if (lookahead == '.') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_currency_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(894);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(914);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(908);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(901);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(962);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
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
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
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
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 5},
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
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 12},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 12},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 12},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 7},
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
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 11},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 11},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 7},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 7},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 6},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 6},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 7},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 7},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 7},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 7},
  [277] = {.lex_state = 6},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 6},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 11},
  [286] = {.lex_state = 11},
  [287] = {.lex_state = 11},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 11},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 11},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 11},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 11},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 11},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 11},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 11},
  [312] = {.lex_state = 11},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 11},
  [315] = {.lex_state = 6},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 11},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 11},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 11},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 11},
  [336] = {.lex_state = 11},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 11},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 11},
  [342] = {.lex_state = 11},
  [343] = {.lex_state = 11},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 11},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 1},
  [348] = {.lex_state = 11},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 11},
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
  [362] = {.lex_state = 11},
  [363] = {.lex_state = 6},
  [364] = {.lex_state = 11},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 6},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 11},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 11},
  [376] = {.lex_state = 6},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 6},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 6},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 6},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 6},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 6},
  [387] = {.lex_state = 6},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 1},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 6},
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
  [405] = {.lex_state = 1},
  [406] = {.lex_state = 725},
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
  [423] = {.lex_state = 1},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 6},
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
  [439] = {.lex_state = 6},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 20},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 6},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 6},
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
  [477] = {.lex_state = 6},
  [478] = {.lex_state = 6},
  [479] = {.lex_state = 6},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 6},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 725},
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
  [500] = {.lex_state = 6},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_formatting_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(3),
    [aux_sym_find_clause_token1] = ACTIONS(1),
    [aux_sym_in_clause_token1] = ACTIONS(1),
    [aux_sym_in_clause_token2] = ACTIONS(1),
    [aux_sym_in_type_token1] = ACTIONS(1),
    [aux_sym_in_type_token2] = ACTIONS(1),
    [aux_sym_in_type_token3] = ACTIONS(1),
    [aux_sym_in_type_token4] = ACTIONS(1),
    [aux_sym_in_type_token5] = ACTIONS(1),
    [sym_term_separator_start] = ACTIONS(1),
    [sym_term_separator_end] = ACTIONS(1),
    [aux_sym_returning_clause_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_using_clause_token1] = ACTIONS(1),
    [aux_sym_using_clause_token2] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_with_division_expression_token1] = ACTIONS(1),
    [aux_sym_with_highlight_token1] = ACTIONS(1),
    [aux_sym_with_metadata_expression_token1] = ACTIONS(1),
    [aux_sym_with_network_expression_token1] = ACTIONS(1),
    [aux_sym_with_pricebook_expression_token1] = ACTIONS(1),
    [aux_sym_with_snippet_expression_token1] = ACTIONS(1),
    [aux_sym_with_snippet_expression_token2] = ACTIONS(1),
    [aux_sym_with_spell_correction_expression_token1] = ACTIONS(1),
    [aux_sym_sosl_with_clause_token1] = ACTIONS(1),
    [aux_sym_select_clause_token1] = ACTIONS(1),
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
    [aux_sym_fields_type_token1] = ACTIONS(1),
    [aux_sym_fields_type_token2] = ACTIONS(1),
    [aux_sym_where_clause_token1] = ACTIONS(1),
    [aux_sym_soql_with_type_token1] = ACTIONS(1),
    [aux_sym_soql_with_type_token2] = ACTIONS(1),
    [aux_sym_soql_with_type_token3] = ACTIONS(1),
    [aux_sym_with_user_id_type_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(486),
    [sym_header_comment] = STATE(282),
    [sym_formatting_comment] = STATE(1),
    [sym__query_expression] = STATE(472),
    [sym_sosl_query_body] = STATE(469),
    [sym_find_clause] = STATE(36),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(3),
    [aux_sym_find_clause_token1] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    ACTIONS(15), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(17), 1,
      sym_bound_apex_expression,
    ACTIONS(19), 1,
      aux_sym_null_literal_token1,
    STATE(2), 1,
      sym_formatting_comment,
    STATE(321), 1,
      sym__soql_literal,
    STATE(374), 1,
      sym_select_clause,
    STATE(462), 1,
      sym_soql_query_body,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(21), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(23), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(64), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(13), 23,
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
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    ACTIONS(15), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(19), 1,
      aux_sym_null_literal_token1,
    ACTIONS(25), 1,
      sym_bound_apex_expression,
    STATE(3), 1,
      sym_formatting_comment,
    STATE(301), 1,
      sym__soql_literal,
    STATE(374), 1,
      sym_select_clause,
    STATE(470), 1,
      sym_soql_query_body,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(21), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(23), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(64), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(13), 23,
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
    ACTIONS(15), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(19), 1,
      aux_sym_null_literal_token1,
    ACTIONS(27), 1,
      sym_bound_apex_expression,
    STATE(4), 1,
      sym_formatting_comment,
    STATE(365), 1,
      sym__soql_literal,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(21), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(23), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(64), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(13), 23,
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
    ACTIONS(15), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(19), 1,
      aux_sym_null_literal_token1,
    ACTIONS(29), 1,
      sym_bound_apex_expression,
    STATE(5), 1,
      sym_formatting_comment,
    STATE(129), 1,
      sym__soql_literal,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(21), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(23), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(64), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(13), 23,
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
    ACTIONS(15), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(19), 1,
      aux_sym_null_literal_token1,
    ACTIONS(31), 1,
      sym_bound_apex_expression,
    STATE(6), 1,
      sym_formatting_comment,
    STATE(289), 1,
      sym__soql_literal,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(21), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(23), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(64), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(13), 23,
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
    ACTIONS(15), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(19), 1,
      aux_sym_null_literal_token1,
    ACTIONS(33), 1,
      sym_bound_apex_expression,
    STATE(7), 1,
      sym_formatting_comment,
    STATE(78), 1,
      sym__soql_literal,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(21), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(23), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(64), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(13), 23,
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
    ACTIONS(39), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(41), 1,
      sym_bound_apex_expression,
    ACTIONS(43), 1,
      aux_sym_null_literal_token1,
    STATE(8), 1,
      sym_formatting_comment,
    STATE(342), 1,
      sym__soql_literal,
    ACTIONS(35), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(47), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(286), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(37), 23,
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
    ACTIONS(15), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(19), 1,
      aux_sym_null_literal_token1,
    ACTIONS(49), 1,
      sym_bound_apex_expression,
    STATE(9), 1,
      sym_formatting_comment,
    STATE(381), 1,
      sym__soql_literal,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(21), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(23), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(64), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(13), 23,
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
    ACTIONS(39), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(43), 1,
      aux_sym_null_literal_token1,
    ACTIONS(51), 1,
      sym_bound_apex_expression,
    STATE(10), 1,
      sym_formatting_comment,
    STATE(296), 1,
      sym__soql_literal,
    ACTIONS(35), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(47), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(286), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(37), 23,
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
    ACTIONS(55), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    ACTIONS(53), 30,
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
  [639] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(12), 1,
      sym_formatting_comment,
    STATE(13), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(57), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [682] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_DOT,
    STATE(13), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(63), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [723] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(14), 1,
      sym_formatting_comment,
    ACTIONS(63), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [761] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(15), 1,
      sym_formatting_comment,
    ACTIONS(70), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(72), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [804] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(16), 1,
      sym_formatting_comment,
    ACTIONS(76), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(78), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [838] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(17), 1,
      sym_formatting_comment,
    ACTIONS(70), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(72), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [872] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(18), 1,
      sym_formatting_comment,
    ACTIONS(80), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(82), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [906] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(19), 1,
      sym_formatting_comment,
    ACTIONS(84), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_having_not_expression_token1,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [940] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(20), 1,
      sym_formatting_comment,
    ACTIONS(88), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(90), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_not_expression_token1,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
  [972] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 1,
      aux_sym_using_clause_token1,
    ACTIONS(96), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(98), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(104), 1,
      aux_sym_where_clause_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(110), 1,
      aux_sym_order_by_clause_token1,
    STATE(21), 1,
      sym_formatting_comment,
    STATE(26), 1,
      sym_soql_using_clause,
    STATE(40), 1,
      sym_where_clause,
    STATE(47), 1,
      sym_soql_with_clause,
    STATE(68), 1,
      sym_group_by_clause,
    STATE(118), 1,
      sym_order_by_clause,
    STATE(196), 1,
      sym_limit_clause,
    STATE(233), 1,
      sym_offset_clause,
    STATE(293), 1,
      sym_for_clause,
    STATE(451), 1,
      sym_update_clause,
  [1036] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(112), 1,
      aux_sym_with_division_expression_token1,
    ACTIONS(114), 1,
      aux_sym_with_highlight_token1,
    ACTIONS(116), 1,
      aux_sym_with_metadata_expression_token1,
    ACTIONS(118), 1,
      aux_sym_with_network_expression_token1,
    ACTIONS(120), 1,
      aux_sym_with_pricebook_expression_token1,
    ACTIONS(122), 1,
      aux_sym_with_snippet_expression_token1,
    ACTIONS(124), 1,
      aux_sym_with_spell_correction_expression_token1,
    ACTIONS(126), 1,
      aux_sym_with_data_cat_expression_token1,
    STATE(22), 1,
      sym_formatting_comment,
    STATE(255), 1,
      sym_sosl_with_type,
    STATE(251), 8,
      sym_with_division_expression,
      sym_with_highlight,
      sym_with_metadata_expression,
      sym_with_network_expression,
      sym_with_pricebook_expression,
      sym_with_snippet_expression,
      sym_with_spell_correction_expression,
      sym_with_data_cat_expression,
  [1080] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_in_clause_token1,
    ACTIONS(132), 1,
      aux_sym_having_not_expression_token1,
    STATE(5), 1,
      sym_value_comparison_operator,
    STATE(23), 1,
      sym_formatting_comment,
    STATE(125), 1,
      sym__having_comparison,
    STATE(379), 1,
      sym_set_comparison_operator,
    ACTIONS(134), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 2,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
    STATE(142), 2,
      sym__having_value_comparison,
      sym__having_set_comparison,
    ACTIONS(130), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [1122] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_in_clause_token1,
    ACTIONS(132), 1,
      aux_sym_having_not_expression_token1,
    STATE(7), 1,
      sym_value_comparison_operator,
    STATE(24), 1,
      sym_formatting_comment,
    STATE(242), 1,
      sym__comparison,
    STATE(316), 1,
      sym_set_comparison_operator,
    ACTIONS(134), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 2,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
    STATE(67), 2,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(130), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [1164] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_in_clause_token1,
    ACTIONS(132), 1,
      aux_sym_having_not_expression_token1,
    STATE(7), 1,
      sym_value_comparison_operator,
    STATE(25), 1,
      sym_formatting_comment,
    STATE(102), 1,
      sym__comparison,
    STATE(316), 1,
      sym_set_comparison_operator,
    ACTIONS(134), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 2,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
    STATE(67), 2,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(130), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [1206] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(98), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(104), 1,
      aux_sym_where_clause_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(110), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_formatting_comment,
    STATE(32), 1,
      sym_where_clause,
    STATE(48), 1,
      sym_soql_with_clause,
    STATE(70), 1,
      sym_group_by_clause,
    STATE(108), 1,
      sym_order_by_clause,
    STATE(182), 1,
      sym_limit_clause,
    STATE(226), 1,
      sym_offset_clause,
    STATE(330), 1,
      sym_for_clause,
    STATE(434), 1,
      sym_update_clause,
  [1264] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_in_clause_token1,
    ACTIONS(132), 1,
      aux_sym_having_not_expression_token1,
    STATE(8), 1,
      sym_value_comparison_operator,
    STATE(27), 1,
      sym_formatting_comment,
    STATE(294), 1,
      sym__comparison,
    STATE(317), 1,
      sym_set_comparison_operator,
    ACTIONS(134), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 2,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
    STATE(364), 2,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(130), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [1306] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(128), 1,
      aux_sym_in_clause_token1,
    ACTIONS(132), 1,
      aux_sym_having_not_expression_token1,
    STATE(10), 1,
      sym_value_comparison_operator,
    STATE(28), 1,
      sym_formatting_comment,
    STATE(348), 1,
      sym__having_comparison,
    STATE(372), 1,
      sym_set_comparison_operator,
    ACTIONS(134), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 2,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
    STATE(350), 2,
      sym__having_value_comparison,
      sym__having_set_comparison,
    ACTIONS(130), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [1348] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(140), 1,
      aux_sym_in_clause_token2,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(146), 1,
      aux_sym_function_expression_token1,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(29), 1,
      sym_formatting_comment,
    STATE(84), 1,
      sym_selected_fields,
    STATE(109), 1,
      sym__value_expression,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(138), 1,
      sym__selectable_expression,
    STATE(452), 1,
      sym__function_name,
    STATE(123), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(141), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1395] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(140), 1,
      aux_sym_in_clause_token2,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(150), 1,
      aux_sym_function_expression_token1,
    ACTIONS(152), 1,
      sym_identifier,
    STATE(30), 1,
      sym_formatting_comment,
    STATE(270), 1,
      sym_dotted_identifier,
    STATE(276), 1,
      sym__value_expression,
    STATE(340), 1,
      sym__selectable_expression,
    STATE(480), 1,
      sym__function_name,
    STATE(484), 1,
      sym_count_expression,
    STATE(272), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(141), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1442] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(140), 1,
      aux_sym_in_clause_token2,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(150), 1,
      aux_sym_function_expression_token1,
    ACTIONS(152), 1,
      sym_identifier,
    STATE(31), 1,
      sym_formatting_comment,
    STATE(160), 1,
      sym__selectable_expression,
    STATE(270), 1,
      sym_dotted_identifier,
    STATE(276), 1,
      sym__value_expression,
    STATE(494), 1,
      sym__function_name,
    STATE(272), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(141), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1486] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(98), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(110), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_formatting_comment,
    STATE(46), 1,
      sym_soql_with_clause,
    STATE(82), 1,
      sym_group_by_clause,
    STATE(111), 1,
      sym_order_by_clause,
    STATE(189), 1,
      sym_limit_clause,
    STATE(241), 1,
      sym_offset_clause,
    STATE(307), 1,
      sym_for_clause,
    STATE(424), 1,
      sym_update_clause,
  [1538] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(140), 1,
      aux_sym_in_clause_token2,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(146), 1,
      aux_sym_function_expression_token1,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(33), 1,
      sym_formatting_comment,
    STATE(109), 1,
      sym__value_expression,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(160), 1,
      sym__selectable_expression,
    STATE(452), 1,
      sym__function_name,
    STATE(123), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(141), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1582] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(17), 1,
      sym_dotted_identifier,
    STATE(27), 1,
      sym__value_expression,
    STATE(34), 1,
      sym_formatting_comment,
    STATE(254), 1,
      sym__condition_expression,
    STATE(314), 1,
      sym_comparison_expression,
    STATE(468), 1,
      sym__boolean_expression,
    STATE(492), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(161), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1628] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(166), 1,
      aux_sym_having_or_expression_token1,
    STATE(35), 1,
      sym_formatting_comment,
    ACTIONS(164), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1654] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      aux_sym_in_clause_token1,
    ACTIONS(172), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(174), 1,
      aux_sym_sosl_with_clause_token1,
    STATE(36), 1,
      sym_formatting_comment,
    STATE(49), 1,
      sym_in_clause,
    STATE(52), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(89), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(209), 1,
      sym_returning_clause,
    STATE(239), 1,
      sym_sosl_with_clause,
    STATE(256), 1,
      sym_limit_clause,
    STATE(327), 1,
      sym_offset_clause,
    STATE(417), 1,
      sym_update_clause,
  [1706] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(176), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym_formatting_comment,
    STATE(42), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(59), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(57), 11,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [1736] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(17), 1,
      sym_dotted_identifier,
    STATE(27), 1,
      sym__value_expression,
    STATE(38), 1,
      sym_formatting_comment,
    STATE(254), 1,
      sym__condition_expression,
    STATE(314), 1,
      sym_comparison_expression,
    STATE(446), 1,
      sym__boolean_expression,
    STATE(492), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(161), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1782] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(176), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(39), 1,
      sym_formatting_comment,
    ACTIONS(178), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(180), 11,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [1812] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(98), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(110), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_formatting_comment,
    STATE(48), 1,
      sym_soql_with_clause,
    STATE(70), 1,
      sym_group_by_clause,
    STATE(108), 1,
      sym_order_by_clause,
    STATE(182), 1,
      sym_limit_clause,
    STATE(226), 1,
      sym_offset_clause,
    STATE(330), 1,
      sym_for_clause,
    STATE(434), 1,
      sym_update_clause,
  [1864] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(158), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_dotted_identifier,
    STATE(25), 1,
      sym__value_expression,
    STATE(41), 1,
      sym_formatting_comment,
    STATE(60), 1,
      sym__condition_expression,
    STATE(98), 1,
      sym_comparison_expression,
    STATE(126), 1,
      sym__boolean_expression,
    STATE(492), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(161), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1910] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(184), 1,
      anon_sym_DOT,
    ACTIONS(65), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(42), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(63), 11,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [1938] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(43), 1,
      sym_formatting_comment,
    STATE(65), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(191), 9,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1971] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(44), 1,
      sym_formatting_comment,
    ACTIONS(65), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
    ACTIONS(63), 11,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [1996] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(45), 1,
      sym_formatting_comment,
    ACTIONS(178), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(180), 11,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [2020] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(110), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_formatting_comment,
    STATE(74), 1,
      sym_group_by_clause,
    STATE(114), 1,
      sym_order_by_clause,
    STATE(172), 1,
      sym_limit_clause,
    STATE(249), 1,
      sym_offset_clause,
    STATE(337), 1,
      sym_for_clause,
    STATE(418), 1,
      sym_update_clause,
  [2066] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(110), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_formatting_comment,
    STATE(70), 1,
      sym_group_by_clause,
    STATE(108), 1,
      sym_order_by_clause,
    STATE(182), 1,
      sym_limit_clause,
    STATE(226), 1,
      sym_offset_clause,
    STATE(330), 1,
      sym_for_clause,
    STATE(434), 1,
      sym_update_clause,
  [2112] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(110), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_formatting_comment,
    STATE(82), 1,
      sym_group_by_clause,
    STATE(111), 1,
      sym_order_by_clause,
    STATE(189), 1,
      sym_limit_clause,
    STATE(241), 1,
      sym_offset_clause,
    STATE(307), 1,
      sym_for_clause,
    STATE(424), 1,
      sym_update_clause,
  [2158] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(172), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(174), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_formatting_comment,
    STATE(51), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(105), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(209), 1,
      sym_returning_clause,
    STATE(239), 1,
      sym_sosl_with_clause,
    STATE(240), 1,
      sym_limit_clause,
    STATE(304), 1,
      sym_offset_clause,
    STATE(426), 1,
      sym_update_clause,
  [2204] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(193), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(50), 1,
      sym_formatting_comment,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(203), 9,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2232] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(172), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(174), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_formatting_comment,
    STATE(100), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(150), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(209), 1,
      sym_returning_clause,
    STATE(234), 1,
      sym_limit_clause,
    STATE(239), 1,
      sym_sosl_with_clause,
    STATE(299), 1,
      sym_offset_clause,
    STATE(443), 1,
      sym_update_clause,
  [2278] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(172), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(174), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_formatting_comment,
    STATE(105), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(150), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(209), 1,
      sym_returning_clause,
    STATE(239), 1,
      sym_sosl_with_clause,
    STATE(240), 1,
      sym_limit_clause,
    STATE(304), 1,
      sym_offset_clause,
    STATE(426), 1,
      sym_update_clause,
  [2324] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      sym_formatting_comment,
    STATE(65), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(189), 10,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2349] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    STATE(54), 2,
      sym_formatting_comment,
      aux_sym_from_clause_repeat1,
    ACTIONS(201), 10,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2372] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      anon_sym_DOT,
    STATE(55), 1,
      sym_formatting_comment,
    STATE(81), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(72), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(70), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [2401] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(216), 1,
      sym_identifier,
    STATE(23), 1,
      sym_function_expression,
    STATE(56), 1,
      sym_formatting_comment,
    STATE(103), 1,
      sym__having_condition_expression,
    STATE(158), 1,
      sym_having_comparison_expression,
    STATE(216), 1,
      sym__having_boolean_expression,
    STATE(492), 1,
      sym__function_name,
    STATE(208), 3,
      sym_having_and_expression,
      sym_having_or_expression,
      sym_having_not_expression,
  [2440] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(220), 1,
      aux_sym_having_or_expression_token1,
    STATE(57), 1,
      sym_formatting_comment,
    ACTIONS(218), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2463] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(224), 1,
      aux_sym_having_or_expression_token1,
    STATE(58), 1,
      sym_formatting_comment,
    ACTIONS(222), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2486] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(228), 1,
      aux_sym_having_or_expression_token1,
    STATE(59), 1,
      sym_formatting_comment,
    ACTIONS(226), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2509] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(232), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(234), 1,
      aux_sym_having_or_expression_token1,
    STATE(60), 1,
      sym_formatting_comment,
    STATE(99), 1,
      aux_sym_and_expression_repeat1,
    STATE(101), 1,
      aux_sym_or_expression_repeat1,
    ACTIONS(230), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2538] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(238), 1,
      aux_sym_having_or_expression_token1,
    STATE(61), 1,
      sym_formatting_comment,
    ACTIONS(236), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2561] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(214), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_function_expression,
    STATE(62), 1,
      sym_formatting_comment,
    STATE(258), 1,
      sym__having_condition_expression,
    STATE(322), 1,
      sym_having_comparison_expression,
    STATE(404), 1,
      sym__having_boolean_expression,
    STATE(492), 1,
      sym__function_name,
    STATE(208), 3,
      sym_having_and_expression,
      sym_having_or_expression,
      sym_having_not_expression,
  [2600] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(214), 1,
      aux_sym_having_not_expression_token1,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_function_expression,
    STATE(63), 1,
      sym_formatting_comment,
    STATE(258), 1,
      sym__having_condition_expression,
    STATE(322), 1,
      sym_having_comparison_expression,
    STATE(473), 1,
      sym__having_boolean_expression,
    STATE(492), 1,
      sym__function_name,
    STATE(208), 3,
      sym_having_and_expression,
      sym_having_or_expression,
      sym_having_not_expression,
  [2639] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(244), 1,
      aux_sym_having_or_expression_token1,
    STATE(64), 1,
      sym_formatting_comment,
    ACTIONS(242), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2662] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_from_clause_repeat1,
    STATE(65), 1,
      sym_formatting_comment,
    ACTIONS(246), 10,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2687] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(250), 1,
      aux_sym_having_and_expression_token1,
    STATE(66), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(248), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2709] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(255), 1,
      aux_sym_having_or_expression_token1,
    STATE(67), 1,
      sym_formatting_comment,
    ACTIONS(253), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2731] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(110), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_formatting_comment,
    STATE(108), 1,
      sym_order_by_clause,
    STATE(182), 1,
      sym_limit_clause,
    STATE(226), 1,
      sym_offset_clause,
    STATE(330), 1,
      sym_for_clause,
    STATE(434), 1,
      sym_update_clause,
  [2771] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(259), 1,
      aux_sym_having_or_expression_token1,
    STATE(69), 1,
      sym_formatting_comment,
    ACTIONS(257), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2793] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(110), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym_formatting_comment,
    STATE(111), 1,
      sym_order_by_clause,
    STATE(189), 1,
      sym_limit_clause,
    STATE(241), 1,
      sym_offset_clause,
    STATE(307), 1,
      sym_for_clause,
    STATE(424), 1,
      sym_update_clause,
  [2833] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(71), 1,
      sym_formatting_comment,
    ACTIONS(261), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2853] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(72), 1,
      sym_formatting_comment,
    ACTIONS(263), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2873] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(267), 1,
      aux_sym_having_or_expression_token1,
    STATE(73), 1,
      sym_formatting_comment,
    ACTIONS(265), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2895] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(110), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_formatting_comment,
    STATE(116), 1,
      sym_order_by_clause,
    STATE(192), 1,
      sym_limit_clause,
    STATE(236), 1,
      sym_offset_clause,
    STATE(361), 1,
      sym_for_clause,
    STATE(407), 1,
      sym_update_clause,
  [2935] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(275), 1,
      aux_sym_order_null_direction_token1,
    STATE(75), 1,
      sym_formatting_comment,
    STATE(146), 1,
      sym_order_direction,
    STATE(206), 1,
      sym_order_null_direction,
    ACTIONS(273), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(271), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [2963] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(279), 1,
      aux_sym_having_or_expression_token1,
    STATE(76), 1,
      sym_formatting_comment,
    ACTIONS(277), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2985] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(283), 1,
      aux_sym_having_and_expression_token1,
    STATE(77), 1,
      sym_formatting_comment,
    STATE(80), 1,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(281), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3009] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(287), 1,
      aux_sym_having_or_expression_token1,
    STATE(78), 1,
      sym_formatting_comment,
    ACTIONS(285), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3031] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(289), 1,
      anon_sym_DOT,
    ACTIONS(65), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(79), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(63), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [3055] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(283), 1,
      aux_sym_having_and_expression_token1,
    STATE(66), 1,
      aux_sym_with_data_cat_expression_repeat1,
    STATE(80), 1,
      sym_formatting_comment,
    ACTIONS(292), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3079] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(210), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(81), 1,
      sym_formatting_comment,
    ACTIONS(59), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(57), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [3105] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(110), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_formatting_comment,
    STATE(114), 1,
      sym_order_by_clause,
    STATE(172), 1,
      sym_limit_clause,
    STATE(249), 1,
      sym_offset_clause,
    STATE(337), 1,
      sym_for_clause,
    STATE(418), 1,
      sym_update_clause,
  [3145] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(83), 1,
      sym_formatting_comment,
    ACTIONS(201), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3165] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(104), 1,
      aux_sym_where_clause_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(110), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    ACTIONS(296), 1,
      aux_sym_using_clause_token1,
    STATE(84), 1,
      sym_formatting_comment,
    STATE(124), 1,
      sym_using_clause,
    STATE(178), 1,
      sym_where_clause,
    STATE(230), 1,
      sym_order_by_clause,
    STATE(292), 1,
      sym_limit_clause,
    STATE(501), 1,
      sym_offset_clause,
  [3205] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(85), 1,
      sym_formatting_comment,
    ACTIONS(248), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3224] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(86), 1,
      sym_formatting_comment,
    ACTIONS(298), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3243] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(17), 1,
      sym_dotted_identifier,
    STATE(27), 1,
      sym__value_expression,
    STATE(87), 1,
      sym_formatting_comment,
    STATE(314), 1,
      sym_comparison_expression,
    STATE(375), 1,
      sym__condition_expression,
    STATE(492), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
  [3278] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(302), 1,
      aux_sym_having_or_expression_token1,
    STATE(88), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
    ACTIONS(300), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3299] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(174), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      sym_formatting_comment,
    STATE(195), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(239), 1,
      sym_sosl_with_clause,
    STATE(240), 1,
      sym_limit_clause,
    STATE(304), 1,
      sym_offset_clause,
    STATE(426), 1,
      sym_update_clause,
  [3336] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(90), 1,
      sym_formatting_comment,
    ACTIONS(305), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3355] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(91), 1,
      sym_formatting_comment,
    ACTIONS(65), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
    ACTIONS(63), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [3376] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(126), 1,
      aux_sym_with_data_cat_expression_token1,
    ACTIONS(309), 1,
      aux_sym_with_user_id_type_token1,
    ACTIONS(311), 1,
      aux_sym_with_record_visibility_expression_token1,
    STATE(92), 1,
      sym_formatting_comment,
    STATE(166), 1,
      sym_soql_with_type,
    ACTIONS(307), 3,
      aux_sym_soql_with_type_token1,
      aux_sym_soql_with_type_token2,
      aux_sym_soql_with_type_token3,
    STATE(167), 3,
      sym_with_user_id_type,
      sym_with_record_visibility_expression,
      sym_with_data_cat_expression,
  [3405] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(93), 1,
      sym_formatting_comment,
    ACTIONS(313), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3424] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(317), 1,
      aux_sym_having_and_expression_token1,
    STATE(94), 2,
      sym_formatting_comment,
      aux_sym_and_expression_repeat1,
    ACTIONS(315), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3445] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_dotted_identifier,
    STATE(25), 1,
      sym__value_expression,
    STATE(95), 1,
      sym_formatting_comment,
    STATE(98), 1,
      sym_comparison_expression,
    STATE(128), 1,
      sym__condition_expression,
    STATE(492), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
  [3480] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_dotted_identifier,
    STATE(25), 1,
      sym__value_expression,
    STATE(96), 1,
      sym_formatting_comment,
    STATE(98), 1,
      sym_comparison_expression,
    STATE(110), 1,
      sym__condition_expression,
    STATE(492), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
  [3515] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_dotted_identifier,
    STATE(25), 1,
      sym__value_expression,
    STATE(97), 1,
      sym_formatting_comment,
    STATE(98), 1,
      sym_comparison_expression,
    STATE(113), 1,
      sym__condition_expression,
    STATE(492), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
  [3550] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(322), 1,
      aux_sym_having_or_expression_token1,
    STATE(98), 1,
      sym_formatting_comment,
    ACTIONS(320), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3571] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(232), 1,
      aux_sym_having_and_expression_token1,
    STATE(94), 1,
      aux_sym_and_expression_repeat1,
    STATE(99), 1,
      sym_formatting_comment,
    ACTIONS(324), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3594] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(174), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(100), 1,
      sym_formatting_comment,
    STATE(195), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(239), 1,
      sym_sosl_with_clause,
    STATE(246), 1,
      sym_limit_clause,
    STATE(344), 1,
      sym_offset_clause,
    STATE(466), 1,
      sym_update_clause,
  [3631] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(234), 1,
      aux_sym_having_or_expression_token1,
    STATE(88), 1,
      aux_sym_or_expression_repeat1,
    STATE(101), 1,
      sym_formatting_comment,
    ACTIONS(328), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3654] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(332), 1,
      aux_sym_having_or_expression_token1,
    STATE(102), 1,
      sym_formatting_comment,
    ACTIONS(330), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3675] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(336), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(338), 1,
      aux_sym_having_or_expression_token1,
    STATE(103), 1,
      sym_formatting_comment,
    STATE(145), 1,
      aux_sym_having_or_expression_repeat1,
    STATE(147), 1,
      aux_sym_having_and_expression_repeat1,
    ACTIONS(334), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3702] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(342), 1,
      aux_sym_having_or_expression_token1,
    STATE(104), 1,
      sym_formatting_comment,
    ACTIONS(340), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3723] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(174), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(105), 1,
      sym_formatting_comment,
    STATE(195), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(234), 1,
      sym_limit_clause,
    STATE(239), 1,
      sym_sosl_with_clause,
    STATE(299), 1,
      sym_offset_clause,
    STATE(443), 1,
      sym_update_clause,
  [3760] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(106), 1,
      sym_formatting_comment,
    ACTIONS(344), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3778] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(107), 1,
      sym_formatting_comment,
    ACTIONS(346), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3796] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_formatting_comment,
    STATE(189), 1,
      sym_limit_clause,
    STATE(241), 1,
      sym_offset_clause,
    STATE(307), 1,
      sym_for_clause,
    STATE(424), 1,
      sym_update_clause,
  [3830] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(352), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(354), 1,
      sym_identifier,
    STATE(109), 1,
      sym_formatting_comment,
    ACTIONS(348), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(350), 5,
      aux_sym_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3854] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(110), 1,
      sym_formatting_comment,
    ACTIONS(315), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3872] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_formatting_comment,
    STATE(172), 1,
      sym_limit_clause,
    STATE(249), 1,
      sym_offset_clause,
    STATE(337), 1,
      sym_for_clause,
    STATE(418), 1,
      sym_update_clause,
  [3906] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(112), 1,
      sym_formatting_comment,
    ACTIONS(82), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(80), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [3926] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(356), 1,
      aux_sym_having_or_expression_token1,
    STATE(113), 1,
      sym_formatting_comment,
    ACTIONS(300), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3946] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_formatting_comment,
    STATE(192), 1,
      sym_limit_clause,
    STATE(236), 1,
      sym_offset_clause,
    STATE(361), 1,
      sym_for_clause,
    STATE(407), 1,
      sym_update_clause,
  [3980] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    STATE(115), 2,
      sym_formatting_comment,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(361), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4000] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_formatting_comment,
    STATE(190), 1,
      sym_limit_clause,
    STATE(231), 1,
      sym_offset_clause,
    STATE(313), 1,
      sym_for_clause,
    STATE(400), 1,
      sym_update_clause,
  [4034] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym__group_by_expression_repeat1,
    STATE(117), 1,
      sym_formatting_comment,
    ACTIONS(367), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4056] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_formatting_comment,
    STATE(182), 1,
      sym_limit_clause,
    STATE(226), 1,
      sym_offset_clause,
    STATE(330), 1,
      sym_for_clause,
    STATE(434), 1,
      sym_update_clause,
  [4090] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(119), 1,
      sym_formatting_comment,
    ACTIONS(78), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(76), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [4110] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym__group_by_expression_repeat1,
    STATE(120), 1,
      sym_formatting_comment,
    ACTIONS(369), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4132] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(121), 1,
      sym_formatting_comment,
    ACTIONS(72), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(70), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [4152] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(122), 1,
      sym_formatting_comment,
    ACTIONS(86), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(84), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [4172] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(123), 1,
      sym_formatting_comment,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(88), 7,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
      sym_identifier,
  [4192] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(104), 1,
      aux_sym_where_clause_token1,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(110), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_formatting_comment,
    STATE(174), 1,
      sym_where_clause,
    STATE(253), 1,
      sym_order_by_clause,
    STATE(339), 1,
      sym_limit_clause,
    STATE(467), 1,
      sym_offset_clause,
  [4226] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(375), 1,
      aux_sym_having_or_expression_token1,
    STATE(125), 1,
      sym_formatting_comment,
    ACTIONS(373), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4245] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(126), 1,
      sym_formatting_comment,
    ACTIONS(377), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4262] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(381), 1,
      aux_sym_having_or_expression_token1,
    STATE(127), 1,
      sym_formatting_comment,
    ACTIONS(379), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4281] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(128), 1,
      sym_formatting_comment,
    ACTIONS(383), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4298] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(387), 1,
      aux_sym_having_or_expression_token1,
    STATE(129), 1,
      sym_formatting_comment,
    ACTIONS(385), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4317] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(391), 1,
      aux_sym_having_or_expression_token1,
    STATE(130), 2,
      sym_formatting_comment,
      aux_sym_having_or_expression_repeat1,
    ACTIONS(389), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4336] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(396), 1,
      aux_sym_having_and_expression_token1,
    STATE(131), 2,
      sym_formatting_comment,
      aux_sym_having_and_expression_repeat1,
    ACTIONS(394), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4355] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(401), 1,
      aux_sym_using_scope_type_token3,
    STATE(106), 1,
      sym_using_scope_type,
    STATE(132), 1,
      sym_formatting_comment,
    ACTIONS(399), 6,
      aux_sym_using_scope_type_token1,
      aux_sym_using_scope_type_token2,
      aux_sym_using_scope_type_token4,
      aux_sym_using_scope_type_token5,
      aux_sym_using_scope_type_token6,
      aux_sym_using_scope_type_token7,
  [4376] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      sym_formatting_comment,
    STATE(159), 1,
      aux_sym_selected_fields_repeat1,
    ACTIONS(405), 6,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4397] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(134), 1,
      sym_formatting_comment,
    ACTIONS(407), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4414] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(135), 1,
      sym_formatting_comment,
    ACTIONS(409), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4431] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(413), 1,
      aux_sym_having_or_expression_token1,
    STATE(136), 1,
      sym_formatting_comment,
    ACTIONS(411), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4450] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(137), 1,
      sym_formatting_comment,
    ACTIONS(415), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4467] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_selected_fields_repeat1,
    STATE(138), 1,
      sym_formatting_comment,
    ACTIONS(417), 6,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4488] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(17), 1,
      sym_dotted_identifier,
    STATE(75), 1,
      sym__value_expression,
    STATE(139), 1,
      sym_formatting_comment,
    STATE(212), 1,
      sym_order_expression,
    STATE(492), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
  [4517] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(421), 1,
      aux_sym_having_or_expression_token1,
    STATE(140), 1,
      sym_formatting_comment,
    ACTIONS(419), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4536] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(141), 1,
      sym_formatting_comment,
    ACTIONS(348), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4553] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(425), 1,
      aux_sym_having_or_expression_token1,
    STATE(142), 1,
      sym_formatting_comment,
    ACTIONS(423), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4572] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    STATE(143), 2,
      sym_formatting_comment,
      aux_sym_returning_clause_repeat1,
    ACTIONS(427), 6,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4591] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym_formatting_comment,
    ACTIONS(432), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4610] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(338), 1,
      aux_sym_having_or_expression_token1,
    STATE(130), 1,
      aux_sym_having_or_expression_repeat1,
    STATE(145), 1,
      sym_formatting_comment,
    ACTIONS(436), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4631] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(275), 1,
      aux_sym_order_null_direction_token1,
    STATE(146), 1,
      sym_formatting_comment,
    STATE(217), 1,
      sym_order_null_direction,
    ACTIONS(438), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4652] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(336), 1,
      aux_sym_having_and_expression_token1,
    STATE(131), 1,
      aux_sym_having_and_expression_repeat1,
    STATE(147), 1,
      sym_formatting_comment,
    ACTIONS(440), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4673] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_returning_clause_repeat1,
    STATE(148), 1,
      sym_formatting_comment,
    ACTIONS(442), 6,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4694] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(146), 1,
      aux_sym_function_expression_token1,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(149), 1,
      sym_formatting_comment,
    STATE(332), 1,
      sym__value_expression,
    STATE(452), 1,
      sym__function_name,
    STATE(123), 2,
      sym_function_expression,
      sym_field_identifier,
  [4723] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(450), 1,
      aux_sym_returning_clause_token1,
    STATE(209), 1,
      sym_returning_clause,
    STATE(150), 2,
      sym_formatting_comment,
      aux_sym_sosl_query_body_repeat1,
    ACTIONS(448), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4744] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(151), 1,
      sym_formatting_comment,
    ACTIONS(453), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4761] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_returning_clause_repeat1,
    STATE(152), 1,
      sym_formatting_comment,
    ACTIONS(455), 6,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4782] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(459), 1,
      aux_sym_having_or_expression_token1,
    STATE(153), 1,
      sym_formatting_comment,
    ACTIONS(457), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4801] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(154), 1,
      sym_formatting_comment,
    ACTIONS(461), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4818] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(465), 1,
      aux_sym_having_clause_token1,
    STATE(155), 1,
      sym_formatting_comment,
    STATE(220), 1,
      sym_having_clause,
    ACTIONS(463), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4839] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(156), 1,
      sym_formatting_comment,
    ACTIONS(467), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4856] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(157), 1,
      sym_formatting_comment,
    ACTIONS(361), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4873] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(471), 1,
      aux_sym_having_or_expression_token1,
    STATE(158), 1,
      sym_formatting_comment,
    ACTIONS(469), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4892] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    STATE(159), 2,
      sym_formatting_comment,
      aux_sym_selected_fields_repeat1,
    ACTIONS(476), 6,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4911] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(160), 1,
      sym_formatting_comment,
    ACTIONS(476), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4928] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(161), 1,
      sym_formatting_comment,
    ACTIONS(230), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4945] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(17), 1,
      sym_dotted_identifier,
    STATE(75), 1,
      sym__value_expression,
    STATE(162), 1,
      sym_formatting_comment,
    STATE(176), 1,
      sym_order_expression,
    STATE(492), 1,
      sym__function_name,
    STATE(20), 2,
      sym_function_expression,
      sym_field_identifier,
  [4974] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(478), 1,
      aux_sym_type_of_clause_token2,
    ACTIONS(480), 1,
      aux_sym_when_expression_token1,
    ACTIONS(482), 1,
      aux_sym_else_expression_token1,
    STATE(12), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(163), 1,
      sym_formatting_comment,
    STATE(218), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(360), 1,
      sym_when_expression,
    STATE(476), 1,
      sym_else_expression,
  [5005] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(164), 1,
      sym_formatting_comment,
    ACTIONS(484), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5021] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(165), 1,
      sym_formatting_comment,
    ACTIONS(486), 7,
      ts_builtin_sym_end,
      aux_sym_in_clause_token1,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5037] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(166), 1,
      sym_formatting_comment,
    ACTIONS(488), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5053] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(167), 1,
      sym_formatting_comment,
    ACTIONS(490), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5069] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      sym_identifier,
    STATE(23), 1,
      sym_function_expression,
    STATE(158), 1,
      sym_having_comparison_expression,
    STATE(168), 1,
      sym_formatting_comment,
    STATE(205), 1,
      sym__having_condition_expression,
    STATE(492), 1,
      sym__function_name,
  [5097] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(169), 1,
      sym_formatting_comment,
    ACTIONS(492), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5113] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(170), 1,
      sym_formatting_comment,
    ACTIONS(494), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5129] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(171), 1,
      sym_formatting_comment,
    ACTIONS(496), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5145] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym_formatting_comment,
    STATE(236), 1,
      sym_offset_clause,
    STATE(361), 1,
      sym_for_clause,
    STATE(407), 1,
      sym_update_clause,
  [5173] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(173), 1,
      sym_formatting_comment,
    ACTIONS(498), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5189] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(110), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_formatting_comment,
    STATE(238), 1,
      sym_order_by_clause,
    STATE(366), 1,
      sym_limit_clause,
    STATE(442), 1,
      sym_offset_clause,
  [5217] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(502), 1,
      aux_sym_having_or_expression_token1,
    STATE(175), 1,
      sym_formatting_comment,
    ACTIONS(389), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5235] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      sym_formatting_comment,
    STATE(194), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(506), 5,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5255] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(177), 1,
      sym_formatting_comment,
    ACTIONS(508), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5271] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(110), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      sym_formatting_comment,
    STATE(253), 1,
      sym_order_by_clause,
    STATE(339), 1,
      sym_limit_clause,
    STATE(467), 1,
      sym_offset_clause,
  [5299] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_function_expression,
    STATE(179), 1,
      sym_formatting_comment,
    STATE(322), 1,
      sym_having_comparison_expression,
    STATE(373), 1,
      sym__having_condition_expression,
    STATE(492), 1,
      sym__function_name,
  [5327] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(146), 1,
      aux_sym_function_expression_token1,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(180), 1,
      sym_formatting_comment,
    STATE(388), 1,
      sym__value_expression,
    STATE(452), 1,
      sym__function_name,
    STATE(123), 2,
      sym_function_expression,
      sym_field_identifier,
  [5353] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(181), 1,
      sym_formatting_comment,
    ACTIONS(510), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5369] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      sym_formatting_comment,
    STATE(241), 1,
      sym_offset_clause,
    STATE(307), 1,
      sym_for_clause,
    STATE(424), 1,
      sym_update_clause,
  [5397] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(146), 1,
      aux_sym_function_expression_token1,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(183), 1,
      sym_formatting_comment,
    STATE(326), 1,
      sym__value_expression,
    STATE(452), 1,
      sym__function_name,
    STATE(123), 2,
      sym_function_expression,
      sym_field_identifier,
  [5423] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(184), 1,
      sym_formatting_comment,
    STATE(250), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(514), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5447] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(185), 2,
      sym_formatting_comment,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(519), 5,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5465] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(186), 1,
      sym_formatting_comment,
    ACTIONS(394), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5481] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(187), 1,
      sym_formatting_comment,
    ACTIONS(521), 7,
      ts_builtin_sym_end,
      aux_sym_in_clause_token1,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5497] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(146), 1,
      aux_sym_function_expression_token1,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(188), 1,
      sym_formatting_comment,
    STATE(332), 1,
      sym__value_expression,
    STATE(452), 1,
      sym__function_name,
    STATE(123), 2,
      sym_function_expression,
      sym_field_identifier,
  [5523] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_formatting_comment,
    STATE(249), 1,
      sym_offset_clause,
    STATE(337), 1,
      sym_for_clause,
    STATE(418), 1,
      sym_update_clause,
  [5551] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      sym_formatting_comment,
    STATE(228), 1,
      sym_offset_clause,
    STATE(291), 1,
      sym_for_clause,
    STATE(401), 1,
      sym_update_clause,
  [5579] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      anon_sym_DOT,
    STATE(191), 1,
      sym_formatting_comment,
    STATE(214), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(70), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [5603] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      sym_formatting_comment,
    STATE(231), 1,
      sym_offset_clause,
    STATE(313), 1,
      sym_for_clause,
    STATE(400), 1,
      sym_update_clause,
  [5631] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(193), 1,
      sym_formatting_comment,
    ACTIONS(527), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5647] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_order_by_clause_repeat1,
    STATE(194), 1,
      sym_formatting_comment,
    ACTIONS(529), 5,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5667] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(533), 1,
      aux_sym_sosl_with_clause_token1,
    STATE(239), 1,
      sym_sosl_with_clause,
    STATE(195), 2,
      sym_formatting_comment,
      aux_sym_sosl_query_body_repeat2,
    ACTIONS(531), 4,
      ts_builtin_sym_end,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5687] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      sym_formatting_comment,
    STATE(226), 1,
      sym_offset_clause,
    STATE(330), 1,
      sym_for_clause,
    STATE(434), 1,
      sym_update_clause,
  [5715] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(197), 1,
      sym_formatting_comment,
    ACTIONS(536), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5731] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      sym_identifier,
    STATE(23), 1,
      sym_function_expression,
    STATE(158), 1,
      sym_having_comparison_expression,
    STATE(186), 1,
      sym__having_condition_expression,
    STATE(198), 1,
      sym_formatting_comment,
    STATE(492), 1,
      sym__function_name,
  [5759] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(199), 1,
      sym_formatting_comment,
    ACTIONS(538), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_null_direction_token1,
  [5775] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(17), 1,
      sym_dotted_identifier,
    STATE(155), 1,
      sym__group_by_expression,
    STATE(200), 1,
      sym_formatting_comment,
    STATE(492), 1,
      sym__function_name,
    STATE(120), 2,
      sym_function_expression,
      sym_field_identifier,
  [5801] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(201), 1,
      sym_formatting_comment,
    ACTIONS(427), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5817] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      sym_identifier,
    STATE(23), 1,
      sym_function_expression,
    STATE(158), 1,
      sym_having_comparison_expression,
    STATE(175), 1,
      sym__having_condition_expression,
    STATE(202), 1,
      sym_formatting_comment,
    STATE(492), 1,
      sym__function_name,
  [5845] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(146), 1,
      aux_sym_function_expression_token1,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(203), 1,
      sym_formatting_comment,
    STATE(357), 1,
      sym__value_expression,
    STATE(452), 1,
      sym__function_name,
    STATE(123), 2,
      sym_function_expression,
      sym_field_identifier,
  [5871] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(540), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(542), 1,
      sym_bound_apex_expression,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(204), 1,
      sym_formatting_comment,
    STATE(432), 1,
      sym_field_identifier,
    STATE(493), 1,
      sym_geo_location_type,
  [5896] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(205), 1,
      sym_formatting_comment,
    ACTIONS(546), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5911] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(206), 1,
      sym_formatting_comment,
    ACTIONS(438), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5926] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(207), 1,
      sym_formatting_comment,
    ACTIONS(548), 6,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5941] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(208), 1,
      sym_formatting_comment,
    ACTIONS(334), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5956] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(209), 1,
      sym_formatting_comment,
    ACTIONS(550), 6,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5971] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(210), 1,
      sym_formatting_comment,
    STATE(395), 1,
      sym_in_type,
    ACTIONS(552), 5,
      aux_sym_in_type_token1,
      aux_sym_in_type_token2,
      aux_sym_in_type_token3,
      aux_sym_in_type_token4,
      aux_sym_in_type_token5,
  [5988] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(211), 1,
      sym_formatting_comment,
    ACTIONS(554), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6007] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(212), 1,
      sym_formatting_comment,
    ACTIONS(519), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6022] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(213), 1,
      sym_formatting_comment,
    ACTIONS(556), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6037] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_DOT,
    STATE(214), 1,
      sym_formatting_comment,
    STATE(215), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(57), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [6058] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_DOT,
    STATE(215), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(63), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [6077] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(216), 1,
      sym_formatting_comment,
    ACTIONS(561), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6092] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(217), 1,
      sym_formatting_comment,
    ACTIONS(563), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6107] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(480), 1,
      aux_sym_when_expression_token1,
    ACTIONS(482), 1,
      aux_sym_else_expression_token1,
    ACTIONS(565), 1,
      aux_sym_type_of_clause_token2,
    STATE(218), 1,
      sym_formatting_comment,
    STATE(227), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(360), 1,
      sym_when_expression,
    STATE(448), 1,
      sym_else_expression,
  [6132] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(540), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(542), 1,
      sym_bound_apex_expression,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(219), 1,
      sym_formatting_comment,
    STATE(431), 1,
      sym_geo_location_type,
    STATE(432), 1,
      sym_field_identifier,
  [6157] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(220), 1,
      sym_formatting_comment,
    ACTIONS(567), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6172] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(540), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(542), 1,
      sym_bound_apex_expression,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(221), 1,
      sym_formatting_comment,
    STATE(432), 1,
      sym_field_identifier,
    STATE(495), 1,
      sym_geo_location_type,
  [6197] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_function_expression_token1,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(17), 1,
      sym_dotted_identifier,
    STATE(222), 1,
      sym_formatting_comment,
    STATE(492), 1,
      sym__function_name,
    STATE(157), 2,
      sym_function_expression,
      sym_field_identifier,
  [6220] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(571), 1,
      anon_sym_LPAREN,
    STATE(223), 1,
      sym_formatting_comment,
    ACTIONS(569), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6237] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(224), 1,
      sym_formatting_comment,
    ACTIONS(573), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6252] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(478), 1,
      aux_sym_type_of_clause_token2,
    ACTIONS(480), 1,
      aux_sym_when_expression_token1,
    ACTIONS(482), 1,
      aux_sym_else_expression_token1,
    STATE(218), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(225), 1,
      sym_formatting_comment,
    STATE(360), 1,
      sym_when_expression,
    STATE(476), 1,
      sym_else_expression,
  [6277] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      sym_formatting_comment,
    STATE(307), 1,
      sym_for_clause,
    STATE(424), 1,
      sym_update_clause,
  [6299] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(577), 1,
      aux_sym_when_expression_token1,
    STATE(360), 1,
      sym_when_expression,
    ACTIONS(575), 2,
      aux_sym_type_of_clause_token2,
      aux_sym_else_expression_token1,
    STATE(227), 2,
      sym_formatting_comment,
      aux_sym_type_of_clause_repeat1,
  [6317] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym_formatting_comment,
    STATE(288), 1,
      sym_for_clause,
    STATE(399), 1,
      sym_update_clause,
  [6339] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(229), 1,
      sym_formatting_comment,
    ACTIONS(582), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6353] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(230), 1,
      sym_formatting_comment,
    STATE(339), 1,
      sym_limit_clause,
    STATE(467), 1,
      sym_offset_clause,
  [6375] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      sym_formatting_comment,
    STATE(291), 1,
      sym_for_clause,
    STATE(401), 1,
      sym_update_clause,
  [6397] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(232), 1,
      sym_formatting_comment,
    ACTIONS(65), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(63), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [6413] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      sym_formatting_comment,
    STATE(330), 1,
      sym_for_clause,
    STATE(434), 1,
      sym_update_clause,
  [6435] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(234), 1,
      sym_formatting_comment,
    STATE(344), 1,
      sym_offset_clause,
    STATE(466), 1,
      sym_update_clause,
  [6457] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(235), 1,
      sym_formatting_comment,
    ACTIONS(584), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6471] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      sym_formatting_comment,
    STATE(313), 1,
      sym_for_clause,
    STATE(400), 1,
      sym_update_clause,
  [6493] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(237), 1,
      sym_formatting_comment,
    ACTIONS(586), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6507] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      sym_formatting_comment,
    STATE(295), 1,
      sym_limit_clause,
    STATE(428), 1,
      sym_offset_clause,
  [6529] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(239), 1,
      sym_formatting_comment,
    ACTIONS(590), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6543] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(240), 1,
      sym_formatting_comment,
    STATE(299), 1,
      sym_offset_clause,
    STATE(443), 1,
      sym_update_clause,
  [6565] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      sym_formatting_comment,
    STATE(337), 1,
      sym_for_clause,
    STATE(418), 1,
      sym_update_clause,
  [6587] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(242), 1,
      sym_formatting_comment,
    ACTIONS(592), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6601] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(243), 1,
      sym_formatting_comment,
    ACTIONS(594), 5,
      anon_sym_RPAREN,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6615] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(244), 1,
      sym_formatting_comment,
    ACTIONS(596), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6629] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(245), 1,
      sym_formatting_comment,
    ACTIONS(598), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_offset_clause_token1,
  [6643] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(600), 1,
      ts_builtin_sym_end,
    STATE(246), 1,
      sym_formatting_comment,
    STATE(323), 1,
      sym_offset_clause,
    STATE(490), 1,
      sym_update_clause,
  [6665] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(247), 1,
      sym_formatting_comment,
    ACTIONS(602), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6679] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(248), 1,
      sym_formatting_comment,
    ACTIONS(604), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6693] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_for_clause_token1,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      sym_formatting_comment,
    STATE(361), 1,
      sym_for_clause,
    STATE(407), 1,
      sym_update_clause,
  [6715] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      sym_formatting_comment,
    STATE(252), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(606), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6733] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(251), 1,
      sym_formatting_comment,
    ACTIONS(608), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6747] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    STATE(252), 2,
      sym_formatting_comment,
      aux_sym_field_list_repeat1,
    ACTIONS(554), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6763] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(106), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      sym_formatting_comment,
    STATE(366), 1,
      sym_limit_clause,
    STATE(442), 1,
      sym_offset_clause,
  [6785] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    ACTIONS(232), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(613), 1,
      aux_sym_having_or_expression_token1,
    STATE(99), 1,
      aux_sym_and_expression_repeat1,
    STATE(254), 1,
      sym_formatting_comment,
    STATE(298), 1,
      aux_sym_or_expression_repeat1,
  [6807] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(255), 1,
      sym_formatting_comment,
    ACTIONS(615), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6821] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    STATE(256), 1,
      sym_formatting_comment,
    STATE(304), 1,
      sym_offset_clause,
    STATE(426), 1,
      sym_update_clause,
  [6843] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(619), 1,
      aux_sym_with_data_cat_filter_type_token2,
    STATE(257), 1,
      sym_formatting_comment,
    STATE(378), 1,
      sym_with_data_cat_filter_type,
    ACTIONS(617), 3,
      aux_sym_with_data_cat_filter_type_token1,
      aux_sym_with_data_cat_filter_type_token3,
      aux_sym_with_data_cat_filter_type_token4,
  [6861] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    ACTIONS(336), 1,
      aux_sym_having_and_expression_token1,
    ACTIONS(621), 1,
      aux_sym_having_or_expression_token1,
    STATE(147), 1,
      aux_sym_having_and_expression_repeat1,
    STATE(258), 1,
      sym_formatting_comment,
    STATE(335), 1,
      aux_sym_having_or_expression_repeat1,
  [6883] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_field_list_repeat1,
    STATE(259), 1,
      sym_formatting_comment,
    ACTIONS(514), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6901] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(623), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(260), 2,
      sym_formatting_comment,
      aux_sym_update_clause_repeat1,
  [6916] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      sym_formatting_comment,
    ACTIONS(84), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [6931] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    STATE(262), 1,
      sym_formatting_comment,
    STATE(280), 1,
      aux_sym_for_clause_repeat1,
    ACTIONS(630), 2,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [6948] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      sym_formatting_comment,
    ACTIONS(76), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [6963] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(264), 1,
      sym_formatting_comment,
    ACTIONS(554), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6976] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(635), 2,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
    STATE(265), 2,
      sym_formatting_comment,
      aux_sym_for_clause_repeat1,
  [6991] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(637), 1,
      sym_bound_apex_expression,
    ACTIONS(639), 1,
      sym_identifier,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(266), 1,
      sym_formatting_comment,
    STATE(499), 1,
      sym_field_identifier,
  [7010] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(641), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(267), 1,
      sym_formatting_comment,
    STATE(370), 1,
      sym_with_record_visibility_param,
    ACTIONS(643), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [7027] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(645), 1,
      sym_identifier,
    STATE(45), 1,
      sym_dotted_identifier,
    STATE(50), 1,
      sym_storage_identifier,
    STATE(83), 1,
      sym_storage_alias,
    STATE(268), 1,
      sym_formatting_comment,
  [7046] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(269), 1,
      sym_formatting_comment,
    STATE(485), 1,
      sym_fields_type,
    ACTIONS(647), 3,
      aux_sym_in_type_token1,
      aux_sym_fields_type_token1,
      aux_sym_fields_type_token2,
  [7061] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      sym_formatting_comment,
    ACTIONS(70), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7076] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_update_clause_repeat1,
    STATE(271), 1,
      sym_formatting_comment,
    ACTIONS(649), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7093] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      sym_formatting_comment,
    ACTIONS(88), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7108] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(641), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(273), 1,
      sym_formatting_comment,
    STATE(329), 1,
      sym_with_record_visibility_param,
    ACTIONS(643), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [7125] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      sym_formatting_comment,
    ACTIONS(80), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7140] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_update_clause_repeat1,
    STATE(275), 1,
      sym_formatting_comment,
    ACTIONS(653), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [7157] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      aux_sym_from_clause_token1,
    ACTIONS(352), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(354), 1,
      sym_identifier,
    STATE(276), 1,
      sym_formatting_comment,
  [7176] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(639), 1,
      sym_identifier,
    ACTIONS(655), 1,
      sym_bound_apex_expression,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(277), 1,
      sym_formatting_comment,
    STATE(475), 1,
      sym_field_identifier,
  [7195] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(645), 1,
      sym_identifier,
    STATE(43), 1,
      sym_storage_identifier,
    STATE(45), 1,
      sym_dotted_identifier,
    STATE(53), 1,
      sym_storage_alias,
    STATE(278), 1,
      sym_formatting_comment,
  [7214] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(279), 1,
      sym_formatting_comment,
    STATE(334), 1,
      sym_for_type,
    ACTIONS(657), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [7229] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    STATE(265), 1,
      aux_sym_for_clause_repeat1,
    STATE(280), 1,
      sym_formatting_comment,
    ACTIONS(659), 2,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [7246] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(262), 1,
      sym_for_type,
    STATE(281), 1,
      sym_formatting_comment,
    ACTIONS(657), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [7261] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_find_clause_token1,
    STATE(36), 1,
      sym_find_clause,
    STATE(282), 1,
      sym_formatting_comment,
    STATE(457), 1,
      sym__query_expression,
    STATE(469), 1,
      sym_sosl_query_body,
  [7280] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(639), 1,
      sym_identifier,
    ACTIONS(661), 1,
      sym_bound_apex_expression,
    STATE(121), 1,
      sym_dotted_identifier,
    STATE(283), 1,
      sym_formatting_comment,
    STATE(498), 1,
      sym_field_identifier,
  [7299] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(284), 1,
      sym_formatting_comment,
    ACTIONS(663), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
  [7312] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(285), 1,
      sym_formatting_comment,
    ACTIONS(340), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7324] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(286), 1,
      sym_formatting_comment,
    ACTIONS(242), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7336] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(287), 1,
      sym_formatting_comment,
    ACTIONS(265), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7348] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      sym_formatting_comment,
    STATE(403), 1,
      sym_update_clause,
  [7364] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      sym_formatting_comment,
    STATE(367), 1,
      aux_sym__having_set_comparison_repeat1,
  [7380] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(290), 1,
      sym_formatting_comment,
    ACTIONS(379), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7392] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      sym_formatting_comment,
    STATE(399), 1,
      sym_update_clause,
  [7408] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      sym_formatting_comment,
    STATE(467), 1,
      sym_offset_clause,
  [7424] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
      sym_formatting_comment,
    STATE(434), 1,
      sym_update_clause,
  [7440] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(294), 1,
      sym_formatting_comment,
    ACTIONS(330), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7452] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      sym_formatting_comment,
    STATE(421), 1,
      sym_offset_clause,
  [7468] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(296), 1,
      sym_formatting_comment,
    ACTIONS(385), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7480] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    STATE(297), 2,
      sym_formatting_comment,
      aux_sym_function_expression_repeat1,
  [7494] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    ACTIONS(613), 1,
      aux_sym_having_or_expression_token1,
    STATE(298), 1,
      sym_formatting_comment,
    STATE(312), 1,
      aux_sym_or_expression_repeat1,
  [7510] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(299), 1,
      sym_formatting_comment,
    STATE(466), 1,
      sym_update_clause,
  [7526] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      sym_formatting_comment,
    STATE(325), 1,
      aux_sym_with_data_cat_filter_repeat1,
  [7542] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym_formatting_comment,
    STATE(318), 1,
      aux_sym__having_set_comparison_repeat1,
  [7558] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(275), 1,
      sym_update_type,
    STATE(302), 1,
      sym_formatting_comment,
    ACTIONS(684), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [7572] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(303), 1,
      sym_formatting_comment,
    ACTIONS(277), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7584] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(304), 1,
      sym_formatting_comment,
    STATE(443), 1,
      sym_update_clause,
  [7600] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(305), 1,
      sym_formatting_comment,
    ACTIONS(236), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7612] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(686), 1,
      anon_sym_COMMA,
    ACTIONS(688), 1,
      aux_sym_from_clause_token1,
    STATE(306), 1,
      sym_formatting_comment,
    STATE(309), 1,
      aux_sym_selected_fields_repeat1,
  [7628] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      sym_formatting_comment,
    STATE(418), 1,
      sym_update_clause,
  [7644] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    STATE(308), 1,
      sym_formatting_comment,
    STATE(374), 1,
      sym_select_clause,
    STATE(470), 1,
      sym_soql_query_body,
  [7660] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(476), 1,
      aux_sym_from_clause_token1,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    STATE(309), 2,
      sym_formatting_comment,
      aux_sym_selected_fields_repeat1,
  [7674] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(310), 1,
      sym_formatting_comment,
    ACTIONS(693), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [7686] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(311), 1,
      sym_formatting_comment,
    ACTIONS(411), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7698] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    ACTIONS(695), 1,
      aux_sym_having_or_expression_token1,
    STATE(312), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
  [7712] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      sym_formatting_comment,
    STATE(401), 1,
      sym_update_clause,
  [7728] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(314), 1,
      sym_formatting_comment,
    ACTIONS(320), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7740] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(698), 1,
      sym_identifier,
    STATE(259), 1,
      sym_dotted_identifier,
    STATE(310), 1,
      sym_field_list,
    STATE(315), 1,
      sym_formatting_comment,
  [7756] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(700), 1,
      anon_sym_LPAREN,
    ACTIONS(702), 1,
      sym_bound_apex_expression,
    STATE(69), 1,
      sym_subquery,
    STATE(316), 1,
      sym_formatting_comment,
  [7772] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(704), 1,
      anon_sym_LPAREN,
    ACTIONS(706), 1,
      sym_bound_apex_expression,
    STATE(317), 1,
      sym_formatting_comment,
    STATE(336), 1,
      sym_subquery,
  [7788] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_formatting_comment,
    STATE(355), 1,
      aux_sym__having_set_comparison_repeat1,
  [7804] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(319), 1,
      sym_formatting_comment,
    ACTIONS(623), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7816] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(320), 1,
      sym_formatting_comment,
    ACTIONS(457), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7828] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      sym_formatting_comment,
    STATE(351), 1,
      aux_sym__having_set_comparison_repeat1,
  [7844] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(322), 1,
      sym_formatting_comment,
    ACTIONS(469), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7856] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(712), 1,
      ts_builtin_sym_end,
    STATE(323), 1,
      sym_formatting_comment,
    STATE(456), 1,
      sym_update_clause,
  [7872] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(324), 1,
      sym_formatting_comment,
    ACTIONS(714), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7884] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    STATE(325), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_filter_repeat1,
  [7898] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      sym_formatting_comment,
    STATE(359), 1,
      aux_sym_function_expression_repeat1,
  [7914] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    STATE(327), 1,
      sym_formatting_comment,
    STATE(426), 1,
      sym_update_clause,
  [7930] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(328), 1,
      sym_formatting_comment,
    ACTIONS(164), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [7942] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(329), 1,
      sym_formatting_comment,
    STATE(349), 1,
      aux_sym_with_record_visibility_expression_repeat1,
  [7958] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      sym_formatting_comment,
    STATE(424), 1,
      sym_update_clause,
  [7974] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(248), 1,
      sym_boolean,
    STATE(331), 1,
      sym_formatting_comment,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [7988] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      sym_formatting_comment,
    STATE(354), 1,
      aux_sym_function_expression_repeat1,
  [8004] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(333), 1,
      sym_formatting_comment,
    ACTIONS(731), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [8016] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(334), 1,
      sym_formatting_comment,
    ACTIONS(635), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [8028] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(621), 1,
      aux_sym_having_or_expression_token1,
    STATE(335), 1,
      sym_formatting_comment,
    STATE(338), 1,
      aux_sym_having_or_expression_repeat1,
  [8044] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(336), 1,
      sym_formatting_comment,
    ACTIONS(257), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8056] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(337), 1,
      sym_formatting_comment,
    STATE(407), 1,
      sym_update_clause,
  [8072] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    ACTIONS(733), 1,
      aux_sym_having_or_expression_token1,
    STATE(338), 2,
      sym_formatting_comment,
      aux_sym_having_or_expression_repeat1,
  [8086] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_formatting_comment,
    STATE(442), 1,
      sym_offset_clause,
  [8102] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(686), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      aux_sym_from_clause_token1,
    STATE(306), 1,
      aux_sym_selected_fields_repeat1,
    STATE(340), 1,
      sym_formatting_comment,
  [8118] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(341), 1,
      sym_formatting_comment,
    ACTIONS(226), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8130] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(342), 1,
      sym_formatting_comment,
    ACTIONS(285), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8142] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(343), 1,
      sym_formatting_comment,
    ACTIONS(222), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8154] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(600), 1,
      ts_builtin_sym_end,
    STATE(344), 1,
      sym_formatting_comment,
    STATE(490), 1,
      sym_update_clause,
  [8170] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(345), 1,
      sym_formatting_comment,
    ACTIONS(218), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8182] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(346), 1,
      sym_formatting_comment,
    STATE(371), 1,
      sym_boolean,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [8196] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(319), 1,
      sym_update_type,
    STATE(347), 1,
      sym_formatting_comment,
    ACTIONS(684), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [8210] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(348), 1,
      sym_formatting_comment,
    ACTIONS(373), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8222] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    STATE(349), 1,
      sym_formatting_comment,
    STATE(368), 1,
      aux_sym_with_record_visibility_expression_repeat1,
  [8238] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(350), 1,
      sym_formatting_comment,
    ACTIONS(423), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8250] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      sym_formatting_comment,
    STATE(355), 1,
      aux_sym__having_set_comparison_repeat1,
  [8266] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_with_data_cat_filter_repeat1,
    STATE(352), 1,
      sym_formatting_comment,
  [8282] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_function_expression_repeat1,
    STATE(353), 1,
      sym_formatting_comment,
  [8298] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_function_expression_repeat1,
    STATE(354), 1,
      sym_formatting_comment,
  [8314] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(355), 2,
      sym_formatting_comment,
      aux_sym__having_set_comparison_repeat1,
  [8328] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_DOT,
    STATE(81), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(356), 1,
      sym_formatting_comment,
  [8344] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_function_expression_repeat1,
    STATE(357), 1,
      sym_formatting_comment,
  [8360] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(358), 1,
      sym_formatting_comment,
  [8376] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_function_expression_repeat1,
    STATE(359), 1,
      sym_formatting_comment,
  [8392] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(360), 1,
      sym_formatting_comment,
    ACTIONS(759), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [8404] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(102), 1,
      aux_sym_for_type_token1,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(361), 1,
      sym_formatting_comment,
    STATE(400), 1,
      sym_update_clause,
  [8420] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(362), 1,
      sym_formatting_comment,
    ACTIONS(419), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8432] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(698), 1,
      sym_identifier,
    STATE(259), 1,
      sym_dotted_identifier,
    STATE(363), 1,
      sym_formatting_comment,
    STATE(449), 1,
      sym_field_list,
  [8448] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(364), 1,
      sym_formatting_comment,
    ACTIONS(253), 3,
      anon_sym_RPAREN,
      aux_sym_having_and_expression_token1,
      aux_sym_having_or_expression_token1,
  [8460] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(365), 1,
      sym_formatting_comment,
  [8476] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(108), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      sym_formatting_comment,
    STATE(428), 1,
      sym_offset_clause,
  [8492] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym__having_set_comparison_repeat1,
    STATE(367), 1,
      sym_formatting_comment,
  [8508] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
    STATE(368), 2,
      sym_formatting_comment,
      aux_sym_with_record_visibility_expression_repeat1,
  [8522] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(770), 1,
      sym_identifier,
    STATE(152), 1,
      sym_sobject_return,
    STATE(369), 1,
      sym_formatting_comment,
  [8535] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(370), 1,
      sym_formatting_comment,
    ACTIONS(768), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8546] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(371), 1,
      sym_formatting_comment,
    ACTIONS(772), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8557] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
    ACTIONS(776), 1,
      sym_bound_apex_expression,
    STATE(372), 1,
      sym_formatting_comment,
  [8570] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(373), 1,
      sym_formatting_comment,
    ACTIONS(389), 2,
      anon_sym_RPAREN,
      aux_sym_having_or_expression_token1,
  [8581] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(778), 1,
      aux_sym_from_clause_token1,
    STATE(21), 1,
      sym_from_clause,
    STATE(374), 1,
      sym_formatting_comment,
  [8594] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(375), 1,
      sym_formatting_comment,
    ACTIONS(300), 2,
      anon_sym_RPAREN,
      aux_sym_having_or_expression_token1,
  [8605] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(780), 1,
      sym_identifier,
    STATE(77), 1,
      sym_with_data_cat_filter,
    STATE(376), 1,
      sym_formatting_comment,
  [8618] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(377), 1,
      sym_formatting_comment,
    ACTIONS(719), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8629] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(782), 1,
      anon_sym_LPAREN,
    ACTIONS(784), 1,
      sym_identifier,
    STATE(378), 1,
      sym_formatting_comment,
  [8642] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(786), 1,
      anon_sym_LPAREN,
    ACTIONS(788), 1,
      sym_bound_apex_expression,
    STATE(379), 1,
      sym_formatting_comment,
  [8655] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(790), 1,
      sym_identifier,
    STATE(264), 1,
      sym_dotted_identifier,
    STATE(380), 1,
      sym_formatting_comment,
  [8668] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(381), 1,
      sym_formatting_comment,
    ACTIONS(751), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8679] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(780), 1,
      sym_identifier,
    STATE(85), 1,
      sym_with_data_cat_filter,
    STATE(382), 1,
      sym_formatting_comment,
  [8692] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(792), 1,
      sym_term_separator_start,
    ACTIONS(794), 1,
      sym_bound_apex_expression,
    STATE(383), 1,
      sym_formatting_comment,
  [8705] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(384), 1,
      sym_formatting_comment,
    ACTIONS(796), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [8716] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(385), 1,
      sym_formatting_comment,
    ACTIONS(798), 2,
      anon_sym_LPAREN,
      sym_bound_apex_expression,
  [8727] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(770), 1,
      sym_identifier,
    STATE(201), 1,
      sym_sobject_return,
    STATE(386), 1,
      sym_formatting_comment,
  [8740] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(800), 1,
      sym_identifier,
    STATE(225), 1,
      sym_dotted_identifier,
    STATE(387), 1,
      sym_formatting_comment,
  [8753] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(388), 1,
      sym_formatting_comment,
    ACTIONS(676), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8764] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(802), 1,
      aux_sym_order_null_direction_token2,
    ACTIONS(804), 1,
      aux_sym_order_null_direction_token3,
    STATE(389), 1,
      sym_formatting_comment,
  [8777] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(390), 1,
      sym_formatting_comment,
    ACTIONS(806), 2,
      sym_bound_apex_expression,
      sym_int,
  [8788] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(391), 1,
      sym_formatting_comment,
    ACTIONS(808), 2,
      sym_bound_apex_expression,
      sym_int,
  [8799] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(392), 1,
      sym_formatting_comment,
    ACTIONS(810), 2,
      sym_bound_apex_expression,
      sym_string_literal,
  [8810] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(393), 1,
      sym_formatting_comment,
    ACTIONS(812), 2,
      anon_sym_LPAREN,
      sym_bound_apex_expression,
  [8821] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(394), 1,
      sym_formatting_comment,
  [8831] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(816), 1,
      aux_sym_in_clause_token2,
    STATE(395), 1,
      sym_formatting_comment,
  [8841] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      sym_formatting_comment,
  [8851] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    STATE(397), 1,
      sym_formatting_comment,
  [8861] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(822), 1,
      aux_sym_in_clause_token2,
    STATE(398), 1,
      sym_formatting_comment,
  [8871] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      sym_formatting_comment,
  [8881] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(400), 1,
      sym_formatting_comment,
  [8891] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      sym_formatting_comment,
  [8901] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(824), 1,
      aux_sym_with_snippet_expression_token2,
    STATE(402), 1,
      sym_formatting_comment,
  [8911] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      sym_formatting_comment,
  [8921] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
    STATE(404), 1,
      sym_formatting_comment,
  [8931] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(830), 1,
      sym_decimal,
    STATE(405), 1,
      sym_formatting_comment,
  [8941] = 3,
    ACTIONS(832), 1,
      aux_sym_header_comment_token1,
    ACTIONS(834), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(406), 1,
      sym_formatting_comment,
  [8951] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      sym_formatting_comment,
  [8961] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(836), 1,
      anon_sym_EQ,
    STATE(408), 1,
      sym_formatting_comment,
  [8971] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(838), 1,
      anon_sym_EQ,
    STATE(409), 1,
      sym_formatting_comment,
  [8981] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    STATE(410), 1,
      sym_formatting_comment,
  [8991] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(840), 1,
      sym_int,
    STATE(411), 1,
      sym_formatting_comment,
  [9001] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      sym_formatting_comment,
  [9011] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(413), 1,
      sym_formatting_comment,
  [9021] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(846), 1,
      anon_sym_EQ,
    STATE(414), 1,
      sym_formatting_comment,
  [9031] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(848), 1,
      aux_sym_with_data_cat_expression_token2,
    STATE(415), 1,
      sym_formatting_comment,
  [9041] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(850), 1,
      sym_term_separator_end,
    STATE(416), 1,
      sym_formatting_comment,
  [9051] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    STATE(417), 1,
      sym_formatting_comment,
  [9061] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      sym_formatting_comment,
  [9071] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(852), 1,
      anon_sym_EQ,
    STATE(419), 1,
      sym_formatting_comment,
  [9081] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(854), 1,
      anon_sym_EQ,
    STATE(420), 1,
      sym_formatting_comment,
  [9091] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_formatting_comment,
  [9101] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(858), 1,
      sym_string_literal,
    STATE(422), 1,
      sym_formatting_comment,
  [9111] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(860), 1,
      sym_decimal,
    STATE(423), 1,
      sym_formatting_comment,
  [9121] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(424), 1,
      sym_formatting_comment,
  [9131] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(862), 1,
      sym_string_literal,
    STATE(425), 1,
      sym_formatting_comment,
  [9141] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(426), 1,
      sym_formatting_comment,
  [9151] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(864), 1,
      sym_identifier,
    STATE(427), 1,
      sym_formatting_comment,
  [9161] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    STATE(428), 1,
      sym_formatting_comment,
  [9171] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(866), 1,
      sym_string_literal,
    STATE(429), 1,
      sym_formatting_comment,
  [9181] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(868), 1,
      aux_sym_in_clause_token1,
    STATE(430), 1,
      sym_formatting_comment,
  [9191] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(870), 1,
      anon_sym_COMMA,
    STATE(431), 1,
      sym_formatting_comment,
  [9201] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      sym_formatting_comment,
  [9211] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(874), 1,
      anon_sym_LPAREN,
    STATE(433), 1,
      sym_formatting_comment,
  [9221] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      sym_formatting_comment,
  [9231] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(876), 1,
      sym_string_literal,
    STATE(435), 1,
      sym_formatting_comment,
  [9241] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(878), 1,
      aux_sym_group_by_clause_token2,
    STATE(436), 1,
      sym_formatting_comment,
  [9251] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(880), 1,
      anon_sym_LPAREN,
    STATE(437), 1,
      sym_formatting_comment,
  [9261] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(882), 1,
      anon_sym_EQ,
    STATE(438), 1,
      sym_formatting_comment,
  [9271] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(884), 1,
      sym_identifier,
    STATE(439), 1,
      sym_formatting_comment,
  [9281] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(886), 1,
      aux_sym_from_clause_token1,
    STATE(440), 1,
      sym_formatting_comment,
  [9291] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(888), 1,
      anon_sym_EQ,
    STATE(441), 1,
      sym_formatting_comment,
  [9301] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      sym_formatting_comment,
  [9311] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    STATE(443), 1,
      sym_formatting_comment,
  [9321] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(890), 1,
      anon_sym_LPAREN,
    STATE(444), 1,
      sym_formatting_comment,
  [9331] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(892), 1,
      anon_sym_LPAREN,
    STATE(445), 1,
      sym_formatting_comment,
  [9341] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(894), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      sym_formatting_comment,
  [9351] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(896), 1,
      aux_sym_using_clause_token2,
    STATE(447), 1,
      sym_formatting_comment,
  [9361] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(898), 1,
      aux_sym_type_of_clause_token2,
    STATE(448), 1,
      sym_formatting_comment,
  [9371] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(900), 1,
      aux_sym_type_of_clause_token2,
    STATE(449), 1,
      sym_formatting_comment,
  [9381] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(902), 1,
      aux_sym_when_expression_token2,
    STATE(450), 1,
      sym_formatting_comment,
  [9391] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(451), 1,
      sym_formatting_comment,
  [9401] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(904), 1,
      anon_sym_LPAREN,
    STATE(452), 1,
      sym_formatting_comment,
  [9411] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(906), 1,
      aux_sym_group_by_clause_token2,
    STATE(453), 1,
      sym_formatting_comment,
  [9421] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(908), 1,
      aux_sym_soql_using_clause_token1,
    STATE(454), 1,
      sym_formatting_comment,
  [9431] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(910), 1,
      anon_sym_COLON,
    STATE(455), 1,
      sym_formatting_comment,
  [9441] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(912), 1,
      ts_builtin_sym_end,
    STATE(456), 1,
      sym_formatting_comment,
  [9451] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(914), 1,
      ts_builtin_sym_end,
    STATE(457), 1,
      sym_formatting_comment,
  [9461] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(916), 1,
      anon_sym_EQ,
    STATE(458), 1,
      sym_formatting_comment,
  [9471] = 3,
    ACTIONS(834), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(918), 1,
      sym_term,
    STATE(459), 1,
      sym_formatting_comment,
  [9481] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(920), 1,
      aux_sym_find_clause_token1,
    STATE(460), 1,
      sym_formatting_comment,
  [9491] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(922), 1,
      sym_identifier,
    STATE(461), 1,
      sym_formatting_comment,
  [9501] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
    STATE(462), 1,
      sym_formatting_comment,
  [9511] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(926), 1,
      sym_identifier,
    STATE(463), 1,
      sym_formatting_comment,
  [9521] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(928), 1,
      sym_int,
    STATE(464), 1,
      sym_formatting_comment,
  [9531] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    STATE(465), 1,
      sym_formatting_comment,
  [9541] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(600), 1,
      ts_builtin_sym_end,
    STATE(466), 1,
      sym_formatting_comment,
  [9551] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      sym_formatting_comment,
  [9561] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      sym_formatting_comment,
  [9571] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(934), 1,
      ts_builtin_sym_end,
    STATE(469), 1,
      sym_formatting_comment,
  [9581] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(936), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym_formatting_comment,
  [9591] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(938), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      sym_formatting_comment,
  [9601] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(940), 1,
      ts_builtin_sym_end,
    STATE(472), 1,
      sym_formatting_comment,
  [9611] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      sym_formatting_comment,
  [9621] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(944), 1,
      anon_sym_EQ,
    STATE(474), 1,
      sym_formatting_comment,
  [9631] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    STATE(475), 1,
      sym_formatting_comment,
  [9641] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(565), 1,
      aux_sym_type_of_clause_token2,
    STATE(476), 1,
      sym_formatting_comment,
  [9651] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(948), 1,
      sym_identifier,
    STATE(477), 1,
      sym_formatting_comment,
  [9661] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(950), 1,
      sym_identifier,
    STATE(478), 1,
      sym_formatting_comment,
  [9671] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(952), 1,
      sym_identifier,
    STATE(479), 1,
      sym_formatting_comment,
  [9681] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(954), 1,
      anon_sym_LPAREN,
    STATE(480), 1,
      sym_formatting_comment,
  [9691] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      sym_formatting_comment,
  [9701] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(958), 1,
      sym_identifier,
    STATE(482), 1,
      sym_formatting_comment,
  [9711] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(960), 1,
      anon_sym_COLON,
    STATE(483), 1,
      sym_formatting_comment,
  [9721] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(736), 1,
      aux_sym_from_clause_token1,
    STATE(484), 1,
      sym_formatting_comment,
  [9731] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(962), 1,
      anon_sym_RPAREN,
    STATE(485), 1,
      sym_formatting_comment,
  [9741] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(964), 1,
      ts_builtin_sym_end,
    STATE(486), 1,
      sym_formatting_comment,
  [9751] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(966), 1,
      sym_string_literal,
    STATE(487), 1,
      sym_formatting_comment,
  [9761] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      sym_formatting_comment,
  [9771] = 3,
    ACTIONS(834), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(970), 1,
      aux_sym_header_comment_token1,
    STATE(489), 1,
      sym_formatting_comment,
  [9781] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(712), 1,
      ts_builtin_sym_end,
    STATE(490), 1,
      sym_formatting_comment,
  [9791] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(972), 1,
      sym_string_literal,
    STATE(491), 1,
      sym_formatting_comment,
  [9801] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(974), 1,
      anon_sym_LPAREN,
    STATE(492), 1,
      sym_formatting_comment,
  [9811] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(976), 1,
      anon_sym_COMMA,
    STATE(493), 1,
      sym_formatting_comment,
  [9821] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(978), 1,
      anon_sym_LPAREN,
    STATE(494), 1,
      sym_formatting_comment,
  [9831] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    STATE(495), 1,
      sym_formatting_comment,
  [9841] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(982), 1,
      sym_int,
    STATE(496), 1,
      sym_formatting_comment,
  [9851] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(984), 1,
      sym_int,
    STATE(497), 1,
      sym_formatting_comment,
  [9861] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(986), 1,
      anon_sym_COMMA,
    STATE(498), 1,
      sym_formatting_comment,
  [9871] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    STATE(499), 1,
      sym_formatting_comment,
  [9881] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(990), 1,
      sym_identifier,
    STATE(500), 1,
      sym_formatting_comment,
  [9891] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      sym_formatting_comment,
  [9901] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(992), 1,
      anon_sym_LPAREN,
    STATE(502), 1,
      sym_formatting_comment,
  [9911] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(994), 1,
      anon_sym_LPAREN,
    STATE(503), 1,
      sym_formatting_comment,
  [9921] = 1,
    ACTIONS(996), 1,
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
  [SMALL_STATE(13)] = 682,
  [SMALL_STATE(14)] = 723,
  [SMALL_STATE(15)] = 761,
  [SMALL_STATE(16)] = 804,
  [SMALL_STATE(17)] = 838,
  [SMALL_STATE(18)] = 872,
  [SMALL_STATE(19)] = 906,
  [SMALL_STATE(20)] = 940,
  [SMALL_STATE(21)] = 972,
  [SMALL_STATE(22)] = 1036,
  [SMALL_STATE(23)] = 1080,
  [SMALL_STATE(24)] = 1122,
  [SMALL_STATE(25)] = 1164,
  [SMALL_STATE(26)] = 1206,
  [SMALL_STATE(27)] = 1264,
  [SMALL_STATE(28)] = 1306,
  [SMALL_STATE(29)] = 1348,
  [SMALL_STATE(30)] = 1395,
  [SMALL_STATE(31)] = 1442,
  [SMALL_STATE(32)] = 1486,
  [SMALL_STATE(33)] = 1538,
  [SMALL_STATE(34)] = 1582,
  [SMALL_STATE(35)] = 1628,
  [SMALL_STATE(36)] = 1654,
  [SMALL_STATE(37)] = 1706,
  [SMALL_STATE(38)] = 1736,
  [SMALL_STATE(39)] = 1782,
  [SMALL_STATE(40)] = 1812,
  [SMALL_STATE(41)] = 1864,
  [SMALL_STATE(42)] = 1910,
  [SMALL_STATE(43)] = 1938,
  [SMALL_STATE(44)] = 1971,
  [SMALL_STATE(45)] = 1996,
  [SMALL_STATE(46)] = 2020,
  [SMALL_STATE(47)] = 2066,
  [SMALL_STATE(48)] = 2112,
  [SMALL_STATE(49)] = 2158,
  [SMALL_STATE(50)] = 2204,
  [SMALL_STATE(51)] = 2232,
  [SMALL_STATE(52)] = 2278,
  [SMALL_STATE(53)] = 2324,
  [SMALL_STATE(54)] = 2349,
  [SMALL_STATE(55)] = 2372,
  [SMALL_STATE(56)] = 2401,
  [SMALL_STATE(57)] = 2440,
  [SMALL_STATE(58)] = 2463,
  [SMALL_STATE(59)] = 2486,
  [SMALL_STATE(60)] = 2509,
  [SMALL_STATE(61)] = 2538,
  [SMALL_STATE(62)] = 2561,
  [SMALL_STATE(63)] = 2600,
  [SMALL_STATE(64)] = 2639,
  [SMALL_STATE(65)] = 2662,
  [SMALL_STATE(66)] = 2687,
  [SMALL_STATE(67)] = 2709,
  [SMALL_STATE(68)] = 2731,
  [SMALL_STATE(69)] = 2771,
  [SMALL_STATE(70)] = 2793,
  [SMALL_STATE(71)] = 2833,
  [SMALL_STATE(72)] = 2853,
  [SMALL_STATE(73)] = 2873,
  [SMALL_STATE(74)] = 2895,
  [SMALL_STATE(75)] = 2935,
  [SMALL_STATE(76)] = 2963,
  [SMALL_STATE(77)] = 2985,
  [SMALL_STATE(78)] = 3009,
  [SMALL_STATE(79)] = 3031,
  [SMALL_STATE(80)] = 3055,
  [SMALL_STATE(81)] = 3079,
  [SMALL_STATE(82)] = 3105,
  [SMALL_STATE(83)] = 3145,
  [SMALL_STATE(84)] = 3165,
  [SMALL_STATE(85)] = 3205,
  [SMALL_STATE(86)] = 3224,
  [SMALL_STATE(87)] = 3243,
  [SMALL_STATE(88)] = 3278,
  [SMALL_STATE(89)] = 3299,
  [SMALL_STATE(90)] = 3336,
  [SMALL_STATE(91)] = 3355,
  [SMALL_STATE(92)] = 3376,
  [SMALL_STATE(93)] = 3405,
  [SMALL_STATE(94)] = 3424,
  [SMALL_STATE(95)] = 3445,
  [SMALL_STATE(96)] = 3480,
  [SMALL_STATE(97)] = 3515,
  [SMALL_STATE(98)] = 3550,
  [SMALL_STATE(99)] = 3571,
  [SMALL_STATE(100)] = 3594,
  [SMALL_STATE(101)] = 3631,
  [SMALL_STATE(102)] = 3654,
  [SMALL_STATE(103)] = 3675,
  [SMALL_STATE(104)] = 3702,
  [SMALL_STATE(105)] = 3723,
  [SMALL_STATE(106)] = 3760,
  [SMALL_STATE(107)] = 3778,
  [SMALL_STATE(108)] = 3796,
  [SMALL_STATE(109)] = 3830,
  [SMALL_STATE(110)] = 3854,
  [SMALL_STATE(111)] = 3872,
  [SMALL_STATE(112)] = 3906,
  [SMALL_STATE(113)] = 3926,
  [SMALL_STATE(114)] = 3946,
  [SMALL_STATE(115)] = 3980,
  [SMALL_STATE(116)] = 4000,
  [SMALL_STATE(117)] = 4034,
  [SMALL_STATE(118)] = 4056,
  [SMALL_STATE(119)] = 4090,
  [SMALL_STATE(120)] = 4110,
  [SMALL_STATE(121)] = 4132,
  [SMALL_STATE(122)] = 4152,
  [SMALL_STATE(123)] = 4172,
  [SMALL_STATE(124)] = 4192,
  [SMALL_STATE(125)] = 4226,
  [SMALL_STATE(126)] = 4245,
  [SMALL_STATE(127)] = 4262,
  [SMALL_STATE(128)] = 4281,
  [SMALL_STATE(129)] = 4298,
  [SMALL_STATE(130)] = 4317,
  [SMALL_STATE(131)] = 4336,
  [SMALL_STATE(132)] = 4355,
  [SMALL_STATE(133)] = 4376,
  [SMALL_STATE(134)] = 4397,
  [SMALL_STATE(135)] = 4414,
  [SMALL_STATE(136)] = 4431,
  [SMALL_STATE(137)] = 4450,
  [SMALL_STATE(138)] = 4467,
  [SMALL_STATE(139)] = 4488,
  [SMALL_STATE(140)] = 4517,
  [SMALL_STATE(141)] = 4536,
  [SMALL_STATE(142)] = 4553,
  [SMALL_STATE(143)] = 4572,
  [SMALL_STATE(144)] = 4591,
  [SMALL_STATE(145)] = 4610,
  [SMALL_STATE(146)] = 4631,
  [SMALL_STATE(147)] = 4652,
  [SMALL_STATE(148)] = 4673,
  [SMALL_STATE(149)] = 4694,
  [SMALL_STATE(150)] = 4723,
  [SMALL_STATE(151)] = 4744,
  [SMALL_STATE(152)] = 4761,
  [SMALL_STATE(153)] = 4782,
  [SMALL_STATE(154)] = 4801,
  [SMALL_STATE(155)] = 4818,
  [SMALL_STATE(156)] = 4839,
  [SMALL_STATE(157)] = 4856,
  [SMALL_STATE(158)] = 4873,
  [SMALL_STATE(159)] = 4892,
  [SMALL_STATE(160)] = 4911,
  [SMALL_STATE(161)] = 4928,
  [SMALL_STATE(162)] = 4945,
  [SMALL_STATE(163)] = 4974,
  [SMALL_STATE(164)] = 5005,
  [SMALL_STATE(165)] = 5021,
  [SMALL_STATE(166)] = 5037,
  [SMALL_STATE(167)] = 5053,
  [SMALL_STATE(168)] = 5069,
  [SMALL_STATE(169)] = 5097,
  [SMALL_STATE(170)] = 5113,
  [SMALL_STATE(171)] = 5129,
  [SMALL_STATE(172)] = 5145,
  [SMALL_STATE(173)] = 5173,
  [SMALL_STATE(174)] = 5189,
  [SMALL_STATE(175)] = 5217,
  [SMALL_STATE(176)] = 5235,
  [SMALL_STATE(177)] = 5255,
  [SMALL_STATE(178)] = 5271,
  [SMALL_STATE(179)] = 5299,
  [SMALL_STATE(180)] = 5327,
  [SMALL_STATE(181)] = 5353,
  [SMALL_STATE(182)] = 5369,
  [SMALL_STATE(183)] = 5397,
  [SMALL_STATE(184)] = 5423,
  [SMALL_STATE(185)] = 5447,
  [SMALL_STATE(186)] = 5465,
  [SMALL_STATE(187)] = 5481,
  [SMALL_STATE(188)] = 5497,
  [SMALL_STATE(189)] = 5523,
  [SMALL_STATE(190)] = 5551,
  [SMALL_STATE(191)] = 5579,
  [SMALL_STATE(192)] = 5603,
  [SMALL_STATE(193)] = 5631,
  [SMALL_STATE(194)] = 5647,
  [SMALL_STATE(195)] = 5667,
  [SMALL_STATE(196)] = 5687,
  [SMALL_STATE(197)] = 5715,
  [SMALL_STATE(198)] = 5731,
  [SMALL_STATE(199)] = 5759,
  [SMALL_STATE(200)] = 5775,
  [SMALL_STATE(201)] = 5801,
  [SMALL_STATE(202)] = 5817,
  [SMALL_STATE(203)] = 5845,
  [SMALL_STATE(204)] = 5871,
  [SMALL_STATE(205)] = 5896,
  [SMALL_STATE(206)] = 5911,
  [SMALL_STATE(207)] = 5926,
  [SMALL_STATE(208)] = 5941,
  [SMALL_STATE(209)] = 5956,
  [SMALL_STATE(210)] = 5971,
  [SMALL_STATE(211)] = 5988,
  [SMALL_STATE(212)] = 6007,
  [SMALL_STATE(213)] = 6022,
  [SMALL_STATE(214)] = 6037,
  [SMALL_STATE(215)] = 6058,
  [SMALL_STATE(216)] = 6077,
  [SMALL_STATE(217)] = 6092,
  [SMALL_STATE(218)] = 6107,
  [SMALL_STATE(219)] = 6132,
  [SMALL_STATE(220)] = 6157,
  [SMALL_STATE(221)] = 6172,
  [SMALL_STATE(222)] = 6197,
  [SMALL_STATE(223)] = 6220,
  [SMALL_STATE(224)] = 6237,
  [SMALL_STATE(225)] = 6252,
  [SMALL_STATE(226)] = 6277,
  [SMALL_STATE(227)] = 6299,
  [SMALL_STATE(228)] = 6317,
  [SMALL_STATE(229)] = 6339,
  [SMALL_STATE(230)] = 6353,
  [SMALL_STATE(231)] = 6375,
  [SMALL_STATE(232)] = 6397,
  [SMALL_STATE(233)] = 6413,
  [SMALL_STATE(234)] = 6435,
  [SMALL_STATE(235)] = 6457,
  [SMALL_STATE(236)] = 6471,
  [SMALL_STATE(237)] = 6493,
  [SMALL_STATE(238)] = 6507,
  [SMALL_STATE(239)] = 6529,
  [SMALL_STATE(240)] = 6543,
  [SMALL_STATE(241)] = 6565,
  [SMALL_STATE(242)] = 6587,
  [SMALL_STATE(243)] = 6601,
  [SMALL_STATE(244)] = 6615,
  [SMALL_STATE(245)] = 6629,
  [SMALL_STATE(246)] = 6643,
  [SMALL_STATE(247)] = 6665,
  [SMALL_STATE(248)] = 6679,
  [SMALL_STATE(249)] = 6693,
  [SMALL_STATE(250)] = 6715,
  [SMALL_STATE(251)] = 6733,
  [SMALL_STATE(252)] = 6747,
  [SMALL_STATE(253)] = 6763,
  [SMALL_STATE(254)] = 6785,
  [SMALL_STATE(255)] = 6807,
  [SMALL_STATE(256)] = 6821,
  [SMALL_STATE(257)] = 6843,
  [SMALL_STATE(258)] = 6861,
  [SMALL_STATE(259)] = 6883,
  [SMALL_STATE(260)] = 6901,
  [SMALL_STATE(261)] = 6916,
  [SMALL_STATE(262)] = 6931,
  [SMALL_STATE(263)] = 6948,
  [SMALL_STATE(264)] = 6963,
  [SMALL_STATE(265)] = 6976,
  [SMALL_STATE(266)] = 6991,
  [SMALL_STATE(267)] = 7010,
  [SMALL_STATE(268)] = 7027,
  [SMALL_STATE(269)] = 7046,
  [SMALL_STATE(270)] = 7061,
  [SMALL_STATE(271)] = 7076,
  [SMALL_STATE(272)] = 7093,
  [SMALL_STATE(273)] = 7108,
  [SMALL_STATE(274)] = 7125,
  [SMALL_STATE(275)] = 7140,
  [SMALL_STATE(276)] = 7157,
  [SMALL_STATE(277)] = 7176,
  [SMALL_STATE(278)] = 7195,
  [SMALL_STATE(279)] = 7214,
  [SMALL_STATE(280)] = 7229,
  [SMALL_STATE(281)] = 7246,
  [SMALL_STATE(282)] = 7261,
  [SMALL_STATE(283)] = 7280,
  [SMALL_STATE(284)] = 7299,
  [SMALL_STATE(285)] = 7312,
  [SMALL_STATE(286)] = 7324,
  [SMALL_STATE(287)] = 7336,
  [SMALL_STATE(288)] = 7348,
  [SMALL_STATE(289)] = 7364,
  [SMALL_STATE(290)] = 7380,
  [SMALL_STATE(291)] = 7392,
  [SMALL_STATE(292)] = 7408,
  [SMALL_STATE(293)] = 7424,
  [SMALL_STATE(294)] = 7440,
  [SMALL_STATE(295)] = 7452,
  [SMALL_STATE(296)] = 7468,
  [SMALL_STATE(297)] = 7480,
  [SMALL_STATE(298)] = 7494,
  [SMALL_STATE(299)] = 7510,
  [SMALL_STATE(300)] = 7526,
  [SMALL_STATE(301)] = 7542,
  [SMALL_STATE(302)] = 7558,
  [SMALL_STATE(303)] = 7572,
  [SMALL_STATE(304)] = 7584,
  [SMALL_STATE(305)] = 7600,
  [SMALL_STATE(306)] = 7612,
  [SMALL_STATE(307)] = 7628,
  [SMALL_STATE(308)] = 7644,
  [SMALL_STATE(309)] = 7660,
  [SMALL_STATE(310)] = 7674,
  [SMALL_STATE(311)] = 7686,
  [SMALL_STATE(312)] = 7698,
  [SMALL_STATE(313)] = 7712,
  [SMALL_STATE(314)] = 7728,
  [SMALL_STATE(315)] = 7740,
  [SMALL_STATE(316)] = 7756,
  [SMALL_STATE(317)] = 7772,
  [SMALL_STATE(318)] = 7788,
  [SMALL_STATE(319)] = 7804,
  [SMALL_STATE(320)] = 7816,
  [SMALL_STATE(321)] = 7828,
  [SMALL_STATE(322)] = 7844,
  [SMALL_STATE(323)] = 7856,
  [SMALL_STATE(324)] = 7872,
  [SMALL_STATE(325)] = 7884,
  [SMALL_STATE(326)] = 7898,
  [SMALL_STATE(327)] = 7914,
  [SMALL_STATE(328)] = 7930,
  [SMALL_STATE(329)] = 7942,
  [SMALL_STATE(330)] = 7958,
  [SMALL_STATE(331)] = 7974,
  [SMALL_STATE(332)] = 7988,
  [SMALL_STATE(333)] = 8004,
  [SMALL_STATE(334)] = 8016,
  [SMALL_STATE(335)] = 8028,
  [SMALL_STATE(336)] = 8044,
  [SMALL_STATE(337)] = 8056,
  [SMALL_STATE(338)] = 8072,
  [SMALL_STATE(339)] = 8086,
  [SMALL_STATE(340)] = 8102,
  [SMALL_STATE(341)] = 8118,
  [SMALL_STATE(342)] = 8130,
  [SMALL_STATE(343)] = 8142,
  [SMALL_STATE(344)] = 8154,
  [SMALL_STATE(345)] = 8170,
  [SMALL_STATE(346)] = 8182,
  [SMALL_STATE(347)] = 8196,
  [SMALL_STATE(348)] = 8210,
  [SMALL_STATE(349)] = 8222,
  [SMALL_STATE(350)] = 8238,
  [SMALL_STATE(351)] = 8250,
  [SMALL_STATE(352)] = 8266,
  [SMALL_STATE(353)] = 8282,
  [SMALL_STATE(354)] = 8298,
  [SMALL_STATE(355)] = 8314,
  [SMALL_STATE(356)] = 8328,
  [SMALL_STATE(357)] = 8344,
  [SMALL_STATE(358)] = 8360,
  [SMALL_STATE(359)] = 8376,
  [SMALL_STATE(360)] = 8392,
  [SMALL_STATE(361)] = 8404,
  [SMALL_STATE(362)] = 8420,
  [SMALL_STATE(363)] = 8432,
  [SMALL_STATE(364)] = 8448,
  [SMALL_STATE(365)] = 8460,
  [SMALL_STATE(366)] = 8476,
  [SMALL_STATE(367)] = 8492,
  [SMALL_STATE(368)] = 8508,
  [SMALL_STATE(369)] = 8522,
  [SMALL_STATE(370)] = 8535,
  [SMALL_STATE(371)] = 8546,
  [SMALL_STATE(372)] = 8557,
  [SMALL_STATE(373)] = 8570,
  [SMALL_STATE(374)] = 8581,
  [SMALL_STATE(375)] = 8594,
  [SMALL_STATE(376)] = 8605,
  [SMALL_STATE(377)] = 8618,
  [SMALL_STATE(378)] = 8629,
  [SMALL_STATE(379)] = 8642,
  [SMALL_STATE(380)] = 8655,
  [SMALL_STATE(381)] = 8668,
  [SMALL_STATE(382)] = 8679,
  [SMALL_STATE(383)] = 8692,
  [SMALL_STATE(384)] = 8705,
  [SMALL_STATE(385)] = 8716,
  [SMALL_STATE(386)] = 8727,
  [SMALL_STATE(387)] = 8740,
  [SMALL_STATE(388)] = 8753,
  [SMALL_STATE(389)] = 8764,
  [SMALL_STATE(390)] = 8777,
  [SMALL_STATE(391)] = 8788,
  [SMALL_STATE(392)] = 8799,
  [SMALL_STATE(393)] = 8810,
  [SMALL_STATE(394)] = 8821,
  [SMALL_STATE(395)] = 8831,
  [SMALL_STATE(396)] = 8841,
  [SMALL_STATE(397)] = 8851,
  [SMALL_STATE(398)] = 8861,
  [SMALL_STATE(399)] = 8871,
  [SMALL_STATE(400)] = 8881,
  [SMALL_STATE(401)] = 8891,
  [SMALL_STATE(402)] = 8901,
  [SMALL_STATE(403)] = 8911,
  [SMALL_STATE(404)] = 8921,
  [SMALL_STATE(405)] = 8931,
  [SMALL_STATE(406)] = 8941,
  [SMALL_STATE(407)] = 8951,
  [SMALL_STATE(408)] = 8961,
  [SMALL_STATE(409)] = 8971,
  [SMALL_STATE(410)] = 8981,
  [SMALL_STATE(411)] = 8991,
  [SMALL_STATE(412)] = 9001,
  [SMALL_STATE(413)] = 9011,
  [SMALL_STATE(414)] = 9021,
  [SMALL_STATE(415)] = 9031,
  [SMALL_STATE(416)] = 9041,
  [SMALL_STATE(417)] = 9051,
  [SMALL_STATE(418)] = 9061,
  [SMALL_STATE(419)] = 9071,
  [SMALL_STATE(420)] = 9081,
  [SMALL_STATE(421)] = 9091,
  [SMALL_STATE(422)] = 9101,
  [SMALL_STATE(423)] = 9111,
  [SMALL_STATE(424)] = 9121,
  [SMALL_STATE(425)] = 9131,
  [SMALL_STATE(426)] = 9141,
  [SMALL_STATE(427)] = 9151,
  [SMALL_STATE(428)] = 9161,
  [SMALL_STATE(429)] = 9171,
  [SMALL_STATE(430)] = 9181,
  [SMALL_STATE(431)] = 9191,
  [SMALL_STATE(432)] = 9201,
  [SMALL_STATE(433)] = 9211,
  [SMALL_STATE(434)] = 9221,
  [SMALL_STATE(435)] = 9231,
  [SMALL_STATE(436)] = 9241,
  [SMALL_STATE(437)] = 9251,
  [SMALL_STATE(438)] = 9261,
  [SMALL_STATE(439)] = 9271,
  [SMALL_STATE(440)] = 9281,
  [SMALL_STATE(441)] = 9291,
  [SMALL_STATE(442)] = 9301,
  [SMALL_STATE(443)] = 9311,
  [SMALL_STATE(444)] = 9321,
  [SMALL_STATE(445)] = 9331,
  [SMALL_STATE(446)] = 9341,
  [SMALL_STATE(447)] = 9351,
  [SMALL_STATE(448)] = 9361,
  [SMALL_STATE(449)] = 9371,
  [SMALL_STATE(450)] = 9381,
  [SMALL_STATE(451)] = 9391,
  [SMALL_STATE(452)] = 9401,
  [SMALL_STATE(453)] = 9411,
  [SMALL_STATE(454)] = 9421,
  [SMALL_STATE(455)] = 9431,
  [SMALL_STATE(456)] = 9441,
  [SMALL_STATE(457)] = 9451,
  [SMALL_STATE(458)] = 9461,
  [SMALL_STATE(459)] = 9471,
  [SMALL_STATE(460)] = 9481,
  [SMALL_STATE(461)] = 9491,
  [SMALL_STATE(462)] = 9501,
  [SMALL_STATE(463)] = 9511,
  [SMALL_STATE(464)] = 9521,
  [SMALL_STATE(465)] = 9531,
  [SMALL_STATE(466)] = 9541,
  [SMALL_STATE(467)] = 9551,
  [SMALL_STATE(468)] = 9561,
  [SMALL_STATE(469)] = 9571,
  [SMALL_STATE(470)] = 9581,
  [SMALL_STATE(471)] = 9591,
  [SMALL_STATE(472)] = 9601,
  [SMALL_STATE(473)] = 9611,
  [SMALL_STATE(474)] = 9621,
  [SMALL_STATE(475)] = 9631,
  [SMALL_STATE(476)] = 9641,
  [SMALL_STATE(477)] = 9651,
  [SMALL_STATE(478)] = 9661,
  [SMALL_STATE(479)] = 9671,
  [SMALL_STATE(480)] = 9681,
  [SMALL_STATE(481)] = 9691,
  [SMALL_STATE(482)] = 9701,
  [SMALL_STATE(483)] = 9711,
  [SMALL_STATE(484)] = 9721,
  [SMALL_STATE(485)] = 9731,
  [SMALL_STATE(486)] = 9741,
  [SMALL_STATE(487)] = 9751,
  [SMALL_STATE(488)] = 9761,
  [SMALL_STATE(489)] = 9771,
  [SMALL_STATE(490)] = 9781,
  [SMALL_STATE(491)] = 9791,
  [SMALL_STATE(492)] = 9801,
  [SMALL_STATE(493)] = 9811,
  [SMALL_STATE(494)] = 9821,
  [SMALL_STATE(495)] = 9831,
  [SMALL_STATE(496)] = 9841,
  [SMALL_STATE(497)] = 9851,
  [SMALL_STATE(498)] = 9861,
  [SMALL_STATE(499)] = 9871,
  [SMALL_STATE(500)] = 9881,
  [SMALL_STATE(501)] = 9891,
  [SMALL_STATE(502)] = 9901,
  [SMALL_STATE(503)] = 9911,
  [SMALL_STATE(504)] = 9921,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_comparison_operator, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_comparison_operator, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(463),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 8, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 8, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 4, .production_id = 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 4, .production_id = 4),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 5, .production_id = 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 5, .production_id = 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_expression, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_expression, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_identifier, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storage_identifier, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(482),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 3),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(268),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_literal, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_literal, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal_with_param, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal_with_param, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__soql_literal, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__soql_literal, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2), SHIFT_REPEAT(382),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comparison, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comparison, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 5),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 5),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_comparison, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_comparison, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(479),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2), SHIFT_REPEAT(97),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 6),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2), SHIFT_REPEAT(96),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_expression, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_boolean_expression, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_using_clause, 3, .production_id = 5),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_scope_type, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selectable_expression, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selectable_expression, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2), SHIFT_REPEAT(222),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_comparison_expression, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_having_comparison_expression, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_set_comparison, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_set_comparison, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_value_comparison, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_value_comparison, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_having_or_expression_repeat1, 2),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_having_or_expression_repeat1, 2), SHIFT_REPEAT(202),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_having_and_expression_repeat1, 2),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_having_and_expression_repeat1, 2), SHIFT_REPEAT(198),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selected_fields, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_set_comparison, 4),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_set_comparison, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 5),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selected_fields, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_condition_expression, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_condition_expression, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_comparison, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_comparison, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_returning_clause_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_returning_clause_repeat1, 2), SHIFT_REPEAT(386),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_or_expression, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_and_expression, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returning_clause, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat1, 2), SHIFT_REPEAT(369),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_expression, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returning_clause, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_set_comparison, 5),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_set_comparison, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__having_condition_expression, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__having_condition_expression, 1),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selected_fields_repeat1, 2), SHIFT_REPEAT(33),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selected_fields_repeat1, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 7),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_find_clause, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_clause, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_type, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 6),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 4),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 9),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 5),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_having_or_expression_repeat1, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, .production_id = 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_user_id_type, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 8),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2), SHIFT_REPEAT(139),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_find_clause, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 4, .production_id = 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat2, 2),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat2, 2), SHIFT_REPEAT(22),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 4),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_not_expression, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_clause, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat1, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_null_direction, 2),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2), SHIFT_REPEAT(478),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_clause, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_snippet_expression, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_null_direction, 2, .production_id = 6),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2), SHIFT_REPEAT(477),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_pricebook_expression, 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_metadata_expression, 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_highlight, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat2, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_network_expression, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 4),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_snippet_expression, 6),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 5),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_division_expression, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_spell_correction_expression, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_with_type, 1),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2), SHIFT_REPEAT(380),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_with_clause, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2), SHIFT_REPEAT(347),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2), SHIFT_REPEAT(279),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_clause, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2), SHIFT_REPEAT(180),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 3),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selected_fields_repeat1, 2), SHIFT_REPEAT(31),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_expression, 4),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2), SHIFT_REPEAT(87),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 6),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_type, 1),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2), SHIFT_REPEAT(427),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_type, 1),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_having_or_expression_repeat1, 2), SHIFT_REPEAT(179),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__having_set_comparison_repeat1, 2), SHIFT_REPEAT(9),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__having_set_comparison_repeat1, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2), SHIFT_REPEAT(267),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_param, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter_type, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_comparison_operator, 2, .production_id = 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_comparison_operator, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 6, .production_id = 1),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_type, 1),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 11),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 1),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_expression, 3, .production_id = 4),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expression, 2),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 7),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_comment, 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_expression, 1),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [964] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_type, 1),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatting_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sosl(void) {
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
