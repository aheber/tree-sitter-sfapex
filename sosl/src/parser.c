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
#define STATE_COUNT 938
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 245
#define ALIAS_COUNT 0
#define TOKEN_COUNT 135
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 517

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
  aux_sym_using_phrase_search_token1 = 19,
  aux_sym_using_advanced_search_token1 = 20,
  aux_sym_sosl_using_clause_token1 = 21,
  aux_sym_with_division_expression_token1 = 22,
  anon_sym_EQ = 23,
  aux_sym_with_highlight_token1 = 24,
  aux_sym_with_metadata_expression_token1 = 25,
  aux_sym_with_network_expression_token1 = 26,
  aux_sym_with_pricebook_expression_token1 = 27,
  aux_sym_with_snippet_expression_token1 = 28,
  aux_sym_with_snippet_expression_token2 = 29,
  aux_sym_with_spell_correction_expression_token1 = 30,
  aux_sym_sosl_with_clause_token1 = 31,
  aux_sym_select_clause_token1 = 32,
  aux_sym_using_scope_clause_token1 = 33,
  aux_sym_using_scope_type_token1 = 34,
  aux_sym_using_scope_type_token2 = 35,
  aux_sym_using_scope_type_token3 = 36,
  aux_sym_using_scope_type_token4 = 37,
  aux_sym_using_scope_type_token5 = 38,
  aux_sym_using_scope_type_token6 = 39,
  aux_sym_using_scope_type_token7 = 40,
  aux_sym_using_lookup_clause_token1 = 41,
  aux_sym_using_listview_clause_token1 = 42,
  aux_sym_using_lookup_bind_clause_token1 = 43,
  aux_sym_type_of_clause_token1 = 44,
  aux_sym_type_of_clause_token2 = 45,
  aux_sym_when_expression_token1 = 46,
  aux_sym_when_expression_token2 = 47,
  aux_sym_else_expression_token1 = 48,
  aux_sym_group_by_clause_token1 = 49,
  aux_sym_for_clause_token1 = 50,
  aux_sym_for_type_token1 = 51,
  aux_sym_for_type_token2 = 52,
  aux_sym_for_type_token3 = 53,
  aux_sym_having_clause_token1 = 54,
  aux_sym_from_clause_token1 = 55,
  aux_sym_storage_alias_token1 = 56,
  aux_sym_fields_type_token1 = 57,
  aux_sym_fields_type_token2 = 58,
  aux_sym_where_clause_token1 = 59,
  aux_sym_and_expression_token1 = 60,
  aux_sym_or_expression_token1 = 61,
  aux_sym_not_expression_token1 = 62,
  aux_sym_soql_with_type_token1 = 63,
  aux_sym_soql_with_type_token2 = 64,
  aux_sym_soql_with_type_token3 = 65,
  aux_sym_with_user_id_type_token1 = 66,
  aux_sym_with_record_visibility_expression_token1 = 67,
  aux_sym_with_record_visibility_param_token1 = 68,
  aux_sym_with_record_visibility_param_token2 = 69,
  aux_sym_with_record_visibility_param_token3 = 70,
  aux_sym_with_data_cat_expression_token1 = 71,
  aux_sym_with_data_cat_filter_type_token1 = 72,
  aux_sym_with_data_cat_filter_type_token2 = 73,
  aux_sym_with_data_cat_filter_type_token3 = 74,
  aux_sym_with_data_cat_filter_type_token4 = 75,
  aux_sym_limit_clause_token1 = 76,
  aux_sym_offset_clause_token1 = 77,
  aux_sym_update_type_token1 = 78,
  aux_sym_update_type_token2 = 79,
  aux_sym_order_by_clause_token1 = 80,
  aux_sym_order_direction_token1 = 81,
  aux_sym_order_direction_token2 = 82,
  aux_sym_order_null_direction_token1 = 83,
  aux_sym_order_null_direction_token2 = 84,
  aux_sym_geo_location_type_token1 = 85,
  aux_sym_function_expression_token1 = 86,
  anon_sym_DOT = 87,
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
  aux_sym_set_comparison_operator_token3 = 99,
  aux_sym_date_literal_token1 = 100,
  aux_sym_date_literal_token2 = 101,
  aux_sym_date_literal_token3 = 102,
  aux_sym_date_literal_token4 = 103,
  aux_sym_date_literal_token5 = 104,
  aux_sym_date_literal_token6 = 105,
  aux_sym_date_literal_token7 = 106,
  aux_sym_date_literal_token8 = 107,
  aux_sym_date_literal_token9 = 108,
  aux_sym_date_literal_token10 = 109,
  aux_sym_date_literal_token11 = 110,
  aux_sym_date_literal_token12 = 111,
  aux_sym_date_literal_token13 = 112,
  aux_sym_date_literal_token14 = 113,
  aux_sym_date_literal_token15 = 114,
  aux_sym_date_literal_token16 = 115,
  aux_sym_date_literal_token17 = 116,
  aux_sym_date_literal_token18 = 117,
  aux_sym_date_literal_token19 = 118,
  aux_sym_date_literal_token20 = 119,
  aux_sym_date_literal_token21 = 120,
  aux_sym_date_literal_token22 = 121,
  aux_sym_date_literal_token23 = 122,
  aux_sym_date_literal_with_param_token1 = 123,
  anon_sym_COLON = 124,
  anon_sym_QMARK = 125,
  sym_bound_apex_expression = 126,
  aux_sym_null_literal_token1 = 127,
  sym_string_literal = 128,
  sym_int = 129,
  sym_decimal = 130,
  sym_date = 131,
  sym_date_time = 132,
  sym_currency_literal = 133,
  sym_identifier = 134,
  sym_source_file = 135,
  sym_header_comment = 136,
  sym_formatting_comment = 137,
  sym__query_expression = 138,
  sym_sosl_query_body = 139,
  sym_find_clause = 140,
  sym_in_clause = 141,
  sym_in_type = 142,
  sym_returning_clause = 143,
  sym_sobject_return = 144,
  sym_selected_fields = 145,
  sym__selectable_expression = 146,
  sym_using_phrase_search = 147,
  sym_using_advanced_search = 148,
  sym_sosl_using_clause = 149,
  sym_subquery = 150,
  sym_with_division_expression = 151,
  sym_with_highlight = 152,
  sym_with_metadata_expression = 153,
  sym_with_network_expression = 154,
  sym_with_pricebook_expression = 155,
  sym_with_snippet_expression = 156,
  sym_with_spell_correction_expression = 157,
  sym_sosl_with_type = 158,
  sym_sosl_with_clause = 159,
  sym_soql_query_body = 160,
  sym_count_expression = 161,
  sym_select_clause = 162,
  sym_using_clause = 163,
  sym_using_scope_clause = 164,
  sym_using_scope_type = 165,
  sym_using_lookup_clause = 166,
  sym_using_listview_clause = 167,
  sym_using_lookup_bind_clause = 168,
  sym_using_lookup_bind_expression = 169,
  sym_type_of_clause = 170,
  sym_when_expression = 171,
  sym_else_expression = 172,
  sym_group_by_clause = 173,
  sym__group_by_expression = 174,
  sym_for_clause = 175,
  sym_for_type = 176,
  sym_having_clause = 177,
  sym_from_clause = 178,
  sym_storage_identifier = 179,
  sym_storage_alias = 180,
  sym_fields_expression = 181,
  sym_fields_type = 182,
  sym_where_clause = 183,
  sym__boolean_expression = 184,
  sym_and_expression = 185,
  sym_or_expression = 186,
  sym_not_expression = 187,
  sym__condition_expression = 188,
  sym_comparison_expression = 189,
  sym__comparison = 190,
  sym__value_comparison = 191,
  sym__set_comparison = 192,
  sym_comparable_list = 193,
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
  aux_sym_using_lookup_bind_clause_repeat1 = 229,
  aux_sym_type_of_clause_repeat1 = 230,
  aux_sym__group_by_expression_repeat1 = 231,
  aux_sym_for_clause_repeat1 = 232,
  aux_sym_from_clause_repeat1 = 233,
  aux_sym_and_expression_repeat1 = 234,
  aux_sym_or_expression_repeat1 = 235,
  aux_sym_comparable_list_repeat1 = 236,
  aux_sym_with_record_visibility_expression_repeat1 = 237,
  aux_sym_with_data_cat_expression_repeat1 = 238,
  aux_sym_with_data_cat_filter_repeat1 = 239,
  aux_sym_update_clause_repeat1 = 240,
  aux_sym_order_by_clause_repeat1 = 241,
  aux_sym_function_expression_repeat1 = 242,
  aux_sym_dotted_identifier_repeat1 = 243,
  aux_sym_field_list_repeat1 = 244,
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
  [aux_sym_using_phrase_search_token1] = "PHRASE_SEARCH",
  [aux_sym_using_advanced_search_token1] = "ADVANCED_SEARCH",
  [aux_sym_sosl_using_clause_token1] = "USING",
  [aux_sym_with_division_expression_token1] = "DIVISION",
  [anon_sym_EQ] = "=",
  [aux_sym_with_highlight_token1] = "HIGHLIGHT",
  [aux_sym_with_metadata_expression_token1] = "METADATA",
  [aux_sym_with_network_expression_token1] = "NETWORK",
  [aux_sym_with_pricebook_expression_token1] = "PricebookId",
  [aux_sym_with_snippet_expression_token1] = "SNIPPET",
  [aux_sym_with_snippet_expression_token2] = "target_length",
  [aux_sym_with_spell_correction_expression_token1] = "SPELL_CORRECTION",
  [aux_sym_sosl_with_clause_token1] = "WITH",
  [aux_sym_select_clause_token1] = "SELECT",
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
  [sym_using_phrase_search] = "using_phrase_search",
  [sym_using_advanced_search] = "using_advanced_search",
  [sym_sosl_using_clause] = "sosl_using_clause",
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
  [aux_sym_sosl_query_body_repeat1] = "sosl_query_body_repeat1",
  [aux_sym_sosl_query_body_repeat2] = "sosl_query_body_repeat2",
  [aux_sym_returning_clause_repeat1] = "returning_clause_repeat1",
  [aux_sym_selected_fields_repeat1] = "selected_fields_repeat1",
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
  [aux_sym_using_phrase_search_token1] = aux_sym_using_phrase_search_token1,
  [aux_sym_using_advanced_search_token1] = aux_sym_using_advanced_search_token1,
  [aux_sym_sosl_using_clause_token1] = aux_sym_sosl_using_clause_token1,
  [aux_sym_with_division_expression_token1] = aux_sym_with_division_expression_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_with_highlight_token1] = aux_sym_with_highlight_token1,
  [aux_sym_with_metadata_expression_token1] = aux_sym_with_metadata_expression_token1,
  [aux_sym_with_network_expression_token1] = aux_sym_with_network_expression_token1,
  [aux_sym_with_pricebook_expression_token1] = aux_sym_with_pricebook_expression_token1,
  [aux_sym_with_snippet_expression_token1] = aux_sym_with_snippet_expression_token1,
  [aux_sym_with_snippet_expression_token2] = aux_sym_with_snippet_expression_token2,
  [aux_sym_with_spell_correction_expression_token1] = aux_sym_with_spell_correction_expression_token1,
  [aux_sym_sosl_with_clause_token1] = aux_sym_sosl_with_clause_token1,
  [aux_sym_select_clause_token1] = aux_sym_select_clause_token1,
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
  [sym_using_phrase_search] = sym_using_phrase_search,
  [sym_using_advanced_search] = sym_using_advanced_search,
  [sym_sosl_using_clause] = sym_sosl_using_clause,
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
  [aux_sym_using_phrase_search_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_using_advanced_search_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sosl_using_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_with_division_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [sym_using_phrase_search] = {
    .visible = true,
    .named = true,
  },
  [sym_using_advanced_search] = {
    .visible = true,
    .named = true,
  },
  [sym_sosl_using_clause] = {
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
  [13] = {.index = 31, .length = 1},
  [14] = {.index = 32, .length = 4},
  [15] = {.index = 36, .length = 4},
  [16] = {.index = 40, .length = 4},
  [17] = {.index = 44, .length = 4},
  [18] = {.index = 48, .length = 4},
  [19] = {.index = 52, .length = 4},
  [20] = {.index = 56, .length = 4},
  [21] = {.index = 60, .length = 4},
  [22] = {.index = 64, .length = 4},
  [23] = {.index = 68, .length = 4},
  [24] = {.index = 72, .length = 4},
  [25] = {.index = 76, .length = 4},
  [26] = {.index = 80, .length = 4},
  [27] = {.index = 84, .length = 4},
  [28] = {.index = 88, .length = 4},
  [29] = {.index = 92, .length = 4},
  [30] = {.index = 96, .length = 4},
  [31] = {.index = 100, .length = 4},
  [32] = {.index = 104, .length = 4},
  [33] = {.index = 108, .length = 4},
  [34] = {.index = 112, .length = 4},
  [35] = {.index = 116, .length = 4},
  [36] = {.index = 120, .length = 4},
  [37] = {.index = 124, .length = 4},
  [38] = {.index = 128, .length = 4},
  [39] = {.index = 132, .length = 4},
  [40] = {.index = 136, .length = 4},
  [41] = {.index = 140, .length = 4},
  [42] = {.index = 144, .length = 4},
  [43] = {.index = 148, .length = 4},
  [44] = {.index = 152, .length = 4},
  [45] = {.index = 156, .length = 4},
  [46] = {.index = 160, .length = 4},
  [47] = {.index = 164, .length = 4},
  [48] = {.index = 168, .length = 4},
  [49] = {.index = 172, .length = 4},
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
  [386] = {.index = 2234, .length = 2},
  [387] = {.index = 2236, .length = 8},
  [388] = {.index = 2244, .length = 8},
  [389] = {.index = 2252, .length = 8},
  [390] = {.index = 2260, .length = 8},
  [391] = {.index = 2268, .length = 8},
  [392] = {.index = 2276, .length = 8},
  [393] = {.index = 2284, .length = 8},
  [394] = {.index = 2292, .length = 8},
  [395] = {.index = 2300, .length = 8},
  [396] = {.index = 2308, .length = 8},
  [397] = {.index = 2316, .length = 8},
  [398] = {.index = 2324, .length = 8},
  [399] = {.index = 2332, .length = 8},
  [400] = {.index = 2340, .length = 8},
  [401] = {.index = 2348, .length = 8},
  [402] = {.index = 2356, .length = 8},
  [403] = {.index = 2364, .length = 8},
  [404] = {.index = 2372, .length = 8},
  [405] = {.index = 2380, .length = 8},
  [406] = {.index = 2388, .length = 8},
  [407] = {.index = 2396, .length = 8},
  [408] = {.index = 2404, .length = 8},
  [409] = {.index = 2412, .length = 8},
  [410] = {.index = 2420, .length = 8},
  [411] = {.index = 2428, .length = 8},
  [412] = {.index = 2436, .length = 8},
  [413] = {.index = 2444, .length = 8},
  [414] = {.index = 2452, .length = 8},
  [415] = {.index = 2460, .length = 8},
  [416] = {.index = 2468, .length = 8},
  [417] = {.index = 2476, .length = 8},
  [418] = {.index = 2484, .length = 8},
  [419] = {.index = 2492, .length = 8},
  [420] = {.index = 2500, .length = 8},
  [421] = {.index = 2508, .length = 8},
  [422] = {.index = 2516, .length = 8},
  [423] = {.index = 2524, .length = 8},
  [424] = {.index = 2532, .length = 8},
  [425] = {.index = 2540, .length = 8},
  [426] = {.index = 2548, .length = 8},
  [427] = {.index = 2556, .length = 8},
  [428] = {.index = 2564, .length = 8},
  [429] = {.index = 2572, .length = 8},
  [430] = {.index = 2580, .length = 8},
  [431] = {.index = 2588, .length = 8},
  [432] = {.index = 2596, .length = 8},
  [433] = {.index = 2604, .length = 8},
  [434] = {.index = 2612, .length = 8},
  [435] = {.index = 2620, .length = 8},
  [436] = {.index = 2628, .length = 8},
  [437] = {.index = 2636, .length = 8},
  [438] = {.index = 2644, .length = 8},
  [439] = {.index = 2652, .length = 8},
  [440] = {.index = 2660, .length = 8},
  [441] = {.index = 2668, .length = 8},
  [442] = {.index = 2676, .length = 8},
  [443] = {.index = 2684, .length = 8},
  [444] = {.index = 2692, .length = 8},
  [445] = {.index = 2700, .length = 8},
  [446] = {.index = 2708, .length = 8},
  [447] = {.index = 2716, .length = 8},
  [448] = {.index = 2724, .length = 8},
  [449] = {.index = 2732, .length = 8},
  [450] = {.index = 2740, .length = 8},
  [451] = {.index = 2748, .length = 8},
  [452] = {.index = 2756, .length = 8},
  [453] = {.index = 2764, .length = 8},
  [454] = {.index = 2772, .length = 8},
  [455] = {.index = 2780, .length = 8},
  [456] = {.index = 2788, .length = 8},
  [457] = {.index = 2796, .length = 8},
  [458] = {.index = 2804, .length = 8},
  [459] = {.index = 2812, .length = 8},
  [460] = {.index = 2820, .length = 8},
  [461] = {.index = 2828, .length = 8},
  [462] = {.index = 2836, .length = 8},
  [463] = {.index = 2844, .length = 8},
  [464] = {.index = 2852, .length = 8},
  [465] = {.index = 2860, .length = 8},
  [466] = {.index = 2868, .length = 8},
  [467] = {.index = 2876, .length = 8},
  [468] = {.index = 2884, .length = 8},
  [469] = {.index = 2892, .length = 8},
  [470] = {.index = 2900, .length = 8},
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
    {field_lookup_field, 1},
  [31] =
    {field_function_name, 0, .inherited = true},
  [32] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [36] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [40] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [44] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [48] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [52] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [56] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 3},
    {field_using_clause, 2},
  [60] =
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [64] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_select_clause, 0},
  [68] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 3},
    {field_select_clause, 0},
  [72] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
  [76] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 3},
  [80] =
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
  [84] =
    {field_for_clause, 2},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 3},
  [88] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [92] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [96] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [100] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [104] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [108] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 3},
    {field_where_clause, 2},
  [112] =
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [116] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [120] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [124] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [128] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [132] =
    {field_from_clause, 1},
    {field_select_clause, 0},
    {field_update_clause, 3},
    {field_with_clause, 2},
  [136] =
    {field_from_clause, 1},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [140] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_limit_clause, 2},
    {field_select_clause, 0},
  [144] =
    {field_from_clause, 1},
    {field_limit_clause, 2},
    {field_offset_clause, 3},
    {field_select_clause, 0},
  [148] =
    {field_from_clause, 1},
    {field_limit_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 3},
  [152] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_offset_clause, 2},
    {field_select_clause, 0},
  [156] =
    {field_from_clause, 1},
    {field_offset_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 3},
  [160] =
    {field_for_clause, 3},
    {field_from_clause, 1},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
  [164] =
    {field_from_clause, 1},
    {field_limit_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
  [168] =
    {field_from_clause, 1},
    {field_offset_clause, 3},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
  [172] =
    {field_from_clause, 1},
    {field_order_by_clause, 2},
    {field_select_clause, 0},
    {field_update_clause, 3},
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
    {field_bound_value, 2},
    {field_field, 0},
  [2236] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
  [2244] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
  [2252] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
  [2260] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
  [2268] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
  [2276] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2284] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2292] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2300] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2308] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2316] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2324] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2332] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2340] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2348] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2356] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2364] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2372] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2380] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2388] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2396] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2404] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2412] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_limit_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2420] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_offset_clause, 7},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2428] =
    {field_from_clause, 1},
    {field_group_by_clause, 5},
    {field_order_by_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2436] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2444] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2452] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2460] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2468] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2476] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2484] =
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2492] =
    {field_from_clause, 1},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2500] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2508] =
    {field_from_clause, 1},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
    {field_with_clause, 4},
  [2516] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2524] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2532] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2540] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2548] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_where_clause, 3},
  [2556] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2564] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2572] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2580] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2588] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2596] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2604] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2612] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2620] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2628] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2636] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2644] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2652] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2660] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2668] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
    {field_with_clause, 3},
  [2676] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_using_clause, 2},
  [2684] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 2},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 7},
  [2692] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
  [2700] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
  [2708] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
  [2716] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
  [2724] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
  [2732] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2740] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2748] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2756] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2764] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2772] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2780] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_offset_clause, 7},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2788] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_limit_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2796] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2804] =
    {field_from_clause, 1},
    {field_group_by_clause, 4},
    {field_offset_clause, 6},
    {field_order_by_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2812] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2820] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2828] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2836] =
    {field_from_clause, 1},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2844] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
    {field_with_clause, 3},
  [2852] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_where_clause, 2},
  [2860] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_with_clause, 2},
  [2868] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_with_clause, 2},
  [2876] =
    {field_for_clause, 7},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_with_clause, 2},
  [2884] =
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_limit_clause, 5},
    {field_offset_clause, 6},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_with_clause, 2},
  [2892] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_group_by_clause, 3},
    {field_offset_clause, 5},
    {field_order_by_clause, 4},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_with_clause, 2},
  [2900] =
    {field_for_clause, 6},
    {field_from_clause, 1},
    {field_limit_clause, 4},
    {field_offset_clause, 5},
    {field_order_by_clause, 3},
    {field_select_clause, 0},
    {field_update_clause, 7},
    {field_with_clause, 2},
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
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 20,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 30,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 9,
  [40] = 10,
  [41] = 38,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 11,
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
  [69] = 12,
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
  [85] = 10,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 9,
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
  [103] = 11,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 106,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 15,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 16,
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
  [142] = 13,
  [143] = 143,
  [144] = 144,
  [145] = 17,
  [146] = 14,
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
  [204] = 183,
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
  [223] = 12,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 183,
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
  [255] = 9,
  [256] = 10,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 249,
  [262] = 249,
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
  [319] = 62,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 11,
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
  [343] = 15,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 344,
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
  [364] = 144,
  [365] = 17,
  [366] = 14,
  [367] = 16,
  [368] = 13,
  [369] = 369,
  [370] = 354,
  [371] = 371,
  [372] = 372,
  [373] = 344,
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
  [521] = 59,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 44,
  [526] = 42,
  [527] = 60,
  [528] = 43,
  [529] = 45,
  [530] = 66,
  [531] = 36,
  [532] = 99,
  [533] = 172,
  [534] = 47,
  [535] = 67,
  [536] = 95,
  [537] = 104,
  [538] = 55,
  [539] = 98,
  [540] = 102,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 404,
  [550] = 550,
  [551] = 551,
  [552] = 542,
  [553] = 402,
  [554] = 551,
  [555] = 402,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 551,
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
  [588] = 124,
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
  [871] = 589,
  [872] = 872,
  [873] = 873,
  [874] = 874,
  [875] = 875,
  [876] = 876,
  [877] = 877,
  [878] = 878,
  [879] = 879,
  [880] = 880,
  [881] = 881,
  [882] = 882,
  [883] = 883,
  [884] = 884,
  [885] = 885,
  [886] = 886,
  [887] = 887,
  [888] = 888,
  [889] = 889,
  [890] = 890,
  [891] = 891,
  [892] = 892,
  [893] = 893,
  [894] = 894,
  [895] = 895,
  [896] = 896,
  [897] = 897,
  [898] = 898,
  [899] = 899,
  [900] = 900,
  [901] = 657,
  [902] = 821,
  [903] = 662,
  [904] = 904,
  [905] = 905,
  [906] = 906,
  [907] = 907,
  [908] = 874,
  [909] = 909,
  [910] = 910,
  [911] = 911,
  [912] = 821,
  [913] = 913,
  [914] = 911,
  [915] = 911,
  [916] = 821,
  [917] = 917,
  [918] = 918,
  [919] = 919,
  [920] = 920,
  [921] = 878,
  [922] = 922,
  [923] = 878,
  [924] = 891,
  [925] = 589,
  [926] = 891,
  [927] = 927,
  [928] = 917,
  [929] = 929,
  [930] = 677,
  [931] = 677,
  [932] = 932,
  [933] = 933,
  [934] = 822,
  [935] = 822,
  [936] = 936,
  [937] = 937,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(766);
      ADVANCE_MAP(
        '!', 32,
        '\'', 3,
        '(', 793,
        ')', 794,
        '*', 13,
        ',', 792,
        '-', 752,
        '.', 878,
        '/', 18,
        ':', 915,
        '<', 883,
        '=', 800,
        '>', 885,
        '?', 916,
        '{', 784,
        '}', 785,
        'A', 140,
        'a', 140,
        'B', 230,
        'b', 230,
        'C', 687,
        'c', 687,
        'D', 74,
        'd', 74,
        'E', 399,
        'e', 399,
        'F', 85,
        'f', 85,
        'G', 234,
        'g', 234,
        'H', 81,
        'h', 81,
        'I', 435,
        'i', 435,
        'L', 110,
        'l', 110,
        'M', 75,
        'm', 75,
        'N', 50,
        'n', 50,
        'O', 307,
        'o', 307,
        'P', 329,
        'p', 329,
        'R', 208,
        'r', 208,
        'S', 151,
        's', 151,
        'T', 82,
        't', 82,
        'U', 514,
        'u', 514,
        'V', 351,
        'v', 351,
        'W', 338,
        'w', 338,
        'Y', 294,
        'y', 294,
      );
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(928);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 32,
        '(', 793,
        ')', 794,
        '*', 13,
        ',', 792,
        '-', 752,
        '.', 878,
        '/', 21,
        '<', 883,
        '=', 800,
        '>', 885,
        'A', 610,
        'a', 610,
        'B', 345,
        'b', 345,
        'D', 268,
        'd', 268,
        'E', 400,
        'e', 400,
        'F', 465,
        'f', 465,
        'G', 546,
        'g', 546,
        'H', 80,
        'h', 80,
        'I', 435,
        'i', 435,
        'L', 344,
        'l', 344,
        'N', 493,
        'n', 493,
        'O', 308,
        'o', 308,
        'T', 562,
        't', 562,
        'U', 513,
        'u', 513,
        'V', 373,
        'v', 373,
        'W', 338,
        'w', 338,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(930);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\'', 3,
        '*', 13,
        '-', 752,
        '/', 21,
        'F', 78,
        'f', 78,
        'L', 79,
        'l', 79,
        'N', 54,
        'n', 54,
        'R', 228,
        'r', 228,
        'S', 238,
        's', 238,
        'T', 337,
        't', 337,
        'U', 510,
        'u', 510,
        'V', 350,
        'v', 350,
        'Y', 285,
        'y', 285,
      );
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(926);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(764);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(920);
      if (lookahead == '\\') ADVANCE(763);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '(', 793,
        ')', 794,
        ',', 792,
        '.', 878,
        '/', 21,
        'A', 991,
        'a', 991,
        'L', 962,
        'l', 962,
        'O', 954,
        'o', 954,
        'U', 992,
        'u', 992,
        'W', 959,
        'w', 959,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(793);
      if (lookahead == ')') ADVANCE(794);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(960);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(793);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '(', 793,
        ',', 792,
        '.', 878,
        '/', 21,
        'A', 991,
        'a', 991,
        'F', 986,
        'f', 986,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '(', 793,
        '/', 21,
        'D', 960,
        'd', 960,
        'F', 961,
        'f', 961,
        'T', 1002,
        't', 1002,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(793);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(960);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(975);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        ')', 794,
        ',', 792,
        '.', 878,
        '/', 21,
        'A', 991,
        'a', 991,
        'F', 978,
        'f', 978,
        'G', 985,
        'g', 985,
        'L', 962,
        'l', 962,
        'O', 954,
        'o', 954,
        'U', 983,
        'u', 983,
        'W', 958,
        'w', 958,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(794);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(434);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(544);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(952);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(917);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(758);
      if (lookahead == 'Z') ADVANCE(933);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(737);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(767);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(772);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(788);
      if (lookahead == '\\') ADVANCE(790);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(789);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(750);
      if (lookahead == '1') ADVANCE(738);
      END_STATE();
    case 23:
      if (lookahead == '0') ADVANCE(751);
      if (lookahead == '3') ADVANCE(736);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(754);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(739);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(755);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '9', 24,
        'F', 378,
        'f', 378,
        'M', 501,
        'm', 501,
        'N', 66,
        'n', 66,
        'Q', 698,
        'q', 698,
        'W', 278,
        'w', 278,
        'Y', 295,
        'y', 295,
      );
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '9', 25,
        'F', 379,
        'f', 379,
        'M', 504,
        'm', 504,
        'N', 66,
        'n', 66,
        'Q', 699,
        'q', 699,
        'W', 280,
        'w', 280,
        'Y', 296,
        'y', 296,
      );
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(749);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(747);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(748);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(881);
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
      if (lookahead == 'Z') ADVANCE(933);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(737);
      END_STATE();
    case 48:
      if (lookahead == 'Z') ADVANCE(933);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'Z') ADVANCE(933);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 50:
      ADVANCE_MAP(
        '_', 188,
        'A', 428,
        'a', 428,
        'E', 629,
        'e', 629,
        'O', 630,
        'o', 630,
        'U', 406,
        'u', 406,
      );
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(314);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(523);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(144);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(429);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(659);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(167);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(432);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(325);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(415);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(266);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(205);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(206);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(204);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(673);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(525);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(433);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(526);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(527);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(524);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(646);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 75:
      ADVANCE_MAP(
        'A', 719,
        'a', 719,
        'E', 648,
        'e', 648,
        'I', 449,
        'i', 449,
        'Y', 57,
        'y', 57,
      );
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(740);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(802);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(706);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(706);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 82:
      ADVANCE_MAP(
        'A', 545,
        'a', 545,
        'E', 86,
        'e', 86,
        'H', 239,
        'h', 239,
        'O', 189,
        'o', 189,
        'R', 90,
        'r', 90,
        'Y', 516,
        'y', 516,
      );
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(734);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 85:
      ADVANCE_MAP(
        'A', 416,
        'a', 416,
        'I', 248,
        'i', 248,
        'O', 528,
        'o', 528,
        'R', 469,
        'r', 469,
      );
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(721);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(431);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(724);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(578);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(667);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(635);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(551);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(604);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(387);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(728);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(557);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(730);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(618);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(731);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(662);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(616);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(460);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(583);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(584);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(585);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(587);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 140:
      ADVANCE_MAP(
        'B', 471,
        'b', 471,
        'D', 705,
        'd', 705,
        'L', 393,
        'l', 393,
        'N', 174,
        'n', 174,
        'S', 839,
        's', 839,
        'T', 859,
        't', 859,
      );
      END_STATE();
    case 141:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(722);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(723);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 143:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(486);
      END_STATE();
    case 144:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(292);
      END_STATE();
    case 145:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(362);
      END_STATE();
    case 146:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(871);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(870);
      END_STATE();
    case 149:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(392);
      END_STATE();
    case 150:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 151:
      ADVANCE_MAP(
        'C', 498,
        'c', 498,
        'E', 165,
        'e', 165,
        'I', 194,
        'i', 194,
        'N', 375,
        'n', 375,
        'P', 286,
        'p', 286,
        'T', 111,
        't', 111,
        'U', 512,
        'u', 512,
        'Y', 620,
        'y', 620,
      );
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(476);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(251);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(692);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(633);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(555);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(489);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(233);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(693);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(503);
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(490);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(669);
      END_STATE();
    case 169:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 170:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 174:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(845);
      END_STATE();
    case 175:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(824);
      END_STATE();
    case 176:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(821);
      END_STATE();
    case 177:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(775);
      END_STATE();
    case 178:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(853);
      END_STATE();
    case 179:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(842);
      END_STATE();
    case 180:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(812);
      END_STATE();
    case 181:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 182:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(804);
      END_STATE();
    case 183:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(850);
      END_STATE();
    case 184:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(855);
      END_STATE();
    case 185:
      ADVANCE_MAP(
        'D', 84,
        'd', 84,
        'F', 353,
        'f', 353,
        'M', 479,
        'm', 479,
        'Q', 695,
        'q', 695,
        'W', 272,
        'w', 272,
        'Y', 291,
        'y', 291,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 186:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 187:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(588);
      END_STATE();
    case 188:
      ADVANCE_MAP(
        'D', 83,
        'd', 83,
        'F', 352,
        'f', 352,
        'M', 478,
        'm', 478,
        'Q', 694,
        'q', 694,
        'W', 271,
        'w', 271,
        'Y', 290,
        'y', 290,
      );
      END_STATE();
    case 189:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(87);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(480);
      END_STATE();
    case 190:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 191:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 196:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 202:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(709);
      END_STATE();
    case 203:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 204:
      ADVANCE_MAP(
        'D', 112,
        'd', 112,
        'F', 381,
        'f', 381,
        'M', 507,
        'm', 507,
        'Q', 701,
        'q', 701,
        'W', 284,
        'w', 284,
        'Y', 298,
        'y', 298,
      );
      END_STATE();
    case 205:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 206:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 207:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(746);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(860);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(852);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(444);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(600);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 297:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 298:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 307:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(312);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(847);
      END_STATE();
    case 308:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(312);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 309:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(822);
      END_STATE();
    case 310:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 311:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(370);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 312:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(615);
      END_STATE();
    case 313:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(495);
      END_STATE();
    case 314:
      ADVANCE_MAP(
        'F', 380,
        'f', 380,
        'M', 505,
        'm', 505,
        'Q', 700,
        'q', 700,
        'W', 282,
        'w', 282,
        'Y', 297,
        'y', 297,
      );
      END_STATE();
    case 315:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(339);
      END_STATE();
    case 316:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(797);
      END_STATE();
    case 317:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(836);
      END_STATE();
    case 318:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(867);
      END_STATE();
    case 319:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(791);
      END_STATE();
    case 320:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(813);
      END_STATE();
    case 321:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(341);
      END_STATE();
    case 322:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(467);
      END_STATE();
    case 323:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(265);
      END_STATE();
    case 324:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(657);
      END_STATE();
    case 325:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(567);
      END_STATE();
    case 326:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(492);
      END_STATE();
    case 327:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 328:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 329:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(500);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 330:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(808);
      END_STATE();
    case 331:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(897);
      END_STATE();
    case 332:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(899);
      END_STATE();
    case 333:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(898);
      END_STATE();
    case 334:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(795);
      END_STATE();
    case 335:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(806);
      END_STATE();
    case 336:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(796);
      END_STATE();
    case 337:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(346);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(201);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 338:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(209);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 339:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(408);
      END_STATE();
    case 340:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(591);
      END_STATE();
    case 341:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(636);
      END_STATE();
    case 342:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(605);
      END_STATE();
    case 343:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(360);
      END_STATE();
    case 344:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 345:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(444);
      END_STATE();
    case 346:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 347:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 348:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(608);
      END_STATE();
    case 349:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 351:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 352:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 354:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 355:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(447);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(448);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 363:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 364:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(650);
      END_STATE();
    case 365:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 366:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 367:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(441);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(367);
      END_STATE();
    case 368:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(487);
      END_STATE();
    case 369:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(674);
      END_STATE();
    case 370:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 371:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(656);
      END_STATE();
    case 372:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 373:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 374:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 375:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 376:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 377:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(680);
      END_STATE();
    case 378:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 379:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 380:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 381:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(628);
      END_STATE();
    case 382:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(803);
      END_STATE();
    case 383:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(894);
      END_STATE();
    case 384:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(896);
      END_STATE();
    case 385:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(895);
      END_STATE();
    case 386:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(211);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(357);
      END_STATE();
    case 387:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(211);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(357);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(644);
      END_STATE();
    case 388:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(591);
      END_STATE();
    case 389:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(363);
      END_STATE();
    case 390:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(689);
      END_STATE();
    case 391:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(605);
      END_STATE();
    case 392:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(358);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(779);
      END_STATE();
    case 394:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(919);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(780);
      END_STATE();
    case 396:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 397:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 398:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 399:
      ADVANCE_MAP(
        'L', 607,
        'l', 607,
        'M', 91,
        'm', 91,
        'N', 175,
        'n', 175,
        'V', 235,
        'v', 235,
        'X', 150,
        'x', 150,
      );
      END_STATE();
    case 400:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(150);
      END_STATE();
    case 401:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 402:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 403:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(696);
      END_STATE();
    case 404:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(236);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 405:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(472);
      END_STATE();
    case 406:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(394);
      END_STATE();
    case 407:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 408:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 409:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 410:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 411:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 412:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(602);
      END_STATE();
    case 414:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(477);
      END_STATE();
    case 415:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 416:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(613);
      END_STATE();
    case 417:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 418:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(697);
      END_STATE();
    case 419:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 420:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 421:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 422:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 423:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 424:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(837);
      END_STATE();
    case 425:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(818);
      END_STATE();
    case 426:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(841);
      END_STATE();
    case 427:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 428:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 429:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(506);
      END_STATE();
    case 430:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 431:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 432:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(733);
      END_STATE();
    case 433:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(508);
      END_STATE();
    case 434:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 435:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(776);
      END_STATE();
    case 436:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(826);
      END_STATE();
    case 437:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(825);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 438:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(799);
      END_STATE();
    case 439:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(874);
      END_STATE();
    case 440:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(807);
      END_STATE();
    case 441:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(888);
      END_STATE();
    case 442:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 443:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 444:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 445:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 446:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 447:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 448:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 449:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 450:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 451:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 452:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(645);
      END_STATE();
    case 453:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(594);
      END_STATE();
    case 454:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(649);
      END_STATE();
    case 455:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 456:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 457:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(653);
      END_STATE();
    case 458:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(655);
      END_STATE();
    case 459:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 460:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 461:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 462:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 463:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 464:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 465:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 466:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 467:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(914);
      END_STATE();
    case 468:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 469:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 470:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 471:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(707);
      END_STATE();
    case 472:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 473:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 474:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(713);
      END_STATE();
    case 475:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 476:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(548);
      END_STATE();
    case 477:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(714);
      END_STATE();
    case 478:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 479:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 480:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
      END_STATE();
    case 481:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 482:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 483:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 484:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 485:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 486:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 487:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 488:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(554);
      END_STATE();
    case 489:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(464);
      END_STATE();
    case 490:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(569);
      END_STATE();
    case 491:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(549);
      END_STATE();
    case 492:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(552);
      END_STATE();
    case 493:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(647);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(412);
      END_STATE();
    case 494:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(574);
      END_STATE();
    case 495:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 496:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(556);
      END_STATE();
    case 497:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 498:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 499:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 500:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(456);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 501:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 502:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(691);
      END_STATE();
    case 503:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 504:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 505:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(457);
      END_STATE();
    case 506:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 507:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 508:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 509:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(819);
      END_STATE();
    case 510:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 511:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(741);
      END_STATE();
    case 512:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(520);
      END_STATE();
    case 513:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 514:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      END_STATE();
    case 515:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(596);
      END_STATE();
    case 516:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 517:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 518:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(269);
      END_STATE();
    case 519:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(518);
      END_STATE();
    case 520:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(484);
      END_STATE();
    case 521:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(304);
      END_STATE();
    case 522:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(677);
      END_STATE();
    case 523:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(694);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(290);
      END_STATE();
    case 524:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(701);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(298);
      END_STATE();
    case 525:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(702);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(301);
      END_STATE();
    case 526:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(703);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(302);
      END_STATE();
    case 527:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(704);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(303);
      END_STATE();
    case 528:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(829);
      END_STATE();
    case 529:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(729);
      END_STATE();
    case 530:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 531:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(783);
      END_STATE();
    case 532:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(906);
      END_STATE();
    case 533:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(907);
      END_STATE();
    case 534:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(905);
      END_STATE();
    case 535:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(903);
      END_STATE();
    case 536:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(904);
      END_STATE();
    case 537:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(902);
      END_STATE();
    case 538:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(912);
      END_STATE();
    case 539:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(913);
      END_STATE();
    case 540:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(911);
      END_STATE();
    case 541:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(909);
      END_STATE();
    case 542:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(910);
      END_STATE();
    case 543:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(908);
      END_STATE();
    case 544:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(846);
      END_STATE();
    case 545:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 546:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 547:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 548:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 549:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(725);
      END_STATE();
    case 550:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 551:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 552:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(726);
      END_STATE();
    case 553:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(591);
      END_STATE();
    case 554:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 555:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(354);
      END_STATE();
    case 556:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(727);
      END_STATE();
    case 557:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 558:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 559:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(558);
      END_STATE();
    case 560:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 561:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(654);
      END_STATE();
    case 562:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 563:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 564:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 565:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(745);
      END_STATE();
    case 566:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(605);
      END_STATE();
    case 567:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 568:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 569:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 570:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 571:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 572:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 573:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(564);
      END_STATE();
    case 574:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 575:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 576:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 577:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 578:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(672);
      END_STATE();
    case 579:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 580:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 581:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 582:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(676);
      END_STATE();
    case 583:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 584:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(679);
      END_STATE();
    case 585:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 586:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 587:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(683);
      END_STATE();
    case 588:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(777);
      END_STATE();
    case 589:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(890);
      END_STATE();
    case 590:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(889);
      END_STATE();
    case 591:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(914);
      END_STATE();
    case 592:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(900);
      END_STATE();
    case 593:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(901);
      END_STATE();
    case 594:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(856);
      END_STATE();
    case 595:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(857);
      END_STATE();
    case 596:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(815);
      END_STATE();
    case 597:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 598:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 599:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 600:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      END_STATE();
    case 601:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 602:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(742);
      END_STATE();
    case 603:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(666);
      END_STATE();
    case 604:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(640);
      END_STATE();
    case 605:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(62);
      END_STATE();
    case 606:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      END_STATE();
    case 607:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      END_STATE();
    case 608:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      END_STATE();
    case 609:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(670);
      END_STATE();
    case 610:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      END_STATE();
    case 611:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(349);
      END_STATE();
    case 612:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      END_STATE();
    case 613:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      END_STATE();
    case 614:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 615:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      END_STATE();
    case 616:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(637);
      END_STATE();
    case 617:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(638);
      END_STATE();
    case 618:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      END_STATE();
    case 619:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 620:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(660);
      END_STATE();
    case 621:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(686);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(348);
      END_STATE();
    case 622:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(668);
      END_STATE();
    case 623:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(299);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(623);
      END_STATE();
    case 624:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(300);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(624);
      END_STATE();
    case 625:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 626:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 627:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 628:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 629:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(716);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(684);
      END_STATE();
    case 630:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(848);
      END_STATE();
    case 631:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(863);
      END_STATE();
    case 632:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(865);
      END_STATE();
    case 633:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(810);
      END_STATE();
    case 634:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(805);
      END_STATE();
    case 635:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(868);
      END_STATE();
    case 636:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(801);
      END_STATE();
    case 637:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(873);
      END_STATE();
    case 638:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(872);
      END_STATE();
    case 639:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(854);
      END_STATE();
    case 640:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 641:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 642:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      END_STATE();
    case 643:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      END_STATE();
    case 644:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(708);
      END_STATE();
    case 645:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      END_STATE();
    case 646:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      END_STATE();
    case 647:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(744);
      END_STATE();
    case 648:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 649:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(331);
      END_STATE();
    case 650:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(732);
      END_STATE();
    case 651:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      END_STATE();
    case 652:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 653:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      END_STATE();
    case 654:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(612);
      END_STATE();
    case 655:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(340);
      END_STATE();
    case 656:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      END_STATE();
    case 657:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      END_STATE();
    case 658:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 659:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 660:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 661:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      END_STATE();
    case 662:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      END_STATE();
    case 663:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(289);
      END_STATE();
    case 664:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      END_STATE();
    case 665:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      END_STATE();
    case 666:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      END_STATE();
    case 667:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(366);
      END_STATE();
    case 668:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 669:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(368);
      END_STATE();
    case 670:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 671:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 673:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 674:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(491);
      END_STATE();
    case 675:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      END_STATE();
    case 676:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      END_STATE();
    case 677:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(494);
      END_STATE();
    case 678:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      END_STATE();
    case 679:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      END_STATE();
    case 680:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(496);
      END_STATE();
    case 681:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 682:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      END_STATE();
    case 683:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      END_STATE();
    case 684:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 685:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 686:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 687:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(603);
      END_STATE();
    case 688:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(511);
      END_STATE();
    case 689:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(509);
      END_STATE();
    case 690:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 691:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(515);
      END_STATE();
    case 692:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(550);
      END_STATE();
    case 693:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(568);
      END_STATE();
    case 694:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 695:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 696:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 697:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 698:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 699:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 700:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 701:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 702:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 703:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 704:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 705:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 706:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(355);
      END_STATE();
    case 707:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(217);
      END_STATE();
    case 708:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(372);
      END_STATE();
    case 709:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(376);
      END_STATE();
    case 710:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(835);
      END_STATE();
    case 711:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(861);
      END_STATE();
    case 712:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(820);
      END_STATE();
    case 713:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(893);
      END_STATE();
    case 714:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(862);
      END_STATE();
    case 715:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 716:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(483);
      END_STATE();
    case 717:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(622);
      END_STATE();
    case 718:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(639);
      END_STATE();
    case 719:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(196);
      END_STATE();
    case 720:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 721:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(892);
      END_STATE();
    case 722:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(828);
      END_STATE();
    case 723:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(869);
      END_STATE();
    case 724:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(891);
      END_STATE();
    case 725:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(816);
      END_STATE();
    case 726:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(858);
      END_STATE();
    case 727:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(817);
      END_STATE();
    case 728:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(591);
      END_STATE();
    case 729:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(643);
      END_STATE();
    case 730:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(592);
      END_STATE();
    case 731:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(593);
      END_STATE();
    case 732:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 733:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 734:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(605);
      END_STATE();
    case 735:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(159);
      END_STATE();
    case 736:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(932);
      END_STATE();
    case 737:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(762);
      END_STATE();
    case 738:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(16);
      END_STATE();
    case 739:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(29);
      END_STATE();
    case 740:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 741:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 742:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 743:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(623);
      END_STATE();
    case 744:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(367);
      END_STATE();
    case 745:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 746:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(624);
      END_STATE();
    case 747:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(756);
      END_STATE();
    case 748:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(757);
      END_STATE();
    case 749:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(761);
      END_STATE();
    case 750:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 751:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(932);
      END_STATE();
    case 752:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(930);
      END_STATE();
    case 753:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(931);
      END_STATE();
    case 754:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(932);
      END_STATE();
    case 755:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 756:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 757:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(933);
      END_STATE();
    case 758:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 759:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 760:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(935);
      END_STATE();
    case 761:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 762:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 763:
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
    case 764:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 765:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '/') ADVANCE(772);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(770);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(768);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(771);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(771);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead == '/') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(771);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_header_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(771);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(789);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(771);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_find_clause_token1);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_in_clause_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(418);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_in_clause_token2);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_in_clause_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_in_type_token1);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_in_type_token2);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_in_type_token3);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_in_type_token4);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_in_type_token5);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_term_separator_start);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_term_separator_end);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '/') ADVANCE(788);
      if (lookahead == '\\') ADVANCE(790);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(789);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '/') ADVANCE(773);
      if (lookahead == '\\') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(789);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '/') ADVANCE(787);
      if (lookahead == '\\') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(789);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '\\') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(789);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '\\') ADVANCE(790);
      if (lookahead != 0) ADVANCE(789);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_returning_clause_token1);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_using_phrase_search_token1);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_using_advanced_search_token1);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_sosl_using_clause_token1);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_sosl_using_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_with_division_expression_token1);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_with_highlight_token1);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_with_metadata_expression_token1);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_with_network_expression_token1);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_with_pricebook_expression_token1);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_with_snippet_expression_token1);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_with_snippet_expression_token2);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_with_spell_correction_expression_token1);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_sosl_with_clause_token1);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_sosl_with_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_using_scope_clause_token1);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token1);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token2);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token3);
      if (lookahead == '_') ADVANCE(116);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token4);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token5);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token6);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_using_scope_type_token7);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_using_lookup_clause_token1);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_using_listview_clause_token1);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_using_lookup_bind_clause_token1);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_type_of_clause_token2);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_when_expression_token1);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_when_expression_token2);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_else_expression_token1);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_for_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_for_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_for_type_token2);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_for_type_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(668);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_having_clause_token1);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_storage_alias_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_fields_type_token1);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_fields_type_token2);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_and_expression_token1);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_or_expression_token1);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_or_expression_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_not_expression_token1);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_not_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token1);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token2);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_soql_with_type_token3);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_with_user_id_type_token1);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_expression_token1);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token1);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token2);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_with_record_visibility_param_token3);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_with_data_cat_expression_token1);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token1);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token2);
      if (lookahead == '_') ADVANCE(488);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token3);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_with_data_cat_filter_type_token4);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_offset_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_update_type_token1);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_update_type_token2);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_order_direction_token1);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_order_direction_token2);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token1);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_order_null_direction_token2);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_geo_location_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_function_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(884);
      if (lookahead == '>') ADVANCE(882);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(886);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_value_comparison_operator_token1);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token1);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token2);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_set_comparison_operator_token3);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_date_literal_token1);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_date_literal_token2);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_date_literal_token3);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_date_literal_token4);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_date_literal_token5);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_date_literal_token6);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_date_literal_token7);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_date_literal_token8);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_date_literal_token9);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_date_literal_token10);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_date_literal_token11);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_date_literal_token12);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_date_literal_token13);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_date_literal_token14);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_date_literal_token15);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_date_literal_token16);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_date_literal_token17);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_date_literal_token18);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_date_literal_token19);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_date_literal_token20);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_date_literal_token21);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_date_literal_token22);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_date_literal_token23);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_date_literal_with_param_token1);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_bound_apex_expression);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_null_literal_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(742);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(928);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(921);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(922);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(922);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(924);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(929);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(923);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(928);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(928);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(930);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(931);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_date_time);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_currency_literal);
      if (lookahead == '.') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_currency_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(935);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(955);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(949);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(942);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
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
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 10},
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
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 4},
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
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
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
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
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
  [166] = {.lex_state = 0},
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
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 5},
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
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 5},
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
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 5},
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
  [249] = {.lex_state = 12},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 7},
  [256] = {.lex_state = 7},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 12},
  [262] = {.lex_state = 12},
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
  [319] = {.lex_state = 11},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 7},
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
  [343] = {.lex_state = 7},
  [344] = {.lex_state = 6},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 2},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 2},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 6},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 6},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 6},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 7},
  [365] = {.lex_state = 7},
  [366] = {.lex_state = 7},
  [367] = {.lex_state = 7},
  [368] = {.lex_state = 7},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 6},
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
  [421] = {.lex_state = 1},
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
  [462] = {.lex_state = 6},
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
  [504] = {.lex_state = 6},
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
  [521] = {.lex_state = 11},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 11},
  [526] = {.lex_state = 11},
  [527] = {.lex_state = 11},
  [528] = {.lex_state = 11},
  [529] = {.lex_state = 11},
  [530] = {.lex_state = 11},
  [531] = {.lex_state = 11},
  [532] = {.lex_state = 11},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 11},
  [535] = {.lex_state = 11},
  [536] = {.lex_state = 11},
  [537] = {.lex_state = 11},
  [538] = {.lex_state = 11},
  [539] = {.lex_state = 11},
  [540] = {.lex_state = 11},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 1},
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
  [567] = {.lex_state = 6},
  [568] = {.lex_state = 6},
  [569] = {.lex_state = 6},
  [570] = {.lex_state = 6},
  [571] = {.lex_state = 6},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 6},
  [574] = {.lex_state = 1},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 6},
  [577] = {.lex_state = 6},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 1},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 6},
  [582] = {.lex_state = 6},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 6},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 11},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 768},
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
  [624] = {.lex_state = 6},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 6},
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
  [708] = {.lex_state = 6},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 6},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 20},
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
  [741] = {.lex_state = 768},
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
  [793] = {.lex_state = 6},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
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
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 6},
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
  [840] = {.lex_state = 0},
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
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 6},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 6},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 6},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 6},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {(TSStateId)(-1)},
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
    [aux_sym_using_phrase_search_token1] = ACTIONS(1),
    [aux_sym_using_advanced_search_token1] = ACTIONS(1),
    [aux_sym_sosl_using_clause_token1] = ACTIONS(1),
    [aux_sym_with_division_expression_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_with_highlight_token1] = ACTIONS(1),
    [aux_sym_with_metadata_expression_token1] = ACTIONS(1),
    [aux_sym_with_network_expression_token1] = ACTIONS(1),
    [aux_sym_with_pricebook_expression_token1] = ACTIONS(1),
    [aux_sym_with_snippet_expression_token1] = ACTIONS(1),
    [aux_sym_with_snippet_expression_token2] = ACTIONS(1),
    [aux_sym_with_spell_correction_expression_token1] = ACTIONS(1),
    [aux_sym_sosl_with_clause_token1] = ACTIONS(1),
    [aux_sym_select_clause_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(892),
    [sym_header_comment] = STATE(345),
    [sym_formatting_comment] = STATE(1),
    [sym__query_expression] = STATE(933),
    [sym_sosl_query_body] = STATE(634),
    [sym_find_clause] = STATE(22),
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
    STATE(549), 1,
      sym__soql_literal,
    STATE(566), 1,
      sym_select_clause,
    STATE(901), 1,
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
    STATE(45), 4,
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
    STATE(404), 1,
      sym__soql_literal,
    STATE(566), 1,
      sym_select_clause,
    STATE(657), 1,
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
    STATE(45), 4,
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
    STATE(580), 1,
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
    STATE(45), 4,
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
    STATE(60), 1,
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
    STATE(45), 4,
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
    STATE(527), 1,
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
    STATE(529), 4,
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
  [338] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(15), 1,
      aux_sym_date_literal_with_param_token1,
    ACTIONS(19), 1,
      aux_sym_null_literal_token1,
    STATE(7), 1,
      sym_formatting_comment,
    STATE(96), 1,
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
    STATE(45), 4,
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
  [399] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(8), 1,
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
  [444] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(53), 1,
      anon_sym_DOT,
    STATE(9), 1,
      sym_formatting_comment,
    STATE(10), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(49), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 28,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sosl_with_clause_token1,
      aux_sym_using_lookup_bind_clause_token1,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_where_clause_token1,
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
  [492] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_DOT,
    STATE(10), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(55), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 28,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sosl_with_clause_token1,
      aux_sym_using_lookup_bind_clause_token1,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_where_clause_token1,
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
  [538] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(11), 1,
      sym_formatting_comment,
    ACTIONS(55), 3,
      aux_sym_in_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sosl_with_clause_token1,
      aux_sym_using_lookup_bind_clause_token1,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_where_clause_token1,
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
  [581] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(12), 1,
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
  [625] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(13), 1,
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
  [660] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(14), 1,
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
  [695] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(15), 1,
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
  [730] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(16), 1,
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
  [765] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(17), 1,
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
  [798] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    ACTIONS(86), 1,
      aux_sym_sosl_using_clause_token1,
    ACTIONS(88), 1,
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
    STATE(18), 1,
      sym_formatting_comment,
    STATE(21), 1,
      sym_using_clause,
    STATE(37), 1,
      sym_where_clause,
    STATE(54), 1,
      sym_soql_with_clause,
    STATE(91), 1,
      sym_group_by_clause,
    STATE(110), 1,
      sym_order_by_clause,
    STATE(231), 1,
      sym_limit_clause,
    STATE(316), 1,
      sym_offset_clause,
    STATE(541), 1,
      sym_for_clause,
    STATE(932), 1,
      sym_update_clause,
  [862] = 12,
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
    STATE(19), 1,
      sym_formatting_comment,
    STATE(243), 1,
      sym_sosl_with_type,
    STATE(239), 8,
      sym_with_division_expression,
      sym_with_highlight,
      sym_with_metadata_expression,
      sym_with_network_expression,
      sym_with_pricebook_expression,
      sym_with_snippet_expression,
      sym_with_spell_correction_expression,
      sym_with_data_cat_expression,
  [906] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(120), 1,
      aux_sym_in_clause_token1,
    STATE(6), 1,
      sym_value_comparison_operator,
    STATE(20), 1,
      sym_formatting_comment,
    STATE(370), 1,
      sym_set_comparison_operator,
    STATE(537), 1,
      sym__comparison,
    ACTIONS(124), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(521), 2,
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
  [946] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
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
    STATE(29), 1,
      sym_where_clause,
    STATE(51), 1,
      sym_soql_with_clause,
    STATE(82), 1,
      sym_group_by_clause,
    STATE(117), 1,
      sym_order_by_clause,
    STATE(202), 1,
      sym_limit_clause,
    STATE(314), 1,
      sym_offset_clause,
    STATE(438), 1,
      sym_for_clause,
    STATE(603), 1,
      sym_update_clause,
  [1004] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      aux_sym_in_clause_token1,
    ACTIONS(134), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(136), 1,
      aux_sym_sosl_using_clause_token1,
    ACTIONS(138), 1,
      aux_sym_sosl_with_clause_token1,
    STATE(22), 1,
      sym_formatting_comment,
    STATE(27), 1,
      sym_in_clause,
    STATE(28), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(71), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(180), 1,
      sym_sosl_using_clause,
    STATE(224), 1,
      sym_returning_clause,
    STATE(251), 1,
      sym_sosl_with_clause,
    STATE(336), 1,
      sym_limit_clause,
    STATE(556), 1,
      sym_offset_clause,
    STATE(592), 1,
      sym_update_clause,
  [1062] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(120), 1,
      aux_sym_in_clause_token1,
    STATE(5), 1,
      sym_value_comparison_operator,
    STATE(23), 1,
      sym_formatting_comment,
    STATE(247), 1,
      sym__comparison,
    STATE(354), 1,
      sym_set_comparison_operator,
    ACTIONS(124), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(59), 2,
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
  [1102] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(120), 1,
      aux_sym_in_clause_token1,
    STATE(5), 1,
      sym_value_comparison_operator,
    STATE(24), 1,
      sym_formatting_comment,
    STATE(104), 1,
      sym__comparison,
    STATE(354), 1,
      sym_set_comparison_operator,
    ACTIONS(124), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(59), 2,
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
  [1142] = 14,
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
    STATE(25), 1,
      sym_formatting_comment,
    STATE(364), 1,
      sym__value_expression,
    STATE(366), 1,
      sym_dotted_identifier,
    STATE(439), 1,
      sym__selectable_expression,
    STATE(597), 1,
      sym__function_name,
    STATE(780), 1,
      sym_count_expression,
    STATE(365), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(174), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1189] = 14,
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
    STATE(26), 1,
      sym_formatting_comment,
    STATE(90), 1,
      sym_selected_fields,
    STATE(144), 1,
      sym__value_expression,
    STATE(146), 1,
      sym_dotted_identifier,
    STATE(169), 1,
      sym__selectable_expression,
    STATE(891), 1,
      sym__function_name,
    STATE(145), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(174), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1236] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(134), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(136), 1,
      aux_sym_sosl_using_clause_token1,
    ACTIONS(138), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_formatting_comment,
    STATE(32), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(56), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(224), 1,
      sym_returning_clause,
    STATE(230), 1,
      sym_sosl_using_clause,
    STATE(251), 1,
      sym_sosl_with_clause,
    STATE(278), 1,
      sym_limit_clause,
    STATE(454), 1,
      sym_offset_clause,
    STATE(863), 1,
      sym_update_clause,
  [1288] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(134), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(136), 1,
      aux_sym_sosl_using_clause_token1,
    ACTIONS(138), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_formatting_comment,
    STATE(56), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(113), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(224), 1,
      sym_returning_clause,
    STATE(230), 1,
      sym_sosl_using_clause,
    STATE(251), 1,
      sym_sosl_with_clause,
    STATE(278), 1,
      sym_limit_clause,
    STATE(454), 1,
      sym_offset_clause,
    STATE(863), 1,
      sym_update_clause,
  [1340] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
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
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_formatting_comment,
    STATE(52), 1,
      sym_soql_with_clause,
    STATE(73), 1,
      sym_group_by_clause,
    STATE(129), 1,
      sym_order_by_clause,
    STATE(186), 1,
      sym_limit_clause,
    STATE(301), 1,
      sym_offset_clause,
    STATE(389), 1,
      sym_for_clause,
    STATE(612), 1,
      sym_update_clause,
  [1392] = 13,
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
    STATE(30), 1,
      sym_formatting_comment,
    STATE(171), 1,
      sym__selectable_expression,
    STATE(364), 1,
      sym__value_expression,
    STATE(366), 1,
      sym_dotted_identifier,
    STATE(926), 1,
      sym__function_name,
    STATE(365), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(174), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1436] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      aux_sym_not_expression_token1,
    ACTIONS(162), 1,
      aux_sym_function_expression_token1,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(14), 1,
      sym_dotted_identifier,
    STATE(24), 1,
      sym__value_expression,
    STATE(31), 1,
      sym_formatting_comment,
    STATE(62), 1,
      sym__condition_expression,
    STATE(99), 1,
      sym_comparison_expression,
    STATE(238), 1,
      sym__boolean_expression,
    STATE(924), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(168), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1482] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(134), 1,
      aux_sym_returning_clause_token1,
    ACTIONS(136), 1,
      aux_sym_sosl_using_clause_token1,
    ACTIONS(138), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_formatting_comment,
    STATE(65), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(113), 1,
      aux_sym_sosl_query_body_repeat1,
    STATE(220), 1,
      sym_sosl_using_clause,
    STATE(224), 1,
      sym_returning_clause,
    STATE(251), 1,
      sym_sosl_with_clause,
    STATE(342), 1,
      sym_limit_clause,
    STATE(449), 1,
      sym_offset_clause,
    STATE(613), 1,
      sym_update_clause,
  [1534] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(172), 1,
      anon_sym_DOT,
    STATE(33), 1,
      sym_formatting_comment,
    STATE(39), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(168), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(170), 9,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1564] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      aux_sym_not_expression_token1,
    ACTIONS(162), 1,
      aux_sym_function_expression_token1,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(14), 1,
      sym_dotted_identifier,
    STATE(24), 1,
      sym__value_expression,
    STATE(34), 1,
      sym_formatting_comment,
    STATE(62), 1,
      sym__condition_expression,
    STATE(99), 1,
      sym_comparison_expression,
    STATE(167), 1,
      sym__boolean_expression,
    STATE(924), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(168), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1610] = 13,
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
    STATE(35), 1,
      sym_formatting_comment,
    STATE(144), 1,
      sym__value_expression,
    STATE(146), 1,
      sym_dotted_identifier,
    STATE(171), 1,
      sym__selectable_expression,
    STATE(891), 1,
      sym__function_name,
    STATE(145), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(174), 4,
      sym_subquery,
      sym_type_of_clause,
      sym_fields_expression,
      sym_alias_expression,
  [1654] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(176), 1,
      aux_sym_or_expression_token1,
    STATE(36), 1,
      sym_formatting_comment,
    ACTIONS(174), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
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
  [1680] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(88), 1,
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
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_formatting_comment,
    STATE(50), 1,
      sym_soql_with_clause,
    STATE(81), 1,
      sym_group_by_clause,
    STATE(109), 1,
      sym_order_by_clause,
    STATE(219), 1,
      sym_limit_clause,
    STATE(302), 1,
      sym_offset_clause,
    STATE(459), 1,
      sym_for_clause,
    STATE(651), 1,
      sym_update_clause,
  [1732] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_not_expression_token1,
    ACTIONS(162), 1,
      aux_sym_function_expression_token1,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(38), 1,
      sym_formatting_comment,
    STATE(319), 1,
      sym__condition_expression,
    STATE(532), 1,
      sym_comparison_expression,
    STATE(874), 1,
      sym__boolean_expression,
    STATE(924), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(168), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1778] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(172), 1,
      anon_sym_DOT,
    STATE(39), 1,
      sym_formatting_comment,
    STATE(40), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(51), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(49), 9,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1808] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(182), 1,
      anon_sym_DOT,
    STATE(40), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(57), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(55), 9,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [1836] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(160), 1,
      aux_sym_not_expression_token1,
    ACTIONS(162), 1,
      aux_sym_function_expression_token1,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(41), 1,
      sym_formatting_comment,
    STATE(319), 1,
      sym__condition_expression,
    STATE(532), 1,
      sym_comparison_expression,
    STATE(908), 1,
      sym__boolean_expression,
    STATE(924), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
    STATE(168), 3,
      sym_and_expression,
      sym_or_expression,
      sym_not_expression,
  [1882] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(187), 1,
      aux_sym_or_expression_token1,
    STATE(42), 1,
      sym_formatting_comment,
    ACTIONS(185), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1907] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(191), 1,
      aux_sym_or_expression_token1,
    STATE(43), 1,
      sym_formatting_comment,
    ACTIONS(189), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1932] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(195), 1,
      aux_sym_or_expression_token1,
    STATE(44), 1,
      sym_formatting_comment,
    ACTIONS(193), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1957] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(199), 1,
      aux_sym_or_expression_token1,
    STATE(45), 1,
      sym_formatting_comment,
    ACTIONS(197), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [1982] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(46), 1,
      sym_formatting_comment,
    ACTIONS(57), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_DOT,
    ACTIONS(55), 9,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [2007] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(203), 1,
      aux_sym_or_expression_token1,
    STATE(47), 1,
      sym_formatting_comment,
    ACTIONS(201), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2032] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(48), 1,
      sym_formatting_comment,
    STATE(57), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(207), 3,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(209), 7,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [2065] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(49), 1,
      sym_formatting_comment,
    ACTIONS(168), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(170), 9,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [2089] = 15,
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
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      sym_formatting_comment,
    STATE(75), 1,
      sym_group_by_clause,
    STATE(133), 1,
      sym_order_by_clause,
    STATE(194), 1,
      sym_limit_clause,
    STATE(304), 1,
      sym_offset_clause,
    STATE(558), 1,
      sym_for_clause,
    STATE(607), 1,
      sym_update_clause,
  [2135] = 15,
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
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_formatting_comment,
    STATE(74), 1,
      sym_group_by_clause,
    STATE(131), 1,
      sym_order_by_clause,
    STATE(188), 1,
      sym_limit_clause,
    STATE(303), 1,
      sym_offset_clause,
    STATE(419), 1,
      sym_for_clause,
    STATE(788), 1,
      sym_update_clause,
  [2181] = 15,
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
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_formatting_comment,
    STATE(77), 1,
      sym_group_by_clause,
    STATE(137), 1,
      sym_order_by_clause,
    STATE(203), 1,
      sym_limit_clause,
    STATE(305), 1,
      sym_offset_clause,
    STATE(396), 1,
      sym_for_clause,
    STATE(638), 1,
      sym_update_clause,
  [2227] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(211), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(53), 1,
      sym_formatting_comment,
    ACTIONS(221), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_order_by_clause_token1,
    ACTIONS(223), 7,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [2255] = 15,
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
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_formatting_comment,
    STATE(83), 1,
      sym_group_by_clause,
    STATE(120), 1,
      sym_order_by_clause,
    STATE(227), 1,
      sym_limit_clause,
    STATE(323), 1,
      sym_offset_clause,
    STATE(477), 1,
      sym_for_clause,
    STATE(706), 1,
      sym_update_clause,
  [2301] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(229), 1,
      aux_sym_or_expression_token1,
    STATE(55), 1,
      sym_formatting_comment,
    ACTIONS(227), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2324] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(136), 1,
      aux_sym_sosl_using_clause_token1,
    ACTIONS(138), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_formatting_comment,
    STATE(156), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(220), 1,
      sym_sosl_using_clause,
    STATE(251), 1,
      sym_sosl_with_clause,
    STATE(342), 1,
      sym_limit_clause,
    STATE(449), 1,
      sym_offset_clause,
    STATE(613), 1,
      sym_update_clause,
  [2367] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      sym_formatting_comment,
    STATE(61), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(231), 10,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2392] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(235), 1,
      aux_sym_and_expression_token1,
    STATE(58), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(233), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2415] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(240), 1,
      aux_sym_or_expression_token1,
    STATE(59), 1,
      sym_formatting_comment,
    ACTIONS(238), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2438] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(244), 1,
      aux_sym_or_expression_token1,
    STATE(60), 1,
      sym_formatting_comment,
    ACTIONS(242), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2461] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(61), 2,
      sym_formatting_comment,
      aux_sym_from_clause_repeat1,
    ACTIONS(221), 10,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2484] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(251), 1,
      aux_sym_and_expression_token1,
    ACTIONS(253), 1,
      aux_sym_or_expression_token1,
    STATE(62), 1,
      sym_formatting_comment,
    STATE(95), 1,
      aux_sym_or_expression_repeat1,
    STATE(105), 1,
      aux_sym_and_expression_repeat1,
    ACTIONS(249), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2513] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(257), 1,
      aux_sym_and_expression_token1,
    STATE(63), 1,
      sym_formatting_comment,
    STATE(68), 1,
      aux_sym_with_data_cat_expression_repeat1,
    ACTIONS(255), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2538] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(64), 1,
      sym_formatting_comment,
    STATE(114), 1,
      sym_order_direction,
    STATE(236), 1,
      sym_order_null_direction,
    ACTIONS(261), 2,
      aux_sym_order_direction_token1,
      aux_sym_order_direction_token2,
    ACTIONS(263), 2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
    ACTIONS(259), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [2567] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(136), 1,
      aux_sym_sosl_using_clause_token1,
    ACTIONS(138), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_formatting_comment,
    STATE(156), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(187), 1,
      sym_sosl_using_clause,
    STATE(251), 1,
      sym_sosl_with_clause,
    STATE(320), 1,
      sym_limit_clause,
    STATE(548), 1,
      sym_offset_clause,
    STATE(877), 1,
      sym_update_clause,
  [2610] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(269), 1,
      aux_sym_or_expression_token1,
    STATE(66), 1,
      sym_formatting_comment,
    ACTIONS(267), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2633] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(273), 1,
      aux_sym_or_expression_token1,
    STATE(67), 1,
      sym_formatting_comment,
    ACTIONS(271), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2656] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(257), 1,
      aux_sym_and_expression_token1,
    STATE(58), 1,
      aux_sym_with_data_cat_expression_repeat1,
    STATE(68), 1,
      sym_formatting_comment,
    ACTIONS(275), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2681] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOT,
    STATE(69), 1,
      sym_formatting_comment,
    STATE(89), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(64), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(62), 6,
      aux_sym_sosl_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [2710] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_from_clause_repeat1,
    STATE(70), 1,
      sym_formatting_comment,
    ACTIONS(207), 10,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2735] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(136), 1,
      aux_sym_sosl_using_clause_token1,
    ACTIONS(138), 1,
      aux_sym_sosl_with_clause_token1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_formatting_comment,
    STATE(156), 1,
      aux_sym_sosl_query_body_repeat2,
    STATE(230), 1,
      sym_sosl_using_clause,
    STATE(251), 1,
      sym_sosl_with_clause,
    STATE(278), 1,
      sym_limit_clause,
    STATE(454), 1,
      sym_offset_clause,
    STATE(863), 1,
      sym_update_clause,
  [2778] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(72), 1,
      sym_formatting_comment,
    ACTIONS(233), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2798] = 13,
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
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_formatting_comment,
    STATE(136), 1,
      sym_order_by_clause,
    STATE(201), 1,
      sym_limit_clause,
    STATE(282), 1,
      sym_offset_clause,
    STATE(394), 1,
      sym_for_clause,
    STATE(620), 1,
      sym_update_clause,
  [2838] = 13,
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
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_formatting_comment,
    STATE(138), 1,
      sym_order_by_clause,
    STATE(205), 1,
      sym_limit_clause,
    STATE(324), 1,
      sym_offset_clause,
    STATE(403), 1,
      sym_for_clause,
    STATE(681), 1,
      sym_update_clause,
  [2878] = 13,
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
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_formatting_comment,
    STATE(139), 1,
      sym_order_by_clause,
    STATE(208), 1,
      sym_limit_clause,
    STATE(266), 1,
      sym_offset_clause,
    STATE(420), 1,
      sym_for_clause,
    STATE(817), 1,
      sym_update_clause,
  [2918] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      sym_formatting_comment,
    STATE(79), 1,
      aux_sym_using_lookup_bind_clause_repeat1,
    ACTIONS(287), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [2942] = 13,
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
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_formatting_comment,
    STATE(141), 1,
      sym_order_by_clause,
    STATE(214), 1,
      sym_limit_clause,
    STATE(285), 1,
      sym_offset_clause,
    STATE(451), 1,
      sym_for_clause,
    STATE(614), 1,
      sym_update_clause,
  [2982] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(78), 1,
      sym_formatting_comment,
    ACTIONS(291), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3002] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      sym_formatting_comment,
    STATE(80), 1,
      aux_sym_using_lookup_bind_clause_repeat1,
    ACTIONS(293), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3026] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    STATE(80), 2,
      sym_formatting_comment,
      aux_sym_using_lookup_bind_clause_repeat1,
    ACTIONS(298), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3048] = 13,
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
    STATE(132), 1,
      sym_order_by_clause,
    STATE(191), 1,
      sym_limit_clause,
    STATE(288), 1,
      sym_offset_clause,
    STATE(543), 1,
      sym_for_clause,
    STATE(882), 1,
      sym_update_clause,
  [3088] = 13,
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
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_formatting_comment,
    STATE(128), 1,
      sym_order_by_clause,
    STATE(185), 1,
      sym_limit_clause,
    STATE(331), 1,
      sym_offset_clause,
    STATE(560), 1,
      sym_for_clause,
    STATE(813), 1,
      sym_update_clause,
  [3128] = 13,
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
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_formatting_comment,
    STATE(134), 1,
      sym_order_by_clause,
    STATE(196), 1,
      sym_limit_clause,
    STATE(321), 1,
      sym_offset_clause,
    STATE(377), 1,
      sym_for_clause,
    STATE(682), 1,
      sym_update_clause,
  [3168] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(84), 1,
      sym_formatting_comment,
    ACTIONS(306), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3188] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(308), 1,
      anon_sym_DOT,
    STATE(85), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(57), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(55), 6,
      aux_sym_sosl_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [3212] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(86), 1,
      sym_formatting_comment,
    ACTIONS(221), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3232] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(87), 1,
      sym_formatting_comment,
    ACTIONS(311), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3252] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(88), 1,
      sym_formatting_comment,
    ACTIONS(313), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3272] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(277), 1,
      anon_sym_DOT,
    STATE(85), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(89), 1,
      sym_formatting_comment,
    ACTIONS(51), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(49), 6,
      aux_sym_sosl_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [3298] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(86), 1,
      aux_sym_sosl_using_clause_token1,
    ACTIONS(96), 1,
      aux_sym_where_clause_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_formatting_comment,
    STATE(119), 1,
      sym_using_clause,
    STATE(234), 1,
      sym_where_clause,
    STATE(286), 1,
      sym_order_by_clause,
    STATE(393), 1,
      sym_limit_clause,
    STATE(609), 1,
      sym_offset_clause,
  [3338] = 13,
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
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_formatting_comment,
    STATE(118), 1,
      sym_order_by_clause,
    STATE(209), 1,
      sym_limit_clause,
    STATE(276), 1,
      sym_offset_clause,
    STATE(450), 1,
      sym_for_clause,
    STATE(615), 1,
      sym_update_clause,
  [3378] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(321), 1,
      aux_sym_using_lookup_bind_clause_token1,
    STATE(92), 1,
      sym_formatting_comment,
    STATE(121), 1,
      sym_using_lookup_bind_clause,
    ACTIONS(319), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3402] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(93), 1,
      sym_formatting_comment,
    ACTIONS(323), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3422] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      aux_sym_function_expression_token1,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(14), 1,
      sym_dotted_identifier,
    STATE(24), 1,
      sym__value_expression,
    STATE(94), 1,
      sym_formatting_comment,
    STATE(99), 1,
      sym_comparison_expression,
    STATE(149), 1,
      sym__condition_expression,
    STATE(924), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
  [3457] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(253), 1,
      aux_sym_or_expression_token1,
    STATE(95), 1,
      sym_formatting_comment,
    STATE(102), 1,
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
  [3480] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(96), 1,
      sym_formatting_comment,
    ACTIONS(327), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3499] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(97), 1,
      sym_formatting_comment,
    ACTIONS(298), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3518] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(331), 1,
      aux_sym_or_expression_token1,
    STATE(98), 1,
      sym_formatting_comment,
    ACTIONS(329), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3539] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(335), 1,
      aux_sym_or_expression_token1,
    STATE(99), 1,
      sym_formatting_comment,
    ACTIONS(333), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3560] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(118), 1,
      aux_sym_with_data_cat_expression_token1,
    ACTIONS(339), 1,
      aux_sym_with_user_id_type_token1,
    ACTIONS(341), 1,
      aux_sym_with_record_visibility_expression_token1,
    STATE(100), 1,
      sym_formatting_comment,
    STATE(193), 1,
      sym_soql_with_type,
    ACTIONS(337), 3,
      aux_sym_soql_with_type_token1,
      aux_sym_soql_with_type_token2,
      aux_sym_soql_with_type_token3,
    STATE(192), 3,
      sym_with_user_id_type,
      sym_with_record_visibility_expression,
      sym_with_data_cat_expression,
  [3589] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(345), 1,
      aux_sym_and_expression_token1,
    STATE(101), 2,
      sym_formatting_comment,
      aux_sym_and_expression_repeat1,
    ACTIONS(343), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3610] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(350), 1,
      aux_sym_or_expression_token1,
    STATE(102), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
    ACTIONS(348), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3631] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(103), 1,
      sym_formatting_comment,
    ACTIONS(57), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      anon_sym_DOT,
    ACTIONS(55), 6,
      aux_sym_sosl_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [3652] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(355), 1,
      aux_sym_or_expression_token1,
    STATE(104), 1,
      sym_formatting_comment,
    ACTIONS(353), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3673] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(251), 1,
      aux_sym_and_expression_token1,
    STATE(101), 1,
      aux_sym_and_expression_repeat1,
    STATE(105), 1,
      sym_formatting_comment,
    ACTIONS(357), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3696] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(162), 1,
      aux_sym_function_expression_token1,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_dotted_identifier,
    STATE(20), 1,
      sym__value_expression,
    STATE(106), 1,
      sym_formatting_comment,
    STATE(532), 1,
      sym_comparison_expression,
    STATE(588), 1,
      sym__condition_expression,
    STATE(924), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
  [3731] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      aux_sym_function_expression_token1,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(14), 1,
      sym_dotted_identifier,
    STATE(24), 1,
      sym__value_expression,
    STATE(99), 1,
      sym_comparison_expression,
    STATE(107), 1,
      sym_formatting_comment,
    STATE(123), 1,
      sym__condition_expression,
    STATE(924), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
  [3766] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      aux_sym_function_expression_token1,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(14), 1,
      sym_dotted_identifier,
    STATE(24), 1,
      sym__value_expression,
    STATE(99), 1,
      sym_comparison_expression,
    STATE(108), 1,
      sym_formatting_comment,
    STATE(124), 1,
      sym__condition_expression,
    STATE(924), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
  [3801] = 11,
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
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_formatting_comment,
    STATE(195), 1,
      sym_limit_clause,
    STATE(318), 1,
      sym_offset_clause,
    STATE(376), 1,
      sym_for_clause,
    STATE(666), 1,
      sym_update_clause,
  [3835] = 11,
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
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_formatting_comment,
    STATE(229), 1,
      sym_limit_clause,
    STATE(332), 1,
      sym_offset_clause,
    STATE(495), 1,
      sym_for_clause,
    STATE(756), 1,
      sym_update_clause,
  [3869] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(111), 1,
      sym_formatting_comment,
    ACTIONS(363), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3887] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(112), 2,
      sym_formatting_comment,
      aux_sym_returning_clause_repeat1,
    ACTIONS(365), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [3907] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(372), 1,
      aux_sym_returning_clause_token1,
    STATE(224), 1,
      sym_returning_clause,
    STATE(113), 2,
      sym_formatting_comment,
      aux_sym_sosl_query_body_repeat1,
    ACTIONS(370), 6,
      ts_builtin_sym_end,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [3929] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(114), 1,
      sym_formatting_comment,
    STATE(254), 1,
      sym_order_null_direction,
    ACTIONS(263), 2,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
    ACTIONS(375), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [3951] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(115), 1,
      sym_formatting_comment,
    ACTIONS(74), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(72), 6,
      aux_sym_sosl_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [3971] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      sym_formatting_comment,
    STATE(127), 1,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(379), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [3993] = 11,
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
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_formatting_comment,
    STATE(189), 1,
      sym_limit_clause,
    STATE(273), 1,
      sym_offset_clause,
    STATE(452), 1,
      sym_for_clause,
    STATE(673), 1,
      sym_update_clause,
  [4027] = 11,
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
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_formatting_comment,
    STATE(190), 1,
      sym_limit_clause,
    STATE(284), 1,
      sym_offset_clause,
    STATE(524), 1,
      sym_for_clause,
    STATE(850), 1,
      sym_update_clause,
  [4061] = 11,
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
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_formatting_comment,
    STATE(228), 1,
      sym_where_clause,
    STATE(328), 1,
      sym_order_by_clause,
    STATE(546), 1,
      sym_limit_clause,
    STATE(899), 1,
      sym_offset_clause,
  [4095] = 11,
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
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_formatting_comment,
    STATE(198), 1,
      sym_limit_clause,
    STATE(334), 1,
      sym_offset_clause,
    STATE(380), 1,
      sym_for_clause,
    STATE(770), 1,
      sym_update_clause,
  [4129] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(121), 1,
      sym_formatting_comment,
    ACTIONS(389), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4147] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(122), 1,
      sym_formatting_comment,
    ACTIONS(391), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4165] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(123), 1,
      sym_formatting_comment,
    ACTIONS(343), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_and_expression_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4183] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(393), 1,
      aux_sym_or_expression_token1,
    STATE(124), 1,
      sym_formatting_comment,
    ACTIONS(348), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4203] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(125), 1,
      sym_formatting_comment,
    ACTIONS(78), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(76), 6,
      aux_sym_sosl_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [4223] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_returning_clause_repeat1,
    STATE(126), 1,
      sym_formatting_comment,
    ACTIONS(395), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4245] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      sym_formatting_comment,
    STATE(135), 1,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(399), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4267] = 11,
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
    STATE(128), 1,
      sym_formatting_comment,
    STATE(200), 1,
      sym_limit_clause,
    STATE(326), 1,
      sym_offset_clause,
    STATE(392), 1,
      sym_for_clause,
    STATE(611), 1,
      sym_update_clause,
  [4301] = 11,
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
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_formatting_comment,
    STATE(235), 1,
      sym_limit_clause,
    STATE(317), 1,
      sym_offset_clause,
    STATE(401), 1,
      sym_for_clause,
    STATE(670), 1,
      sym_update_clause,
  [4335] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_formatting_comment,
    ACTIONS(405), 8,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4355] = 11,
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
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_formatting_comment,
    STATE(206), 1,
      sym_limit_clause,
    STATE(338), 1,
      sym_offset_clause,
    STATE(408), 1,
      sym_for_clause,
    STATE(716), 1,
      sym_update_clause,
  [4389] = 11,
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
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym_formatting_comment,
    STATE(207), 1,
      sym_limit_clause,
    STATE(264), 1,
      sym_offset_clause,
    STATE(418), 1,
      sym_for_clause,
    STATE(795), 1,
      sym_update_clause,
  [4423] = 11,
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
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      sym_formatting_comment,
    STATE(210), 1,
      sym_limit_clause,
    STATE(270), 1,
      sym_offset_clause,
    STATE(424), 1,
      sym_for_clause,
    STATE(861), 1,
      sym_update_clause,
  [4457] = 11,
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
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_formatting_comment,
    STATE(211), 1,
      sym_limit_clause,
    STATE(274), 1,
      sym_offset_clause,
    STATE(432), 1,
      sym_for_clause,
    STATE(885), 1,
      sym_update_clause,
  [4491] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    STATE(135), 2,
      sym_formatting_comment,
      aux_sym__group_by_expression_repeat1,
    ACTIONS(420), 7,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4511] = 11,
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
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      sym_formatting_comment,
    STATE(213), 1,
      sym_limit_clause,
    STATE(283), 1,
      sym_offset_clause,
    STATE(448), 1,
      sym_for_clause,
    STATE(610), 1,
      sym_update_clause,
  [4545] = 11,
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
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      sym_formatting_comment,
    STATE(216), 1,
      sym_limit_clause,
    STATE(289), 1,
      sym_offset_clause,
    STATE(456), 1,
      sym_for_clause,
    STATE(625), 1,
      sym_update_clause,
  [4579] = 11,
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
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      sym_formatting_comment,
    STATE(217), 1,
      sym_limit_clause,
    STATE(293), 1,
      sym_offset_clause,
    STATE(464), 1,
      sym_for_clause,
    STATE(644), 1,
      sym_update_clause,
  [4613] = 11,
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
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_formatting_comment,
    STATE(218), 1,
      sym_limit_clause,
    STATE(298), 1,
      sym_offset_clause,
    STATE(476), 1,
      sym_for_clause,
    STATE(684), 1,
      sym_update_clause,
  [4647] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_returning_clause_repeat1,
    STATE(140), 1,
      sym_formatting_comment,
    ACTIONS(430), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4669] = 11,
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
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_formatting_comment,
    STATE(222), 1,
      sym_limit_clause,
    STATE(309), 1,
      sym_offset_clause,
    STATE(497), 1,
      sym_for_clause,
    STATE(749), 1,
      sym_update_clause,
  [4703] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(142), 1,
      sym_formatting_comment,
    ACTIONS(70), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(68), 6,
      aux_sym_sosl_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [4723] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(143), 1,
      sym_formatting_comment,
    ACTIONS(434), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4741] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(440), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(442), 1,
      sym_identifier,
    STATE(144), 1,
      sym_formatting_comment,
    ACTIONS(436), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(438), 4,
      aux_sym_sosl_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4765] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(145), 1,
      sym_formatting_comment,
    ACTIONS(82), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(80), 6,
      aux_sym_sosl_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [4785] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(146), 1,
      sym_formatting_comment,
    ACTIONS(64), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
    ACTIONS(62), 6,
      aux_sym_sosl_using_clause_token1,
      aux_sym_storage_alias_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      sym_identifier,
  [4805] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(147), 1,
      sym_formatting_comment,
    ACTIONS(444), 9,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4823] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(162), 1,
      aux_sym_function_expression_token1,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(14), 1,
      sym_dotted_identifier,
    STATE(64), 1,
      sym__value_expression,
    STATE(148), 1,
      sym_formatting_comment,
    STATE(226), 1,
      sym_order_expression,
    STATE(924), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
  [4852] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(149), 1,
      sym_formatting_comment,
    ACTIONS(446), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4869] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(150), 1,
      sym_formatting_comment,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4886] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(151), 1,
      sym_formatting_comment,
    ACTIONS(450), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4903] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(152), 1,
      sym_formatting_comment,
    ACTIONS(452), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4920] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(153), 1,
      sym_formatting_comment,
    ACTIONS(365), 8,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4937] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(154), 1,
      sym_formatting_comment,
    ACTIONS(454), 8,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4954] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(155), 1,
      sym_formatting_comment,
    ACTIONS(420), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_having_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [4971] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(458), 1,
      aux_sym_sosl_with_clause_token1,
    STATE(251), 1,
      sym_sosl_with_clause,
    STATE(156), 2,
      sym_formatting_comment,
      aux_sym_sosl_query_body_repeat2,
    ACTIONS(456), 5,
      ts_builtin_sym_end,
      aux_sym_sosl_using_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [4992] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      aux_sym_type_of_clause_token2,
    ACTIONS(463), 1,
      aux_sym_when_expression_token1,
    ACTIONS(465), 1,
      aux_sym_else_expression_token1,
    STATE(9), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(157), 1,
      sym_formatting_comment,
    STATE(259), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(465), 1,
      sym_when_expression,
    STATE(643), 1,
      sym_else_expression,
  [5023] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(469), 1,
      aux_sym_having_clause_token1,
    STATE(158), 1,
      sym_formatting_comment,
    STATE(248), 1,
      sym_having_clause,
    ACTIONS(467), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5044] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(159), 1,
      sym_formatting_comment,
    ACTIONS(471), 8,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5061] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(160), 1,
      sym_formatting_comment,
    ACTIONS(473), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5078] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      sym_formatting_comment,
    STATE(172), 1,
      aux_sym_selected_fields_repeat1,
    ACTIONS(477), 6,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5099] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(481), 1,
      aux_sym_using_scope_type_token3,
    STATE(147), 1,
      sym_using_scope_type,
    STATE(162), 1,
      sym_formatting_comment,
    ACTIONS(479), 6,
      aux_sym_using_scope_type_token1,
      aux_sym_using_scope_type_token2,
      aux_sym_using_scope_type_token4,
      aux_sym_using_scope_type_token5,
      aux_sym_using_scope_type_token6,
      aux_sym_using_scope_type_token7,
  [5120] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(163), 1,
      sym_formatting_comment,
    ACTIONS(483), 8,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5137] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(164), 1,
      sym_formatting_comment,
    ACTIONS(485), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5154] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(165), 1,
      sym_formatting_comment,
    ACTIONS(487), 8,
      ts_builtin_sym_end,
      aux_sym_in_clause_token1,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5171] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(166), 1,
      sym_formatting_comment,
    ACTIONS(489), 8,
      ts_builtin_sym_end,
      aux_sym_in_clause_token1,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5188] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(167), 1,
      sym_formatting_comment,
    ACTIONS(491), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5205] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(168), 1,
      sym_formatting_comment,
    ACTIONS(249), 8,
      anon_sym_RPAREN,
      aux_sym_sosl_with_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5222] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_selected_fields_repeat1,
    STATE(169), 1,
      sym_formatting_comment,
    ACTIONS(493), 6,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5243] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(170), 1,
      sym_formatting_comment,
    ACTIONS(495), 8,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5260] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(171), 1,
      sym_formatting_comment,
    ACTIONS(497), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5277] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    STATE(172), 2,
      sym_formatting_comment,
      aux_sym_selected_fields_repeat1,
    ACTIONS(497), 6,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5296] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(173), 1,
      sym_formatting_comment,
    ACTIONS(502), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5313] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(174), 1,
      sym_formatting_comment,
    ACTIONS(436), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5330] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(175), 1,
      sym_formatting_comment,
    ACTIONS(504), 8,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      anon_sym_COMMA,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5347] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(162), 1,
      aux_sym_function_expression_token1,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(14), 1,
      sym_dotted_identifier,
    STATE(64), 1,
      sym__value_expression,
    STATE(176), 1,
      sym_formatting_comment,
    STATE(245), 1,
      sym_order_expression,
    STATE(924), 1,
      sym__function_name,
    STATE(17), 2,
      sym_function_expression,
      sym_field_identifier,
  [5376] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(177), 1,
      sym_formatting_comment,
    ACTIONS(506), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sosl_using_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5393] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(150), 1,
      aux_sym_function_expression_token1,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym_dotted_identifier,
    STATE(178), 1,
      sym_formatting_comment,
    STATE(551), 1,
      sym__value_expression,
    STATE(891), 1,
      sym__function_name,
    STATE(145), 2,
      sym_function_expression,
      sym_field_identifier,
  [5422] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(179), 1,
      sym_formatting_comment,
    ACTIONS(510), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_null_direction_token1,
      aux_sym_order_null_direction_token2,
  [5439] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(180), 1,
      sym_formatting_comment,
    STATE(278), 1,
      sym_limit_clause,
    STATE(454), 1,
      sym_offset_clause,
    STATE(863), 1,
      sym_update_clause,
  [5467] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(181), 2,
      sym_formatting_comment,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(515), 5,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [5485] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(182), 1,
      sym_formatting_comment,
    STATE(333), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(519), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [5509] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(150), 1,
      aux_sym_function_expression_token1,
    ACTIONS(152), 1,
      sym_identifier,
    STATE(146), 1,
      sym_dotted_identifier,
    STATE(183), 1,
      sym_formatting_comment,
    STATE(559), 1,
      sym__value_expression,
    STATE(891), 1,
      sym__function_name,
    STATE(145), 2,
      sym_function_expression,
      sym_field_identifier,
  [5535] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(150), 1,
      aux_sym_function_expression_token1,
    ACTIONS(152), 1,
      sym_identifier,
    STATE(146), 1,
      sym_dotted_identifier,
    STATE(184), 1,
      sym_formatting_comment,
    STATE(572), 1,
      sym__value_expression,
    STATE(891), 1,
      sym__function_name,
    STATE(145), 2,
      sym_function_expression,
      sym_field_identifier,
  [5561] = 9,
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
    STATE(185), 1,
      sym_formatting_comment,
    STATE(292), 1,
      sym_offset_clause,
    STATE(390), 1,
      sym_for_clause,
    STATE(599), 1,
      sym_update_clause,
  [5589] = 9,
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
    STATE(186), 1,
      sym_formatting_comment,
    STATE(315), 1,
      sym_offset_clause,
    STATE(399), 1,
      sym_for_clause,
    STATE(646), 1,
      sym_update_clause,
  [5617] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    STATE(187), 1,
      sym_formatting_comment,
    STATE(322), 1,
      sym_limit_clause,
    STATE(427), 1,
      sym_offset_clause,
    STATE(860), 1,
      sym_update_clause,
  [5645] = 9,
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
    STATE(188), 1,
      sym_formatting_comment,
    STATE(329), 1,
      sym_offset_clause,
    STATE(406), 1,
      sym_for_clause,
    STATE(693), 1,
      sym_update_clause,
  [5673] = 9,
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
    STATE(189), 1,
      sym_formatting_comment,
    STATE(339), 1,
      sym_offset_clause,
    STATE(410), 1,
      sym_for_clause,
    STATE(727), 1,
      sym_update_clause,
  [5701] = 9,
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
    STATE(190), 1,
      sym_formatting_comment,
    STATE(340), 1,
      sym_offset_clause,
    STATE(414), 1,
      sym_for_clause,
    STATE(755), 1,
      sym_update_clause,
  [5729] = 9,
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
    STATE(191), 1,
      sym_formatting_comment,
    STATE(341), 1,
      sym_offset_clause,
    STATE(416), 1,
      sym_for_clause,
    STATE(773), 1,
      sym_update_clause,
  [5757] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(192), 1,
      sym_formatting_comment,
    ACTIONS(535), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5773] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(193), 1,
      sym_formatting_comment,
    ACTIONS(537), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5789] = 9,
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
    STATE(194), 1,
      sym_formatting_comment,
    STATE(268), 1,
      sym_offset_clause,
    STATE(422), 1,
      sym_for_clause,
    STATE(841), 1,
      sym_update_clause,
  [5817] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      sym_formatting_comment,
    STATE(271), 1,
      sym_offset_clause,
    STATE(426), 1,
      sym_for_clause,
    STATE(872), 1,
      sym_update_clause,
  [5845] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      sym_formatting_comment,
    STATE(272), 1,
      sym_offset_clause,
    STATE(429), 1,
      sym_for_clause,
    STATE(879), 1,
      sym_update_clause,
  [5873] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(162), 1,
      aux_sym_function_expression_token1,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(14), 1,
      sym_dotted_identifier,
    STATE(158), 1,
      sym__group_by_expression,
    STATE(197), 1,
      sym_formatting_comment,
    STATE(924), 1,
      sym__function_name,
    STATE(116), 2,
      sym_function_expression,
      sym_field_identifier,
  [5899] = 9,
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
    STATE(198), 1,
      sym_formatting_comment,
    STATE(275), 1,
      sym_offset_clause,
    STATE(435), 1,
      sym_for_clause,
    STATE(898), 1,
      sym_update_clause,
  [5927] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(199), 1,
      sym_formatting_comment,
    ACTIONS(547), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [5943] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_formatting_comment,
    STATE(280), 1,
      sym_offset_clause,
    STATE(444), 1,
      sym_for_clause,
    STATE(598), 1,
      sym_update_clause,
  [5971] = 9,
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
    STATE(201), 1,
      sym_formatting_comment,
    STATE(281), 1,
      sym_offset_clause,
    STATE(446), 1,
      sym_for_clause,
    STATE(604), 1,
      sym_update_clause,
  [5999] = 9,
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
    STATE(202), 1,
      sym_formatting_comment,
    STATE(267), 1,
      sym_offset_clause,
    STATE(430), 1,
      sym_for_clause,
    STATE(888), 1,
      sym_update_clause,
  [6027] = 9,
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
    STATE(203), 1,
      sym_formatting_comment,
    STATE(287), 1,
      sym_offset_clause,
    STATE(453), 1,
      sym_for_clause,
    STATE(619), 1,
      sym_update_clause,
  [6055] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(150), 1,
      aux_sym_function_expression_token1,
    ACTIONS(152), 1,
      sym_identifier,
    STATE(146), 1,
      sym_dotted_identifier,
    STATE(204), 1,
      sym_formatting_comment,
    STATE(551), 1,
      sym__value_expression,
    STATE(891), 1,
      sym__function_name,
    STATE(145), 2,
      sym_function_expression,
      sym_field_identifier,
  [6081] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      sym_formatting_comment,
    STATE(291), 1,
      sym_offset_clause,
    STATE(461), 1,
      sym_for_clause,
    STATE(639), 1,
      sym_update_clause,
  [6109] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      sym_formatting_comment,
    STATE(294), 1,
      sym_offset_clause,
    STATE(467), 1,
      sym_for_clause,
    STATE(652), 1,
      sym_update_clause,
  [6137] = 9,
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
    STATE(295), 1,
      sym_offset_clause,
    STATE(472), 1,
      sym_for_clause,
    STATE(672), 1,
      sym_update_clause,
  [6165] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_formatting_comment,
    STATE(296), 1,
      sym_offset_clause,
    STATE(474), 1,
      sym_for_clause,
    STATE(678), 1,
      sym_update_clause,
  [6193] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      sym_formatting_comment,
    STATE(279), 1,
      sym_offset_clause,
    STATE(473), 1,
      sym_for_clause,
    STATE(724), 1,
      sym_update_clause,
  [6221] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym_formatting_comment,
    STATE(299), 1,
      sym_offset_clause,
    STATE(479), 1,
      sym_for_clause,
    STATE(692), 1,
      sym_update_clause,
  [6249] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      sym_formatting_comment,
    STATE(300), 1,
      sym_offset_clause,
    STATE(483), 1,
      sym_for_clause,
    STATE(707), 1,
      sym_update_clause,
  [6277] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(212), 1,
      sym_formatting_comment,
    ACTIONS(571), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6293] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      sym_formatting_comment,
    STATE(306), 1,
      sym_offset_clause,
    STATE(492), 1,
      sym_for_clause,
    STATE(737), 1,
      sym_update_clause,
  [6321] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_formatting_comment,
    STATE(307), 1,
      sym_offset_clause,
    STATE(494), 1,
      sym_for_clause,
    STATE(743), 1,
      sym_update_clause,
  [6349] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(215), 1,
      sym_formatting_comment,
    ACTIONS(577), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6365] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym_formatting_comment,
    STATE(310), 1,
      sym_offset_clause,
    STATE(499), 1,
      sym_for_clause,
    STATE(757), 1,
      sym_update_clause,
  [6393] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      sym_formatting_comment,
    STATE(311), 1,
      sym_offset_clause,
    STATE(503), 1,
      sym_for_clause,
    STATE(772), 1,
      sym_update_clause,
  [6421] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      sym_formatting_comment,
    STATE(312), 1,
      sym_offset_clause,
    STATE(509), 1,
      sym_for_clause,
    STATE(794), 1,
      sym_update_clause,
  [6449] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      sym_formatting_comment,
    STATE(308), 1,
      sym_offset_clause,
    STATE(561), 1,
      sym_for_clause,
    STATE(632), 1,
      sym_update_clause,
  [6477] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(220), 1,
      sym_formatting_comment,
    STATE(320), 1,
      sym_limit_clause,
    STATE(548), 1,
      sym_offset_clause,
    STATE(877), 1,
      sym_update_clause,
  [6505] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(221), 1,
      sym_formatting_comment,
    ACTIONS(587), 7,
      anon_sym_RPAREN,
      aux_sym_group_by_clause_token1,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6521] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      sym_formatting_comment,
    STATE(313), 1,
      sym_offset_clause,
    STATE(515), 1,
      sym_for_clause,
    STATE(823), 1,
      sym_update_clause,
  [6549] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(591), 1,
      anon_sym_DOT,
    STATE(223), 1,
      sym_formatting_comment,
    STATE(255), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(62), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [6573] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(224), 1,
      sym_formatting_comment,
    ACTIONS(593), 7,
      ts_builtin_sym_end,
      aux_sym_returning_clause_token1,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6589] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym_formatting_comment,
    ACTIONS(595), 6,
      ts_builtin_sym_end,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6607] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      sym_formatting_comment,
    STATE(232), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(601), 5,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6627] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym_formatting_comment,
    STATE(327), 1,
      sym_offset_clause,
    STATE(378), 1,
      sym_for_clause,
    STATE(723), 1,
      sym_update_clause,
  [6655] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym_formatting_comment,
    STATE(269), 1,
      sym_order_by_clause,
    STATE(397), 1,
      sym_limit_clause,
    STATE(637), 1,
      sym_offset_clause,
  [6683] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      sym_formatting_comment,
    STATE(335), 1,
      sym_offset_clause,
    STATE(383), 1,
      sym_for_clause,
    STATE(828), 1,
      sym_update_clause,
  [6711] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(230), 1,
      sym_formatting_comment,
    STATE(342), 1,
      sym_limit_clause,
    STATE(449), 1,
      sym_offset_clause,
    STATE(613), 1,
      sym_update_clause,
  [6739] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      sym_formatting_comment,
    STATE(330), 1,
      sym_offset_clause,
    STATE(487), 1,
      sym_for_clause,
    STATE(720), 1,
      sym_update_clause,
  [6767] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_order_by_clause_repeat1,
    STATE(232), 1,
      sym_formatting_comment,
    ACTIONS(611), 5,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6787] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(150), 1,
      aux_sym_function_expression_token1,
    ACTIONS(152), 1,
      sym_identifier,
    STATE(146), 1,
      sym_dotted_identifier,
    STATE(233), 1,
      sym_formatting_comment,
    STATE(554), 1,
      sym__value_expression,
    STATE(891), 1,
      sym__function_name,
    STATE(145), 2,
      sym_function_expression,
      sym_field_identifier,
  [6813] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(102), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      sym_formatting_comment,
    STATE(328), 1,
      sym_order_by_clause,
    STATE(546), 1,
      sym_limit_clause,
    STATE(899), 1,
      sym_offset_clause,
  [6841] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      sym_formatting_comment,
    STATE(290), 1,
      sym_offset_clause,
    STATE(458), 1,
      sym_for_clause,
    STATE(633), 1,
      sym_update_clause,
  [6869] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(236), 1,
      sym_formatting_comment,
    ACTIONS(375), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6884] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(237), 1,
      sym_formatting_comment,
    ACTIONS(615), 6,
      ts_builtin_sym_end,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6899] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(238), 1,
      sym_formatting_comment,
    ACTIONS(617), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [6914] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(239), 1,
      sym_formatting_comment,
    ACTIONS(619), 6,
      ts_builtin_sym_end,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6929] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(240), 1,
      sym_formatting_comment,
    STATE(922), 1,
      sym_in_type,
    ACTIONS(621), 5,
      aux_sym_in_type_token1,
      aux_sym_in_type_token2,
      aux_sym_in_type_token3,
      aux_sym_in_type_token4,
      aux_sym_in_type_token5,
  [6946] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(241), 1,
      sym_formatting_comment,
    ACTIONS(623), 6,
      ts_builtin_sym_end,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6961] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(242), 1,
      sym_formatting_comment,
    ACTIONS(625), 6,
      ts_builtin_sym_end,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6976] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(243), 1,
      sym_formatting_comment,
    ACTIONS(627), 6,
      ts_builtin_sym_end,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [6991] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(629), 1,
      aux_sym_using_scope_clause_token1,
    ACTIONS(631), 1,
      aux_sym_using_lookup_clause_token1,
    ACTIONS(633), 1,
      aux_sym_using_listview_clause_token1,
    STATE(244), 1,
      sym_formatting_comment,
    STATE(143), 3,
      sym_using_scope_clause,
      sym_using_lookup_clause,
      sym_using_listview_clause,
  [7012] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(245), 1,
      sym_formatting_comment,
    ACTIONS(515), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7027] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(246), 1,
      sym_formatting_comment,
    ACTIONS(635), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7042] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(247), 1,
      sym_formatting_comment,
    ACTIONS(637), 6,
      ts_builtin_sym_end,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7057] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(248), 1,
      sym_formatting_comment,
    ACTIONS(639), 6,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
      aux_sym_order_by_clause_token1,
  [7072] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(641), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(643), 1,
      sym_bound_apex_expression,
    ACTIONS(645), 1,
      sym_identifier,
    STATE(146), 1,
      sym_dotted_identifier,
    STATE(249), 1,
      sym_formatting_comment,
    STATE(869), 1,
      sym_field_identifier,
    STATE(871), 1,
      sym_geo_location_type,
  [7097] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(162), 1,
      aux_sym_function_expression_token1,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(14), 1,
      sym_dotted_identifier,
    STATE(250), 1,
      sym_formatting_comment,
    STATE(924), 1,
      sym__function_name,
    STATE(155), 2,
      sym_function_expression,
      sym_field_identifier,
  [7120] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(251), 1,
      sym_formatting_comment,
    ACTIONS(647), 6,
      ts_builtin_sym_end,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7135] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(252), 1,
      sym_formatting_comment,
    ACTIONS(649), 6,
      ts_builtin_sym_end,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7150] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(253), 1,
      sym_formatting_comment,
    ACTIONS(651), 6,
      ts_builtin_sym_end,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7165] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(254), 1,
      sym_formatting_comment,
    ACTIONS(653), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7180] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_DOT,
    STATE(255), 1,
      sym_formatting_comment,
    STATE(256), 1,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(49), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7201] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_DOT,
    STATE(256), 2,
      sym_formatting_comment,
      aux_sym_dotted_identifier_repeat1,
    ACTIONS(55), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [7220] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(257), 1,
      sym_formatting_comment,
    ACTIONS(658), 6,
      ts_builtin_sym_end,
      aux_sym_sosl_using_clause_token1,
      aux_sym_sosl_with_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [7235] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(53), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(258), 1,
      sym_formatting_comment,
    ACTIONS(660), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [7254] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(463), 1,
      aux_sym_when_expression_token1,
    ACTIONS(465), 1,
      aux_sym_else_expression_token1,
    ACTIONS(662), 1,
      aux_sym_type_of_clause_token2,
    STATE(259), 1,
      sym_formatting_comment,
    STATE(265), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(465), 1,
      sym_when_expression,
    STATE(676), 1,
      sym_else_expression,
  [7279] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(461), 1,
      aux_sym_type_of_clause_token2,
    ACTIONS(463), 1,
      aux_sym_when_expression_token1,
    ACTIONS(465), 1,
      aux_sym_else_expression_token1,
    STATE(259), 1,
      aux_sym_type_of_clause_repeat1,
    STATE(260), 1,
      sym_formatting_comment,
    STATE(465), 1,
      sym_when_expression,
    STATE(643), 1,
      sym_else_expression,
  [7304] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(641), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(643), 1,
      sym_bound_apex_expression,
    ACTIONS(645), 1,
      sym_identifier,
    STATE(146), 1,
      sym_dotted_identifier,
    STATE(261), 1,
      sym_formatting_comment,
    STATE(869), 1,
      sym_field_identifier,
    STATE(925), 1,
      sym_geo_location_type,
  [7329] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(641), 1,
      aux_sym_geo_location_type_token1,
    ACTIONS(643), 1,
      sym_bound_apex_expression,
    ACTIONS(645), 1,
      sym_identifier,
    STATE(146), 1,
      sym_dotted_identifier,
    STATE(262), 1,
      sym_formatting_comment,
    STATE(589), 1,
      sym_geo_location_type,
    STATE(869), 1,
      sym_field_identifier,
  [7354] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      sym_formatting_comment,
    STATE(333), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(519), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [7372] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      sym_formatting_comment,
    STATE(374), 1,
      sym_for_clause,
    STATE(674), 1,
      sym_update_clause,
  [7394] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(668), 1,
      aux_sym_when_expression_token1,
    STATE(465), 1,
      sym_when_expression,
    ACTIONS(666), 2,
      aux_sym_type_of_clause_token2,
      aux_sym_else_expression_token1,
    STATE(265), 2,
      sym_formatting_comment,
      aux_sym_type_of_clause_repeat1,
  [7412] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      sym_formatting_comment,
    STATE(475), 1,
      sym_for_clause,
    STATE(680), 1,
      sym_update_clause,
  [7434] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      sym_formatting_comment,
    STATE(409), 1,
      sym_for_clause,
    STATE(719), 1,
      sym_update_clause,
  [7456] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      sym_formatting_comment,
    STATE(562), 1,
      sym_for_clause,
    STATE(687), 1,
      sym_update_clause,
  [7478] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_formatting_comment,
    STATE(547), 1,
      sym_limit_clause,
    STATE(896), 1,
      sym_offset_clause,
  [7500] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      sym_formatting_comment,
    STATE(480), 1,
      sym_for_clause,
    STATE(694), 1,
      sym_update_clause,
  [7522] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      sym_formatting_comment,
    STATE(481), 1,
      sym_for_clause,
    STATE(698), 1,
      sym_update_clause,
  [7544] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym_formatting_comment,
    STATE(482), 1,
      sym_for_clause,
    STATE(702), 1,
      sym_update_clause,
  [7566] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      sym_formatting_comment,
    STATE(412), 1,
      sym_for_clause,
    STATE(735), 1,
      sym_update_clause,
  [7588] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      sym_formatting_comment,
    STATE(484), 1,
      sym_for_clause,
    STATE(709), 1,
      sym_update_clause,
  [7610] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      sym_formatting_comment,
    STATE(485), 1,
      sym_for_clause,
    STATE(713), 1,
      sym_update_clause,
  [7632] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      sym_formatting_comment,
    STATE(523), 1,
      sym_for_clause,
    STATE(747), 1,
      sym_update_clause,
  [7654] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(277), 1,
      sym_formatting_comment,
    ACTIONS(693), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
      aux_sym_offset_clause_token1,
  [7668] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(278), 1,
      sym_formatting_comment,
    STATE(449), 1,
      sym_offset_clause,
    STATE(613), 1,
      sym_update_clause,
  [7690] = 7,
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
    STATE(413), 1,
      sym_for_clause,
    STATE(742), 1,
      sym_update_clause,
  [7712] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      sym_formatting_comment,
    STATE(490), 1,
      sym_for_clause,
    STATE(728), 1,
      sym_update_clause,
  [7734] = 7,
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
    STATE(491), 1,
      sym_for_clause,
    STATE(732), 1,
      sym_update_clause,
  [7756] = 7,
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
    STATE(447), 1,
      sym_for_clause,
    STATE(606), 1,
      sym_update_clause,
  [7778] = 7,
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
    STATE(493), 1,
      sym_for_clause,
    STATE(739), 1,
      sym_update_clause,
  [7800] = 7,
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
    STATE(415), 1,
      sym_for_clause,
    STATE(762), 1,
      sym_update_clause,
  [7822] = 7,
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
    STATE(496), 1,
      sym_for_clause,
    STATE(745), 1,
      sym_update_clause,
  [7844] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      sym_formatting_comment,
    STATE(546), 1,
      sym_limit_clause,
    STATE(899), 1,
      sym_offset_clause,
  [7866] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      sym_formatting_comment,
    STATE(498), 1,
      sym_for_clause,
    STATE(752), 1,
      sym_update_clause,
  [7888] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      sym_formatting_comment,
    STATE(417), 1,
      sym_for_clause,
    STATE(784), 1,
      sym_update_clause,
  [7910] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      sym_formatting_comment,
    STATE(500), 1,
      sym_for_clause,
    STATE(759), 1,
      sym_update_clause,
  [7932] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_formatting_comment,
    STATE(501), 1,
      sym_for_clause,
    STATE(763), 1,
      sym_update_clause,
  [7954] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      sym_formatting_comment,
    STATE(502), 1,
      sym_for_clause,
    STATE(767), 1,
      sym_update_clause,
  [7976] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      sym_formatting_comment,
    STATE(443), 1,
      sym_for_clause,
    STATE(593), 1,
      sym_update_clause,
  [7998] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
      sym_formatting_comment,
    STATE(505), 1,
      sym_for_clause,
    STATE(774), 1,
      sym_update_clause,
  [8020] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      sym_formatting_comment,
    STATE(506), 1,
      sym_for_clause,
    STATE(778), 1,
      sym_update_clause,
  [8042] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      sym_formatting_comment,
    STATE(507), 1,
      sym_for_clause,
    STATE(785), 1,
      sym_update_clause,
  [8064] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      sym_formatting_comment,
    STATE(508), 1,
      sym_for_clause,
    STATE(789), 1,
      sym_update_clause,
  [8086] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(731), 1,
      aux_sym_with_data_cat_filter_type_token2,
    STATE(297), 1,
      sym_formatting_comment,
    STATE(573), 1,
      sym_with_data_cat_filter_type,
    ACTIONS(729), 3,
      aux_sym_with_data_cat_filter_type_token1,
      aux_sym_with_data_cat_filter_type_token3,
      aux_sym_with_data_cat_filter_type_token4,
  [8104] = 7,
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
    STATE(510), 1,
      sym_for_clause,
    STATE(796), 1,
      sym_update_clause,
  [8126] = 7,
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
    STATE(511), 1,
      sym_for_clause,
    STATE(800), 1,
      sym_update_clause,
  [8148] = 7,
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
    STATE(512), 1,
      sym_for_clause,
    STATE(806), 1,
      sym_update_clause,
  [8170] = 7,
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
    STATE(400), 1,
      sym_for_clause,
    STATE(653), 1,
      sym_update_clause,
  [8192] = 7,
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
    STATE(375), 1,
      sym_for_clause,
    STATE(640), 1,
      sym_update_clause,
  [8214] = 7,
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
    STATE(407), 1,
      sym_for_clause,
    STATE(701), 1,
      sym_update_clause,
  [8236] = 7,
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
    STATE(423), 1,
      sym_for_clause,
    STATE(857), 1,
      sym_update_clause,
  [8258] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      sym_formatting_comment,
    STATE(455), 1,
      sym_for_clause,
    STATE(621), 1,
      sym_update_clause,
  [8280] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      sym_formatting_comment,
    STATE(513), 1,
      sym_for_clause,
    STATE(814), 1,
      sym_update_clause,
  [8302] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      sym_formatting_comment,
    STATE(514), 1,
      sym_for_clause,
    STATE(818), 1,
      sym_update_clause,
  [8324] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      sym_formatting_comment,
    STATE(425), 1,
      sym_for_clause,
    STATE(864), 1,
      sym_update_clause,
  [8346] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      sym_formatting_comment,
    STATE(516), 1,
      sym_for_clause,
    STATE(825), 1,
      sym_update_clause,
  [8368] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      sym_formatting_comment,
    STATE(517), 1,
      sym_for_clause,
    STATE(829), 1,
      sym_update_clause,
  [8390] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      sym_formatting_comment,
    STATE(518), 1,
      sym_for_clause,
    STATE(835), 1,
      sym_update_clause,
  [8412] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    STATE(312), 1,
      sym_formatting_comment,
    STATE(519), 1,
      sym_for_clause,
    STATE(842), 1,
      sym_update_clause,
  [8434] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      sym_formatting_comment,
    STATE(520), 1,
      sym_for_clause,
    STATE(851), 1,
      sym_update_clause,
  [8456] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      sym_formatting_comment,
    STATE(441), 1,
      sym_for_clause,
    STATE(608), 1,
      sym_update_clause,
  [8478] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      sym_formatting_comment,
    STATE(457), 1,
      sym_for_clause,
    STATE(628), 1,
      sym_update_clause,
  [8500] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    STATE(316), 1,
      sym_formatting_comment,
    STATE(488), 1,
      sym_for_clause,
    STATE(736), 1,
      sym_update_clause,
  [8522] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      sym_formatting_comment,
    STATE(460), 1,
      sym_for_clause,
    STATE(635), 1,
      sym_update_clause,
  [8544] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_formatting_comment,
    STATE(428), 1,
      sym_for_clause,
    STATE(875), 1,
      sym_update_clause,
  [8566] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 1,
      aux_sym_and_expression_token1,
    ACTIONS(775), 1,
      aux_sym_or_expression_token1,
    STATE(105), 1,
      aux_sym_and_expression_repeat1,
    STATE(319), 1,
      sym_formatting_comment,
    STATE(536), 1,
      aux_sym_or_expression_repeat1,
  [8588] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    STATE(320), 1,
      sym_formatting_comment,
    STATE(427), 1,
      sym_offset_clause,
    STATE(860), 1,
      sym_update_clause,
  [8610] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      sym_formatting_comment,
    STATE(431), 1,
      sym_for_clause,
    STATE(881), 1,
      sym_update_clause,
  [8632] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(779), 1,
      ts_builtin_sym_end,
    STATE(322), 1,
      sym_formatting_comment,
    STATE(386), 1,
      sym_offset_clause,
    STATE(870), 1,
      sym_update_clause,
  [8654] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      sym_formatting_comment,
    STATE(379), 1,
      sym_for_clause,
    STATE(731), 1,
      sym_update_clause,
  [8676] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      sym_formatting_comment,
    STATE(463), 1,
      sym_for_clause,
    STATE(641), 1,
      sym_update_clause,
  [8698] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(325), 1,
      sym_formatting_comment,
    ACTIONS(57), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(55), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [8714] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      sym_formatting_comment,
    STATE(445), 1,
      sym_for_clause,
    STATE(600), 1,
      sym_update_clause,
  [8736] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      sym_formatting_comment,
    STATE(434), 1,
      sym_for_clause,
    STATE(890), 1,
      sym_update_clause,
  [8758] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(98), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      sym_formatting_comment,
    STATE(397), 1,
      sym_limit_clause,
    STATE(637), 1,
      sym_offset_clause,
  [8780] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    STATE(329), 1,
      sym_formatting_comment,
    STATE(466), 1,
      sym_for_clause,
    STATE(647), 1,
      sym_update_clause,
  [8802] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      sym_formatting_comment,
    STATE(382), 1,
      sym_for_clause,
    STATE(792), 1,
      sym_update_clause,
  [8824] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      sym_formatting_comment,
    STATE(391), 1,
      sym_for_clause,
    STATE(605), 1,
      sym_update_clause,
  [8846] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      sym_formatting_comment,
    STATE(384), 1,
      sym_for_clause,
    STATE(858), 1,
      sym_update_clause,
  [8868] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      sym_formatting_comment,
    STATE(337), 1,
      aux_sym_field_list_repeat1,
    ACTIONS(797), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [8886] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
    STATE(334), 1,
      sym_formatting_comment,
    STATE(436), 1,
      sym_for_clause,
    STATE(904), 1,
      sym_update_clause,
  [8908] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
    STATE(335), 1,
      sym_formatting_comment,
    STATE(437), 1,
      sym_for_clause,
    STATE(909), 1,
      sym_update_clause,
  [8930] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(336), 1,
      sym_formatting_comment,
    STATE(454), 1,
      sym_offset_clause,
    STATE(863), 1,
      sym_update_clause,
  [8952] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    STATE(337), 2,
      sym_formatting_comment,
      aux_sym_field_list_repeat1,
    ACTIONS(660), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [8968] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    STATE(338), 1,
      sym_formatting_comment,
    STATE(468), 1,
      sym_for_clause,
    STATE(654), 1,
      sym_update_clause,
  [8990] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_formatting_comment,
    STATE(469), 1,
      sym_for_clause,
    STATE(658), 1,
      sym_update_clause,
  [9012] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_formatting_comment,
    STATE(470), 1,
      sym_for_clause,
    STATE(663), 1,
      sym_update_clause,
  [9034] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(92), 1,
      aux_sym_for_clause_token1,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      sym_formatting_comment,
    STATE(471), 1,
      sym_for_clause,
    STATE(667), 1,
      sym_update_clause,
  [9056] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(342), 1,
      sym_formatting_comment,
    STATE(548), 1,
      sym_offset_clause,
    STATE(877), 1,
      sym_update_clause,
  [9078] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      sym_formatting_comment,
    ACTIONS(72), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [9093] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(814), 1,
      sym_bound_apex_expression,
    ACTIONS(816), 1,
      sym_identifier,
    STATE(146), 1,
      sym_dotted_identifier,
    STATE(344), 1,
      sym_formatting_comment,
    STATE(931), 1,
      sym_field_identifier,
  [9112] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(7), 1,
      aux_sym_find_clause_token1,
    STATE(22), 1,
      sym_find_clause,
    STATE(345), 1,
      sym_formatting_comment,
    STATE(634), 1,
      sym_sosl_query_body,
    STATE(642), 1,
      sym__query_expression,
  [9131] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(346), 1,
      sym_formatting_comment,
    STATE(388), 1,
      sym_for_type,
    ACTIONS(818), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [9146] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      sym_formatting_comment,
    STATE(353), 1,
      aux_sym_for_clause_repeat1,
    ACTIONS(822), 2,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [9163] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(348), 1,
      sym_formatting_comment,
    STATE(359), 1,
      sym_for_type,
    ACTIONS(818), 3,
      aux_sym_for_type_token1,
      aux_sym_for_type_token2,
      aux_sym_for_type_token3,
  [9178] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(826), 1,
      anon_sym_COMMA,
    ACTIONS(824), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(349), 2,
      sym_formatting_comment,
      aux_sym_update_clause_repeat1,
  [9193] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(350), 1,
      sym_formatting_comment,
    STATE(920), 1,
      sym_fields_type,
    ACTIONS(829), 3,
      aux_sym_in_type_token1,
      aux_sym_fields_type_token1,
      aux_sym_fields_type_token2,
  [9208] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(816), 1,
      sym_identifier,
    ACTIONS(831), 1,
      sym_bound_apex_expression,
    STATE(146), 1,
      sym_dotted_identifier,
    STATE(351), 1,
      sym_formatting_comment,
    STATE(677), 1,
      sym_field_identifier,
  [9227] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(352), 1,
      sym_formatting_comment,
    ACTIONS(660), 4,
      anon_sym_COMMA,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [9240] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(833), 1,
      anon_sym_COMMA,
    ACTIONS(836), 2,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
    STATE(353), 2,
      sym_formatting_comment,
      aux_sym_for_clause_repeat1,
  [9255] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(838), 1,
      anon_sym_LPAREN,
    ACTIONS(840), 1,
      sym_bound_apex_expression,
    STATE(354), 1,
      sym_formatting_comment,
    STATE(66), 2,
      sym_subquery,
      sym_comparable_list,
  [9272] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(842), 1,
      sym_identifier,
    STATE(49), 1,
      sym_dotted_identifier,
    STATE(53), 1,
      sym_storage_identifier,
    STATE(86), 1,
      sym_storage_alias,
    STATE(355), 1,
      sym_formatting_comment,
  [9291] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(356), 1,
      sym_formatting_comment,
    ACTIONS(844), 4,
      ts_builtin_sym_end,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [9304] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_update_clause_repeat1,
    STATE(357), 1,
      sym_formatting_comment,
    ACTIONS(846), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9321] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(358), 1,
      sym_formatting_comment,
    ACTIONS(850), 4,
      ts_builtin_sym_end,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [9334] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_for_clause_repeat1,
    STATE(359), 1,
      sym_formatting_comment,
    ACTIONS(852), 2,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [9351] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(854), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(360), 1,
      sym_formatting_comment,
    STATE(586), 1,
      sym_with_record_visibility_param,
    ACTIONS(856), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [9368] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(842), 1,
      sym_identifier,
    STATE(48), 1,
      sym_storage_identifier,
    STATE(49), 1,
      sym_dotted_identifier,
    STATE(70), 1,
      sym_storage_alias,
    STATE(361), 1,
      sym_formatting_comment,
  [9387] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(362), 1,
      sym_formatting_comment,
    ACTIONS(858), 4,
      ts_builtin_sym_end,
      aux_sym_for_type_token1,
      aux_sym_limit_clause_token1,
      aux_sym_offset_clause_token1,
  [9400] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(854), 1,
      aux_sym_with_record_visibility_param_token1,
    STATE(363), 1,
      sym_formatting_comment,
    STATE(387), 1,
      sym_with_record_visibility_param,
    ACTIONS(856), 2,
      aux_sym_with_record_visibility_param_token2,
      aux_sym_with_record_visibility_param_token3,
  [9417] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      aux_sym_from_clause_token1,
    ACTIONS(440), 1,
      aux_sym_storage_alias_token1,
    ACTIONS(442), 1,
      sym_identifier,
    STATE(364), 1,
      sym_formatting_comment,
  [9436] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(365), 1,
      sym_formatting_comment,
    ACTIONS(80), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [9451] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      sym_formatting_comment,
    ACTIONS(62), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [9466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    STATE(367), 1,
      sym_formatting_comment,
    ACTIONS(76), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [9481] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    STATE(368), 1,
      sym_formatting_comment,
    ACTIONS(68), 3,
      aux_sym_from_clause_token1,
      aux_sym_storage_alias_token1,
      sym_identifier,
  [9496] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(860), 1,
      aux_sym_using_phrase_search_token1,
    ACTIONS(862), 1,
      aux_sym_using_advanced_search_token1,
    STATE(369), 1,
      sym_formatting_comment,
    STATE(362), 2,
      sym_using_phrase_search,
      sym_using_advanced_search,
  [9513] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(864), 1,
      anon_sym_LPAREN,
    ACTIONS(866), 1,
      sym_bound_apex_expression,
    STATE(370), 1,
      sym_formatting_comment,
    STATE(530), 2,
      sym_subquery,
      sym_comparable_list,
  [9530] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_update_clause_repeat1,
    STATE(371), 1,
      sym_formatting_comment,
    ACTIONS(868), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [9547] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(372), 1,
      sym_formatting_comment,
    ACTIONS(870), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_for_clause_token1,
      aux_sym_for_type_token1,
  [9560] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(816), 1,
      sym_identifier,
    ACTIONS(872), 1,
      sym_bound_apex_expression,
    STATE(146), 1,
      sym_dotted_identifier,
    STATE(373), 1,
      sym_formatting_comment,
    STATE(930), 1,
      sym_field_identifier,
  [9579] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      sym_formatting_comment,
    STATE(786), 1,
      sym_update_clause,
  [9595] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
    STATE(375), 1,
      sym_formatting_comment,
    STATE(865), 1,
      sym_update_clause,
  [9611] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(878), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      sym_formatting_comment,
    STATE(866), 1,
      sym_update_clause,
  [9627] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    STATE(377), 1,
      sym_formatting_comment,
    STATE(876), 1,
      sym_update_clause,
  [9643] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(882), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      sym_formatting_comment,
    STATE(886), 1,
      sym_update_clause,
  [9659] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
    STATE(379), 1,
      sym_formatting_comment,
    STATE(893), 1,
      sym_update_clause,
  [9675] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    STATE(380), 1,
      sym_formatting_comment,
    STATE(894), 1,
      sym_update_clause,
  [9691] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      sym_formatting_comment,
    STATE(411), 1,
      aux_sym_with_data_cat_filter_repeat1,
  [9707] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      sym_formatting_comment,
    STATE(905), 1,
      sym_update_clause,
  [9723] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(894), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      sym_formatting_comment,
    STATE(906), 1,
      sym_update_clause,
  [9739] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      sym_formatting_comment,
    STATE(910), 1,
      sym_update_clause,
  [9755] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(385), 1,
      sym_formatting_comment,
    ACTIONS(898), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [9767] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(900), 1,
      ts_builtin_sym_end,
    STATE(386), 1,
      sym_formatting_comment,
    STATE(751), 1,
      sym_update_clause,
  [9783] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      sym_formatting_comment,
    STATE(442), 1,
      aux_sym_with_record_visibility_expression_repeat1,
  [9799] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(388), 1,
      sym_formatting_comment,
    ACTIONS(836), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [9811] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      sym_formatting_comment,
    STATE(627), 1,
      sym_update_clause,
  [9827] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      sym_formatting_comment,
    STATE(591), 1,
      sym_update_clause,
  [9843] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      sym_formatting_comment,
    STATE(594), 1,
      sym_update_clause,
  [9859] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      sym_formatting_comment,
    STATE(595), 1,
      sym_update_clause,
  [9875] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      sym_formatting_comment,
    STATE(899), 1,
      sym_offset_clause,
  [9891] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
    STATE(394), 1,
      sym_formatting_comment,
    STATE(601), 1,
      sym_update_clause,
  [9907] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      aux_sym_from_clause_token1,
    STATE(395), 1,
      sym_formatting_comment,
    STATE(533), 1,
      aux_sym_selected_fields_repeat1,
  [9923] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(920), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      sym_formatting_comment,
    STATE(616), 1,
      sym_update_clause,
  [9939] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      sym_formatting_comment,
    STATE(896), 1,
      sym_offset_clause,
  [9955] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(257), 1,
      sym_boolean,
    STATE(398), 1,
      sym_formatting_comment,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [9969] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      sym_formatting_comment,
    STATE(626), 1,
      sym_update_clause,
  [9985] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
    STATE(400), 1,
      sym_formatting_comment,
    STATE(629), 1,
      sym_update_clause,
  [10001] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      sym_formatting_comment,
    STATE(630), 1,
      sym_update_clause,
  [10017] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      sym_formatting_comment,
    STATE(550), 1,
      aux_sym_function_expression_repeat1,
  [10033] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      sym_formatting_comment,
    STATE(636), 1,
      sym_update_clause,
  [10049] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    ACTIONS(936), 1,
      anon_sym_RPAREN,
    STATE(404), 1,
      sym_formatting_comment,
    STATE(542), 1,
      aux_sym_comparable_list_repeat1,
  [10065] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    STATE(405), 2,
      sym_formatting_comment,
      aux_sym_comparable_list_repeat1,
  [10079] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      sym_formatting_comment,
    STATE(645), 1,
      sym_update_clause,
  [10095] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      sym_formatting_comment,
    STATE(648), 1,
      sym_update_clause,
  [10111] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      sym_formatting_comment,
    STATE(649), 1,
      sym_update_clause,
  [10127] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
    STATE(409), 1,
      sym_formatting_comment,
    STATE(655), 1,
      sym_update_clause,
  [10143] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      sym_formatting_comment,
    STATE(656), 1,
      sym_update_clause,
  [10159] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      sym_formatting_comment,
    STATE(557), 1,
      aux_sym_with_data_cat_filter_repeat1,
  [10175] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      sym_formatting_comment,
    STATE(659), 1,
      sym_update_clause,
  [10191] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      sym_formatting_comment,
    STATE(660), 1,
      sym_update_clause,
  [10207] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      sym_formatting_comment,
    STATE(661), 1,
      sym_update_clause,
  [10223] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      sym_formatting_comment,
    STATE(664), 1,
      sym_update_clause,
  [10239] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    STATE(416), 1,
      sym_formatting_comment,
    STATE(665), 1,
      sym_update_clause,
  [10255] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      sym_formatting_comment,
    STATE(668), 1,
      sym_update_clause,
  [10271] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      sym_formatting_comment,
    STATE(669), 1,
      sym_update_clause,
  [10287] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      sym_formatting_comment,
    STATE(683), 1,
      sym_update_clause,
  [10303] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      sym_formatting_comment,
    STATE(675), 1,
      sym_update_clause,
  [10319] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(421), 1,
      sym_formatting_comment,
    STATE(522), 1,
      sym_update_type,
    ACTIONS(973), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [10333] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      sym_formatting_comment,
    STATE(685), 1,
      sym_update_clause,
  [10349] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      sym_formatting_comment,
    STATE(688), 1,
      sym_update_clause,
  [10365] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
    STATE(424), 1,
      sym_formatting_comment,
    STATE(689), 1,
      sym_update_clause,
  [10381] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      sym_formatting_comment,
    STATE(695), 1,
      sym_update_clause,
  [10397] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      sym_formatting_comment,
    STATE(696), 1,
      sym_update_clause,
  [10413] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(779), 1,
      ts_builtin_sym_end,
    STATE(427), 1,
      sym_formatting_comment,
    STATE(870), 1,
      sym_update_clause,
  [10429] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
    STATE(428), 1,
      sym_formatting_comment,
    STATE(699), 1,
      sym_update_clause,
  [10445] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      sym_formatting_comment,
    STATE(700), 1,
      sym_update_clause,
  [10461] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      sym_formatting_comment,
    STATE(717), 1,
      sym_update_clause,
  [10477] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    STATE(431), 1,
      sym_formatting_comment,
    STATE(703), 1,
      sym_update_clause,
  [10493] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      sym_formatting_comment,
    STATE(704), 1,
      sym_update_clause,
  [10509] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(433), 1,
      sym_formatting_comment,
    ACTIONS(995), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_for_type_token1,
  [10521] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      sym_formatting_comment,
    STATE(710), 1,
      sym_update_clause,
  [10537] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    STATE(435), 1,
      sym_formatting_comment,
    STATE(711), 1,
      sym_update_clause,
  [10553] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      sym_formatting_comment,
    STATE(714), 1,
      sym_update_clause,
  [10569] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      sym_formatting_comment,
    STATE(715), 1,
      sym_update_clause,
  [10585] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    STATE(438), 1,
      sym_formatting_comment,
    STATE(705), 1,
      sym_update_clause,
  [10601] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    ACTIONS(1007), 1,
      aux_sym_from_clause_token1,
    STATE(395), 1,
      aux_sym_selected_fields_repeat1,
    STATE(439), 1,
      sym_formatting_comment,
  [10617] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(440), 1,
      sym_formatting_comment,
    STATE(583), 1,
      sym_boolean,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
  [10631] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      sym_formatting_comment,
    STATE(721), 1,
      sym_update_clause,
  [10647] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      sym_formatting_comment,
    STATE(489), 1,
      aux_sym_with_record_visibility_expression_repeat1,
  [10663] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      sym_formatting_comment,
    STATE(725), 1,
      sym_update_clause,
  [10679] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    STATE(444), 1,
      sym_formatting_comment,
    STATE(726), 1,
      sym_update_clause,
  [10695] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    STATE(445), 1,
      sym_formatting_comment,
    STATE(729), 1,
      sym_update_clause,
  [10711] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      sym_formatting_comment,
    STATE(730), 1,
      sym_update_clause,
  [10727] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      sym_formatting_comment,
    STATE(733), 1,
      sym_update_clause,
  [10743] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      sym_formatting_comment,
    STATE(734), 1,
      sym_update_clause,
  [10759] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(449), 1,
      sym_formatting_comment,
    STATE(877), 1,
      sym_update_clause,
  [10775] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    STATE(450), 1,
      sym_formatting_comment,
    STATE(679), 1,
      sym_update_clause,
  [10791] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    STATE(451), 1,
      sym_formatting_comment,
    STATE(740), 1,
      sym_update_clause,
  [10807] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(452), 1,
      sym_formatting_comment,
    STATE(722), 1,
      sym_update_clause,
  [10823] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    STATE(453), 1,
      sym_formatting_comment,
    STATE(750), 1,
      sym_update_clause,
  [10839] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(454), 1,
      sym_formatting_comment,
    STATE(613), 1,
      sym_update_clause,
  [10855] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      sym_formatting_comment,
    STATE(753), 1,
      sym_update_clause,
  [10871] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      sym_formatting_comment,
    STATE(754), 1,
      sym_update_clause,
  [10887] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    STATE(457), 1,
      sym_formatting_comment,
    STATE(760), 1,
      sym_update_clause,
  [10903] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      sym_formatting_comment,
    STATE(761), 1,
      sym_update_clause,
  [10919] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      sym_formatting_comment,
    STATE(907), 1,
      sym_update_clause,
  [10935] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      sym_formatting_comment,
    STATE(764), 1,
      sym_update_clause,
  [10951] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      sym_formatting_comment,
    STATE(765), 1,
      sym_update_clause,
  [10967] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1047), 1,
      sym_identifier,
    STATE(263), 1,
      sym_dotted_identifier,
    STATE(462), 1,
      sym_formatting_comment,
    STATE(650), 1,
      sym_field_list,
  [10983] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    STATE(463), 1,
      sym_formatting_comment,
    STATE(768), 1,
      sym_update_clause,
  [10999] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    STATE(464), 1,
      sym_formatting_comment,
    STATE(769), 1,
      sym_update_clause,
  [11015] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(465), 1,
      sym_formatting_comment,
    ACTIONS(1053), 3,
      aux_sym_type_of_clause_token2,
      aux_sym_when_expression_token1,
      aux_sym_else_expression_token1,
  [11027] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      sym_formatting_comment,
    STATE(775), 1,
      sym_update_clause,
  [11043] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      sym_formatting_comment,
    STATE(776), 1,
      sym_update_clause,
  [11059] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      sym_formatting_comment,
    STATE(779), 1,
      sym_update_clause,
  [11075] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    STATE(469), 1,
      sym_formatting_comment,
    STATE(936), 1,
      sym_update_clause,
  [11091] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym_formatting_comment,
    STATE(781), 1,
      sym_update_clause,
  [11107] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      sym_formatting_comment,
    STATE(782), 1,
      sym_update_clause,
  [11123] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    STATE(472), 1,
      sym_formatting_comment,
    STATE(783), 1,
      sym_update_clause,
  [11139] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      sym_formatting_comment,
    STATE(738), 1,
      sym_update_clause,
  [11155] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    STATE(474), 1,
      sym_formatting_comment,
    STATE(787), 1,
      sym_update_clause,
  [11171] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    STATE(475), 1,
      sym_formatting_comment,
    STATE(790), 1,
      sym_update_clause,
  [11187] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      sym_formatting_comment,
    STATE(791), 1,
      sym_update_clause,
  [11203] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
    STATE(477), 1,
      sym_formatting_comment,
    STATE(697), 1,
      sym_update_clause,
  [11219] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_DOT,
    STATE(89), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(478), 1,
      sym_formatting_comment,
  [11235] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
    STATE(479), 1,
      sym_formatting_comment,
    STATE(798), 1,
      sym_update_clause,
  [11251] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
    STATE(480), 1,
      sym_formatting_comment,
    STATE(801), 1,
      sym_update_clause,
  [11267] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      sym_formatting_comment,
    STATE(802), 1,
      sym_update_clause,
  [11283] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      sym_formatting_comment,
    STATE(803), 1,
      sym_update_clause,
  [11299] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
    STATE(483), 1,
      sym_formatting_comment,
    STATE(804), 1,
      sym_update_clause,
  [11315] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      sym_formatting_comment,
    STATE(807), 1,
      sym_update_clause,
  [11331] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
    STATE(485), 1,
      sym_formatting_comment,
    STATE(808), 1,
      sym_update_clause,
  [11347] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      aux_sym_select_clause_token1,
    STATE(486), 1,
      sym_formatting_comment,
    STATE(566), 1,
      sym_select_clause,
    STATE(657), 1,
      sym_soql_query_body,
  [11363] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
    STATE(487), 1,
      sym_formatting_comment,
    STATE(777), 1,
      sym_update_clause,
  [11379] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      sym_formatting_comment,
    STATE(799), 1,
      sym_update_clause,
  [11395] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    ACTIONS(1100), 1,
      anon_sym_RPAREN,
    STATE(489), 2,
      sym_formatting_comment,
      aux_sym_with_record_visibility_expression_repeat1,
  [11409] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1102), 1,
      anon_sym_RPAREN,
    STATE(490), 1,
      sym_formatting_comment,
    STATE(810), 1,
      sym_update_clause,
  [11425] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1104), 1,
      anon_sym_RPAREN,
    STATE(491), 1,
      sym_formatting_comment,
    STATE(811), 1,
      sym_update_clause,
  [11441] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    STATE(492), 1,
      sym_formatting_comment,
    STATE(812), 1,
      sym_update_clause,
  [11457] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    STATE(493), 1,
      sym_formatting_comment,
    STATE(815), 1,
      sym_update_clause,
  [11473] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      sym_formatting_comment,
    STATE(816), 1,
      sym_update_clause,
  [11489] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      sym_formatting_comment,
    STATE(805), 1,
      sym_update_clause,
  [11505] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    STATE(496), 1,
      sym_formatting_comment,
    STATE(819), 1,
      sym_update_clause,
  [11521] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1116), 1,
      anon_sym_RPAREN,
    STATE(497), 1,
      sym_formatting_comment,
    STATE(820), 1,
      sym_update_clause,
  [11537] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(498), 1,
      sym_formatting_comment,
    STATE(826), 1,
      sym_update_clause,
  [11553] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1120), 1,
      anon_sym_RPAREN,
    STATE(499), 1,
      sym_formatting_comment,
    STATE(827), 1,
      sym_update_clause,
  [11569] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    STATE(500), 1,
      sym_formatting_comment,
    STATE(830), 1,
      sym_update_clause,
  [11585] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      sym_formatting_comment,
    STATE(831), 1,
      sym_update_clause,
  [11601] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
    STATE(502), 1,
      sym_formatting_comment,
    STATE(832), 1,
      sym_update_clause,
  [11617] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
    STATE(503), 1,
      sym_formatting_comment,
    STATE(833), 1,
      sym_update_clause,
  [11633] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1047), 1,
      sym_identifier,
    STATE(263), 1,
      sym_dotted_identifier,
    STATE(385), 1,
      sym_field_list,
    STATE(504), 1,
      sym_formatting_comment,
  [11649] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      sym_formatting_comment,
    STATE(836), 1,
      sym_update_clause,
  [11665] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    STATE(506), 1,
      sym_formatting_comment,
    STATE(837), 1,
      sym_update_clause,
  [11681] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(507), 1,
      sym_formatting_comment,
    STATE(838), 1,
      sym_update_clause,
  [11697] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    STATE(508), 1,
      sym_formatting_comment,
    STATE(839), 1,
      sym_update_clause,
  [11713] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      sym_formatting_comment,
    STATE(840), 1,
      sym_update_clause,
  [11729] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
    STATE(510), 1,
      sym_formatting_comment,
    STATE(843), 1,
      sym_update_clause,
  [11745] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1142), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      sym_formatting_comment,
    STATE(844), 1,
      sym_update_clause,
  [11761] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1144), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      sym_formatting_comment,
    STATE(845), 1,
      sym_update_clause,
  [11777] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      sym_formatting_comment,
    STATE(847), 1,
      sym_update_clause,
  [11793] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
    STATE(514), 1,
      sym_formatting_comment,
    STATE(848), 1,
      sym_update_clause,
  [11809] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(515), 1,
      sym_formatting_comment,
    STATE(849), 1,
      sym_update_clause,
  [11825] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
    STATE(516), 1,
      sym_formatting_comment,
    STATE(852), 1,
      sym_update_clause,
  [11841] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1154), 1,
      anon_sym_RPAREN,
    STATE(517), 1,
      sym_formatting_comment,
    STATE(853), 1,
      sym_update_clause,
  [11857] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    STATE(518), 1,
      sym_formatting_comment,
    STATE(854), 1,
      sym_update_clause,
  [11873] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    STATE(519), 1,
      sym_formatting_comment,
    STATE(855), 1,
      sym_update_clause,
  [11889] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    STATE(520), 1,
      sym_formatting_comment,
    STATE(856), 1,
      sym_update_clause,
  [11905] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(521), 1,
      sym_formatting_comment,
    ACTIONS(238), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11917] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(522), 1,
      sym_formatting_comment,
    ACTIONS(824), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11929] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    STATE(523), 1,
      sym_formatting_comment,
    STATE(744), 1,
      sym_update_clause,
  [11945] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    STATE(524), 1,
      sym_formatting_comment,
    STATE(746), 1,
      sym_update_clause,
  [11961] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(525), 1,
      sym_formatting_comment,
    ACTIONS(193), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11973] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(526), 1,
      sym_formatting_comment,
    ACTIONS(185), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11985] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(527), 1,
      sym_formatting_comment,
    ACTIONS(242), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [11997] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(528), 1,
      sym_formatting_comment,
    ACTIONS(189), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [12009] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(529), 1,
      sym_formatting_comment,
    ACTIONS(197), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [12021] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(530), 1,
      sym_formatting_comment,
    ACTIONS(267), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [12033] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(531), 1,
      sym_formatting_comment,
    ACTIONS(174), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [12045] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(532), 1,
      sym_formatting_comment,
    ACTIONS(333), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [12057] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(497), 1,
      aux_sym_from_clause_token1,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    STATE(533), 2,
      sym_formatting_comment,
      aux_sym_selected_fields_repeat1,
  [12071] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(534), 1,
      sym_formatting_comment,
    ACTIONS(201), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [12083] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(535), 1,
      sym_formatting_comment,
    ACTIONS(271), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [12095] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 1,
      aux_sym_or_expression_token1,
    STATE(536), 1,
      sym_formatting_comment,
    STATE(540), 1,
      aux_sym_or_expression_repeat1,
  [12111] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(537), 1,
      sym_formatting_comment,
    ACTIONS(353), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [12123] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(538), 1,
      sym_formatting_comment,
    ACTIONS(227), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [12135] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(539), 1,
      sym_formatting_comment,
    ACTIONS(329), 3,
      anon_sym_RPAREN,
      aux_sym_and_expression_token1,
      aux_sym_or_expression_token1,
  [12147] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    ACTIONS(1169), 1,
      aux_sym_or_expression_token1,
    STATE(540), 2,
      sym_formatting_comment,
      aux_sym_or_expression_repeat1,
  [12161] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(541), 1,
      sym_formatting_comment,
    STATE(623), 1,
      sym_update_clause,
  [12177] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_comparable_list_repeat1,
    STATE(542), 1,
      sym_formatting_comment,
  [12193] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      sym_formatting_comment,
    STATE(766), 1,
      sym_update_clause,
  [12209] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(371), 1,
      sym_update_type,
    STATE(544), 1,
      sym_formatting_comment,
    ACTIONS(973), 2,
      aux_sym_update_type_token1,
      aux_sym_update_type_token2,
  [12223] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(545), 1,
      sym_formatting_comment,
    ACTIONS(1178), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12235] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(546), 1,
      sym_formatting_comment,
    STATE(637), 1,
      sym_offset_clause,
  [12251] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(100), 1,
      aux_sym_offset_clause_token1,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    STATE(547), 1,
      sym_formatting_comment,
    STATE(884), 1,
      sym_offset_clause,
  [12267] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    STATE(548), 1,
      sym_formatting_comment,
    STATE(860), 1,
      sym_update_clause,
  [12283] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    ACTIONS(1182), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      sym_formatting_comment,
    STATE(552), 1,
      aux_sym_comparable_list_repeat1,
  [12299] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1184), 1,
      anon_sym_COMMA,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    STATE(550), 2,
      sym_formatting_comment,
      aux_sym_function_expression_repeat1,
  [12313] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
    STATE(551), 1,
      sym_formatting_comment,
    STATE(553), 1,
      aux_sym_function_expression_repeat1,
  [12329] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_comparable_list_repeat1,
    STATE(552), 1,
      sym_formatting_comment,
  [12345] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(1193), 1,
      anon_sym_RPAREN,
    STATE(550), 1,
      aux_sym_function_expression_repeat1,
    STATE(553), 1,
      sym_formatting_comment,
  [12361] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    STATE(554), 1,
      sym_formatting_comment,
    STATE(555), 1,
      aux_sym_function_expression_repeat1,
  [12377] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(1197), 1,
      anon_sym_RPAREN,
    STATE(550), 1,
      aux_sym_function_expression_repeat1,
    STATE(555), 1,
      sym_formatting_comment,
  [12393] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(556), 1,
      sym_formatting_comment,
    STATE(863), 1,
      sym_update_clause,
  [12409] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1199), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    STATE(557), 2,
      sym_formatting_comment,
      aux_sym_with_data_cat_filter_repeat1,
  [12423] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      sym_formatting_comment,
    STATE(824), 1,
      sym_update_clause,
  [12439] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(1206), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_function_expression_repeat1,
    STATE(559), 1,
      sym_formatting_comment,
  [12455] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
    STATE(560), 1,
      sym_formatting_comment,
    STATE(590), 1,
      sym_update_clause,
  [12471] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    STATE(561), 1,
      sym_formatting_comment,
    STATE(862), 1,
      sym_update_clause,
  [12487] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(94), 1,
      aux_sym_for_type_token1,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(562), 1,
      sym_formatting_comment,
    STATE(797), 1,
      sym_update_clause,
  [12503] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1214), 1,
      sym_term_separator_start,
    ACTIONS(1216), 1,
      sym_bound_apex_expression,
    STATE(563), 1,
      sym_formatting_comment,
  [12516] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(53), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_dotted_identifier_repeat1,
    STATE(564), 1,
      sym_formatting_comment,
  [12529] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(565), 1,
      sym_formatting_comment,
    ACTIONS(1218), 2,
      sym_bound_apex_expression,
      sym_int,
  [12540] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1220), 1,
      aux_sym_from_clause_token1,
    STATE(18), 1,
      sym_from_clause,
    STATE(566), 1,
      sym_formatting_comment,
  [12553] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1222), 1,
      sym_identifier,
    STATE(63), 1,
      sym_with_data_cat_filter,
    STATE(567), 1,
      sym_formatting_comment,
  [12566] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(568), 1,
      sym_formatting_comment,
    ACTIONS(1224), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [12577] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1226), 1,
      sym_identifier,
    STATE(153), 1,
      sym_sobject_return,
    STATE(569), 1,
      sym_formatting_comment,
  [12590] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1228), 1,
      sym_identifier,
    STATE(352), 1,
      sym_dotted_identifier,
    STATE(570), 1,
      sym_formatting_comment,
  [12603] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1230), 1,
      sym_identifier,
    STATE(97), 1,
      sym_using_lookup_bind_expression,
    STATE(571), 1,
      sym_formatting_comment,
  [12616] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(572), 1,
      sym_formatting_comment,
    ACTIONS(1187), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12627] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1232), 1,
      anon_sym_LPAREN,
    ACTIONS(1234), 1,
      sym_identifier,
    STATE(573), 1,
      sym_formatting_comment,
  [12640] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(574), 1,
      sym_formatting_comment,
    ACTIONS(1236), 2,
      sym_bound_apex_expression,
      sym_decimal,
  [12651] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(575), 1,
      sym_formatting_comment,
    ACTIONS(1238), 2,
      sym_bound_apex_expression,
      sym_string_literal,
  [12662] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1230), 1,
      sym_identifier,
    STATE(76), 1,
      sym_using_lookup_bind_expression,
    STATE(576), 1,
      sym_formatting_comment,
  [12675] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1240), 1,
      sym_identifier,
    STATE(92), 1,
      sym_dotted_identifier,
    STATE(577), 1,
      sym_formatting_comment,
  [12688] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(578), 1,
      sym_formatting_comment,
    ACTIONS(1202), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12699] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(579), 1,
      sym_formatting_comment,
    ACTIONS(1242), 2,
      sym_bound_apex_expression,
      sym_decimal,
  [12710] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(580), 1,
      sym_formatting_comment,
    ACTIONS(941), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12721] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1222), 1,
      sym_identifier,
    STATE(72), 1,
      sym_with_data_cat_filter,
    STATE(581), 1,
      sym_formatting_comment,
  [12734] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1244), 1,
      sym_identifier,
    STATE(260), 1,
      sym_dotted_identifier,
    STATE(582), 1,
      sym_formatting_comment,
  [12747] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(583), 1,
      sym_formatting_comment,
    ACTIONS(1246), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12758] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(584), 1,
      sym_formatting_comment,
    ACTIONS(1248), 2,
      sym_bound_apex_expression,
      sym_int,
  [12769] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1226), 1,
      sym_identifier,
    STATE(140), 1,
      sym_sobject_return,
    STATE(585), 1,
      sym_formatting_comment,
  [12782] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(586), 1,
      sym_formatting_comment,
    ACTIONS(1100), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12793] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(587), 1,
      sym_formatting_comment,
    ACTIONS(1250), 2,
      anon_sym_LPAREN,
      sym_bound_apex_expression,
  [12804] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(588), 1,
      sym_formatting_comment,
    ACTIONS(348), 2,
      anon_sym_RPAREN,
      aux_sym_or_expression_token1,
  [12815] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1252), 1,
      anon_sym_COMMA,
    STATE(589), 1,
      sym_formatting_comment,
  [12825] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      sym_formatting_comment,
  [12835] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    STATE(591), 1,
      sym_formatting_comment,
  [12845] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(592), 1,
      sym_formatting_comment,
  [12855] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      sym_formatting_comment,
  [12865] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(594), 1,
      sym_formatting_comment,
  [12875] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      sym_formatting_comment,
  [12885] = 3,
    ACTIONS(1264), 1,
      aux_sym_header_comment_token1,
    ACTIONS(1266), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(596), 1,
      sym_formatting_comment,
  [12895] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1268), 1,
      anon_sym_LPAREN,
    STATE(597), 1,
      sym_formatting_comment,
  [12905] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
    STATE(598), 1,
      sym_formatting_comment,
  [12915] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    STATE(599), 1,
      sym_formatting_comment,
  [12925] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      sym_formatting_comment,
  [12935] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      sym_formatting_comment,
  [12945] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1278), 1,
      aux_sym_when_expression_token2,
    STATE(602), 1,
      sym_formatting_comment,
  [12955] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1280), 1,
      anon_sym_RPAREN,
    STATE(603), 1,
      sym_formatting_comment,
  [12965] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
    STATE(604), 1,
      sym_formatting_comment,
  [12975] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
    STATE(605), 1,
      sym_formatting_comment,
  [12985] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
    STATE(606), 1,
      sym_formatting_comment,
  [12995] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    STATE(607), 1,
      sym_formatting_comment,
  [13005] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      sym_formatting_comment,
  [13015] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(609), 1,
      sym_formatting_comment,
  [13025] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      sym_formatting_comment,
  [13035] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(611), 1,
      sym_formatting_comment,
  [13045] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
    STATE(612), 1,
      sym_formatting_comment,
  [13055] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(613), 1,
      sym_formatting_comment,
  [13065] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    STATE(614), 1,
      sym_formatting_comment,
  [13075] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
    STATE(615), 1,
      sym_formatting_comment,
  [13085] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1302), 1,
      anon_sym_RPAREN,
    STATE(616), 1,
      sym_formatting_comment,
  [13095] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1304), 1,
      aux_sym_find_clause_token1,
    STATE(617), 1,
      sym_formatting_comment,
  [13105] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1306), 1,
      sym_string_literal,
    STATE(618), 1,
      sym_formatting_comment,
  [13115] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    STATE(619), 1,
      sym_formatting_comment,
  [13125] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
    STATE(620), 1,
      sym_formatting_comment,
  [13135] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
    STATE(621), 1,
      sym_formatting_comment,
  [13145] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1314), 1,
      aux_sym_with_snippet_expression_token2,
    STATE(622), 1,
      sym_formatting_comment,
  [13155] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    STATE(623), 1,
      sym_formatting_comment,
  [13165] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1318), 1,
      sym_identifier,
    STATE(624), 1,
      sym_formatting_comment,
  [13175] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
    STATE(625), 1,
      sym_formatting_comment,
  [13185] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    STATE(626), 1,
      sym_formatting_comment,
  [13195] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
    STATE(627), 1,
      sym_formatting_comment,
  [13205] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
    STATE(628), 1,
      sym_formatting_comment,
  [13215] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
    STATE(629), 1,
      sym_formatting_comment,
  [13225] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    STATE(630), 1,
      sym_formatting_comment,
  [13235] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1332), 1,
      sym_identifier,
    STATE(631), 1,
      sym_formatting_comment,
  [13245] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
    STATE(632), 1,
      sym_formatting_comment,
  [13255] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
    STATE(633), 1,
      sym_formatting_comment,
  [13265] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1338), 1,
      ts_builtin_sym_end,
    STATE(634), 1,
      sym_formatting_comment,
  [13275] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1340), 1,
      anon_sym_RPAREN,
    STATE(635), 1,
      sym_formatting_comment,
  [13285] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
    STATE(636), 1,
      sym_formatting_comment,
  [13295] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    STATE(637), 1,
      sym_formatting_comment,
  [13305] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      sym_formatting_comment,
  [13315] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
    STATE(639), 1,
      sym_formatting_comment,
  [13325] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
    STATE(640), 1,
      sym_formatting_comment,
  [13335] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      sym_formatting_comment,
  [13345] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1352), 1,
      ts_builtin_sym_end,
    STATE(642), 1,
      sym_formatting_comment,
  [13355] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(662), 1,
      aux_sym_type_of_clause_token2,
    STATE(643), 1,
      sym_formatting_comment,
  [13365] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1354), 1,
      anon_sym_RPAREN,
    STATE(644), 1,
      sym_formatting_comment,
  [13375] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
    STATE(645), 1,
      sym_formatting_comment,
  [13385] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
    STATE(646), 1,
      sym_formatting_comment,
  [13395] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1360), 1,
      anon_sym_RPAREN,
    STATE(647), 1,
      sym_formatting_comment,
  [13405] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1362), 1,
      anon_sym_RPAREN,
    STATE(648), 1,
      sym_formatting_comment,
  [13415] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1364), 1,
      anon_sym_RPAREN,
    STATE(649), 1,
      sym_formatting_comment,
  [13425] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1366), 1,
      aux_sym_type_of_clause_token2,
    STATE(650), 1,
      sym_formatting_comment,
  [13435] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1368), 1,
      anon_sym_RPAREN,
    STATE(651), 1,
      sym_formatting_comment,
  [13445] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1370), 1,
      anon_sym_RPAREN,
    STATE(652), 1,
      sym_formatting_comment,
  [13455] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      sym_formatting_comment,
  [13465] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1374), 1,
      anon_sym_RPAREN,
    STATE(654), 1,
      sym_formatting_comment,
  [13475] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1376), 1,
      anon_sym_RPAREN,
    STATE(655), 1,
      sym_formatting_comment,
  [13485] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1378), 1,
      anon_sym_RPAREN,
    STATE(656), 1,
      sym_formatting_comment,
  [13495] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1380), 1,
      anon_sym_RPAREN,
    STATE(657), 1,
      sym_formatting_comment,
  [13505] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1382), 1,
      anon_sym_RPAREN,
    STATE(658), 1,
      sym_formatting_comment,
  [13515] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
    STATE(659), 1,
      sym_formatting_comment,
  [13525] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1386), 1,
      anon_sym_RPAREN,
    STATE(660), 1,
      sym_formatting_comment,
  [13535] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1388), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      sym_formatting_comment,
  [13545] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1390), 1,
      sym_int,
    STATE(662), 1,
      sym_formatting_comment,
  [13555] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1392), 1,
      anon_sym_RPAREN,
    STATE(663), 1,
      sym_formatting_comment,
  [13565] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1394), 1,
      anon_sym_RPAREN,
    STATE(664), 1,
      sym_formatting_comment,
  [13575] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
    STATE(665), 1,
      sym_formatting_comment,
  [13585] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1398), 1,
      anon_sym_RPAREN,
    STATE(666), 1,
      sym_formatting_comment,
  [13595] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1400), 1,
      anon_sym_RPAREN,
    STATE(667), 1,
      sym_formatting_comment,
  [13605] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1402), 1,
      anon_sym_RPAREN,
    STATE(668), 1,
      sym_formatting_comment,
  [13615] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1404), 1,
      anon_sym_RPAREN,
    STATE(669), 1,
      sym_formatting_comment,
  [13625] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1406), 1,
      anon_sym_RPAREN,
    STATE(670), 1,
      sym_formatting_comment,
  [13635] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1408), 1,
      anon_sym_EQ,
    STATE(671), 1,
      sym_formatting_comment,
  [13645] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1410), 1,
      anon_sym_RPAREN,
    STATE(672), 1,
      sym_formatting_comment,
  [13655] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1412), 1,
      anon_sym_RPAREN,
    STATE(673), 1,
      sym_formatting_comment,
  [13665] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1414), 1,
      anon_sym_RPAREN,
    STATE(674), 1,
      sym_formatting_comment,
  [13675] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1416), 1,
      anon_sym_RPAREN,
    STATE(675), 1,
      sym_formatting_comment,
  [13685] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1418), 1,
      aux_sym_type_of_clause_token2,
    STATE(676), 1,
      sym_formatting_comment,
  [13695] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1420), 1,
      anon_sym_COMMA,
    STATE(677), 1,
      sym_formatting_comment,
  [13705] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1422), 1,
      anon_sym_RPAREN,
    STATE(678), 1,
      sym_formatting_comment,
  [13715] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1424), 1,
      anon_sym_RPAREN,
    STATE(679), 1,
      sym_formatting_comment,
  [13725] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1426), 1,
      anon_sym_RPAREN,
    STATE(680), 1,
      sym_formatting_comment,
  [13735] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
    STATE(681), 1,
      sym_formatting_comment,
  [13745] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1430), 1,
      anon_sym_RPAREN,
    STATE(682), 1,
      sym_formatting_comment,
  [13755] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1432), 1,
      anon_sym_RPAREN,
    STATE(683), 1,
      sym_formatting_comment,
  [13765] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1434), 1,
      anon_sym_RPAREN,
    STATE(684), 1,
      sym_formatting_comment,
  [13775] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1436), 1,
      anon_sym_RPAREN,
    STATE(685), 1,
      sym_formatting_comment,
  [13785] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1438), 1,
      anon_sym_EQ,
    STATE(686), 1,
      sym_formatting_comment,
  [13795] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1440), 1,
      anon_sym_RPAREN,
    STATE(687), 1,
      sym_formatting_comment,
  [13805] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1442), 1,
      anon_sym_RPAREN,
    STATE(688), 1,
      sym_formatting_comment,
  [13815] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1444), 1,
      anon_sym_RPAREN,
    STATE(689), 1,
      sym_formatting_comment,
  [13825] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1446), 1,
      sym_int,
    STATE(690), 1,
      sym_formatting_comment,
  [13835] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1448), 1,
      anon_sym_LPAREN,
    STATE(691), 1,
      sym_formatting_comment,
  [13845] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1450), 1,
      anon_sym_RPAREN,
    STATE(692), 1,
      sym_formatting_comment,
  [13855] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1452), 1,
      anon_sym_RPAREN,
    STATE(693), 1,
      sym_formatting_comment,
  [13865] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1454), 1,
      anon_sym_RPAREN,
    STATE(694), 1,
      sym_formatting_comment,
  [13875] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1456), 1,
      anon_sym_RPAREN,
    STATE(695), 1,
      sym_formatting_comment,
  [13885] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1458), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_formatting_comment,
  [13895] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1460), 1,
      anon_sym_RPAREN,
    STATE(697), 1,
      sym_formatting_comment,
  [13905] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1462), 1,
      anon_sym_RPAREN,
    STATE(698), 1,
      sym_formatting_comment,
  [13915] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1464), 1,
      anon_sym_RPAREN,
    STATE(699), 1,
      sym_formatting_comment,
  [13925] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1466), 1,
      anon_sym_RPAREN,
    STATE(700), 1,
      sym_formatting_comment,
  [13935] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1468), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_formatting_comment,
  [13945] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1470), 1,
      anon_sym_RPAREN,
    STATE(702), 1,
      sym_formatting_comment,
  [13955] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1472), 1,
      anon_sym_RPAREN,
    STATE(703), 1,
      sym_formatting_comment,
  [13965] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
    STATE(704), 1,
      sym_formatting_comment,
  [13975] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1476), 1,
      anon_sym_RPAREN,
    STATE(705), 1,
      sym_formatting_comment,
  [13985] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1478), 1,
      anon_sym_RPAREN,
    STATE(706), 1,
      sym_formatting_comment,
  [13995] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1480), 1,
      anon_sym_RPAREN,
    STATE(707), 1,
      sym_formatting_comment,
  [14005] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1482), 1,
      sym_identifier,
    STATE(708), 1,
      sym_formatting_comment,
  [14015] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1484), 1,
      anon_sym_RPAREN,
    STATE(709), 1,
      sym_formatting_comment,
  [14025] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1486), 1,
      anon_sym_RPAREN,
    STATE(710), 1,
      sym_formatting_comment,
  [14035] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1488), 1,
      anon_sym_RPAREN,
    STATE(711), 1,
      sym_formatting_comment,
  [14045] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1490), 1,
      sym_identifier,
    STATE(712), 1,
      sym_formatting_comment,
  [14055] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1492), 1,
      anon_sym_RPAREN,
    STATE(713), 1,
      sym_formatting_comment,
  [14065] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1494), 1,
      anon_sym_RPAREN,
    STATE(714), 1,
      sym_formatting_comment,
  [14075] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1496), 1,
      anon_sym_RPAREN,
    STATE(715), 1,
      sym_formatting_comment,
  [14085] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1498), 1,
      anon_sym_RPAREN,
    STATE(716), 1,
      sym_formatting_comment,
  [14095] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1500), 1,
      anon_sym_RPAREN,
    STATE(717), 1,
      sym_formatting_comment,
  [14105] = 3,
    ACTIONS(1266), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1502), 1,
      sym_term,
    STATE(718), 1,
      sym_formatting_comment,
  [14115] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1504), 1,
      anon_sym_RPAREN,
    STATE(719), 1,
      sym_formatting_comment,
  [14125] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1506), 1,
      anon_sym_RPAREN,
    STATE(720), 1,
      sym_formatting_comment,
  [14135] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1508), 1,
      anon_sym_RPAREN,
    STATE(721), 1,
      sym_formatting_comment,
  [14145] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1510), 1,
      anon_sym_RPAREN,
    STATE(722), 1,
      sym_formatting_comment,
  [14155] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1512), 1,
      anon_sym_RPAREN,
    STATE(723), 1,
      sym_formatting_comment,
  [14165] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1514), 1,
      anon_sym_RPAREN,
    STATE(724), 1,
      sym_formatting_comment,
  [14175] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1516), 1,
      anon_sym_RPAREN,
    STATE(725), 1,
      sym_formatting_comment,
  [14185] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1518), 1,
      anon_sym_RPAREN,
    STATE(726), 1,
      sym_formatting_comment,
  [14195] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1520), 1,
      anon_sym_RPAREN,
    STATE(727), 1,
      sym_formatting_comment,
  [14205] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1522), 1,
      anon_sym_RPAREN,
    STATE(728), 1,
      sym_formatting_comment,
  [14215] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1524), 1,
      anon_sym_RPAREN,
    STATE(729), 1,
      sym_formatting_comment,
  [14225] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1526), 1,
      anon_sym_RPAREN,
    STATE(730), 1,
      sym_formatting_comment,
  [14235] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1528), 1,
      anon_sym_RPAREN,
    STATE(731), 1,
      sym_formatting_comment,
  [14245] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1530), 1,
      anon_sym_RPAREN,
    STATE(732), 1,
      sym_formatting_comment,
  [14255] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1532), 1,
      anon_sym_RPAREN,
    STATE(733), 1,
      sym_formatting_comment,
  [14265] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1534), 1,
      anon_sym_RPAREN,
    STATE(734), 1,
      sym_formatting_comment,
  [14275] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1536), 1,
      anon_sym_RPAREN,
    STATE(735), 1,
      sym_formatting_comment,
  [14285] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1538), 1,
      anon_sym_RPAREN,
    STATE(736), 1,
      sym_formatting_comment,
  [14295] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1540), 1,
      anon_sym_RPAREN,
    STATE(737), 1,
      sym_formatting_comment,
  [14305] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1542), 1,
      anon_sym_RPAREN,
    STATE(738), 1,
      sym_formatting_comment,
  [14315] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1544), 1,
      anon_sym_RPAREN,
    STATE(739), 1,
      sym_formatting_comment,
  [14325] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1546), 1,
      anon_sym_RPAREN,
    STATE(740), 1,
      sym_formatting_comment,
  [14335] = 3,
    ACTIONS(1266), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1548), 1,
      aux_sym_header_comment_token1,
    STATE(741), 1,
      sym_formatting_comment,
  [14345] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1550), 1,
      anon_sym_RPAREN,
    STATE(742), 1,
      sym_formatting_comment,
  [14355] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1552), 1,
      anon_sym_RPAREN,
    STATE(743), 1,
      sym_formatting_comment,
  [14365] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1554), 1,
      anon_sym_RPAREN,
    STATE(744), 1,
      sym_formatting_comment,
  [14375] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1556), 1,
      anon_sym_RPAREN,
    STATE(745), 1,
      sym_formatting_comment,
  [14385] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1558), 1,
      anon_sym_RPAREN,
    STATE(746), 1,
      sym_formatting_comment,
  [14395] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1560), 1,
      anon_sym_RPAREN,
    STATE(747), 1,
      sym_formatting_comment,
  [14405] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1562), 1,
      anon_sym_EQ,
    STATE(748), 1,
      sym_formatting_comment,
  [14415] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1564), 1,
      anon_sym_RPAREN,
    STATE(749), 1,
      sym_formatting_comment,
  [14425] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1566), 1,
      anon_sym_RPAREN,
    STATE(750), 1,
      sym_formatting_comment,
  [14435] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1568), 1,
      ts_builtin_sym_end,
    STATE(751), 1,
      sym_formatting_comment,
  [14445] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1570), 1,
      anon_sym_RPAREN,
    STATE(752), 1,
      sym_formatting_comment,
  [14455] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1572), 1,
      anon_sym_RPAREN,
    STATE(753), 1,
      sym_formatting_comment,
  [14465] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1574), 1,
      anon_sym_RPAREN,
    STATE(754), 1,
      sym_formatting_comment,
  [14475] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1576), 1,
      anon_sym_RPAREN,
    STATE(755), 1,
      sym_formatting_comment,
  [14485] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1578), 1,
      anon_sym_RPAREN,
    STATE(756), 1,
      sym_formatting_comment,
  [14495] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1580), 1,
      anon_sym_RPAREN,
    STATE(757), 1,
      sym_formatting_comment,
  [14505] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1582), 1,
      anon_sym_RPAREN,
    STATE(758), 1,
      sym_formatting_comment,
  [14515] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1584), 1,
      anon_sym_RPAREN,
    STATE(759), 1,
      sym_formatting_comment,
  [14525] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1586), 1,
      anon_sym_RPAREN,
    STATE(760), 1,
      sym_formatting_comment,
  [14535] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1588), 1,
      anon_sym_RPAREN,
    STATE(761), 1,
      sym_formatting_comment,
  [14545] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1590), 1,
      anon_sym_RPAREN,
    STATE(762), 1,
      sym_formatting_comment,
  [14555] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1592), 1,
      anon_sym_RPAREN,
    STATE(763), 1,
      sym_formatting_comment,
  [14565] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1594), 1,
      anon_sym_RPAREN,
    STATE(764), 1,
      sym_formatting_comment,
  [14575] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1596), 1,
      anon_sym_RPAREN,
    STATE(765), 1,
      sym_formatting_comment,
  [14585] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1598), 1,
      anon_sym_RPAREN,
    STATE(766), 1,
      sym_formatting_comment,
  [14595] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1600), 1,
      anon_sym_RPAREN,
    STATE(767), 1,
      sym_formatting_comment,
  [14605] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1602), 1,
      anon_sym_RPAREN,
    STATE(768), 1,
      sym_formatting_comment,
  [14615] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1604), 1,
      anon_sym_RPAREN,
    STATE(769), 1,
      sym_formatting_comment,
  [14625] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1606), 1,
      anon_sym_RPAREN,
    STATE(770), 1,
      sym_formatting_comment,
  [14635] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1608), 1,
      aux_sym_from_clause_token1,
    STATE(771), 1,
      sym_formatting_comment,
  [14645] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1610), 1,
      anon_sym_RPAREN,
    STATE(772), 1,
      sym_formatting_comment,
  [14655] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1612), 1,
      anon_sym_RPAREN,
    STATE(773), 1,
      sym_formatting_comment,
  [14665] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1614), 1,
      anon_sym_RPAREN,
    STATE(774), 1,
      sym_formatting_comment,
  [14675] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1616), 1,
      anon_sym_RPAREN,
    STATE(775), 1,
      sym_formatting_comment,
  [14685] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1618), 1,
      anon_sym_RPAREN,
    STATE(776), 1,
      sym_formatting_comment,
  [14695] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1620), 1,
      anon_sym_RPAREN,
    STATE(777), 1,
      sym_formatting_comment,
  [14705] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1622), 1,
      anon_sym_RPAREN,
    STATE(778), 1,
      sym_formatting_comment,
  [14715] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1624), 1,
      anon_sym_RPAREN,
    STATE(779), 1,
      sym_formatting_comment,
  [14725] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1007), 1,
      aux_sym_from_clause_token1,
    STATE(780), 1,
      sym_formatting_comment,
  [14735] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1626), 1,
      anon_sym_RPAREN,
    STATE(781), 1,
      sym_formatting_comment,
  [14745] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1628), 1,
      anon_sym_RPAREN,
    STATE(782), 1,
      sym_formatting_comment,
  [14755] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1630), 1,
      anon_sym_RPAREN,
    STATE(783), 1,
      sym_formatting_comment,
  [14765] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1632), 1,
      anon_sym_RPAREN,
    STATE(784), 1,
      sym_formatting_comment,
  [14775] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1634), 1,
      anon_sym_RPAREN,
    STATE(785), 1,
      sym_formatting_comment,
  [14785] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1636), 1,
      anon_sym_RPAREN,
    STATE(786), 1,
      sym_formatting_comment,
  [14795] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1638), 1,
      anon_sym_RPAREN,
    STATE(787), 1,
      sym_formatting_comment,
  [14805] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1640), 1,
      anon_sym_RPAREN,
    STATE(788), 1,
      sym_formatting_comment,
  [14815] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1642), 1,
      anon_sym_RPAREN,
    STATE(789), 1,
      sym_formatting_comment,
  [14825] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1644), 1,
      anon_sym_RPAREN,
    STATE(790), 1,
      sym_formatting_comment,
  [14835] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1646), 1,
      anon_sym_RPAREN,
    STATE(791), 1,
      sym_formatting_comment,
  [14845] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1648), 1,
      anon_sym_RPAREN,
    STATE(792), 1,
      sym_formatting_comment,
  [14855] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1650), 1,
      sym_identifier,
    STATE(793), 1,
      sym_formatting_comment,
  [14865] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1652), 1,
      anon_sym_RPAREN,
    STATE(794), 1,
      sym_formatting_comment,
  [14875] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1654), 1,
      anon_sym_RPAREN,
    STATE(795), 1,
      sym_formatting_comment,
  [14885] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1656), 1,
      anon_sym_RPAREN,
    STATE(796), 1,
      sym_formatting_comment,
  [14895] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1658), 1,
      anon_sym_RPAREN,
    STATE(797), 1,
      sym_formatting_comment,
  [14905] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1660), 1,
      anon_sym_RPAREN,
    STATE(798), 1,
      sym_formatting_comment,
  [14915] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1662), 1,
      anon_sym_RPAREN,
    STATE(799), 1,
      sym_formatting_comment,
  [14925] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1664), 1,
      anon_sym_RPAREN,
    STATE(800), 1,
      sym_formatting_comment,
  [14935] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1666), 1,
      anon_sym_RPAREN,
    STATE(801), 1,
      sym_formatting_comment,
  [14945] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1668), 1,
      anon_sym_RPAREN,
    STATE(802), 1,
      sym_formatting_comment,
  [14955] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1670), 1,
      anon_sym_RPAREN,
    STATE(803), 1,
      sym_formatting_comment,
  [14965] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1672), 1,
      anon_sym_RPAREN,
    STATE(804), 1,
      sym_formatting_comment,
  [14975] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1674), 1,
      anon_sym_RPAREN,
    STATE(805), 1,
      sym_formatting_comment,
  [14985] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1676), 1,
      anon_sym_RPAREN,
    STATE(806), 1,
      sym_formatting_comment,
  [14995] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1678), 1,
      anon_sym_RPAREN,
    STATE(807), 1,
      sym_formatting_comment,
  [15005] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1680), 1,
      anon_sym_RPAREN,
    STATE(808), 1,
      sym_formatting_comment,
  [15015] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1682), 1,
      anon_sym_RPAREN,
    STATE(809), 1,
      sym_formatting_comment,
  [15025] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1684), 1,
      anon_sym_RPAREN,
    STATE(810), 1,
      sym_formatting_comment,
  [15035] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1686), 1,
      anon_sym_RPAREN,
    STATE(811), 1,
      sym_formatting_comment,
  [15045] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1688), 1,
      anon_sym_RPAREN,
    STATE(812), 1,
      sym_formatting_comment,
  [15055] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1690), 1,
      anon_sym_RPAREN,
    STATE(813), 1,
      sym_formatting_comment,
  [15065] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1692), 1,
      anon_sym_RPAREN,
    STATE(814), 1,
      sym_formatting_comment,
  [15075] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1694), 1,
      anon_sym_RPAREN,
    STATE(815), 1,
      sym_formatting_comment,
  [15085] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1696), 1,
      anon_sym_RPAREN,
    STATE(816), 1,
      sym_formatting_comment,
  [15095] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1698), 1,
      anon_sym_RPAREN,
    STATE(817), 1,
      sym_formatting_comment,
  [15105] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1700), 1,
      anon_sym_RPAREN,
    STATE(818), 1,
      sym_formatting_comment,
  [15115] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1702), 1,
      anon_sym_RPAREN,
    STATE(819), 1,
      sym_formatting_comment,
  [15125] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1704), 1,
      anon_sym_RPAREN,
    STATE(820), 1,
      sym_formatting_comment,
  [15135] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1706), 1,
      sym_identifier,
    STATE(821), 1,
      sym_formatting_comment,
  [15145] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1708), 1,
      anon_sym_LPAREN,
    STATE(822), 1,
      sym_formatting_comment,
  [15155] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1710), 1,
      anon_sym_RPAREN,
    STATE(823), 1,
      sym_formatting_comment,
  [15165] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1712), 1,
      anon_sym_RPAREN,
    STATE(824), 1,
      sym_formatting_comment,
  [15175] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1714), 1,
      anon_sym_RPAREN,
    STATE(825), 1,
      sym_formatting_comment,
  [15185] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1716), 1,
      anon_sym_RPAREN,
    STATE(826), 1,
      sym_formatting_comment,
  [15195] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1718), 1,
      anon_sym_RPAREN,
    STATE(827), 1,
      sym_formatting_comment,
  [15205] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1720), 1,
      anon_sym_RPAREN,
    STATE(828), 1,
      sym_formatting_comment,
  [15215] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1722), 1,
      anon_sym_RPAREN,
    STATE(829), 1,
      sym_formatting_comment,
  [15225] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1724), 1,
      anon_sym_RPAREN,
    STATE(830), 1,
      sym_formatting_comment,
  [15235] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1726), 1,
      anon_sym_RPAREN,
    STATE(831), 1,
      sym_formatting_comment,
  [15245] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1728), 1,
      anon_sym_RPAREN,
    STATE(832), 1,
      sym_formatting_comment,
  [15255] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1730), 1,
      anon_sym_RPAREN,
    STATE(833), 1,
      sym_formatting_comment,
  [15265] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1732), 1,
      anon_sym_EQ,
    STATE(834), 1,
      sym_formatting_comment,
  [15275] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1734), 1,
      anon_sym_RPAREN,
    STATE(835), 1,
      sym_formatting_comment,
  [15285] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1736), 1,
      anon_sym_RPAREN,
    STATE(836), 1,
      sym_formatting_comment,
  [15295] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1738), 1,
      anon_sym_RPAREN,
    STATE(837), 1,
      sym_formatting_comment,
  [15305] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1740), 1,
      anon_sym_RPAREN,
    STATE(838), 1,
      sym_formatting_comment,
  [15315] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1742), 1,
      anon_sym_RPAREN,
    STATE(839), 1,
      sym_formatting_comment,
  [15325] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1744), 1,
      anon_sym_RPAREN,
    STATE(840), 1,
      sym_formatting_comment,
  [15335] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1746), 1,
      anon_sym_RPAREN,
    STATE(841), 1,
      sym_formatting_comment,
  [15345] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1748), 1,
      anon_sym_RPAREN,
    STATE(842), 1,
      sym_formatting_comment,
  [15355] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1750), 1,
      anon_sym_RPAREN,
    STATE(843), 1,
      sym_formatting_comment,
  [15365] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1752), 1,
      anon_sym_RPAREN,
    STATE(844), 1,
      sym_formatting_comment,
  [15375] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1754), 1,
      anon_sym_RPAREN,
    STATE(845), 1,
      sym_formatting_comment,
  [15385] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1756), 1,
      anon_sym_COMMA,
    STATE(846), 1,
      sym_formatting_comment,
  [15395] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1758), 1,
      anon_sym_RPAREN,
    STATE(847), 1,
      sym_formatting_comment,
  [15405] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1760), 1,
      anon_sym_RPAREN,
    STATE(848), 1,
      sym_formatting_comment,
  [15415] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1762), 1,
      anon_sym_RPAREN,
    STATE(849), 1,
      sym_formatting_comment,
  [15425] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1764), 1,
      anon_sym_RPAREN,
    STATE(850), 1,
      sym_formatting_comment,
  [15435] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1766), 1,
      anon_sym_RPAREN,
    STATE(851), 1,
      sym_formatting_comment,
  [15445] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1768), 1,
      anon_sym_RPAREN,
    STATE(852), 1,
      sym_formatting_comment,
  [15455] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1770), 1,
      anon_sym_RPAREN,
    STATE(853), 1,
      sym_formatting_comment,
  [15465] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1772), 1,
      anon_sym_RPAREN,
    STATE(854), 1,
      sym_formatting_comment,
  [15475] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1774), 1,
      anon_sym_RPAREN,
    STATE(855), 1,
      sym_formatting_comment,
  [15485] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1776), 1,
      anon_sym_RPAREN,
    STATE(856), 1,
      sym_formatting_comment,
  [15495] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1778), 1,
      anon_sym_RPAREN,
    STATE(857), 1,
      sym_formatting_comment,
  [15505] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1780), 1,
      anon_sym_RPAREN,
    STATE(858), 1,
      sym_formatting_comment,
  [15515] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1782), 1,
      anon_sym_LPAREN,
    STATE(859), 1,
      sym_formatting_comment,
  [15525] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(779), 1,
      ts_builtin_sym_end,
    STATE(860), 1,
      sym_formatting_comment,
  [15535] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1784), 1,
      anon_sym_RPAREN,
    STATE(861), 1,
      sym_formatting_comment,
  [15545] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1786), 1,
      anon_sym_RPAREN,
    STATE(862), 1,
      sym_formatting_comment,
  [15555] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(863), 1,
      sym_formatting_comment,
  [15565] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1788), 1,
      anon_sym_RPAREN,
    STATE(864), 1,
      sym_formatting_comment,
  [15575] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1790), 1,
      anon_sym_RPAREN,
    STATE(865), 1,
      sym_formatting_comment,
  [15585] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1792), 1,
      anon_sym_RPAREN,
    STATE(866), 1,
      sym_formatting_comment,
  [15595] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1794), 1,
      sym_identifier,
    STATE(867), 1,
      sym_formatting_comment,
  [15605] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1796), 1,
      anon_sym_LPAREN,
    STATE(868), 1,
      sym_formatting_comment,
  [15615] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1798), 1,
      anon_sym_COMMA,
    STATE(869), 1,
      sym_formatting_comment,
  [15625] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(900), 1,
      ts_builtin_sym_end,
    STATE(870), 1,
      sym_formatting_comment,
  [15635] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1800), 1,
      anon_sym_COMMA,
    STATE(871), 1,
      sym_formatting_comment,
  [15645] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1802), 1,
      anon_sym_RPAREN,
    STATE(872), 1,
      sym_formatting_comment,
  [15655] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1804), 1,
      anon_sym_EQ,
    STATE(873), 1,
      sym_formatting_comment,
  [15665] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1806), 1,
      anon_sym_RPAREN,
    STATE(874), 1,
      sym_formatting_comment,
  [15675] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1808), 1,
      anon_sym_RPAREN,
    STATE(875), 1,
      sym_formatting_comment,
  [15685] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1810), 1,
      anon_sym_RPAREN,
    STATE(876), 1,
      sym_formatting_comment,
  [15695] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    STATE(877), 1,
      sym_formatting_comment,
  [15705] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1812), 1,
      sym_string_literal,
    STATE(878), 1,
      sym_formatting_comment,
  [15715] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1814), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_formatting_comment,
  [15725] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1816), 1,
      anon_sym_EQ,
    STATE(880), 1,
      sym_formatting_comment,
  [15735] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1818), 1,
      anon_sym_RPAREN,
    STATE(881), 1,
      sym_formatting_comment,
  [15745] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1820), 1,
      anon_sym_RPAREN,
    STATE(882), 1,
      sym_formatting_comment,
  [15755] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1822), 1,
      sym_string_literal,
    STATE(883), 1,
      sym_formatting_comment,
  [15765] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1824), 1,
      anon_sym_RPAREN,
    STATE(884), 1,
      sym_formatting_comment,
  [15775] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1826), 1,
      anon_sym_RPAREN,
    STATE(885), 1,
      sym_formatting_comment,
  [15785] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1828), 1,
      anon_sym_RPAREN,
    STATE(886), 1,
      sym_formatting_comment,
  [15795] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1830), 1,
      anon_sym_EQ,
    STATE(887), 1,
      sym_formatting_comment,
  [15805] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1832), 1,
      anon_sym_RPAREN,
    STATE(888), 1,
      sym_formatting_comment,
  [15815] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1834), 1,
      anon_sym_EQ,
    STATE(889), 1,
      sym_formatting_comment,
  [15825] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1836), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_formatting_comment,
  [15835] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1838), 1,
      anon_sym_LPAREN,
    STATE(891), 1,
      sym_formatting_comment,
  [15845] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1840), 1,
      ts_builtin_sym_end,
    STATE(892), 1,
      sym_formatting_comment,
  [15855] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1842), 1,
      anon_sym_RPAREN,
    STATE(893), 1,
      sym_formatting_comment,
  [15865] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1844), 1,
      anon_sym_RPAREN,
    STATE(894), 1,
      sym_formatting_comment,
  [15875] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1846), 1,
      anon_sym_EQ,
    STATE(895), 1,
      sym_formatting_comment,
  [15885] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    STATE(896), 1,
      sym_formatting_comment,
  [15895] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1848), 1,
      anon_sym_RPAREN,
    STATE(897), 1,
      sym_formatting_comment,
  [15905] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1850), 1,
      anon_sym_RPAREN,
    STATE(898), 1,
      sym_formatting_comment,
  [15915] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(899), 1,
      sym_formatting_comment,
  [15925] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1852), 1,
      anon_sym_EQ,
    STATE(900), 1,
      sym_formatting_comment,
  [15935] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1854), 1,
      anon_sym_RPAREN,
    STATE(901), 1,
      sym_formatting_comment,
  [15945] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1856), 1,
      sym_identifier,
    STATE(902), 1,
      sym_formatting_comment,
  [15955] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1858), 1,
      sym_int,
    STATE(903), 1,
      sym_formatting_comment,
  [15965] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1860), 1,
      anon_sym_RPAREN,
    STATE(904), 1,
      sym_formatting_comment,
  [15975] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1862), 1,
      anon_sym_RPAREN,
    STATE(905), 1,
      sym_formatting_comment,
  [15985] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1864), 1,
      anon_sym_RPAREN,
    STATE(906), 1,
      sym_formatting_comment,
  [15995] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1866), 1,
      anon_sym_RPAREN,
    STATE(907), 1,
      sym_formatting_comment,
  [16005] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1868), 1,
      anon_sym_RPAREN,
    STATE(908), 1,
      sym_formatting_comment,
  [16015] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1870), 1,
      anon_sym_RPAREN,
    STATE(909), 1,
      sym_formatting_comment,
  [16025] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1872), 1,
      anon_sym_RPAREN,
    STATE(910), 1,
      sym_formatting_comment,
  [16035] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1874), 1,
      anon_sym_RPAREN,
    STATE(911), 1,
      sym_formatting_comment,
  [16045] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1876), 1,
      sym_identifier,
    STATE(912), 1,
      sym_formatting_comment,
  [16055] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1878), 1,
      anon_sym_COMMA,
    STATE(913), 1,
      sym_formatting_comment,
  [16065] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1880), 1,
      anon_sym_RPAREN,
    STATE(914), 1,
      sym_formatting_comment,
  [16075] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1882), 1,
      anon_sym_RPAREN,
    STATE(915), 1,
      sym_formatting_comment,
  [16085] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1884), 1,
      sym_identifier,
    STATE(916), 1,
      sym_formatting_comment,
  [16095] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1886), 1,
      anon_sym_COLON,
    STATE(917), 1,
      sym_formatting_comment,
  [16105] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1888), 1,
      sym_term_separator_end,
    STATE(918), 1,
      sym_formatting_comment,
  [16115] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1890), 1,
      aux_sym_in_clause_token2,
    STATE(919), 1,
      sym_formatting_comment,
  [16125] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1892), 1,
      anon_sym_RPAREN,
    STATE(920), 1,
      sym_formatting_comment,
  [16135] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1894), 1,
      sym_string_literal,
    STATE(921), 1,
      sym_formatting_comment,
  [16145] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1896), 1,
      aux_sym_in_clause_token2,
    STATE(922), 1,
      sym_formatting_comment,
  [16155] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1898), 1,
      sym_string_literal,
    STATE(923), 1,
      sym_formatting_comment,
  [16165] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1900), 1,
      anon_sym_LPAREN,
    STATE(924), 1,
      sym_formatting_comment,
  [16175] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1902), 1,
      anon_sym_COMMA,
    STATE(925), 1,
      sym_formatting_comment,
  [16185] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1904), 1,
      anon_sym_LPAREN,
    STATE(926), 1,
      sym_formatting_comment,
  [16195] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1906), 1,
      sym_string_literal,
    STATE(927), 1,
      sym_formatting_comment,
  [16205] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1908), 1,
      anon_sym_COLON,
    STATE(928), 1,
      sym_formatting_comment,
  [16215] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1910), 1,
      sym_int,
    STATE(929), 1,
      sym_formatting_comment,
  [16225] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1912), 1,
      anon_sym_COMMA,
    STATE(930), 1,
      sym_formatting_comment,
  [16235] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1914), 1,
      anon_sym_COMMA,
    STATE(931), 1,
      sym_formatting_comment,
  [16245] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1916), 1,
      anon_sym_RPAREN,
    STATE(932), 1,
      sym_formatting_comment,
  [16255] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1918), 1,
      ts_builtin_sym_end,
    STATE(933), 1,
      sym_formatting_comment,
  [16265] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1920), 1,
      anon_sym_LPAREN,
    STATE(934), 1,
      sym_formatting_comment,
  [16275] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1922), 1,
      anon_sym_LPAREN,
    STATE(935), 1,
      sym_formatting_comment,
  [16285] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(1924), 1,
      anon_sym_RPAREN,
    STATE(936), 1,
      sym_formatting_comment,
  [16295] = 1,
    ACTIONS(1926), 1,
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
  [SMALL_STATE(10)] = 492,
  [SMALL_STATE(11)] = 538,
  [SMALL_STATE(12)] = 581,
  [SMALL_STATE(13)] = 625,
  [SMALL_STATE(14)] = 660,
  [SMALL_STATE(15)] = 695,
  [SMALL_STATE(16)] = 730,
  [SMALL_STATE(17)] = 765,
  [SMALL_STATE(18)] = 798,
  [SMALL_STATE(19)] = 862,
  [SMALL_STATE(20)] = 906,
  [SMALL_STATE(21)] = 946,
  [SMALL_STATE(22)] = 1004,
  [SMALL_STATE(23)] = 1062,
  [SMALL_STATE(24)] = 1102,
  [SMALL_STATE(25)] = 1142,
  [SMALL_STATE(26)] = 1189,
  [SMALL_STATE(27)] = 1236,
  [SMALL_STATE(28)] = 1288,
  [SMALL_STATE(29)] = 1340,
  [SMALL_STATE(30)] = 1392,
  [SMALL_STATE(31)] = 1436,
  [SMALL_STATE(32)] = 1482,
  [SMALL_STATE(33)] = 1534,
  [SMALL_STATE(34)] = 1564,
  [SMALL_STATE(35)] = 1610,
  [SMALL_STATE(36)] = 1654,
  [SMALL_STATE(37)] = 1680,
  [SMALL_STATE(38)] = 1732,
  [SMALL_STATE(39)] = 1778,
  [SMALL_STATE(40)] = 1808,
  [SMALL_STATE(41)] = 1836,
  [SMALL_STATE(42)] = 1882,
  [SMALL_STATE(43)] = 1907,
  [SMALL_STATE(44)] = 1932,
  [SMALL_STATE(45)] = 1957,
  [SMALL_STATE(46)] = 1982,
  [SMALL_STATE(47)] = 2007,
  [SMALL_STATE(48)] = 2032,
  [SMALL_STATE(49)] = 2065,
  [SMALL_STATE(50)] = 2089,
  [SMALL_STATE(51)] = 2135,
  [SMALL_STATE(52)] = 2181,
  [SMALL_STATE(53)] = 2227,
  [SMALL_STATE(54)] = 2255,
  [SMALL_STATE(55)] = 2301,
  [SMALL_STATE(56)] = 2324,
  [SMALL_STATE(57)] = 2367,
  [SMALL_STATE(58)] = 2392,
  [SMALL_STATE(59)] = 2415,
  [SMALL_STATE(60)] = 2438,
  [SMALL_STATE(61)] = 2461,
  [SMALL_STATE(62)] = 2484,
  [SMALL_STATE(63)] = 2513,
  [SMALL_STATE(64)] = 2538,
  [SMALL_STATE(65)] = 2567,
  [SMALL_STATE(66)] = 2610,
  [SMALL_STATE(67)] = 2633,
  [SMALL_STATE(68)] = 2656,
  [SMALL_STATE(69)] = 2681,
  [SMALL_STATE(70)] = 2710,
  [SMALL_STATE(71)] = 2735,
  [SMALL_STATE(72)] = 2778,
  [SMALL_STATE(73)] = 2798,
  [SMALL_STATE(74)] = 2838,
  [SMALL_STATE(75)] = 2878,
  [SMALL_STATE(76)] = 2918,
  [SMALL_STATE(77)] = 2942,
  [SMALL_STATE(78)] = 2982,
  [SMALL_STATE(79)] = 3002,
  [SMALL_STATE(80)] = 3026,
  [SMALL_STATE(81)] = 3048,
  [SMALL_STATE(82)] = 3088,
  [SMALL_STATE(83)] = 3128,
  [SMALL_STATE(84)] = 3168,
  [SMALL_STATE(85)] = 3188,
  [SMALL_STATE(86)] = 3212,
  [SMALL_STATE(87)] = 3232,
  [SMALL_STATE(88)] = 3252,
  [SMALL_STATE(89)] = 3272,
  [SMALL_STATE(90)] = 3298,
  [SMALL_STATE(91)] = 3338,
  [SMALL_STATE(92)] = 3378,
  [SMALL_STATE(93)] = 3402,
  [SMALL_STATE(94)] = 3422,
  [SMALL_STATE(95)] = 3457,
  [SMALL_STATE(96)] = 3480,
  [SMALL_STATE(97)] = 3499,
  [SMALL_STATE(98)] = 3518,
  [SMALL_STATE(99)] = 3539,
  [SMALL_STATE(100)] = 3560,
  [SMALL_STATE(101)] = 3589,
  [SMALL_STATE(102)] = 3610,
  [SMALL_STATE(103)] = 3631,
  [SMALL_STATE(104)] = 3652,
  [SMALL_STATE(105)] = 3673,
  [SMALL_STATE(106)] = 3696,
  [SMALL_STATE(107)] = 3731,
  [SMALL_STATE(108)] = 3766,
  [SMALL_STATE(109)] = 3801,
  [SMALL_STATE(110)] = 3835,
  [SMALL_STATE(111)] = 3869,
  [SMALL_STATE(112)] = 3887,
  [SMALL_STATE(113)] = 3907,
  [SMALL_STATE(114)] = 3929,
  [SMALL_STATE(115)] = 3951,
  [SMALL_STATE(116)] = 3971,
  [SMALL_STATE(117)] = 3993,
  [SMALL_STATE(118)] = 4027,
  [SMALL_STATE(119)] = 4061,
  [SMALL_STATE(120)] = 4095,
  [SMALL_STATE(121)] = 4129,
  [SMALL_STATE(122)] = 4147,
  [SMALL_STATE(123)] = 4165,
  [SMALL_STATE(124)] = 4183,
  [SMALL_STATE(125)] = 4203,
  [SMALL_STATE(126)] = 4223,
  [SMALL_STATE(127)] = 4245,
  [SMALL_STATE(128)] = 4267,
  [SMALL_STATE(129)] = 4301,
  [SMALL_STATE(130)] = 4335,
  [SMALL_STATE(131)] = 4355,
  [SMALL_STATE(132)] = 4389,
  [SMALL_STATE(133)] = 4423,
  [SMALL_STATE(134)] = 4457,
  [SMALL_STATE(135)] = 4491,
  [SMALL_STATE(136)] = 4511,
  [SMALL_STATE(137)] = 4545,
  [SMALL_STATE(138)] = 4579,
  [SMALL_STATE(139)] = 4613,
  [SMALL_STATE(140)] = 4647,
  [SMALL_STATE(141)] = 4669,
  [SMALL_STATE(142)] = 4703,
  [SMALL_STATE(143)] = 4723,
  [SMALL_STATE(144)] = 4741,
  [SMALL_STATE(145)] = 4765,
  [SMALL_STATE(146)] = 4785,
  [SMALL_STATE(147)] = 4805,
  [SMALL_STATE(148)] = 4823,
  [SMALL_STATE(149)] = 4852,
  [SMALL_STATE(150)] = 4869,
  [SMALL_STATE(151)] = 4886,
  [SMALL_STATE(152)] = 4903,
  [SMALL_STATE(153)] = 4920,
  [SMALL_STATE(154)] = 4937,
  [SMALL_STATE(155)] = 4954,
  [SMALL_STATE(156)] = 4971,
  [SMALL_STATE(157)] = 4992,
  [SMALL_STATE(158)] = 5023,
  [SMALL_STATE(159)] = 5044,
  [SMALL_STATE(160)] = 5061,
  [SMALL_STATE(161)] = 5078,
  [SMALL_STATE(162)] = 5099,
  [SMALL_STATE(163)] = 5120,
  [SMALL_STATE(164)] = 5137,
  [SMALL_STATE(165)] = 5154,
  [SMALL_STATE(166)] = 5171,
  [SMALL_STATE(167)] = 5188,
  [SMALL_STATE(168)] = 5205,
  [SMALL_STATE(169)] = 5222,
  [SMALL_STATE(170)] = 5243,
  [SMALL_STATE(171)] = 5260,
  [SMALL_STATE(172)] = 5277,
  [SMALL_STATE(173)] = 5296,
  [SMALL_STATE(174)] = 5313,
  [SMALL_STATE(175)] = 5330,
  [SMALL_STATE(176)] = 5347,
  [SMALL_STATE(177)] = 5376,
  [SMALL_STATE(178)] = 5393,
  [SMALL_STATE(179)] = 5422,
  [SMALL_STATE(180)] = 5439,
  [SMALL_STATE(181)] = 5467,
  [SMALL_STATE(182)] = 5485,
  [SMALL_STATE(183)] = 5509,
  [SMALL_STATE(184)] = 5535,
  [SMALL_STATE(185)] = 5561,
  [SMALL_STATE(186)] = 5589,
  [SMALL_STATE(187)] = 5617,
  [SMALL_STATE(188)] = 5645,
  [SMALL_STATE(189)] = 5673,
  [SMALL_STATE(190)] = 5701,
  [SMALL_STATE(191)] = 5729,
  [SMALL_STATE(192)] = 5757,
  [SMALL_STATE(193)] = 5773,
  [SMALL_STATE(194)] = 5789,
  [SMALL_STATE(195)] = 5817,
  [SMALL_STATE(196)] = 5845,
  [SMALL_STATE(197)] = 5873,
  [SMALL_STATE(198)] = 5899,
  [SMALL_STATE(199)] = 5927,
  [SMALL_STATE(200)] = 5943,
  [SMALL_STATE(201)] = 5971,
  [SMALL_STATE(202)] = 5999,
  [SMALL_STATE(203)] = 6027,
  [SMALL_STATE(204)] = 6055,
  [SMALL_STATE(205)] = 6081,
  [SMALL_STATE(206)] = 6109,
  [SMALL_STATE(207)] = 6137,
  [SMALL_STATE(208)] = 6165,
  [SMALL_STATE(209)] = 6193,
  [SMALL_STATE(210)] = 6221,
  [SMALL_STATE(211)] = 6249,
  [SMALL_STATE(212)] = 6277,
  [SMALL_STATE(213)] = 6293,
  [SMALL_STATE(214)] = 6321,
  [SMALL_STATE(215)] = 6349,
  [SMALL_STATE(216)] = 6365,
  [SMALL_STATE(217)] = 6393,
  [SMALL_STATE(218)] = 6421,
  [SMALL_STATE(219)] = 6449,
  [SMALL_STATE(220)] = 6477,
  [SMALL_STATE(221)] = 6505,
  [SMALL_STATE(222)] = 6521,
  [SMALL_STATE(223)] = 6549,
  [SMALL_STATE(224)] = 6573,
  [SMALL_STATE(225)] = 6589,
  [SMALL_STATE(226)] = 6607,
  [SMALL_STATE(227)] = 6627,
  [SMALL_STATE(228)] = 6655,
  [SMALL_STATE(229)] = 6683,
  [SMALL_STATE(230)] = 6711,
  [SMALL_STATE(231)] = 6739,
  [SMALL_STATE(232)] = 6767,
  [SMALL_STATE(233)] = 6787,
  [SMALL_STATE(234)] = 6813,
  [SMALL_STATE(235)] = 6841,
  [SMALL_STATE(236)] = 6869,
  [SMALL_STATE(237)] = 6884,
  [SMALL_STATE(238)] = 6899,
  [SMALL_STATE(239)] = 6914,
  [SMALL_STATE(240)] = 6929,
  [SMALL_STATE(241)] = 6946,
  [SMALL_STATE(242)] = 6961,
  [SMALL_STATE(243)] = 6976,
  [SMALL_STATE(244)] = 6991,
  [SMALL_STATE(245)] = 7012,
  [SMALL_STATE(246)] = 7027,
  [SMALL_STATE(247)] = 7042,
  [SMALL_STATE(248)] = 7057,
  [SMALL_STATE(249)] = 7072,
  [SMALL_STATE(250)] = 7097,
  [SMALL_STATE(251)] = 7120,
  [SMALL_STATE(252)] = 7135,
  [SMALL_STATE(253)] = 7150,
  [SMALL_STATE(254)] = 7165,
  [SMALL_STATE(255)] = 7180,
  [SMALL_STATE(256)] = 7201,
  [SMALL_STATE(257)] = 7220,
  [SMALL_STATE(258)] = 7235,
  [SMALL_STATE(259)] = 7254,
  [SMALL_STATE(260)] = 7279,
  [SMALL_STATE(261)] = 7304,
  [SMALL_STATE(262)] = 7329,
  [SMALL_STATE(263)] = 7354,
  [SMALL_STATE(264)] = 7372,
  [SMALL_STATE(265)] = 7394,
  [SMALL_STATE(266)] = 7412,
  [SMALL_STATE(267)] = 7434,
  [SMALL_STATE(268)] = 7456,
  [SMALL_STATE(269)] = 7478,
  [SMALL_STATE(270)] = 7500,
  [SMALL_STATE(271)] = 7522,
  [SMALL_STATE(272)] = 7544,
  [SMALL_STATE(273)] = 7566,
  [SMALL_STATE(274)] = 7588,
  [SMALL_STATE(275)] = 7610,
  [SMALL_STATE(276)] = 7632,
  [SMALL_STATE(277)] = 7654,
  [SMALL_STATE(278)] = 7668,
  [SMALL_STATE(279)] = 7690,
  [SMALL_STATE(280)] = 7712,
  [SMALL_STATE(281)] = 7734,
  [SMALL_STATE(282)] = 7756,
  [SMALL_STATE(283)] = 7778,
  [SMALL_STATE(284)] = 7800,
  [SMALL_STATE(285)] = 7822,
  [SMALL_STATE(286)] = 7844,
  [SMALL_STATE(287)] = 7866,
  [SMALL_STATE(288)] = 7888,
  [SMALL_STATE(289)] = 7910,
  [SMALL_STATE(290)] = 7932,
  [SMALL_STATE(291)] = 7954,
  [SMALL_STATE(292)] = 7976,
  [SMALL_STATE(293)] = 7998,
  [SMALL_STATE(294)] = 8020,
  [SMALL_STATE(295)] = 8042,
  [SMALL_STATE(296)] = 8064,
  [SMALL_STATE(297)] = 8086,
  [SMALL_STATE(298)] = 8104,
  [SMALL_STATE(299)] = 8126,
  [SMALL_STATE(300)] = 8148,
  [SMALL_STATE(301)] = 8170,
  [SMALL_STATE(302)] = 8192,
  [SMALL_STATE(303)] = 8214,
  [SMALL_STATE(304)] = 8236,
  [SMALL_STATE(305)] = 8258,
  [SMALL_STATE(306)] = 8280,
  [SMALL_STATE(307)] = 8302,
  [SMALL_STATE(308)] = 8324,
  [SMALL_STATE(309)] = 8346,
  [SMALL_STATE(310)] = 8368,
  [SMALL_STATE(311)] = 8390,
  [SMALL_STATE(312)] = 8412,
  [SMALL_STATE(313)] = 8434,
  [SMALL_STATE(314)] = 8456,
  [SMALL_STATE(315)] = 8478,
  [SMALL_STATE(316)] = 8500,
  [SMALL_STATE(317)] = 8522,
  [SMALL_STATE(318)] = 8544,
  [SMALL_STATE(319)] = 8566,
  [SMALL_STATE(320)] = 8588,
  [SMALL_STATE(321)] = 8610,
  [SMALL_STATE(322)] = 8632,
  [SMALL_STATE(323)] = 8654,
  [SMALL_STATE(324)] = 8676,
  [SMALL_STATE(325)] = 8698,
  [SMALL_STATE(326)] = 8714,
  [SMALL_STATE(327)] = 8736,
  [SMALL_STATE(328)] = 8758,
  [SMALL_STATE(329)] = 8780,
  [SMALL_STATE(330)] = 8802,
  [SMALL_STATE(331)] = 8824,
  [SMALL_STATE(332)] = 8846,
  [SMALL_STATE(333)] = 8868,
  [SMALL_STATE(334)] = 8886,
  [SMALL_STATE(335)] = 8908,
  [SMALL_STATE(336)] = 8930,
  [SMALL_STATE(337)] = 8952,
  [SMALL_STATE(338)] = 8968,
  [SMALL_STATE(339)] = 8990,
  [SMALL_STATE(340)] = 9012,
  [SMALL_STATE(341)] = 9034,
  [SMALL_STATE(342)] = 9056,
  [SMALL_STATE(343)] = 9078,
  [SMALL_STATE(344)] = 9093,
  [SMALL_STATE(345)] = 9112,
  [SMALL_STATE(346)] = 9131,
  [SMALL_STATE(347)] = 9146,
  [SMALL_STATE(348)] = 9163,
  [SMALL_STATE(349)] = 9178,
  [SMALL_STATE(350)] = 9193,
  [SMALL_STATE(351)] = 9208,
  [SMALL_STATE(352)] = 9227,
  [SMALL_STATE(353)] = 9240,
  [SMALL_STATE(354)] = 9255,
  [SMALL_STATE(355)] = 9272,
  [SMALL_STATE(356)] = 9291,
  [SMALL_STATE(357)] = 9304,
  [SMALL_STATE(358)] = 9321,
  [SMALL_STATE(359)] = 9334,
  [SMALL_STATE(360)] = 9351,
  [SMALL_STATE(361)] = 9368,
  [SMALL_STATE(362)] = 9387,
  [SMALL_STATE(363)] = 9400,
  [SMALL_STATE(364)] = 9417,
  [SMALL_STATE(365)] = 9436,
  [SMALL_STATE(366)] = 9451,
  [SMALL_STATE(367)] = 9466,
  [SMALL_STATE(368)] = 9481,
  [SMALL_STATE(369)] = 9496,
  [SMALL_STATE(370)] = 9513,
  [SMALL_STATE(371)] = 9530,
  [SMALL_STATE(372)] = 9547,
  [SMALL_STATE(373)] = 9560,
  [SMALL_STATE(374)] = 9579,
  [SMALL_STATE(375)] = 9595,
  [SMALL_STATE(376)] = 9611,
  [SMALL_STATE(377)] = 9627,
  [SMALL_STATE(378)] = 9643,
  [SMALL_STATE(379)] = 9659,
  [SMALL_STATE(380)] = 9675,
  [SMALL_STATE(381)] = 9691,
  [SMALL_STATE(382)] = 9707,
  [SMALL_STATE(383)] = 9723,
  [SMALL_STATE(384)] = 9739,
  [SMALL_STATE(385)] = 9755,
  [SMALL_STATE(386)] = 9767,
  [SMALL_STATE(387)] = 9783,
  [SMALL_STATE(388)] = 9799,
  [SMALL_STATE(389)] = 9811,
  [SMALL_STATE(390)] = 9827,
  [SMALL_STATE(391)] = 9843,
  [SMALL_STATE(392)] = 9859,
  [SMALL_STATE(393)] = 9875,
  [SMALL_STATE(394)] = 9891,
  [SMALL_STATE(395)] = 9907,
  [SMALL_STATE(396)] = 9923,
  [SMALL_STATE(397)] = 9939,
  [SMALL_STATE(398)] = 9955,
  [SMALL_STATE(399)] = 9969,
  [SMALL_STATE(400)] = 9985,
  [SMALL_STATE(401)] = 10001,
  [SMALL_STATE(402)] = 10017,
  [SMALL_STATE(403)] = 10033,
  [SMALL_STATE(404)] = 10049,
  [SMALL_STATE(405)] = 10065,
  [SMALL_STATE(406)] = 10079,
  [SMALL_STATE(407)] = 10095,
  [SMALL_STATE(408)] = 10111,
  [SMALL_STATE(409)] = 10127,
  [SMALL_STATE(410)] = 10143,
  [SMALL_STATE(411)] = 10159,
  [SMALL_STATE(412)] = 10175,
  [SMALL_STATE(413)] = 10191,
  [SMALL_STATE(414)] = 10207,
  [SMALL_STATE(415)] = 10223,
  [SMALL_STATE(416)] = 10239,
  [SMALL_STATE(417)] = 10255,
  [SMALL_STATE(418)] = 10271,
  [SMALL_STATE(419)] = 10287,
  [SMALL_STATE(420)] = 10303,
  [SMALL_STATE(421)] = 10319,
  [SMALL_STATE(422)] = 10333,
  [SMALL_STATE(423)] = 10349,
  [SMALL_STATE(424)] = 10365,
  [SMALL_STATE(425)] = 10381,
  [SMALL_STATE(426)] = 10397,
  [SMALL_STATE(427)] = 10413,
  [SMALL_STATE(428)] = 10429,
  [SMALL_STATE(429)] = 10445,
  [SMALL_STATE(430)] = 10461,
  [SMALL_STATE(431)] = 10477,
  [SMALL_STATE(432)] = 10493,
  [SMALL_STATE(433)] = 10509,
  [SMALL_STATE(434)] = 10521,
  [SMALL_STATE(435)] = 10537,
  [SMALL_STATE(436)] = 10553,
  [SMALL_STATE(437)] = 10569,
  [SMALL_STATE(438)] = 10585,
  [SMALL_STATE(439)] = 10601,
  [SMALL_STATE(440)] = 10617,
  [SMALL_STATE(441)] = 10631,
  [SMALL_STATE(442)] = 10647,
  [SMALL_STATE(443)] = 10663,
  [SMALL_STATE(444)] = 10679,
  [SMALL_STATE(445)] = 10695,
  [SMALL_STATE(446)] = 10711,
  [SMALL_STATE(447)] = 10727,
  [SMALL_STATE(448)] = 10743,
  [SMALL_STATE(449)] = 10759,
  [SMALL_STATE(450)] = 10775,
  [SMALL_STATE(451)] = 10791,
  [SMALL_STATE(452)] = 10807,
  [SMALL_STATE(453)] = 10823,
  [SMALL_STATE(454)] = 10839,
  [SMALL_STATE(455)] = 10855,
  [SMALL_STATE(456)] = 10871,
  [SMALL_STATE(457)] = 10887,
  [SMALL_STATE(458)] = 10903,
  [SMALL_STATE(459)] = 10919,
  [SMALL_STATE(460)] = 10935,
  [SMALL_STATE(461)] = 10951,
  [SMALL_STATE(462)] = 10967,
  [SMALL_STATE(463)] = 10983,
  [SMALL_STATE(464)] = 10999,
  [SMALL_STATE(465)] = 11015,
  [SMALL_STATE(466)] = 11027,
  [SMALL_STATE(467)] = 11043,
  [SMALL_STATE(468)] = 11059,
  [SMALL_STATE(469)] = 11075,
  [SMALL_STATE(470)] = 11091,
  [SMALL_STATE(471)] = 11107,
  [SMALL_STATE(472)] = 11123,
  [SMALL_STATE(473)] = 11139,
  [SMALL_STATE(474)] = 11155,
  [SMALL_STATE(475)] = 11171,
  [SMALL_STATE(476)] = 11187,
  [SMALL_STATE(477)] = 11203,
  [SMALL_STATE(478)] = 11219,
  [SMALL_STATE(479)] = 11235,
  [SMALL_STATE(480)] = 11251,
  [SMALL_STATE(481)] = 11267,
  [SMALL_STATE(482)] = 11283,
  [SMALL_STATE(483)] = 11299,
  [SMALL_STATE(484)] = 11315,
  [SMALL_STATE(485)] = 11331,
  [SMALL_STATE(486)] = 11347,
  [SMALL_STATE(487)] = 11363,
  [SMALL_STATE(488)] = 11379,
  [SMALL_STATE(489)] = 11395,
  [SMALL_STATE(490)] = 11409,
  [SMALL_STATE(491)] = 11425,
  [SMALL_STATE(492)] = 11441,
  [SMALL_STATE(493)] = 11457,
  [SMALL_STATE(494)] = 11473,
  [SMALL_STATE(495)] = 11489,
  [SMALL_STATE(496)] = 11505,
  [SMALL_STATE(497)] = 11521,
  [SMALL_STATE(498)] = 11537,
  [SMALL_STATE(499)] = 11553,
  [SMALL_STATE(500)] = 11569,
  [SMALL_STATE(501)] = 11585,
  [SMALL_STATE(502)] = 11601,
  [SMALL_STATE(503)] = 11617,
  [SMALL_STATE(504)] = 11633,
  [SMALL_STATE(505)] = 11649,
  [SMALL_STATE(506)] = 11665,
  [SMALL_STATE(507)] = 11681,
  [SMALL_STATE(508)] = 11697,
  [SMALL_STATE(509)] = 11713,
  [SMALL_STATE(510)] = 11729,
  [SMALL_STATE(511)] = 11745,
  [SMALL_STATE(512)] = 11761,
  [SMALL_STATE(513)] = 11777,
  [SMALL_STATE(514)] = 11793,
  [SMALL_STATE(515)] = 11809,
  [SMALL_STATE(516)] = 11825,
  [SMALL_STATE(517)] = 11841,
  [SMALL_STATE(518)] = 11857,
  [SMALL_STATE(519)] = 11873,
  [SMALL_STATE(520)] = 11889,
  [SMALL_STATE(521)] = 11905,
  [SMALL_STATE(522)] = 11917,
  [SMALL_STATE(523)] = 11929,
  [SMALL_STATE(524)] = 11945,
  [SMALL_STATE(525)] = 11961,
  [SMALL_STATE(526)] = 11973,
  [SMALL_STATE(527)] = 11985,
  [SMALL_STATE(528)] = 11997,
  [SMALL_STATE(529)] = 12009,
  [SMALL_STATE(530)] = 12021,
  [SMALL_STATE(531)] = 12033,
  [SMALL_STATE(532)] = 12045,
  [SMALL_STATE(533)] = 12057,
  [SMALL_STATE(534)] = 12071,
  [SMALL_STATE(535)] = 12083,
  [SMALL_STATE(536)] = 12095,
  [SMALL_STATE(537)] = 12111,
  [SMALL_STATE(538)] = 12123,
  [SMALL_STATE(539)] = 12135,
  [SMALL_STATE(540)] = 12147,
  [SMALL_STATE(541)] = 12161,
  [SMALL_STATE(542)] = 12177,
  [SMALL_STATE(543)] = 12193,
  [SMALL_STATE(544)] = 12209,
  [SMALL_STATE(545)] = 12223,
  [SMALL_STATE(546)] = 12235,
  [SMALL_STATE(547)] = 12251,
  [SMALL_STATE(548)] = 12267,
  [SMALL_STATE(549)] = 12283,
  [SMALL_STATE(550)] = 12299,
  [SMALL_STATE(551)] = 12313,
  [SMALL_STATE(552)] = 12329,
  [SMALL_STATE(553)] = 12345,
  [SMALL_STATE(554)] = 12361,
  [SMALL_STATE(555)] = 12377,
  [SMALL_STATE(556)] = 12393,
  [SMALL_STATE(557)] = 12409,
  [SMALL_STATE(558)] = 12423,
  [SMALL_STATE(559)] = 12439,
  [SMALL_STATE(560)] = 12455,
  [SMALL_STATE(561)] = 12471,
  [SMALL_STATE(562)] = 12487,
  [SMALL_STATE(563)] = 12503,
  [SMALL_STATE(564)] = 12516,
  [SMALL_STATE(565)] = 12529,
  [SMALL_STATE(566)] = 12540,
  [SMALL_STATE(567)] = 12553,
  [SMALL_STATE(568)] = 12566,
  [SMALL_STATE(569)] = 12577,
  [SMALL_STATE(570)] = 12590,
  [SMALL_STATE(571)] = 12603,
  [SMALL_STATE(572)] = 12616,
  [SMALL_STATE(573)] = 12627,
  [SMALL_STATE(574)] = 12640,
  [SMALL_STATE(575)] = 12651,
  [SMALL_STATE(576)] = 12662,
  [SMALL_STATE(577)] = 12675,
  [SMALL_STATE(578)] = 12688,
  [SMALL_STATE(579)] = 12699,
  [SMALL_STATE(580)] = 12710,
  [SMALL_STATE(581)] = 12721,
  [SMALL_STATE(582)] = 12734,
  [SMALL_STATE(583)] = 12747,
  [SMALL_STATE(584)] = 12758,
  [SMALL_STATE(585)] = 12769,
  [SMALL_STATE(586)] = 12782,
  [SMALL_STATE(587)] = 12793,
  [SMALL_STATE(588)] = 12804,
  [SMALL_STATE(589)] = 12815,
  [SMALL_STATE(590)] = 12825,
  [SMALL_STATE(591)] = 12835,
  [SMALL_STATE(592)] = 12845,
  [SMALL_STATE(593)] = 12855,
  [SMALL_STATE(594)] = 12865,
  [SMALL_STATE(595)] = 12875,
  [SMALL_STATE(596)] = 12885,
  [SMALL_STATE(597)] = 12895,
  [SMALL_STATE(598)] = 12905,
  [SMALL_STATE(599)] = 12915,
  [SMALL_STATE(600)] = 12925,
  [SMALL_STATE(601)] = 12935,
  [SMALL_STATE(602)] = 12945,
  [SMALL_STATE(603)] = 12955,
  [SMALL_STATE(604)] = 12965,
  [SMALL_STATE(605)] = 12975,
  [SMALL_STATE(606)] = 12985,
  [SMALL_STATE(607)] = 12995,
  [SMALL_STATE(608)] = 13005,
  [SMALL_STATE(609)] = 13015,
  [SMALL_STATE(610)] = 13025,
  [SMALL_STATE(611)] = 13035,
  [SMALL_STATE(612)] = 13045,
  [SMALL_STATE(613)] = 13055,
  [SMALL_STATE(614)] = 13065,
  [SMALL_STATE(615)] = 13075,
  [SMALL_STATE(616)] = 13085,
  [SMALL_STATE(617)] = 13095,
  [SMALL_STATE(618)] = 13105,
  [SMALL_STATE(619)] = 13115,
  [SMALL_STATE(620)] = 13125,
  [SMALL_STATE(621)] = 13135,
  [SMALL_STATE(622)] = 13145,
  [SMALL_STATE(623)] = 13155,
  [SMALL_STATE(624)] = 13165,
  [SMALL_STATE(625)] = 13175,
  [SMALL_STATE(626)] = 13185,
  [SMALL_STATE(627)] = 13195,
  [SMALL_STATE(628)] = 13205,
  [SMALL_STATE(629)] = 13215,
  [SMALL_STATE(630)] = 13225,
  [SMALL_STATE(631)] = 13235,
  [SMALL_STATE(632)] = 13245,
  [SMALL_STATE(633)] = 13255,
  [SMALL_STATE(634)] = 13265,
  [SMALL_STATE(635)] = 13275,
  [SMALL_STATE(636)] = 13285,
  [SMALL_STATE(637)] = 13295,
  [SMALL_STATE(638)] = 13305,
  [SMALL_STATE(639)] = 13315,
  [SMALL_STATE(640)] = 13325,
  [SMALL_STATE(641)] = 13335,
  [SMALL_STATE(642)] = 13345,
  [SMALL_STATE(643)] = 13355,
  [SMALL_STATE(644)] = 13365,
  [SMALL_STATE(645)] = 13375,
  [SMALL_STATE(646)] = 13385,
  [SMALL_STATE(647)] = 13395,
  [SMALL_STATE(648)] = 13405,
  [SMALL_STATE(649)] = 13415,
  [SMALL_STATE(650)] = 13425,
  [SMALL_STATE(651)] = 13435,
  [SMALL_STATE(652)] = 13445,
  [SMALL_STATE(653)] = 13455,
  [SMALL_STATE(654)] = 13465,
  [SMALL_STATE(655)] = 13475,
  [SMALL_STATE(656)] = 13485,
  [SMALL_STATE(657)] = 13495,
  [SMALL_STATE(658)] = 13505,
  [SMALL_STATE(659)] = 13515,
  [SMALL_STATE(660)] = 13525,
  [SMALL_STATE(661)] = 13535,
  [SMALL_STATE(662)] = 13545,
  [SMALL_STATE(663)] = 13555,
  [SMALL_STATE(664)] = 13565,
  [SMALL_STATE(665)] = 13575,
  [SMALL_STATE(666)] = 13585,
  [SMALL_STATE(667)] = 13595,
  [SMALL_STATE(668)] = 13605,
  [SMALL_STATE(669)] = 13615,
  [SMALL_STATE(670)] = 13625,
  [SMALL_STATE(671)] = 13635,
  [SMALL_STATE(672)] = 13645,
  [SMALL_STATE(673)] = 13655,
  [SMALL_STATE(674)] = 13665,
  [SMALL_STATE(675)] = 13675,
  [SMALL_STATE(676)] = 13685,
  [SMALL_STATE(677)] = 13695,
  [SMALL_STATE(678)] = 13705,
  [SMALL_STATE(679)] = 13715,
  [SMALL_STATE(680)] = 13725,
  [SMALL_STATE(681)] = 13735,
  [SMALL_STATE(682)] = 13745,
  [SMALL_STATE(683)] = 13755,
  [SMALL_STATE(684)] = 13765,
  [SMALL_STATE(685)] = 13775,
  [SMALL_STATE(686)] = 13785,
  [SMALL_STATE(687)] = 13795,
  [SMALL_STATE(688)] = 13805,
  [SMALL_STATE(689)] = 13815,
  [SMALL_STATE(690)] = 13825,
  [SMALL_STATE(691)] = 13835,
  [SMALL_STATE(692)] = 13845,
  [SMALL_STATE(693)] = 13855,
  [SMALL_STATE(694)] = 13865,
  [SMALL_STATE(695)] = 13875,
  [SMALL_STATE(696)] = 13885,
  [SMALL_STATE(697)] = 13895,
  [SMALL_STATE(698)] = 13905,
  [SMALL_STATE(699)] = 13915,
  [SMALL_STATE(700)] = 13925,
  [SMALL_STATE(701)] = 13935,
  [SMALL_STATE(702)] = 13945,
  [SMALL_STATE(703)] = 13955,
  [SMALL_STATE(704)] = 13965,
  [SMALL_STATE(705)] = 13975,
  [SMALL_STATE(706)] = 13985,
  [SMALL_STATE(707)] = 13995,
  [SMALL_STATE(708)] = 14005,
  [SMALL_STATE(709)] = 14015,
  [SMALL_STATE(710)] = 14025,
  [SMALL_STATE(711)] = 14035,
  [SMALL_STATE(712)] = 14045,
  [SMALL_STATE(713)] = 14055,
  [SMALL_STATE(714)] = 14065,
  [SMALL_STATE(715)] = 14075,
  [SMALL_STATE(716)] = 14085,
  [SMALL_STATE(717)] = 14095,
  [SMALL_STATE(718)] = 14105,
  [SMALL_STATE(719)] = 14115,
  [SMALL_STATE(720)] = 14125,
  [SMALL_STATE(721)] = 14135,
  [SMALL_STATE(722)] = 14145,
  [SMALL_STATE(723)] = 14155,
  [SMALL_STATE(724)] = 14165,
  [SMALL_STATE(725)] = 14175,
  [SMALL_STATE(726)] = 14185,
  [SMALL_STATE(727)] = 14195,
  [SMALL_STATE(728)] = 14205,
  [SMALL_STATE(729)] = 14215,
  [SMALL_STATE(730)] = 14225,
  [SMALL_STATE(731)] = 14235,
  [SMALL_STATE(732)] = 14245,
  [SMALL_STATE(733)] = 14255,
  [SMALL_STATE(734)] = 14265,
  [SMALL_STATE(735)] = 14275,
  [SMALL_STATE(736)] = 14285,
  [SMALL_STATE(737)] = 14295,
  [SMALL_STATE(738)] = 14305,
  [SMALL_STATE(739)] = 14315,
  [SMALL_STATE(740)] = 14325,
  [SMALL_STATE(741)] = 14335,
  [SMALL_STATE(742)] = 14345,
  [SMALL_STATE(743)] = 14355,
  [SMALL_STATE(744)] = 14365,
  [SMALL_STATE(745)] = 14375,
  [SMALL_STATE(746)] = 14385,
  [SMALL_STATE(747)] = 14395,
  [SMALL_STATE(748)] = 14405,
  [SMALL_STATE(749)] = 14415,
  [SMALL_STATE(750)] = 14425,
  [SMALL_STATE(751)] = 14435,
  [SMALL_STATE(752)] = 14445,
  [SMALL_STATE(753)] = 14455,
  [SMALL_STATE(754)] = 14465,
  [SMALL_STATE(755)] = 14475,
  [SMALL_STATE(756)] = 14485,
  [SMALL_STATE(757)] = 14495,
  [SMALL_STATE(758)] = 14505,
  [SMALL_STATE(759)] = 14515,
  [SMALL_STATE(760)] = 14525,
  [SMALL_STATE(761)] = 14535,
  [SMALL_STATE(762)] = 14545,
  [SMALL_STATE(763)] = 14555,
  [SMALL_STATE(764)] = 14565,
  [SMALL_STATE(765)] = 14575,
  [SMALL_STATE(766)] = 14585,
  [SMALL_STATE(767)] = 14595,
  [SMALL_STATE(768)] = 14605,
  [SMALL_STATE(769)] = 14615,
  [SMALL_STATE(770)] = 14625,
  [SMALL_STATE(771)] = 14635,
  [SMALL_STATE(772)] = 14645,
  [SMALL_STATE(773)] = 14655,
  [SMALL_STATE(774)] = 14665,
  [SMALL_STATE(775)] = 14675,
  [SMALL_STATE(776)] = 14685,
  [SMALL_STATE(777)] = 14695,
  [SMALL_STATE(778)] = 14705,
  [SMALL_STATE(779)] = 14715,
  [SMALL_STATE(780)] = 14725,
  [SMALL_STATE(781)] = 14735,
  [SMALL_STATE(782)] = 14745,
  [SMALL_STATE(783)] = 14755,
  [SMALL_STATE(784)] = 14765,
  [SMALL_STATE(785)] = 14775,
  [SMALL_STATE(786)] = 14785,
  [SMALL_STATE(787)] = 14795,
  [SMALL_STATE(788)] = 14805,
  [SMALL_STATE(789)] = 14815,
  [SMALL_STATE(790)] = 14825,
  [SMALL_STATE(791)] = 14835,
  [SMALL_STATE(792)] = 14845,
  [SMALL_STATE(793)] = 14855,
  [SMALL_STATE(794)] = 14865,
  [SMALL_STATE(795)] = 14875,
  [SMALL_STATE(796)] = 14885,
  [SMALL_STATE(797)] = 14895,
  [SMALL_STATE(798)] = 14905,
  [SMALL_STATE(799)] = 14915,
  [SMALL_STATE(800)] = 14925,
  [SMALL_STATE(801)] = 14935,
  [SMALL_STATE(802)] = 14945,
  [SMALL_STATE(803)] = 14955,
  [SMALL_STATE(804)] = 14965,
  [SMALL_STATE(805)] = 14975,
  [SMALL_STATE(806)] = 14985,
  [SMALL_STATE(807)] = 14995,
  [SMALL_STATE(808)] = 15005,
  [SMALL_STATE(809)] = 15015,
  [SMALL_STATE(810)] = 15025,
  [SMALL_STATE(811)] = 15035,
  [SMALL_STATE(812)] = 15045,
  [SMALL_STATE(813)] = 15055,
  [SMALL_STATE(814)] = 15065,
  [SMALL_STATE(815)] = 15075,
  [SMALL_STATE(816)] = 15085,
  [SMALL_STATE(817)] = 15095,
  [SMALL_STATE(818)] = 15105,
  [SMALL_STATE(819)] = 15115,
  [SMALL_STATE(820)] = 15125,
  [SMALL_STATE(821)] = 15135,
  [SMALL_STATE(822)] = 15145,
  [SMALL_STATE(823)] = 15155,
  [SMALL_STATE(824)] = 15165,
  [SMALL_STATE(825)] = 15175,
  [SMALL_STATE(826)] = 15185,
  [SMALL_STATE(827)] = 15195,
  [SMALL_STATE(828)] = 15205,
  [SMALL_STATE(829)] = 15215,
  [SMALL_STATE(830)] = 15225,
  [SMALL_STATE(831)] = 15235,
  [SMALL_STATE(832)] = 15245,
  [SMALL_STATE(833)] = 15255,
  [SMALL_STATE(834)] = 15265,
  [SMALL_STATE(835)] = 15275,
  [SMALL_STATE(836)] = 15285,
  [SMALL_STATE(837)] = 15295,
  [SMALL_STATE(838)] = 15305,
  [SMALL_STATE(839)] = 15315,
  [SMALL_STATE(840)] = 15325,
  [SMALL_STATE(841)] = 15335,
  [SMALL_STATE(842)] = 15345,
  [SMALL_STATE(843)] = 15355,
  [SMALL_STATE(844)] = 15365,
  [SMALL_STATE(845)] = 15375,
  [SMALL_STATE(846)] = 15385,
  [SMALL_STATE(847)] = 15395,
  [SMALL_STATE(848)] = 15405,
  [SMALL_STATE(849)] = 15415,
  [SMALL_STATE(850)] = 15425,
  [SMALL_STATE(851)] = 15435,
  [SMALL_STATE(852)] = 15445,
  [SMALL_STATE(853)] = 15455,
  [SMALL_STATE(854)] = 15465,
  [SMALL_STATE(855)] = 15475,
  [SMALL_STATE(856)] = 15485,
  [SMALL_STATE(857)] = 15495,
  [SMALL_STATE(858)] = 15505,
  [SMALL_STATE(859)] = 15515,
  [SMALL_STATE(860)] = 15525,
  [SMALL_STATE(861)] = 15535,
  [SMALL_STATE(862)] = 15545,
  [SMALL_STATE(863)] = 15555,
  [SMALL_STATE(864)] = 15565,
  [SMALL_STATE(865)] = 15575,
  [SMALL_STATE(866)] = 15585,
  [SMALL_STATE(867)] = 15595,
  [SMALL_STATE(868)] = 15605,
  [SMALL_STATE(869)] = 15615,
  [SMALL_STATE(870)] = 15625,
  [SMALL_STATE(871)] = 15635,
  [SMALL_STATE(872)] = 15645,
  [SMALL_STATE(873)] = 15655,
  [SMALL_STATE(874)] = 15665,
  [SMALL_STATE(875)] = 15675,
  [SMALL_STATE(876)] = 15685,
  [SMALL_STATE(877)] = 15695,
  [SMALL_STATE(878)] = 15705,
  [SMALL_STATE(879)] = 15715,
  [SMALL_STATE(880)] = 15725,
  [SMALL_STATE(881)] = 15735,
  [SMALL_STATE(882)] = 15745,
  [SMALL_STATE(883)] = 15755,
  [SMALL_STATE(884)] = 15765,
  [SMALL_STATE(885)] = 15775,
  [SMALL_STATE(886)] = 15785,
  [SMALL_STATE(887)] = 15795,
  [SMALL_STATE(888)] = 15805,
  [SMALL_STATE(889)] = 15815,
  [SMALL_STATE(890)] = 15825,
  [SMALL_STATE(891)] = 15835,
  [SMALL_STATE(892)] = 15845,
  [SMALL_STATE(893)] = 15855,
  [SMALL_STATE(894)] = 15865,
  [SMALL_STATE(895)] = 15875,
  [SMALL_STATE(896)] = 15885,
  [SMALL_STATE(897)] = 15895,
  [SMALL_STATE(898)] = 15905,
  [SMALL_STATE(899)] = 15915,
  [SMALL_STATE(900)] = 15925,
  [SMALL_STATE(901)] = 15935,
  [SMALL_STATE(902)] = 15945,
  [SMALL_STATE(903)] = 15955,
  [SMALL_STATE(904)] = 15965,
  [SMALL_STATE(905)] = 15975,
  [SMALL_STATE(906)] = 15985,
  [SMALL_STATE(907)] = 15995,
  [SMALL_STATE(908)] = 16005,
  [SMALL_STATE(909)] = 16015,
  [SMALL_STATE(910)] = 16025,
  [SMALL_STATE(911)] = 16035,
  [SMALL_STATE(912)] = 16045,
  [SMALL_STATE(913)] = 16055,
  [SMALL_STATE(914)] = 16065,
  [SMALL_STATE(915)] = 16075,
  [SMALL_STATE(916)] = 16085,
  [SMALL_STATE(917)] = 16095,
  [SMALL_STATE(918)] = 16105,
  [SMALL_STATE(919)] = 16115,
  [SMALL_STATE(920)] = 16125,
  [SMALL_STATE(921)] = 16135,
  [SMALL_STATE(922)] = 16145,
  [SMALL_STATE(923)] = 16155,
  [SMALL_STATE(924)] = 16165,
  [SMALL_STATE(925)] = 16175,
  [SMALL_STATE(926)] = 16185,
  [SMALL_STATE(927)] = 16195,
  [SMALL_STATE(928)] = 16205,
  [SMALL_STATE(929)] = 16215,
  [SMALL_STATE(930)] = 16225,
  [SMALL_STATE(931)] = 16235,
  [SMALL_STATE(932)] = 16245,
  [SMALL_STATE(933)] = 16255,
  [SMALL_STATE(934)] = 16265,
  [SMALL_STATE(935)] = 16275,
  [SMALL_STATE(936)] = 16285,
  [SMALL_STATE(937)] = 16295,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_comparison_operator, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_comparison_operator, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(902),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_identifier, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_identifier, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_name, 1, 0, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 8, 0, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 8, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 4, 0, 13),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 4, 0, 13),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 5, 0, 13),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 5, 0, 13),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_expression, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_expression, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 2, 0, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(934),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 16),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(935),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_identifier, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storage_identifier, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 6),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(916),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_literal, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null_literal, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__soql_literal, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__soql_literal, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_literal_with_param, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_literal_with_param, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 30),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 17),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 58),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_clause_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 7),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparable_list, 4, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparable_list, 4, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2, 0, 0),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(581),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comparison, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comparison, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_comparison, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value_comparison, 2, 0, 0),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_comparison, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_comparison, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparable_list, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparable_list, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_expression, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 56),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 63),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 94),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_lookup_bind_clause, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 150),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 5, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_lookup_bind_clause, 3, 0, 0),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_using_lookup_bind_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(571),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_using_lookup_bind_clause_repeat1, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 28),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 14),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 35),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 6, 0, 0),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(821),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_alias, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_lookup_clause, 2, 0, 12),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_lookup_bind_expression, 3, 0, 386),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_expression, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_expression, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2, 0, 0),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_and_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_expression, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expression, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 34),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 11),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_scope_type, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_returning_clause_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_returning_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(569),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat1, 2, 0, 0),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat1, 2, 0, 0), SHIFT_REPEAT(585),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 21),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 26),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 40),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_lookup_clause, 3, 0, 12),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_listview_clause, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returning_clause, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_by_expression, 2, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 54),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 62),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 1, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 68),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 92),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 99),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 113),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__group_by_expression_repeat1, 2, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 148),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 155),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 169),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 214),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returning_clause, 2, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 284),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_clause, 2, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selectable_expression, 1, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selectable_expression, 1, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_scope_clause, 2, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 6, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 3, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 5, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 8, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat2, 2, 0, 0),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat2, 2, 0, 0), SHIFT_REPEAT(19),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 2, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 7, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_of_clause, 4, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selected_fields, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 9, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 2, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_find_clause, 4, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_find_clause, 2, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selected_fields, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 5, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selected_fields_repeat1, 2, 0, 0),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selected_fields_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 3, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sobject_return, 4, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_expression, 4, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_direction, 1, 0, 0),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 51),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 59),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 5, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 65),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 75),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 85),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 89),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_type, 1, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_with_clause, 2, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 96),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 106),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 110),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 121),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_user_id_type, 3, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 141),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 145),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 18),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 152),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 166),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 177),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 207),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 211),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 23),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 222),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 242),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 4, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 277),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 281),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_clause, 3, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 292),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 312),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 352),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 31),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_expression, 5, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 409),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat1, 1, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_snippet_expression, 1, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 2, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 37),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 47),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 8),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 162),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_snippet_expression, 6, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_clause, 2, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_with_type, 1, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_division_expression, 3, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_metadata_expression, 3, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_with_clause, 2, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_null_direction, 1, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_network_expression, 2, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(868),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sosl_query_body_repeat2, 1, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_pricebook_expression, 3, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_highlight, 1, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 3, 0, 0),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotted_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(912),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_spell_correction_expression, 3, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 208),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2, 0, 0),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(624),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 212),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 70),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 217),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 223),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 231),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 237),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 76),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 243),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 251),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 24),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 80),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 266),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 272),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 146),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 278),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 86),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 282),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 287),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 90),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 293),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 301),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 307),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 136),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 313),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 321),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 341),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 347),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 353),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 361),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 376),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 60),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 32),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 66),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 97),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 153),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 398),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 404),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 101),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 410),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 418),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 433),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 455),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 483),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 19),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 157),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 9),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 163),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 107),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 111),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 6, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 38),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 167),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 142),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 116),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 172),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 42),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 52),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 48),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 122),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 130),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0), SHIFT_REPEAT(570),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 178),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 186),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 196),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 202),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, 0, 0),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2, 0, 0),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_update_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_clause_repeat1, 2, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_phrase_search, 1, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 3, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_advanced_search, 1, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2, 0, 0),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_using_clause, 2, 0, 0),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_clause, 2, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_clause, 2, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 343),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 103),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 105),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 109),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 115),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 118),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 120),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 125),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 129),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 132),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_expression, 4, 0, 0),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 7, 0, 0),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 57),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 135),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 138),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 140),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 144),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 3, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 151),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 156),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 159),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 161),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 165),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [938] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparable_list_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparable_list_repeat1, 2, 0, 0),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 171),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 174),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 176),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 181),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 185),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 188),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 191),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 195),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 198),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 201),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 204),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 206),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 64),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 210),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 216),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 219),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 221),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 226),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 230),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 233),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 236),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 69),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 239),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 241),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_type, 1, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 246),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 250),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 253),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 257),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 15),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2, 0, 0),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 72),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 261),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 265),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 268),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 271),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 274),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 276),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 22),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 280),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 74),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 286),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 289),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 291),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 296),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 300),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 29),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 303),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 306),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 309),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 311),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_of_clause_repeat1, 1, 0, 0),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 316),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 320),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 323),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 327),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 332),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 336),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 340),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 79),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 346),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 349),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 351),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 36),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 360),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 363),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 367),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 371),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 375),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 378),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 382),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 41),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 44),
  [1097] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(360),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_record_visibility_expression_repeat1, 2, 0, 0),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 389),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 393),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 397),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 400),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 403),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 46),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 406),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 408),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 413),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 417),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 420),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 424),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 428),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 432),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 435),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 439),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 446),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 450),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 454),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 457),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 461),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 467),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 474),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 478),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 482),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 485),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 489),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 495),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 502),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 510),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 82),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 84),
  [1166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selected_fields_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [1169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 5),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 88),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_type, 1, 0, 0),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2, 0, 0),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2, 0, 0), SHIFT_REPEAT(708),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_data_cat_filter_repeat1, 2, 0, 0),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 95),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 50),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 100),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 356),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_data_cat_filter_type, 1, 0, 0),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_record_visibility_param, 3, 0, 0),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_comparison_operator, 1, 0, 0),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 134),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 260),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 262),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 263),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 264),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 267),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 137),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 269),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 270),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 20),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 273),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 139),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 275),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 98),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 73),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 279),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 143),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 61),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 283),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 25),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 285),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_comment, 2, 0, 0),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 288),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 147),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 290),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 27),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 294),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 295),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 149),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 297),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 298),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 299),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 102),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 302),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_expression, 1, 0, 0),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 304),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 305),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 154),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 308),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 104),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 310),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 314),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 315),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 158),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 317),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 318),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 319),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expression, 2, 0, 0),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 33),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 322),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 160),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 324),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 325),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 326),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 328),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 329),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 330),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 331),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 333),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 334),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 335),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 108),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 337),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 338),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 339),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 164),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 342),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 77),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 344),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 345),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 348),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 78),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 350),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 168),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 112),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 170),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 354),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 355),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 357),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 358),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 359),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 362),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 173),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 364),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 365),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 366),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 114),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 368),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 369),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 370),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 175),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 372),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 373),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 374),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 55),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 39),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 377),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 379),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 380),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 381),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 383),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 384),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 7, 0, 385),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 179),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 180),
  [1502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(918),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 182),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 43),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 183),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 184),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 117),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 81),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 387),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 388),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 187),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 390),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 391),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 392),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 119),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 394),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 395),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 396),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 189),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 45),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 399),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 190),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 401),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 402),
  [1548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(937),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 192),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 405),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 193),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 407),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 194),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 83),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 411),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 412),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sosl_query_body, 8, 0, 0),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 414),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 415),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 416),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 197),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 4, 0, 49),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 419),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 421),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 422),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 423),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 199),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 425),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 426),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 427),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 200),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 429),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 430),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 431),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 123),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_expression, 3, 0, 13),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 434),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 203),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 436),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 437),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 438),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 124),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 440),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 441),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 443),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 444),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 445),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 205),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 447),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 448),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 449),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 67),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 451),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 452),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 453),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 126),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 456),
  [1654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 209),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 458),
  [1658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 459),
  [1660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 460),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 127),
  [1664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 462),
  [1666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 463),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 464),
  [1670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 465),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 466),
  [1674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 128),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 468),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 469),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 470),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 471),
  [1686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 472),
  [1688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 473),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 53),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 475),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 476),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 477),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 213),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 479),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 480),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 481),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 484),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 215),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 486),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 487),
  [1718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 488),
  [1720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 131),
  [1722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 490),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 491),
  [1726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 492),
  [1728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 493),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 494),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 496),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 497),
  [1738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 498),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 499),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 500),
  [1744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 501),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 218),
  [1748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 503),
  [1750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 504),
  [1752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 505),
  [1754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 9, 0, 506),
  [1756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 6, 0, 1),
  [1758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 507),
  [1760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 508),
  [1762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 509),
  [1764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 87),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 511),
  [1768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 512),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 513),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 514),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 10, 0, 515),
  [1776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 11, 0, 516),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 220),
  [1780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 133),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 224),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 225),
  [1788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 227),
  [1790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 228),
  [1792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 229),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_geo_location_type, 1, 0, 0),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 232),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 234),
  [1810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 235),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 238),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 240),
  [1820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 91),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 244),
  [1828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 245),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 71),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 247),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1840] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 248),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 249),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_type, 1, 0, 0),
  [1850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 252),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 254),
  [1862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 255),
  [1864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 256),
  [1866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 5, 0, 93),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 258),
  [1872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 6, 0, 259),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_type, 1, 0, 0),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 3, 0, 10),
  [1918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_soql_query_body, 8, 0, 442),
  [1926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatting_comment, 2, 0, 0),
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
