#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_LBRACE = 3,
  anon_sym_COMMA = 4,
  anon_sym_RBRACE = 5,
  anon_sym_COLON = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_content_token1 = 10,
  sym_escape_sequence = 11,
  sym_raw_string = 12,
  sym_number = 13,
  sym_true = 14,
  sym_false = 15,
  sym_null = 16,
  sym_comment = 17,
  sym_document = 18,
  sym__statement = 19,
  sym__value = 20,
  sym_object = 21,
  sym_pair = 22,
  sym_array = 23,
  sym_string = 24,
  sym_string_content = 25,
  aux_sym_document_repeat1 = 26,
  aux_sym_object_repeat1 = 27,
  aux_sym_array_repeat1 = 28,
  aux_sym_string_content_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_raw_string] = "raw_string",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__statement] = "_statement",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_raw_string] = sym_raw_string,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__statement] = sym__statement,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '"', 25,
        ',', 20,
        '/', 3,
        '0', 33,
        ':', 22,
        ';', 18,
        '[', 23,
        '\\', 8,
        ']', 24,
        '`', 7,
        '{', 19,
        '}', 21,
        '+', 6,
        '-', 6,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == '`') ADVANCE(32);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        'u', 15,
        '"', 31,
        '/', 31,
        '\\', 31,
        'b', 31,
        'f', 31,
        'n', 31,
        'r', 31,
        't', 31,
      );
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '"', 25,
        ',', 20,
        '/', 3,
        '0', 33,
        ':', 22,
        ';', 18,
        '[', 23,
        ']', 24,
        '`', 7,
        '{', 19,
        '}', 21,
        '+', 6,
        '-', 6,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_raw_string);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_raw_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(28),
    [sym__statement] = STATE(2),
    [sym__value] = STATE(14),
    [sym_object] = STATE(14),
    [sym_array] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_raw_string] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_null] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym__value] = STATE(14),
    [sym_object] = STATE(14),
    [sym_array] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_raw_string] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_null] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym__value] = STATE(14),
    [sym_object] = STATE(14),
    [sym_array] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [sym_raw_string] = ACTIONS(33),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_null] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__value] = STATE(15),
    [sym_object] = STATE(15),
    [sym_array] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_array_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_raw_string] = ACTIONS(40),
    [sym_number] = ACTIONS(40),
    [sym_true] = ACTIONS(36),
    [sym_false] = ACTIONS(36),
    [sym_null] = ACTIONS(36),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__value] = STATE(15),
    [sym_object] = STATE(15),
    [sym_array] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_array_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_raw_string] = ACTIONS(40),
    [sym_number] = ACTIONS(40),
    [sym_true] = ACTIONS(36),
    [sym_false] = ACTIONS(36),
    [sym_null] = ACTIONS(36),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_SEMI] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(44),
    [anon_sym_COMMA] = ACTIONS(44),
    [anon_sym_RBRACE] = ACTIONS(44),
    [anon_sym_COLON] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(44),
    [anon_sym_RBRACK] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_raw_string] = ACTIONS(44),
    [sym_number] = ACTIONS(44),
    [sym_true] = ACTIONS(46),
    [sym_false] = ACTIONS(46),
    [sym_null] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__value] = STATE(15),
    [sym_object] = STATE(15),
    [sym_array] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_array_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_raw_string] = ACTIONS(62),
    [sym_number] = ACTIONS(62),
    [sym_true] = ACTIONS(48),
    [sym_false] = ACTIONS(48),
    [sym_null] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [sym_raw_string] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [sym_true] = ACTIONS(67),
    [sym_false] = ACTIONS(67),
    [sym_null] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(69), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_raw_string,
      sym_number,
  [22] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(73), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_raw_string,
      sym_number,
  [44] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(77), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_raw_string,
      sym_number,
  [66] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(81), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_raw_string,
      sym_number,
  [88] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 2,
      sym_raw_string,
      sym_number,
    ACTIONS(85), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    STATE(25), 4,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
  [117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(91), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_raw_string,
      sym_number,
  [138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(95), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(97), 6,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_raw_string,
      sym_number,
  [159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_raw_string,
      sym_number,
  [177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(57), 6,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_raw_string,
      sym_number,
  [195] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_object_repeat1,
    STATE(22), 1,
      sym_pair,
    STATE(27), 1,
      sym_string,
  [217] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_object_repeat1,
    STATE(22), 1,
      sym_pair,
    STATE(27), 1,
      sym_string,
  [239] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_object_repeat1,
    STATE(22), 1,
      sym_pair,
    STATE(27), 1,
      sym_string,
  [261] = 5,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_string_content_repeat1,
    STATE(29), 1,
      sym_string_content,
    ACTIONS(123), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(127), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_identifier,
  [290] = 4,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(133), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [304] = 4,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(137), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_identifier,
  [328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_identifier,
  [337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COLON,
  [344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
  [351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 22,
  [SMALL_STATE(11)] = 44,
  [SMALL_STATE(12)] = 66,
  [SMALL_STATE(13)] = 88,
  [SMALL_STATE(14)] = 117,
  [SMALL_STATE(15)] = 138,
  [SMALL_STATE(16)] = 159,
  [SMALL_STATE(17)] = 177,
  [SMALL_STATE(18)] = 195,
  [SMALL_STATE(19)] = 217,
  [SMALL_STATE(20)] = 239,
  [SMALL_STATE(21)] = 261,
  [SMALL_STATE(22)] = 278,
  [SMALL_STATE(23)] = 290,
  [SMALL_STATE(24)] = 304,
  [SMALL_STATE(25)] = 318,
  [SMALL_STATE(26)] = 328,
  [SMALL_STATE(27)] = 337,
  [SMALL_STATE(28)] = 344,
  [SMALL_STATE(29)] = 351,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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

TS_PUBLIC const TSLanguage *tree_sitter_jsonx(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
