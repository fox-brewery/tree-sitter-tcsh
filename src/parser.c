#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  anon_sym_POUND = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_SEMI_SEMI = 5,
  anon_sym_AMP = 6,
  anon_sym_LT = 7,
  anon_sym_GT = 8,
  anon_sym_GT_BANG = 9,
  anon_sym_GT_AMP = 10,
  anon_sym_GT_AMP_BANG = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_doublequote_token1 = 13,
  anon_sym_SQUOTE = 14,
  anon_sym_DOLLAR_SQUOTE = 15,
  sym_string_raw = 16,
  sym_program = 17,
  sym_comment = 18,
  aux_sym__statement = 19,
  sym_string_doublequote = 20,
  sym_string_singlequote = 21,
  aux_sym_program_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SEMI_SEMI] = ";;",
  [anon_sym_AMP] = "&",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_BANG] = ">!",
  [anon_sym_GT_AMP] = ">&",
  [anon_sym_GT_AMP_BANG] = ">&!",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_doublequote_token1] = "string_doublequote_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DOLLAR_SQUOTE] = "$'",
  [sym_string_raw] = "string_raw",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [aux_sym__statement] = "_statement",
  [sym_string_doublequote] = "string_doublequote",
  [sym_string_singlequote] = "string_singlequote",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SEMI_SEMI] = anon_sym_SEMI_SEMI,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_BANG] = anon_sym_GT_BANG,
  [anon_sym_GT_AMP] = anon_sym_GT_AMP,
  [anon_sym_GT_AMP_BANG] = anon_sym_GT_AMP_BANG,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_doublequote_token1] = aux_sym_string_doublequote_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DOLLAR_SQUOTE] = anon_sym_DOLLAR_SQUOTE,
  [sym_string_raw] = sym_string_raw,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [aux_sym__statement] = aux_sym__statement,
  [sym_string_doublequote] = sym_string_doublequote,
  [sym_string_singlequote] = sym_string_singlequote,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_AMP_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_doublequote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_raw] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement] = {
    .visible = false,
    .named = false,
  },
  [sym_string_doublequote] = {
    .visible = true,
    .named = true,
  },
  [sym_string_singlequote] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(21);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';') ADVANCE(11);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '&') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT_BANG);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      if (lookahead == '!') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT_AMP_BANG);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_string_doublequote_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOLLAR_SQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_string_raw);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_SEMI_SEMI] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_BANG] = ACTIONS(1),
    [anon_sym_GT_AMP] = ACTIONS(1),
    [anon_sym_GT_AMP_BANG] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_SQUOTE] = ACTIONS(1),
    [sym_string_raw] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(13),
    [sym_comment] = STATE(1),
    [aux_sym__statement] = STATE(2),
    [sym_string_doublequote] = STATE(6),
    [sym_string_singlequote] = STATE(6),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_string_raw] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(15), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_string_raw,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym__statement,
    STATE(6), 2,
      sym_string_doublequote,
      sym_string_singlequote,
  [29] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      sym_string_raw,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym__statement,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_program_repeat1,
    STATE(6), 2,
      sym_string_doublequote,
      sym_string_singlequote,
  [58] = 8,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym_string_raw,
    STATE(4), 2,
      sym_comment,
      aux_sym__statement,
    STATE(6), 2,
      sym_string_doublequote,
      sym_string_singlequote,
  [85] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      sym_string_raw,
    STATE(2), 1,
      aux_sym__statement,
    STATE(5), 2,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(6), 2,
      sym_string_doublequote,
      sym_string_singlequote,
  [112] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(6), 1,
      sym_comment,
    ACTIONS(53), 4,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_raw,
  [128] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym_comment,
    ACTIONS(57), 4,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_raw,
  [144] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym_comment,
    ACTIONS(61), 4,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_raw,
  [160] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(40), 4,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_raw,
  [173] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_comment,
  [183] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      aux_sym_string_doublequote_token1,
    STATE(11), 1,
      sym_comment,
  [193] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      aux_sym_string_doublequote_token1,
    STATE(12), 1,
      sym_comment,
  [203] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_comment,
  [213] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_comment,
  [223] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    STATE(15), 1,
      sym_comment,
  [233] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 85,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 160,
  [SMALL_STATE(10)] = 173,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 193,
  [SMALL_STATE(13)] = 203,
  [SMALL_STATE(14)] = 213,
  [SMALL_STATE(15)] = 223,
  [SMALL_STATE(16)] = 233,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(11),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(12),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_doublequote, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_doublequote, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_singlequote, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_singlequote, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tcsh(void) {
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
