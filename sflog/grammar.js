module.exports = grammar({
  name: "sflog",
  rules: {
    source_file: ($) =>
      seq($.log_header, optional($.anonymous_block), repeat($.log_entry)),

    log_header: ($) => seq($.version, $.log_level_settings, "\n"),

    version: ($) => /\d+\.\d+/,

    log_level_settings: ($) => repeat1($.log_level_setting),

    log_level_setting: ($) => seq($.component, ",", $.log_level, optional(";")),

    component: ($) =>
      choice(
        "DB",
        "WORKFLOW",
        "NBA",
        "VALIDATION",
        "CALLOUT",
        "APEX_CODE",
        "APEX_PROFILING",
        "VISUALFORCE",
        "SYSTEM",
        "WAVE",
      ),

    log_level: ($) =>
      choice(
        "NONE",
        "ERROR",
        "WARN",
        "INFO",
        "DEBUG",
        "FINE",
        "FINER",
        "FINEST",
      ),

    anonymous_block: ($) => repeat1(/[^\n]*: [^\n]*/),

    log_entry: ($) =>
      seq(
        $.timestamp,
        "|",
        $.event_identifier,
        optional(
          choice(
            seq(seq("|[", $.location, "]"), optional($.event_details)),
            seq("|(", $.namespace, ")|", $.limit_usage),
            $.event_details,
          ),
        ),
      ),

    location: ($) => choice($.number, "EXTERNAL"),
    namespace: ($) => $.identifier,
    limit_usage: ($) => repeat1($.limit),
    limit: ($) =>
      seq(
        field("name", alias(/[^:]+/, $.identifier)),
        ":",
        field("consumed", $.number),
        "out of",
        field("available", $.number),
      ),
    event_details: ($) => repeat1($.event_detail),
    event_detail: ($) => seq("|", $.event_detail_value),

    // TODO: this will need some handling for "|" in strings and other possible pattern breakers, this is the wild stuff
    event_detail_value: ($) =>
      token.immediate(repeat1(/(\n(  |[^\d]))?[^\n|]+/)),

    timestamp: ($) => seq($.time, optional($.duration)),

    time: ($) => /\d{2}:\d{2}:\d{2}\.\d{1,3}/,

    duration: ($) => seq("(", $.number, ")"),

    event_identifier: ($) => $.identifier,

    number: ($) => /\d+/,

    identifier: ($) => /\w+/,
  },
});
