#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_version = 2,
  anon_sym_COMMA = 3,
  anon_sym_SEMI = 4,
  anon_sym_DB = 5,
  anon_sym_WORKFLOW = 6,
  anon_sym_NBA = 7,
  anon_sym_VALIDATION = 8,
  anon_sym_CALLOUT = 9,
  anon_sym_APEX_CODE = 10,
  anon_sym_APEX_PROFILING = 11,
  anon_sym_VISUALFORCE = 12,
  anon_sym_SYSTEM = 13,
  anon_sym_WAVE = 14,
  anon_sym_NONE = 15,
  anon_sym_ERROR = 16,
  anon_sym_WARN = 17,
  anon_sym_INFO = 18,
  anon_sym_DEBUG = 19,
  anon_sym_FINE = 20,
  anon_sym_FINER = 21,
  anon_sym_FINEST = 22,
  aux_sym_anonymous_block_token1 = 23,
  anon_sym_PIPE = 24,
  anon_sym_PIPE_LBRACK = 25,
  anon_sym_RBRACK = 26,
  anon_sym_PIPE_LPAREN = 27,
  anon_sym_RPAREN_PIPE = 28,
  anon_sym_EXTERNAL = 29,
  aux_sym_limit_token1 = 30,
  anon_sym_COLON = 31,
  anon_sym_outof = 32,
  sym_event_detail_value = 33,
  sym_time = 34,
  anon_sym_LPAREN = 35,
  anon_sym_RPAREN = 36,
  sym_number = 37,
  sym_identifier = 38,
  sym_source_file = 39,
  sym_log_header = 40,
  sym_log_level_settings = 41,
  sym_log_level_setting = 42,
  sym_component = 43,
  sym_log_level = 44,
  sym_anonymous_block = 45,
  sym_log_entry = 46,
  sym_location = 47,
  sym_namespace = 48,
  sym_limit_usage = 49,
  sym_limit = 50,
  sym_event_details = 51,
  sym_event_detail = 52,
  sym_timestamp = 53,
  sym_duration = 54,
  sym_event_identifier = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_log_level_settings_repeat1 = 57,
  aux_sym_anonymous_block_repeat1 = 58,
  aux_sym_limit_usage_repeat1 = 59,
  aux_sym_event_details_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_version] = "version",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_DB] = "DB",
  [anon_sym_WORKFLOW] = "WORKFLOW",
  [anon_sym_NBA] = "NBA",
  [anon_sym_VALIDATION] = "VALIDATION",
  [anon_sym_CALLOUT] = "CALLOUT",
  [anon_sym_APEX_CODE] = "APEX_CODE",
  [anon_sym_APEX_PROFILING] = "APEX_PROFILING",
  [anon_sym_VISUALFORCE] = "VISUALFORCE",
  [anon_sym_SYSTEM] = "SYSTEM",
  [anon_sym_WAVE] = "WAVE",
  [anon_sym_NONE] = "NONE",
  [anon_sym_ERROR] = "ERROR",
  [anon_sym_WARN] = "WARN",
  [anon_sym_INFO] = "INFO",
  [anon_sym_DEBUG] = "DEBUG",
  [anon_sym_FINE] = "FINE",
  [anon_sym_FINER] = "FINER",
  [anon_sym_FINEST] = "FINEST",
  [aux_sym_anonymous_block_token1] = "anonymous_block_token1",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE_LBRACK] = "|[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PIPE_LPAREN] = "|(",
  [anon_sym_RPAREN_PIPE] = ")|",
  [anon_sym_EXTERNAL] = "EXTERNAL",
  [aux_sym_limit_token1] = "identifier",
  [anon_sym_COLON] = ":",
  [anon_sym_outof] = "out of",
  [sym_event_detail_value] = "event_detail_value",
  [sym_time] = "time",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_log_header] = "log_header",
  [sym_log_level_settings] = "log_level_settings",
  [sym_log_level_setting] = "log_level_setting",
  [sym_component] = "component",
  [sym_log_level] = "log_level",
  [sym_anonymous_block] = "anonymous_block",
  [sym_log_entry] = "log_entry",
  [sym_location] = "location",
  [sym_namespace] = "namespace",
  [sym_limit_usage] = "limit_usage",
  [sym_limit] = "limit",
  [sym_event_details] = "event_details",
  [sym_event_detail] = "event_detail",
  [sym_timestamp] = "timestamp",
  [sym_duration] = "duration",
  [sym_event_identifier] = "event_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_log_level_settings_repeat1] = "log_level_settings_repeat1",
  [aux_sym_anonymous_block_repeat1] = "anonymous_block_repeat1",
  [aux_sym_limit_usage_repeat1] = "limit_usage_repeat1",
  [aux_sym_event_details_repeat1] = "event_details_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_version] = sym_version,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DB] = anon_sym_DB,
  [anon_sym_WORKFLOW] = anon_sym_WORKFLOW,
  [anon_sym_NBA] = anon_sym_NBA,
  [anon_sym_VALIDATION] = anon_sym_VALIDATION,
  [anon_sym_CALLOUT] = anon_sym_CALLOUT,
  [anon_sym_APEX_CODE] = anon_sym_APEX_CODE,
  [anon_sym_APEX_PROFILING] = anon_sym_APEX_PROFILING,
  [anon_sym_VISUALFORCE] = anon_sym_VISUALFORCE,
  [anon_sym_SYSTEM] = anon_sym_SYSTEM,
  [anon_sym_WAVE] = anon_sym_WAVE,
  [anon_sym_NONE] = anon_sym_NONE,
  [anon_sym_ERROR] = anon_sym_ERROR,
  [anon_sym_WARN] = anon_sym_WARN,
  [anon_sym_INFO] = anon_sym_INFO,
  [anon_sym_DEBUG] = anon_sym_DEBUG,
  [anon_sym_FINE] = anon_sym_FINE,
  [anon_sym_FINER] = anon_sym_FINER,
  [anon_sym_FINEST] = anon_sym_FINEST,
  [aux_sym_anonymous_block_token1] = aux_sym_anonymous_block_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PIPE_LBRACK] = anon_sym_PIPE_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PIPE_LPAREN] = anon_sym_PIPE_LPAREN,
  [anon_sym_RPAREN_PIPE] = anon_sym_RPAREN_PIPE,
  [anon_sym_EXTERNAL] = anon_sym_EXTERNAL,
  [aux_sym_limit_token1] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_outof] = anon_sym_outof,
  [sym_event_detail_value] = sym_event_detail_value,
  [sym_time] = sym_time,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_log_header] = sym_log_header,
  [sym_log_level_settings] = sym_log_level_settings,
  [sym_log_level_setting] = sym_log_level_setting,
  [sym_component] = sym_component,
  [sym_log_level] = sym_log_level,
  [sym_anonymous_block] = sym_anonymous_block,
  [sym_log_entry] = sym_log_entry,
  [sym_location] = sym_location,
  [sym_namespace] = sym_namespace,
  [sym_limit_usage] = sym_limit_usage,
  [sym_limit] = sym_limit,
  [sym_event_details] = sym_event_details,
  [sym_event_detail] = sym_event_detail,
  [sym_timestamp] = sym_timestamp,
  [sym_duration] = sym_duration,
  [sym_event_identifier] = sym_event_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_log_level_settings_repeat1] = aux_sym_log_level_settings_repeat1,
  [aux_sym_anonymous_block_repeat1] = aux_sym_anonymous_block_repeat1,
  [aux_sym_limit_usage_repeat1] = aux_sym_limit_usage_repeat1,
  [aux_sym_event_details_repeat1] = aux_sym_event_details_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WORKFLOW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NBA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VALIDATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CALLOUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_APEX_CODE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_APEX_PROFILING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VISUALFORCE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYSTEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WAVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ERROR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WARN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEBUG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FINER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FINEST] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_anonymous_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXTERNAL] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_limit_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outof] = {
    .visible = true,
    .named = false,
  },
  [sym_event_detail_value] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
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
  [sym_log_header] = {
    .visible = true,
    .named = true,
  },
  [sym_log_level_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_log_level_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_log_level] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_block] = {
    .visible = true,
    .named = true,
  },
  [sym_log_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_location] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_usage] = {
    .visible = true,
    .named = true,
  },
  [sym_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_event_details] = {
    .visible = true,
    .named = true,
  },
  [sym_event_detail] = {
    .visible = true,
    .named = true,
  },
  [sym_timestamp] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_event_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_log_level_settings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_anonymous_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_limit_usage_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_event_details_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_available = 1,
  field_consumed = 2,
  field_name = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_available] = "available",
  [field_consumed] = "consumed",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_available, 4},
    {field_consumed, 2},
    {field_name, 0},
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
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
  [24] = 24,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(129);
      ADVANCE_MAP(
        '(', 175,
        ')', 176,
        ',', 132,
        ':', 166,
        ';', 133,
        'A', 85,
        'C', 24,
        'D', 33,
        'E', 86,
        'F', 57,
        'I', 70,
        'N', 36,
        'S', 108,
        'V', 28,
        'W', 25,
        ']', 157,
        'o', 113,
        '|', 155,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 130,
        ';', 133,
        'A', 85,
        'C', 24,
        'D', 32,
        'N', 35,
        'S', 108,
        'V', 28,
        'W', 27,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == ':') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(168);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == ':') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == ':') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(168);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(124);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(119);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == ':') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(121);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(122);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(88);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(104);
      if (lookahead == 'O') ADVANCE(88);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(63);
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(134);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(101);
      END_STATE();
    case 35:
      if (lookahead == 'B') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'B') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(79);
      if (lookahead == 'P') ADVANCE(93);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(107);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(143);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 50:
      if (lookahead == 'F') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'F') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'F') ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == 'F') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'G') ADVANCE(148);
      END_STATE();
    case 55:
      if (lookahead == 'G') ADVANCE(140);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(39);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'K') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == 'L') ADVANCE(160);
      END_STATE();
    case 63:
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 64:
      if (lookahead == 'L') ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(78);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 69:
      if (lookahead == 'M') ADVANCE(142);
      END_STATE();
    case 70:
      if (lookahead == 'N') ADVANCE(50);
      END_STATE();
    case 71:
      if (lookahead == 'N') ADVANCE(146);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(137);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 77:
      if (lookahead == 'O') ADVANCE(147);
      END_STATE();
    case 78:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 80:
      if (lookahead == 'O') ADVANCE(89);
      END_STATE();
    case 81:
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 83:
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 84:
      if (lookahead == 'O') ADVANCE(90);
      END_STATE();
    case 85:
      if (lookahead == 'P') ADVANCE(41);
      END_STATE();
    case 86:
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'X') ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == 'R') ADVANCE(80);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(145);
      END_STATE();
    case 90:
      if (lookahead == 'R') ADVANCE(38);
      END_STATE();
    case 91:
      if (lookahead == 'R') ADVANCE(71);
      if (lookahead == 'V') ADVANCE(44);
      END_STATE();
    case 92:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(81);
      END_STATE();
    case 94:
      if (lookahead == 'S') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'S') ADVANCE(100);
      END_STATE();
    case 96:
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 97:
      if (lookahead == 'T') ADVANCE(138);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 101:
      if (lookahead == 'U') ADVANCE(54);
      END_STATE();
    case 102:
      if (lookahead == 'U') ADVANCE(97);
      END_STATE();
    case 103:
      if (lookahead == 'U') ADVANCE(29);
      END_STATE();
    case 104:
      if (lookahead == 'V') ADVANCE(44);
      END_STATE();
    case 105:
      if (lookahead == 'W') ADVANCE(135);
      END_STATE();
    case 106:
      if (lookahead == 'X') ADVANCE(98);
      END_STATE();
    case 107:
      if (lookahead == 'X') ADVANCE(109);
      END_STATE();
    case 108:
      if (lookahead == 'Y') ADVANCE(95);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(167);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == '|') ADVANCE(159);
      END_STATE();
    case 115:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(165);
      END_STATE();
    case 116:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 124:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(168);
      END_STATE();
    case 125:
      if (eof) ADVANCE(129);
      if (lookahead == '\n') SKIP(125);
      if (lookahead == ':') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 126:
      if (eof) ADVANCE(129);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '|') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 127:
      if (eof) ADVANCE(129);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '|') ADVANCE(155);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 128:
      if (eof) ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(165);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DB);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_WORKFLOW);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_NBA);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_VALIDATION);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_CALLOUT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_APEX_CODE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_APEX_PROFILING);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_VISUALFORCE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_WAVE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_WARN);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_FINE);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'S') ADVANCE(96);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_FINER);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_FINEST);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_anonymous_block_token1);
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == ':') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_anonymous_block_token1);
      if (lookahead == ':') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == '[') ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PIPE_LBRACK);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PIPE_LPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RPAREN_PIPE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_EXTERNAL);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_limit_token1);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_limit_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_limit_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_limit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_limit_token1);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_outof);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_event_detail_value);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 127},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 125},
  [10] = {.lex_state = 127},
  [11] = {.lex_state = 126},
  [12] = {.lex_state = 128},
  [13] = {.lex_state = 127},
  [14] = {.lex_state = 128},
  [15] = {.lex_state = 127},
  [16] = {.lex_state = 126},
  [17] = {.lex_state = 127},
  [18] = {.lex_state = 126},
  [19] = {.lex_state = 127},
  [20] = {.lex_state = 127},
  [21] = {.lex_state = 125},
  [22] = {.lex_state = 125},
  [23] = {.lex_state = 115},
  [24] = {.lex_state = 128},
  [25] = {.lex_state = 125},
  [26] = {.lex_state = 126},
  [27] = {.lex_state = 126},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 127},
  [30] = {.lex_state = 116},
  [31] = {.lex_state = 127},
  [32] = {.lex_state = 116},
  [33] = {.lex_state = 126},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 126},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 127},
  [39] = {.lex_state = 127},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 126},
  [43] = {.lex_state = 48},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 48},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 48},
  [50] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DB] = ACTIONS(1),
    [anon_sym_WORKFLOW] = ACTIONS(1),
    [anon_sym_NBA] = ACTIONS(1),
    [anon_sym_VALIDATION] = ACTIONS(1),
    [anon_sym_CALLOUT] = ACTIONS(1),
    [anon_sym_APEX_CODE] = ACTIONS(1),
    [anon_sym_APEX_PROFILING] = ACTIONS(1),
    [anon_sym_VISUALFORCE] = ACTIONS(1),
    [anon_sym_SYSTEM] = ACTIONS(1),
    [anon_sym_WAVE] = ACTIONS(1),
    [anon_sym_NONE] = ACTIONS(1),
    [anon_sym_ERROR] = ACTIONS(1),
    [anon_sym_WARN] = ACTIONS(1),
    [anon_sym_INFO] = ACTIONS(1),
    [anon_sym_DEBUG] = ACTIONS(1),
    [anon_sym_FINE] = ACTIONS(1),
    [anon_sym_FINER] = ACTIONS(1),
    [anon_sym_FINEST] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE_LPAREN] = ACTIONS(1),
    [anon_sym_EXTERNAL] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_outof] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym_log_header] = STATE(9),
    [sym_version] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(41), 1,
      sym_component,
    STATE(45), 1,
      sym_log_level_settings,
    STATE(4), 2,
      sym_log_level_setting,
      aux_sym_log_level_settings_repeat1,
    ACTIONS(5), 10,
      anon_sym_DB,
      anon_sym_WORKFLOW,
      anon_sym_NBA,
      anon_sym_VALIDATION,
      anon_sym_CALLOUT,
      anon_sym_APEX_CODE,
      anon_sym_APEX_PROFILING,
      anon_sym_VISUALFORCE,
      anon_sym_SYSTEM,
      anon_sym_WAVE,
  [23] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    STATE(41), 1,
      sym_component,
    STATE(3), 2,
      sym_log_level_setting,
      aux_sym_log_level_settings_repeat1,
    ACTIONS(9), 10,
      anon_sym_DB,
      anon_sym_WORKFLOW,
      anon_sym_NBA,
      anon_sym_VALIDATION,
      anon_sym_CALLOUT,
      anon_sym_APEX_CODE,
      anon_sym_APEX_PROFILING,
      anon_sym_VISUALFORCE,
      anon_sym_SYSTEM,
      anon_sym_WAVE,
  [46] = 4,
    ACTIONS(12), 1,
      anon_sym_LF,
    STATE(41), 1,
      sym_component,
    STATE(3), 2,
      sym_log_level_setting,
      aux_sym_log_level_settings_repeat1,
    ACTIONS(14), 10,
      anon_sym_DB,
      anon_sym_WORKFLOW,
      anon_sym_NBA,
      anon_sym_VALIDATION,
      anon_sym_CALLOUT,
      anon_sym_APEX_CODE,
      anon_sym_APEX_PROFILING,
      anon_sym_VISUALFORCE,
      anon_sym_SYSTEM,
      anon_sym_WAVE,
  [69] = 2,
    ACTIONS(16), 1,
      anon_sym_LF,
    ACTIONS(18), 11,
      anon_sym_SEMI,
      anon_sym_DB,
      anon_sym_WORKFLOW,
      anon_sym_NBA,
      anon_sym_VALIDATION,
      anon_sym_CALLOUT,
      anon_sym_APEX_CODE,
      anon_sym_APEX_PROFILING,
      anon_sym_VISUALFORCE,
      anon_sym_SYSTEM,
      anon_sym_WAVE,
  [86] = 3,
    ACTIONS(20), 1,
      anon_sym_LF,
    ACTIONS(22), 1,
      anon_sym_SEMI,
    ACTIONS(24), 10,
      anon_sym_DB,
      anon_sym_WORKFLOW,
      anon_sym_NBA,
      anon_sym_VALIDATION,
      anon_sym_CALLOUT,
      anon_sym_APEX_CODE,
      anon_sym_APEX_PROFILING,
      anon_sym_VISUALFORCE,
      anon_sym_SYSTEM,
      anon_sym_WAVE,
  [105] = 2,
    ACTIONS(26), 1,
      anon_sym_LF,
    ACTIONS(28), 10,
      anon_sym_DB,
      anon_sym_WORKFLOW,
      anon_sym_NBA,
      anon_sym_VALIDATION,
      anon_sym_CALLOUT,
      anon_sym_APEX_CODE,
      anon_sym_APEX_PROFILING,
      anon_sym_VISUALFORCE,
      anon_sym_SYSTEM,
      anon_sym_WAVE,
  [121] = 3,
    ACTIONS(32), 1,
      anon_sym_FINE,
    STATE(6), 1,
      sym_log_level,
    ACTIONS(30), 7,
      anon_sym_NONE,
      anon_sym_ERROR,
      anon_sym_WARN,
      anon_sym_INFO,
      anon_sym_DEBUG,
      anon_sym_FINER,
      anon_sym_FINEST,
  [137] = 7,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      aux_sym_anonymous_block_token1,
    ACTIONS(38), 1,
      sym_time,
    STATE(15), 1,
      sym_anonymous_block,
    STATE(21), 1,
      aux_sym_anonymous_block_repeat1,
    STATE(35), 1,
      sym_timestamp,
    STATE(13), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [160] = 6,
    ACTIONS(42), 1,
      anon_sym_PIPE,
    ACTIONS(44), 1,
      anon_sym_PIPE_LBRACK,
    ACTIONS(46), 1,
      anon_sym_PIPE_LPAREN,
    STATE(29), 1,
      sym_event_details,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      sym_time,
    STATE(16), 2,
      sym_event_detail,
      aux_sym_event_details_repeat1,
  [181] = 4,
    ACTIONS(50), 1,
      anon_sym_PIPE,
    STATE(31), 1,
      sym_event_details,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_time,
    STATE(16), 2,
      sym_event_detail,
      aux_sym_event_details_repeat1,
  [196] = 4,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      aux_sym_limit_token1,
    ACTIONS(56), 1,
      sym_time,
    STATE(14), 2,
      sym_limit,
      aux_sym_limit_usage_repeat1,
  [210] = 4,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      sym_time,
    STATE(35), 1,
      sym_timestamp,
    STATE(20), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [224] = 4,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      aux_sym_limit_token1,
    ACTIONS(67), 1,
      sym_time,
    STATE(14), 2,
      sym_limit,
      aux_sym_limit_usage_repeat1,
  [238] = 4,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      sym_time,
    STATE(35), 1,
      sym_timestamp,
    STATE(19), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [252] = 3,
    ACTIONS(50), 1,
      anon_sym_PIPE,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_time,
    STATE(18), 2,
      sym_event_detail,
      aux_sym_event_details_repeat1,
  [264] = 2,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE_LBRACK,
      anon_sym_PIPE_LPAREN,
      sym_time,
  [274] = 3,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_time,
    STATE(18), 2,
      sym_event_detail,
      aux_sym_event_details_repeat1,
  [286] = 4,
    ACTIONS(60), 1,
      sym_time,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_timestamp,
    STATE(20), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [300] = 4,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      sym_time,
    STATE(35), 1,
      sym_timestamp,
    STATE(20), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [314] = 4,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      aux_sym_anonymous_block_token1,
    ACTIONS(91), 1,
      sym_time,
    STATE(22), 1,
      aux_sym_anonymous_block_repeat1,
  [327] = 4,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      aux_sym_anonymous_block_token1,
    ACTIONS(98), 1,
      sym_time,
    STATE(22), 1,
      aux_sym_anonymous_block_repeat1,
  [340] = 3,
    ACTIONS(100), 1,
      aux_sym_limit_token1,
    STATE(31), 1,
      sym_limit_usage,
    STATE(12), 2,
      sym_limit,
      aux_sym_limit_usage_repeat1,
  [351] = 2,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 2,
      aux_sym_limit_token1,
      sym_time,
  [359] = 2,
    ACTIONS(108), 1,
      sym_time,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      aux_sym_anonymous_block_token1,
  [367] = 3,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_duration,
  [377] = 1,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_time,
  [383] = 2,
    STATE(37), 1,
      sym_location,
    ACTIONS(116), 2,
      anon_sym_EXTERNAL,
      sym_number,
  [391] = 1,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      sym_time,
  [396] = 2,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(10), 1,
      sym_event_identifier,
  [403] = 1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_time,
  [408] = 2,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(39), 1,
      sym_namespace,
  [415] = 1,
    ACTIONS(126), 1,
      anon_sym_PIPE,
  [419] = 1,
    ACTIONS(128), 1,
      sym_event_detail_value,
  [423] = 1,
    ACTIONS(130), 1,
      anon_sym_PIPE,
  [427] = 1,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
  [431] = 1,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
  [435] = 1,
    ACTIONS(136), 1,
      anon_sym_RPAREN_PIPE,
  [439] = 1,
    ACTIONS(138), 1,
      anon_sym_RPAREN_PIPE,
  [443] = 1,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
  [447] = 1,
    ACTIONS(142), 1,
      anon_sym_COMMA,
  [451] = 1,
    ACTIONS(144), 1,
      anon_sym_PIPE,
  [455] = 1,
    ACTIONS(146), 1,
      sym_number,
  [459] = 1,
    ACTIONS(148), 1,
      anon_sym_COLON,
  [463] = 1,
    ACTIONS(150), 1,
      anon_sym_LF,
  [467] = 1,
    ACTIONS(152), 1,
      sym_number,
  [471] = 1,
    ACTIONS(154), 1,
      anon_sym_COMMA,
  [475] = 1,
    ACTIONS(156), 1,
      anon_sym_outof,
  [479] = 1,
    ACTIONS(158), 1,
      sym_number,
  [483] = 1,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 105,
  [SMALL_STATE(8)] = 121,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 181,
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 224,
  [SMALL_STATE(15)] = 238,
  [SMALL_STATE(16)] = 252,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 274,
  [SMALL_STATE(19)] = 286,
  [SMALL_STATE(20)] = 300,
  [SMALL_STATE(21)] = 314,
  [SMALL_STATE(22)] = 327,
  [SMALL_STATE(23)] = 340,
  [SMALL_STATE(24)] = 351,
  [SMALL_STATE(25)] = 359,
  [SMALL_STATE(26)] = 367,
  [SMALL_STATE(27)] = 377,
  [SMALL_STATE(28)] = 383,
  [SMALL_STATE(29)] = 391,
  [SMALL_STATE(30)] = 396,
  [SMALL_STATE(31)] = 403,
  [SMALL_STATE(32)] = 408,
  [SMALL_STATE(33)] = 415,
  [SMALL_STATE(34)] = 419,
  [SMALL_STATE(35)] = 423,
  [SMALL_STATE(36)] = 427,
  [SMALL_STATE(37)] = 431,
  [SMALL_STATE(38)] = 435,
  [SMALL_STATE(39)] = 439,
  [SMALL_STATE(40)] = 443,
  [SMALL_STATE(41)] = 447,
  [SMALL_STATE(42)] = 451,
  [SMALL_STATE(43)] = 455,
  [SMALL_STATE(44)] = 459,
  [SMALL_STATE(45)] = 463,
  [SMALL_STATE(46)] = 467,
  [SMALL_STATE(47)] = 471,
  [SMALL_STATE(48)] = 475,
  [SMALL_STATE(49)] = 479,
  [SMALL_STATE(50)] = 483,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 2, 0, 0),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_level_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level_settings, 1, 0, 0),
  [14] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level, 1, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_level, 1, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level_setting, 3, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_level_setting, 3, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level_setting, 4, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_level_setting, 4, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 6, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_usage, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit_usage, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_limit_usage_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_limit_usage_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_limit_usage_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_details, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_identifier, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_identifier, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_details_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_details_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_block, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_block, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_anonymous_block_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_anonymous_block_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_anonymous_block_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 5, 0, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit, 5, 0, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_header, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_header, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_detail, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 7, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [160] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_sflog(void) {
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
