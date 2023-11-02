#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_innerunique = 4,
  anon_sym_inner = 5,
  anon_sym_leftouter = 6,
  anon_sym_leftsemi = 7,
  anon_sym_leftanti = 8,
  anon_sym_rightouter = 9,
  anon_sym_fullouter = 10,
  anon_sym_anti = 11,
  anon_sym_leftantisemi = 12,
  anon_sym_rightanti = 13,
  anon_sym_rightantisemi = 14,
  sym_pipe = 15,
  sym__delimiter = 16,
  sym_let_keyword = 17,
  anon_sym_orderby = 18,
  anon_sym_project = 19,
  anon_sym_where = 20,
  anon_sym_extend = 21,
  anon_sym_evaluate = 22,
  anon_sym_bag_unpack = 23,
  anon_sym_join = 24,
  anon_sym_kind = 25,
  anon_sym_on = 26,
  anon_sym_summarize = 27,
  anon_sym_by = 28,
  anon_sym_COMMA = 29,
  anon_sym_STAR = 30,
  anon_sym_PLUS = 31,
  anon_sym_DASH = 32,
  anon_sym_SLASH = 33,
  anon_sym_EQ_EQ = 34,
  anon_sym_LT = 35,
  anon_sym_GT = 36,
  anon_sym_LT_EQ = 37,
  anon_sym_GT_EQ = 38,
  anon_sym_in = 39,
  anon_sym_has = 40,
  anon_sym_and = 41,
  anon_sym_or = 42,
  anon_sym_not = 43,
  anon_sym_COLON = 44,
  anon_sym_string = 45,
  anon_sym_int = 46,
  anon_sym_bool = 47,
  anon_sym_dynamic = 48,
  anon_sym_array = 49,
  anon_sym_guid = 50,
  anon_sym_datetime = 51,
  anon_sym_long = 52,
  anon_sym_real = 53,
  anon_sym_timespan = 54,
  anon_sym_decimal = 55,
  sym_number = 56,
  sym_string = 57,
  sym_identifier = 58,
  anon_sym_DOT = 59,
  anon_sym_LBRACK = 60,
  anon_sym_RBRACK = 61,
  sym_source_file = 62,
  sym__statement = 63,
  sym_let_statement = 64,
  sym_tabular_expression = 65,
  sym_source = 66,
  sym_operation = 67,
  sym_join_types = 68,
  sym_operator = 69,
  sym_join_operator = 70,
  sym_summarize_operator = 71,
  sym__expressions = 72,
  sym__expression = 73,
  sym__expression_options = 74,
  sym__non_repeating_expression = 75,
  sym_binary_expression = 76,
  sym_binary_operator = 77,
  sym_assignment_expression = 78,
  sym_compound_expression = 79,
  sym_compound_keywords = 80,
  sym_unary_expression = 81,
  sym_typed_parameter = 82,
  sym_type = 83,
  sym_property_identifier = 84,
  sym_property_index = 85,
  sym_array = 86,
  sym_function_call = 87,
  sym_function_arguments = 88,
  sym_datatable = 89,
  aux_sym_source_file_repeat1 = 90,
  aux_sym_tabular_expression_repeat1 = 91,
  aux_sym__expressions_repeat1 = 92,
  aux_sym_compound_expression_repeat1 = 93,
  aux_sym_property_identifier_repeat1 = 94,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_innerunique] = "innerunique",
  [anon_sym_inner] = "inner",
  [anon_sym_leftouter] = "leftouter",
  [anon_sym_leftsemi] = "leftsemi",
  [anon_sym_leftanti] = "leftanti",
  [anon_sym_rightouter] = "rightouter",
  [anon_sym_fullouter] = "fullouter",
  [anon_sym_anti] = "anti",
  [anon_sym_leftantisemi] = "leftantisemi",
  [anon_sym_rightanti] = "rightanti",
  [anon_sym_rightantisemi] = "rightantisemi",
  [sym_pipe] = "pipe",
  [sym__delimiter] = "_delimiter",
  [sym_let_keyword] = "let_keyword",
  [anon_sym_orderby] = "order by",
  [anon_sym_project] = "project",
  [anon_sym_where] = "where",
  [anon_sym_extend] = "extend",
  [anon_sym_evaluate] = "evaluate",
  [anon_sym_bag_unpack] = "bag_unpack",
  [anon_sym_join] = "join",
  [anon_sym_kind] = "kind",
  [anon_sym_on] = "on",
  [anon_sym_summarize] = "summarize",
  [anon_sym_by] = "by",
  [anon_sym_COMMA] = ",",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_in] = "in",
  [anon_sym_has] = "has",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_COLON] = ":",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [anon_sym_bool] = "bool",
  [anon_sym_dynamic] = "dynamic",
  [anon_sym_array] = "array",
  [anon_sym_guid] = "guid",
  [anon_sym_datetime] = "datetime",
  [anon_sym_long] = "long",
  [anon_sym_real] = "real",
  [anon_sym_timespan] = "timespan",
  [anon_sym_decimal] = "decimal",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_let_statement] = "let_statement",
  [sym_tabular_expression] = "tabular_expression",
  [sym_source] = "source",
  [sym_operation] = "operation",
  [sym_join_types] = "join_types",
  [sym_operator] = "operator",
  [sym_join_operator] = "join_operator",
  [sym_summarize_operator] = "summarize_operator",
  [sym__expressions] = "_expressions",
  [sym__expression] = "_expression",
  [sym__expression_options] = "_expression_options",
  [sym__non_repeating_expression] = "_non_repeating_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_binary_operator] = "binary_operator",
  [sym_assignment_expression] = "assignment_expression",
  [sym_compound_expression] = "compound_expression",
  [sym_compound_keywords] = "compound_keywords",
  [sym_unary_expression] = "unary_expression",
  [sym_typed_parameter] = "typed_parameter",
  [sym_type] = "type",
  [sym_property_identifier] = "property_identifier",
  [sym_property_index] = "property_index",
  [sym_array] = "array",
  [sym_function_call] = "function_call",
  [sym_function_arguments] = "function_arguments",
  [sym_datatable] = "datatable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tabular_expression_repeat1] = "tabular_expression_repeat1",
  [aux_sym__expressions_repeat1] = "_expressions_repeat1",
  [aux_sym_compound_expression_repeat1] = "compound_expression_repeat1",
  [aux_sym_property_identifier_repeat1] = "property_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_innerunique] = anon_sym_innerunique,
  [anon_sym_inner] = anon_sym_inner,
  [anon_sym_leftouter] = anon_sym_leftouter,
  [anon_sym_leftsemi] = anon_sym_leftsemi,
  [anon_sym_leftanti] = anon_sym_leftanti,
  [anon_sym_rightouter] = anon_sym_rightouter,
  [anon_sym_fullouter] = anon_sym_fullouter,
  [anon_sym_anti] = anon_sym_anti,
  [anon_sym_leftantisemi] = anon_sym_leftantisemi,
  [anon_sym_rightanti] = anon_sym_rightanti,
  [anon_sym_rightantisemi] = anon_sym_rightantisemi,
  [sym_pipe] = sym_pipe,
  [sym__delimiter] = sym__delimiter,
  [sym_let_keyword] = sym_let_keyword,
  [anon_sym_orderby] = anon_sym_orderby,
  [anon_sym_project] = anon_sym_project,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_evaluate] = anon_sym_evaluate,
  [anon_sym_bag_unpack] = anon_sym_bag_unpack,
  [anon_sym_join] = anon_sym_join,
  [anon_sym_kind] = anon_sym_kind,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_summarize] = anon_sym_summarize,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_has] = anon_sym_has,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_dynamic] = anon_sym_dynamic,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_guid] = anon_sym_guid,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_real] = anon_sym_real,
  [anon_sym_timespan] = anon_sym_timespan,
  [anon_sym_decimal] = anon_sym_decimal,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_let_statement] = sym_let_statement,
  [sym_tabular_expression] = sym_tabular_expression,
  [sym_source] = sym_source,
  [sym_operation] = sym_operation,
  [sym_join_types] = sym_join_types,
  [sym_operator] = sym_operator,
  [sym_join_operator] = sym_join_operator,
  [sym_summarize_operator] = sym_summarize_operator,
  [sym__expressions] = sym__expressions,
  [sym__expression] = sym__expression,
  [sym__expression_options] = sym__expression_options,
  [sym__non_repeating_expression] = sym__non_repeating_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_compound_expression] = sym_compound_expression,
  [sym_compound_keywords] = sym_compound_keywords,
  [sym_unary_expression] = sym_unary_expression,
  [sym_typed_parameter] = sym_typed_parameter,
  [sym_type] = sym_type,
  [sym_property_identifier] = sym_property_identifier,
  [sym_property_index] = sym_property_index,
  [sym_array] = sym_array,
  [sym_function_call] = sym_function_call,
  [sym_function_arguments] = sym_function_arguments,
  [sym_datatable] = sym_datatable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tabular_expression_repeat1] = aux_sym_tabular_expression_repeat1,
  [aux_sym__expressions_repeat1] = aux_sym__expressions_repeat1,
  [aux_sym_compound_expression_repeat1] = aux_sym_compound_expression_repeat1,
  [aux_sym_property_identifier_repeat1] = aux_sym_property_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_innerunique] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leftouter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leftsemi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leftanti] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rightouter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fullouter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anti] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leftantisemi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rightanti] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rightantisemi] = {
    .visible = true,
    .named = false,
  },
  [sym_pipe] = {
    .visible = true,
    .named = true,
  },
  [sym__delimiter] = {
    .visible = false,
    .named = true,
  },
  [sym_let_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_orderby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_project] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_evaluate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bag_unpack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_join] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_summarize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
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
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_guid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_real] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timespan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_tabular_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_join_types] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_join_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_summarize_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__expressions] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_options] = {
    .visible = false,
    .named = true,
  },
  [sym__non_repeating_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_keywords] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_property_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_property_index] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_datatable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tabular_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expressions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_identifier_repeat1] = {
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
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 55,
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
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
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
  [94] = 94,
  [95] = 95,
  [96] = 96,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(161);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == ')') ADVANCE(165);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == ';') ADVANCE(178);
      if (lookahead == '<') ADVANCE(201);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(202);
      if (lookahead == '[') ADVANCE(238);
      if (lookahead == ']') ADVANCE(239);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'g') ADVANCE(148);
      if (lookahead == 'h') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'j') ADVANCE(116);
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'w') ADVANCE(59);
      if (lookahead == '|') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == '[') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == '=') ADVANCE(162);
      if (lookahead == 'j') ADVANCE(233);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(224);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(150);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'y') ADVANCE(194);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'g') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'j') ADVANCE(116);
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'w') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(157);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(207);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(6);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(134);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'j') ADVANCE(39);
      END_STATE();
    case 78:
      if (lookahead == 'k') ADVANCE(186);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 119:
      if (lookahead == 'q') ADVANCE(151);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 155:
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(138);
      END_STATE();
    case 156:
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 157:
      if (lookahead == 'y') ADVANCE(181);
      END_STATE();
    case 158:
      if (lookahead == 'z') ADVANCE(36);
      END_STATE();
    case 159:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 160:
      if (eof) ADVANCE(161);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(200);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_innerunique);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_inner);
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_leftouter);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_leftsemi);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_leftanti);
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_rightouter);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_fullouter);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_anti);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_leftantisemi);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_rightanti);
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_rightantisemi);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_pipe);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__delimiter);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_let_keyword);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_let_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_orderby);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_evaluate);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_bag_unpack);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_kind);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_kind);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_summarize);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_guid);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_timespan);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 160},
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
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 160},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 160},
  [63] = {.lex_state = 2},
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
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_leftouter] = ACTIONS(1),
    [anon_sym_leftsemi] = ACTIONS(1),
    [anon_sym_leftanti] = ACTIONS(1),
    [anon_sym_rightouter] = ACTIONS(1),
    [anon_sym_fullouter] = ACTIONS(1),
    [anon_sym_anti] = ACTIONS(1),
    [anon_sym_leftantisemi] = ACTIONS(1),
    [anon_sym_rightanti] = ACTIONS(1),
    [anon_sym_rightantisemi] = ACTIONS(1),
    [sym_pipe] = ACTIONS(1),
    [sym__delimiter] = ACTIONS(1),
    [sym_let_keyword] = ACTIONS(1),
    [anon_sym_project] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_evaluate] = ACTIONS(1),
    [anon_sym_bag_unpack] = ACTIONS(1),
    [anon_sym_join] = ACTIONS(1),
    [anon_sym_kind] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_summarize] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_has] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_dynamic] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_guid] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_real] = ACTIONS(1),
    [anon_sym_timespan] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(93),
    [sym__statement] = STATE(75),
    [sym_let_statement] = STATE(75),
    [sym_tabular_expression] = STATE(75),
    [sym_source] = STATE(59),
    [sym_let_keyword] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_property_identifier_repeat1,
    ACTIONS(9), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(7), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [40] = 4,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_property_identifier_repeat1,
    ACTIONS(19), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [74] = 4,
    ACTIONS(25), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_property_identifier_repeat1,
    ACTIONS(23), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [108] = 2,
    ACTIONS(23), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [137] = 4,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_array,
    ACTIONS(9), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(7), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RBRACK,
  [170] = 2,
    ACTIONS(32), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(30), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [198] = 2,
    ACTIONS(36), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(34), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [226] = 2,
    ACTIONS(40), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(38), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [254] = 2,
    ACTIONS(44), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(42), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [282] = 2,
    ACTIONS(48), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(46), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [310] = 2,
    ACTIONS(52), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(50), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [338] = 9,
    ACTIONS(56), 1,
      anon_sym_EQ,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_binary_operator,
    STATE(50), 1,
      aux_sym__expressions_repeat1,
    ACTIONS(62), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(64), 2,
      anon_sym_in,
      anon_sym_has,
    ACTIONS(54), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_RBRACK,
    ACTIONS(60), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [380] = 2,
    ACTIONS(70), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(68), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [408] = 2,
    ACTIONS(74), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(72), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [436] = 2,
    ACTIONS(78), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(76), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [464] = 7,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_property_identifier_repeat1,
    ACTIONS(9), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
    ACTIONS(7), 10,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_LBRACK,
  [500] = 7,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_property_identifier_repeat1,
    ACTIONS(9), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
    ACTIONS(7), 10,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_LBRACK,
  [536] = 7,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_property_identifier_repeat1,
    ACTIONS(9), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
    ACTIONS(7), 10,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_LBRACK,
  [572] = 7,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_property_identifier_repeat1,
    ACTIONS(9), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
    ACTIONS(7), 10,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_has,
      anon_sym_LBRACK,
  [608] = 10,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    STATE(42), 1,
      sym_binary_expression,
    STATE(94), 1,
      sym_function_arguments,
    ACTIONS(92), 2,
      sym_number,
      sym_string,
    STATE(89), 3,
      sym__expressions,
      sym__non_repeating_expression,
      sym_compound_expression,
    STATE(13), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [650] = 9,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    STATE(42), 1,
      sym_binary_expression,
    ACTIONS(92), 2,
      sym_number,
      sym_string,
    STATE(87), 3,
      sym__expressions,
      sym__non_repeating_expression,
      sym_compound_expression,
    STATE(13), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [689] = 9,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    STATE(42), 1,
      sym_binary_expression,
    ACTIONS(92), 2,
      sym_number,
      sym_string,
    STATE(65), 3,
      sym__expressions,
      sym__non_repeating_expression,
      sym_compound_expression,
    STATE(13), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [728] = 9,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    STATE(42), 1,
      sym_binary_expression,
    ACTIONS(92), 2,
      sym_number,
      sym_string,
    STATE(76), 3,
      sym__expressions,
      sym__non_repeating_expression,
      sym_compound_expression,
    STATE(13), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [767] = 9,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    STATE(42), 1,
      sym_binary_expression,
    ACTIONS(92), 2,
      sym_number,
      sym_string,
    STATE(71), 3,
      sym__expressions,
      sym__non_repeating_expression,
      sym_compound_expression,
    STATE(13), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [806] = 9,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    STATE(42), 1,
      sym_binary_expression,
    ACTIONS(96), 2,
      sym_number,
      sym_string,
    STATE(65), 2,
      sym__non_repeating_expression,
      sym_compound_expression,
    STATE(39), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [844] = 9,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    STATE(42), 1,
      sym_binary_expression,
    ACTIONS(96), 2,
      sym_number,
      sym_string,
    STATE(70), 2,
      sym__non_repeating_expression,
      sym_compound_expression,
    STATE(39), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [882] = 9,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    STATE(42), 1,
      sym_binary_expression,
    ACTIONS(96), 2,
      sym_number,
      sym_string,
    STATE(68), 2,
      sym__non_repeating_expression,
      sym_compound_expression,
    STATE(39), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [920] = 9,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    STATE(42), 1,
      sym_binary_expression,
    ACTIONS(96), 2,
      sym_number,
      sym_string,
    STATE(66), 2,
      sym__non_repeating_expression,
      sym_compound_expression,
    STATE(39), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [958] = 9,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    STATE(59), 1,
      sym_source,
    STATE(85), 1,
      sym_tabular_expression,
    ACTIONS(106), 2,
      sym_number,
      sym_string,
    STATE(67), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [995] = 8,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    STATE(49), 1,
      sym_binary_expression,
    ACTIONS(96), 2,
      sym_number,
      sym_string,
    STATE(39), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [1029] = 7,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    ACTIONS(110), 2,
      sym_number,
      sym_string,
    STATE(79), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [1060] = 7,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    ACTIONS(112), 2,
      sym_number,
      sym_string,
    STATE(11), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [1091] = 8,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    STATE(86), 1,
      sym__expression,
    ACTIONS(114), 2,
      sym_number,
      sym_string,
    STATE(82), 8,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [1124] = 7,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    ACTIONS(116), 2,
      sym_number,
      sym_string,
    STATE(44), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [1155] = 7,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    ACTIONS(118), 2,
      sym_number,
      sym_string,
    STATE(46), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [1186] = 7,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_not,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(6), 1,
      sym_function_call,
    ACTIONS(120), 2,
      sym_number,
      sym_string,
    STATE(8), 9,
      sym__expression,
      sym__expression_options,
      sym_assignment_expression,
      sym_unary_expression,
      sym_typed_parameter,
      sym_property_identifier,
      sym_property_index,
      sym_array,
      sym_datatable,
  [1217] = 6,
    STATE(24), 1,
      sym_summarize_operator,
    STATE(25), 1,
      sym_operator,
    STATE(51), 1,
      sym_join_operator,
    ACTIONS(126), 2,
      anon_sym_summarize,
      anon_sym_by,
    ACTIONS(124), 3,
      anon_sym_join,
      anon_sym_kind,
      anon_sym_on,
    ACTIONS(122), 6,
      anon_sym_orderby,
      anon_sym_project,
      anon_sym_where,
      anon_sym_extend,
      anon_sym_evaluate,
      anon_sym_bag_unpack,
  [1244] = 6,
    ACTIONS(56), 1,
      anon_sym_EQ,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_binary_operator,
    ACTIONS(62), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(64), 2,
      anon_sym_in,
      anon_sym_has,
    ACTIONS(60), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1271] = 3,
    STATE(78), 1,
      sym_join_types,
    ACTIONS(130), 3,
      anon_sym_inner,
      anon_sym_leftanti,
      anon_sym_rightanti,
    ACTIONS(128), 8,
      anon_sym_innerunique,
      anon_sym_leftouter,
      anon_sym_leftsemi,
      anon_sym_rightouter,
      anon_sym_fullouter,
      anon_sym_anti,
      anon_sym_leftantisemi,
      anon_sym_rightantisemi,
  [1290] = 2,
    STATE(7), 1,
      sym_type,
    ACTIONS(132), 11,
      anon_sym_string,
      anon_sym_int,
      anon_sym_bool,
      anon_sym_dynamic,
      anon_sym_array,
      anon_sym_guid,
      anon_sym_datetime,
      anon_sym_long,
      anon_sym_real,
      anon_sym_timespan,
      anon_sym_decimal,
  [1307] = 4,
    STATE(31), 1,
      sym_compound_keywords,
    STATE(45), 1,
      aux_sym_compound_expression_repeat1,
    ACTIONS(136), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_RBRACK,
  [1327] = 4,
    STATE(31), 1,
      sym_compound_keywords,
    STATE(43), 1,
      aux_sym_compound_expression_repeat1,
    ACTIONS(140), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_RBRACK,
  [1347] = 3,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_EQ,
    ACTIONS(143), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RBRACK,
  [1365] = 4,
    STATE(31), 1,
      sym_compound_keywords,
    STATE(43), 1,
      aux_sym_compound_expression_repeat1,
    ACTIONS(136), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(147), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_RBRACK,
  [1385] = 3,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_EQ,
    ACTIONS(149), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1402] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_property_identifier_repeat1,
    ACTIONS(7), 2,
      anon_sym_EQ,
      anon_sym_LBRACK,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      sym_pipe,
      sym__delimiter,
  [1424] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym__expressions_repeat1,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_RBRACK,
  [1440] = 1,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_and,
      anon_sym_or,
      anon_sym_RBRACK,
  [1452] = 3,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym__expressions_repeat1,
    ACTIONS(156), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_summarize,
      anon_sym_by,
      anon_sym_RBRACK,
  [1468] = 5,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym_source,
    STATE(92), 1,
      sym_join_operator,
    ACTIONS(160), 3,
      anon_sym_join,
      anon_sym_kind,
      anon_sym_on,
  [1486] = 1,
    ACTIONS(151), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
      anon_sym_join,
      anon_sym_kind,
      anon_sym_on,
  [1496] = 5,
    ACTIONS(3), 1,
      sym_let_keyword,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_source,
    STATE(83), 3,
      sym__statement,
      sym_let_statement,
      sym_tabular_expression,
  [1514] = 2,
    ACTIONS(166), 2,
      anon_sym_not,
      sym_identifier,
    ACTIONS(164), 4,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
  [1525] = 2,
    ACTIONS(168), 2,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(170), 4,
      anon_sym_join,
      anon_sym_kind,
      anon_sym_on,
      sym_identifier,
  [1536] = 2,
    ACTIONS(170), 2,
      anon_sym_not,
      sym_identifier,
    ACTIONS(168), 4,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
  [1547] = 2,
    ACTIONS(174), 2,
      anon_sym_not,
      sym_identifier,
    ACTIONS(172), 4,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
  [1558] = 2,
    ACTIONS(178), 2,
      anon_sym_not,
      sym_identifier,
    ACTIONS(176), 4,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
  [1569] = 3,
    ACTIONS(182), 1,
      sym_pipe,
    STATE(61), 2,
      sym_operation,
      aux_sym_tabular_expression_repeat1,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym__delimiter,
  [1582] = 3,
    ACTIONS(186), 1,
      sym_pipe,
    STATE(60), 2,
      sym_operation,
      aux_sym_tabular_expression_repeat1,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym__delimiter,
  [1595] = 3,
    ACTIONS(182), 1,
      sym_pipe,
    STATE(60), 2,
      sym_operation,
      aux_sym_tabular_expression_repeat1,
    ACTIONS(189), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym__delimiter,
  [1608] = 4,
    ACTIONS(3), 1,
      sym_let_keyword,
    ACTIONS(5), 1,
      sym_identifier,
    STATE(59), 1,
      sym_source,
    STATE(83), 3,
      sym__statement,
      sym_let_statement,
      sym_tabular_expression,
  [1623] = 2,
    ACTIONS(193), 2,
      anon_sym_not,
      sym_identifier,
    ACTIONS(191), 4,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
  [1634] = 2,
    STATE(28), 1,
      sym_join_operator,
    ACTIONS(195), 3,
      anon_sym_join,
      anon_sym_kind,
      anon_sym_on,
  [1643] = 1,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
  [1650] = 1,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
  [1657] = 3,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_EQ,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym__delimiter,
  [1668] = 1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
  [1675] = 2,
    STATE(29), 1,
      sym_join_operator,
    ACTIONS(195), 3,
      anon_sym_join,
      anon_sym_kind,
      anon_sym_on,
  [1684] = 1,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
  [1691] = 1,
    ACTIONS(199), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_pipe,
      sym__delimiter,
  [1698] = 2,
    STATE(26), 1,
      sym_join_operator,
    ACTIONS(195), 3,
      anon_sym_join,
      anon_sym_kind,
      anon_sym_on,
  [1707] = 2,
    STATE(27), 1,
      sym_join_operator,
    ACTIONS(195), 3,
      anon_sym_join,
      anon_sym_kind,
      anon_sym_on,
  [1716] = 3,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(59), 1,
      sym_source,
    STATE(96), 1,
      sym_tabular_expression,
  [1726] = 3,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      sym__delimiter,
    STATE(80), 1,
      aux_sym_source_file_repeat1,
  [1736] = 2,
    STATE(23), 1,
      sym_summarize_operator,
    ACTIONS(126), 2,
      anon_sym_summarize,
      anon_sym_by,
  [1744] = 3,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      sym__delimiter,
    STATE(77), 1,
      aux_sym_source_file_repeat1,
  [1754] = 3,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_source,
  [1764] = 3,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_EQ,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
  [1774] = 3,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 1,
      sym__delimiter,
    STATE(77), 1,
      aux_sym_source_file_repeat1,
  [1784] = 3,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(59), 1,
      sym_source,
    STATE(88), 1,
      sym_tabular_expression,
  [1794] = 2,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    ACTIONS(218), 2,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [1802] = 1,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym__delimiter,
  [1807] = 1,
    ACTIONS(222), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [1812] = 1,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym__delimiter,
  [1817] = 2,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_EQ,
  [1824] = 1,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
  [1828] = 1,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
  [1832] = 1,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
  [1836] = 1,
    ACTIONS(230), 1,
      sym_identifier,
  [1840] = 1,
    ACTIONS(232), 1,
      anon_sym_EQ,
  [1844] = 1,
    ACTIONS(234), 1,
      anon_sym_EQ,
  [1848] = 1,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
  [1852] = 1,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
  [1856] = 1,
    ACTIONS(240), 1,
      sym_identifier,
  [1860] = 1,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 226,
  [SMALL_STATE(10)] = 254,
  [SMALL_STATE(11)] = 282,
  [SMALL_STATE(12)] = 310,
  [SMALL_STATE(13)] = 338,
  [SMALL_STATE(14)] = 380,
  [SMALL_STATE(15)] = 408,
  [SMALL_STATE(16)] = 436,
  [SMALL_STATE(17)] = 464,
  [SMALL_STATE(18)] = 500,
  [SMALL_STATE(19)] = 536,
  [SMALL_STATE(20)] = 572,
  [SMALL_STATE(21)] = 608,
  [SMALL_STATE(22)] = 650,
  [SMALL_STATE(23)] = 689,
  [SMALL_STATE(24)] = 728,
  [SMALL_STATE(25)] = 767,
  [SMALL_STATE(26)] = 806,
  [SMALL_STATE(27)] = 844,
  [SMALL_STATE(28)] = 882,
  [SMALL_STATE(29)] = 920,
  [SMALL_STATE(30)] = 958,
  [SMALL_STATE(31)] = 995,
  [SMALL_STATE(32)] = 1029,
  [SMALL_STATE(33)] = 1060,
  [SMALL_STATE(34)] = 1091,
  [SMALL_STATE(35)] = 1124,
  [SMALL_STATE(36)] = 1155,
  [SMALL_STATE(37)] = 1186,
  [SMALL_STATE(38)] = 1217,
  [SMALL_STATE(39)] = 1244,
  [SMALL_STATE(40)] = 1271,
  [SMALL_STATE(41)] = 1290,
  [SMALL_STATE(42)] = 1307,
  [SMALL_STATE(43)] = 1327,
  [SMALL_STATE(44)] = 1347,
  [SMALL_STATE(45)] = 1365,
  [SMALL_STATE(46)] = 1385,
  [SMALL_STATE(47)] = 1402,
  [SMALL_STATE(48)] = 1424,
  [SMALL_STATE(49)] = 1440,
  [SMALL_STATE(50)] = 1452,
  [SMALL_STATE(51)] = 1468,
  [SMALL_STATE(52)] = 1486,
  [SMALL_STATE(53)] = 1496,
  [SMALL_STATE(54)] = 1514,
  [SMALL_STATE(55)] = 1525,
  [SMALL_STATE(56)] = 1536,
  [SMALL_STATE(57)] = 1547,
  [SMALL_STATE(58)] = 1558,
  [SMALL_STATE(59)] = 1569,
  [SMALL_STATE(60)] = 1582,
  [SMALL_STATE(61)] = 1595,
  [SMALL_STATE(62)] = 1608,
  [SMALL_STATE(63)] = 1623,
  [SMALL_STATE(64)] = 1634,
  [SMALL_STATE(65)] = 1643,
  [SMALL_STATE(66)] = 1650,
  [SMALL_STATE(67)] = 1657,
  [SMALL_STATE(68)] = 1668,
  [SMALL_STATE(69)] = 1675,
  [SMALL_STATE(70)] = 1684,
  [SMALL_STATE(71)] = 1691,
  [SMALL_STATE(72)] = 1698,
  [SMALL_STATE(73)] = 1707,
  [SMALL_STATE(74)] = 1716,
  [SMALL_STATE(75)] = 1726,
  [SMALL_STATE(76)] = 1736,
  [SMALL_STATE(77)] = 1744,
  [SMALL_STATE(78)] = 1754,
  [SMALL_STATE(79)] = 1764,
  [SMALL_STATE(80)] = 1774,
  [SMALL_STATE(81)] = 1784,
  [SMALL_STATE(82)] = 1794,
  [SMALL_STATE(83)] = 1802,
  [SMALL_STATE(84)] = 1807,
  [SMALL_STATE(85)] = 1812,
  [SMALL_STATE(86)] = 1817,
  [SMALL_STATE(87)] = 1824,
  [SMALL_STATE(88)] = 1828,
  [SMALL_STATE(89)] = 1832,
  [SMALL_STATE(90)] = 1836,
  [SMALL_STATE(91)] = 1840,
  [SMALL_STATE(92)] = 1844,
  [SMALL_STATE(93)] = 1848,
  [SMALL_STATE(94)] = 1852,
  [SMALL_STATE(95)] = 1856,
  [SMALL_STATE(96)] = 1860,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_options, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_options, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_identifier, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_identifier, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_identifier_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_identifier_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_identifier_repeat1, 2), SHIFT_REPEAT(90),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_parameter, 3),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typed_parameter, 3),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_index, 4),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_index, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expressions, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatable, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatable, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 7),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 8),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 10),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__non_repeating_expression, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_expression_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_expression_repeat1, 2), SHIFT_REPEAT(58),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_expression, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expressions_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expressions_repeat1, 2), SHIFT_REPEAT(36),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expressions, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_operator, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_join_operator, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_keywords, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_keywords, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tabular_expression, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tabular_expression_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tabular_expression_repeat1, 2), SHIFT_REPEAT(38),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tabular_expression, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_operator, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summarize_operator, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_types, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [236] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kusto(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
