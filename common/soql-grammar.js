"use strict";
const { ci, commaJoined1, joined, dialects } = require("./common.js");

module.exports = function defineGrammar(dialect) {
  return {
    /*
    RESOURCES
    https://blog.jeffdouglas.com/2009/09/23/syntax-rules-for-soql/
    https://github.com/forcedotcom/apex-tmLanguage
    https://developer.salesforce.com/docs/atlas.en-us.238.0.soql_sosl.meta/soql_sosl/sforce_api_calls_soql_sosl_intro.htm
  */

    conflicts: ($) => [],

    rules: {
      _soql_query_expression: ($) => $.soql_query_body,
      subquery: ($) => seq("(", $.soql_query_body, ")"),

      soql_query_body: ($) => {
        const s = [
          field("select_clause", $.select_clause),
          field("from_clause", $.from_clause),
          optional(field("using_clause", $.using_clause)),
          optional(field("where_clause", $.where_clause)),
          optional(
            field("with_clause", alias($.soql_with_clause, $.with_clause))
          ),
          optional(field("group_by_clause", $.group_by_clause)),
          optional(field("order_by_clause", $.order_by_clause)),
          optional(field("limit_clause", $.limit_clause)),
          optional(field("offset_clause", $.offset_clause)),
          optional(field("for_clause", $.for_clause)),
          optional(field("update_clause", $.update_clause)),
        ];
        if (dialect == dialects.APEX) {
          s.push(optional(field("all_rows_clause", $.all_rows_clause)));
        }
        return seq(...s);
      },

      count_expression: ($) => seq($._function_name, "(", ")"),
      // SELECT
      select_clause: ($) =>
        seq(
          ci("SELECT"),
          choice($.count_expression, commaJoined1($._selectable_expression))
        ),
      _selectable_expression: ($) =>
        choice(
          $._value_expression,
          $.alias_expression,
          $.type_of_clause,
          $.fields_expression,
          $.subquery
        ),

      // USING
      using_clause: ($) =>
        seq(
          ci("USING"),
          choice(
            $.using_scope_clause,
            $.using_lookup_clause,
            $.using_listview_clause
          )
        ),

      using_scope_clause: ($) => seq(ci("SCOPE"), $.using_scope_type),
      using_scope_type: ($) =>
        choice(
          ci("delegated"),
          ci("everything"),
          ci("mine"),
          ci("mine_and_my_groups"),
          ci("my_territory"),
          ci("my_team_territory"),
          ci("team")
        ),

      using_lookup_clause: ($) =>
        seq(
          ci("LOOKUP"),
          field("lookup_field", $.dotted_identifier),
          optional($.using_lookup_bind_clause)
        ),

      // only valid inside a SOSL Returning clause, will parse in non-executable contexts such as SOQL
      using_listview_clause: ($) => seq(ci("ListView"), "=", $.identifier),

      using_lookup_bind_clause: ($) =>
        seq(ci("BIND"), commaJoined1($.using_lookup_bind_expression)),

      using_lookup_bind_expression: ($) =>
        seq(
          field("field", $.identifier),
          "=",
          field("bound_value", $._soql_literal)
        ),

      // TYPE OF
      type_of_clause: ($) =>
        seq(
          ci("TYPEOF"),
          choice($.identifier, $.dotted_identifier),
          repeat($.when_expression),
          optional($.else_expression),
          ci("END")
        ),
      when_expression: ($) =>
        seq(ci("WHEN"), $.identifier, ci("THEN"), $.field_list),
      else_expression: ($) => seq(ci("ELSE"), $.field_list),

      // GROUP BY
      group_by_clause: ($) =>
        seq(ci("GROUP BY"), $._group_by_expression, optional($.having_clause)),
      _group_by_expression: ($) =>
        commaJoined1(choice($.field_identifier, $.function_expression)),

      // FOR
      for_clause: ($) => seq(ci("FOR"), commaJoined1($.for_type)),
      for_type: ($) => choice(ci("UPDATE"), ci("REFERENCE"), ci("VIEW")),

      // GROUP BY HAVING
      having_clause: ($) => seq(ci("HAVING"), $._boolean_expression),

      from_clause: ($) =>
        seq(
          ci("FROM"),
          commaJoined1(choice($.storage_identifier, $.storage_alias))
        ),
      storage_identifier: ($) => choice($.identifier, $.dotted_identifier),
      storage_alias: ($) =>
        seq($.storage_identifier, optional(ci("AS")), $.identifier),

      // FIELDS
      fields_expression: ($) => seq(ci("FIELDS"), "(", $.fields_type, ")"),
      fields_type: ($) => choice(ci("ALL"), ci("CUSTOM"), ci("STANDARD")),

      // WHERE
      where_clause: ($) => seq(ci("WHERE"), $._boolean_expression),

      _boolean_expression: ($) =>
        choice(
          $.and_expression,
          $.or_expression,
          $.not_expression,
          $._condition_expression
        ),
      and_expression: ($) =>
        seq(
          $._condition_expression,
          repeat1(seq(ci("AND"), $._condition_expression))
        ),
      or_expression: ($) =>
        seq(
          $._condition_expression,
          repeat1(seq(ci("OR"), $._condition_expression))
        ),
      not_expression: ($) => seq(ci("NOT"), $._condition_expression),
      _condition_expression: ($) =>
        choice(seq("(", $._boolean_expression, ")"), $.comparison_expression),

      comparison_expression: ($) => seq($._value_expression, $._comparison),

      _comparison: ($) => choice($._value_comparison, $._set_comparison),

      _value_comparison: ($) =>
        seq(
          $.value_comparison_operator,
          choice($._soql_literal, $.bound_apex_expression)
        ),
      _set_comparison: ($) =>
        seq(
          $.set_comparison_operator,
          choice($.subquery, $.comparable_list, $.bound_apex_expression)
        ),

      comparable_list: ($) =>
        seq(
          "(",
          commaJoined1(choice($._soql_literal, $.bound_apex_expression)),
          ")"
        ),

      // WITH
      soql_with_clause: ($) =>
        seq(ci("WITH"), alias($.soql_with_type, $.with_type)),
      // WITH
      soql_with_type: ($) =>
        choice(
          ci("Security_Enforced"),
          ci("User_Mode"),
          ci("System_Mode"),
          $.with_record_visibility_expression,
          $.with_data_cat_expression,
          $.with_user_id_type
        ),

      with_user_id_type: ($) => seq(ci("UserId"), "=", $.string_literal),

      // WITH RecordVisibilityContext
      with_record_visibility_expression: ($) =>
        seq(
          ci("RecordVisibilityContext"),
          "(",
          commaJoined1($.with_record_visibility_param),
          ")"
        ),
      with_record_visibility_param: ($) =>
        choice(
          seq(ci("maxDescriptorPerRecord"), "=", $.int),
          seq(ci("supportsDomains"), "=", $.boolean),
          seq(ci("supportsDelegates"), "=", $.boolean)
        ),

      // WITH DATA CATEGORY
      with_data_cat_expression: ($) =>
        seq(ci("DATA CATEGORY"), joined(ci("AND"), $.with_data_cat_filter)),
      with_data_cat_filter: ($) =>
        seq(
          $.identifier,
          $.with_data_cat_filter_type,
          choice($.identifier, seq("(", commaJoined1($.identifier), ")"))
        ),
      with_data_cat_filter_type: ($) =>
        choice(ci("AT"), ci("ABOVE"), ci("BELOW"), ci("ABOVE_OR_BELOW")),

      // LIMIT
      limit_clause: ($) =>
        seq(ci("LIMIT"), choice($.int, $.bound_apex_expression)),
      // OFFSET
      offset_clause: ($) =>
        seq(ci("OFFSET"), choice($.int, $.bound_apex_expression)),

      update_clause: ($) => seq(ci("UPDATE"), commaJoined1($.update_type)),
      update_type: ($) => choice(ci("TRACKING"), ci("VIEWSTAT")),

      alias_expression: ($) => seq($._value_expression, $.identifier),

      // ORDER BY
      order_by_clause: ($) =>
        seq(ci("ORDER BY"), commaJoined1($.order_expression)),
      order_expression: ($) =>
        seq(
          $._value_expression,
          optional($.order_direction),
          optional($.order_null_direction)
        ),
      order_direction: ($) => choice(ci("ASC"), ci("DESC")),
      order_null_direction: ($) => choice(ci("NULLS FIRST"), ci("NULLS LAST")),

      geo_location_type: ($) =>
        choice(
          $.field_identifier,
          $.bound_apex_expression,
          seq(
            field("function_name", alias(ci("GEOLOCATION"), $.identifier)),
            "(",
            choice($.decimal, $.bound_apex_expression),
            ",",
            choice($.decimal, $.bound_apex_expression),
            ")"
          )
        ),

      _value_expression: ($) =>
        choice($.function_expression, $.field_identifier),
      function_expression: ($) =>
        choice(
          seq(
            field("function_name", alias(ci("DISTANCE"), $.identifier)),
            "(",
            choice($.field_identifier, $.bound_apex_expression),
            ",",
            $.geo_location_type,
            ",",
            $.string_literal,
            ")"
          ),
          seq($._function_name, "(", commaJoined1($._value_expression), ")")
        ),

      dotted_identifier: ($) =>
        seq($.identifier, repeat1(seq(".", $.identifier))),
      field_identifier: ($) => choice($.identifier, $.dotted_identifier),
      field_list: ($) =>
        seq(commaJoined1(choice($.identifier, $.dotted_identifier))),

      all_rows_clause: ($) => ci("ALL ROWS"),

      boolean: ($) => choice(ci("TRUE"), ci("FALSE")),

      value_comparison_operator: ($) =>
        choice("=", "!=", "<>", "<", "<=", ">", ">=", ci("LIKE")),
      set_comparison_operator: ($) =>
        choice(ci("IN"), seq(ci("NOT IN")), ci("INCLUDES"), ci("EXCLUDES")),

      date_literal: ($) =>
        choice(
          ci("YESTERDAY"),
          ci("TODAY"),
          ci("TOMORROW"),
          ci("LAST_WEEK"),
          ci("THIS_WEEK"),
          ci("NEXT_WEEK"),
          ci("LAST_MONTH"),
          ci("THIS_MONTH"),
          ci("NEXT_MONTH"),
          ci("LAST_90_DAYS"),
          ci("NEXT_90_DAYS"),
          ci("THIS_QUARTER"),
          ci("LAST_QUARTER"),
          ci("NEXT_QUARTER"),
          ci("THIS_YEAR"),
          ci("LAST_YEAR"),
          ci("NEXT_YEAR"),
          ci("THIS_FISCAL_QUARTER"),
          ci("LAST_FISCAL_QUARTER"),
          ci("NEXT_FISCAL_QUARTER"),
          ci("THIS_FISCAL_YEAR"),
          ci("LAST_FISCAL_YEAR"),
          ci("NEXT_FISCAL_YEAR")
        ),

      date_literal_with_param: ($) =>
        seq(
          alias(
            token(
              choice(
                ci("LAST_N_DAYS"),
                ci("NEXT_N_DAYS"),
                ci("N_DAYS_AGO"),
                ci("NEXT_N_WEEKS"),
                ci("LAST_N_WEEKS"),
                ci("N_WEEKS_AGO"),
                ci("NEXT_N_MONTHS"),
                ci("LAST_N_MONTHS"),
                ci("N_MONTHS_AGO"),
                ci("NEXT_N_QUARTERS"),
                ci("LAST_N_QUARTERS"),
                ci("N_QUARTERS_AGO"),
                ci("NEXT_N_YEARS"),
                ci("LAST_N_YEARS"),
                ci("N_YEARS_AGO"),
                ci("NEXT_N_FISCAL_QUARTERS"),
                ci("LAST_N_FISCAL_QUARTERS"),
                ci("N_FISCAL_QUARTERS_AGO"),
                ci("NEXT_N_FISCAL_YEARS"),
                ci("LAST_N_FISCAL_YEARS"),
                ci("N_FISCAL_YEARS_AGO")
              )
            ),
            $.date_literal
          ),
          ":",
          $.int
        ),

      // Not all valid for SOSL
      _function_name: ($) => field("function_name", $.identifier),
      bound_apex_expression: ($) => {
        if (dialect == dialects.APEX) {
          return seq(":", $.expression); // defined in Apex rules
        } else {
          return "**DONOTMATCHEVER**";
        }
      },

      null_literal: ($) => ci("NULL"),

      _soql_literal: ($) =>
        choice(
          $.int,
          $.decimal,
          $.string_literal,
          $.date,
          $.date_time,
          $.boolean,
          $.date_literal,
          $.date_literal_with_param,
          $.currency_literal,
          $.null_literal
        ),

      string_literal: ($) => /'(\\[nNrRtTbBfFuU"'_%\\]|[^\\'])*'/,
      int: ($) => /\d+/,
      decimal: ($) => /-?\d+(\.\d+)?/,
      date: ($) =>
        /[1-4][0-9]{3}-(?:0[1-9]|1[0-2])-(?:[0-2][1-9]|[1-2]0|3[0-1])/,
      date_time: ($) =>
        /[1-4][0-9]{3}-(?:0[1-9]|1[0-2])-(?:[0-2][1-9]|[1-2]0|3[0-1])T([0-1]\d|2[0-3]):[0-5]\d:[0-5]\d(?:\.\d\d?\d?)?(?:Z|[+-][0-1]\d:[0-5]\d)/,
      currency_literal: ($) => /\w{3}\d+(\.\d+)?/,
      identifier: ($) => /[A-Za-z][A-Za-z\d_]*/,
    },
  };
};
