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
#define STATE_COUNT 913
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 233
#define ALIAS_COUNT 0
#define TOKEN_COUNT 131
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 515

enum ts_symbol_identifiers {
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
  aux_sym_for_clause_token1 = 46,
  aux_sym_for_type_token1 = 47,
  aux_sym_for_type_token2 = 48,
  aux_sym_for_type_token3 = 49,
  aux_sym_having_clause_token1 = 50,
  aux_sym_from_clause_token1 = 51,
  aux_sym_storage_alias_token1 = 52,
  aux_sym_fields_type_token1 = 53,
  aux_sym_fields_type_token2 = 54,
  aux_sym_where_clause_token1 = 55,
  aux_sym_and_expression_token1 = 56,
  aux_sym_or_expression_token1 = 57,
  aux_sym_not_expression_token1 = 58,
  aux_sym_soql_with_type_token1 = 59,
  aux_sym_soql_with_type_token2 = 60,
  aux_sym_soql_with_type_token3 = 61,
  aux_sym_with_user_id_type_token1 = 62,
  aux_sym_with_record_visibility_expression_token1 = 63,
  aux_sym_with_record_visibility_param_token1 = 64,
  aux_sym_with_record_visibility_param_token2 = 65,
  aux_sym_with_record_visibility_param_token3 = 66,
  aux_sym_with_data_cat_expression_token1 = 67,
  aux_sym_with_data_cat_filter_type_token1 = 68,
  aux_sym_with_data_cat_filter_type_token2 = 69,
  aux_sym_with_data_cat_filter_type_token3 = 70,
  aux_sym_with_data_cat_filter_type_token4 = 71,
  aux_sym_limit_clause_token1 = 72,
  aux_sym_offset_clause_token1 = 73,
  aux_sym_update_type_token1 = 74,
  aux_sym_update_type_token2 = 75,
  aux_sym_order_by_clause_token1 = 76,
  aux_sym_order_direction_token1 = 77,
  aux_sym_order_direction_token2 = 78,
  aux_sym_order_null_direction_token1 = 79,
  aux_sym_order_null_direction_token2 = 80,
  aux_sym_geo_location_type_token1 = 81,
  aux_sym_function_expression_token1 = 82,
  anon_sym_DOT = 83,
  aux_sym_boolean_token1 = 84,
  aux_sym_boolean_token2 = 85,
  anon_sym_BANG_EQ = 86,
  anon_sym_LT_GT = 87,
  anon_sym_LT = 88,
  anon_sym_LT_EQ = 89,
  anon_sym_GT = 90,
  anon_sym_GT_EQ = 91,
  aux_sym_value_comparison_operator_token1 = 92,
  aux_sym_set_comparison_operator_token1 = 93,
  aux_sym_set_comparison_operator_token2 = 94,
  aux_sym_set_comparison_operator_token3 = 95,
  aux_sym_date_literal_token1 = 96,
  aux_sym_date_literal_token2 = 97,
  aux_sym_date_literal_token3 = 98,
  aux_sym_date_literal_token4 = 99,
  aux_sym_date_literal_token5 = 100,
  aux_sym_date_literal_token6 = 101,
  aux_sym_date_literal_token7 = 102,
  aux_sym_date_literal_token8 = 103,
  aux_sym_date_literal_token9 = 104,
  aux_sym_date_literal_token10 = 105,
  aux_sym_date_literal_token11 = 106,
  aux_sym_date_literal_token12 = 107,
  aux_sym_date_literal_token13 = 108,
  aux_sym_date_literal_token14 = 109,
  aux_sym_date_literal_token15 = 110,
  aux_sym_date_literal_token16 = 111,
  aux_sym_date_literal_token17 = 112,
  aux_sym_date_literal_token18 = 113,
  aux_sym_date_literal_token19 = 114,
  aux_sym_date_literal_token20 = 115,
  aux_sym_date_literal_token21 = 116,
  aux_sym_date_literal_token22 = 117,
  aux_sym_date_literal_token23 = 118,
  aux_sym_date_literal_with_param_token1 = 119,
  anon_sym_COLON = 120,
  anon_sym_QMARK = 121,
  sym_bound_apex_expression = 122,
  aux_sym_null_literal_token1 = 123,
  sym_string_literal = 124,
  sym_int = 125,
  sym_decimal = 126,
  sym_date = 127,
  sym_date_time = 128,
  sym_currency_literal = 129,
  sym_identifier = 130,
  sym_source_file = 131,
  sym_header_comment = 132,
  sym_formatting_comment = 133,
  sym__query_expression = 134,
  sym_sosl_query_body = 135,
  sym_find_clause = 136,
  sym_in_clause = 137,
  sym_in_type = 138,
  sym_returning_clause = 139,
  sym_sobject_return = 140,
  sym_selected_fields = 141,
  sym__selectable_expression = 142,
  sym_using_clause = 143,
  sym_subquery = 144,
  sym_with_division_expression = 145,
  sym_with_highlight = 146,
  sym_with_metadata_expression = 147,
  sym_with_network_expression = 148,
  sym_with_pricebook_expression = 149,
  sym_with_snippet_expression = 150,
  sym_with_spell_correction_expression = 151,
  sym_sosl_with_type = 152,
  sym_sosl_with_clause = 153,
  sym_soql_query_body = 154,
  sym_count_expression = 155,
  sym_select_clause = 156,
  sym_soql_using_clause = 157,
  sym_using_scope_type = 158,
  sym_type_of_clause = 159,
  sym_when_expression = 160,
  sym_else_expression = 161,
  sym_group_by_clause = 162,
  sym__group_by_expression = 163,
  sym_for_clause = 164,
  sym_for_type = 165,
  sym_having_clause = 166,
  sym_from_clause = 167,
  sym_storage_identifier = 168,
  sym_storage_alias = 169,
  sym_fields_expression = 170,
  sym_fields_type = 171,
  sym_where_clause = 172,
  sym__boolean_expression = 173,
  sym_and_expression = 174,
  sym_or_expression = 175,
  sym_not_expression = 176,
  sym__condition_expression = 177,
  sym_comparison_expression = 178,
  sym__comparison = 179,
  sym__value_comparison = 180,
  sym__set_comparison = 181,
  sym_comparable_list = 182,
  sym_soql_with_clause = 183,
  sym_soql_with_type = 184,
  sym_with_user_id_type = 185,
  sym_with_record_visibility_expression = 186,
  sym_with_record_visibility_param = 187,
  sym_with_data_cat_expression = 188,
  sym_with_data_cat_filter = 189,
  sym_with_data_cat_filter_type = 190,
  sym_limit_clause = 191,
  sym_offset_clause = 192,
  sym_update_clause = 193,
  sym_update_type = 194,
  sym_alias_expression = 195,
  sym_order_by_clause = 196,
  sym_order_expression = 197,
  sym_order_direction = 198,
  sym_order_null_direction = 199,
  sym_geo_location_type = 200,
  sym__value_expression = 201,
  sym_function_expression = 202,
  sym_dotted_identifier = 203,
  sym_field_identifier = 204,
  sym_field_list = 205,
  sym_boolean = 206,
  sym_value_comparison_operator = 207,
  sym_set_comparison_operator = 208,
  sym_date_literal = 209,
  sym_date_literal_with_param = 210,
  sym__function_name = 211,
  sym_null_literal = 212,
  sym__soql_literal = 213,
  aux_sym_sosl_query_body_repeat1 = 214,
  aux_sym_sosl_query_body_repeat2 = 215,
  aux_sym_returning_clause_repeat1 = 216,
  aux_sym_selected_fields_repeat1 = 217,
  aux_sym_type_of_clause_repeat1 = 218,
  aux_sym__group_by_expression_repeat1 = 219,
  aux_sym_for_clause_repeat1 = 220,
  aux_sym_from_clause_repeat1 = 221,
  aux_sym_and_expression_repeat1 = 222,
  aux_sym_or_expression_repeat1 = 223,
  aux_sym_comparable_list_repeat1 = 224,
  aux_sym_with_record_visibility_expression_repeat1 = 225,
  aux_sym_with_data_cat_expression_repeat1 = 226,
  aux_sym_with_data_cat_filter_repeat1 = 227,
  aux_sym_update_clause_repeat1 = 228,
  aux_sym_order_by_clause_repeat1 = 229,
  aux_sym_function_expression_repeat1 = 230,
  aux_sym_dotted_identifier_repeat1 = 231,
  aux_sym_field_list_repeat1 = 232,
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
  [aux_sym_for_clause_token1] = "FOR",
  [aux_sym_for_type_token1] = "UPDATE",
  [aux_sym_for_type_token2] = "REFERENCE",
  [aux_sym_for_type_token3] = "VIEW",
  [aux_sym_having_clause_token1] = "HAVING",
  [aux_sym_from_clause_token1] = "FROM",
  [aux_sym_storage_alias_token1] = "AS",
  [aux_sym_fields_type_token1] = "CUSTOM",
  [aux_sym_fields_type_token2] = "STANDARD",
  [aux_sym_where_clause_token1] = "WHERE",
  [aux_sym_and_expression_token1] = "AND",
  [aux_sym_or_expression_token1] = "OR",
  [aux_sym_not_expression_token1] = "NOT",
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
  [aux_sym_set_comparison_operator_token1] = "NOT_IN",
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
  [aux_sym_sosl_query_body_repeat1] = "sosl_query_body_repeat1",
  [aux_sym_sosl_query_body_repeat2] = "sosl_query_body_repeat2",
  [aux_sym_returning_clause_repeat1] = "returning_clause_repeat1",
  [aux_sym_selected_fields_repeat1] = "selected_fields_repeat1",
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
  [aux_sym_for_clause_token1] = aux_sym_for_clause_token1,
  [aux_sym_for_type_token1] = aux_sym_for_type_token1,
  [aux_sym_for_type_token2] = aux_sym_for_type_token2,
  [aux_sym_for_type_token3] = aux_sym_for_type_token3,
  [aux_sym_having_clause_token1] = aux_sym_having_clause_token1,
  [aux_sym_from_clause_token1] = aux_sym_from_clause_token1,
  [aux_sym_storage_alias_token1] = aux_sym_storage_alias_token1,
  [aux_sym_fields_type_token1] = aux_sym_fields_type_token1,
  [aux_sym_fields_type_token2] = aux_sym_fields_type_token2,
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
  [aux_sym_and_expression_token1] = aux_sym_and_expression_token1,
  [aux_sym_or_expression_token1] = aux_sym_or_expression_token1,
  [aux_sym_not_expression_token1] = aux_sym_not_expression_token1,
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
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 8,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 28,
  [33] = 33,
  [34] = 9,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 10,
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
  [52] = 11,
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
  [76] = 9,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 8,
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
  [94] = 10,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 83,
  [101] = 101,
  [102] = 102,
  [103] = 12,
  [104] = 104,
  [105] = 16,
  [106] = 13,
  [107] = 107,
  [108] = 108,
  [109] = 15,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 14,
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
  [174] = 174,
  [175] = 175,
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
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 11,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 215,
  [218] = 215,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 9,
  [225] = 8,
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
  [236] = 235,
  [237] = 235,
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
  [307] = 50,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 10,
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
  [329] = 14,
  [330] = 12,
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
  [343] = 104,
  [344] = 344,
  [345] = 16,
  [346] = 13,
  [347] = 347,
  [348] = 348,
  [349] = 344,
  [350] = 350,
  [351] = 351,
  [352] = 15,
  [353] = 335,
  [354] = 335,
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
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
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
  [508] = 78,
  [509] = 509,
  [510] = 55,
  [511] = 58,
  [512] = 79,
  [513] = 51,
  [514] = 54,
  [515] = 69,
  [516] = 516,
  [517] = 35,
  [518] = 99,
  [519] = 159,
  [520] = 59,
  [521] = 63,
  [522] = 96,
  [523] = 86,
  [524] = 60,
  [525] = 91,
  [526] = 93,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 363,
  [532] = 464,
  [533] = 473,
  [534] = 534,
  [535] = 374,
  [536] = 464,
  [537] = 374,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 117,
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
  [788] = 788,
  [789] = 789,
  [790] = 790,
  [791] = 791,
  [792] = 792,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 798,
  [799] = 799,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 814,
  [815] = 815,
  [816] = 816,
  [817] = 817,
  [818] = 818,
  [819] = 819,
  [820] = 820,
  [821] = 821,
  [822] = 822,
  [823] = 823,
  [824] = 824,
  [825] = 825,
  [826] = 826,
  [827] = 827,
  [828] = 828,
  [829] = 829,
  [830] = 830,
  [831] = 831,
  [832] = 832,
  [833] = 833,
  [834] = 834,
  [835] = 835,
  [836] = 836,
  [837] = 837,
  [838] = 838,
  [839] = 839,
  [840] = 840,
  [841] = 841,
  [842] = 842,
  [843] = 843,
  [844] = 844,
  [845] = 845,
  [846] = 846,
  [847] = 847,
  [848] = 848,
  [849] = 849,
  [850] = 850,
  [851] = 851,
  [852] = 852,
  [853] = 853,
  [854] = 854,
  [855] = 855,
  [856] = 856,
  [857] = 857,
  [858] = 858,
  [859] = 859,
  [860] = 860,
  [861] = 861,
  [862] = 862,
  [863] = 863,
  [864] = 864,
  [865] = 865,
  [866] = 866,
  [867] = 867,
  [868] = 868,
  [869] = 869,
  [870] = 870,
  [871] = 871,
  [872] = 872,
  [873] = 873,
  [874] = 874,
  [875] = 875,
  [876] = 855,
  [877] = 866,
  [878] = 727,
  [879] = 879,
  [880] = 880,
  [881] = 881,
  [882] = 882,
  [883] = 570,
  [884] = 884,
  [885] = 885,
  [886] = 886,
  [887] = 866,
  [888] = 888,
  [889] = 889,
  [890] = 886,
  [891] = 866,
  [892] = 841,
  [893] = 893,
  [894] = 894,
  [895] = 895,
  [896] = 803,
  [897] = 897,
  [898] = 803,
  [899] = 672,
  [900] = 656,
  [901] = 672,
  [902] = 656,
  [903] = 903,
  [904] = 904,
  [905] = 649,
  [906] = 649,
  [907] = 907,
  [908] = 886,
  [909] = 577,
  [910] = 577,
  [911] = 911,
  [912] = 912,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(742);
      ADVANCE_MAP(
        '!', 32,
        '\'', 3,
        '(', 769,
        ')', 770,
        '*', 13,
        ',', 768,
        '-', 728,
        '.', 850,
        '/', 18,
        ':', 887,
        '<', 855,
        '=', 774,
        '>', 857,
        '?', 888,
        '{', 760,
        '}', 761,
        'A', 136,
        'a', 136,
        'B', 222,
        'b', 222,
        'C', 666,
        'c', 666,
        'D', 74,
        'd', 74,
        'E', 385,
        'e', 385,
        'F', 86,
        'f', 86,
        'G', 227,
        'g', 227,
        'H', 76,
        'h', 76,
        'I', 421,
        'i', 421,
        'L', 110,
        'l', 110,
        'M', 77,
        'm', 77,
        'N', 50,
        'n', 50,
        'O', 295,
        'o', 295,
        'P', 324,
        'p', 324,
        'R', 199,
        'r', 199,
        'S', 200,
        's', 200,
        'T', 82,
        't', 82,
        'U', 496,
        'u', 496,
        'V', 337,
        'v', 337,
        'W', 325,
        'w', 325,
        'Y', 284,
        'y', 284,
      );
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(900);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 32,
        '(', 769,
        ')', 770,
        ',', 768,
        '-', 728,
        '.', 850,
        '/', 21,
        '<', 855,
        '=', 774,
        '>', 857,
        'A', 590,
        'a', 590,
        'D', 259,
        'd', 259,
        'E', 386,
        'e', 386,
        'F', 450,
        'f', 450,
        'G', 530,
        'g', 530,
        'H', 75,
        'h', 75,
        'I', 421,
        'i', 421,
        'L', 331,
        'l', 331,
        'N', 476,
        'n', 476,
        'O', 296,
        'o', 296,
        'T', 544,
        't', 544,
        'U', 497,
        'u', 497,
        'V', 360,
        'v', 360,
        'W', 325,
        'w', 325,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(902);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\'', 3,
        '*', 13,
        '-', 728,
        '/', 21,
        'F', 80,
        'f', 80,
        'L', 81,
        'l', 81,
        'N', 54,
        'n', 54,
        'R', 219,
        'r', 219,
        'S', 230,
        's', 230,
        'T', 323,
        't', 323,
        'U', 493,
        'u', 493,
        'V', 336,
        'v', 336,
        'Y', 274,
        'y', 274,
      );
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(898);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(740);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(892);
      if (lookahead == '\\') ADVANCE(739);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '(', 769,
        ')', 770,
        ',', 768,
        '.', 850,
        '/', 21,
        'A', 966,
        'a', 966,
        'L', 935,
        'l', 935,
        'O', 926,
        'o', 926,
        'U', 967,
        'u', 967,
        'W', 932,
        'w', 932,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(769);
      if (lookahead == ')') ADVANCE(770);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(933);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(769);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '(', 769,
        ',', 768,
        '.', 850,
        '/', 21,
        'A', 966,
        'a', 966,
        'F', 961,
        'f', 961,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '(', 769,
        '/', 21,
        'D', 933,
        'd', 933,
        'F', 934,
        'f', 934,
        'T', 977,
        't', 977,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(769);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(933);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(955);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        ')', 770,
        ',', 768,
        '.', 850,
        '/', 21,
        'A', 966,
        'a', 966,
        'F', 952,
        'f', 952,
        'G', 960,
        'g', 960,
        'L', 935,
        'l', 935,
        'O', 926,
        'o', 926,
        'U', 958,
        'u', 958,
        'W', 931,
        'w', 931,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(770);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(527);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(924);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(889);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(734);
      if (lookahead == 'Z') ADVANCE(905);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(714);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(743);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(748);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(764);
      if (lookahead == '\\') ADVANCE(766);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(765);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(726);
      if (lookahead == '1') ADVANCE(715);
      END_STATE();
    case 23:
      if (lookahead == '0') ADVANCE(727);
      if (lookahead == '3') ADVANCE(713);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(730);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(716);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(731);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '9', 24,
        'F', 365,
        'f', 365,
        'M', 484,
        'm', 484,
        'N', 67,
        'n', 67,
        'Q', 676,
        'q', 676,
        'W', 269,
        'w', 269,
        'Y', 285,
        'y', 285,
      );
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '9', 25,
        'F', 366,
        'f', 366,
        'M', 486,
        'm', 486,
        'N', 67,
        'n', 67,
        'Q', 677,
        'q', 677,
        'W', 272,
        'w', 272,
        'Y', 286,
        'y', 286,
      );
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(725);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(723);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(724);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(853);
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
      if (lookahead == 'Z') ADVANCE(905);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(714);
      END_STATE();
    case 48:
      if (lookahead == 'Z') ADVANCE(905);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'Z') ADVANCE(905);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 50:
      ADVANCE_MAP(
        '_', 180,
        'A', 414,
        'a', 414,
        'E', 608,
        'e', 608,
        'O', 609,
        'o', 609,
        'U', 393,
        'u', 393,
      );
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(302);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(506);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(177);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(142);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(415);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(638);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(159);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(417);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(314);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(401);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(258);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(197);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(198);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(646);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(196);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(508);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(419);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(509);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(510);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(507);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(624);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(601);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(683);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(683);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 77:
      ADVANCE_MAP(
        'A', 696,
        'a', 696,
        'E', 627,
        'e', 627,
        'I', 435,
        'i', 435,
        'Y', 57,
        'y', 57,
      );
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(717);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(777);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 82:
      ADVANCE_MAP(
        'A', 528,
        'a', 528,
        'E', 87,
        'e', 87,
        'H', 231,
        'h', 231,
        'O', 181,
        'o', 181,
        'R', 91,
        'r', 91,
        'Y', 499,
        'y', 499,
      );
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(712);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      END_STATE();
    case 86:
      ADVANCE_MAP(
        'A', 402,
        'a', 402,
        'I', 240,
        'i', 240,
        'O', 511,
        'o', 511,
        'R', 454,
        'r', 454,
      );
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(418);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(701);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(559);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(614);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(517);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(521);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(585);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(707);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(708);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(709);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(642);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(637);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(643);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(645);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(651);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(560);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(563);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(564);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 136:
      ADVANCE_MAP(
        'B', 453,
        'b', 453,
        'L', 379,
        'l', 379,
        'N', 167,
        'n', 167,
        'S', 811,
        's', 811,
        'T', 831,
        't', 831,
      );
      END_STATE();
    case 137:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(699);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(700);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(470);
      END_STATE();
    case 140:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(349);
      END_STATE();
    case 141:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(101);
      END_STATE();
    case 142:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(283);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(843);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(375);
      END_STATE();
    case 145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(842);
      END_STATE();
    case 146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(460);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(243);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(670);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(612);
      END_STATE();
    case 149:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 150:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(539);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(673);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(485);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(473);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(492);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(660);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(162);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(817);
      END_STATE();
    case 168:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(796);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(751);
      END_STATE();
    case 170:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(825);
      END_STATE();
    case 171:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(814);
      END_STATE();
    case 172:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(787);
      END_STATE();
    case 173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 174:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(779);
      END_STATE();
    case 175:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(822);
      END_STATE();
    case 176:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(827);
      END_STATE();
    case 177:
      ADVANCE_MAP(
        'D', 84,
        'd', 84,
        'F', 339,
        'f', 339,
        'M', 463,
        'm', 463,
        'Q', 672,
        'q', 672,
        'W', 262,
        'w', 262,
        'Y', 281,
        'y', 281,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 178:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 179:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(569);
      END_STATE();
    case 180:
      ADVANCE_MAP(
        'D', 83,
        'd', 83,
        'F', 338,
        'f', 338,
        'M', 462,
        'm', 462,
        'Q', 671,
        'q', 671,
        'W', 261,
        'w', 261,
        'Y', 280,
        'y', 280,
      );
      END_STATE();
    case 181:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(464);
      END_STATE();
    case 182:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 183:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 184:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 185:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 186:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 187:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 188:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 189:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 190:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 191:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(686);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 196:
      ADVANCE_MAP(
        'D', 111,
        'd', 111,
        'F', 368,
        'f', 368,
        'M', 490,
        'm', 490,
        'Q', 679,
        'q', 679,
        'W', 282,
        'w', 282,
        'Y', 288,
        'y', 288,
      );
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 200:
      ADVANCE_MAP(
        'E', 157,
        'e', 157,
        'I', 187,
        'i', 187,
        'N', 362,
        'n', 362,
        'P', 276,
        'p', 276,
        'T', 85,
        't', 85,
        'U', 495,
        'u', 495,
        'Y', 599,
        'y', 599,
      );
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(859);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(832);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(852);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(848);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(581);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(416);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 295:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(300);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(819);
      END_STATE();
    case 296:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(300);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 297:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(794);
      END_STATE();
    case 298:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 299:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(357);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 300:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(596);
      END_STATE();
    case 301:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(478);
      END_STATE();
    case 302:
      ADVANCE_MAP(
        'F', 367,
        'f', 367,
        'M', 488,
        'm', 488,
        'Q', 678,
        'q', 678,
        'W', 273,
        'w', 273,
        'Y', 287,
        'y', 287,
      );
      END_STATE();
    case 303:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(326);
      END_STATE();
    case 304:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(771);
      END_STATE();
    case 305:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(808);
      END_STATE();
    case 306:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(839);
      END_STATE();
    case 307:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(767);
      END_STATE();
    case 308:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(788);
      END_STATE();
    case 309:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(328);
      END_STATE();
    case 310:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(721);
      END_STATE();
    case 311:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(451);
      END_STATE();
    case 312:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(635);
      END_STATE();
    case 313:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(253);
      END_STATE();
    case 314:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(549);
      END_STATE();
    case 315:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(475);
      END_STATE();
    case 316:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 317:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 318:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(783);
      END_STATE();
    case 319:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(869);
      END_STATE();
    case 320:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(871);
      END_STATE();
    case 321:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(870);
      END_STATE();
    case 322:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(781);
      END_STATE();
    case 323:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(332);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 324:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(482);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 325:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(201);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 326:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(394);
      END_STATE();
    case 327:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(572);
      END_STATE();
    case 328:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(615);
      END_STATE();
    case 329:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(586);
      END_STATE();
    case 330:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(347);
      END_STATE();
    case 331:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 332:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 333:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 334:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(589);
      END_STATE();
    case 335:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 336:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 337:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 338:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(598);
      END_STATE();
    case 339:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 340:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 341:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(430);
      END_STATE();
    case 342:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 343:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 344:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 345:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(432);
      END_STATE();
    case 346:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 347:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(434);
      END_STATE();
    case 348:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 349:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(629);
      END_STATE();
    case 351:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 352:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(439);
      END_STATE();
    case 354:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(427);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(354);
      END_STATE();
    case 355:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(503);
      END_STATE();
    case 363:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 364:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(663);
      END_STATE();
    case 365:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 366:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(605);
      END_STATE();
    case 367:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(606);
      END_STATE();
    case 368:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 369:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(778);
      END_STATE();
    case 370:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(866);
      END_STATE();
    case 371:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(868);
      END_STATE();
    case 372:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(867);
      END_STATE();
    case 373:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(203);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(343);
      END_STATE();
    case 374:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(203);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(343);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(622);
      END_STATE();
    case 375:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(344);
      END_STATE();
    case 376:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(572);
      END_STATE();
    case 377:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(348);
      END_STATE();
    case 378:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(586);
      END_STATE();
    case 379:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(755);
      END_STATE();
    case 380:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(891);
      END_STATE();
    case 381:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(756);
      END_STATE();
    case 382:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 383:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 384:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 385:
      ADVANCE_MAP(
        'L', 588,
        'l', 588,
        'M', 92,
        'm', 92,
        'N', 168,
        'n', 168,
        'V', 228,
        'v', 228,
        'X', 146,
        'x', 146,
      );
      END_STATE();
    case 386:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(588);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(168);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(146);
      END_STATE();
    case 387:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 388:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 389:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(674);
      END_STATE();
    case 390:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(456);
      END_STATE();
    case 391:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 392:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(229);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 394:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(361);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 396:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 397:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 398:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(583);
      END_STATE();
    case 400:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(461);
      END_STATE();
    case 401:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 402:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(593);
      END_STATE();
    case 403:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(358);
      END_STATE();
    case 404:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(675);
      END_STATE();
    case 405:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 406:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 407:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 408:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 409:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 410:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(809);
      END_STATE();
    case 411:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(793);
      END_STATE();
    case 412:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(813);
      END_STATE();
    case 413:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 414:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 415:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(489);
      END_STATE();
    case 416:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 417:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(711);
      END_STATE();
    case 418:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 419:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(491);
      END_STATE();
    case 420:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 421:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 422:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(798);
      END_STATE();
    case 423:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(797);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 424:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(775);
      END_STATE();
    case 425:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(846);
      END_STATE();
    case 426:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(782);
      END_STATE();
    case 427:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(860);
      END_STATE();
    case 428:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 429:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 430:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 431:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 432:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 433:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 434:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 435:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 436:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(625);
      END_STATE();
    case 437:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 438:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 439:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 440:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(575);
      END_STATE();
    case 441:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(628);
      END_STATE();
    case 442:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(630);
      END_STATE();
    case 443:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(632);
      END_STATE();
    case 444:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(634);
      END_STATE();
    case 445:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 446:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 447:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 448:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 449:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(655);
      END_STATE();
    case 450:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 451:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(886);
      END_STATE();
    case 452:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(667);
      END_STATE();
    case 453:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(684);
      END_STATE();
    case 454:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 455:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 456:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 457:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(412);
      END_STATE();
    case 458:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(690);
      END_STATE();
    case 459:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 460:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 461:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(691);
      END_STATE();
    case 462:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 463:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 464:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 465:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 466:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 467:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 468:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 469:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 470:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 471:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 472:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 473:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 474:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(532);
      END_STATE();
    case 475:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 476:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(398);
      END_STATE();
    case 477:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(553);
      END_STATE();
    case 478:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(556);
      END_STATE();
    case 479:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 480:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 481:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(669);
      END_STATE();
    case 482:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 483:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 484:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 485:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(541);
      END_STATE();
    case 486:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 487:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 488:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 489:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 490:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 491:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 492:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 493:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 494:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(718);
      END_STATE();
    case 495:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(504);
      END_STATE();
    case 496:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(232);
      END_STATE();
    case 497:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      END_STATE();
    case 498:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(577);
      END_STATE();
    case 499:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 500:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 501:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 502:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 503:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(500);
      END_STATE();
    case 504:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(468);
      END_STATE();
    case 505:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(662);
      END_STATE();
    case 506:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(671);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(280);
      END_STATE();
    case 507:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(679);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(288);
      END_STATE();
    case 508:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(680);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(289);
      END_STATE();
    case 509:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(681);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(290);
      END_STATE();
    case 510:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(682);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(291);
      END_STATE();
    case 511:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(801);
      END_STATE();
    case 512:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(705);
      END_STATE();
    case 513:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 514:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(759);
      END_STATE();
    case 515:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(878);
      END_STATE();
    case 516:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(879);
      END_STATE();
    case 517:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(877);
      END_STATE();
    case 518:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(875);
      END_STATE();
    case 519:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(876);
      END_STATE();
    case 520:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(874);
      END_STATE();
    case 521:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(884);
      END_STATE();
    case 522:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(885);
      END_STATE();
    case 523:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(883);
      END_STATE();
    case 524:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(881);
      END_STATE();
    case 525:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(882);
      END_STATE();
    case 526:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(880);
      END_STATE();
    case 527:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(818);
      END_STATE();
    case 528:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 529:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 530:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 531:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 532:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(702);
      END_STATE();
    case 533:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 534:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(703);
      END_STATE();
    case 535:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 536:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 537:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 538:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(704);
      END_STATE();
    case 539:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 540:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 541:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 542:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 543:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(633);
      END_STATE();
    case 544:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 545:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 546:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 547:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(722);
      END_STATE();
    case 548:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(586);
      END_STATE();
    case 549:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(481);
      END_STATE();
    case 550:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 551:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 552:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 553:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(501);
      END_STATE();
    case 554:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 555:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 556:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 557:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 558:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 559:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(644);
      END_STATE();
    case 560:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(647);
      END_STATE();
    case 561:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(648);
      END_STATE();
    case 562:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(649);
      END_STATE();
    case 563:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(650);
      END_STATE();
    case 564:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(652);
      END_STATE();
    case 565:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(653);
      END_STATE();
    case 566:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(654);
      END_STATE();
    case 567:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 568:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 569:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(753);
      END_STATE();
    case 570:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(862);
      END_STATE();
    case 571:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(861);
      END_STATE();
    case 572:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(886);
      END_STATE();
    case 573:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(872);
      END_STATE();
    case 574:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(873);
      END_STATE();
    case 575:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(828);
      END_STATE();
    case 576:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(829);
      END_STATE();
    case 577:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(790);
      END_STATE();
    case 578:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 579:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 580:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 581:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      END_STATE();
    case 582:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 583:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(719);
      END_STATE();
    case 584:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(656);
      END_STATE();
    case 585:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(619);
      END_STATE();
    case 586:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(62);
      END_STATE();
    case 587:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      END_STATE();
    case 588:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(202);
      END_STATE();
    case 589:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(346);
      END_STATE();
    case 590:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      END_STATE();
    case 591:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 592:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(335);
      END_STATE();
    case 593:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      END_STATE();
    case 594:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 595:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(616);
      END_STATE();
    case 596:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(250);
      END_STATE();
    case 597:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(617);
      END_STATE();
    case 598:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      END_STATE();
    case 599:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(639);
      END_STATE();
    case 600:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(600);
      END_STATE();
    case 601:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(657);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(334);
      END_STATE();
    case 602:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(640);
      END_STATE();
    case 603:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(659);
      END_STATE();
    case 604:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      END_STATE();
    case 605:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 606:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 607:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 608:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(693);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(664);
      END_STATE();
    case 609:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(820);
      END_STATE();
    case 610:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(835);
      END_STATE();
    case 611:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(837);
      END_STATE();
    case 612:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(785);
      END_STATE();
    case 613:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(780);
      END_STATE();
    case 614:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(840);
      END_STATE();
    case 615:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(776);
      END_STATE();
    case 616:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(845);
      END_STATE();
    case 617:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(844);
      END_STATE();
    case 618:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(826);
      END_STATE();
    case 619:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 620:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 621:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      END_STATE();
    case 622:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(685);
      END_STATE();
    case 623:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      END_STATE();
    case 624:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 625:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(329);
      END_STATE();
    case 626:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(720);
      END_STATE();
    case 627:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 628:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 629:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(710);
      END_STATE();
    case 630:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 631:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 632:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(321);
      END_STATE();
    case 633:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(591);
      END_STATE();
    case 634:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 635:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      END_STATE();
    case 636:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(706);
      END_STATE();
    case 637:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      END_STATE();
    case 638:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 639:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(238);
      END_STATE();
    case 640:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 641:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 642:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      END_STATE();
    case 643:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(249);
      END_STATE();
    case 644:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 645:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 646:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      END_STATE();
    case 647:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(265);
      END_STATE();
    case 648:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      END_STATE();
    case 649:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      END_STATE();
    case 650:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 651:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      END_STATE();
    case 652:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 653:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 654:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(271);
      END_STATE();
    case 655:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      END_STATE();
    case 656:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      END_STATE();
    case 657:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 658:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      END_STATE();
    case 659:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 660:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(355);
      END_STATE();
    case 661:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(474);
      END_STATE();
    case 662:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      END_STATE();
    case 663:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(479);
      END_STATE();
    case 664:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 665:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 666:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(584);
      END_STATE();
    case 667:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(494);
      END_STATE();
    case 668:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 669:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(498);
      END_STATE();
    case 670:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(533);
      END_STATE();
    case 671:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 672:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 673:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(550);
      END_STATE();
    case 674:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 675:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 676:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 677:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 678:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 679:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 680:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 681:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 682:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 683:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(341);
      END_STATE();
    case 684:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(209);
      END_STATE();
    case 685:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(359);
      END_STATE();
    case 686:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(363);
      END_STATE();
    case 687:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(807);
      END_STATE();
    case 688:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(833);
      END_STATE();
    case 689:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(773);
      END_STATE();
    case 690:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(865);
      END_STATE();
    case 691:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(834);
      END_STATE();
    case 692:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 693:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(467);
      END_STATE();
    case 694:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(603);
      END_STATE();
    case 695:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(618);
      END_STATE();
    case 696:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(189);
      END_STATE();
    case 697:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 698:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(864);
      END_STATE();
    case 699:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(800);
      END_STATE();
    case 700:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(841);
      END_STATE();
    case 701:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(863);
      END_STATE();
    case 702:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(791);
      END_STATE();
    case 703:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(830);
      END_STATE();
    case 704:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(792);
      END_STATE();
    case 705:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(623);
      END_STATE();
    case 706:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(160);
      END_STATE();
    case 707:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(572);
      END_STATE();
    case 708:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(573);
      END_STATE();
    case 709:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(574);
      END_STATE();
    case 710:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 711:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 712:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(586);
      END_STATE();
    case 713:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(904);
      END_STATE();
    case 714:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(738);
      END_STATE();
    case 715:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(16);
      END_STATE();
    case 716:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(29);
      END_STATE();
    case 717:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(162);
      END_STATE();
    case 718:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 719:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 720:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(354);
      END_STATE();
    case 721:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(600);
      END_STATE();
    case 722:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 723:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(732);
      END_STATE();
    case 724:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(733);
      END_STATE();
    case 725:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(737);
      END_STATE();
    case 726:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 727:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(904);
      END_STATE();
    case 728:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(902);
      END_STATE();
    case 729:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(903);
      END_STATE();
    case 730:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(904);
      END_STATE();
    case 731:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 732:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 733:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(905);
      END_STATE();
    case 734:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 735:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 736:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(907);
      END_STATE();
    case 737:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 738:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 739:
      ADVANCE_MAP(
        '"', 3,
        '%', 3,
        '\'', 3,
        'B', 3,
        'F', 3,
        'N', 3,
        'R', 3,
        'T', 3,
        'U', 3,
        '\\', 3,
        '_', 3,
        'b', 3,
        'f', 3,
        'n', 3,
        'r', 3,
        't', 3,
        'u', 3,
      );
      END_STATE();
    case 740:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 741:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '/') ADVANCE(748);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(744);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(747);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(747);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(747);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(747);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(765);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(747);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_find_clause_token1);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_in_clause_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_in_clause_token2);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_in_clause_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_in_type_token1);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_in_type_token2);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_in_type_token3);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_in_type_token4);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_in_type_token5);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_term_separator_start);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_term_separator_end);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '/') ADVANCE(764);
      if (lookahead == '\\') ADVANCE(766);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(765);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '/') ADVANCE(749);
      if (lookahead == '\\') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(765);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == '\\') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(765);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '\\') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(765);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '\\') ADVANCE(766);
      if (lookahead != 0) ADVANCE(765);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_returning_clause_token1);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_using_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_using_clause_token2);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_with_division_expression_token1);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_with_highlight_token1);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_with_metadata_expression_token1);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_with_network_expression_token1);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_with_pricebook_expression_token1);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_with_snippet_expression_token1);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_with_snippet_expression_token2);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_with_spell_correction_expression_token1);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_sosl_with_clause_token1);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_sosl_with_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_soql_using_clause_token1);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token1);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token2);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token3);
      if (lookahead == '_') ADVANCE(112);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token4);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token5);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token6);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token7);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token2);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_when_expression_token1);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_when_expression_token2);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_else_expression_token1);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_for_type_token2);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(659);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_having_clause_token1);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_fields_type_token1);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_fields_type_token2);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_and_expression_token1);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_or_expression_token1);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_or_expression_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_not_expression_token1);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_not_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token1);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token2);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token3);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_with_user_id_type_token1);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_expression_token1);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token1);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token2);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token3);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_with_data_cat_expression_token1);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token1);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token2);
      if (lookahead == '_') ADVANCE(472);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token3);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token4);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_update_type_token1);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_update_type_token2);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token1);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token2);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(856);
      if (lookahead == '>') ADVANCE(854);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(858);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_value_comparison_operator_token1);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token1);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token2);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token3);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_date_literal_token1);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_date_literal_token2);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_date_literal_token3);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_date_literal_token4);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_date_literal_token5);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_date_literal_token6);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_date_literal_token7);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_date_literal_token8);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_date_literal_token9);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_date_literal_token10);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_date_literal_token11);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_date_literal_token12);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_date_literal_token13);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_date_literal_token14);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_date_literal_token15);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_date_literal_token16);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_date_literal_token17);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_date_literal_token18);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_date_literal_token19);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_date_literal_token20);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_date_literal_token21);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_date_literal_token22);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_date_literal_token23);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_date_literal_with_param_token1);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_bound_apex_expression);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(719);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(900);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(894);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(894);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(896);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(901);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(895);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(900);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(900);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(735);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(902);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(903);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_date_time);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_currency_literal);
      if (lookahead == '.') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_currency_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(907);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(927);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(921);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(914);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
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
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
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
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
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
  [133] = {.lex_state = 5},
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
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 5},
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
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 5},
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
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 12},
  [236] = {.lex_state = 12},
  [237] = {.lex_state = 12},
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
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
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
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 11},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 7},
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
  [329] = {.lex_state = 7},
  [330] = {.lex_state = 7},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 6},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 2},
  [340] = {.lex_state = 2},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 7},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 7},
  [346] = {.lex_state = 7},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 6},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 7},
  [353] = {.lex_state = 6},
  [354] = {.lex_state = 6},
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
  [369] = {.lex_state = 1},
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
  [390] = {.lex_state = 6},
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
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
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
  [508] = {.lex_state = 11},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 11},
  [511] = {.lex_state = 11},
  [512] = {.lex_state = 11},
  [513] = {.lex_state = 11},
  [514] = {.lex_state = 11},
  [515] = {.lex_state = 11},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 11},
  [518] = {.lex_state = 11},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 11},
  [521] = {.lex_state = 11},
  [522] = {.lex_state = 11},
  [523] = {.lex_state = 11},
  [524] = {.lex_state = 11},
  [525] = {.lex_state = 11},
  [526] = {.lex_state = 11},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 1},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 6},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 11},
  [545] = {.lex_state = 6},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 6},
  [550] = {.lex_state = 6},
  [551] = {.lex_state = 6},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 6},
  [556] = {.lex_state = 6},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 6},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 6},
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
  [578] = {.lex_state = 0},
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
  [601] = {.lex_state = 6},
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
  [641] = {.lex_state = 6},
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
  [661] = {.lex_state = 744},
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
  [695] = {.lex_state = 1},
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
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 1},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
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
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 6},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 6},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 6},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 20},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 6},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 6},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 6},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 6},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 6},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 744},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {(TSStateId)(-1)},
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
    [aux_sym_fields_type_token1] = ACTIONS(1),
    [aux_sym_fields_type_token2] = ACTIONS(1),
    [aux_sym_where_clause_token1] = ACTIONS(1),
    [aux_sym_and_expression_token1] = ACTIONS(1),
    [aux_sym_or_expression_token1] = ACTIONS(1),
    [aux_sym_not_expression_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(848),
    [sym_header_comment] = STATE(337),
    [sym_formatting_comment] = STATE(1),
    [sym__query_expression] = STATE(598),
    [sym_sosl_query_body] = STATE(632),
    [sym_find_clause] = STATE(25),
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
    STATE(363), 1,
      sym__soql_literal,
    STATE(546), 1,
      sym_select_clause,
    STATE(855), 1,
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
    STATE(54), 4,
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
    STATE(531), 1,
      sym__soql_literal,
    STATE(546), 1,
      sym_select_clause,
    STATE(876), 1,
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
    STATE(54), 4,
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
    STATE(79), 1,
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
    STATE(54), 4,
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
    STATE(554), 1,
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
    STATE(54), 4,
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
    ACTIONS(35), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(37), 1,
      sym_bound_apex_expression,
    ACTIONS(39), 1,
      aux_sym_null_literal_token1,
    STATE(6), 1,
      sym_formatting_comment,
    STATE(512), 1,
      sym__soql_literal,
    ACTIONS(31), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(41), 2,
      sym_string_literal,
      sym_date_time,
    ACTIONS(43), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    STATE(514), 4,
      sym_boolean,
      sym_date_literal,
      sym_date_literal_with_param,
      sym_null_literal,
    ACTIONS(33), 23,
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
    ACTIONS(47), 4,
      sym_int,
      sym_decimal,
      sym_date,
      sym_currency_literal,
    ACTIONS(45), 30,
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
  [383] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(53), 1,
      anon_sym_DOT,
    STATE(8), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(49), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [425] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(60), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(9), 1,
      sym_formatting_comment,
    ACTIONS(56), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [469] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(10), 1,
      sym_formatting_comment,
    ACTIONS(49), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 25,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
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
      anon_sym_DOT,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [508] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(11), 1,
      sym_formatting_comment,
    ACTIONS(62), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(64), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [552] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(12), 1,
      sym_formatting_comment,
    ACTIONS(68), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(70), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [587] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(13), 1,
      sym_formatting_comment,
    ACTIONS(62), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(64), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [622] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(14), 1,
      sym_formatting_comment,
    ACTIONS(72), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(74), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [657] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(15), 1,
      sym_formatting_comment,
    ACTIONS(76), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(78), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [692] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(16), 1,
      sym_formatting_comment,
    ACTIONS(80), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(82), 19,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
  [725] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    ACTIONS(86), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(88), 1,
      aux_sym_soql_using_clause_token1,
    ACTIONS(90), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_where_clause_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    STATE(17), 1,
      sym_formatting_comment,
    STATE(21), 1,
      sym_soql_using_clause,
    STATE(30), 1,
      sym_where_clause,
    STATE(42), 1,
      sym_soql_with_clause,
    STATE(71), 1,
      sym_group_by_clause,
    STATE(107), 1,
      sym_order_by_clause,
    STATE(194), 1,
      sym_limit_clause,
    STATE(326), 1,
      sym_offset_clause,
    STATE(527), 1,
      sym_for_clause,
    STATE(871), 1,
      sym_update_clause,
  [789] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(104), 1,
      aux_sym_with_division_expression_token1,
    ACTIONS(106), 1,
      aux_sym_with_highlight_token1,
    ACTIONS(108), 1,
      aux_sym_with_metadata_expression_token1,
    ACTIONS(110), 1,
      aux_sym_with_network_expression_token1,
    ACTIONS(112), 1,
      aux_sym_with_pricebook_expression_token1,
    ACTIONS(114), 1,
      aux_sym_with_snippet_expression_token1,
    ACTIONS(116), 1,
      aux_sym_with_spell_correction_expression_token1,
    ACTIONS(118), 1,
      aux_sym_with_data_cat_expression_token1,
    STATE(18), 1,
      sym_formatting_comment,
    STATE(247), 1,
      sym_sosl_with_type,
    STATE(318), 8,
      sym_with_division_expression,
      sym_with_highlight,
      sym_with_metadata_expression,
      sym_with_network_expression,
      sym_with_pricebook_expression,
      sym_with_snippet_expression,
      sym_with_spell_correction_expression,
      sym_with_data_cat_expression,
  [833] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(120), 1,
      aux_sym_in_clause_token1,
    STATE(4), 1,
      sym_value_comparison_operator,
    STATE(19), 1,
      sym_formatting_comment,
    STATE(280), 1,
      sym__comparison,
    STATE(349), 1,
      sym_set_comparison_operator,
    ACTIONS(124), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(78), 2,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(126), 3,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
    ACTIONS(122), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [873] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(120), 1,
      aux_sym_in_clause_token1,
    STATE(4), 1,
      sym_value_comparison_operator,
    STATE(20), 1,
      sym_formatting_comment,
    STATE(86), 1,
      sym__comparison,
    STATE(349), 1,
      sym_set_comparison_operator,
    ACTIONS(124), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(78), 2,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(126), 3,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
    ACTIONS(122), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [913] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(86), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(90), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(96), 1,
      aux_sym_where_clause_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_formatting_comment,
    STATE(31), 1,
      sym_where_clause,
    STATE(43), 1,
      sym_soql_with_clause,
    STATE(62), 1,
      sym_group_by_clause,
    STATE(113), 1,
      sym_order_by_clause,
    STATE(167), 1,
      sym_limit_clause,
    STATE(245), 1,
      sym_offset_clause,
    STATE(397), 1,
      sym_for_clause,
    STATE(676), 1,
      sym_update_clause,
  [971] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(120), 1,
      aux_sym_in_clause_token1,
    STATE(6), 1,
      sym_value_comparison_operator,
    STATE(22), 1,
      sym_formatting_comment,
    STATE(344), 1,
      sym_set_comparison_operator,
    STATE(523), 1,
      sym__comparison,
    ACTIONS(124), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(508), 2,
      sym__value_comparison,
      sym__set_comparison,
    ACTIONS(126), 3,
      aux_sym_set_comparison_operator_token1,
      aux_sym_set_comparison_operator_token2,
      aux_sym_set_comparison_operator_token3,
    ACTIONS(122), 6,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_value_comparison_operator_token1,
  [1011] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(130), 1,
      aux_sym_in_clause_token2,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(136), 1,
      aux_sym_function_expression_token1,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(23), 1,
      sym_formatting_comment,
    STATE(65), 1,
      sym_selected_fields,
    STATE(104), 1,
      sym__value_expression,
    STATE(106), 1,
      sym_dotted_identifier,
    STATE(150), 1,
      sym__selectable_expression,
    STATE(672), 1,
      sym__function_name,
    STATE(105), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(134), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1058] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(130), 1,
      aux_sym_in_clause_token2,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(140), 1,
      aux_sym_function_expression_token1,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(24), 1,
      sym_formatting_comment,
    STATE(343), 1,
      sym__value_expression,
    STATE(346), 1,
      sym_dotted_identifier,
    STATE(380), 1,
      sym__selectable_expression,
    STATE(566), 1,
      sym__function_name,
    STATE(872), 1,
      sym_count_expression,
    STATE(345), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(134), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1105] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      aux_sym_in_clause_token1,
    ACTIONS(148), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(150), 1,
      aux_sym_sosl_with_clause_token1,
    STATE(25), 1,
      sym_formatting_comment,
    STATE(41), 1,
      sym_in_clause,
    STATE(48), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(88), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(227), 1,
      sym_returning_clause,
    STATE(316), 1,
      sym_sosl_with_clause,
    STATE(319), 1,
      sym_limit_clause,
    STATE(414), 1,
      sym_offset_clause,
    STATE(825), 1,
      sym_update_clause,
  [1157] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym_formatting_comment,
    STATE(34), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(152), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(154), 8,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1187] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(158), 1,
      anon_sym_DOT,
    STATE(27), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(51), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(49), 8,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1215] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      aux_sym_not_expression_token1,
    ACTIONS(165), 1,
      aux_sym_function_expression_token1,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(13), 1,
      sym_dotted_identifier,
    STATE(22), 1,
      sym__value_expression,
    STATE(28), 1,
      sym_formatting_comment,
    STATE(307), 1,
      sym__condition_expression,
    STATE(518), 1,
      sym_comparison_expression,
    STATE(883), 1,
      sym__boolean_expression,
    STATE(899), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(157), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1261] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(163), 1,
      aux_sym_not_expression_token1,
    ACTIONS(165), 1,
      aux_sym_function_expression_token1,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(29), 1,
      sym_formatting_comment,
    STATE(50), 1,
      sym__condition_expression,
    STATE(99), 1,
      sym_comparison_expression,
    STATE(156), 1,
      sym__boolean_expression,
    STATE(899), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(157), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1307] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(86), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(90), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      sym_formatting_comment,
    STATE(44), 1,
      sym_soql_with_clause,
    STATE(64), 1,
      sym_group_by_clause,
    STATE(115), 1,
      sym_order_by_clause,
    STATE(174), 1,
      sym_limit_clause,
    STATE(266), 1,
      sym_offset_clause,
    STATE(416), 1,
      sym_for_clause,
    STATE(851), 1,
      sym_update_clause,
  [1359] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(86), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(90), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_formatting_comment,
    STATE(47), 1,
      sym_soql_with_clause,
    STATE(70), 1,
      sym_group_by_clause,
    STATE(122), 1,
      sym_order_by_clause,
    STATE(168), 1,
      sym_limit_clause,
    STATE(276), 1,
      sym_offset_clause,
    STATE(530), 1,
      sym_for_clause,
    STATE(880), 1,
      sym_update_clause,
  [1411] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      aux_sym_not_expression_token1,
    ACTIONS(165), 1,
      aux_sym_function_expression_token1,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(13), 1,
      sym_dotted_identifier,
    STATE(22), 1,
      sym__value_expression,
    STATE(32), 1,
      sym_formatting_comment,
    STATE(307), 1,
      sym__condition_expression,
    STATE(518), 1,
      sym_comparison_expression,
    STATE(570), 1,
      sym__boolean_expression,
    STATE(899), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(157), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1457] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(163), 1,
      aux_sym_not_expression_token1,
    ACTIONS(165), 1,
      aux_sym_function_expression_token1,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(33), 1,
      sym_formatting_comment,
    STATE(50), 1,
      sym__condition_expression,
    STATE(99), 1,
      sym_comparison_expression,
    STATE(220), 1,
      sym__boolean_expression,
    STATE(899), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(157), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1503] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(34), 1,
      sym_formatting_comment,
    ACTIONS(58), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(56), 8,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1533] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(177), 1,
      aux_sym_or_expression_token1,
    STATE(35), 1,
      sym_formatting_comment,
    ACTIONS(175), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1559] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(130), 1,
      aux_sym_in_clause_token2,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(136), 1,
      aux_sym_function_expression_token1,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(36), 1,
      sym_formatting_comment,
    STATE(104), 1,
      sym__value_expression,
    STATE(106), 1,
      sym_dotted_identifier,
    STATE(158), 1,
      sym__selectable_expression,
    STATE(672), 1,
      sym__function_name,
    STATE(105), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(134), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1603] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(130), 1,
      aux_sym_in_clause_token2,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      aux_sym_type_of_clause_token1,
    ACTIONS(140), 1,
      aux_sym_function_expression_token1,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(37), 1,
      sym_formatting_comment,
    STATE(158), 1,
      sym__selectable_expression,
    STATE(343), 1,
      sym__value_expression,
    STATE(346), 1,
      sym_dotted_identifier,
    STATE(901), 1,
      sym__function_name,
    STATE(345), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(134), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1647] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(38), 1,
      sym_formatting_comment,
    ACTIONS(51), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_DOT,
    ACTIONS(49), 8,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1672] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(187), 1,
      sym_identifier,
    STATE(39), 1,
      sym_formatting_comment,
    STATE(53), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(181), 4,
      anon_sym_RPAREN,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(183), 6,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [1705] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(40), 1,
      sym_formatting_comment,
    ACTIONS(152), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(154), 8,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1729] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(148), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(150), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_formatting_comment,
    STATE(45), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(85), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(227), 1,
      sym_returning_clause,
    STATE(313), 1,
      sym_limit_clause,
    STATE(316), 1,
      sym_sosl_with_clause,
    STATE(410), 1,
      sym_offset_clause,
    STATE(760), 1,
      sym_update_clause,
  [1775] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym_formatting_comment,
    STATE(66), 1,
      sym_group_by_clause,
    STATE(102), 1,
      sym_order_by_clause,
    STATE(183), 1,
      sym_limit_clause,
    STATE(278), 1,
      sym_offset_clause,
    STATE(427), 1,
      sym_for_clause,
    STATE(567), 1,
      sym_update_clause,
  [1821] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      sym_formatting_comment,
    STATE(81), 1,
      sym_group_by_clause,
    STATE(123), 1,
      sym_order_by_clause,
    STATE(160), 1,
      sym_limit_clause,
    STATE(327), 1,
      sym_offset_clause,
    STATE(538), 1,
      sym_for_clause,
    STATE(903), 1,
      sym_update_clause,
  [1867] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      sym_formatting_comment,
    STATE(73), 1,
      sym_group_by_clause,
    STATE(125), 1,
      sym_order_by_clause,
    STATE(175), 1,
      sym_limit_clause,
    STATE(315), 1,
      sym_offset_clause,
    STATE(362), 1,
      sym_for_clause,
    STATE(753), 1,
      sym_update_clause,
  [1913] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(148), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(150), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_formatting_comment,
    STATE(101), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(151), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(227), 1,
      sym_returning_clause,
    STATE(314), 1,
      sym_limit_clause,
    STATE(316), 1,
      sym_sosl_with_clause,
    STATE(539), 1,
      sym_offset_clause,
    STATE(575), 1,
      sym_update_clause,
  [1959] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(185), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(187), 1,
      sym_identifier,
    STATE(46), 1,
      sym_formatting_comment,
    ACTIONS(199), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(201), 6,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [1987] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(90), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_formatting_comment,
    STATE(74), 1,
      sym_group_by_clause,
    STATE(129), 1,
      sym_order_by_clause,
    STATE(188), 1,
      sym_limit_clause,
    STATE(250), 1,
      sym_offset_clause,
    STATE(389), 1,
      sym_for_clause,
    STATE(609), 1,
      sym_update_clause,
  [2033] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(148), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(150), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_formatting_comment,
    STATE(85), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(151), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(227), 1,
      sym_returning_clause,
    STATE(313), 1,
      sym_limit_clause,
    STATE(316), 1,
      sym_sosl_with_clause,
    STATE(410), 1,
      sym_offset_clause,
    STATE(760), 1,
      sym_update_clause,
  [2079] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(49), 1,
      sym_formatting_comment,
    STATE(108), 1,
      sym_order_direction,
    STATE(230), 1,
      sym_order_null_direction,
    ACTIONS(207), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(209), 2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
    ACTIONS(205), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [2108] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(213), 1,
      aux_sym_and_expression_token1,
    ACTIONS(215), 1,
      aux_sym_or_expression_token1,
    STATE(50), 1,
      sym_formatting_comment,
    STATE(84), 1,
      aux_sym_and_expression_repeat1,
    STATE(96), 1,
      aux_sym_or_expression_repeat1,
    ACTIONS(211), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2137] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(219), 1,
      aux_sym_or_expression_token1,
    STATE(51), 1,
      sym_formatting_comment,
    ACTIONS(217), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2160] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_DOT,
    STATE(52), 1,
      sym_formatting_comment,
    STATE(76), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(64), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(62), 6,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [2189] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      sym_formatting_comment,
    STATE(57), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(223), 10,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2214] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(227), 1,
      aux_sym_or_expression_token1,
    STATE(54), 1,
      sym_formatting_comment,
    ACTIONS(225), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2237] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(231), 1,
      aux_sym_or_expression_token1,
    STATE(55), 1,
      sym_formatting_comment,
    ACTIONS(229), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2260] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_from_clause_repeat1,
    STATE(56), 1,
      sym_formatting_comment,
    ACTIONS(181), 10,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2285] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(57), 2,
      sym_formatting_comment,
      aux_sym_from_clause_repeat1,
    ACTIONS(199), 10,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2308] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(238), 1,
      aux_sym_or_expression_token1,
    STATE(58), 1,
      sym_formatting_comment,
    ACTIONS(236), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2331] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(242), 1,
      aux_sym_or_expression_token1,
    STATE(59), 1,
      sym_formatting_comment,
    ACTIONS(240), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2354] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(246), 1,
      aux_sym_or_expression_token1,
    STATE(60), 1,
      sym_formatting_comment,
    ACTIONS(244), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2376] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(250), 1,
      aux_sym_and_expression_token1,
    STATE(61), 1,
      sym_formatting_comment,
    STATE(75), 1,
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
  [2400] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_formatting_comment,
    STATE(121), 1,
      sym_order_by_clause,
    STATE(165), 1,
      sym_limit_clause,
    STATE(264), 1,
      sym_offset_clause,
    STATE(528), 1,
      sym_for_clause,
    STATE(868), 1,
      sym_update_clause,
  [2440] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(256), 1,
      aux_sym_or_expression_token1,
    STATE(63), 1,
      sym_formatting_comment,
    ACTIONS(254), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2462] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      sym_formatting_comment,
    STATE(124), 1,
      sym_order_by_clause,
    STATE(173), 1,
      sym_limit_clause,
    STATE(309), 1,
      sym_offset_clause,
    STATE(360), 1,
      sym_for_clause,
    STATE(655), 1,
      sym_update_clause,
  [2502] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_where_clause_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    ACTIONS(262), 1,
      aux_sym_using_clause_token1,
    STATE(65), 1,
      sym_formatting_comment,
    STATE(118), 1,
      sym_using_clause,
    STATE(163), 1,
      sym_where_clause,
    STATE(243), 1,
      sym_order_by_clause,
    STATE(541), 1,
      sym_limit_clause,
    STATE(723), 1,
      sym_offset_clause,
  [2542] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_formatting_comment,
    STATE(126), 1,
      sym_order_by_clause,
    STATE(178), 1,
      sym_limit_clause,
    STATE(323), 1,
      sym_offset_clause,
    STATE(367), 1,
      sym_for_clause,
    STATE(605), 1,
      sym_update_clause,
  [2582] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(67), 1,
      sym_formatting_comment,
    ACTIONS(199), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2602] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(68), 1,
      sym_formatting_comment,
    ACTIONS(266), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2622] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(270), 1,
      aux_sym_or_expression_token1,
    STATE(69), 1,
      sym_formatting_comment,
    ACTIONS(268), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2644] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      sym_formatting_comment,
    STATE(128), 1,
      sym_order_by_clause,
    STATE(186), 1,
      sym_limit_clause,
    STATE(248), 1,
      sym_offset_clause,
    STATE(388), 1,
      sym_for_clause,
    STATE(590), 1,
      sym_update_clause,
  [2684] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_formatting_comment,
    STATE(114), 1,
      sym_order_by_clause,
    STATE(169), 1,
      sym_limit_clause,
    STATE(251), 1,
      sym_offset_clause,
    STATE(407), 1,
      sym_for_clause,
    STATE(764), 1,
      sym_update_clause,
  [2724] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(72), 1,
      sym_formatting_comment,
    ACTIONS(276), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_soql_using_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2744] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_formatting_comment,
    STATE(131), 1,
      sym_order_by_clause,
    STATE(193), 1,
      sym_limit_clause,
    STATE(263), 1,
      sym_offset_clause,
    STATE(413), 1,
      sym_for_clause,
    STATE(780), 1,
      sym_update_clause,
  [2784] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_formatting_comment,
    STATE(132), 1,
      sym_order_by_clause,
    STATE(200), 1,
      sym_limit_clause,
    STATE(279), 1,
      sym_offset_clause,
    STATE(440), 1,
      sym_for_clause,
    STATE(592), 1,
      sym_update_clause,
  [2824] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(250), 1,
      aux_sym_and_expression_token1,
    STATE(75), 1,
      sym_formatting_comment,
    STATE(77), 1,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(282), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2848] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(221), 1,
      anon_sym_DOT,
    STATE(76), 1,
      sym_formatting_comment,
    STATE(80), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(58), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(56), 6,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [2874] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(286), 1,
      aux_sym_and_expression_token1,
    STATE(77), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(284), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2896] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(291), 1,
      aux_sym_or_expression_token1,
    STATE(78), 1,
      sym_formatting_comment,
    ACTIONS(289), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2918] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(295), 1,
      aux_sym_or_expression_token1,
    STATE(79), 1,
      sym_formatting_comment,
    ACTIONS(293), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2940] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_DOT,
    STATE(80), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(51), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(49), 6,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [2964] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_formatting_comment,
    STATE(130), 1,
      sym_order_by_clause,
    STATE(190), 1,
      sym_limit_clause,
    STATE(255), 1,
      sym_offset_clause,
    STATE(396), 1,
      sym_for_clause,
    STATE(652), 1,
      sym_update_clause,
  [3004] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(165), 1,
      aux_sym_function_expression_token1,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(82), 1,
      sym_formatting_comment,
    STATE(99), 1,
      sym_comparison_expression,
    STATE(116), 1,
      sym__condition_expression,
    STATE(899), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
  [3039] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(165), 1,
      aux_sym_function_expression_token1,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(83), 1,
      sym_formatting_comment,
    STATE(99), 1,
      sym_comparison_expression,
    STATE(117), 1,
      sym__condition_expression,
    STATE(899), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
  [3074] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(213), 1,
      aux_sym_and_expression_token1,
    STATE(84), 1,
      sym_formatting_comment,
    STATE(92), 1,
      aux_sym_and_expression_repeat1,
    ACTIONS(302), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3097] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(150), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_formatting_comment,
    STATE(164), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(314), 1,
      sym_limit_clause,
    STATE(316), 1,
      sym_sosl_with_clause,
    STATE(539), 1,
      sym_offset_clause,
    STATE(575), 1,
      sym_update_clause,
  [3134] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(306), 1,
      aux_sym_or_expression_token1,
    STATE(86), 1,
      sym_formatting_comment,
    ACTIONS(304), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3155] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(118), 1,
      aux_sym_with_data_cat_expression_token1,
    ACTIONS(310), 1,
      aux_sym_with_user_id_type_token1,
    ACTIONS(312), 1,
      aux_sym_with_record_visibility_expression_token1,
    STATE(87), 1,
      sym_formatting_comment,
    STATE(205), 1,
      sym_soql_with_type,
    ACTIONS(308), 3,
      aux_sym_soql_with_type_token1,
      aux_sym_soql_with_type_token2,
      aux_sym_soql_with_type_token3,
    STATE(201), 3,
      sym_with_user_id_type,
      sym_with_record_visibility_expression,
      sym_with_data_cat_expression,
  [3184] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(150), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_formatting_comment,
    STATE(164), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(313), 1,
      sym_limit_clause,
    STATE(316), 1,
      sym_sosl_with_clause,
    STATE(410), 1,
      sym_offset_clause,
    STATE(760), 1,
      sym_update_clause,
  [3221] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(89), 1,
      sym_formatting_comment,
    ACTIONS(314), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3240] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(90), 1,
      sym_formatting_comment,
    ACTIONS(284), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3259] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(318), 1,
      aux_sym_or_expression_token1,
    STATE(91), 1,
      sym_formatting_comment,
    ACTIONS(316), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3280] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(322), 1,
      aux_sym_and_expression_token1,
    STATE(92), 2,
      sym_formatting_comment,
      aux_sym_and_expression_repeat1,
    ACTIONS(320), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3301] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(327), 1,
      aux_sym_or_expression_token1,
    STATE(93), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
    ACTIONS(325), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3322] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(94), 1,
      sym_formatting_comment,
    ACTIONS(51), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      anon_sym_DOT,
    ACTIONS(49), 6,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [3343] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(95), 1,
      sym_formatting_comment,
    ACTIONS(330), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3362] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(215), 1,
      aux_sym_or_expression_token1,
    STATE(93), 1,
      aux_sym_or_expression_repeat1,
    STATE(96), 1,
      sym_formatting_comment,
    ACTIONS(332), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3385] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(165), 1,
      aux_sym_function_expression_token1,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(97), 1,
      sym_formatting_comment,
    STATE(99), 1,
      sym_comparison_expression,
    STATE(142), 1,
      sym__condition_expression,
    STATE(899), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
  [3420] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(98), 1,
      sym_formatting_comment,
    ACTIONS(334), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3439] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(338), 1,
      aux_sym_or_expression_token1,
    STATE(99), 1,
      sym_formatting_comment,
    ACTIONS(336), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3460] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      aux_sym_function_expression_token1,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(13), 1,
      sym_dotted_identifier,
    STATE(22), 1,
      sym__value_expression,
    STATE(100), 1,
      sym_formatting_comment,
    STATE(518), 1,
      sym_comparison_expression,
    STATE(544), 1,
      sym__condition_expression,
    STATE(899), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
  [3495] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(150), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    STATE(101), 1,
      sym_formatting_comment,
    STATE(164), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(310), 1,
      sym_limit_clause,
    STATE(316), 1,
      sym_sosl_with_clause,
    STATE(516), 1,
      sym_offset_clause,
    STATE(836), 1,
      sym_update_clause,
  [3532] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_formatting_comment,
    STATE(180), 1,
      sym_limit_clause,
    STATE(239), 1,
      sym_offset_clause,
    STATE(372), 1,
      sym_for_clause,
    STATE(670), 1,
      sym_update_clause,
  [3566] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(103), 1,
      sym_formatting_comment,
    ACTIONS(70), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(68), 6,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [3586] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(348), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(350), 1,
      sym_identifier,
    STATE(104), 1,
      sym_formatting_comment,
    ACTIONS(344), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(346), 4,
      aux_sym_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [3610] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(105), 1,
      sym_formatting_comment,
    ACTIONS(82), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(80), 6,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [3630] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(106), 1,
      sym_formatting_comment,
    ACTIONS(64), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(62), 6,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [3650] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_formatting_comment,
    STATE(187), 1,
      sym_limit_clause,
    STATE(303), 1,
      sym_offset_clause,
    STATE(442), 1,
      sym_for_clause,
    STATE(602), 1,
      sym_update_clause,
  [3684] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(108), 1,
      sym_formatting_comment,
    STATE(226), 1,
      sym_order_null_direction,
    ACTIONS(209), 2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
    ACTIONS(354), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [3706] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(109), 1,
      sym_formatting_comment,
    ACTIONS(78), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(76), 6,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [3726] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(110), 1,
      sym_formatting_comment,
    ACTIONS(356), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3744] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(111), 1,
      sym_formatting_comment,
    ACTIONS(358), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3762] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      sym_formatting_comment,
    STATE(120), 1,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(362), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3784] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_formatting_comment,
    STATE(171), 1,
      sym_limit_clause,
    STATE(296), 1,
      sym_offset_clause,
    STATE(356), 1,
      sym_for_clause,
    STATE(610), 1,
      sym_update_clause,
  [3818] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_formatting_comment,
    STATE(172), 1,
      sym_limit_clause,
    STATE(304), 1,
      sym_offset_clause,
    STATE(359), 1,
      sym_for_clause,
    STATE(593), 1,
      sym_update_clause,
  [3852] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_formatting_comment,
    STATE(177), 1,
      sym_limit_clause,
    STATE(320), 1,
      sym_offset_clause,
    STATE(366), 1,
      sym_for_clause,
    STATE(580), 1,
      sym_update_clause,
  [3886] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(116), 1,
      sym_formatting_comment,
    ACTIONS(320), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3904] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(370), 1,
      aux_sym_or_expression_token1,
    STATE(117), 1,
      sym_formatting_comment,
    ACTIONS(325), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3924] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(96), 1,
      aux_sym_where_clause_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_formatting_comment,
    STATE(213), 1,
      sym_where_clause,
    STATE(321), 1,
      sym_order_by_clause,
    STATE(434), 1,
      sym_limit_clause,
    STATE(586), 1,
      sym_offset_clause,
  [3958] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(119), 1,
      sym_formatting_comment,
    ACTIONS(74), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(72), 6,
      aux_sym_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [3978] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      sym_formatting_comment,
    STATE(127), 1,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(374), 7,
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
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_formatting_comment,
    STATE(185), 1,
      sym_limit_clause,
    STATE(246), 1,
      sym_offset_clause,
    STATE(386), 1,
      sym_for_clause,
    STATE(581), 1,
      sym_update_clause,
  [4034] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym_formatting_comment,
    STATE(189), 1,
      sym_limit_clause,
    STATE(254), 1,
      sym_offset_clause,
    STATE(395), 1,
      sym_for_clause,
    STATE(636), 1,
      sym_update_clause,
  [4068] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_formatting_comment,
    STATE(191), 1,
      sym_limit_clause,
    STATE(257), 1,
      sym_offset_clause,
    STATE(401), 1,
      sym_for_clause,
    STATE(680), 1,
      sym_update_clause,
  [4102] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_formatting_comment,
    STATE(192), 1,
      sym_limit_clause,
    STATE(261), 1,
      sym_offset_clause,
    STATE(412), 1,
      sym_for_clause,
    STATE(768), 1,
      sym_update_clause,
  [4136] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_formatting_comment,
    STATE(195), 1,
      sym_limit_clause,
    STATE(267), 1,
      sym_offset_clause,
    STATE(418), 1,
      sym_for_clause,
    STATE(833), 1,
      sym_update_clause,
  [4170] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_formatting_comment,
    STATE(196), 1,
      sym_limit_clause,
    STATE(271), 1,
      sym_offset_clause,
    STATE(424), 1,
      sym_for_clause,
    STATE(859), 1,
      sym_update_clause,
  [4204] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    STATE(127), 2,
      sym_formatting_comment,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(391), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4224] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      sym_formatting_comment,
    STATE(199), 1,
      sym_limit_clause,
    STATE(277), 1,
      sym_offset_clause,
    STATE(439), 1,
      sym_for_clause,
    STATE(588), 1,
      sym_update_clause,
  [4258] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_formatting_comment,
    STATE(202), 1,
      sym_limit_clause,
    STATE(282), 1,
      sym_offset_clause,
    STATE(445), 1,
      sym_for_clause,
    STATE(603), 1,
      sym_update_clause,
  [4292] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_formatting_comment,
    STATE(203), 1,
      sym_limit_clause,
    STATE(285), 1,
      sym_offset_clause,
    STATE(452), 1,
      sym_for_clause,
    STATE(623), 1,
      sym_update_clause,
  [4326] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_formatting_comment,
    STATE(204), 1,
      sym_limit_clause,
    STATE(290), 1,
      sym_offset_clause,
    STATE(463), 1,
      sym_for_clause,
    STATE(663), 1,
      sym_update_clause,
  [4360] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym_formatting_comment,
    STATE(207), 1,
      sym_limit_clause,
    STATE(297), 1,
      sym_offset_clause,
    STATE(482), 1,
      sym_for_clause,
    STATE(725), 1,
      sym_update_clause,
  [4394] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(165), 1,
      aux_sym_function_expression_token1,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(13), 1,
      sym_dotted_identifier,
    STATE(49), 1,
      sym__value_expression,
    STATE(133), 1,
      sym_formatting_comment,
    STATE(211), 1,
      sym_order_expression,
    STATE(899), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
  [4423] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(134), 1,
      sym_formatting_comment,
    ACTIONS(344), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4440] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(135), 1,
      sym_formatting_comment,
    ACTIONS(403), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4457] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(136), 1,
      sym_formatting_comment,
    ACTIONS(405), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4474] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(409), 1,
      aux_sym_having_clause_token1,
    STATE(137), 1,
      sym_formatting_comment,
    STATE(229), 1,
      sym_having_clause,
    ACTIONS(407), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4495] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      sym_formatting_comment,
    STATE(149), 1,
      aux_sym_returning_clause_repeat1,
    ACTIONS(411), 6,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4516] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(139), 1,
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
  [4533] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(140), 1,
      sym_formatting_comment,
    ACTIONS(417), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4550] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(419), 1,
      aux_sym_type_of_clause_token2,
    ACTIONS(421), 1,
      aux_sym_when_expression_token1,
    ACTIONS(423), 1,
      aux_sym_else_expression_token1,
    STATE(9), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(141), 1,
      sym_formatting_comment,
    STATE(222), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(391), 1,
      sym_when_expression,
    STATE(629), 1,
      sym_else_expression,
  [4581] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(142), 1,
      sym_formatting_comment,
    ACTIONS(425), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4598] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_formatting_comment,
    ACTIONS(427), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4617] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(165), 1,
      aux_sym_function_expression_token1,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(13), 1,
      sym_dotted_identifier,
    STATE(49), 1,
      sym__value_expression,
    STATE(144), 1,
      sym_formatting_comment,
    STATE(221), 1,
      sym_order_expression,
    STATE(899), 1,
      sym__function_name,
    STATE(16), 2,
      sym_function_expression,
      sym_field_identifier,
  [4646] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(145), 1,
      sym_formatting_comment,
    ACTIONS(431), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
  [4663] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(146), 1,
      sym_formatting_comment,
    ACTIONS(391), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4680] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(147), 1,
      sym_formatting_comment,
    ACTIONS(433), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4697] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_function_expression_token1,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      sym_dotted_identifier,
    STATE(148), 1,
      sym_formatting_comment,
    STATE(532), 1,
      sym__value_expression,
    STATE(672), 1,
      sym__function_name,
    STATE(105), 2,
      sym_function_expression,
      sym_field_identifier,
  [4726] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    STATE(149), 2,
      sym_formatting_comment,
      aux_sym_returning_clause_repeat1,
    ACTIONS(437), 6,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4745] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      sym_formatting_comment,
    STATE(153), 1,
      aux_sym_selected_fields_repeat1,
    ACTIONS(444), 6,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4766] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(448), 1,
      aux_sym_returning_clause_token1,
    STATE(227), 1,
      sym_returning_clause,
    STATE(151), 2,
      sym_formatting_comment,
      aux_sym_sosl_query_body_repeat1,
    ACTIONS(446), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4787] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(453), 1,
      aux_sym_using_scope_type_token3,
    STATE(111), 1,
      sym_using_scope_type,
    STATE(152), 1,
      sym_formatting_comment,
    ACTIONS(451), 6,
      aux_sym_using_scope_type_token1,
      aux_sym_using_scope_type_token2,
      aux_sym_using_scope_type_token4,
      aux_sym_using_scope_type_token5,
      aux_sym_using_scope_type_token6,
      aux_sym_using_scope_type_token7,
  [4808] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      sym_formatting_comment,
    STATE(159), 1,
      aux_sym_selected_fields_repeat1,
    ACTIONS(455), 6,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4829] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_returning_clause_repeat1,
    STATE(154), 1,
      sym_formatting_comment,
    ACTIONS(457), 6,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4850] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(155), 1,
      sym_formatting_comment,
    ACTIONS(459), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4867] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(156), 1,
      sym_formatting_comment,
    ACTIONS(461), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4884] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(157), 1,
      sym_formatting_comment,
    ACTIONS(211), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4901] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(158), 1,
      sym_formatting_comment,
    ACTIONS(463), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4918] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(159), 2,
      sym_formatting_comment,
      aux_sym_selected_fields_repeat1,
    ACTIONS(463), 6,
      anon_sym_RPAREN,
      aux_sym_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4937] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_formatting_comment,
    STATE(256), 1,
      sym_offset_clause,
    STATE(399), 1,
      sym_for_clause,
    STATE(662), 1,
      sym_update_clause,
  [4965] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(161), 1,
      sym_formatting_comment,
    ACTIONS(470), 7,
      ts_builtin_sym_end,
      aux_sym_in_clause_token1,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4981] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(162), 1,
      sym_formatting_comment,
    STATE(305), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(474), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5005] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      sym_formatting_comment,
    STATE(321), 1,
      sym_order_by_clause,
    STATE(434), 1,
      sym_limit_clause,
    STATE(586), 1,
      sym_offset_clause,
  [5033] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(478), 1,
      aux_sym_sosl_with_clause_token1,
    STATE(316), 1,
      sym_sosl_with_clause,
    STATE(164), 2,
      sym_formatting_comment,
      aux_sym_sosl_query_body_repeat2,
    ACTIONS(476), 4,
      ts_builtin_sym_end,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5053] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      sym_formatting_comment,
    STATE(244), 1,
      sym_offset_clause,
    STATE(384), 1,
      sym_for_clause,
    STATE(568), 1,
      sym_update_clause,
  [5081] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(165), 1,
      aux_sym_function_expression_token1,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(13), 1,
      sym_dotted_identifier,
    STATE(137), 1,
      sym__group_by_expression,
    STATE(166), 1,
      sym_formatting_comment,
    STATE(899), 1,
      sym__function_name,
    STATE(112), 2,
      sym_function_expression,
      sym_field_identifier,
  [5107] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      sym_formatting_comment,
    STATE(293), 1,
      sym_offset_clause,
    STATE(540), 1,
      sym_for_clause,
    STATE(667), 1,
      sym_update_clause,
  [5135] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      sym_formatting_comment,
    STATE(252), 1,
      sym_offset_clause,
    STATE(392), 1,
      sym_for_clause,
    STATE(616), 1,
      sym_update_clause,
  [5163] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      sym_formatting_comment,
    STATE(301), 1,
      sym_offset_clause,
    STATE(357), 1,
      sym_for_clause,
    STATE(742), 1,
      sym_update_clause,
  [5191] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(170), 1,
      sym_formatting_comment,
    ACTIONS(489), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5207] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_formatting_comment,
    STATE(258), 1,
      sym_offset_clause,
    STATE(403), 1,
      sym_for_clause,
    STATE(700), 1,
      sym_update_clause,
  [5235] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym_formatting_comment,
    STATE(259), 1,
      sym_offset_clause,
    STATE(406), 1,
      sym_for_clause,
    STATE(724), 1,
      sym_update_clause,
  [5263] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      sym_formatting_comment,
    STATE(260), 1,
      sym_offset_clause,
    STATE(409), 1,
      sym_for_clause,
    STATE(746), 1,
      sym_update_clause,
  [5291] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_formatting_comment,
    STATE(317), 1,
      sym_offset_clause,
    STATE(364), 1,
      sym_for_clause,
    STATE(856), 1,
      sym_update_clause,
  [5319] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      sym_formatting_comment,
    STATE(265), 1,
      sym_offset_clause,
    STATE(415), 1,
      sym_for_clause,
    STATE(799), 1,
      sym_update_clause,
  [5347] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_function_expression_token1,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(106), 1,
      sym_dotted_identifier,
    STATE(176), 1,
      sym_formatting_comment,
    STATE(547), 1,
      sym__value_expression,
    STATE(672), 1,
      sym__function_name,
    STATE(105), 2,
      sym_function_expression,
      sym_field_identifier,
  [5373] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_formatting_comment,
    STATE(268), 1,
      sym_offset_clause,
    STATE(420), 1,
      sym_for_clause,
    STATE(842), 1,
      sym_update_clause,
  [5401] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      sym_formatting_comment,
    STATE(269), 1,
      sym_offset_clause,
    STATE(422), 1,
      sym_for_clause,
    STATE(852), 1,
      sym_update_clause,
  [5429] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(179), 1,
      sym_formatting_comment,
    ACTIONS(505), 7,
      ts_builtin_sym_end,
      aux_sym_in_clause_token1,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5445] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      sym_formatting_comment,
    STATE(272), 1,
      sym_offset_clause,
    STATE(426), 1,
      sym_for_clause,
    STATE(881), 1,
      sym_update_clause,
  [5473] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(181), 1,
      sym_formatting_comment,
    ACTIONS(509), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5489] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(182), 1,
      sym_formatting_comment,
    ACTIONS(511), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5505] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      sym_formatting_comment,
    STATE(325), 1,
      sym_offset_clause,
    STATE(370), 1,
      sym_for_clause,
    STATE(625), 1,
      sym_update_clause,
  [5533] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(184), 1,
      sym_formatting_comment,
    ACTIONS(515), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5549] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym_formatting_comment,
    STATE(274), 1,
      sym_offset_clause,
    STATE(433), 1,
      sym_for_clause,
    STATE(576), 1,
      sym_update_clause,
  [5577] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_formatting_comment,
    STATE(275), 1,
      sym_offset_clause,
    STATE(436), 1,
      sym_for_clause,
    STATE(582), 1,
      sym_update_clause,
  [5605] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_formatting_comment,
    STATE(238), 1,
      sym_offset_clause,
    STATE(376), 1,
      sym_for_clause,
    STATE(738), 1,
      sym_update_clause,
  [5633] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      sym_formatting_comment,
    STATE(281), 1,
      sym_offset_clause,
    STATE(443), 1,
      sym_for_clause,
    STATE(597), 1,
      sym_update_clause,
  [5661] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_formatting_comment,
    STATE(283), 1,
      sym_offset_clause,
    STATE(447), 1,
      sym_for_clause,
    STATE(611), 1,
      sym_update_clause,
  [5689] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      sym_formatting_comment,
    STATE(284), 1,
      sym_offset_clause,
    STATE(450), 1,
      sym_for_clause,
    STATE(617), 1,
      sym_update_clause,
  [5717] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym_formatting_comment,
    STATE(286), 1,
      sym_offset_clause,
    STATE(454), 1,
      sym_for_clause,
    STATE(631), 1,
      sym_update_clause,
  [5745] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      sym_formatting_comment,
    STATE(287), 1,
      sym_offset_clause,
    STATE(459), 1,
      sym_for_clause,
    STATE(651), 1,
      sym_update_clause,
  [5773] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      sym_formatting_comment,
    STATE(288), 1,
      sym_offset_clause,
    STATE(461), 1,
      sym_for_clause,
    STATE(657), 1,
      sym_update_clause,
  [5801] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      sym_formatting_comment,
    STATE(289), 1,
      sym_offset_clause,
    STATE(437), 1,
      sym_for_clause,
    STATE(587), 1,
      sym_update_clause,
  [5829] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      sym_formatting_comment,
    STATE(291), 1,
      sym_offset_clause,
    STATE(466), 1,
      sym_for_clause,
    STATE(671), 1,
      sym_update_clause,
  [5857] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      sym_formatting_comment,
    STATE(292), 1,
      sym_offset_clause,
    STATE(470), 1,
      sym_for_clause,
    STATE(686), 1,
      sym_update_clause,
  [5885] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(197), 1,
      sym_formatting_comment,
    ACTIONS(541), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5901] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(198), 1,
      sym_formatting_comment,
    ACTIONS(543), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5917] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      sym_formatting_comment,
    STATE(294), 1,
      sym_offset_clause,
    STATE(477), 1,
      sym_for_clause,
    STATE(713), 1,
      sym_update_clause,
  [5945] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_formatting_comment,
    STATE(295), 1,
      sym_offset_clause,
    STATE(480), 1,
      sym_for_clause,
    STATE(719), 1,
      sym_update_clause,
  [5973] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(201), 1,
      sym_formatting_comment,
    ACTIONS(549), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5989] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym_formatting_comment,
    STATE(298), 1,
      sym_offset_clause,
    STATE(485), 1,
      sym_for_clause,
    STATE(733), 1,
      sym_update_clause,
  [6017] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym_formatting_comment,
    STATE(299), 1,
      sym_offset_clause,
    STATE(489), 1,
      sym_for_clause,
    STATE(748), 1,
      sym_update_clause,
  [6045] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      sym_formatting_comment,
    STATE(300), 1,
      sym_offset_clause,
    STATE(495), 1,
      sym_for_clause,
    STATE(770), 1,
      sym_update_clause,
  [6073] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(205), 1,
      sym_formatting_comment,
    ACTIONS(557), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6089] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(206), 1,
      sym_formatting_comment,
    ACTIONS(559), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6105] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_formatting_comment,
    STATE(302), 1,
      sym_offset_clause,
    STATE(355), 1,
      sym_for_clause,
    STATE(798), 1,
      sym_update_clause,
  [6133] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(208), 1,
      sym_formatting_comment,
    ACTIONS(437), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6149] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(563), 1,
      anon_sym_DOT,
    STATE(209), 1,
      sym_formatting_comment,
    STATE(224), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(62), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [6173] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(210), 2,
      sym_formatting_comment,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(568), 5,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6191] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      sym_formatting_comment,
    STATE(216), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(572), 5,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6211] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(212), 1,
      sym_formatting_comment,
    ACTIONS(574), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6227] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      sym_formatting_comment,
    STATE(253), 1,
      sym_order_by_clause,
    STATE(368), 1,
      sym_limit_clause,
    STATE(600), 1,
      sym_offset_clause,
  [6255] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(214), 1,
      sym_formatting_comment,
    ACTIONS(578), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6271] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_function_expression_token1,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(106), 1,
      sym_dotted_identifier,
    STATE(215), 1,
      sym_formatting_comment,
    STATE(536), 1,
      sym__value_expression,
    STATE(672), 1,
      sym__function_name,
    STATE(105), 2,
      sym_function_expression,
      sym_field_identifier,
  [6297] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_order_by_clause_repeat1,
    STATE(216), 1,
      sym_formatting_comment,
    ACTIONS(580), 5,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6317] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_function_expression_token1,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(106), 1,
      sym_dotted_identifier,
    STATE(217), 1,
      sym_formatting_comment,
    STATE(532), 1,
      sym__value_expression,
    STATE(672), 1,
      sym__function_name,
    STATE(105), 2,
      sym_function_expression,
      sym_field_identifier,
  [6343] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(136), 1,
      aux_sym_function_expression_token1,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(106), 1,
      sym_dotted_identifier,
    STATE(218), 1,
      sym_formatting_comment,
    STATE(464), 1,
      sym__value_expression,
    STATE(672), 1,
      sym__function_name,
    STATE(105), 2,
      sym_function_expression,
      sym_field_identifier,
  [6369] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(219), 1,
      sym_formatting_comment,
    STATE(596), 1,
      sym_in_type,
    ACTIONS(582), 5,
      aux_sym_in_type_token1,
      aux_sym_in_type_token2,
      aux_sym_in_type_token3,
      aux_sym_in_type_token4,
      aux_sym_in_type_token5,
  [6386] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(220), 1,
      sym_formatting_comment,
    ACTIONS(584), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6401] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(221), 1,
      sym_formatting_comment,
    ACTIONS(568), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6416] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(421), 1,
      aux_sym_when_expression_token1,
    ACTIONS(423), 1,
      aux_sym_else_expression_token1,
    ACTIONS(586), 1,
      aux_sym_type_of_clause_token2,
    STATE(222), 1,
      sym_formatting_comment,
    STATE(249), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(391), 1,
      sym_when_expression,
    STATE(897), 1,
      sym_else_expression,
  [6441] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(223), 1,
      sym_formatting_comment,
    ACTIONS(588), 6,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6456] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    ACTIONS(563), 1,
      anon_sym_DOT,
    STATE(224), 1,
      sym_formatting_comment,
    STATE(225), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(56), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [6477] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_DOT,
    STATE(225), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(49), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [6496] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(226), 1,
      sym_formatting_comment,
    ACTIONS(593), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6511] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(227), 1,
      sym_formatting_comment,
    ACTIONS(595), 6,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6526] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    STATE(228), 1,
      sym_formatting_comment,
    ACTIONS(597), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6543] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(229), 1,
      sym_formatting_comment,
    ACTIONS(601), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6558] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(230), 1,
      sym_formatting_comment,
    ACTIONS(354), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6573] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(419), 1,
      aux_sym_type_of_clause_token2,
    ACTIONS(421), 1,
      aux_sym_when_expression_token1,
    ACTIONS(423), 1,
      aux_sym_else_expression_token1,
    STATE(222), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(231), 1,
      sym_formatting_comment,
    STATE(391), 1,
      sym_when_expression,
    STATE(629), 1,
      sym_else_expression,
  [6598] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(165), 1,
      aux_sym_function_expression_token1,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(13), 1,
      sym_dotted_identifier,
    STATE(232), 1,
      sym_formatting_comment,
    STATE(899), 1,
      sym__function_name,
    STATE(146), 2,
      sym_function_expression,
      sym_field_identifier,
  [6621] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(60), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(233), 1,
      sym_formatting_comment,
    ACTIONS(603), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6640] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(234), 1,
      sym_formatting_comment,
    ACTIONS(605), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6655] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(607), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(609), 1,
      sym_bound_apex_expression,
    ACTIONS(611), 1,
      sym_identifier,
    STATE(106), 1,
      sym_dotted_identifier,
    STATE(235), 1,
      sym_formatting_comment,
    STATE(650), 1,
      sym_field_identifier,
    STATE(656), 1,
      sym_geo_location_type,
  [6680] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(607), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(609), 1,
      sym_bound_apex_expression,
    ACTIONS(611), 1,
      sym_identifier,
    STATE(106), 1,
      sym_dotted_identifier,
    STATE(236), 1,
      sym_formatting_comment,
    STATE(650), 1,
      sym_field_identifier,
    STATE(900), 1,
      sym_geo_location_type,
  [6705] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(607), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(609), 1,
      sym_bound_apex_expression,
    ACTIONS(611), 1,
      sym_identifier,
    STATE(106), 1,
      sym_dotted_identifier,
    STATE(237), 1,
      sym_formatting_comment,
    STATE(650), 1,
      sym_field_identifier,
    STATE(902), 1,
      sym_geo_location_type,
  [6730] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      sym_formatting_comment,
    STATE(429), 1,
      sym_for_clause,
    STATE(894), 1,
      sym_update_clause,
  [6752] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      sym_formatting_comment,
    STATE(428), 1,
      sym_for_clause,
    STATE(884), 1,
      sym_update_clause,
  [6774] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    STATE(240), 2,
      sym_formatting_comment,
      aux_sym_field_list_repeat1,
    ACTIONS(603), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6790] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(241), 1,
      sym_formatting_comment,
    ACTIONS(620), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6804] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      sym_formatting_comment,
    STATE(305), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(474), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [6822] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      sym_formatting_comment,
    STATE(434), 1,
      sym_limit_clause,
    STATE(586), 1,
      sym_offset_clause,
  [6844] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      sym_formatting_comment,
    STATE(432), 1,
      sym_for_clause,
    STATE(571), 1,
      sym_update_clause,
  [6866] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      sym_formatting_comment,
    STATE(448), 1,
      sym_for_clause,
    STATE(697), 1,
      sym_update_clause,
  [6888] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      sym_formatting_comment,
    STATE(435), 1,
      sym_for_clause,
    STATE(578), 1,
      sym_update_clause,
  [6910] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(247), 1,
      sym_formatting_comment,
    ACTIONS(628), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6924] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      sym_formatting_comment,
    STATE(438), 1,
      sym_for_clause,
    STATE(584), 1,
      sym_update_clause,
  [6946] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(634), 1,
      aux_sym_when_expression_token1,
    STATE(391), 1,
      sym_when_expression,
    ACTIONS(632), 2,
      aux_sym_type_of_clause_token2,
      aux_sym_else_expression_token1,
    STATE(249), 2,
      sym_formatting_comment,
      aux_sym_type_of_clause_repeat1,
  [6964] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      sym_formatting_comment,
    STATE(444), 1,
      sym_for_clause,
    STATE(599), 1,
      sym_update_clause,
  [6986] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_formatting_comment,
    STATE(358), 1,
      sym_for_clause,
    STATE(879), 1,
      sym_update_clause,
  [7008] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      sym_formatting_comment,
    STATE(446), 1,
      sym_for_clause,
    STATE(606), 1,
      sym_update_clause,
  [7030] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      sym_formatting_comment,
    STATE(490), 1,
      sym_limit_clause,
    STATE(732), 1,
      sym_offset_clause,
  [7052] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      sym_formatting_comment,
    STATE(449), 1,
      sym_for_clause,
    STATE(613), 1,
      sym_update_clause,
  [7074] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      sym_formatting_comment,
    STATE(451), 1,
      sym_for_clause,
    STATE(619), 1,
      sym_update_clause,
  [7096] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      sym_formatting_comment,
    STATE(453), 1,
      sym_for_clause,
    STATE(626), 1,
      sym_update_clause,
  [7118] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      sym_formatting_comment,
    STATE(455), 1,
      sym_for_clause,
    STATE(633), 1,
      sym_update_clause,
  [7140] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      sym_formatting_comment,
    STATE(456), 1,
      sym_for_clause,
    STATE(637), 1,
      sym_update_clause,
  [7162] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      sym_formatting_comment,
    STATE(457), 1,
      sym_for_clause,
    STATE(642), 1,
      sym_update_clause,
  [7184] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      sym_formatting_comment,
    STATE(458), 1,
      sym_for_clause,
    STATE(646), 1,
      sym_update_clause,
  [7206] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      sym_formatting_comment,
    STATE(460), 1,
      sym_for_clause,
    STATE(653), 1,
      sym_update_clause,
  [7228] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(262), 1,
      sym_formatting_comment,
    ACTIONS(661), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_offset_clause_token1,
  [7242] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      sym_formatting_comment,
    STATE(462), 1,
      sym_for_clause,
    STATE(659), 1,
      sym_update_clause,
  [7264] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      sym_formatting_comment,
    STATE(385), 1,
      sym_for_clause,
    STATE(574), 1,
      sym_update_clause,
  [7286] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      sym_formatting_comment,
    STATE(465), 1,
      sym_for_clause,
    STATE(666), 1,
      sym_update_clause,
  [7308] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      sym_formatting_comment,
    STATE(365), 1,
      sym_for_clause,
    STATE(565), 1,
      sym_update_clause,
  [7330] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      sym_formatting_comment,
    STATE(467), 1,
      sym_for_clause,
    STATE(673), 1,
      sym_update_clause,
  [7352] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      sym_formatting_comment,
    STATE(468), 1,
      sym_for_clause,
    STATE(677), 1,
      sym_update_clause,
  [7374] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_formatting_comment,
    STATE(469), 1,
      sym_for_clause,
    STATE(681), 1,
      sym_update_clause,
  [7396] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(270), 1,
      sym_formatting_comment,
    ACTIONS(677), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7410] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      sym_formatting_comment,
    STATE(471), 1,
      sym_for_clause,
    STATE(688), 1,
      sym_update_clause,
  [7432] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym_formatting_comment,
    STATE(472), 1,
      sym_for_clause,
    STATE(692), 1,
      sym_update_clause,
  [7454] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(273), 1,
      sym_formatting_comment,
    ACTIONS(683), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7468] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      sym_formatting_comment,
    STATE(475), 1,
      sym_for_clause,
    STATE(704), 1,
      sym_update_clause,
  [7490] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      sym_formatting_comment,
    STATE(476), 1,
      sym_for_clause,
    STATE(708), 1,
      sym_update_clause,
  [7512] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      sym_formatting_comment,
    STATE(394), 1,
      sym_for_clause,
    STATE(620), 1,
      sym_update_clause,
  [7534] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      sym_formatting_comment,
    STATE(479), 1,
      sym_for_clause,
    STATE(715), 1,
      sym_update_clause,
  [7556] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      sym_formatting_comment,
    STATE(371), 1,
      sym_for_clause,
    STATE(645), 1,
      sym_update_clause,
  [7578] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      sym_formatting_comment,
    STATE(481), 1,
      sym_for_clause,
    STATE(721), 1,
      sym_update_clause,
  [7600] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(280), 1,
      sym_formatting_comment,
    ACTIONS(697), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7614] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(281), 1,
      sym_formatting_comment,
    STATE(484), 1,
      sym_for_clause,
    STATE(728), 1,
      sym_update_clause,
  [7636] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      sym_formatting_comment,
    STATE(486), 1,
      sym_for_clause,
    STATE(735), 1,
      sym_update_clause,
  [7658] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      sym_formatting_comment,
    STATE(487), 1,
      sym_for_clause,
    STATE(739), 1,
      sym_update_clause,
  [7680] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      sym_formatting_comment,
    STATE(488), 1,
      sym_for_clause,
    STATE(743), 1,
      sym_update_clause,
  [7702] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      sym_formatting_comment,
    STATE(491), 1,
      sym_for_clause,
    STATE(750), 1,
      sym_update_clause,
  [7724] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      sym_formatting_comment,
    STATE(492), 1,
      sym_for_clause,
    STATE(754), 1,
      sym_update_clause,
  [7746] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      sym_formatting_comment,
    STATE(493), 1,
      sym_for_clause,
    STATE(761), 1,
      sym_update_clause,
  [7768] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      sym_formatting_comment,
    STATE(494), 1,
      sym_for_clause,
    STATE(765), 1,
      sym_update_clause,
  [7790] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      sym_formatting_comment,
    STATE(375), 1,
      sym_for_clause,
    STATE(703), 1,
      sym_update_clause,
  [7812] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_formatting_comment,
    STATE(496), 1,
      sym_for_clause,
    STATE(771), 1,
      sym_update_clause,
  [7834] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      sym_formatting_comment,
    STATE(497), 1,
      sym_for_clause,
    STATE(775), 1,
      sym_update_clause,
  [7856] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      sym_formatting_comment,
    STATE(498), 1,
      sym_for_clause,
    STATE(781), 1,
      sym_update_clause,
  [7878] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
      sym_formatting_comment,
    STATE(402), 1,
      sym_for_clause,
    STATE(687), 1,
      sym_update_clause,
  [7900] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      sym_formatting_comment,
    STATE(499), 1,
      sym_for_clause,
    STATE(789), 1,
      sym_update_clause,
  [7922] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      sym_formatting_comment,
    STATE(500), 1,
      sym_for_clause,
    STATE(793), 1,
      sym_update_clause,
  [7944] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      sym_formatting_comment,
    STATE(404), 1,
      sym_for_clause,
    STATE(707), 1,
      sym_update_clause,
  [7966] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      sym_formatting_comment,
    STATE(503), 1,
      sym_for_clause,
    STATE(800), 1,
      sym_update_clause,
  [7988] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      sym_formatting_comment,
    STATE(504), 1,
      sym_for_clause,
    STATE(804), 1,
      sym_update_clause,
  [8010] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      sym_formatting_comment,
    STATE(505), 1,
      sym_for_clause,
    STATE(810), 1,
      sym_update_clause,
  [8032] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      sym_formatting_comment,
    STATE(506), 1,
      sym_for_clause,
    STATE(817), 1,
      sym_update_clause,
  [8054] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym_formatting_comment,
    STATE(405), 1,
      sym_for_clause,
    STATE(714), 1,
      sym_update_clause,
  [8076] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      sym_formatting_comment,
    STATE(507), 1,
      sym_for_clause,
    STATE(826), 1,
      sym_update_clause,
  [8098] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    STATE(303), 1,
      sym_formatting_comment,
    STATE(377), 1,
      sym_for_clause,
    STATE(747), 1,
      sym_update_clause,
  [8120] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      sym_formatting_comment,
    STATE(408), 1,
      sym_for_clause,
    STATE(731), 1,
      sym_update_clause,
  [8142] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_field_list_repeat1,
    STATE(305), 1,
      sym_formatting_comment,
    ACTIONS(747), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [8160] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(751), 1,
      aux_sym_with_data_cat_filter_type_token2,
    STATE(306), 1,
      sym_formatting_comment,
    STATE(556), 1,
      sym_with_data_cat_filter_type,
    ACTIONS(749), 3,
      aux_sym_with_data_cat_filter_type_token1,
      aux_sym_with_data_cat_filter_type_token3,
      aux_sym_with_data_cat_filter_type_token4,
  [8178] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 1,
      aux_sym_and_expression_token1,
    ACTIONS(753), 1,
      aux_sym_or_expression_token1,
    STATE(84), 1,
      aux_sym_and_expression_repeat1,
    STATE(307), 1,
      sym_formatting_comment,
    STATE(522), 1,
      aux_sym_or_expression_repeat1,
  [8200] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(308), 1,
      sym_formatting_comment,
    ACTIONS(755), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [8214] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      sym_formatting_comment,
    STATE(411), 1,
      sym_for_clause,
    STATE(749), 1,
      sym_update_clause,
  [8236] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(759), 1,
      ts_builtin_sym_end,
    STATE(310), 1,
      sym_formatting_comment,
    STATE(373), 1,
      sym_offset_clause,
    STATE(618), 1,
      sym_update_clause,
  [8258] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(311), 1,
      sym_formatting_comment,
    ACTIONS(51), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(49), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [8274] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(312), 1,
      sym_formatting_comment,
    ACTIONS(761), 5,
      anon_sym_RPAREN,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [8288] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(313), 1,
      sym_formatting_comment,
    STATE(539), 1,
      sym_offset_clause,
    STATE(575), 1,
      sym_update_clause,
  [8310] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    STATE(314), 1,
      sym_formatting_comment,
    STATE(516), 1,
      sym_offset_clause,
    STATE(836), 1,
      sym_update_clause,
  [8332] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      sym_formatting_comment,
    STATE(417), 1,
      sym_for_clause,
    STATE(809), 1,
      sym_update_clause,
  [8354] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(316), 1,
      sym_formatting_comment,
    ACTIONS(765), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [8368] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      sym_formatting_comment,
    STATE(419), 1,
      sym_for_clause,
    STATE(837), 1,
      sym_update_clause,
  [8390] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(318), 1,
      sym_formatting_comment,
    ACTIONS(769), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [8404] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(319), 1,
      sym_formatting_comment,
    STATE(410), 1,
      sym_offset_clause,
    STATE(760), 1,
      sym_update_clause,
  [8426] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    STATE(320), 1,
      sym_formatting_comment,
    STATE(421), 1,
      sym_for_clause,
    STATE(845), 1,
      sym_update_clause,
  [8448] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      sym_formatting_comment,
    STATE(368), 1,
      sym_limit_clause,
    STATE(600), 1,
      sym_offset_clause,
  [8470] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(322), 1,
      sym_formatting_comment,
    ACTIONS(773), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [8484] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      sym_formatting_comment,
    STATE(423), 1,
      sym_for_clause,
    STATE(854), 1,
      sym_update_clause,
  [8506] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(324), 1,
      sym_formatting_comment,
    ACTIONS(777), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [8520] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      sym_formatting_comment,
    STATE(425), 1,
      sym_for_clause,
    STATE(865), 1,
      sym_update_clause,
  [8542] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      sym_formatting_comment,
    STATE(441), 1,
      sym_for_clause,
    STATE(591), 1,
      sym_update_clause,
  [8564] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      sym_formatting_comment,
    STATE(400), 1,
      sym_for_clause,
    STATE(669), 1,
      sym_update_clause,
  [8586] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      sym_formatting_comment,
    STATE(350), 1,
      aux_sym_for_clause_repeat1,
    ACTIONS(787), 2,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [8603] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      sym_formatting_comment,
    ACTIONS(72), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [8618] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      sym_formatting_comment,
    ACTIONS(68), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [8633] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(791), 1,
      anon_sym_COMMA,
    ACTIONS(789), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(331), 2,
      sym_formatting_comment,
      aux_sym_update_clause_repeat1,
  [8648] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(796), 1,
      anon_sym_COMMA,
    STATE(331), 1,
      aux_sym_update_clause_repeat1,
    STATE(332), 1,
      sym_formatting_comment,
    ACTIONS(794), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8665] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(798), 1,
      sym_identifier,
    STATE(40), 1,
      sym_dotted_identifier,
    STATE(46), 1,
      sym_storage_identifier,
    STATE(67), 1,
      sym_storage_alias,
    STATE(333), 1,
      sym_formatting_comment,
  [8684] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(800), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(334), 1,
      sym_formatting_comment,
    STATE(381), 1,
      sym_with_record_visibility_param,
    ACTIONS(802), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [8701] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(804), 1,
      sym_bound_apex_expression,
    ACTIONS(806), 1,
      sym_identifier,
    STATE(106), 1,
      sym_dotted_identifier,
    STATE(335), 1,
      sym_formatting_comment,
    STATE(649), 1,
      sym_field_identifier,
  [8720] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(800), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(336), 1,
      sym_formatting_comment,
    STATE(553), 1,
      sym_with_record_visibility_param,
    ACTIONS(802), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [8737] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_find_clause_token1,
    STATE(25), 1,
      sym_find_clause,
    STATE(337), 1,
      sym_formatting_comment,
    STATE(632), 1,
      sym_sosl_query_body,
    STATE(844), 1,
      sym__query_expression,
  [8756] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(338), 1,
      sym_formatting_comment,
    ACTIONS(808), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
  [8769] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(328), 1,
      sym_for_type,
    STATE(339), 1,
      sym_formatting_comment,
    ACTIONS(810), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [8784] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(340), 1,
      sym_formatting_comment,
    STATE(383), 1,
      sym_for_type,
    ACTIONS(810), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [8799] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    ACTIONS(815), 2,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
    STATE(341), 2,
      sym_formatting_comment,
      aux_sym_for_clause_repeat1,
  [8814] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(342), 1,
      sym_formatting_comment,
    ACTIONS(603), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [8827] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      aux_sym_from_clause_token1,
    ACTIONS(348), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(350), 1,
      sym_identifier,
    STATE(343), 1,
      sym_formatting_comment,
  [8846] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      sym_bound_apex_expression,
    STATE(344), 1,
      sym_formatting_comment,
    STATE(515), 2,
      sym_subquery,
      sym_comparable_list,
  [8863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      sym_formatting_comment,
    ACTIONS(80), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [8878] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      sym_formatting_comment,
    ACTIONS(62), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [8893] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(347), 1,
      sym_formatting_comment,
    STATE(796), 1,
      sym_fields_type,
    ACTIONS(821), 3,
      aux_sym_in_type_token1,
      aux_sym_fields_type_token1,
      aux_sym_fields_type_token2,
  [8908] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(798), 1,
      sym_identifier,
    STATE(39), 1,
      sym_storage_identifier,
    STATE(40), 1,
      sym_dotted_identifier,
    STATE(56), 1,
      sym_storage_alias,
    STATE(348), 1,
      sym_formatting_comment,
  [8927] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(823), 1,
      anon_sym_LPAREN,
    ACTIONS(825), 1,
      sym_bound_apex_expression,
    STATE(349), 1,
      sym_formatting_comment,
    STATE(69), 2,
      sym_subquery,
      sym_comparable_list,
  [8944] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_for_clause_repeat1,
    STATE(350), 1,
      sym_formatting_comment,
    ACTIONS(827), 2,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [8961] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(796), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym_update_clause_repeat1,
    STATE(351), 1,
      sym_formatting_comment,
    ACTIONS(829), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [8978] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      sym_formatting_comment,
    ACTIONS(76), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [8993] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(806), 1,
      sym_identifier,
    ACTIONS(831), 1,
      sym_bound_apex_expression,
    STATE(106), 1,
      sym_dotted_identifier,
    STATE(353), 1,
      sym_formatting_comment,
    STATE(905), 1,
      sym_field_identifier,
  [9012] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(806), 1,
      sym_identifier,
    ACTIONS(833), 1,
      sym_bound_apex_expression,
    STATE(106), 1,
      sym_dotted_identifier,
    STATE(354), 1,
      sym_formatting_comment,
    STATE(906), 1,
      sym_field_identifier,
  [9031] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      sym_formatting_comment,
    STATE(824), 1,
      sym_update_clause,
  [9047] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      sym_formatting_comment,
    STATE(696), 1,
      sym_update_clause,
  [9063] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      sym_formatting_comment,
    STATE(711), 1,
      sym_update_clause,
  [9079] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      sym_formatting_comment,
    STATE(717), 1,
      sym_update_clause,
  [9095] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      sym_formatting_comment,
    STATE(720), 1,
      sym_update_clause,
  [9111] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      sym_formatting_comment,
    STATE(734), 1,
      sym_update_clause,
  [9127] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    STATE(361), 1,
      sym_formatting_comment,
    STATE(546), 1,
      sym_select_clause,
    STATE(855), 1,
      sym_soql_query_body,
  [9143] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      sym_formatting_comment,
    STATE(792), 1,
      sym_update_clause,
  [9159] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      sym_formatting_comment,
    STATE(473), 1,
      aux_sym_comparable_list_repeat1,
  [9175] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
    STATE(364), 1,
      sym_formatting_comment,
    STATE(834), 1,
      sym_update_clause,
  [9191] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      sym_formatting_comment,
    STATE(838), 1,
      sym_update_clause,
  [9207] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      sym_formatting_comment,
    STATE(839), 1,
      sym_update_clause,
  [9223] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      sym_formatting_comment,
    STATE(849), 1,
      sym_update_clause,
  [9239] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      sym_formatting_comment,
    STATE(732), 1,
      sym_offset_clause,
  [9255] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(351), 1,
      sym_update_type,
    STATE(369), 1,
      sym_formatting_comment,
    ACTIONS(861), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [9269] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym_formatting_comment,
    STATE(860), 1,
      sym_update_clause,
  [9285] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(865), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      sym_formatting_comment,
    STATE(867), 1,
      sym_update_clause,
  [9301] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      sym_formatting_comment,
    STATE(869), 1,
      sym_update_clause,
  [9317] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(869), 1,
      ts_builtin_sym_end,
    STATE(373), 1,
      sym_formatting_comment,
    STATE(718), 1,
      sym_update_clause,
  [9333] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      sym_formatting_comment,
    STATE(502), 1,
      aux_sym_function_expression_repeat1,
  [9349] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
    STATE(375), 1,
      sym_formatting_comment,
    STATE(885), 1,
      sym_update_clause,
  [9365] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(877), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      sym_formatting_comment,
    STATE(888), 1,
      sym_update_clause,
  [9381] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
    STATE(377), 1,
      sym_formatting_comment,
    STATE(904), 1,
      sym_update_clause,
  [9397] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(378), 1,
      sym_formatting_comment,
    ACTIONS(881), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [9409] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(883), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    STATE(379), 2,
      sym_formatting_comment,
      aux_sym_comparable_list_repeat1,
  [9423] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    ACTIONS(890), 1,
      aux_sym_from_clause_token1,
    STATE(380), 1,
      sym_formatting_comment,
    STATE(483), 1,
      aux_sym_selected_fields_repeat1,
  [9439] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      sym_formatting_comment,
    STATE(431), 1,
      aux_sym_with_record_visibility_expression_repeat1,
  [9455] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      sym_formatting_comment,
    STATE(509), 1,
      aux_sym_with_data_cat_filter_repeat1,
  [9471] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(383), 1,
      sym_formatting_comment,
    ACTIONS(815), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [9483] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      sym_formatting_comment,
    STATE(569), 1,
      sym_update_clause,
  [9499] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      sym_formatting_comment,
    STATE(572), 1,
      sym_update_clause,
  [9515] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    STATE(386), 1,
      sym_formatting_comment,
    STATE(573), 1,
      sym_update_clause,
  [9531] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(387), 1,
      sym_formatting_comment,
    ACTIONS(906), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9543] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      sym_formatting_comment,
    STATE(579), 1,
      sym_update_clause,
  [9559] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      sym_formatting_comment,
    STATE(594), 1,
      sym_update_clause,
  [9575] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(912), 1,
      sym_identifier,
    STATE(242), 1,
      sym_dotted_identifier,
    STATE(390), 1,
      sym_formatting_comment,
    STATE(893), 1,
      sym_field_list,
  [9591] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(391), 1,
      sym_formatting_comment,
    ACTIONS(914), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [9603] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      sym_formatting_comment,
    STATE(604), 1,
      sym_update_clause,
  [9619] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(393), 1,
      sym_formatting_comment,
    ACTIONS(918), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [9631] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(920), 1,
      anon_sym_RPAREN,
    STATE(394), 1,
      sym_formatting_comment,
    STATE(607), 1,
      sym_update_clause,
  [9647] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      sym_formatting_comment,
    STATE(608), 1,
      sym_update_clause,
  [9663] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      sym_formatting_comment,
    STATE(614), 1,
      sym_update_clause,
  [9679] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      sym_formatting_comment,
    STATE(870), 1,
      sym_update_clause,
  [9695] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(398), 1,
      sym_formatting_comment,
  [9711] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      sym_formatting_comment,
    STATE(624), 1,
      sym_update_clause,
  [9727] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    STATE(400), 1,
      sym_formatting_comment,
    STATE(627), 1,
      sym_update_clause,
  [9743] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      sym_formatting_comment,
    STATE(628), 1,
      sym_update_clause,
  [9759] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      sym_formatting_comment,
    STATE(634), 1,
      sym_update_clause,
  [9775] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(936), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      sym_formatting_comment,
    STATE(635), 1,
      sym_update_clause,
  [9791] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(938), 1,
      anon_sym_RPAREN,
    STATE(404), 1,
      sym_formatting_comment,
    STATE(638), 1,
      sym_update_clause,
  [9807] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      sym_formatting_comment,
    STATE(639), 1,
      sym_update_clause,
  [9823] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      sym_formatting_comment,
    STATE(640), 1,
      sym_update_clause,
  [9839] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      sym_formatting_comment,
    STATE(615), 1,
      sym_update_clause,
  [9855] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      sym_formatting_comment,
    STATE(643), 1,
      sym_update_clause,
  [9871] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
    STATE(409), 1,
      sym_formatting_comment,
    STATE(644), 1,
      sym_update_clause,
  [9887] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(410), 1,
      sym_formatting_comment,
    STATE(575), 1,
      sym_update_clause,
  [9903] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      sym_formatting_comment,
    STATE(647), 1,
      sym_update_clause,
  [9919] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(952), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      sym_formatting_comment,
    STATE(648), 1,
      sym_update_clause,
  [9935] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      sym_formatting_comment,
    STATE(654), 1,
      sym_update_clause,
  [9951] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(414), 1,
      sym_formatting_comment,
    STATE(760), 1,
      sym_update_clause,
  [9967] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      sym_formatting_comment,
    STATE(664), 1,
      sym_update_clause,
  [9983] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(958), 1,
      anon_sym_RPAREN,
    STATE(416), 1,
      sym_formatting_comment,
    STATE(665), 1,
      sym_update_clause,
  [9999] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(960), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      sym_formatting_comment,
    STATE(563), 1,
      sym_update_clause,
  [10015] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(962), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      sym_formatting_comment,
    STATE(668), 1,
      sym_update_clause,
  [10031] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      sym_formatting_comment,
    STATE(674), 1,
      sym_update_clause,
  [10047] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(966), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      sym_formatting_comment,
    STATE(675), 1,
      sym_update_clause,
  [10063] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_formatting_comment,
    STATE(678), 1,
      sym_update_clause,
  [10079] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      sym_formatting_comment,
    STATE(679), 1,
      sym_update_clause,
  [10095] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(972), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      sym_formatting_comment,
    STATE(682), 1,
      sym_update_clause,
  [10111] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(974), 1,
      anon_sym_RPAREN,
    STATE(424), 1,
      sym_formatting_comment,
    STATE(683), 1,
      sym_update_clause,
  [10127] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(976), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      sym_formatting_comment,
    STATE(689), 1,
      sym_update_clause,
  [10143] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      sym_formatting_comment,
    STATE(690), 1,
      sym_update_clause,
  [10159] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    STATE(427), 1,
      sym_formatting_comment,
    STATE(612), 1,
      sym_update_clause,
  [10175] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    STATE(428), 1,
      sym_formatting_comment,
    STATE(693), 1,
      sym_update_clause,
  [10191] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      sym_formatting_comment,
    STATE(694), 1,
      sym_update_clause,
  [10207] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(430), 1,
      sym_formatting_comment,
    STATE(552), 1,
      sym_boolean,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [10221] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    ACTIONS(986), 1,
      anon_sym_RPAREN,
    STATE(431), 1,
      sym_formatting_comment,
    STATE(474), 1,
      aux_sym_with_record_visibility_expression_repeat1,
  [10237] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      sym_formatting_comment,
    STATE(701), 1,
      sym_update_clause,
  [10253] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      sym_formatting_comment,
    STATE(702), 1,
      sym_update_clause,
  [10269] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      sym_formatting_comment,
    STATE(600), 1,
      sym_offset_clause,
  [10285] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    STATE(435), 1,
      sym_formatting_comment,
    STATE(705), 1,
      sym_update_clause,
  [10301] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      sym_formatting_comment,
    STATE(706), 1,
      sym_update_clause,
  [10317] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      sym_formatting_comment,
    STATE(685), 1,
      sym_update_clause,
  [10333] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    STATE(438), 1,
      sym_formatting_comment,
    STATE(709), 1,
      sym_update_clause,
  [10349] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      sym_formatting_comment,
    STATE(710), 1,
      sym_update_clause,
  [10365] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    STATE(440), 1,
      sym_formatting_comment,
    STATE(716), 1,
      sym_update_clause,
  [10381] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      sym_formatting_comment,
    STATE(712), 1,
      sym_update_clause,
  [10397] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      sym_formatting_comment,
    STATE(722), 1,
      sym_update_clause,
  [10413] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      sym_formatting_comment,
    STATE(726), 1,
      sym_update_clause,
  [10429] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      sym_formatting_comment,
    STATE(729), 1,
      sym_update_clause,
  [10445] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    STATE(445), 1,
      sym_formatting_comment,
    STATE(730), 1,
      sym_update_clause,
  [10461] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      sym_formatting_comment,
    STATE(736), 1,
      sym_update_clause,
  [10477] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      sym_formatting_comment,
    STATE(737), 1,
      sym_update_clause,
  [10493] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      sym_formatting_comment,
    STATE(691), 1,
      sym_update_clause,
  [10509] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1020), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      sym_formatting_comment,
    STATE(740), 1,
      sym_update_clause,
  [10525] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
    STATE(450), 1,
      sym_formatting_comment,
    STATE(741), 1,
      sym_update_clause,
  [10541] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    STATE(451), 1,
      sym_formatting_comment,
    STATE(744), 1,
      sym_update_clause,
  [10557] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
    STATE(452), 1,
      sym_formatting_comment,
    STATE(745), 1,
      sym_update_clause,
  [10573] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
    STATE(453), 1,
      sym_formatting_comment,
    STATE(751), 1,
      sym_update_clause,
  [10589] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
    STATE(454), 1,
      sym_formatting_comment,
    STATE(752), 1,
      sym_update_clause,
  [10605] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      sym_formatting_comment,
    STATE(911), 1,
      sym_update_clause,
  [10621] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1034), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      sym_formatting_comment,
    STATE(756), 1,
      sym_update_clause,
  [10637] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
    STATE(457), 1,
      sym_formatting_comment,
    STATE(757), 1,
      sym_update_clause,
  [10653] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      sym_formatting_comment,
    STATE(758), 1,
      sym_update_clause,
  [10669] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1040), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      sym_formatting_comment,
    STATE(759), 1,
      sym_update_clause,
  [10685] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      sym_formatting_comment,
    STATE(762), 1,
      sym_update_clause,
  [10701] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      sym_formatting_comment,
    STATE(763), 1,
      sym_update_clause,
  [10717] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1046), 1,
      anon_sym_RPAREN,
    STATE(462), 1,
      sym_formatting_comment,
    STATE(766), 1,
      sym_update_clause,
  [10733] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
    STATE(463), 1,
      sym_formatting_comment,
    STATE(767), 1,
      sym_update_clause,
  [10749] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      aux_sym_function_expression_repeat1,
    STATE(464), 1,
      sym_formatting_comment,
  [10765] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1052), 1,
      anon_sym_RPAREN,
    STATE(465), 1,
      sym_formatting_comment,
    STATE(772), 1,
      sym_update_clause,
  [10781] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1054), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      sym_formatting_comment,
    STATE(773), 1,
      sym_update_clause,
  [10797] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      sym_formatting_comment,
    STATE(776), 1,
      sym_update_clause,
  [10813] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      sym_formatting_comment,
    STATE(777), 1,
      sym_update_clause,
  [10829] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    STATE(469), 1,
      sym_formatting_comment,
    STATE(778), 1,
      sym_update_clause,
  [10845] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym_formatting_comment,
    STATE(779), 1,
      sym_update_clause,
  [10861] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      sym_formatting_comment,
    STATE(782), 1,
      sym_update_clause,
  [10877] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    STATE(472), 1,
      sym_formatting_comment,
    STATE(783), 1,
      sym_update_clause,
  [10893] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    STATE(379), 1,
      aux_sym_comparable_list_repeat1,
    STATE(473), 1,
      sym_formatting_comment,
  [10909] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    STATE(474), 2,
      sym_formatting_comment,
      aux_sym_with_record_visibility_expression_repeat1,
  [10923] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
    STATE(475), 1,
      sym_formatting_comment,
    STATE(785), 1,
      sym_update_clause,
  [10939] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      sym_formatting_comment,
    STATE(786), 1,
      sym_update_clause,
  [10955] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
    STATE(477), 1,
      sym_formatting_comment,
    STATE(787), 1,
      sym_update_clause,
  [10971] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_with_data_cat_filter_repeat1,
    STATE(478), 1,
      sym_formatting_comment,
  [10987] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    STATE(479), 1,
      sym_formatting_comment,
    STATE(790), 1,
      sym_update_clause,
  [11003] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    STATE(480), 1,
      sym_formatting_comment,
    STATE(791), 1,
      sym_update_clause,
  [11019] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      sym_formatting_comment,
    STATE(794), 1,
      sym_update_clause,
  [11035] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      sym_formatting_comment,
    STATE(795), 1,
      sym_update_clause,
  [11051] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    ACTIONS(1091), 1,
      aux_sym_from_clause_token1,
    STATE(483), 1,
      sym_formatting_comment,
    STATE(519), 1,
      aux_sym_selected_fields_repeat1,
  [11067] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      sym_formatting_comment,
    STATE(801), 1,
      sym_update_clause,
  [11083] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    STATE(485), 1,
      sym_formatting_comment,
    STATE(802), 1,
      sym_update_clause,
  [11099] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
    STATE(486), 1,
      sym_formatting_comment,
    STATE(805), 1,
      sym_update_clause,
  [11115] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    STATE(487), 1,
      sym_formatting_comment,
    STATE(806), 1,
      sym_update_clause,
  [11131] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      sym_formatting_comment,
    STATE(807), 1,
      sym_update_clause,
  [11147] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(489), 1,
      sym_formatting_comment,
    STATE(808), 1,
      sym_update_clause,
  [11163] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    STATE(490), 1,
      sym_formatting_comment,
    STATE(835), 1,
      sym_offset_clause,
  [11179] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    STATE(491), 1,
      sym_formatting_comment,
    STATE(811), 1,
      sym_update_clause,
  [11195] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    STATE(492), 1,
      sym_formatting_comment,
    STATE(812), 1,
      sym_update_clause,
  [11211] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(493), 1,
      sym_formatting_comment,
    STATE(813), 1,
      sym_update_clause,
  [11227] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      sym_formatting_comment,
    STATE(814), 1,
      sym_update_clause,
  [11243] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      sym_formatting_comment,
    STATE(815), 1,
      sym_update_clause,
  [11259] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
    STATE(496), 1,
      sym_formatting_comment,
    STATE(818), 1,
      sym_update_clause,
  [11275] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
    STATE(497), 1,
      sym_formatting_comment,
    STATE(819), 1,
      sym_update_clause,
  [11291] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    STATE(498), 1,
      sym_formatting_comment,
    STATE(820), 1,
      sym_update_clause,
  [11307] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    STATE(499), 1,
      sym_formatting_comment,
    STATE(822), 1,
      sym_update_clause,
  [11323] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
    STATE(500), 1,
      sym_formatting_comment,
    STATE(823), 1,
      sym_update_clause,
  [11339] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(501), 1,
      sym_formatting_comment,
    ACTIONS(789), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11351] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    STATE(502), 2,
      sym_formatting_comment,
      aux_sym_function_expression_repeat1,
  [11365] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    STATE(503), 1,
      sym_formatting_comment,
    STATE(827), 1,
      sym_update_clause,
  [11381] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(504), 1,
      sym_formatting_comment,
    STATE(828), 1,
      sym_update_clause,
  [11397] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      sym_formatting_comment,
    STATE(829), 1,
      sym_update_clause,
  [11413] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    STATE(506), 1,
      sym_formatting_comment,
    STATE(830), 1,
      sym_update_clause,
  [11429] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
    STATE(507), 1,
      sym_formatting_comment,
    STATE(831), 1,
      sym_update_clause,
  [11445] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(508), 1,
      sym_formatting_comment,
    ACTIONS(289), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    ACTIONS(1145), 1,
      anon_sym_RPAREN,
    STATE(509), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_filter_repeat1,
  [11471] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(510), 1,
      sym_formatting_comment,
    ACTIONS(229), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11483] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(511), 1,
      sym_formatting_comment,
    ACTIONS(236), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11495] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(512), 1,
      sym_formatting_comment,
    ACTIONS(293), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11507] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(513), 1,
      sym_formatting_comment,
    ACTIONS(217), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11519] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(514), 1,
      sym_formatting_comment,
    ACTIONS(225), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11531] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(515), 1,
      sym_formatting_comment,
    ACTIONS(268), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11543] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(759), 1,
      ts_builtin_sym_end,
    STATE(516), 1,
      sym_formatting_comment,
    STATE(618), 1,
      sym_update_clause,
  [11559] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(517), 1,
      sym_formatting_comment,
    ACTIONS(175), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11571] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(518), 1,
      sym_formatting_comment,
    ACTIONS(336), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11583] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(463), 1,
      aux_sym_from_clause_token1,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    STATE(519), 2,
      sym_formatting_comment,
      aux_sym_selected_fields_repeat1,
  [11597] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(520), 1,
      sym_formatting_comment,
    ACTIONS(240), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11609] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(521), 1,
      sym_formatting_comment,
    ACTIONS(254), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11621] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    ACTIONS(753), 1,
      aux_sym_or_expression_token1,
    STATE(522), 1,
      sym_formatting_comment,
    STATE(526), 1,
      aux_sym_or_expression_repeat1,
  [11637] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(523), 1,
      sym_formatting_comment,
    ACTIONS(304), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11649] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(524), 1,
      sym_formatting_comment,
    ACTIONS(244), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11661] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(525), 1,
      sym_formatting_comment,
    ACTIONS(316), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11673] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    ACTIONS(1150), 1,
      aux_sym_or_expression_token1,
    STATE(526), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
  [11687] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    STATE(527), 1,
      sym_formatting_comment,
    STATE(774), 1,
      sym_update_clause,
  [11703] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1155), 1,
      anon_sym_RPAREN,
    STATE(528), 1,
      sym_formatting_comment,
    STATE(889), 1,
      sym_update_clause,
  [11719] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(270), 1,
      sym_boolean,
    STATE(529), 1,
      sym_formatting_comment,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [11733] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1157), 1,
      anon_sym_RPAREN,
    STATE(530), 1,
      sym_formatting_comment,
    STATE(595), 1,
      sym_update_clause,
  [11749] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
    STATE(531), 1,
      sym_formatting_comment,
    STATE(533), 1,
      aux_sym_comparable_list_repeat1,
  [11765] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_RPAREN,
    STATE(532), 1,
      sym_formatting_comment,
    STATE(535), 1,
      aux_sym_function_expression_repeat1,
  [11781] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
    STATE(379), 1,
      aux_sym_comparable_list_repeat1,
    STATE(533), 1,
      sym_formatting_comment,
  [11797] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(501), 1,
      sym_update_type,
    STATE(534), 1,
      sym_formatting_comment,
    ACTIONS(861), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [11811] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
    STATE(502), 1,
      aux_sym_function_expression_repeat1,
    STATE(535), 1,
      sym_formatting_comment,
  [11827] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    STATE(536), 1,
      sym_formatting_comment,
    STATE(537), 1,
      aux_sym_function_expression_repeat1,
  [11843] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
    STATE(502), 1,
      aux_sym_function_expression_repeat1,
    STATE(537), 1,
      sym_formatting_comment,
  [11859] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
    STATE(538), 1,
      sym_formatting_comment,
    STATE(658), 1,
      sym_update_clause,
  [11875] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    STATE(539), 1,
      sym_formatting_comment,
    STATE(836), 1,
      sym_update_clause,
  [11891] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1173), 1,
      anon_sym_RPAREN,
    STATE(540), 1,
      sym_formatting_comment,
    STATE(684), 1,
      sym_update_clause,
  [11907] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(541), 1,
      sym_formatting_comment,
    STATE(586), 1,
      sym_offset_clause,
  [11923] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(912), 1,
      sym_identifier,
    STATE(242), 1,
      sym_dotted_identifier,
    STATE(378), 1,
      sym_field_list,
    STATE(542), 1,
      sym_formatting_comment,
  [11939] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1175), 1,
      sym_term_separator_start,
    ACTIONS(1177), 1,
      sym_bound_apex_expression,
    STATE(543), 1,
      sym_formatting_comment,
  [11952] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(544), 1,
      sym_formatting_comment,
    ACTIONS(325), 2,
      anon_sym_RPAREN,
      aux_sym_or_expression_token1,
  [11963] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1179), 1,
      sym_identifier,
    STATE(208), 1,
      sym_sobject_return,
    STATE(545), 1,
      sym_formatting_comment,
  [11976] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1181), 1,
      aux_sym_from_clause_token1,
    STATE(17), 1,
      sym_from_clause,
    STATE(546), 1,
      sym_formatting_comment,
  [11989] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(547), 1,
      sym_formatting_comment,
    ACTIONS(1130), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12000] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(548), 1,
      sym_formatting_comment,
    ACTIONS(1183), 2,
      anon_sym_LPAREN,
      sym_bound_apex_expression,
  [12011] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1185), 1,
      sym_identifier,
    STATE(231), 1,
      sym_dotted_identifier,
    STATE(549), 1,
      sym_formatting_comment,
  [12024] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1179), 1,
      sym_identifier,
    STATE(154), 1,
      sym_sobject_return,
    STATE(550), 1,
      sym_formatting_comment,
  [12037] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(551), 1,
      sym_formatting_comment,
    ACTIONS(1187), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [12048] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(552), 1,
      sym_formatting_comment,
    ACTIONS(1189), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12059] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(553), 1,
      sym_formatting_comment,
    ACTIONS(1073), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12070] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(554), 1,
      sym_formatting_comment,
    ACTIONS(886), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12081] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1191), 1,
      sym_identifier,
    STATE(342), 1,
      sym_dotted_identifier,
    STATE(555), 1,
      sym_formatting_comment,
  [12094] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1193), 1,
      anon_sym_LPAREN,
    ACTIONS(1195), 1,
      sym_identifier,
    STATE(556), 1,
      sym_formatting_comment,
  [12107] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(557), 1,
      sym_formatting_comment,
    ACTIONS(1197), 2,
      sym_bound_apex_expression,
      sym_int,
  [12118] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(558), 1,
      sym_formatting_comment,
    ACTIONS(1199), 2,
      sym_bound_apex_expression,
      sym_string_literal,
  [12129] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(61), 1,
      sym_with_data_cat_filter,
    STATE(559), 1,
      sym_formatting_comment,
  [12142] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(560), 1,
      sym_formatting_comment,
    ACTIONS(1203), 2,
      sym_bound_apex_expression,
      sym_int,
  [12153] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(90), 1,
      sym_with_data_cat_filter,
    STATE(561), 1,
      sym_formatting_comment,
  [12166] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(562), 1,
      sym_formatting_comment,
    ACTIONS(1145), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12177] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1205), 1,
      anon_sym_RPAREN,
    STATE(563), 1,
      sym_formatting_comment,
  [12187] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1207), 1,
      sym_int,
    STATE(564), 1,
      sym_formatting_comment,
  [12197] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1209), 1,
      anon_sym_RPAREN,
    STATE(565), 1,
      sym_formatting_comment,
  [12207] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1211), 1,
      anon_sym_LPAREN,
    STATE(566), 1,
      sym_formatting_comment,
  [12217] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
    STATE(567), 1,
      sym_formatting_comment,
  [12227] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
    STATE(568), 1,
      sym_formatting_comment,
  [12237] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1217), 1,
      anon_sym_RPAREN,
    STATE(569), 1,
      sym_formatting_comment,
  [12247] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
    STATE(570), 1,
      sym_formatting_comment,
  [12257] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1221), 1,
      anon_sym_RPAREN,
    STATE(571), 1,
      sym_formatting_comment,
  [12267] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
    STATE(572), 1,
      sym_formatting_comment,
  [12277] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
    STATE(573), 1,
      sym_formatting_comment,
  [12287] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1227), 1,
      anon_sym_RPAREN,
    STATE(574), 1,
      sym_formatting_comment,
  [12297] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    STATE(575), 1,
      sym_formatting_comment,
  [12307] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
    STATE(576), 1,
      sym_formatting_comment,
  [12317] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1231), 1,
      anon_sym_LPAREN,
    STATE(577), 1,
      sym_formatting_comment,
  [12327] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
    STATE(578), 1,
      sym_formatting_comment,
  [12337] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1235), 1,
      anon_sym_RPAREN,
    STATE(579), 1,
      sym_formatting_comment,
  [12347] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1237), 1,
      anon_sym_RPAREN,
    STATE(580), 1,
      sym_formatting_comment,
  [12357] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1239), 1,
      anon_sym_RPAREN,
    STATE(581), 1,
      sym_formatting_comment,
  [12367] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
    STATE(582), 1,
      sym_formatting_comment,
  [12377] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1243), 1,
      anon_sym_EQ,
    STATE(583), 1,
      sym_formatting_comment,
  [12387] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    STATE(584), 1,
      sym_formatting_comment,
  [12397] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1247), 1,
      anon_sym_EQ,
    STATE(585), 1,
      sym_formatting_comment,
  [12407] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      sym_formatting_comment,
  [12417] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      sym_formatting_comment,
  [12427] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1251), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      sym_formatting_comment,
  [12437] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1253), 1,
      anon_sym_LPAREN,
    STATE(589), 1,
      sym_formatting_comment,
  [12447] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      sym_formatting_comment,
  [12457] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1257), 1,
      anon_sym_RPAREN,
    STATE(591), 1,
      sym_formatting_comment,
  [12467] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
    STATE(592), 1,
      sym_formatting_comment,
  [12477] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      sym_formatting_comment,
  [12487] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
    STATE(594), 1,
      sym_formatting_comment,
  [12497] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1265), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      sym_formatting_comment,
  [12507] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1267), 1,
      aux_sym_in_clause_token2,
    STATE(596), 1,
      sym_formatting_comment,
  [12517] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      sym_formatting_comment,
  [12527] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1271), 1,
      ts_builtin_sym_end,
    STATE(598), 1,
      sym_formatting_comment,
  [12537] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
    STATE(599), 1,
      sym_formatting_comment,
  [12547] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      sym_formatting_comment,
  [12557] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1275), 1,
      sym_identifier,
    STATE(601), 1,
      sym_formatting_comment,
  [12567] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      sym_formatting_comment,
  [12577] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
    STATE(603), 1,
      sym_formatting_comment,
  [12587] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    STATE(604), 1,
      sym_formatting_comment,
  [12597] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      sym_formatting_comment,
  [12607] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      sym_formatting_comment,
  [12617] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1287), 1,
      anon_sym_RPAREN,
    STATE(607), 1,
      sym_formatting_comment,
  [12627] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1289), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      sym_formatting_comment,
  [12637] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
    STATE(609), 1,
      sym_formatting_comment,
  [12647] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      sym_formatting_comment,
  [12657] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1295), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      sym_formatting_comment,
  [12667] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    STATE(612), 1,
      sym_formatting_comment,
  [12677] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1299), 1,
      anon_sym_RPAREN,
    STATE(613), 1,
      sym_formatting_comment,
  [12687] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
    STATE(614), 1,
      sym_formatting_comment,
  [12697] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
    STATE(615), 1,
      sym_formatting_comment,
  [12707] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    STATE(616), 1,
      sym_formatting_comment,
  [12717] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
    STATE(617), 1,
      sym_formatting_comment,
  [12727] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(869), 1,
      ts_builtin_sym_end,
    STATE(618), 1,
      sym_formatting_comment,
  [12737] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
    STATE(619), 1,
      sym_formatting_comment,
  [12747] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
    STATE(620), 1,
      sym_formatting_comment,
  [12757] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1313), 1,
      anon_sym_EQ,
    STATE(621), 1,
      sym_formatting_comment,
  [12767] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1315), 1,
      sym_string_literal,
    STATE(622), 1,
      sym_formatting_comment,
  [12777] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    STATE(623), 1,
      sym_formatting_comment,
  [12787] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
    STATE(624), 1,
      sym_formatting_comment,
  [12797] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1321), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      sym_formatting_comment,
  [12807] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
    STATE(626), 1,
      sym_formatting_comment,
  [12817] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      sym_formatting_comment,
  [12827] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
    STATE(628), 1,
      sym_formatting_comment,
  [12837] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(586), 1,
      aux_sym_type_of_clause_token2,
    STATE(629), 1,
      sym_formatting_comment,
  [12847] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1329), 1,
      anon_sym_LPAREN,
    STATE(630), 1,
      sym_formatting_comment,
  [12857] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
    STATE(631), 1,
      sym_formatting_comment,
  [12867] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1333), 1,
      ts_builtin_sym_end,
    STATE(632), 1,
      sym_formatting_comment,
  [12877] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(633), 1,
      sym_formatting_comment,
  [12887] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      sym_formatting_comment,
  [12897] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    STATE(635), 1,
      sym_formatting_comment,
  [12907] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    STATE(636), 1,
      sym_formatting_comment,
  [12917] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      sym_formatting_comment,
  [12927] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      sym_formatting_comment,
  [12937] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      sym_formatting_comment,
  [12947] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
    STATE(640), 1,
      sym_formatting_comment,
  [12957] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1351), 1,
      sym_identifier,
    STATE(641), 1,
      sym_formatting_comment,
  [12967] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
    STATE(642), 1,
      sym_formatting_comment,
  [12977] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
    STATE(643), 1,
      sym_formatting_comment,
  [12987] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
    STATE(644), 1,
      sym_formatting_comment,
  [12997] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
    STATE(645), 1,
      sym_formatting_comment,
  [13007] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
    STATE(646), 1,
      sym_formatting_comment,
  [13017] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
    STATE(647), 1,
      sym_formatting_comment,
  [13027] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    STATE(648), 1,
      sym_formatting_comment,
  [13037] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1367), 1,
      anon_sym_COMMA,
    STATE(649), 1,
      sym_formatting_comment,
  [13047] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    STATE(650), 1,
      sym_formatting_comment,
  [13057] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
    STATE(651), 1,
      sym_formatting_comment,
  [13067] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
    STATE(652), 1,
      sym_formatting_comment,
  [13077] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      sym_formatting_comment,
  [13087] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
    STATE(654), 1,
      sym_formatting_comment,
  [13097] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1379), 1,
      anon_sym_RPAREN,
    STATE(655), 1,
      sym_formatting_comment,
  [13107] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(656), 1,
      sym_formatting_comment,
  [13117] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1383), 1,
      anon_sym_RPAREN,
    STATE(657), 1,
      sym_formatting_comment,
  [13127] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      sym_formatting_comment,
  [13137] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1387), 1,
      anon_sym_RPAREN,
    STATE(659), 1,
      sym_formatting_comment,
  [13147] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1389), 1,
      anon_sym_LPAREN,
    STATE(660), 1,
      sym_formatting_comment,
  [13157] = 3,
    ACTIONS(1391), 1,
      aux_sym_header_comment_token1,
    ACTIONS(1393), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(661), 1,
      sym_formatting_comment,
  [13167] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
    STATE(662), 1,
      sym_formatting_comment,
  [13177] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
    STATE(663), 1,
      sym_formatting_comment,
  [13187] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
    STATE(664), 1,
      sym_formatting_comment,
  [13197] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1401), 1,
      anon_sym_RPAREN,
    STATE(665), 1,
      sym_formatting_comment,
  [13207] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1403), 1,
      anon_sym_RPAREN,
    STATE(666), 1,
      sym_formatting_comment,
  [13217] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1405), 1,
      anon_sym_RPAREN,
    STATE(667), 1,
      sym_formatting_comment,
  [13227] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
    STATE(668), 1,
      sym_formatting_comment,
  [13237] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
    STATE(669), 1,
      sym_formatting_comment,
  [13247] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1411), 1,
      anon_sym_RPAREN,
    STATE(670), 1,
      sym_formatting_comment,
  [13257] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
    STATE(671), 1,
      sym_formatting_comment,
  [13267] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1415), 1,
      anon_sym_LPAREN,
    STATE(672), 1,
      sym_formatting_comment,
  [13277] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
    STATE(673), 1,
      sym_formatting_comment,
  [13287] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1419), 1,
      anon_sym_RPAREN,
    STATE(674), 1,
      sym_formatting_comment,
  [13297] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
    STATE(675), 1,
      sym_formatting_comment,
  [13307] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1423), 1,
      anon_sym_RPAREN,
    STATE(676), 1,
      sym_formatting_comment,
  [13317] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
    STATE(677), 1,
      sym_formatting_comment,
  [13327] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1427), 1,
      anon_sym_RPAREN,
    STATE(678), 1,
      sym_formatting_comment,
  [13337] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1429), 1,
      anon_sym_RPAREN,
    STATE(679), 1,
      sym_formatting_comment,
  [13347] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
    STATE(680), 1,
      sym_formatting_comment,
  [13357] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1433), 1,
      anon_sym_RPAREN,
    STATE(681), 1,
      sym_formatting_comment,
  [13367] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1435), 1,
      anon_sym_RPAREN,
    STATE(682), 1,
      sym_formatting_comment,
  [13377] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1437), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      sym_formatting_comment,
  [13387] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    STATE(684), 1,
      sym_formatting_comment,
  [13397] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1441), 1,
      anon_sym_RPAREN,
    STATE(685), 1,
      sym_formatting_comment,
  [13407] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1443), 1,
      anon_sym_RPAREN,
    STATE(686), 1,
      sym_formatting_comment,
  [13417] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1445), 1,
      anon_sym_RPAREN,
    STATE(687), 1,
      sym_formatting_comment,
  [13427] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1447), 1,
      anon_sym_RPAREN,
    STATE(688), 1,
      sym_formatting_comment,
  [13437] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1449), 1,
      anon_sym_RPAREN,
    STATE(689), 1,
      sym_formatting_comment,
  [13447] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1451), 1,
      anon_sym_RPAREN,
    STATE(690), 1,
      sym_formatting_comment,
  [13457] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    STATE(691), 1,
      sym_formatting_comment,
  [13467] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1455), 1,
      anon_sym_RPAREN,
    STATE(692), 1,
      sym_formatting_comment,
  [13477] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
    STATE(693), 1,
      sym_formatting_comment,
  [13487] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
    STATE(694), 1,
      sym_formatting_comment,
  [13497] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1461), 1,
      sym_decimal,
    STATE(695), 1,
      sym_formatting_comment,
  [13507] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1463), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_formatting_comment,
  [13517] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1465), 1,
      anon_sym_RPAREN,
    STATE(697), 1,
      sym_formatting_comment,
  [13527] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1467), 1,
      anon_sym_EQ,
    STATE(698), 1,
      sym_formatting_comment,
  [13537] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1469), 1,
      anon_sym_RPAREN,
    STATE(699), 1,
      sym_formatting_comment,
  [13547] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1471), 1,
      anon_sym_RPAREN,
    STATE(700), 1,
      sym_formatting_comment,
  [13557] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1473), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_formatting_comment,
  [13567] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1475), 1,
      anon_sym_RPAREN,
    STATE(702), 1,
      sym_formatting_comment,
  [13577] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1477), 1,
      anon_sym_RPAREN,
    STATE(703), 1,
      sym_formatting_comment,
  [13587] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1479), 1,
      anon_sym_RPAREN,
    STATE(704), 1,
      sym_formatting_comment,
  [13597] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1481), 1,
      anon_sym_RPAREN,
    STATE(705), 1,
      sym_formatting_comment,
  [13607] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
    STATE(706), 1,
      sym_formatting_comment,
  [13617] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1485), 1,
      anon_sym_RPAREN,
    STATE(707), 1,
      sym_formatting_comment,
  [13627] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1487), 1,
      anon_sym_RPAREN,
    STATE(708), 1,
      sym_formatting_comment,
  [13637] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
    STATE(709), 1,
      sym_formatting_comment,
  [13647] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
    STATE(710), 1,
      sym_formatting_comment,
  [13657] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1493), 1,
      anon_sym_RPAREN,
    STATE(711), 1,
      sym_formatting_comment,
  [13667] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1495), 1,
      anon_sym_RPAREN,
    STATE(712), 1,
      sym_formatting_comment,
  [13677] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
    STATE(713), 1,
      sym_formatting_comment,
  [13687] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1499), 1,
      anon_sym_RPAREN,
    STATE(714), 1,
      sym_formatting_comment,
  [13697] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1501), 1,
      anon_sym_RPAREN,
    STATE(715), 1,
      sym_formatting_comment,
  [13707] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
    STATE(716), 1,
      sym_formatting_comment,
  [13717] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1505), 1,
      anon_sym_RPAREN,
    STATE(717), 1,
      sym_formatting_comment,
  [13727] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1507), 1,
      ts_builtin_sym_end,
    STATE(718), 1,
      sym_formatting_comment,
  [13737] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1509), 1,
      anon_sym_RPAREN,
    STATE(719), 1,
      sym_formatting_comment,
  [13747] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1511), 1,
      anon_sym_RPAREN,
    STATE(720), 1,
      sym_formatting_comment,
  [13757] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1513), 1,
      anon_sym_RPAREN,
    STATE(721), 1,
      sym_formatting_comment,
  [13767] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1515), 1,
      anon_sym_RPAREN,
    STATE(722), 1,
      sym_formatting_comment,
  [13777] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(723), 1,
      sym_formatting_comment,
  [13787] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
    STATE(724), 1,
      sym_formatting_comment,
  [13797] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1519), 1,
      anon_sym_RPAREN,
    STATE(725), 1,
      sym_formatting_comment,
  [13807] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1521), 1,
      anon_sym_RPAREN,
    STATE(726), 1,
      sym_formatting_comment,
  [13817] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1523), 1,
      sym_int,
    STATE(727), 1,
      sym_formatting_comment,
  [13827] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1525), 1,
      anon_sym_RPAREN,
    STATE(728), 1,
      sym_formatting_comment,
  [13837] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1527), 1,
      anon_sym_RPAREN,
    STATE(729), 1,
      sym_formatting_comment,
  [13847] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1529), 1,
      anon_sym_RPAREN,
    STATE(730), 1,
      sym_formatting_comment,
  [13857] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1531), 1,
      anon_sym_RPAREN,
    STATE(731), 1,
      sym_formatting_comment,
  [13867] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    STATE(732), 1,
      sym_formatting_comment,
  [13877] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1533), 1,
      anon_sym_RPAREN,
    STATE(733), 1,
      sym_formatting_comment,
  [13887] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1535), 1,
      anon_sym_RPAREN,
    STATE(734), 1,
      sym_formatting_comment,
  [13897] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1537), 1,
      anon_sym_RPAREN,
    STATE(735), 1,
      sym_formatting_comment,
  [13907] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1539), 1,
      anon_sym_RPAREN,
    STATE(736), 1,
      sym_formatting_comment,
  [13917] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1541), 1,
      anon_sym_RPAREN,
    STATE(737), 1,
      sym_formatting_comment,
  [13927] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1543), 1,
      anon_sym_RPAREN,
    STATE(738), 1,
      sym_formatting_comment,
  [13937] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1545), 1,
      anon_sym_RPAREN,
    STATE(739), 1,
      sym_formatting_comment,
  [13947] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1547), 1,
      anon_sym_RPAREN,
    STATE(740), 1,
      sym_formatting_comment,
  [13957] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1549), 1,
      anon_sym_RPAREN,
    STATE(741), 1,
      sym_formatting_comment,
  [13967] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1551), 1,
      anon_sym_RPAREN,
    STATE(742), 1,
      sym_formatting_comment,
  [13977] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1553), 1,
      anon_sym_RPAREN,
    STATE(743), 1,
      sym_formatting_comment,
  [13987] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1555), 1,
      anon_sym_RPAREN,
    STATE(744), 1,
      sym_formatting_comment,
  [13997] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1557), 1,
      anon_sym_RPAREN,
    STATE(745), 1,
      sym_formatting_comment,
  [14007] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1559), 1,
      anon_sym_RPAREN,
    STATE(746), 1,
      sym_formatting_comment,
  [14017] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1561), 1,
      anon_sym_RPAREN,
    STATE(747), 1,
      sym_formatting_comment,
  [14027] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1563), 1,
      anon_sym_RPAREN,
    STATE(748), 1,
      sym_formatting_comment,
  [14037] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1565), 1,
      anon_sym_RPAREN,
    STATE(749), 1,
      sym_formatting_comment,
  [14047] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1567), 1,
      anon_sym_RPAREN,
    STATE(750), 1,
      sym_formatting_comment,
  [14057] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1569), 1,
      anon_sym_RPAREN,
    STATE(751), 1,
      sym_formatting_comment,
  [14067] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1571), 1,
      anon_sym_RPAREN,
    STATE(752), 1,
      sym_formatting_comment,
  [14077] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1573), 1,
      anon_sym_RPAREN,
    STATE(753), 1,
      sym_formatting_comment,
  [14087] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1575), 1,
      anon_sym_RPAREN,
    STATE(754), 1,
      sym_formatting_comment,
  [14097] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1577), 1,
      aux_sym_in_clause_token2,
    STATE(755), 1,
      sym_formatting_comment,
  [14107] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1579), 1,
      anon_sym_RPAREN,
    STATE(756), 1,
      sym_formatting_comment,
  [14117] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1581), 1,
      anon_sym_RPAREN,
    STATE(757), 1,
      sym_formatting_comment,
  [14127] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1583), 1,
      anon_sym_RPAREN,
    STATE(758), 1,
      sym_formatting_comment,
  [14137] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1585), 1,
      anon_sym_RPAREN,
    STATE(759), 1,
      sym_formatting_comment,
  [14147] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(760), 1,
      sym_formatting_comment,
  [14157] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1587), 1,
      anon_sym_RPAREN,
    STATE(761), 1,
      sym_formatting_comment,
  [14167] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1589), 1,
      anon_sym_RPAREN,
    STATE(762), 1,
      sym_formatting_comment,
  [14177] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1591), 1,
      anon_sym_RPAREN,
    STATE(763), 1,
      sym_formatting_comment,
  [14187] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1593), 1,
      anon_sym_RPAREN,
    STATE(764), 1,
      sym_formatting_comment,
  [14197] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1595), 1,
      anon_sym_RPAREN,
    STATE(765), 1,
      sym_formatting_comment,
  [14207] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1597), 1,
      anon_sym_RPAREN,
    STATE(766), 1,
      sym_formatting_comment,
  [14217] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1599), 1,
      anon_sym_RPAREN,
    STATE(767), 1,
      sym_formatting_comment,
  [14227] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1601), 1,
      anon_sym_RPAREN,
    STATE(768), 1,
      sym_formatting_comment,
  [14237] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1603), 1,
      anon_sym_RPAREN,
    STATE(769), 1,
      sym_formatting_comment,
  [14247] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1605), 1,
      anon_sym_RPAREN,
    STATE(770), 1,
      sym_formatting_comment,
  [14257] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1607), 1,
      anon_sym_RPAREN,
    STATE(771), 1,
      sym_formatting_comment,
  [14267] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1609), 1,
      anon_sym_RPAREN,
    STATE(772), 1,
      sym_formatting_comment,
  [14277] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1611), 1,
      anon_sym_RPAREN,
    STATE(773), 1,
      sym_formatting_comment,
  [14287] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1613), 1,
      anon_sym_RPAREN,
    STATE(774), 1,
      sym_formatting_comment,
  [14297] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1615), 1,
      anon_sym_RPAREN,
    STATE(775), 1,
      sym_formatting_comment,
  [14307] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1617), 1,
      anon_sym_RPAREN,
    STATE(776), 1,
      sym_formatting_comment,
  [14317] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1619), 1,
      anon_sym_RPAREN,
    STATE(777), 1,
      sym_formatting_comment,
  [14327] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1621), 1,
      anon_sym_RPAREN,
    STATE(778), 1,
      sym_formatting_comment,
  [14337] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1623), 1,
      anon_sym_RPAREN,
    STATE(779), 1,
      sym_formatting_comment,
  [14347] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1625), 1,
      anon_sym_RPAREN,
    STATE(780), 1,
      sym_formatting_comment,
  [14357] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1627), 1,
      anon_sym_RPAREN,
    STATE(781), 1,
      sym_formatting_comment,
  [14367] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1629), 1,
      anon_sym_RPAREN,
    STATE(782), 1,
      sym_formatting_comment,
  [14377] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1631), 1,
      anon_sym_RPAREN,
    STATE(783), 1,
      sym_formatting_comment,
  [14387] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1633), 1,
      anon_sym_RPAREN,
    STATE(784), 1,
      sym_formatting_comment,
  [14397] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1635), 1,
      anon_sym_RPAREN,
    STATE(785), 1,
      sym_formatting_comment,
  [14407] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1637), 1,
      anon_sym_RPAREN,
    STATE(786), 1,
      sym_formatting_comment,
  [14417] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1639), 1,
      anon_sym_RPAREN,
    STATE(787), 1,
      sym_formatting_comment,
  [14427] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1641), 1,
      sym_int,
    STATE(788), 1,
      sym_formatting_comment,
  [14437] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1643), 1,
      anon_sym_RPAREN,
    STATE(789), 1,
      sym_formatting_comment,
  [14447] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1645), 1,
      anon_sym_RPAREN,
    STATE(790), 1,
      sym_formatting_comment,
  [14457] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1647), 1,
      anon_sym_RPAREN,
    STATE(791), 1,
      sym_formatting_comment,
  [14467] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1649), 1,
      anon_sym_RPAREN,
    STATE(792), 1,
      sym_formatting_comment,
  [14477] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1651), 1,
      anon_sym_RPAREN,
    STATE(793), 1,
      sym_formatting_comment,
  [14487] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1653), 1,
      anon_sym_RPAREN,
    STATE(794), 1,
      sym_formatting_comment,
  [14497] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1655), 1,
      anon_sym_RPAREN,
    STATE(795), 1,
      sym_formatting_comment,
  [14507] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1657), 1,
      anon_sym_RPAREN,
    STATE(796), 1,
      sym_formatting_comment,
  [14517] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1659), 1,
      sym_decimal,
    STATE(797), 1,
      sym_formatting_comment,
  [14527] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1661), 1,
      anon_sym_RPAREN,
    STATE(798), 1,
      sym_formatting_comment,
  [14537] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1663), 1,
      anon_sym_RPAREN,
    STATE(799), 1,
      sym_formatting_comment,
  [14547] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1665), 1,
      anon_sym_RPAREN,
    STATE(800), 1,
      sym_formatting_comment,
  [14557] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1667), 1,
      anon_sym_RPAREN,
    STATE(801), 1,
      sym_formatting_comment,
  [14567] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1669), 1,
      anon_sym_RPAREN,
    STATE(802), 1,
      sym_formatting_comment,
  [14577] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1671), 1,
      sym_string_literal,
    STATE(803), 1,
      sym_formatting_comment,
  [14587] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1673), 1,
      anon_sym_RPAREN,
    STATE(804), 1,
      sym_formatting_comment,
  [14597] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1675), 1,
      anon_sym_RPAREN,
    STATE(805), 1,
      sym_formatting_comment,
  [14607] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1677), 1,
      anon_sym_RPAREN,
    STATE(806), 1,
      sym_formatting_comment,
  [14617] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1679), 1,
      anon_sym_RPAREN,
    STATE(807), 1,
      sym_formatting_comment,
  [14627] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1681), 1,
      anon_sym_RPAREN,
    STATE(808), 1,
      sym_formatting_comment,
  [14637] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1683), 1,
      anon_sym_RPAREN,
    STATE(809), 1,
      sym_formatting_comment,
  [14647] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1685), 1,
      anon_sym_RPAREN,
    STATE(810), 1,
      sym_formatting_comment,
  [14657] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1687), 1,
      anon_sym_RPAREN,
    STATE(811), 1,
      sym_formatting_comment,
  [14667] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1689), 1,
      anon_sym_RPAREN,
    STATE(812), 1,
      sym_formatting_comment,
  [14677] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1691), 1,
      anon_sym_RPAREN,
    STATE(813), 1,
      sym_formatting_comment,
  [14687] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1693), 1,
      anon_sym_RPAREN,
    STATE(814), 1,
      sym_formatting_comment,
  [14697] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1695), 1,
      anon_sym_RPAREN,
    STATE(815), 1,
      sym_formatting_comment,
  [14707] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1697), 1,
      sym_identifier,
    STATE(816), 1,
      sym_formatting_comment,
  [14717] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1699), 1,
      anon_sym_RPAREN,
    STATE(817), 1,
      sym_formatting_comment,
  [14727] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1701), 1,
      anon_sym_RPAREN,
    STATE(818), 1,
      sym_formatting_comment,
  [14737] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1703), 1,
      anon_sym_RPAREN,
    STATE(819), 1,
      sym_formatting_comment,
  [14747] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1705), 1,
      anon_sym_RPAREN,
    STATE(820), 1,
      sym_formatting_comment,
  [14757] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1707), 1,
      anon_sym_COMMA,
    STATE(821), 1,
      sym_formatting_comment,
  [14767] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1709), 1,
      anon_sym_RPAREN,
    STATE(822), 1,
      sym_formatting_comment,
  [14777] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1711), 1,
      anon_sym_RPAREN,
    STATE(823), 1,
      sym_formatting_comment,
  [14787] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1713), 1,
      anon_sym_RPAREN,
    STATE(824), 1,
      sym_formatting_comment,
  [14797] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(825), 1,
      sym_formatting_comment,
  [14807] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1715), 1,
      anon_sym_RPAREN,
    STATE(826), 1,
      sym_formatting_comment,
  [14817] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1717), 1,
      anon_sym_RPAREN,
    STATE(827), 1,
      sym_formatting_comment,
  [14827] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1719), 1,
      anon_sym_RPAREN,
    STATE(828), 1,
      sym_formatting_comment,
  [14837] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1721), 1,
      anon_sym_RPAREN,
    STATE(829), 1,
      sym_formatting_comment,
  [14847] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1723), 1,
      anon_sym_RPAREN,
    STATE(830), 1,
      sym_formatting_comment,
  [14857] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1725), 1,
      anon_sym_RPAREN,
    STATE(831), 1,
      sym_formatting_comment,
  [14867] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1727), 1,
      aux_sym_find_clause_token1,
    STATE(832), 1,
      sym_formatting_comment,
  [14877] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1729), 1,
      anon_sym_RPAREN,
    STATE(833), 1,
      sym_formatting_comment,
  [14887] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1731), 1,
      anon_sym_RPAREN,
    STATE(834), 1,
      sym_formatting_comment,
  [14897] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1733), 1,
      anon_sym_RPAREN,
    STATE(835), 1,
      sym_formatting_comment,
  [14907] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(759), 1,
      ts_builtin_sym_end,
    STATE(836), 1,
      sym_formatting_comment,
  [14917] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1735), 1,
      anon_sym_RPAREN,
    STATE(837), 1,
      sym_formatting_comment,
  [14927] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1737), 1,
      anon_sym_RPAREN,
    STATE(838), 1,
      sym_formatting_comment,
  [14937] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1739), 1,
      anon_sym_RPAREN,
    STATE(839), 1,
      sym_formatting_comment,
  [14947] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1741), 1,
      sym_identifier,
    STATE(840), 1,
      sym_formatting_comment,
  [14957] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1743), 1,
      anon_sym_COLON,
    STATE(841), 1,
      sym_formatting_comment,
  [14967] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1745), 1,
      anon_sym_RPAREN,
    STATE(842), 1,
      sym_formatting_comment,
  [14977] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1747), 1,
      anon_sym_EQ,
    STATE(843), 1,
      sym_formatting_comment,
  [14987] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1749), 1,
      ts_builtin_sym_end,
    STATE(844), 1,
      sym_formatting_comment,
  [14997] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1751), 1,
      anon_sym_RPAREN,
    STATE(845), 1,
      sym_formatting_comment,
  [15007] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1753), 1,
      anon_sym_EQ,
    STATE(846), 1,
      sym_formatting_comment,
  [15017] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1755), 1,
      sym_string_literal,
    STATE(847), 1,
      sym_formatting_comment,
  [15027] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1757), 1,
      ts_builtin_sym_end,
    STATE(848), 1,
      sym_formatting_comment,
  [15037] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1759), 1,
      anon_sym_RPAREN,
    STATE(849), 1,
      sym_formatting_comment,
  [15047] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1761), 1,
      anon_sym_EQ,
    STATE(850), 1,
      sym_formatting_comment,
  [15057] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1763), 1,
      anon_sym_RPAREN,
    STATE(851), 1,
      sym_formatting_comment,
  [15067] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1765), 1,
      anon_sym_RPAREN,
    STATE(852), 1,
      sym_formatting_comment,
  [15077] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1767), 1,
      sym_identifier,
    STATE(853), 1,
      sym_formatting_comment,
  [15087] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1769), 1,
      anon_sym_RPAREN,
    STATE(854), 1,
      sym_formatting_comment,
  [15097] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1771), 1,
      anon_sym_RPAREN,
    STATE(855), 1,
      sym_formatting_comment,
  [15107] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1773), 1,
      anon_sym_RPAREN,
    STATE(856), 1,
      sym_formatting_comment,
  [15117] = 3,
    ACTIONS(1393), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1775), 1,
      sym_term,
    STATE(857), 1,
      sym_formatting_comment,
  [15127] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1777), 1,
      sym_term_separator_end,
    STATE(858), 1,
      sym_formatting_comment,
  [15137] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1779), 1,
      anon_sym_RPAREN,
    STATE(859), 1,
      sym_formatting_comment,
  [15147] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1781), 1,
      anon_sym_RPAREN,
    STATE(860), 1,
      sym_formatting_comment,
  [15157] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1783), 1,
      anon_sym_EQ,
    STATE(861), 1,
      sym_formatting_comment,
  [15167] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1785), 1,
      sym_string_literal,
    STATE(862), 1,
      sym_formatting_comment,
  [15177] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1787), 1,
      aux_sym_from_clause_token1,
    STATE(863), 1,
      sym_formatting_comment,
  [15187] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1789), 1,
      aux_sym_with_snippet_expression_token2,
    STATE(864), 1,
      sym_formatting_comment,
  [15197] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1791), 1,
      anon_sym_RPAREN,
    STATE(865), 1,
      sym_formatting_comment,
  [15207] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1793), 1,
      sym_identifier,
    STATE(866), 1,
      sym_formatting_comment,
  [15217] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1795), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_formatting_comment,
  [15227] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1797), 1,
      anon_sym_RPAREN,
    STATE(868), 1,
      sym_formatting_comment,
  [15237] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1799), 1,
      anon_sym_RPAREN,
    STATE(869), 1,
      sym_formatting_comment,
  [15247] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1801), 1,
      anon_sym_RPAREN,
    STATE(870), 1,
      sym_formatting_comment,
  [15257] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1803), 1,
      anon_sym_RPAREN,
    STATE(871), 1,
      sym_formatting_comment,
  [15267] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(890), 1,
      aux_sym_from_clause_token1,
    STATE(872), 1,
      sym_formatting_comment,
  [15277] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1805), 1,
      aux_sym_using_clause_token2,
    STATE(873), 1,
      sym_formatting_comment,
  [15287] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1807), 1,
      aux_sym_when_expression_token2,
    STATE(874), 1,
      sym_formatting_comment,
  [15297] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1809), 1,
      anon_sym_EQ,
    STATE(875), 1,
      sym_formatting_comment,
  [15307] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1811), 1,
      anon_sym_RPAREN,
    STATE(876), 1,
      sym_formatting_comment,
  [15317] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1813), 1,
      sym_identifier,
    STATE(877), 1,
      sym_formatting_comment,
  [15327] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1815), 1,
      sym_int,
    STATE(878), 1,
      sym_formatting_comment,
  [15337] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1817), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_formatting_comment,
  [15347] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1819), 1,
      anon_sym_RPAREN,
    STATE(880), 1,
      sym_formatting_comment,
  [15357] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1821), 1,
      anon_sym_RPAREN,
    STATE(881), 1,
      sym_formatting_comment,
  [15367] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1823), 1,
      sym_identifier,
    STATE(882), 1,
      sym_formatting_comment,
  [15377] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1825), 1,
      anon_sym_RPAREN,
    STATE(883), 1,
      sym_formatting_comment,
  [15387] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1827), 1,
      anon_sym_RPAREN,
    STATE(884), 1,
      sym_formatting_comment,
  [15397] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1829), 1,
      anon_sym_RPAREN,
    STATE(885), 1,
      sym_formatting_comment,
  [15407] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1831), 1,
      anon_sym_RPAREN,
    STATE(886), 1,
      sym_formatting_comment,
  [15417] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1833), 1,
      sym_identifier,
    STATE(887), 1,
      sym_formatting_comment,
  [15427] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1835), 1,
      anon_sym_RPAREN,
    STATE(888), 1,
      sym_formatting_comment,
  [15437] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1837), 1,
      anon_sym_RPAREN,
    STATE(889), 1,
      sym_formatting_comment,
  [15447] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1839), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_formatting_comment,
  [15457] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1841), 1,
      sym_identifier,
    STATE(891), 1,
      sym_formatting_comment,
  [15467] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1843), 1,
      anon_sym_COLON,
    STATE(892), 1,
      sym_formatting_comment,
  [15477] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1845), 1,
      aux_sym_type_of_clause_token2,
    STATE(893), 1,
      sym_formatting_comment,
  [15487] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1847), 1,
      anon_sym_RPAREN,
    STATE(894), 1,
      sym_formatting_comment,
  [15497] = 3,
    ACTIONS(1393), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1849), 1,
      aux_sym_header_comment_token1,
    STATE(895), 1,
      sym_formatting_comment,
  [15507] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1851), 1,
      sym_string_literal,
    STATE(896), 1,
      sym_formatting_comment,
  [15517] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1853), 1,
      aux_sym_type_of_clause_token2,
    STATE(897), 1,
      sym_formatting_comment,
  [15527] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1855), 1,
      sym_string_literal,
    STATE(898), 1,
      sym_formatting_comment,
  [15537] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1857), 1,
      anon_sym_LPAREN,
    STATE(899), 1,
      sym_formatting_comment,
  [15547] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1859), 1,
      anon_sym_COMMA,
    STATE(900), 1,
      sym_formatting_comment,
  [15557] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1861), 1,
      anon_sym_LPAREN,
    STATE(901), 1,
      sym_formatting_comment,
  [15567] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1863), 1,
      anon_sym_COMMA,
    STATE(902), 1,
      sym_formatting_comment,
  [15577] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1865), 1,
      anon_sym_RPAREN,
    STATE(903), 1,
      sym_formatting_comment,
  [15587] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1867), 1,
      anon_sym_RPAREN,
    STATE(904), 1,
      sym_formatting_comment,
  [15597] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1869), 1,
      anon_sym_COMMA,
    STATE(905), 1,
      sym_formatting_comment,
  [15607] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1871), 1,
      anon_sym_COMMA,
    STATE(906), 1,
      sym_formatting_comment,
  [15617] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1873), 1,
      anon_sym_COMMA,
    STATE(907), 1,
      sym_formatting_comment,
  [15627] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1875), 1,
      anon_sym_RPAREN,
    STATE(908), 1,
      sym_formatting_comment,
  [15637] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1877), 1,
      anon_sym_LPAREN,
    STATE(909), 1,
      sym_formatting_comment,
  [15647] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1879), 1,
      anon_sym_LPAREN,
    STATE(910), 1,
      sym_formatting_comment,
  [15657] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1881), 1,
      anon_sym_RPAREN,
    STATE(911), 1,
      sym_formatting_comment,
  [15667] = 1,
    ACTIONS(1883), 1,
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
  [SMALL_STATE(9)] = 425,
  [SMALL_STATE(10)] = 469,
  [SMALL_STATE(11)] = 508,
  [SMALL_STATE(12)] = 552,
  [SMALL_STATE(13)] = 587,
  [SMALL_STATE(14)] = 622,
  [SMALL_STATE(15)] = 657,
  [SMALL_STATE(16)] = 692,
  [SMALL_STATE(17)] = 725,
  [SMALL_STATE(18)] = 789,
  [SMALL_STATE(19)] = 833,
  [SMALL_STATE(20)] = 873,
  [SMALL_STATE(21)] = 913,
  [SMALL_STATE(22)] = 971,
  [SMALL_STATE(23)] = 1011,
  [SMALL_STATE(24)] = 1058,
  [SMALL_STATE(25)] = 1105,
  [SMALL_STATE(26)] = 1157,
  [SMALL_STATE(27)] = 1187,
  [SMALL_STATE(28)] = 1215,
  [SMALL_STATE(29)] = 1261,
  [SMALL_STATE(30)] = 1307,
  [SMALL_STATE(31)] = 1359,
  [SMALL_STATE(32)] = 1411,
  [SMALL_STATE(33)] = 1457,
  [SMALL_STATE(34)] = 1503,
  [SMALL_STATE(35)] = 1533,
  [SMALL_STATE(36)] = 1559,
  [SMALL_STATE(37)] = 1603,
  [SMALL_STATE(38)] = 1647,
  [SMALL_STATE(39)] = 1672,
  [SMALL_STATE(40)] = 1705,
  [SMALL_STATE(41)] = 1729,
  [SMALL_STATE(42)] = 1775,
  [SMALL_STATE(43)] = 1821,
  [SMALL_STATE(44)] = 1867,
  [SMALL_STATE(45)] = 1913,
  [SMALL_STATE(46)] = 1959,
  [SMALL_STATE(47)] = 1987,
  [SMALL_STATE(48)] = 2033,
  [SMALL_STATE(49)] = 2079,
  [SMALL_STATE(50)] = 2108,
  [SMALL_STATE(51)] = 2137,
  [SMALL_STATE(52)] = 2160,
  [SMALL_STATE(53)] = 2189,
  [SMALL_STATE(54)] = 2214,
  [SMALL_STATE(55)] = 2237,
  [SMALL_STATE(56)] = 2260,
  [SMALL_STATE(57)] = 2285,
  [SMALL_STATE(58)] = 2308,
  [SMALL_STATE(59)] = 2331,
  [SMALL_STATE(60)] = 2354,
  [SMALL_STATE(61)] = 2376,
  [SMALL_STATE(62)] = 2400,
  [SMALL_STATE(63)] = 2440,
  [SMALL_STATE(64)] = 2462,
  [SMALL_STATE(65)] = 2502,
  [SMALL_STATE(66)] = 2542,
  [SMALL_STATE(67)] = 2582,
  [SMALL_STATE(68)] = 2602,
  [SMALL_STATE(69)] = 2622,
  [SMALL_STATE(70)] = 2644,
  [SMALL_STATE(71)] = 2684,
  [SMALL_STATE(72)] = 2724,
  [SMALL_STATE(73)] = 2744,
  [SMALL_STATE(74)] = 2784,
  [SMALL_STATE(75)] = 2824,
  [SMALL_STATE(76)] = 2848,
  [SMALL_STATE(77)] = 2874,
  [SMALL_STATE(78)] = 2896,
  [SMALL_STATE(79)] = 2918,
  [SMALL_STATE(80)] = 2940,
  [SMALL_STATE(81)] = 2964,
  [SMALL_STATE(82)] = 3004,
  [SMALL_STATE(83)] = 3039,
  [SMALL_STATE(84)] = 3074,
  [SMALL_STATE(85)] = 3097,
  [SMALL_STATE(86)] = 3134,
  [SMALL_STATE(87)] = 3155,
  [SMALL_STATE(88)] = 3184,
  [SMALL_STATE(89)] = 3221,
  [SMALL_STATE(90)] = 3240,
  [SMALL_STATE(91)] = 3259,
  [SMALL_STATE(92)] = 3280,
  [SMALL_STATE(93)] = 3301,
  [SMALL_STATE(94)] = 3322,
  [SMALL_STATE(95)] = 3343,
  [SMALL_STATE(96)] = 3362,
  [SMALL_STATE(97)] = 3385,
  [SMALL_STATE(98)] = 3420,
  [SMALL_STATE(99)] = 3439,
  [SMALL_STATE(100)] = 3460,
  [SMALL_STATE(101)] = 3495,
  [SMALL_STATE(102)] = 3532,
  [SMALL_STATE(103)] = 3566,
  [SMALL_STATE(104)] = 3586,
  [SMALL_STATE(105)] = 3610,
  [SMALL_STATE(106)] = 3630,
  [SMALL_STATE(107)] = 3650,
  [SMALL_STATE(108)] = 3684,
  [SMALL_STATE(109)] = 3706,
  [SMALL_STATE(110)] = 3726,
  [SMALL_STATE(111)] = 3744,
  [SMALL_STATE(112)] = 3762,
  [SMALL_STATE(113)] = 3784,
  [SMALL_STATE(114)] = 3818,
  [SMALL_STATE(115)] = 3852,
  [SMALL_STATE(116)] = 3886,
  [SMALL_STATE(117)] = 3904,
  [SMALL_STATE(118)] = 3924,
  [SMALL_STATE(119)] = 3958,
  [SMALL_STATE(120)] = 3978,
  [SMALL_STATE(121)] = 4000,
  [SMALL_STATE(122)] = 4034,
  [SMALL_STATE(123)] = 4068,
  [SMALL_STATE(124)] = 4102,
  [SMALL_STATE(125)] = 4136,
  [SMALL_STATE(126)] = 4170,
  [SMALL_STATE(127)] = 4204,
  [SMALL_STATE(128)] = 4224,
  [SMALL_STATE(129)] = 4258,
  [SMALL_STATE(130)] = 4292,
  [SMALL_STATE(131)] = 4326,
  [SMALL_STATE(132)] = 4360,
  [SMALL_STATE(133)] = 4394,
  [SMALL_STATE(134)] = 4423,
  [SMALL_STATE(135)] = 4440,
  [SMALL_STATE(136)] = 4457,
  [SMALL_STATE(137)] = 4474,
  [SMALL_STATE(138)] = 4495,
  [SMALL_STATE(139)] = 4516,
  [SMALL_STATE(140)] = 4533,
  [SMALL_STATE(141)] = 4550,
  [SMALL_STATE(142)] = 4581,
  [SMALL_STATE(143)] = 4598,
  [SMALL_STATE(144)] = 4617,
  [SMALL_STATE(145)] = 4646,
  [SMALL_STATE(146)] = 4663,
  [SMALL_STATE(147)] = 4680,
  [SMALL_STATE(148)] = 4697,
  [SMALL_STATE(149)] = 4726,
  [SMALL_STATE(150)] = 4745,
  [SMALL_STATE(151)] = 4766,
  [SMALL_STATE(152)] = 4787,
  [SMALL_STATE(153)] = 4808,
  [SMALL_STATE(154)] = 4829,
  [SMALL_STATE(155)] = 4850,
  [SMALL_STATE(156)] = 4867,
  [SMALL_STATE(157)] = 4884,
  [SMALL_STATE(158)] = 4901,
  [SMALL_STATE(159)] = 4918,
  [SMALL_STATE(160)] = 4937,
  [SMALL_STATE(161)] = 4965,
  [SMALL_STATE(162)] = 4981,
  [SMALL_STATE(163)] = 5005,
  [SMALL_STATE(164)] = 5033,
  [SMALL_STATE(165)] = 5053,
  [SMALL_STATE(166)] = 5081,
  [SMALL_STATE(167)] = 5107,
  [SMALL_STATE(168)] = 5135,
  [SMALL_STATE(169)] = 5163,
  [SMALL_STATE(170)] = 5191,
  [SMALL_STATE(171)] = 5207,
  [SMALL_STATE(172)] = 5235,
  [SMALL_STATE(173)] = 5263,
  [SMALL_STATE(174)] = 5291,
  [SMALL_STATE(175)] = 5319,
  [SMALL_STATE(176)] = 5347,
  [SMALL_STATE(177)] = 5373,
  [SMALL_STATE(178)] = 5401,
  [SMALL_STATE(179)] = 5429,
  [SMALL_STATE(180)] = 5445,
  [SMALL_STATE(181)] = 5473,
  [SMALL_STATE(182)] = 5489,
  [SMALL_STATE(183)] = 5505,
  [SMALL_STATE(184)] = 5533,
  [SMALL_STATE(185)] = 5549,
  [SMALL_STATE(186)] = 5577,
  [SMALL_STATE(187)] = 5605,
  [SMALL_STATE(188)] = 5633,
  [SMALL_STATE(189)] = 5661,
  [SMALL_STATE(190)] = 5689,
  [SMALL_STATE(191)] = 5717,
  [SMALL_STATE(192)] = 5745,
  [SMALL_STATE(193)] = 5773,
  [SMALL_STATE(194)] = 5801,
  [SMALL_STATE(195)] = 5829,
  [SMALL_STATE(196)] = 5857,
  [SMALL_STATE(197)] = 5885,
  [SMALL_STATE(198)] = 5901,
  [SMALL_STATE(199)] = 5917,
  [SMALL_STATE(200)] = 5945,
  [SMALL_STATE(201)] = 5973,
  [SMALL_STATE(202)] = 5989,
  [SMALL_STATE(203)] = 6017,
  [SMALL_STATE(204)] = 6045,
  [SMALL_STATE(205)] = 6073,
  [SMALL_STATE(206)] = 6089,
  [SMALL_STATE(207)] = 6105,
  [SMALL_STATE(208)] = 6133,
  [SMALL_STATE(209)] = 6149,
  [SMALL_STATE(210)] = 6173,
  [SMALL_STATE(211)] = 6191,
  [SMALL_STATE(212)] = 6211,
  [SMALL_STATE(213)] = 6227,
  [SMALL_STATE(214)] = 6255,
  [SMALL_STATE(215)] = 6271,
  [SMALL_STATE(216)] = 6297,
  [SMALL_STATE(217)] = 6317,
  [SMALL_STATE(218)] = 6343,
  [SMALL_STATE(219)] = 6369,
  [SMALL_STATE(220)] = 6386,
  [SMALL_STATE(221)] = 6401,
  [SMALL_STATE(222)] = 6416,
  [SMALL_STATE(223)] = 6441,
  [SMALL_STATE(224)] = 6456,
  [SMALL_STATE(225)] = 6477,
  [SMALL_STATE(226)] = 6496,
  [SMALL_STATE(227)] = 6511,
  [SMALL_STATE(228)] = 6526,
  [SMALL_STATE(229)] = 6543,
  [SMALL_STATE(230)] = 6558,
  [SMALL_STATE(231)] = 6573,
  [SMALL_STATE(232)] = 6598,
  [SMALL_STATE(233)] = 6621,
  [SMALL_STATE(234)] = 6640,
  [SMALL_STATE(235)] = 6655,
  [SMALL_STATE(236)] = 6680,
  [SMALL_STATE(237)] = 6705,
  [SMALL_STATE(238)] = 6730,
  [SMALL_STATE(239)] = 6752,
  [SMALL_STATE(240)] = 6774,
  [SMALL_STATE(241)] = 6790,
  [SMALL_STATE(242)] = 6804,
  [SMALL_STATE(243)] = 6822,
  [SMALL_STATE(244)] = 6844,
  [SMALL_STATE(245)] = 6866,
  [SMALL_STATE(246)] = 6888,
  [SMALL_STATE(247)] = 6910,
  [SMALL_STATE(248)] = 6924,
  [SMALL_STATE(249)] = 6946,
  [SMALL_STATE(250)] = 6964,
  [SMALL_STATE(251)] = 6986,
  [SMALL_STATE(252)] = 7008,
  [SMALL_STATE(253)] = 7030,
  [SMALL_STATE(254)] = 7052,
  [SMALL_STATE(255)] = 7074,
  [SMALL_STATE(256)] = 7096,
  [SMALL_STATE(257)] = 7118,
  [SMALL_STATE(258)] = 7140,
  [SMALL_STATE(259)] = 7162,
  [SMALL_STATE(260)] = 7184,
  [SMALL_STATE(261)] = 7206,
  [SMALL_STATE(262)] = 7228,
  [SMALL_STATE(263)] = 7242,
  [SMALL_STATE(264)] = 7264,
  [SMALL_STATE(265)] = 7286,
  [SMALL_STATE(266)] = 7308,
  [SMALL_STATE(267)] = 7330,
  [SMALL_STATE(268)] = 7352,
  [SMALL_STATE(269)] = 7374,
  [SMALL_STATE(270)] = 7396,
  [SMALL_STATE(271)] = 7410,
  [SMALL_STATE(272)] = 7432,
  [SMALL_STATE(273)] = 7454,
  [SMALL_STATE(274)] = 7468,
  [SMALL_STATE(275)] = 7490,
  [SMALL_STATE(276)] = 7512,
  [SMALL_STATE(277)] = 7534,
  [SMALL_STATE(278)] = 7556,
  [SMALL_STATE(279)] = 7578,
  [SMALL_STATE(280)] = 7600,
  [SMALL_STATE(281)] = 7614,
  [SMALL_STATE(282)] = 7636,
  [SMALL_STATE(283)] = 7658,
  [SMALL_STATE(284)] = 7680,
  [SMALL_STATE(285)] = 7702,
  [SMALL_STATE(286)] = 7724,
  [SMALL_STATE(287)] = 7746,
  [SMALL_STATE(288)] = 7768,
  [SMALL_STATE(289)] = 7790,
  [SMALL_STATE(290)] = 7812,
  [SMALL_STATE(291)] = 7834,
  [SMALL_STATE(292)] = 7856,
  [SMALL_STATE(293)] = 7878,
  [SMALL_STATE(294)] = 7900,
  [SMALL_STATE(295)] = 7922,
  [SMALL_STATE(296)] = 7944,
  [SMALL_STATE(297)] = 7966,
  [SMALL_STATE(298)] = 7988,
  [SMALL_STATE(299)] = 8010,
  [SMALL_STATE(300)] = 8032,
  [SMALL_STATE(301)] = 8054,
  [SMALL_STATE(302)] = 8076,
  [SMALL_STATE(303)] = 8098,
  [SMALL_STATE(304)] = 8120,
  [SMALL_STATE(305)] = 8142,
  [SMALL_STATE(306)] = 8160,
  [SMALL_STATE(307)] = 8178,
  [SMALL_STATE(308)] = 8200,
  [SMALL_STATE(309)] = 8214,
  [SMALL_STATE(310)] = 8236,
  [SMALL_STATE(311)] = 8258,
  [SMALL_STATE(312)] = 8274,
  [SMALL_STATE(313)] = 8288,
  [SMALL_STATE(314)] = 8310,
  [SMALL_STATE(315)] = 8332,
  [SMALL_STATE(316)] = 8354,
  [SMALL_STATE(317)] = 8368,
  [SMALL_STATE(318)] = 8390,
  [SMALL_STATE(319)] = 8404,
  [SMALL_STATE(320)] = 8426,
  [SMALL_STATE(321)] = 8448,
  [SMALL_STATE(322)] = 8470,
  [SMALL_STATE(323)] = 8484,
  [SMALL_STATE(324)] = 8506,
  [SMALL_STATE(325)] = 8520,
  [SMALL_STATE(326)] = 8542,
  [SMALL_STATE(327)] = 8564,
  [SMALL_STATE(328)] = 8586,
  [SMALL_STATE(329)] = 8603,
  [SMALL_STATE(330)] = 8618,
  [SMALL_STATE(331)] = 8633,
  [SMALL_STATE(332)] = 8648,
  [SMALL_STATE(333)] = 8665,
  [SMALL_STATE(334)] = 8684,
  [SMALL_STATE(335)] = 8701,
  [SMALL_STATE(336)] = 8720,
  [SMALL_STATE(337)] = 8737,
  [SMALL_STATE(338)] = 8756,
  [SMALL_STATE(339)] = 8769,
  [SMALL_STATE(340)] = 8784,
  [SMALL_STATE(341)] = 8799,
  [SMALL_STATE(342)] = 8814,
  [SMALL_STATE(343)] = 8827,
  [SMALL_STATE(344)] = 8846,
  [SMALL_STATE(345)] = 8863,
  [SMALL_STATE(346)] = 8878,
  [SMALL_STATE(347)] = 8893,
  [SMALL_STATE(348)] = 8908,
  [SMALL_STATE(349)] = 8927,
  [SMALL_STATE(350)] = 8944,
  [SMALL_STATE(351)] = 8961,
  [SMALL_STATE(352)] = 8978,
  [SMALL_STATE(353)] = 8993,
  [SMALL_STATE(354)] = 9012,
  [SMALL_STATE(355)] = 9031,
  [SMALL_STATE(356)] = 9047,
  [SMALL_STATE(357)] = 9063,
  [SMALL_STATE(358)] = 9079,
  [SMALL_STATE(359)] = 9095,
  [SMALL_STATE(360)] = 9111,
  [SMALL_STATE(361)] = 9127,
  [SMALL_STATE(362)] = 9143,
  [SMALL_STATE(363)] = 9159,
  [SMALL_STATE(364)] = 9175,
  [SMALL_STATE(365)] = 9191,
  [SMALL_STATE(366)] = 9207,
  [SMALL_STATE(367)] = 9223,
  [SMALL_STATE(368)] = 9239,
  [SMALL_STATE(369)] = 9255,
  [SMALL_STATE(370)] = 9269,
  [SMALL_STATE(371)] = 9285,
  [SMALL_STATE(372)] = 9301,
  [SMALL_STATE(373)] = 9317,
  [SMALL_STATE(374)] = 9333,
  [SMALL_STATE(375)] = 9349,
  [SMALL_STATE(376)] = 9365,
  [SMALL_STATE(377)] = 9381,
  [SMALL_STATE(378)] = 9397,
  [SMALL_STATE(379)] = 9409,
  [SMALL_STATE(380)] = 9423,
  [SMALL_STATE(381)] = 9439,
  [SMALL_STATE(382)] = 9455,
  [SMALL_STATE(383)] = 9471,
  [SMALL_STATE(384)] = 9483,
  [SMALL_STATE(385)] = 9499,
  [SMALL_STATE(386)] = 9515,
  [SMALL_STATE(387)] = 9531,
  [SMALL_STATE(388)] = 9543,
  [SMALL_STATE(389)] = 9559,
  [SMALL_STATE(390)] = 9575,
  [SMALL_STATE(391)] = 9591,
  [SMALL_STATE(392)] = 9603,
  [SMALL_STATE(393)] = 9619,
  [SMALL_STATE(394)] = 9631,
  [SMALL_STATE(395)] = 9647,
  [SMALL_STATE(396)] = 9663,
  [SMALL_STATE(397)] = 9679,
  [SMALL_STATE(398)] = 9695,
  [SMALL_STATE(399)] = 9711,
  [SMALL_STATE(400)] = 9727,
  [SMALL_STATE(401)] = 9743,
  [SMALL_STATE(402)] = 9759,
  [SMALL_STATE(403)] = 9775,
  [SMALL_STATE(404)] = 9791,
  [SMALL_STATE(405)] = 9807,
  [SMALL_STATE(406)] = 9823,
  [SMALL_STATE(407)] = 9839,
  [SMALL_STATE(408)] = 9855,
  [SMALL_STATE(409)] = 9871,
  [SMALL_STATE(410)] = 9887,
  [SMALL_STATE(411)] = 9903,
  [SMALL_STATE(412)] = 9919,
  [SMALL_STATE(413)] = 9935,
  [SMALL_STATE(414)] = 9951,
  [SMALL_STATE(415)] = 9967,
  [SMALL_STATE(416)] = 9983,
  [SMALL_STATE(417)] = 9999,
  [SMALL_STATE(418)] = 10015,
  [SMALL_STATE(419)] = 10031,
  [SMALL_STATE(420)] = 10047,
  [SMALL_STATE(421)] = 10063,
  [SMALL_STATE(422)] = 10079,
  [SMALL_STATE(423)] = 10095,
  [SMALL_STATE(424)] = 10111,
  [SMALL_STATE(425)] = 10127,
  [SMALL_STATE(426)] = 10143,
  [SMALL_STATE(427)] = 10159,
  [SMALL_STATE(428)] = 10175,
  [SMALL_STATE(429)] = 10191,
  [SMALL_STATE(430)] = 10207,
  [SMALL_STATE(431)] = 10221,
  [SMALL_STATE(432)] = 10237,
  [SMALL_STATE(433)] = 10253,
  [SMALL_STATE(434)] = 10269,
  [SMALL_STATE(435)] = 10285,
  [SMALL_STATE(436)] = 10301,
  [SMALL_STATE(437)] = 10317,
  [SMALL_STATE(438)] = 10333,
  [SMALL_STATE(439)] = 10349,
  [SMALL_STATE(440)] = 10365,
  [SMALL_STATE(441)] = 10381,
  [SMALL_STATE(442)] = 10397,
  [SMALL_STATE(443)] = 10413,
  [SMALL_STATE(444)] = 10429,
  [SMALL_STATE(445)] = 10445,
  [SMALL_STATE(446)] = 10461,
  [SMALL_STATE(447)] = 10477,
  [SMALL_STATE(448)] = 10493,
  [SMALL_STATE(449)] = 10509,
  [SMALL_STATE(450)] = 10525,
  [SMALL_STATE(451)] = 10541,
  [SMALL_STATE(452)] = 10557,
  [SMALL_STATE(453)] = 10573,
  [SMALL_STATE(454)] = 10589,
  [SMALL_STATE(455)] = 10605,
  [SMALL_STATE(456)] = 10621,
  [SMALL_STATE(457)] = 10637,
  [SMALL_STATE(458)] = 10653,
  [SMALL_STATE(459)] = 10669,
  [SMALL_STATE(460)] = 10685,
  [SMALL_STATE(461)] = 10701,
  [SMALL_STATE(462)] = 10717,
  [SMALL_STATE(463)] = 10733,
  [SMALL_STATE(464)] = 10749,
  [SMALL_STATE(465)] = 10765,
  [SMALL_STATE(466)] = 10781,
  [SMALL_STATE(467)] = 10797,
  [SMALL_STATE(468)] = 10813,
  [SMALL_STATE(469)] = 10829,
  [SMALL_STATE(470)] = 10845,
  [SMALL_STATE(471)] = 10861,
  [SMALL_STATE(472)] = 10877,
  [SMALL_STATE(473)] = 10893,
  [SMALL_STATE(474)] = 10909,
  [SMALL_STATE(475)] = 10923,
  [SMALL_STATE(476)] = 10939,
  [SMALL_STATE(477)] = 10955,
  [SMALL_STATE(478)] = 10971,
  [SMALL_STATE(479)] = 10987,
  [SMALL_STATE(480)] = 11003,
  [SMALL_STATE(481)] = 11019,
  [SMALL_STATE(482)] = 11035,
  [SMALL_STATE(483)] = 11051,
  [SMALL_STATE(484)] = 11067,
  [SMALL_STATE(485)] = 11083,
  [SMALL_STATE(486)] = 11099,
  [SMALL_STATE(487)] = 11115,
  [SMALL_STATE(488)] = 11131,
  [SMALL_STATE(489)] = 11147,
  [SMALL_STATE(490)] = 11163,
  [SMALL_STATE(491)] = 11179,
  [SMALL_STATE(492)] = 11195,
  [SMALL_STATE(493)] = 11211,
  [SMALL_STATE(494)] = 11227,
  [SMALL_STATE(495)] = 11243,
  [SMALL_STATE(496)] = 11259,
  [SMALL_STATE(497)] = 11275,
  [SMALL_STATE(498)] = 11291,
  [SMALL_STATE(499)] = 11307,
  [SMALL_STATE(500)] = 11323,
  [SMALL_STATE(501)] = 11339,
  [SMALL_STATE(502)] = 11351,
  [SMALL_STATE(503)] = 11365,
  [SMALL_STATE(504)] = 11381,
  [SMALL_STATE(505)] = 11397,
  [SMALL_STATE(506)] = 11413,
  [SMALL_STATE(507)] = 11429,
  [SMALL_STATE(508)] = 11445,
  [SMALL_STATE(509)] = 11457,
  [SMALL_STATE(510)] = 11471,
  [SMALL_STATE(511)] = 11483,
  [SMALL_STATE(512)] = 11495,
  [SMALL_STATE(513)] = 11507,
  [SMALL_STATE(514)] = 11519,
  [SMALL_STATE(515)] = 11531,
  [SMALL_STATE(516)] = 11543,
  [SMALL_STATE(517)] = 11559,
  [SMALL_STATE(518)] = 11571,
  [SMALL_STATE(519)] = 11583,
  [SMALL_STATE(520)] = 11597,
  [SMALL_STATE(521)] = 11609,
  [SMALL_STATE(522)] = 11621,
  [SMALL_STATE(523)] = 11637,
  [SMALL_STATE(524)] = 11649,
  [SMALL_STATE(525)] = 11661,
  [SMALL_STATE(526)] = 11673,
  [SMALL_STATE(527)] = 11687,
  [SMALL_STATE(528)] = 11703,
  [SMALL_STATE(529)] = 11719,
  [SMALL_STATE(530)] = 11733,
  [SMALL_STATE(531)] = 11749,
  [SMALL_STATE(532)] = 11765,
  [SMALL_STATE(533)] = 11781,
  [SMALL_STATE(534)] = 11797,
  [SMALL_STATE(535)] = 11811,
  [SMALL_STATE(536)] = 11827,
  [SMALL_STATE(537)] = 11843,
  [SMALL_STATE(538)] = 11859,
  [SMALL_STATE(539)] = 11875,
  [SMALL_STATE(540)] = 11891,
  [SMALL_STATE(541)] = 11907,
  [SMALL_STATE(542)] = 11923,
  [SMALL_STATE(543)] = 11939,
  [SMALL_STATE(544)] = 11952,
  [SMALL_STATE(545)] = 11963,
  [SMALL_STATE(546)] = 11976,
  [SMALL_STATE(547)] = 11989,
  [SMALL_STATE(548)] = 12000,
  [SMALL_STATE(549)] = 12011,
  [SMALL_STATE(550)] = 12024,
  [SMALL_STATE(551)] = 12037,
  [SMALL_STATE(552)] = 12048,
  [SMALL_STATE(553)] = 12059,
  [SMALL_STATE(554)] = 12070,
  [SMALL_STATE(555)] = 12081,
  [SMALL_STATE(556)] = 12094,
  [SMALL_STATE(557)] = 12107,
  [SMALL_STATE(558)] = 12118,
  [SMALL_STATE(559)] = 12129,
  [SMALL_STATE(560)] = 12142,
  [SMALL_STATE(561)] = 12153,
  [SMALL_STATE(562)] = 12166,
  [SMALL_STATE(563)] = 12177,
  [SMALL_STATE(564)] = 12187,
  [SMALL_STATE(565)] = 12197,
  [SMALL_STATE(566)] = 12207,
  [SMALL_STATE(567)] = 12217,
  [SMALL_STATE(568)] = 12227,
  [SMALL_STATE(569)] = 12237,
  [SMALL_STATE(570)] = 12247,
  [SMALL_STATE(571)] = 12257,
  [SMALL_STATE(572)] = 12267,
  [SMALL_STATE(573)] = 12277,
  [SMALL_STATE(574)] = 12287,
  [SMALL_STATE(575)] = 12297,
  [SMALL_STATE(576)] = 12307,
  [SMALL_STATE(577)] = 12317,
  [SMALL_STATE(578)] = 12327,
  [SMALL_STATE(579)] = 12337,
  [SMALL_STATE(580)] = 12347,
  [SMALL_STATE(581)] = 12357,
  [SMALL_STATE(582)] = 12367,
  [SMALL_STATE(583)] = 12377,
  [SMALL_STATE(584)] = 12387,
  [SMALL_STATE(585)] = 12397,
  [SMALL_STATE(586)] = 12407,
  [SMALL_STATE(587)] = 12417,
  [SMALL_STATE(588)] = 12427,
  [SMALL_STATE(589)] = 12437,
  [SMALL_STATE(590)] = 12447,
  [SMALL_STATE(591)] = 12457,
  [SMALL_STATE(592)] = 12467,
  [SMALL_STATE(593)] = 12477,
  [SMALL_STATE(594)] = 12487,
  [SMALL_STATE(595)] = 12497,
  [SMALL_STATE(596)] = 12507,
  [SMALL_STATE(597)] = 12517,
  [SMALL_STATE(598)] = 12527,
  [SMALL_STATE(599)] = 12537,
  [SMALL_STATE(600)] = 12547,
  [SMALL_STATE(601)] = 12557,
  [SMALL_STATE(602)] = 12567,
  [SMALL_STATE(603)] = 12577,
  [SMALL_STATE(604)] = 12587,
  [SMALL_STATE(605)] = 12597,
  [SMALL_STATE(606)] = 12607,
  [SMALL_STATE(607)] = 12617,
  [SMALL_STATE(608)] = 12627,
  [SMALL_STATE(609)] = 12637,
  [SMALL_STATE(610)] = 12647,
  [SMALL_STATE(611)] = 12657,
  [SMALL_STATE(612)] = 12667,
  [SMALL_STATE(613)] = 12677,
  [SMALL_STATE(614)] = 12687,
  [SMALL_STATE(615)] = 12697,
  [SMALL_STATE(616)] = 12707,
  [SMALL_STATE(617)] = 12717,
  [SMALL_STATE(618)] = 12727,
  [SMALL_STATE(619)] = 12737,
  [SMALL_STATE(620)] = 12747,
  [SMALL_STATE(621)] = 12757,
  [SMALL_STATE(622)] = 12767,
  [SMALL_STATE(623)] = 12777,
  [SMALL_STATE(624)] = 12787,
  [SMALL_STATE(625)] = 12797,
  [SMALL_STATE(626)] = 12807,
  [SMALL_STATE(627)] = 12817,
  [SMALL_STATE(628)] = 12827,
  [SMALL_STATE(629)] = 12837,
  [SMALL_STATE(630)] = 12847,
  [SMALL_STATE(631)] = 12857,
  [SMALL_STATE(632)] = 12867,
  [SMALL_STATE(633)] = 12877,
  [SMALL_STATE(634)] = 12887,
  [SMALL_STATE(635)] = 12897,
  [SMALL_STATE(636)] = 12907,
  [SMALL_STATE(637)] = 12917,
  [SMALL_STATE(638)] = 12927,
  [SMALL_STATE(639)] = 12937,
  [SMALL_STATE(640)] = 12947,
  [SMALL_STATE(641)] = 12957,
  [SMALL_STATE(642)] = 12967,
  [SMALL_STATE(643)] = 12977,
  [SMALL_STATE(644)] = 12987,
  [SMALL_STATE(645)] = 12997,
  [SMALL_STATE(646)] = 13007,
  [SMALL_STATE(647)] = 13017,
  [SMALL_STATE(648)] = 13027,
  [SMALL_STATE(649)] = 13037,
  [SMALL_STATE(650)] = 13047,
  [SMALL_STATE(651)] = 13057,
  [SMALL_STATE(652)] = 13067,
  [SMALL_STATE(653)] = 13077,
  [SMALL_STATE(654)] = 13087,
  [SMALL_STATE(655)] = 13097,
  [SMALL_STATE(656)] = 13107,
  [SMALL_STATE(657)] = 13117,
  [SMALL_STATE(658)] = 13127,
  [SMALL_STATE(659)] = 13137,
  [SMALL_STATE(660)] = 13147,
  [SMALL_STATE(661)] = 13157,
  [SMALL_STATE(662)] = 13167,
  [SMALL_STATE(663)] = 13177,
  [SMALL_STATE(664)] = 13187,
  [SMALL_STATE(665)] = 13197,
  [SMALL_STATE(666)] = 13207,
  [SMALL_STATE(667)] = 13217,
  [SMALL_STATE(668)] = 13227,
  [SMALL_STATE(669)] = 13237,
  [SMALL_STATE(670)] = 13247,
  [SMALL_STATE(671)] = 13257,
  [SMALL_STATE(672)] = 13267,
  [SMALL_STATE(673)] = 13277,
  [SMALL_STATE(674)] = 13287,
  [SMALL_STATE(675)] = 13297,
  [SMALL_STATE(676)] = 13307,
  [SMALL_STATE(677)] = 13317,
  [SMALL_STATE(678)] = 13327,
  [SMALL_STATE(679)] = 13337,
  [SMALL_STATE(680)] = 13347,
  [SMALL_STATE(681)] = 13357,
  [SMALL_STATE(682)] = 13367,
  [SMALL_STATE(683)] = 13377,
  [SMALL_STATE(684)] = 13387,
  [SMALL_STATE(685)] = 13397,
  [SMALL_STATE(686)] = 13407,
  [SMALL_STATE(687)] = 13417,
  [SMALL_STATE(688)] = 13427,
  [SMALL_STATE(689)] = 13437,
  [SMALL_STATE(690)] = 13447,
  [SMALL_STATE(691)] = 13457,
  [SMALL_STATE(692)] = 13467,
  [SMALL_STATE(693)] = 13477,
  [SMALL_STATE(694)] = 13487,
  [SMALL_STATE(695)] = 13497,
  [SMALL_STATE(696)] = 13507,
  [SMALL_STATE(697)] = 13517,
  [SMALL_STATE(698)] = 13527,
  [SMALL_STATE(699)] = 13537,
  [SMALL_STATE(700)] = 13547,
  [SMALL_STATE(701)] = 13557,
  [SMALL_STATE(702)] = 13567,
  [SMALL_STATE(703)] = 13577,
  [SMALL_STATE(704)] = 13587,
  [SMALL_STATE(705)] = 13597,
  [SMALL_STATE(706)] = 13607,
  [SMALL_STATE(707)] = 13617,
  [SMALL_STATE(708)] = 13627,
  [SMALL_STATE(709)] = 13637,
  [SMALL_STATE(710)] = 13647,
  [SMALL_STATE(711)] = 13657,
  [SMALL_STATE(712)] = 13667,
  [SMALL_STATE(713)] = 13677,
  [SMALL_STATE(714)] = 13687,
  [SMALL_STATE(715)] = 13697,
  [SMALL_STATE(716)] = 13707,
  [SMALL_STATE(717)] = 13717,
  [SMALL_STATE(718)] = 13727,
  [SMALL_STATE(719)] = 13737,
  [SMALL_STATE(720)] = 13747,
  [SMALL_STATE(721)] = 13757,
  [SMALL_STATE(722)] = 13767,
  [SMALL_STATE(723)] = 13777,
  [SMALL_STATE(724)] = 13787,
  [SMALL_STATE(725)] = 13797,
  [SMALL_STATE(726)] = 13807,
  [SMALL_STATE(727)] = 13817,
  [SMALL_STATE(728)] = 13827,
  [SMALL_STATE(729)] = 13837,
  [SMALL_STATE(730)] = 13847,
  [SMALL_STATE(731)] = 13857,
  [SMALL_STATE(732)] = 13867,
  [SMALL_STATE(733)] = 13877,
  [SMALL_STATE(734)] = 13887,
  [SMALL_STATE(735)] = 13897,
  [SMALL_STATE(736)] = 13907,
  [SMALL_STATE(737)] = 13917,
  [SMALL_STATE(738)] = 13927,
  [SMALL_STATE(739)] = 13937,
  [SMALL_STATE(740)] = 13947,
  [SMALL_STATE(741)] = 13957,
  [SMALL_STATE(742)] = 13967,
  [SMALL_STATE(743)] = 13977,
  [SMALL_STATE(744)] = 13987,
  [SMALL_STATE(745)] = 13997,
  [SMALL_STATE(746)] = 14007,
  [SMALL_STATE(747)] = 14017,
  [SMALL_STATE(748)] = 14027,
  [SMALL_STATE(749)] = 14037,
  [SMALL_STATE(750)] = 14047,
  [SMALL_STATE(751)] = 14057,
  [SMALL_STATE(752)] = 14067,
  [SMALL_STATE(753)] = 14077,
  [SMALL_STATE(754)] = 14087,
  [SMALL_STATE(755)] = 14097,
  [SMALL_STATE(756)] = 14107,
  [SMALL_STATE(757)] = 14117,
  [SMALL_STATE(758)] = 14127,
  [SMALL_STATE(759)] = 14137,
  [SMALL_STATE(760)] = 14147,
  [SMALL_STATE(761)] = 14157,
  [SMALL_STATE(762)] = 14167,
  [SMALL_STATE(763)] = 14177,
  [SMALL_STATE(764)] = 14187,
  [SMALL_STATE(765)] = 14197,
  [SMALL_STATE(766)] = 14207,
  [SMALL_STATE(767)] = 14217,
  [SMALL_STATE(768)] = 14227,
  [SMALL_STATE(769)] = 14237,
  [SMALL_STATE(770)] = 14247,
  [SMALL_STATE(771)] = 14257,
  [SMALL_STATE(772)] = 14267,
  [SMALL_STATE(773)] = 14277,
  [SMALL_STATE(774)] = 14287,
  [SMALL_STATE(775)] = 14297,
  [SMALL_STATE(776)] = 14307,
  [SMALL_STATE(777)] = 14317,
  [SMALL_STATE(778)] = 14327,
  [SMALL_STATE(779)] = 14337,
  [SMALL_STATE(780)] = 14347,
  [SMALL_STATE(781)] = 14357,
  [SMALL_STATE(782)] = 14367,
  [SMALL_STATE(783)] = 14377,
  [SMALL_STATE(784)] = 14387,
  [SMALL_STATE(785)] = 14397,
  [SMALL_STATE(786)] = 14407,
  [SMALL_STATE(787)] = 14417,
  [SMALL_STATE(788)] = 14427,
  [SMALL_STATE(789)] = 14437,
  [SMALL_STATE(790)] = 14447,
  [SMALL_STATE(791)] = 14457,
  [SMALL_STATE(792)] = 14467,
  [SMALL_STATE(793)] = 14477,
  [SMALL_STATE(794)] = 14487,
  [SMALL_STATE(795)] = 14497,
  [SMALL_STATE(796)] = 14507,
  [SMALL_STATE(797)] = 14517,
  [SMALL_STATE(798)] = 14527,
  [SMALL_STATE(799)] = 14537,
  [SMALL_STATE(800)] = 14547,
  [SMALL_STATE(801)] = 14557,
  [SMALL_STATE(802)] = 14567,
  [SMALL_STATE(803)] = 14577,
  [SMALL_STATE(804)] = 14587,
  [SMALL_STATE(805)] = 14597,
  [SMALL_STATE(806)] = 14607,
  [SMALL_STATE(807)] = 14617,
  [SMALL_STATE(808)] = 14627,
  [SMALL_STATE(809)] = 14637,
  [SMALL_STATE(810)] = 14647,
  [SMALL_STATE(811)] = 14657,
  [SMALL_STATE(812)] = 14667,
  [SMALL_STATE(813)] = 14677,
  [SMALL_STATE(814)] = 14687,
  [SMALL_STATE(815)] = 14697,
  [SMALL_STATE(816)] = 14707,
  [SMALL_STATE(817)] = 14717,
  [SMALL_STATE(818)] = 14727,
  [SMALL_STATE(819)] = 14737,
  [SMALL_STATE(820)] = 14747,
  [SMALL_STATE(821)] = 14757,
  [SMALL_STATE(822)] = 14767,
  [SMALL_STATE(823)] = 14777,
  [SMALL_STATE(824)] = 14787,
  [SMALL_STATE(825)] = 14797,
  [SMALL_STATE(826)] = 14807,
  [SMALL_STATE(827)] = 14817,
  [SMALL_STATE(828)] = 14827,
  [SMALL_STATE(829)] = 14837,
  [SMALL_STATE(830)] = 14847,
  [SMALL_STATE(831)] = 14857,
  [SMALL_STATE(832)] = 14867,
  [SMALL_STATE(833)] = 14877,
  [SMALL_STATE(834)] = 14887,
  [SMALL_STATE(835)] = 14897,
  [SMALL_STATE(836)] = 14907,
  [SMALL_STATE(837)] = 14917,
  [SMALL_STATE(838)] = 14927,
  [SMALL_STATE(839)] = 14937,
  [SMALL_STATE(840)] = 14947,
  [SMALL_STATE(841)] = 14957,
  [SMALL_STATE(842)] = 14967,
  [SMALL_STATE(843)] = 14977,
  [SMALL_STATE(844)] = 14987,
  [SMALL_STATE(845)] = 14997,
  [SMALL_STATE(846)] = 15007,
  [SMALL_STATE(847)] = 15017,
  [SMALL_STATE(848)] = 15027,
  [SMALL_STATE(849)] = 15037,
  [SMALL_STATE(850)] = 15047,
  [SMALL_STATE(851)] = 15057,
  [SMALL_STATE(852)] = 15067,
  [SMALL_STATE(853)] = 15077,
  [SMALL_STATE(854)] = 15087,
  [SMALL_STATE(855)] = 15097,
  [SMALL_STATE(856)] = 15107,
  [SMALL_STATE(857)] = 15117,
  [SMALL_STATE(858)] = 15127,
  [SMALL_STATE(859)] = 15137,
  [SMALL_STATE(860)] = 15147,
  [SMALL_STATE(861)] = 15157,
  [SMALL_STATE(862)] = 15167,
  [SMALL_STATE(863)] = 15177,
  [SMALL_STATE(864)] = 15187,
  [SMALL_STATE(865)] = 15197,
  [SMALL_STATE(866)] = 15207,
  [SMALL_STATE(867)] = 15217,
  [SMALL_STATE(868)] = 15227,
  [SMALL_STATE(869)] = 15237,
  [SMALL_STATE(870)] = 15247,
  [SMALL_STATE(871)] = 15257,
  [SMALL_STATE(872)] = 15267,
  [SMALL_STATE(873)] = 15277,
  [SMALL_STATE(874)] = 15287,
  [SMALL_STATE(875)] = 15297,
  [SMALL_STATE(876)] = 15307,
  [SMALL_STATE(877)] = 15317,
  [SMALL_STATE(878)] = 15327,
  [SMALL_STATE(879)] = 15337,
  [SMALL_STATE(880)] = 15347,
  [SMALL_STATE(881)] = 15357,
  [SMALL_STATE(882)] = 15367,
  [SMALL_STATE(883)] = 15377,
  [SMALL_STATE(884)] = 15387,
  [SMALL_STATE(885)] = 15397,
  [SMALL_STATE(886)] = 15407,
  [SMALL_STATE(887)] = 15417,
  [SMALL_STATE(888)] = 15427,
  [SMALL_STATE(889)] = 15437,
  [SMALL_STATE(890)] = 15447,
  [SMALL_STATE(891)] = 15457,
  [SMALL_STATE(892)] = 15467,
  [SMALL_STATE(893)] = 15477,
  [SMALL_STATE(894)] = 15487,
  [SMALL_STATE(895)] = 15497,
  [SMALL_STATE(896)] = 15507,
  [SMALL_STATE(897)] = 15517,
  [SMALL_STATE(898)] = 15527,
  [SMALL_STATE(899)] = 15537,
  [SMALL_STATE(900)] = 15547,
  [SMALL_STATE(901)] = 15557,
  [SMALL_STATE(902)] = 15567,
  [SMALL_STATE(903)] = 15577,
  [SMALL_STATE(904)] = 15587,
  [SMALL_STATE(905)] = 15597,
  [SMALL_STATE(906)] = 15607,
  [SMALL_STATE(907)] = 15617,
  [SMALL_STATE(908)] = 15627,
  [SMALL_STATE(909)] = 15637,
  [SMALL_STATE(910)] = 15647,
  [SMALL_STATE(911)] = 15657,
  [SMALL_STATE(912)] = 15667,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_comparison_operator, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_comparison_operator, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(877),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1, 0, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 8, 0, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 8, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 5, 0, 12),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 5, 0, 12),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 4, 0, 12),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 4, 0, 12),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_expression, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_expression, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 2, 0, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(909),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_identifier, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storage_identifier, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(891),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(910),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 6),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 15),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(882),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 7),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 16),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 29),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_clause_repeat1, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 57),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_literal, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_literal, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__soql_literal, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__soql_literal, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(333),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal_with_param, 3, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal_with_param, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparable_list, 4, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparable_list, 4, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 13),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparable_list, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparable_list, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 27),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 34),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 55),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 93),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 149),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2, 0, 0),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(561),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comparison, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comparison, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_comparison, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_comparison, 2, 0, 0),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(866),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 62),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_expression, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 3, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2, 0, 0),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 6, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 5, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 4, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 39),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selectable_expression, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selectable_expression, 1, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 11),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_scope_type, 1, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_using_clause, 2, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 1, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 20),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 25),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 33),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 2, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 53),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 61),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 67),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 91),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 98),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 112),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 147),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 154),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 168),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 213),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 283),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 2, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_expression, 4, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 2, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returning_clause, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 4, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 5, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_returning_clause_repeat1, 2, 0, 0),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_returning_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(545),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selected_fields, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat1, 2, 0, 0),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat1, 2, 0, 0), SHIFT_REPEAT(550),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selected_fields, 2, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returning_clause, 2, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 3, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selected_fields_repeat1, 2, 0, 0),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selected_fields_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 64),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_find_clause, 2, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat2, 2, 0, 0),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat2, 2, 0, 0), SHIFT_REPEAT(18),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 50),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 17),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 58),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 22),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 6, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 74),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 84),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 88),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 30),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 95),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 105),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 109),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_find_clause, 4, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 120),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 8, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_user_id_type, 3, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 36),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 4, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 140),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 144),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 46),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 151),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 161),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 165),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 176),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 206),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 210),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 8),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 221),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 241),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 9, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 4, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 276),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 280),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_type, 1, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 291),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 311),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 351),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_clause, 2, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 5, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 407),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 2, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 5, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 7, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_clause, 2, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_clause, 3, 0, 0),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(887),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 3, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat1, 1, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_snippet_expression, 1, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_null_direction, 1, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 129),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 121),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0), SHIFT_REPEAT(555),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_metadata_expression, 3, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 135),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 18),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 141),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_with_clause, 2, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 145),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2, 0, 0),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(601),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 152),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 23),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 156),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 162),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 166),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 171),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 177),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 185),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 195),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 201),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 207),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 211),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 51),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 216),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 31),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 222),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 230),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 236),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_spell_correction_expression, 3, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 242),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 250),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_snippet_expression, 6, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 265),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 271),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 59),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 277),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 37),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 281),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_network_expression, 2, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 286),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 292),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 300),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 306),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 312),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 320),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 340),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 346),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 41),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 352),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 360),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 375),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 69),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 396),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 402),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 75),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 408),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 416),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 431),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 453),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 79),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 481),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 47),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 85),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_highlight, 1, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 89),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 5, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 4, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 96),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat2, 1, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 100),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_with_type, 1, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 106),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_pricebook_expression, 3, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 110),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_division_expression, 3, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 115),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 9),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 65),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2, 0, 0),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(534),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 3, 0, 0),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_clause, 2, 0, 0),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 2, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 480),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 73),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 78),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 81),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 83),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 87),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 94),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 99),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 102),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 104),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 108),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 114),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 117),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 119),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 6, 0, 0),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 124),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 128),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 131),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_expression, 4, 0, 0),
  [883] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparable_list_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparable_list_repeat1, 2, 0, 0),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2, 0, 0),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 134),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 137),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 139),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_type, 1, 0, 0),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 143),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 150),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 1, 0, 0),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 155),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_type, 1, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 158),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 160),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 164),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 14),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 170),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 173),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 175),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 180),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 184),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 187),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 190),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 194),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 21),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 197),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 200),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 203),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 205),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 209),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 215),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 28),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 218),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 220),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 225),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 229),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 232),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 235),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 238),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 240),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 245),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 249),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 35),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 252),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 256),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 260),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 264),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 267),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 270),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 40),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 273),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 275),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 279),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 43),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 45),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 285),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 288),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 290),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 295),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 299),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 71),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 302),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 305),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 308),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 310),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 315),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 319),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 322),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 326),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 331),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 335),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 339),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 342),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 345),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 348),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 350),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 355),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 359),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 362),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 366),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 370),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 374),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 377),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 381),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(336),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2, 0, 0),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 387),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 391),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 395),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 398),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 401),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 404),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 406),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 3, 0, 0),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 411),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 415),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 418),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 422),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 426),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 430),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 433),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 437),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 444),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 448),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 452),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 455),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 459),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 465),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 472),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 476),
  [1127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2, 0, 0),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 483),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 487),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 493),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 500),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 508),
  [1142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2, 0, 0), SHIFT_REPEAT(816),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2, 0, 0),
  [1147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selected_fields_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [1150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 5),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 49),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 56),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 63),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 68),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_comparison_operator, 1, 0, 0),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter_type, 1, 0, 0),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_param, 3, 0, 0),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 357),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 103),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 38),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 136),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 259),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 261),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 262),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 263),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 138),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 266),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 268),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 269),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 107),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 142),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 272),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 274),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 42),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 278),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 146),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 44),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 282),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 86),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 284),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 148),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 287),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 289),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 48),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 293),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 294),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 111),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 296),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 297),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 298),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 153),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 76),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 301),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 113),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 303),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 304),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 77),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 157),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 307),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 309),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 159),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 313),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 314),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 116),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 316),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 317),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 318),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 321),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_expression, 1, 0, 0),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 323),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 324),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 325),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 163),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 327),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 328),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 329),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 330),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 332),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 333),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 334),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 118),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 336),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 337),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 338),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 1, 0, 0),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 341),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 167),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 343),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 344),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 90),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 347),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 169),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 349),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(832),
  [1393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(895),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 172),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 353),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 354),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 92),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 356),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 70),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 358),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 174),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 122),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 361),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 363),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 364),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 365),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 19),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 367),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 368),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 369),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 178),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 371),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 372),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 373),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 179),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 123),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 376),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 181),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 378),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 379),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 380),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 182),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 382),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 383),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 384),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 183),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 72),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 186),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 385),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 386),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 125),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 388),
  [1481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 389),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 390),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 188),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 392),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 393),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 394),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 189),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 126),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 397),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 191),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 399),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 400),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 192),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 7, 0, 0),
  [1509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 403),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 193),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 405),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 127),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 196),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 409),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 410),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 412),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 413),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 414),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 198),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 417),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 199),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 419),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 420),
  [1541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 421),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 130),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 423),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 424),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 425),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 80),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 427),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 428),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 429),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 202),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 132),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 432),
  [1565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 204),
  [1567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 434),
  [1569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 435),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 436),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 97),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 438),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_type, 1, 0, 0),
  [1579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 440),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 441),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 442),
  [1585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 443),
  [1587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 445),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 446),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 447),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 24),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 449),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 450),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 451),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 208),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_type, 1, 0, 0),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 454),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 456),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 457),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 458),
  [1613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 26),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 460),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 461),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 462),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 463),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 464),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 212),
  [1627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 466),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 467),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 468),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 469),
  [1637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 470),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 471),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 473),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 474),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 475),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 214),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 477),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 478),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 479),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 482),
  [1663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 217),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 484),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 485),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 486),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 488),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 489),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 490),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 491),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 492),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 219),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 494),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 495),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 496),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 497),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 498),
  [1695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 499),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 501),
  [1701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 502),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 503),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 504),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 6, 0, 1),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 505),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 506),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 507),
  [1715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 509),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 510),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 511),
  [1721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 512),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 513),
  [1725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 11, 0, 514),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_comment, 2, 0, 0),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 223),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 224),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 226),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 227),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 228),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 231),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 233),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1757] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 234),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 32),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 237),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 239),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 101),
  [1775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(858),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 243),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 244),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_expression, 3, 0, 12),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 246),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 247),
  [1797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 52),
  [1799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 248),
  [1801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 54),
  [1803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 10),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 82),
  [1819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 60),
  [1821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 251),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 253),
  [1829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 254),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 255),
  [1837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 133),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expression, 2, 0, 0),
  [1847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 257),
  [1849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 66),
  [1867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 258),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 439),
  [1883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatting_comment, 2, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_sosl(void) {
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
