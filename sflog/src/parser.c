#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
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
  sym__anonymous_label = 23,
  sym_apex_code = 24,
  anon_sym_PIPE = 25,
  anon_sym_PIPE_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_PIPE_LPAREN = 28,
  anon_sym_RPAREN_PIPE = 29,
  anon_sym_EXTERNAL = 30,
  aux_sym_limit_token1 = 31,
  anon_sym_COLON = 32,
  anon_sym_outof = 33,
  sym_event_detail_value = 34,
  sym_time = 35,
  anon_sym_LPAREN = 36,
  anon_sym_RPAREN = 37,
  sym_number = 38,
  sym_identifier = 39,
  sym_source_file = 40,
  sym_log_header = 41,
  sym_log_level_settings = 42,
  sym_log_level_setting = 43,
  sym_component = 44,
  sym_log_level = 45,
  sym_anonymous_block = 46,
  sym_log_entry = 47,
  sym_location = 48,
  sym_namespace = 49,
  sym_limit_usage = 50,
  sym_limit = 51,
  sym_event_details = 52,
  sym_event_detail = 53,
  sym_timestamp = 54,
  sym_duration = 55,
  sym_event_identifier = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_log_level_settings_repeat1 = 58,
  aux_sym_anonymous_block_repeat1 = 59,
  aux_sym_limit_usage_repeat1 = 60,
  aux_sym_event_details_repeat1 = 61,
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
  [sym__anonymous_label] = "_anonymous_label",
  [sym_apex_code] = "apex_code",
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
  [sym__anonymous_label] = sym__anonymous_label,
  [sym_apex_code] = sym_apex_code,
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
  [sym__anonymous_label] = {
    .visible = false,
    .named = true,
  },
  [sym_apex_code] = {
    .visible = true,
    .named = true,
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
  [51] = 51,
  [52] = 52,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(134);
      ADVANCE_MAP(
        '(', 178,
        ')', 179,
        ',', 137,
        ':', 172,
        ';', 138,
        'A', 77,
        'C', 15,
        'D', 25,
        'E', 78,
        'F', 49,
        'I', 62,
        'N', 28,
        'S', 100,
        'V', 20,
        'W', 16,
        ']', 163,
        'o', 115,
        '|', 161,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 135,
        ';', 138,
        'A', 77,
        'C', 15,
        'D', 24,
        'N', 27,
        'S', 100,
        'V', 20,
        'W', 19,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(174);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(174);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(130);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(125);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == ':') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(127);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(157);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(128);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'O') ADVANCE(80);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(141);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(108);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(80);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(86);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(91);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(139);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(139);
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(93);
      END_STATE();
    case 27:
      if (lookahead == 'B') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'B') ADVANCE(17);
      if (lookahead == 'O') ADVANCE(67);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead == 'P') ADVANCE(85);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(154);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(148);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 42:
      if (lookahead == 'F') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'F') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'F') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 'F') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'G') ADVANCE(153);
      END_STATE();
    case 47:
      if (lookahead == 'G') ADVANCE(145);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 53:
      if (lookahead == 'K') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'L') ADVANCE(166);
      END_STATE();
    case 55:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == 'L') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead == 'L') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'L') ADVANCE(50);
      END_STATE();
    case 60:
      if (lookahead == 'L') ADVANCE(44);
      END_STATE();
    case 61:
      if (lookahead == 'M') ADVANCE(147);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(151);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(142);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 69:
      if (lookahead == 'O') ADVANCE(152);
      END_STATE();
    case 70:
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 71:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 72:
      if (lookahead == 'O') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 75:
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 76:
      if (lookahead == 'O') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'P') ADVANCE(33);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(79);
      if (lookahead == 'X') ADVANCE(90);
      if (lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(53);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(150);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(30);
      END_STATE();
    case 83:
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'V') ADVANCE(36);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 86:
      if (lookahead == 'S') ADVANCE(95);
      END_STATE();
    case 87:
      if (lookahead == 'S') ADVANCE(92);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(156);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(143);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 91:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 92:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 93:
      if (lookahead == 'U') ADVANCE(46);
      END_STATE();
    case 94:
      if (lookahead == 'U') ADVANCE(89);
      END_STATE();
    case 95:
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 96:
      if (lookahead == 'V') ADVANCE(36);
      END_STATE();
    case 97:
      if (lookahead == 'W') ADVANCE(140);
      END_STATE();
    case 98:
      if (lookahead == 'X') ADVANCE(90);
      END_STATE();
    case 99:
      if (lookahead == 'X') ADVANCE(101);
      END_STATE();
    case 100:
      if (lookahead == 'Y') ADVANCE(87);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(29);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(173);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 118:
      if (lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 119:
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 120:
      if (lookahead == '|') ADVANCE(165);
      END_STATE();
    case 121:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(171);
      END_STATE();
    case 122:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 130:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(174);
      END_STATE();
    case 131:
      if (eof) ADVANCE(134);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == '|') ADVANCE(160);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 132:
      if (eof) ADVANCE(134);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == '|') ADVANCE(161);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 133:
      if (eof) ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(171);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DB);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_WORKFLOW);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_NBA);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_VALIDATION);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_CALLOUT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_APEX_CODE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_APEX_PROFILING);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_VISUALFORCE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_WAVE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_WARN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_FINE);
      if (lookahead == 'R') ADVANCE(155);
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_FINER);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_FINEST);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__anonymous_label);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_apex_code);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_apex_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == '[') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PIPE_LBRACK);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PIPE_LPAREN);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RPAREN_PIPE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_EXTERNAL);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_limit_token1);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_limit_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_limit_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_limit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_limit_token1);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_outof);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_event_detail_value);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 132},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 132},
  [10] = {.lex_state = 132},
  [11] = {.lex_state = 131},
  [12] = {.lex_state = 133},
  [13] = {.lex_state = 132},
  [14] = {.lex_state = 132},
  [15] = {.lex_state = 132},
  [16] = {.lex_state = 133},
  [17] = {.lex_state = 131},
  [18] = {.lex_state = 131},
  [19] = {.lex_state = 132},
  [20] = {.lex_state = 132},
  [21] = {.lex_state = 132},
  [22] = {.lex_state = 132},
  [23] = {.lex_state = 121},
  [24] = {.lex_state = 131},
  [25] = {.lex_state = 133},
  [26] = {.lex_state = 132},
  [27] = {.lex_state = 132},
  [28] = {.lex_state = 131},
  [29] = {.lex_state = 40},
  [30] = {.lex_state = 122},
  [31] = {.lex_state = 132},
  [32] = {.lex_state = 132},
  [33] = {.lex_state = 122},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 131},
  [36] = {.lex_state = 131},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 40},
  [39] = {.lex_state = 132},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 132},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 131},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 40},
  [52] = {.lex_state = 0},
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
    [sym__anonymous_label] = ACTIONS(1),
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
    [sym_source_file] = STATE(45),
    [sym_log_header] = STATE(9),
    [sym_version] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(34), 1,
      sym_component,
    STATE(47), 1,
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
    STATE(34), 1,
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
    STATE(34), 1,
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
      sym__anonymous_label,
    ACTIONS(38), 1,
      sym_time,
    STATE(14), 1,
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
    STATE(32), 1,
      sym_event_details,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      sym_time,
    STATE(17), 2,
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
    STATE(17), 2,
      sym_event_detail,
      aux_sym_event_details_repeat1,
  [196] = 4,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      aux_sym_limit_token1,
    ACTIONS(56), 1,
      sym_time,
    STATE(16), 2,
      sym_limit,
      aux_sym_limit_usage_repeat1,
  [210] = 4,
    ACTIONS(38), 1,
      sym_time,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_timestamp,
    STATE(20), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [224] = 4,
    ACTIONS(38), 1,
      sym_time,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_timestamp,
    STATE(19), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [238] = 2,
    ACTIONS(62), 1,
      anon_sym_PIPE,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE_LBRACK,
      anon_sym_PIPE_LPAREN,
      sym_time,
  [248] = 4,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      aux_sym_limit_token1,
    ACTIONS(69), 1,
      sym_time,
    STATE(16), 2,
      sym_limit,
      aux_sym_limit_usage_repeat1,
  [262] = 3,
    ACTIONS(50), 1,
      anon_sym_PIPE,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_time,
    STATE(18), 2,
      sym_event_detail,
      aux_sym_event_details_repeat1,
  [274] = 3,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_time,
    STATE(18), 2,
      sym_event_detail,
      aux_sym_event_details_repeat1,
  [286] = 4,
    ACTIONS(38), 1,
      sym_time,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_timestamp,
    STATE(20), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [300] = 4,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      sym_time,
    STATE(35), 1,
      sym_timestamp,
    STATE(20), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [314] = 3,
    ACTIONS(36), 1,
      sym__anonymous_label,
    STATE(22), 1,
      aux_sym_anonymous_block_repeat1,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_time,
  [325] = 3,
    ACTIONS(89), 1,
      sym__anonymous_label,
    STATE(22), 1,
      aux_sym_anonymous_block_repeat1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_time,
  [336] = 3,
    ACTIONS(92), 1,
      aux_sym_limit_token1,
    STATE(31), 1,
      sym_limit_usage,
    STATE(12), 2,
      sym_limit,
      aux_sym_limit_usage_repeat1,
  [347] = 3,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_duration,
  [357] = 2,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 2,
      aux_sym_limit_token1,
      sym_time,
  [365] = 1,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      sym__anonymous_label,
      sym_time,
  [371] = 1,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      sym__anonymous_label,
      sym_time,
  [377] = 1,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_time,
  [383] = 2,
    STATE(43), 1,
      sym_location,
    ACTIONS(106), 2,
      anon_sym_EXTERNAL,
      sym_number,
  [391] = 2,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(41), 1,
      sym_namespace,
  [398] = 1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_time,
  [403] = 1,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_time,
  [408] = 2,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(10), 1,
      sym_event_identifier,
  [415] = 1,
    ACTIONS(116), 1,
      anon_sym_COMMA,
  [419] = 1,
    ACTIONS(118), 1,
      anon_sym_PIPE,
  [423] = 1,
    ACTIONS(120), 1,
      anon_sym_PIPE,
  [427] = 1,
    ACTIONS(122), 1,
      sym_event_detail_value,
  [431] = 1,
    ACTIONS(124), 1,
      sym_number,
  [435] = 1,
    ACTIONS(126), 1,
      anon_sym_RPAREN_PIPE,
  [439] = 1,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
  [443] = 1,
    ACTIONS(130), 1,
      anon_sym_RPAREN_PIPE,
  [447] = 1,
    ACTIONS(132), 1,
      sym_apex_code,
  [451] = 1,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
  [455] = 1,
    ACTIONS(136), 1,
      anon_sym_PIPE,
  [459] = 1,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
  [463] = 1,
    ACTIONS(140), 1,
      anon_sym_COLON,
  [467] = 1,
    ACTIONS(142), 1,
      anon_sym_LF,
  [471] = 1,
    ACTIONS(144), 1,
      sym_number,
  [475] = 1,
    ACTIONS(146), 1,
      anon_sym_COMMA,
  [479] = 1,
    ACTIONS(148), 1,
      anon_sym_outof,
  [483] = 1,
    ACTIONS(150), 1,
      sym_number,
  [487] = 1,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
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
  [SMALL_STATE(16)] = 248,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 274,
  [SMALL_STATE(19)] = 286,
  [SMALL_STATE(20)] = 300,
  [SMALL_STATE(21)] = 314,
  [SMALL_STATE(22)] = 325,
  [SMALL_STATE(23)] = 336,
  [SMALL_STATE(24)] = 347,
  [SMALL_STATE(25)] = 357,
  [SMALL_STATE(26)] = 365,
  [SMALL_STATE(27)] = 371,
  [SMALL_STATE(28)] = 377,
  [SMALL_STATE(29)] = 383,
  [SMALL_STATE(30)] = 391,
  [SMALL_STATE(31)] = 398,
  [SMALL_STATE(32)] = 403,
  [SMALL_STATE(33)] = 408,
  [SMALL_STATE(34)] = 415,
  [SMALL_STATE(35)] = 419,
  [SMALL_STATE(36)] = 423,
  [SMALL_STATE(37)] = 427,
  [SMALL_STATE(38)] = 431,
  [SMALL_STATE(39)] = 435,
  [SMALL_STATE(40)] = 439,
  [SMALL_STATE(41)] = 443,
  [SMALL_STATE(42)] = 447,
  [SMALL_STATE(43)] = 451,
  [SMALL_STATE(44)] = 455,
  [SMALL_STATE(45)] = 459,
  [SMALL_STATE(46)] = 463,
  [SMALL_STATE(47)] = 467,
  [SMALL_STATE(48)] = 471,
  [SMALL_STATE(49)] = 475,
  [SMALL_STATE(50)] = 479,
  [SMALL_STATE(51)] = 483,
  [SMALL_STATE(52)] = 487,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 2, 0, 0),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_level_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level_settings, 1, 0, 0),
  [14] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
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
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 6, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_usage, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit_usage, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_identifier, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_identifier, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_limit_usage_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_limit_usage_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_limit_usage_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_details, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_details_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_details_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_block, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_anonymous_block_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_anonymous_block_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 5, 0, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit, 5, 0, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_header, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_detail, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 7, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
