#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 418
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 179
#define ALIAS_COUNT 2
#define TOKEN_COUNT 110
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 24
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 108

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_typedef = 3,
  anon_sym_AMP = 4,
  anon_sym_TILDE = 5,
  anon_sym_const = 6,
  anon_sym_shared = 7,
  anon_sym_external = 8,
  anon_sym_private = 9,
  anon_sym_protected = 10,
  anon_sym_LPAREN = 11,
  anon_sym_void = 12,
  anon_sym_COMMA = 13,
  anon_sym_RPAREN = 14,
  anon_sym_EQ = 15,
  anon_sym_in = 16,
  anon_sym_out = 17,
  anon_sym_inout = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_AT = 21,
  anon_sym_QMARK = 22,
  anon_sym_auto = 23,
  anon_sym_COLON_COLON = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_LBRACE = 27,
  anon_sym_RBRACE = 28,
  anon_sym_COLON = 29,
  anon_sym_break = 30,
  anon_sym_continue = 31,
  anon_sym_return = 32,
  anon_sym_if = 33,
  anon_sym_else = 34,
  anon_sym_switch = 35,
  anon_sym_case = 36,
  anon_sym_default = 37,
  anon_sym_while = 38,
  anon_sym_do = 39,
  anon_sym_for = 40,
  anon_sym_int = 41,
  anon_sym_int8 = 42,
  anon_sym_int16 = 43,
  anon_sym_int32 = 44,
  anon_sym_int64 = 45,
  anon_sym_uint = 46,
  anon_sym_uint8 = 47,
  anon_sym_uint16 = 48,
  anon_sym_uint32 = 49,
  anon_sym_uint64 = 50,
  anon_sym_float = 51,
  anon_sym_double = 52,
  anon_sym_bool = 53,
  anon_sym_override = 54,
  anon_sym_final = 55,
  anon_sym_explicit = 56,
  anon_sym_property = 57,
  anon_sym_DQUOTE = 58,
  aux_sym__double_quote_string_token1 = 59,
  anon_sym_SQUOTE = 60,
  aux_sym__single_quote_string_token1 = 61,
  sym_escape_sequence = 62,
  anon_sym_STAR_EQ = 63,
  anon_sym_STAR_STAR_EQ = 64,
  anon_sym_SLASH_EQ = 65,
  anon_sym_PERCENT_EQ = 66,
  anon_sym_PLUS_EQ = 67,
  anon_sym_DASH_EQ = 68,
  anon_sym_LT_LT_EQ = 69,
  anon_sym_GT_GT_EQ = 70,
  anon_sym_GT_GT_GT_EQ = 71,
  anon_sym_AMP_EQ = 72,
  anon_sym_CARET_EQ = 73,
  anon_sym_PIPE_EQ = 74,
  anon_sym_not = 75,
  anon_sym_BANG = 76,
  anon_sym_DASH = 77,
  anon_sym_PLUS = 78,
  anon_sym_STAR = 79,
  anon_sym_STAR_STAR = 80,
  anon_sym_SLASH = 81,
  anon_sym_PERCENT = 82,
  anon_sym_PIPE_PIPE = 83,
  anon_sym_or = 84,
  anon_sym_AMP_AMP = 85,
  anon_sym_and = 86,
  anon_sym_PIPE = 87,
  anon_sym_CARET = 88,
  anon_sym_xor = 89,
  anon_sym_EQ_EQ = 90,
  anon_sym_BANG_EQ = 91,
  anon_sym_GT_EQ = 92,
  anon_sym_LT_EQ = 93,
  anon_sym_is = 94,
  anon_sym_BANGis = 95,
  anon_sym_LT_LT = 96,
  anon_sym_GT_GT = 97,
  anon_sym_GT_GT_GT = 98,
  anon_sym_DASH_DASH = 99,
  anon_sym_PLUS_PLUS = 100,
  anon_sym_DOT = 101,
  sym_true = 102,
  sym_false = 103,
  anon_sym_NULL = 104,
  anon_sym_nullptr = 105,
  sym_number_literal = 106,
  sym_comment = 107,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 108,
  aux_sym__multiline_string_token1 = 109,
  sym_script = 110,
  sym_func = 111,
  sym_func_location = 112,
  sym_access_specifier = 113,
  sym_parameter_list = 114,
  sym_parameter_declaration = 115,
  sym__declaration_specifier = 116,
  sym_typemod = 117,
  sym_type = 118,
  sym_datatype = 119,
  sym_scope = 120,
  sym_type_parameter = 121,
  sym_variable_definition = 122,
  sym_initlist = 123,
  sym__argument_list = 124,
  sym_argument = 125,
  sym_compound_statement = 126,
  sym__block_item = 127,
  sym__statement = 128,
  sym__non_case_statement = 129,
  sym_break_statement = 130,
  sym_continue_statement = 131,
  sym_expression_statement = 132,
  sym_return_statement = 133,
  sym_if_statement = 134,
  sym_else_clause = 135,
  sym_switch_statement = 136,
  sym_case_statement = 137,
  sym_while_statement = 138,
  sym_do_statement = 139,
  sym_for_statement = 140,
  sym__for_statement_body = 141,
  sym_parenthesized_expression = 142,
  sym_primative_type = 143,
  sym_funcattr = 144,
  sym__expression = 145,
  sym__expression_not_binary = 146,
  sym_variable_access = 147,
  sym_comma_expression = 148,
  sym_conditional_expression = 149,
  sym_string_literal = 150,
  sym__double_quote_string = 151,
  sym__single_quote_string = 152,
  sym_assignment_expression = 153,
  sym_unary_expression = 154,
  sym_binary_expression = 155,
  sym_update_expression = 156,
  sym_cast_expression = 157,
  sym_subscript_expression = 158,
  sym_call_expression = 159,
  sym_field_expression = 160,
  sym__field_identifier = 161,
  sym_null = 162,
  sym__multiline_string = 163,
  aux_sym_script_repeat1 = 164,
  aux_sym_func_location_repeat1 = 165,
  aux_sym_parameter_list_repeat1 = 166,
  aux_sym_type_repeat1 = 167,
  aux_sym_type_repeat2 = 168,
  aux_sym_scope_repeat1 = 169,
  aux_sym_type_parameter_repeat1 = 170,
  aux_sym_variable_definition_repeat1 = 171,
  aux_sym_initlist_repeat1 = 172,
  aux_sym__argument_list_repeat1 = 173,
  aux_sym_compound_statement_repeat1 = 174,
  aux_sym_case_statement_repeat1 = 175,
  aux_sym__double_quote_string_repeat1 = 176,
  aux_sym__single_quote_string_repeat1 = 177,
  aux_sym__multiline_string_repeat1 = 178,
  alias_sym_field_identifier = 179,
  alias_sym_reciever = 180,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_typedef] = "typedef",
  [anon_sym_AMP] = "&",
  [anon_sym_TILDE] = "~",
  [anon_sym_const] = "const",
  [anon_sym_shared] = "shared",
  [anon_sym_external] = "external",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_LPAREN] = "(",
  [anon_sym_void] = "void",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_inout] = "inout",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [anon_sym_QMARK] = "\?",
  [anon_sym_auto] = "auto",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_return] = "return",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_default] = "default",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_for] = "for",
  [anon_sym_int] = "int",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint] = "uint",
  [anon_sym_uint8] = "uint8",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_bool] = "bool",
  [anon_sym_override] = "override",
  [anon_sym_final] = "final",
  [anon_sym_explicit] = "explicit",
  [anon_sym_property] = "property",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "string_content",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__single_quote_string_token1] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_STAR_STAR_EQ] = "**=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_GT_GT_GT_EQ] = ">>>=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_not] = "not",
  [anon_sym_BANG] = "!",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_or] = "or",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_and] = "and",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_xor] = "xor",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_is] = "is",
  [anon_sym_BANGis] = "!is",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DOT] = ".",
  [sym_true] = "true",
  [sym_false] = "false",
  [anon_sym_NULL] = "NULL",
  [anon_sym_nullptr] = "nullptr",
  [sym_number_literal] = "number_literal",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym__multiline_string_token1] = "string_content",
  [sym_script] = "script",
  [sym_func] = "func",
  [sym_func_location] = "func_location",
  [sym_access_specifier] = "access_specifier",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym__declaration_specifier] = "_declaration_specifier",
  [sym_typemod] = "typemod",
  [sym_type] = "type",
  [sym_datatype] = "datatype",
  [sym_scope] = "scope",
  [sym_type_parameter] = "type_parameter",
  [sym_variable_definition] = "variable_definition",
  [sym_initlist] = "initlist",
  [sym__argument_list] = "_argument_list",
  [sym_argument] = "argument",
  [sym_compound_statement] = "compound_statement",
  [sym__block_item] = "_block_item",
  [sym__statement] = "_statement",
  [sym__non_case_statement] = "_non_case_statement",
  [sym_break_statement] = "break_statement",
  [sym_continue_statement] = "continue_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_return_statement] = "return_statement",
  [sym_if_statement] = "if_statement",
  [sym_else_clause] = "else_clause",
  [sym_switch_statement] = "switch_statement",
  [sym_case_statement] = "case_statement",
  [sym_while_statement] = "while_statement",
  [sym_do_statement] = "do_statement",
  [sym_for_statement] = "for_statement",
  [sym__for_statement_body] = "_for_statement_body",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_primative_type] = "primative_type",
  [sym_funcattr] = "funcattr",
  [sym__expression] = "_expression",
  [sym__expression_not_binary] = "_expression_not_binary",
  [sym_variable_access] = "variable_access",
  [sym_comma_expression] = "comma_expression",
  [sym_conditional_expression] = "conditional_expression",
  [sym_string_literal] = "string_literal",
  [sym__double_quote_string] = "_double_quote_string",
  [sym__single_quote_string] = "_single_quote_string",
  [sym_assignment_expression] = "assignment_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_update_expression] = "update_expression",
  [sym_cast_expression] = "cast_expression",
  [sym_subscript_expression] = "subscript_expression",
  [sym_call_expression] = "call_expression",
  [sym_field_expression] = "field_expression",
  [sym__field_identifier] = "_field_identifier",
  [sym_null] = "null",
  [sym__multiline_string] = "_multiline_string",
  [aux_sym_script_repeat1] = "script_repeat1",
  [aux_sym_func_location_repeat1] = "func_location_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_type_repeat2] = "type_repeat2",
  [aux_sym_scope_repeat1] = "scope_repeat1",
  [aux_sym_type_parameter_repeat1] = "type_parameter_repeat1",
  [aux_sym_variable_definition_repeat1] = "variable_definition_repeat1",
  [aux_sym_initlist_repeat1] = "initlist_repeat1",
  [aux_sym__argument_list_repeat1] = "_argument_list_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
  [aux_sym_case_statement_repeat1] = "case_statement_repeat1",
  [aux_sym__double_quote_string_repeat1] = "_double_quote_string_repeat1",
  [aux_sym__single_quote_string_repeat1] = "_single_quote_string_repeat1",
  [aux_sym__multiline_string_repeat1] = "_multiline_string_repeat1",
  [alias_sym_field_identifier] = "field_identifier",
  [alias_sym_reciever] = "reciever",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_shared] = anon_sym_shared,
  [anon_sym_external] = anon_sym_external,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_inout] = anon_sym_inout,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_auto] = anon_sym_auto,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_explicit] = anon_sym_explicit,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_token1] = aux_sym__double_quote_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__single_quote_string_token1] = aux_sym__double_quote_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_STAR_STAR_EQ] = anon_sym_STAR_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_GT_GT_GT_EQ] = anon_sym_GT_GT_GT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_BANGis] = anon_sym_BANGis,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_nullptr] = anon_sym_nullptr,
  [sym_number_literal] = sym_number_literal,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym__multiline_string_token1] = aux_sym__double_quote_string_token1,
  [sym_script] = sym_script,
  [sym_func] = sym_func,
  [sym_func_location] = sym_func_location,
  [sym_access_specifier] = sym_access_specifier,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym__declaration_specifier] = sym__declaration_specifier,
  [sym_typemod] = sym_typemod,
  [sym_type] = sym_type,
  [sym_datatype] = sym_datatype,
  [sym_scope] = sym_scope,
  [sym_type_parameter] = sym_type_parameter,
  [sym_variable_definition] = sym_variable_definition,
  [sym_initlist] = sym_initlist,
  [sym__argument_list] = sym__argument_list,
  [sym_argument] = sym_argument,
  [sym_compound_statement] = sym_compound_statement,
  [sym__block_item] = sym__block_item,
  [sym__statement] = sym__statement,
  [sym__non_case_statement] = sym__non_case_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_continue_statement] = sym_continue_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_else_clause] = sym_else_clause,
  [sym_switch_statement] = sym_switch_statement,
  [sym_case_statement] = sym_case_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_do_statement] = sym_do_statement,
  [sym_for_statement] = sym_for_statement,
  [sym__for_statement_body] = sym__for_statement_body,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_primative_type] = sym_primative_type,
  [sym_funcattr] = sym_funcattr,
  [sym__expression] = sym__expression,
  [sym__expression_not_binary] = sym__expression_not_binary,
  [sym_variable_access] = sym_variable_access,
  [sym_comma_expression] = sym_comma_expression,
  [sym_conditional_expression] = sym_conditional_expression,
  [sym_string_literal] = sym_string_literal,
  [sym__double_quote_string] = sym__double_quote_string,
  [sym__single_quote_string] = sym__single_quote_string,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_update_expression] = sym_update_expression,
  [sym_cast_expression] = sym_cast_expression,
  [sym_subscript_expression] = sym_subscript_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_field_expression] = sym_field_expression,
  [sym__field_identifier] = sym__field_identifier,
  [sym_null] = sym_null,
  [sym__multiline_string] = sym__multiline_string,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
  [aux_sym_func_location_repeat1] = aux_sym_func_location_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_type_repeat2] = aux_sym_type_repeat2,
  [aux_sym_scope_repeat1] = aux_sym_scope_repeat1,
  [aux_sym_type_parameter_repeat1] = aux_sym_type_parameter_repeat1,
  [aux_sym_variable_definition_repeat1] = aux_sym_variable_definition_repeat1,
  [aux_sym_initlist_repeat1] = aux_sym_initlist_repeat1,
  [aux_sym__argument_list_repeat1] = aux_sym__argument_list_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
  [aux_sym_case_statement_repeat1] = aux_sym_case_statement_repeat1,
  [aux_sym__double_quote_string_repeat1] = aux_sym__double_quote_string_repeat1,
  [aux_sym__single_quote_string_repeat1] = aux_sym__single_quote_string_repeat1,
  [aux_sym__multiline_string_repeat1] = aux_sym__multiline_string_repeat1,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
  [alias_sym_reciever] = alias_sym_reciever,
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
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shared] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inout] = {
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
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
  [anon_sym_LBRACE] = {
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
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_explicit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quote_string_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__single_quote_string_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nullptr] = {
    .visible = true,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__multiline_string_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_func_location] = {
    .visible = true,
    .named = true,
  },
  [sym_access_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration_specifier] = {
    .visible = false,
    .named = true,
  },
  [sym_typemod] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_initlist] = {
    .visible = true,
    .named = true,
  },
  [sym__argument_list] = {
    .visible = false,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__block_item] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__non_case_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_case_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_do_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__for_statement_body] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primative_type] = {
    .visible = true,
    .named = true,
  },
  [sym_funcattr] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_not_binary] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_access] = {
    .visible = true,
    .named = true,
  },
  [sym_comma_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__double_quote_string] = {
    .visible = false,
    .named = true,
  },
  [sym__single_quote_string] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_update_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__field_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_location_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scope_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_initlist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quote_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__single_quote_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_reciever] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternative = 1,
  field_argument = 2,
  field_arguments = 3,
  field_attr = 4,
  field_body = 5,
  field_condition = 6,
  field_consequence = 7,
  field_const = 8,
  field_default = 9,
  field_field = 10,
  field_function = 11,
  field_index = 12,
  field_initializer = 13,
  field_left = 14,
  field_name = 15,
  field_operator = 16,
  field_parameters = 17,
  field_right = 18,
  field_scope = 19,
  field_specifier = 20,
  field_type = 21,
  field_type_modifier = 22,
  field_update = 23,
  field_value = 24,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_attr] = "attr",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_const] = "const",
  [field_default] = "default",
  [field_field] = "field",
  [field_function] = "function",
  [field_index] = "index",
  [field_initializer] = "initializer",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_scope] = "scope",
  [field_specifier] = "specifier",
  [field_type] = "type",
  [field_type_modifier] = "type_modifier",
  [field_update] = "update",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 1},
  [14] = {.index = 22, .length = 3},
  [15] = {.index = 25, .length = 3},
  [16] = {.index = 28, .length = 4},
  [17] = {.index = 32, .length = 2},
  [18] = {.index = 34, .length = 3},
  [19] = {.index = 37, .length = 1},
  [20] = {.index = 38, .length = 3},
  [21] = {.index = 41, .length = 2},
  [22] = {.index = 43, .length = 3},
  [23] = {.index = 46, .length = 4},
  [24] = {.index = 50, .length = 3},
  [25] = {.index = 53, .length = 4},
  [26] = {.index = 57, .length = 3},
  [27] = {.index = 60, .length = 4},
  [28] = {.index = 64, .length = 2},
  [29] = {.index = 66, .length = 2},
  [30] = {.index = 68, .length = 2},
  [31] = {.index = 70, .length = 4},
  [32] = {.index = 74, .length = 5},
  [33] = {.index = 79, .length = 4},
  [34] = {.index = 83, .length = 5},
  [35] = {.index = 88, .length = 2},
  [36] = {.index = 90, .length = 1},
  [37] = {.index = 91, .length = 1},
  [38] = {.index = 92, .length = 2},
  [39] = {.index = 94, .length = 2},
  [40] = {.index = 96, .length = 4},
  [41] = {.index = 100, .length = 2},
  [42] = {.index = 102, .length = 4},
  [43] = {.index = 106, .length = 5},
  [44] = {.index = 111, .length = 4},
  [45] = {.index = 115, .length = 5},
  [46] = {.index = 120, .length = 4},
  [47] = {.index = 124, .length = 5},
  [48] = {.index = 129, .length = 4},
  [49] = {.index = 133, .length = 5},
  [50] = {.index = 138, .length = 4},
  [51] = {.index = 142, .length = 5},
  [52] = {.index = 147, .length = 4},
  [53] = {.index = 151, .length = 5},
  [54] = {.index = 156, .length = 2},
  [55] = {.index = 158, .length = 3},
  [56] = {.index = 161, .length = 5},
  [57] = {.index = 166, .length = 6},
  [58] = {.index = 172, .length = 2},
  [59] = {.index = 174, .length = 3},
  [60] = {.index = 177, .length = 2},
  [61] = {.index = 179, .length = 2},
  [62] = {.index = 181, .length = 4},
  [63] = {.index = 185, .length = 5},
  [64] = {.index = 190, .length = 6},
  [65] = {.index = 196, .length = 5},
  [66] = {.index = 201, .length = 6},
  [67] = {.index = 207, .length = 5},
  [68] = {.index = 212, .length = 6},
  [69] = {.index = 218, .length = 5},
  [70] = {.index = 223, .length = 6},
  [71] = {.index = 229, .length = 5},
  [72] = {.index = 234, .length = 6},
  [73] = {.index = 240, .length = 5},
  [74] = {.index = 245, .length = 6},
  [75] = {.index = 251, .length = 5},
  [76] = {.index = 256, .length = 6},
  [77] = {.index = 262, .length = 5},
  [78] = {.index = 267, .length = 6},
  [79] = {.index = 273, .length = 5},
  [80] = {.index = 278, .length = 6},
  [81] = {.index = 284, .length = 3},
  [82] = {.index = 287, .length = 6},
  [83] = {.index = 293, .length = 7},
  [84] = {.index = 300, .length = 6},
  [85] = {.index = 306, .length = 7},
  [86] = {.index = 313, .length = 6},
  [87] = {.index = 319, .length = 7},
  [88] = {.index = 326, .length = 6},
  [89] = {.index = 332, .length = 7},
  [90] = {.index = 339, .length = 6},
  [91] = {.index = 345, .length = 7},
  [92] = {.index = 352, .length = 6},
  [93] = {.index = 358, .length = 7},
  [94] = {.index = 365, .length = 6},
  [95] = {.index = 371, .length = 7},
  [96] = {.index = 378, .length = 6},
  [97] = {.index = 384, .length = 7},
  [98] = {.index = 391, .length = 7},
  [99] = {.index = 398, .length = 8},
  [100] = {.index = 406, .length = 7},
  [101] = {.index = 413, .length = 8},
  [102] = {.index = 421, .length = 7},
  [103] = {.index = 428, .length = 8},
  [104] = {.index = 436, .length = 7},
  [105] = {.index = 443, .length = 8},
  [106] = {.index = 451, .length = 8},
  [107] = {.index = 459, .length = 9},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 1},
    {field_operator, 0},
  [2] =
    {field_scope, 0},
  [3] =
    {field_argument, 0},
    {field_operator, 1},
  [5] =
    {field_arguments, 1},
    {field_function, 0},
  [7] =
    {field_condition, 1},
    {field_consequence, 2},
  [9] =
    {field_body, 2},
    {field_condition, 1},
  [11] =
    {field_value, 1},
  [12] =
    {field_type, 0},
  [13] =
    {field_name, 0},
    {field_parameters, 1},
  [15] =
    {field_body, 2},
    {field_name, 0},
    {field_parameters, 1},
  [18] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [21] =
    {field_value, 0},
  [22] =
    {field_argument, 0},
    {field_field, 2},
    {field_operator, 1},
  [25] =
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 0},
  [28] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 0},
  [32] =
    {field_type, 1},
    {field_value, 3},
  [34] =
    {field_alternative, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [37] =
    {field_initializer, 0},
  [38] =
    {field_name, 1},
    {field_type, 0, .inherited = true},
    {field_type_modifier, 0, .inherited = true},
  [41] =
    {field_type, 0},
    {field_type_modifier, 1},
  [43] =
    {field_const, 2},
    {field_name, 0},
    {field_parameters, 1},
  [46] =
    {field_body, 3},
    {field_const, 2},
    {field_name, 0},
    {field_parameters, 1},
  [50] =
    {field_attr, 2},
    {field_name, 0},
    {field_parameters, 1},
  [53] =
    {field_attr, 2},
    {field_body, 3},
    {field_name, 0},
    {field_parameters, 1},
  [57] =
    {field_name, 1},
    {field_parameters, 2},
    {field_specifier, 0},
  [60] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
    {field_specifier, 0},
  [64] =
    {field_type, 0},
    {field_value, 2},
  [66] =
    {field_argument, 0},
    {field_index, 2},
  [68] =
    {field_alternative, 3},
    {field_condition, 0},
  [70] =
    {field_const, 3},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 0},
  [74] =
    {field_body, 4},
    {field_const, 3},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 0},
  [79] =
    {field_attr, 3},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 0},
  [83] =
    {field_attr, 3},
    {field_body, 4},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 0},
  [88] =
    {field_body, 1},
    {field_condition, 3},
  [90] =
    {field_update, 2},
  [91] =
    {field_condition, 1},
  [92] =
    {field_initializer, 0},
    {field_update, 2},
  [94] =
    {field_condition, 1},
    {field_initializer, 0},
  [96] =
    {field_body, 4},
    {field_condition, 2, .inherited = true},
    {field_initializer, 2, .inherited = true},
    {field_update, 2, .inherited = true},
  [100] =
    {field_left, 0},
    {field_right, 2},
  [102] =
    {field_attr, 3},
    {field_const, 2},
    {field_name, 0},
    {field_parameters, 1},
  [106] =
    {field_attr, 3},
    {field_body, 4},
    {field_const, 2},
    {field_name, 0},
    {field_parameters, 1},
  [111] =
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_type, 1},
  [115] =
    {field_body, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_type, 1},
  [120] =
    {field_const, 3},
    {field_name, 1},
    {field_parameters, 2},
    {field_specifier, 0},
  [124] =
    {field_body, 4},
    {field_const, 3},
    {field_name, 1},
    {field_parameters, 2},
    {field_specifier, 0},
  [129] =
    {field_attr, 3},
    {field_name, 1},
    {field_parameters, 2},
    {field_specifier, 0},
  [133] =
    {field_attr, 3},
    {field_body, 4},
    {field_name, 1},
    {field_parameters, 2},
    {field_specifier, 0},
  [138] =
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_specifier, 1},
  [142] =
    {field_body, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_specifier, 1},
  [147] =
    {field_name, 2},
    {field_parameters, 3},
    {field_type, 0},
    {field_type, 1},
  [151] =
    {field_body, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_type, 0},
    {field_type, 1},
  [156] =
    {field_name, 0},
    {field_value, 2},
  [158] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [161] =
    {field_attr, 4},
    {field_const, 3},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 0},
  [166] =
    {field_attr, 4},
    {field_body, 5},
    {field_const, 3},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 0},
  [172] =
    {field_condition, 1},
    {field_update, 3},
  [174] =
    {field_condition, 1},
    {field_initializer, 0},
    {field_update, 3},
  [177] =
    {field_initializer, 0},
    {field_update, 3},
  [179] =
    {field_condition, 2},
    {field_initializer, 0},
  [181] =
    {field_default, 3},
    {field_name, 1},
    {field_type, 0, .inherited = true},
    {field_type_modifier, 0, .inherited = true},
  [185] =
    {field_const, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_type, 1},
  [190] =
    {field_body, 5},
    {field_const, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_type, 1},
  [196] =
    {field_attr, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_type, 1},
  [201] =
    {field_attr, 4},
    {field_body, 5},
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_type, 1},
  [207] =
    {field_attr, 4},
    {field_const, 3},
    {field_name, 1},
    {field_parameters, 2},
    {field_specifier, 0},
  [212] =
    {field_attr, 4},
    {field_body, 5},
    {field_const, 3},
    {field_name, 1},
    {field_parameters, 2},
    {field_specifier, 0},
  [218] =
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
  [223] =
    {field_body, 5},
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
  [229] =
    {field_const, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_specifier, 1},
  [234] =
    {field_body, 5},
    {field_const, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_specifier, 1},
  [240] =
    {field_attr, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_specifier, 1},
  [245] =
    {field_attr, 4},
    {field_body, 5},
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_specifier, 1},
  [251] =
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_type, 1},
    {field_type, 2},
  [256] =
    {field_body, 5},
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_type, 1},
    {field_type, 2},
  [262] =
    {field_const, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_type, 0},
    {field_type, 1},
  [267] =
    {field_body, 5},
    {field_const, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_type, 0},
    {field_type, 1},
  [273] =
    {field_attr, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_type, 0},
    {field_type, 1},
  [278] =
    {field_attr, 4},
    {field_body, 5},
    {field_name, 2},
    {field_parameters, 3},
    {field_type, 0},
    {field_type, 1},
  [284] =
    {field_condition, 2},
    {field_initializer, 0},
    {field_update, 4},
  [287] =
    {field_attr, 5},
    {field_const, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_type, 1},
  [293] =
    {field_attr, 5},
    {field_body, 6},
    {field_const, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_type, 1},
  [300] =
    {field_const, 5},
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
  [306] =
    {field_body, 6},
    {field_const, 5},
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
  [313] =
    {field_attr, 5},
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
  [319] =
    {field_attr, 5},
    {field_body, 6},
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
  [326] =
    {field_attr, 5},
    {field_const, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_specifier, 1},
  [332] =
    {field_attr, 5},
    {field_body, 6},
    {field_const, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_specifier, 0},
    {field_specifier, 1},
  [339] =
    {field_name, 4},
    {field_parameters, 5},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
    {field_type, 3},
  [345] =
    {field_body, 6},
    {field_name, 4},
    {field_parameters, 5},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
    {field_type, 3},
  [352] =
    {field_const, 5},
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_type, 1},
    {field_type, 2},
  [358] =
    {field_body, 6},
    {field_const, 5},
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_type, 1},
    {field_type, 2},
  [365] =
    {field_attr, 5},
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_type, 1},
    {field_type, 2},
  [371] =
    {field_attr, 5},
    {field_body, 6},
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_type, 1},
    {field_type, 2},
  [378] =
    {field_attr, 5},
    {field_const, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_type, 0},
    {field_type, 1},
  [384] =
    {field_attr, 5},
    {field_body, 6},
    {field_const, 4},
    {field_name, 2},
    {field_parameters, 3},
    {field_type, 0},
    {field_type, 1},
  [391] =
    {field_attr, 6},
    {field_const, 5},
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
  [398] =
    {field_attr, 6},
    {field_body, 7},
    {field_const, 5},
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
  [406] =
    {field_const, 6},
    {field_name, 4},
    {field_parameters, 5},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
    {field_type, 3},
  [413] =
    {field_body, 7},
    {field_const, 6},
    {field_name, 4},
    {field_parameters, 5},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
    {field_type, 3},
  [421] =
    {field_attr, 6},
    {field_name, 4},
    {field_parameters, 5},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
    {field_type, 3},
  [428] =
    {field_attr, 6},
    {field_body, 7},
    {field_name, 4},
    {field_parameters, 5},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
    {field_type, 3},
  [436] =
    {field_attr, 6},
    {field_const, 5},
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_type, 1},
    {field_type, 2},
  [443] =
    {field_attr, 6},
    {field_body, 7},
    {field_const, 5},
    {field_name, 3},
    {field_parameters, 4},
    {field_specifier, 0},
    {field_type, 1},
    {field_type, 2},
  [451] =
    {field_attr, 7},
    {field_const, 6},
    {field_name, 4},
    {field_parameters, 5},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
    {field_type, 3},
  [459] =
    {field_attr, 7},
    {field_body, 8},
    {field_const, 6},
    {field_name, 4},
    {field_parameters, 5},
    {field_specifier, 0},
    {field_specifier, 1},
    {field_type, 2},
    {field_type, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = alias_sym_reciever,
  },
  [13] = {
    [0] = alias_sym_field_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__expression, 2,
    sym__expression,
    alias_sym_reciever,
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
  [67] = 62,
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
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
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
  [197] = 196,
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
  [219] = 218,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 157,
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
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 241,
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
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
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
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= '_')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'B'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_number_literal_character_set_1(int32_t c) {
  return (c < 'b'
    ? (c < 'L'
      ? (c < 'D'
        ? c == 'B'
        : c <= 'F')
      : (c <= 'L' || (c < 'W'
        ? c == 'U'
        : c <= 'W')))
    : (c <= 'b' || (c < 'u'
      ? (c < 'l'
        ? (c >= 'd' && c <= 'f')
        : c <= 'l')
      : (c <= 'u' || c == 'w'))));
}

static inline bool sym_number_literal_character_set_2(int32_t c) {
  return (c < 'b'
    ? (c < 'L'
      ? (c < 'D'
        ? c == 'B'
        : (c <= 'D' || c == 'F'))
      : (c <= 'L' || (c < 'W'
        ? c == 'U'
        : c <= 'W')))
    : (c <= 'b' || (c < 'l'
      ? (c < 'f'
        ? c == 'd'
        : c <= 'f')
      : (c <= 'l' || (c < 'w'
        ? c == 'u'
        : c <= 'w')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(119);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '&') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '?') ADVANCE(60);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') SKIP(44)
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '~') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(96);
      if (lookahead == 'U') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == 'U') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == 'U') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(200);
      if (lookahead == 'x') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '&') ADVANCE(51);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '?') ADVANCE(60);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '&') ADVANCE(51);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '?') ADVANCE(60);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(166);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(165);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '0') ADVANCE(148);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(198);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(198);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(198);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(198);
      END_STATE();
    case 41:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(213);
      END_STATE();
    case 42:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(40);
      END_STATE();
    case 43:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 44:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(43)
      END_STATE();
    case 45:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 46:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(45)
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(118);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '&') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '+') ADVANCE(124);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == '?') ADVANCE(60);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') SKIP(46)
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '~') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '=') ADVANCE(115);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(134);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '>') ADVANCE(140);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(72);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(82);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(82);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(82);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(74);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(75);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(71);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(71);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(78);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(82);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(80);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(81);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(77);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(77);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(176);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(176);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(198);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(198);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(213);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(40);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(135);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == '=') ADVANCE(111);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '0') ADVANCE(150);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(143);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == '=') ADVANCE(110);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(143);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '0') ADVANCE(150);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(143);
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '|') ADVANCE(130);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BANGis);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == '>') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead == '=') ADVANCE(114);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(147);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(156);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(157);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(157);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(159);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(161);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(159);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(157);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '0') ADVANCE(151);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(147);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(147);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(154);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(174);
      if (lookahead == 'U') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == 'x') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(193);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(193);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == 'U') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == 'x') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == 'U') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != 'u' &&
          lookahead != 'x') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == 'x') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(193);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(193);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\\') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\\') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\\') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\\') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\\') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\\') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\\') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\\') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\\') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\\') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\\') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(193);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\\') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(193);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\\') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(193);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(193);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'F' < lookahead) &&
          (lookahead < 'a' || 'f' < lookahead)) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'F' < lookahead) &&
          (lookahead < 'a' || 'f' < lookahead)) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'F' < lookahead) &&
          (lookahead < 'a' || 'f' < lookahead)) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'F' < lookahead) &&
          (lookahead < 'a' || 'f' < lookahead)) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'F' < lookahead) &&
          (lookahead < 'a' || 'f' < lookahead)) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'F' < lookahead) &&
          (lookahead < 'a' || 'f' < lookahead)) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'F' < lookahead) &&
          (lookahead < 'a' || 'f' < lookahead)) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'F' < lookahead) &&
          (lookahead < 'a' || 'f' < lookahead)) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'F' < lookahead) &&
          (lookahead < 'a' || 'f' < lookahead)) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'F' < lookahead) &&
          (lookahead < 'a' || 'f' < lookahead)) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'F' < lookahead) &&
          (lookahead < 'a' || 'f' < lookahead)) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(193);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(214);
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
      if (lookahead == 'N') ADVANCE(1);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'U') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'v') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 52:
      if (lookahead == 'L') ADVANCE(83);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '3') ADVANCE(99);
      if (lookahead == '6') ADVANCE(100);
      if (lookahead == '8') ADVANCE(101);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 73:
      if (lookahead == 'v') ADVANCE(104);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(114);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 98:
      if (lookahead == '6') ADVANCE(124);
      END_STATE();
    case 99:
      if (lookahead == '2') ADVANCE(125);
      END_STATE();
    case 100:
      if (lookahead == '4') ADVANCE(126);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(136);
      if (lookahead == '3') ADVANCE(137);
      if (lookahead == '6') ADVANCE(138);
      if (lookahead == '8') ADVANCE(139);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(153);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 136:
      if (lookahead == '6') ADVANCE(155);
      END_STATE();
    case 137:
      if (lookahead == '2') ADVANCE(156);
      END_STATE();
    case 138:
      if (lookahead == '4') ADVANCE(157);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_shared);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 154:
      if (lookahead == 'f') ADVANCE(167);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_nullptr);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 165:
      if (lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_explicit);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 47},
  [3] = {.lex_state = 47},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 47},
  [6] = {.lex_state = 47},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 47},
  [15] = {.lex_state = 47},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 47},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 47},
  [21] = {.lex_state = 47},
  [22] = {.lex_state = 47},
  [23] = {.lex_state = 47},
  [24] = {.lex_state = 47},
  [25] = {.lex_state = 47},
  [26] = {.lex_state = 47},
  [27] = {.lex_state = 47},
  [28] = {.lex_state = 47},
  [29] = {.lex_state = 47},
  [30] = {.lex_state = 47},
  [31] = {.lex_state = 47},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 47},
  [35] = {.lex_state = 47},
  [36] = {.lex_state = 47},
  [37] = {.lex_state = 47},
  [38] = {.lex_state = 47},
  [39] = {.lex_state = 47},
  [40] = {.lex_state = 47},
  [41] = {.lex_state = 47},
  [42] = {.lex_state = 47},
  [43] = {.lex_state = 47},
  [44] = {.lex_state = 47},
  [45] = {.lex_state = 47},
  [46] = {.lex_state = 47},
  [47] = {.lex_state = 47},
  [48] = {.lex_state = 47},
  [49] = {.lex_state = 47},
  [50] = {.lex_state = 47},
  [51] = {.lex_state = 47},
  [52] = {.lex_state = 47},
  [53] = {.lex_state = 47},
  [54] = {.lex_state = 47},
  [55] = {.lex_state = 47},
  [56] = {.lex_state = 47},
  [57] = {.lex_state = 47},
  [58] = {.lex_state = 47},
  [59] = {.lex_state = 47},
  [60] = {.lex_state = 47},
  [61] = {.lex_state = 47},
  [62] = {.lex_state = 47},
  [63] = {.lex_state = 47},
  [64] = {.lex_state = 47},
  [65] = {.lex_state = 47},
  [66] = {.lex_state = 47},
  [67] = {.lex_state = 47},
  [68] = {.lex_state = 47},
  [69] = {.lex_state = 47},
  [70] = {.lex_state = 47},
  [71] = {.lex_state = 47},
  [72] = {.lex_state = 47},
  [73] = {.lex_state = 47},
  [74] = {.lex_state = 47},
  [75] = {.lex_state = 47},
  [76] = {.lex_state = 47},
  [77] = {.lex_state = 47},
  [78] = {.lex_state = 47},
  [79] = {.lex_state = 47},
  [80] = {.lex_state = 47},
  [81] = {.lex_state = 47},
  [82] = {.lex_state = 47},
  [83] = {.lex_state = 47},
  [84] = {.lex_state = 47},
  [85] = {.lex_state = 47},
  [86] = {.lex_state = 47},
  [87] = {.lex_state = 47},
  [88] = {.lex_state = 47},
  [89] = {.lex_state = 47},
  [90] = {.lex_state = 47},
  [91] = {.lex_state = 47},
  [92] = {.lex_state = 47},
  [93] = {.lex_state = 47},
  [94] = {.lex_state = 47},
  [95] = {.lex_state = 47},
  [96] = {.lex_state = 47},
  [97] = {.lex_state = 47},
  [98] = {.lex_state = 47},
  [99] = {.lex_state = 47},
  [100] = {.lex_state = 47},
  [101] = {.lex_state = 47},
  [102] = {.lex_state = 47},
  [103] = {.lex_state = 47},
  [104] = {.lex_state = 47},
  [105] = {.lex_state = 47},
  [106] = {.lex_state = 47},
  [107] = {.lex_state = 47},
  [108] = {.lex_state = 47},
  [109] = {.lex_state = 47},
  [110] = {.lex_state = 47},
  [111] = {.lex_state = 47},
  [112] = {.lex_state = 47},
  [113] = {.lex_state = 47},
  [114] = {.lex_state = 47},
  [115] = {.lex_state = 47},
  [116] = {.lex_state = 47},
  [117] = {.lex_state = 47},
  [118] = {.lex_state = 47},
  [119] = {.lex_state = 47},
  [120] = {.lex_state = 47},
  [121] = {.lex_state = 47},
  [122] = {.lex_state = 47},
  [123] = {.lex_state = 47},
  [124] = {.lex_state = 47},
  [125] = {.lex_state = 47},
  [126] = {.lex_state = 47},
  [127] = {.lex_state = 47},
  [128] = {.lex_state = 47},
  [129] = {.lex_state = 47},
  [130] = {.lex_state = 47},
  [131] = {.lex_state = 47},
  [132] = {.lex_state = 47},
  [133] = {.lex_state = 47},
  [134] = {.lex_state = 47},
  [135] = {.lex_state = 47},
  [136] = {.lex_state = 47},
  [137] = {.lex_state = 47},
  [138] = {.lex_state = 47},
  [139] = {.lex_state = 47},
  [140] = {.lex_state = 47},
  [141] = {.lex_state = 47},
  [142] = {.lex_state = 47},
  [143] = {.lex_state = 47},
  [144] = {.lex_state = 47},
  [145] = {.lex_state = 47},
  [146] = {.lex_state = 47},
  [147] = {.lex_state = 47},
  [148] = {.lex_state = 47},
  [149] = {.lex_state = 47},
  [150] = {.lex_state = 47},
  [151] = {.lex_state = 47},
  [152] = {.lex_state = 47},
  [153] = {.lex_state = 47},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 11},
  [160] = {.lex_state = 11},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 11},
  [168] = {.lex_state = 11},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 11},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 11},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 11},
  [193] = {.lex_state = 11},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 11},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 11},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 47},
  [226] = {.lex_state = 47},
  [227] = {.lex_state = 47},
  [228] = {.lex_state = 47},
  [229] = {.lex_state = 47},
  [230] = {.lex_state = 47},
  [231] = {.lex_state = 47},
  [232] = {.lex_state = 47},
  [233] = {.lex_state = 47},
  [234] = {.lex_state = 47},
  [235] = {.lex_state = 47},
  [236] = {.lex_state = 47},
  [237] = {.lex_state = 47},
  [238] = {.lex_state = 47},
  [239] = {.lex_state = 47},
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
  [250] = {.lex_state = 47},
  [251] = {.lex_state = 47},
  [252] = {.lex_state = 47},
  [253] = {.lex_state = 47},
  [254] = {.lex_state = 47},
  [255] = {.lex_state = 47},
  [256] = {.lex_state = 47},
  [257] = {.lex_state = 47},
  [258] = {.lex_state = 47},
  [259] = {.lex_state = 47},
  [260] = {.lex_state = 47},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 47},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 47},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 47},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 47},
  [281] = {.lex_state = 47},
  [282] = {.lex_state = 47},
  [283] = {.lex_state = 47},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 47},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 47},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 47},
  [291] = {.lex_state = 47},
  [292] = {.lex_state = 47},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 15},
  [303] = {.lex_state = 15},
  [304] = {.lex_state = 47},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 8},
  [307] = {.lex_state = 8},
  [308] = {.lex_state = 8},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 15},
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
  [328] = {.lex_state = 47},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 47},
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
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 47},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 47},
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
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 47},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 47},
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
  [412] = {.lex_state = 11},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_shared] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_auto] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_explicit] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_nullptr] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_script] = STATE(405),
    [sym_func] = STATE(3),
    [sym_func_location] = STATE(226),
    [sym_access_specifier] = STATE(233),
    [sym_type] = STATE(367),
    [sym_datatype] = STATE(255),
    [sym_scope] = STATE(241),
    [sym_type_parameter] = STATE(402),
    [sym_variable_definition] = STATE(3),
    [sym_compound_statement] = STATE(3),
    [sym__block_item] = STATE(3),
    [sym__statement] = STATE(3),
    [sym__non_case_statement] = STATE(3),
    [sym_break_statement] = STATE(3),
    [sym_continue_statement] = STATE(3),
    [sym_expression_statement] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_switch_statement] = STATE(3),
    [sym_case_statement] = STATE(3),
    [sym_while_statement] = STATE(3),
    [sym_do_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(291),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [aux_sym_script_repeat1] = STATE(3),
    [aux_sym_func_location_repeat1] = STATE(234),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_shared] = ACTIONS(13),
    [anon_sym_external] = ACTIONS(13),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_auto] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_break] = ACTIONS(33),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_case] = ACTIONS(43),
    [anon_sym_default] = ACTIONS(45),
    [anon_sym_while] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_int8] = ACTIONS(19),
    [anon_sym_int16] = ACTIONS(19),
    [anon_sym_int32] = ACTIONS(19),
    [anon_sym_int64] = ACTIONS(19),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(19),
    [anon_sym_uint16] = ACTIONS(19),
    [anon_sym_uint32] = ACTIONS(19),
    [anon_sym_uint64] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [anon_sym_NULL] = ACTIONS(63),
    [anon_sym_nullptr] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(67),
  },
  [2] = {
    [sym_func] = STATE(2),
    [sym_func_location] = STATE(226),
    [sym_access_specifier] = STATE(233),
    [sym_type] = STATE(367),
    [sym_datatype] = STATE(255),
    [sym_scope] = STATE(241),
    [sym_type_parameter] = STATE(402),
    [sym_variable_definition] = STATE(2),
    [sym_compound_statement] = STATE(2),
    [sym__block_item] = STATE(2),
    [sym__statement] = STATE(2),
    [sym__non_case_statement] = STATE(2),
    [sym_break_statement] = STATE(2),
    [sym_continue_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_case_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_do_statement] = STATE(2),
    [sym_for_statement] = STATE(2),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(291),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [aux_sym_script_repeat1] = STATE(2),
    [aux_sym_func_location_repeat1] = STATE(234),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_const] = ACTIONS(80),
    [anon_sym_shared] = ACTIONS(83),
    [anon_sym_external] = ACTIONS(83),
    [anon_sym_private] = ACTIONS(86),
    [anon_sym_protected] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_void] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(95),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_auto] = ACTIONS(101),
    [anon_sym_COLON_COLON] = ACTIONS(104),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_break] = ACTIONS(113),
    [anon_sym_continue] = ACTIONS(116),
    [anon_sym_return] = ACTIONS(119),
    [anon_sym_if] = ACTIONS(122),
    [anon_sym_switch] = ACTIONS(125),
    [anon_sym_case] = ACTIONS(128),
    [anon_sym_default] = ACTIONS(131),
    [anon_sym_while] = ACTIONS(134),
    [anon_sym_do] = ACTIONS(137),
    [anon_sym_for] = ACTIONS(140),
    [anon_sym_int] = ACTIONS(92),
    [anon_sym_int8] = ACTIONS(92),
    [anon_sym_int16] = ACTIONS(92),
    [anon_sym_int32] = ACTIONS(92),
    [anon_sym_int64] = ACTIONS(92),
    [anon_sym_uint] = ACTIONS(92),
    [anon_sym_uint8] = ACTIONS(92),
    [anon_sym_uint16] = ACTIONS(92),
    [anon_sym_uint32] = ACTIONS(92),
    [anon_sym_uint64] = ACTIONS(92),
    [anon_sym_float] = ACTIONS(92),
    [anon_sym_double] = ACTIONS(92),
    [anon_sym_bool] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(146),
    [anon_sym_not] = ACTIONS(149),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH_DASH] = ACTIONS(152),
    [anon_sym_PLUS_PLUS] = ACTIONS(152),
    [sym_true] = ACTIONS(155),
    [sym_false] = ACTIONS(155),
    [anon_sym_NULL] = ACTIONS(158),
    [anon_sym_nullptr] = ACTIONS(158),
    [sym_number_literal] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(164),
  },
  [3] = {
    [sym_func] = STATE(2),
    [sym_func_location] = STATE(226),
    [sym_access_specifier] = STATE(233),
    [sym_type] = STATE(367),
    [sym_datatype] = STATE(255),
    [sym_scope] = STATE(241),
    [sym_type_parameter] = STATE(402),
    [sym_variable_definition] = STATE(2),
    [sym_compound_statement] = STATE(2),
    [sym__block_item] = STATE(2),
    [sym__statement] = STATE(2),
    [sym__non_case_statement] = STATE(2),
    [sym_break_statement] = STATE(2),
    [sym_continue_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_case_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_do_statement] = STATE(2),
    [sym_for_statement] = STATE(2),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(291),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [aux_sym_script_repeat1] = STATE(2),
    [aux_sym_func_location_repeat1] = STATE(234),
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_shared] = ACTIONS(13),
    [anon_sym_external] = ACTIONS(13),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_auto] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_break] = ACTIONS(33),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_case] = ACTIONS(43),
    [anon_sym_default] = ACTIONS(45),
    [anon_sym_while] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_int8] = ACTIONS(19),
    [anon_sym_int16] = ACTIONS(19),
    [anon_sym_int32] = ACTIONS(19),
    [anon_sym_int64] = ACTIONS(19),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(19),
    [anon_sym_uint16] = ACTIONS(19),
    [anon_sym_uint32] = ACTIONS(19),
    [anon_sym_uint64] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [anon_sym_NULL] = ACTIONS(63),
    [anon_sym_nullptr] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(67),
  },
  [4] = {
    [sym_access_specifier] = STATE(236),
    [sym_type] = STATE(390),
    [sym_datatype] = STATE(255),
    [sym_scope] = STATE(243),
    [sym_type_parameter] = STATE(402),
    [sym_variable_definition] = STATE(5),
    [sym_compound_statement] = STATE(5),
    [sym__non_case_statement] = STATE(5),
    [sym_break_statement] = STATE(5),
    [sym_continue_statement] = STATE(5),
    [sym_expression_statement] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym_if_statement] = STATE(5),
    [sym_switch_statement] = STATE(5),
    [sym_while_statement] = STATE(5),
    [sym_do_statement] = STATE(5),
    [sym_for_statement] = STATE(5),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(291),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [aux_sym_case_statement_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_identifier] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_shared] = ACTIONS(175),
    [anon_sym_external] = ACTIONS(175),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_auto] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_break] = ACTIONS(33),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_else] = ACTIONS(175),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_case] = ACTIONS(175),
    [anon_sym_default] = ACTIONS(175),
    [anon_sym_while] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_int8] = ACTIONS(19),
    [anon_sym_int16] = ACTIONS(19),
    [anon_sym_int32] = ACTIONS(19),
    [anon_sym_int64] = ACTIONS(19),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(19),
    [anon_sym_uint16] = ACTIONS(19),
    [anon_sym_uint32] = ACTIONS(19),
    [anon_sym_uint64] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [anon_sym_NULL] = ACTIONS(63),
    [anon_sym_nullptr] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(67),
  },
  [5] = {
    [sym_access_specifier] = STATE(236),
    [sym_type] = STATE(390),
    [sym_datatype] = STATE(255),
    [sym_scope] = STATE(243),
    [sym_type_parameter] = STATE(402),
    [sym_variable_definition] = STATE(6),
    [sym_compound_statement] = STATE(6),
    [sym__non_case_statement] = STATE(6),
    [sym_break_statement] = STATE(6),
    [sym_continue_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym_return_statement] = STATE(6),
    [sym_if_statement] = STATE(6),
    [sym_switch_statement] = STATE(6),
    [sym_while_statement] = STATE(6),
    [sym_do_statement] = STATE(6),
    [sym_for_statement] = STATE(6),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(291),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [aux_sym_case_statement_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_identifier] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_shared] = ACTIONS(179),
    [anon_sym_external] = ACTIONS(179),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_auto] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_break] = ACTIONS(33),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_else] = ACTIONS(179),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_case] = ACTIONS(179),
    [anon_sym_default] = ACTIONS(179),
    [anon_sym_while] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_int8] = ACTIONS(19),
    [anon_sym_int16] = ACTIONS(19),
    [anon_sym_int32] = ACTIONS(19),
    [anon_sym_int64] = ACTIONS(19),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(19),
    [anon_sym_uint16] = ACTIONS(19),
    [anon_sym_uint32] = ACTIONS(19),
    [anon_sym_uint64] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [anon_sym_NULL] = ACTIONS(63),
    [anon_sym_nullptr] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(67),
  },
  [6] = {
    [sym_access_specifier] = STATE(236),
    [sym_type] = STATE(390),
    [sym_datatype] = STATE(255),
    [sym_scope] = STATE(243),
    [sym_type_parameter] = STATE(402),
    [sym_variable_definition] = STATE(6),
    [sym_compound_statement] = STATE(6),
    [sym__non_case_statement] = STATE(6),
    [sym_break_statement] = STATE(6),
    [sym_continue_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym_return_statement] = STATE(6),
    [sym_if_statement] = STATE(6),
    [sym_switch_statement] = STATE(6),
    [sym_while_statement] = STATE(6),
    [sym_do_statement] = STATE(6),
    [sym_for_statement] = STATE(6),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(291),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [aux_sym_case_statement_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(186),
    [anon_sym_const] = ACTIONS(189),
    [anon_sym_shared] = ACTIONS(192),
    [anon_sym_external] = ACTIONS(192),
    [anon_sym_private] = ACTIONS(194),
    [anon_sym_protected] = ACTIONS(194),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_void] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(186),
    [anon_sym_QMARK] = ACTIONS(203),
    [anon_sym_auto] = ACTIONS(206),
    [anon_sym_COLON_COLON] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(212),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_break] = ACTIONS(218),
    [anon_sym_continue] = ACTIONS(221),
    [anon_sym_return] = ACTIONS(224),
    [anon_sym_if] = ACTIONS(227),
    [anon_sym_else] = ACTIONS(192),
    [anon_sym_switch] = ACTIONS(230),
    [anon_sym_case] = ACTIONS(192),
    [anon_sym_default] = ACTIONS(192),
    [anon_sym_while] = ACTIONS(233),
    [anon_sym_do] = ACTIONS(236),
    [anon_sym_for] = ACTIONS(239),
    [anon_sym_int] = ACTIONS(200),
    [anon_sym_int8] = ACTIONS(200),
    [anon_sym_int16] = ACTIONS(200),
    [anon_sym_int32] = ACTIONS(200),
    [anon_sym_int64] = ACTIONS(200),
    [anon_sym_uint] = ACTIONS(200),
    [anon_sym_uint8] = ACTIONS(200),
    [anon_sym_uint16] = ACTIONS(200),
    [anon_sym_uint32] = ACTIONS(200),
    [anon_sym_uint64] = ACTIONS(200),
    [anon_sym_float] = ACTIONS(200),
    [anon_sym_double] = ACTIONS(200),
    [anon_sym_bool] = ACTIONS(200),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [anon_sym_not] = ACTIONS(248),
    [anon_sym_BANG] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_DASH_DASH] = ACTIONS(251),
    [anon_sym_PLUS_PLUS] = ACTIONS(251),
    [sym_true] = ACTIONS(254),
    [sym_false] = ACTIONS(254),
    [anon_sym_NULL] = ACTIONS(257),
    [anon_sym_nullptr] = ACTIONS(257),
    [sym_number_literal] = ACTIONS(260),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(263),
  },
  [7] = {
    [sym_access_specifier] = STATE(236),
    [sym_type] = STATE(390),
    [sym_datatype] = STATE(255),
    [sym_scope] = STATE(243),
    [sym_type_parameter] = STATE(402),
    [sym_variable_definition] = STATE(8),
    [sym_compound_statement] = STATE(8),
    [sym__non_case_statement] = STATE(8),
    [sym_break_statement] = STATE(8),
    [sym_continue_statement] = STATE(8),
    [sym_expression_statement] = STATE(8),
    [sym_return_statement] = STATE(8),
    [sym_if_statement] = STATE(8),
    [sym_switch_statement] = STATE(8),
    [sym_while_statement] = STATE(8),
    [sym_do_statement] = STATE(8),
    [sym_for_statement] = STATE(8),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(291),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [aux_sym_case_statement_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(266),
    [sym_identifier] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_shared] = ACTIONS(268),
    [anon_sym_external] = ACTIONS(268),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_auto] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(266),
    [anon_sym_break] = ACTIONS(33),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_else] = ACTIONS(268),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_case] = ACTIONS(268),
    [anon_sym_default] = ACTIONS(268),
    [anon_sym_while] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_int8] = ACTIONS(19),
    [anon_sym_int16] = ACTIONS(19),
    [anon_sym_int32] = ACTIONS(19),
    [anon_sym_int64] = ACTIONS(19),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(19),
    [anon_sym_uint16] = ACTIONS(19),
    [anon_sym_uint32] = ACTIONS(19),
    [anon_sym_uint64] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [anon_sym_NULL] = ACTIONS(63),
    [anon_sym_nullptr] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(67),
  },
  [8] = {
    [sym_access_specifier] = STATE(236),
    [sym_type] = STATE(390),
    [sym_datatype] = STATE(255),
    [sym_scope] = STATE(243),
    [sym_type_parameter] = STATE(402),
    [sym_variable_definition] = STATE(6),
    [sym_compound_statement] = STATE(6),
    [sym__non_case_statement] = STATE(6),
    [sym_break_statement] = STATE(6),
    [sym_continue_statement] = STATE(6),
    [sym_expression_statement] = STATE(6),
    [sym_return_statement] = STATE(6),
    [sym_if_statement] = STATE(6),
    [sym_switch_statement] = STATE(6),
    [sym_while_statement] = STATE(6),
    [sym_do_statement] = STATE(6),
    [sym_for_statement] = STATE(6),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(291),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [aux_sym_case_statement_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(270),
    [sym_identifier] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(270),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_shared] = ACTIONS(272),
    [anon_sym_external] = ACTIONS(272),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_auto] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(270),
    [anon_sym_break] = ACTIONS(33),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_else] = ACTIONS(272),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_case] = ACTIONS(272),
    [anon_sym_default] = ACTIONS(272),
    [anon_sym_while] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_int8] = ACTIONS(19),
    [anon_sym_int16] = ACTIONS(19),
    [anon_sym_int32] = ACTIONS(19),
    [anon_sym_int64] = ACTIONS(19),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(19),
    [anon_sym_uint16] = ACTIONS(19),
    [anon_sym_uint32] = ACTIONS(19),
    [anon_sym_uint64] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [anon_sym_NULL] = ACTIONS(63),
    [anon_sym_nullptr] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(67),
  },
  [9] = {
    [sym_access_specifier] = STATE(236),
    [sym_type] = STATE(390),
    [sym_datatype] = STATE(255),
    [sym_scope] = STATE(243),
    [sym_type_parameter] = STATE(402),
    [sym_variable_definition] = STATE(10),
    [sym_compound_statement] = STATE(10),
    [sym__block_item] = STATE(10),
    [sym__statement] = STATE(10),
    [sym__non_case_statement] = STATE(10),
    [sym_break_statement] = STATE(10),
    [sym_continue_statement] = STATE(10),
    [sym_expression_statement] = STATE(10),
    [sym_return_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_switch_statement] = STATE(10),
    [sym_case_statement] = STATE(10),
    [sym_while_statement] = STATE(10),
    [sym_do_statement] = STATE(10),
    [sym_for_statement] = STATE(10),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(291),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [aux_sym_compound_statement_repeat1] = STATE(10),
    [sym_identifier] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_auto] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(274),
    [anon_sym_break] = ACTIONS(33),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_case] = ACTIONS(43),
    [anon_sym_default] = ACTIONS(45),
    [anon_sym_while] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_int8] = ACTIONS(19),
    [anon_sym_int16] = ACTIONS(19),
    [anon_sym_int32] = ACTIONS(19),
    [anon_sym_int64] = ACTIONS(19),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(19),
    [anon_sym_uint16] = ACTIONS(19),
    [anon_sym_uint32] = ACTIONS(19),
    [anon_sym_uint64] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [anon_sym_NULL] = ACTIONS(63),
    [anon_sym_nullptr] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(67),
  },
  [10] = {
    [sym_access_specifier] = STATE(236),
    [sym_type] = STATE(390),
    [sym_datatype] = STATE(255),
    [sym_scope] = STATE(243),
    [sym_type_parameter] = STATE(402),
    [sym_variable_definition] = STATE(10),
    [sym_compound_statement] = STATE(10),
    [sym__block_item] = STATE(10),
    [sym__statement] = STATE(10),
    [sym__non_case_statement] = STATE(10),
    [sym_break_statement] = STATE(10),
    [sym_continue_statement] = STATE(10),
    [sym_expression_statement] = STATE(10),
    [sym_return_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_switch_statement] = STATE(10),
    [sym_case_statement] = STATE(10),
    [sym_while_statement] = STATE(10),
    [sym_do_statement] = STATE(10),
    [sym_for_statement] = STATE(10),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(291),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [aux_sym_compound_statement_repeat1] = STATE(10),
    [sym_identifier] = ACTIONS(276),
    [anon_sym_TILDE] = ACTIONS(279),
    [anon_sym_const] = ACTIONS(282),
    [anon_sym_private] = ACTIONS(285),
    [anon_sym_protected] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_void] = ACTIONS(291),
    [anon_sym_AT] = ACTIONS(279),
    [anon_sym_QMARK] = ACTIONS(294),
    [anon_sym_auto] = ACTIONS(297),
    [anon_sym_COLON_COLON] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(306),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_break] = ACTIONS(311),
    [anon_sym_continue] = ACTIONS(314),
    [anon_sym_return] = ACTIONS(317),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_switch] = ACTIONS(323),
    [anon_sym_case] = ACTIONS(326),
    [anon_sym_default] = ACTIONS(329),
    [anon_sym_while] = ACTIONS(332),
    [anon_sym_do] = ACTIONS(335),
    [anon_sym_for] = ACTIONS(338),
    [anon_sym_int] = ACTIONS(291),
    [anon_sym_int8] = ACTIONS(291),
    [anon_sym_int16] = ACTIONS(291),
    [anon_sym_int32] = ACTIONS(291),
    [anon_sym_int64] = ACTIONS(291),
    [anon_sym_uint] = ACTIONS(291),
    [anon_sym_uint8] = ACTIONS(291),
    [anon_sym_uint16] = ACTIONS(291),
    [anon_sym_uint32] = ACTIONS(291),
    [anon_sym_uint64] = ACTIONS(291),
    [anon_sym_float] = ACTIONS(291),
    [anon_sym_double] = ACTIONS(291),
    [anon_sym_bool] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_SQUOTE] = ACTIONS(344),
    [anon_sym_not] = ACTIONS(347),
    [anon_sym_BANG] = ACTIONS(279),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH_DASH] = ACTIONS(350),
    [anon_sym_PLUS_PLUS] = ACTIONS(350),
    [sym_true] = ACTIONS(353),
    [sym_false] = ACTIONS(353),
    [anon_sym_NULL] = ACTIONS(356),
    [anon_sym_nullptr] = ACTIONS(356),
    [sym_number_literal] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(362),
  },
  [11] = {
    [sym_access_specifier] = STATE(236),
    [sym_type] = STATE(390),
    [sym_datatype] = STATE(255),
    [sym_scope] = STATE(243),
    [sym_type_parameter] = STATE(402),
    [sym_variable_definition] = STATE(9),
    [sym_compound_statement] = STATE(9),
    [sym__block_item] = STATE(9),
    [sym__statement] = STATE(9),
    [sym__non_case_statement] = STATE(9),
    [sym_break_statement] = STATE(9),
    [sym_continue_statement] = STATE(9),
    [sym_expression_statement] = STATE(9),
    [sym_return_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_switch_statement] = STATE(9),
    [sym_case_statement] = STATE(9),
    [sym_while_statement] = STATE(9),
    [sym_do_statement] = STATE(9),
    [sym_for_statement] = STATE(9),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(291),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [aux_sym_compound_statement_repeat1] = STATE(9),
    [sym_identifier] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_auto] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(365),
    [anon_sym_break] = ACTIONS(33),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_case] = ACTIONS(43),
    [anon_sym_default] = ACTIONS(45),
    [anon_sym_while] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_int8] = ACTIONS(19),
    [anon_sym_int16] = ACTIONS(19),
    [anon_sym_int32] = ACTIONS(19),
    [anon_sym_int64] = ACTIONS(19),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(19),
    [anon_sym_uint16] = ACTIONS(19),
    [anon_sym_uint32] = ACTIONS(19),
    [anon_sym_uint64] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [anon_sym_NULL] = ACTIONS(63),
    [anon_sym_nullptr] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(67),
  },
  [12] = {
    [sym_scope] = STATE(397),
    [sym_type_parameter] = STATE(402),
    [sym_compound_statement] = STATE(46),
    [sym__statement] = STATE(46),
    [sym__non_case_statement] = STATE(46),
    [sym_break_statement] = STATE(46),
    [sym_continue_statement] = STATE(46),
    [sym_expression_statement] = STATE(46),
    [sym_return_statement] = STATE(46),
    [sym_if_statement] = STATE(46),
    [sym_switch_statement] = STATE(46),
    [sym_case_statement] = STATE(46),
    [sym_while_statement] = STATE(46),
    [sym_do_statement] = STATE(46),
    [sym_for_statement] = STATE(46),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(396),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [sym_identifier] = ACTIONS(367),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_break] = ACTIONS(33),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_case] = ACTIONS(43),
    [anon_sym_default] = ACTIONS(45),
    [anon_sym_while] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_int8] = ACTIONS(19),
    [anon_sym_int16] = ACTIONS(19),
    [anon_sym_int32] = ACTIONS(19),
    [anon_sym_int64] = ACTIONS(19),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(19),
    [anon_sym_uint16] = ACTIONS(19),
    [anon_sym_uint32] = ACTIONS(19),
    [anon_sym_uint64] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [anon_sym_NULL] = ACTIONS(63),
    [anon_sym_nullptr] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(67),
  },
  [13] = {
    [sym_scope] = STATE(397),
    [sym_type_parameter] = STATE(402),
    [sym_compound_statement] = STATE(52),
    [sym__statement] = STATE(52),
    [sym__non_case_statement] = STATE(52),
    [sym_break_statement] = STATE(52),
    [sym_continue_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_return_statement] = STATE(52),
    [sym_if_statement] = STATE(52),
    [sym_switch_statement] = STATE(52),
    [sym_case_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_do_statement] = STATE(52),
    [sym_for_statement] = STATE(52),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(396),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [sym_identifier] = ACTIONS(367),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_break] = ACTIONS(33),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_case] = ACTIONS(43),
    [anon_sym_default] = ACTIONS(45),
    [anon_sym_while] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_int8] = ACTIONS(19),
    [anon_sym_int16] = ACTIONS(19),
    [anon_sym_int32] = ACTIONS(19),
    [anon_sym_int64] = ACTIONS(19),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(19),
    [anon_sym_uint16] = ACTIONS(19),
    [anon_sym_uint32] = ACTIONS(19),
    [anon_sym_uint64] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [anon_sym_NULL] = ACTIONS(63),
    [anon_sym_nullptr] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(67),
  },
  [14] = {
    [sym_scope] = STATE(397),
    [sym_type_parameter] = STATE(402),
    [sym_compound_statement] = STATE(25),
    [sym__statement] = STATE(25),
    [sym__non_case_statement] = STATE(25),
    [sym_break_statement] = STATE(25),
    [sym_continue_statement] = STATE(25),
    [sym_expression_statement] = STATE(25),
    [sym_return_statement] = STATE(25),
    [sym_if_statement] = STATE(25),
    [sym_switch_statement] = STATE(25),
    [sym_case_statement] = STATE(25),
    [sym_while_statement] = STATE(25),
    [sym_do_statement] = STATE(25),
    [sym_for_statement] = STATE(25),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(396),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [sym_identifier] = ACTIONS(367),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_break] = ACTIONS(33),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_case] = ACTIONS(43),
    [anon_sym_default] = ACTIONS(45),
    [anon_sym_while] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_int8] = ACTIONS(19),
    [anon_sym_int16] = ACTIONS(19),
    [anon_sym_int32] = ACTIONS(19),
    [anon_sym_int64] = ACTIONS(19),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(19),
    [anon_sym_uint16] = ACTIONS(19),
    [anon_sym_uint32] = ACTIONS(19),
    [anon_sym_uint64] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [anon_sym_NULL] = ACTIONS(63),
    [anon_sym_nullptr] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(67),
  },
  [15] = {
    [sym_scope] = STATE(397),
    [sym_type_parameter] = STATE(402),
    [sym_compound_statement] = STATE(44),
    [sym__statement] = STATE(44),
    [sym__non_case_statement] = STATE(44),
    [sym_break_statement] = STATE(44),
    [sym_continue_statement] = STATE(44),
    [sym_expression_statement] = STATE(44),
    [sym_return_statement] = STATE(44),
    [sym_if_statement] = STATE(44),
    [sym_switch_statement] = STATE(44),
    [sym_case_statement] = STATE(44),
    [sym_while_statement] = STATE(44),
    [sym_do_statement] = STATE(44),
    [sym_for_statement] = STATE(44),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(396),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [sym_identifier] = ACTIONS(367),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_break] = ACTIONS(33),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_case] = ACTIONS(43),
    [anon_sym_default] = ACTIONS(45),
    [anon_sym_while] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_int8] = ACTIONS(19),
    [anon_sym_int16] = ACTIONS(19),
    [anon_sym_int32] = ACTIONS(19),
    [anon_sym_int64] = ACTIONS(19),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(19),
    [anon_sym_uint16] = ACTIONS(19),
    [anon_sym_uint32] = ACTIONS(19),
    [anon_sym_uint64] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [anon_sym_NULL] = ACTIONS(63),
    [anon_sym_nullptr] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(67),
  },
  [16] = {
    [sym_scope] = STATE(397),
    [sym_type_parameter] = STATE(402),
    [sym_compound_statement] = STATE(380),
    [sym__statement] = STATE(380),
    [sym__non_case_statement] = STATE(380),
    [sym_break_statement] = STATE(380),
    [sym_continue_statement] = STATE(380),
    [sym_expression_statement] = STATE(380),
    [sym_return_statement] = STATE(380),
    [sym_if_statement] = STATE(380),
    [sym_switch_statement] = STATE(380),
    [sym_case_statement] = STATE(380),
    [sym_while_statement] = STATE(380),
    [sym_do_statement] = STATE(380),
    [sym_for_statement] = STATE(380),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(396),
    [sym__expression] = STATE(223),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [sym_identifier] = ACTIONS(367),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_break] = ACTIONS(33),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_switch] = ACTIONS(41),
    [anon_sym_case] = ACTIONS(43),
    [anon_sym_default] = ACTIONS(45),
    [anon_sym_while] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_int8] = ACTIONS(19),
    [anon_sym_int16] = ACTIONS(19),
    [anon_sym_int32] = ACTIONS(19),
    [anon_sym_int64] = ACTIONS(19),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(19),
    [anon_sym_uint16] = ACTIONS(19),
    [anon_sym_uint32] = ACTIONS(19),
    [anon_sym_uint64] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [anon_sym_NULL] = ACTIONS(63),
    [anon_sym_nullptr] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(67),
  },
  [17] = {
    [sym_access_specifier] = STATE(236),
    [sym_type] = STATE(390),
    [sym_datatype] = STATE(255),
    [sym_scope] = STATE(243),
    [sym_type_parameter] = STATE(402),
    [sym_variable_definition] = STATE(33),
    [sym__for_statement_body] = STATE(411),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(291),
    [sym__expression] = STATE(210),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_comma_expression] = STATE(409),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [sym_identifier] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(369),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_auto] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_int8] = ACTIONS(19),
    [anon_sym_int16] = ACTIONS(19),
    [anon_sym_int32] = ACTIONS(19),
    [anon_sym_int64] = ACTIONS(19),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(19),
    [anon_sym_uint16] = ACTIONS(19),
    [anon_sym_uint32] = ACTIONS(19),
    [anon_sym_uint64] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [anon_sym_NULL] = ACTIONS(63),
    [anon_sym_nullptr] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(67),
  },
  [18] = {
    [sym_parameter_declaration] = STATE(340),
    [sym__declaration_specifier] = STATE(383),
    [sym_type] = STATE(336),
    [sym_datatype] = STATE(255),
    [sym_scope] = STATE(241),
    [sym_type_parameter] = STATE(402),
    [sym_argument] = STATE(353),
    [sym_parenthesized_expression] = STATE(182),
    [sym_primative_type] = STATE(291),
    [sym__expression] = STATE(214),
    [sym__expression_not_binary] = STATE(182),
    [sym_variable_access] = STATE(182),
    [sym_conditional_expression] = STATE(182),
    [sym_string_literal] = STATE(182),
    [sym__double_quote_string] = STATE(193),
    [sym__single_quote_string] = STATE(193),
    [sym_assignment_expression] = STATE(182),
    [sym_unary_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [sym_update_expression] = STATE(182),
    [sym_cast_expression] = STATE(182),
    [sym_subscript_expression] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_field_expression] = STATE(182),
    [sym_null] = STATE(182),
    [sym__multiline_string] = STATE(193),
    [sym_identifier] = ACTIONS(371),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(373),
    [anon_sym_COMMA] = ACTIONS(375),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_auto] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_int8] = ACTIONS(19),
    [anon_sym_int16] = ACTIONS(19),
    [anon_sym_int32] = ACTIONS(19),
    [anon_sym_int64] = ACTIONS(19),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(19),
    [anon_sym_uint16] = ACTIONS(19),
    [anon_sym_uint32] = ACTIONS(19),
    [anon_sym_uint64] = ACTIONS(19),
    [anon_sym_float] = ACTIONS(19),
    [anon_sym_double] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [sym_true] = ACTIONS(61),
    [sym_false] = ACTIONS(61),
    [anon_sym_NULL] = ACTIONS(63),
    [anon_sym_nullptr] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(67),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    ACTIONS(25), 1,
      anon_sym_auto,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(218), 1,
      sym__expression,
    STATE(243), 1,
      sym_scope,
    STATE(255), 1,
      sym_datatype,
    STATE(291), 1,
      sym_primative_type,
    STATE(393), 1,
      sym_type,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [114] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      sym__expression,
    STATE(326), 1,
      sym_initlist,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [222] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(398), 1,
      sym_comma_expression,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [327] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym__expression,
    STATE(370), 1,
      sym_initlist,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [432] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(213), 1,
      sym__expression,
    STATE(373), 1,
      sym_initlist,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [537] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    STATE(408), 1,
      sym_comma_expression,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_else,
    STATE(48), 1,
      sym_else_clause,
    ACTIONS(387), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(389), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [711] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym__expression,
    STATE(394), 1,
      sym_comma_expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [816] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    STATE(414), 1,
      sym_comma_expression,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [921] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(397), 1,
      sym_identifier,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym__expression,
    STATE(353), 1,
      sym_argument,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [1026] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      sym__expression,
    STATE(389), 1,
      sym_comma_expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [1131] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      sym__expression,
    STATE(385), 1,
      sym_comma_expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [1236] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    STATE(215), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(399), 1,
      sym_comma_expression,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [1341] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      sym__expression,
    STATE(384), 1,
      sym_comma_expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [1446] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(409), 1,
      anon_sym_SEMI,
    STATE(212), 1,
      sym__expression,
    STATE(382), 1,
      sym_comma_expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [1551] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(198), 1,
      sym__expression,
    STATE(319), 1,
      sym_initlist,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [1656] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
    STATE(201), 1,
      sym__expression,
    STATE(314), 1,
      sym_initlist,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [1761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(413), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [1825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(417), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [1889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(421), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [1953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(425), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [2017] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(397), 1,
      sym_identifier,
    STATE(214), 1,
      sym__expression,
    STATE(376), 1,
      sym_argument,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [2119] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(427), 1,
      anon_sym_COLON,
    STATE(222), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [2221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(431), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [2285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(435), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [2349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(439), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [2413] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_SEMI,
    STATE(221), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [2515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(445), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [2579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(449), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [2643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(453), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [2707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(457), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [2771] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(199), 1,
      sym__expression,
    STATE(358), 1,
      sym_comma_expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [2873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(461), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [2937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(465), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [3001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(469), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [3065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(473), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [3129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(477), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [3193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(481), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [3257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(485), 40,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [3321] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(165), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [3420] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(163), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [3519] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(170), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [3618] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(162), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [3717] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(219), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [3816] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(164), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [3915] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(161), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [4014] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(160), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [4113] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(173), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [4212] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(218), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [4311] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(159), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [4410] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(208), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [4509] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(217), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [4608] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(166), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [4707] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(168), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [4806] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(173), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [4905] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(224), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [5004] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(203), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [5103] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(172), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [5202] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(169), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [5301] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(171), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [5400] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(220), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [5499] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(174), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [5598] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number_literal,
    ACTIONS(67), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(167), 1,
      sym__expression,
    STATE(396), 1,
      sym_primative_type,
    STATE(397), 1,
      sym_scope,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(59), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(61), 2,
      sym_true,
      sym_false,
    ACTIONS(63), 2,
      anon_sym_NULL,
      anon_sym_nullptr,
    ACTIONS(21), 3,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_BANG,
    ACTIONS(57), 3,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(193), 3,
      sym__double_quote_string,
      sym__single_quote_string,
      sym__multiline_string,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    STATE(182), 14,
      sym_parenthesized_expression,
      sym__expression_not_binary,
      sym_variable_access,
      sym_conditional_expression,
      sym_string_literal,
      sym_assignment_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym_cast_expression,
      sym_subscript_expression,
      sym_call_expression,
      sym_field_expression,
      sym_null,
  [5697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(491), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [5759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(495), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [5821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(499), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [5883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(503), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [5945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(507), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(511), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(515), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(519), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(523), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(527), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(531), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(535), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(539), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(543), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(547), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(551), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(555), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(559), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(563), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(567), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(571), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [6999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(575), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(579), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(583), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(587), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(591), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(595), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(599), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(603), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(607), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(611), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(615), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(619), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(623), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(627), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(631), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(635), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [7991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(639), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(643), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(647), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(651), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(655), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(659), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(663), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(667), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(671), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(675), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(679), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(683), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(687), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(691), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(695), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(699), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [8983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(703), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(707), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(711), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(715), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(719), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(723), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(727), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(731), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(735), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(739), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(743), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(747), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(751), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(755), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(759), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(763), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [9975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(767), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [10037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(771), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [10099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(775), 39,
      anon_sym_const,
      anon_sym_shared,
      anon_sym_external,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [10161] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_COLON_COLON,
    ACTIONS(783), 1,
      anon_sym_LT,
    STATE(304), 1,
      aux_sym_scope_repeat1,
    STATE(386), 1,
      sym_type_parameter,
    ACTIONS(779), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(777), 34,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [10230] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      sym_identifier,
    ACTIONS(791), 1,
      anon_sym_AT,
    ACTIONS(793), 1,
      anon_sym_LT,
    STATE(304), 1,
      aux_sym_scope_repeat1,
    STATE(386), 1,
      sym_type_parameter,
    ACTIONS(788), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(779), 18,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_xor,
      anon_sym_is,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(777), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [10304] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      sym_identifier,
    ACTIONS(788), 1,
      anon_sym_LBRACK,
    ACTIONS(791), 1,
      anon_sym_AT,
    ACTIONS(793), 1,
      anon_sym_LT,
    ACTIONS(797), 1,
      anon_sym_AMP,
    ACTIONS(800), 1,
      anon_sym_COLON,
    STATE(304), 1,
      aux_sym_scope_repeat1,
    STATE(386), 1,
      sym_type_parameter,
    ACTIONS(779), 17,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_xor,
      anon_sym_is,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(777), 26,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [10382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(802), 36,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [10441] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      sym_identifier,
    ACTIONS(788), 1,
      anon_sym_LBRACK,
    ACTIONS(791), 1,
      anon_sym_AT,
    ACTIONS(793), 1,
      anon_sym_LT,
    ACTIONS(797), 1,
      anon_sym_AMP,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
    STATE(269), 1,
      sym_parameter_list,
    STATE(304), 1,
      aux_sym_scope_repeat1,
    STATE(386), 1,
      sym_type_parameter,
    ACTIONS(779), 17,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_xor,
      anon_sym_is,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(777), 24,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [10520] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(811), 9,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(809), 30,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
  [10593] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(811), 4,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(809), 26,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10672] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(811), 3,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(809), 24,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
  [10755] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(811), 2,
      anon_sym_EQ,
      anon_sym_PIPE,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(809), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
  [10842] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_EQ,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(809), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
  [10931] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_EQ,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(809), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
  [11022] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(811), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(809), 30,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
  [11091] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(811), 11,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(809), 30,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
  [11162] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(811), 6,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(809), 30,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
  [11237] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(845), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(843), 30,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
  [11306] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(849), 1,
      anon_sym_EQ,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(847), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [11401] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(857), 1,
      anon_sym_EQ,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(855), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [11496] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(859), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [11593] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(811), 4,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_CARET,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(809), 24,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
  [11674] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(867), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(865), 32,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [11741] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(871), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(869), 30,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
  [11810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(873), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [11868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(877), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [11926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(881), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [11984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(885), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(889), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(893), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(897), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(901), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(905), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12332] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_COLON_COLON,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(800), 1,
      anon_sym_COLON,
    STATE(304), 1,
      aux_sym_scope_repeat1,
    STATE(386), 1,
      sym_type_parameter,
    ACTIONS(779), 14,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(777), 31,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(909), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(913), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(917), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(921), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(925), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(929), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(933), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(937), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(941), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 15,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(945), 35,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [12980] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_COLON_COLON,
    ACTIONS(783), 1,
      anon_sym_LT,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
    STATE(271), 1,
      sym_parameter_list,
    STATE(304), 1,
      aux_sym_scope_repeat1,
    STATE(386), 1,
      sym_type_parameter,
    ACTIONS(779), 14,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(777), 29,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_xor,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [13049] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_identifier,
    ACTIONS(791), 1,
      anon_sym_AT,
    ACTIONS(952), 1,
      anon_sym_LBRACK,
    ACTIONS(949), 2,
      anon_sym_AMP,
      anon_sym_LT,
    ACTIONS(927), 17,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_xor,
      anon_sym_is,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(925), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [13114] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_identifier,
    ACTIONS(791), 1,
      anon_sym_AT,
    ACTIONS(949), 1,
      anon_sym_LT,
    ACTIONS(952), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(927), 18,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_and,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_xor,
      anon_sym_is,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(925), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANGis,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_DOT,
  [13179] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(955), 1,
      anon_sym_SEMI,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      sym__argument_list,
    STATE(346), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [13277] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(959), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [13373] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(963), 1,
      anon_sym_COMMA,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
    STATE(181), 1,
      sym__argument_list,
    STATE(312), 1,
      aux_sym_initlist_repeat1,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [13471] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      sym__argument_list,
    STATE(321), 1,
      aux_sym_variable_definition_repeat1,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [13569] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(969), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [13664] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(971), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [13757] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [13852] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [13947] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [14042] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [14137] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(981), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [14230] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(983), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [14323] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(985), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [14418] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [14513] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(989), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [14608] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(991), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [14701] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(993), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [14794] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [14889] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [14984] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(999), 1,
      anon_sym_COLON,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [15076] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [15168] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [15260] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(1005), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [15352] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(1007), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [15444] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(1009), 1,
      anon_sym_COLON,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [15536] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(1011), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [15628] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(823), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_AMP,
    ACTIONS(835), 1,
      anon_sym_CARET,
    ACTIONS(837), 1,
      anon_sym_xor,
    ACTIONS(839), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_QMARK,
    ACTIONS(861), 1,
      anon_sym_EQ,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym__argument_list,
    ACTIONS(817), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(821), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(825), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(833), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(841), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(853), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(829), 3,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_GT_GT_GT,
    ACTIONS(819), 4,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(827), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_is,
      anon_sym_BANGis,
    ACTIONS(863), 12,
      anon_sym_STAR_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_GT_GT_GT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [15720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 12,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      anon_sym_AT,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_BANG,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(804), 33,
      anon_sym_void,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_DQUOTE,
      anon_sym_not,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_true,
      sym_false,
      anon_sym_NULL,
      anon_sym_nullptr,
  [15773] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    ACTIONS(25), 1,
      anon_sym_auto,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1015), 1,
      sym_identifier,
    ACTIONS(1017), 1,
      anon_sym_TILDE,
    STATE(231), 1,
      sym_access_specifier,
    STATE(240), 1,
      sym_scope,
    STATE(255), 1,
      sym_datatype,
    STATE(282), 1,
      sym_primative_type,
    STATE(375), 1,
      sym_type,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(15), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [15836] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    ACTIONS(25), 1,
      anon_sym_auto,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(373), 1,
      anon_sym_void,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      sym_identifier,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_scope,
    STATE(255), 1,
      sym_datatype,
    STATE(282), 1,
      sym_primative_type,
    STATE(336), 1,
      sym_type,
    STATE(340), 1,
      sym_parameter_declaration,
    STATE(383), 1,
      sym__declaration_specifier,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(19), 13,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [15903] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    ACTIONS(25), 1,
      anon_sym_auto,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1019), 1,
      sym_identifier,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_scope,
    STATE(255), 1,
      sym_datatype,
    STATE(282), 1,
      sym_primative_type,
    STATE(336), 1,
      sym_type,
    STATE(357), 1,
      sym_parameter_declaration,
    STATE(383), 1,
      sym__declaration_specifier,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [15965] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    ACTIONS(25), 1,
      anon_sym_auto,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1019), 1,
      sym_identifier,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_scope,
    STATE(255), 1,
      sym_datatype,
    STATE(282), 1,
      sym_primative_type,
    STATE(336), 1,
      sym_type,
    STATE(357), 1,
      sym_parameter_declaration,
    STATE(383), 1,
      sym__declaration_specifier,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16027] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    ACTIONS(25), 1,
      anon_sym_auto,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1019), 1,
      sym_identifier,
    STATE(240), 1,
      sym_scope,
    STATE(255), 1,
      sym_datatype,
    STATE(282), 1,
      sym_primative_type,
    STATE(336), 1,
      sym_type,
    STATE(357), 1,
      sym_parameter_declaration,
    STATE(383), 1,
      sym__declaration_specifier,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16086] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    ACTIONS(25), 1,
      anon_sym_auto,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1027), 1,
      sym_identifier,
    ACTIONS(1029), 1,
      anon_sym_TILDE,
    STATE(240), 1,
      sym_scope,
    STATE(255), 1,
      sym_datatype,
    STATE(282), 1,
      sym_primative_type,
    STATE(366), 1,
      sym_type,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16142] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(232), 1,
      aux_sym_func_location_repeat1,
    ACTIONS(1035), 2,
      anon_sym_shared,
      anon_sym_external,
    ACTIONS(1033), 4,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
    ACTIONS(1031), 19,
      anon_sym_const,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16180] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    ACTIONS(25), 1,
      anon_sym_auto,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1015), 1,
      sym_identifier,
    ACTIONS(1017), 1,
      anon_sym_TILDE,
    STATE(240), 1,
      sym_scope,
    STATE(255), 1,
      sym_datatype,
    STATE(282), 1,
      sym_primative_type,
    STATE(372), 1,
      sym_type,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16236] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(232), 1,
      aux_sym_func_location_repeat1,
    ACTIONS(1042), 2,
      anon_sym_shared,
      anon_sym_external,
    ACTIONS(1040), 4,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
    ACTIONS(1038), 19,
      anon_sym_const,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_void,
      anon_sym_auto,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16274] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    ACTIONS(25), 1,
      anon_sym_auto,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1019), 1,
      sym_identifier,
    STATE(240), 1,
      sym_scope,
    STATE(255), 1,
      sym_datatype,
    STATE(282), 1,
      sym_primative_type,
    STATE(363), 1,
      sym_type,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16327] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    ACTIONS(25), 1,
      anon_sym_auto,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1019), 1,
      sym_identifier,
    STATE(240), 1,
      sym_scope,
    STATE(255), 1,
      sym_datatype,
    STATE(282), 1,
      sym_primative_type,
    STATE(402), 1,
      sym_type_parameter,
    STATE(413), 1,
      sym_type,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16380] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    ACTIONS(25), 1,
      anon_sym_auto,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1019), 1,
      sym_identifier,
    STATE(240), 1,
      sym_scope,
    STATE(255), 1,
      sym_datatype,
    STATE(282), 1,
      sym_primative_type,
    STATE(332), 1,
      sym_type,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16433] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    ACTIONS(25), 1,
      anon_sym_auto,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1019), 1,
      sym_identifier,
    STATE(242), 1,
      sym_scope,
    STATE(251), 1,
      sym_datatype,
    STATE(282), 1,
      sym_primative_type,
    STATE(402), 1,
      sym_type_parameter,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 4,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_COLON_COLON,
      anon_sym_LT,
    ACTIONS(1044), 17,
      anon_sym_const,
      anon_sym_void,
      anon_sym_auto,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16509] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    STATE(251), 1,
      sym_datatype,
    STATE(282), 1,
      sym_primative_type,
    ACTIONS(25), 2,
      anon_sym_auto,
      sym_identifier,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16542] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    ACTIONS(25), 1,
      anon_sym_auto,
    ACTIONS(1048), 1,
      sym_identifier,
    STATE(251), 1,
      sym_datatype,
    STATE(282), 1,
      sym_primative_type,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16577] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    STATE(252), 1,
      sym_datatype,
    STATE(282), 1,
      sym_primative_type,
    ACTIONS(25), 2,
      anon_sym_auto,
      sym_identifier,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16610] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_QMARK,
    ACTIONS(25), 1,
      anon_sym_auto,
    ACTIONS(1050), 1,
      sym_identifier,
    STATE(251), 1,
      sym_datatype,
    STATE(282), 1,
      sym_primative_type,
    ACTIONS(19), 14,
      anon_sym_void,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_QMARK,
    ACTIONS(1052), 16,
      anon_sym_void,
      anon_sym_auto,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_QMARK,
    ACTIONS(1056), 16,
      anon_sym_void,
      anon_sym_auto,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_QMARK,
    ACTIONS(1060), 1,
      sym_identifier,
    ACTIONS(1056), 15,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_QMARK,
    ACTIONS(1062), 16,
      anon_sym_void,
      anon_sym_auto,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_QMARK,
    ACTIONS(1066), 16,
      anon_sym_void,
      anon_sym_auto,
      sym_identifier,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      sym_identifier,
    ACTIONS(1068), 1,
      anon_sym_QMARK,
    ACTIONS(1066), 15,
      anon_sym_void,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [16799] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
    ACTIONS(1074), 1,
      anon_sym_AT,
    STATE(276), 1,
      aux_sym_type_repeat2,
    STATE(258), 2,
      sym_type_parameter,
      aux_sym_type_repeat1,
    ACTIONS(1070), 5,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [16826] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
    ACTIONS(1074), 1,
      anon_sym_AT,
    STATE(288), 1,
      aux_sym_type_repeat2,
    STATE(253), 2,
      sym_type_parameter,
      aux_sym_type_repeat1,
    ACTIONS(1076), 5,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [16853] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
    ACTIONS(1074), 1,
      anon_sym_AT,
    STATE(286), 1,
      aux_sym_type_repeat2,
    STATE(250), 2,
      sym_type_parameter,
      aux_sym_type_repeat1,
    ACTIONS(1078), 5,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [16880] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
    ACTIONS(1074), 1,
      anon_sym_AT,
    STATE(286), 1,
      aux_sym_type_repeat2,
    STATE(258), 2,
      sym_type_parameter,
      aux_sym_type_repeat1,
    ACTIONS(1078), 5,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [16907] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
    ACTIONS(1074), 1,
      anon_sym_AT,
    STATE(288), 1,
      aux_sym_type_repeat2,
    STATE(258), 2,
      sym_type_parameter,
      aux_sym_type_repeat1,
    ACTIONS(1076), 5,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [16934] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
    ACTIONS(1074), 1,
      anon_sym_AT,
    STATE(283), 1,
      aux_sym_type_repeat2,
    STATE(254), 2,
      sym_type_parameter,
      aux_sym_type_repeat1,
    ACTIONS(1080), 5,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [16961] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1082), 1,
      anon_sym_LT,
    STATE(304), 1,
      aux_sym_scope_repeat1,
    STATE(386), 1,
      sym_type_parameter,
    ACTIONS(791), 7,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_GT,
      sym_identifier,
  [16986] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1082), 1,
      anon_sym_LT,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
    STATE(265), 1,
      sym_parameter_list,
    STATE(304), 1,
      aux_sym_scope_repeat1,
    STATE(386), 1,
      sym_type_parameter,
    ACTIONS(791), 4,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_identifier,
  [17014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_LT,
    STATE(258), 2,
      sym_type_parameter,
      aux_sym_type_repeat1,
    ACTIONS(1087), 7,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_GT,
      sym_identifier,
  [17034] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1082), 1,
      anon_sym_LT,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
    STATE(263), 1,
      sym_parameter_list,
    STATE(304), 1,
      aux_sym_scope_repeat1,
    STATE(386), 1,
      sym_type_parameter,
    ACTIONS(791), 4,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_identifier,
  [17062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 9,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
  [17077] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1094), 1,
      anon_sym_SEMI,
    ACTIONS(1096), 1,
      anon_sym_const,
    STATE(85), 1,
      sym_compound_statement,
    STATE(333), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17102] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1100), 1,
      anon_sym_SEMI,
    ACTIONS(1102), 1,
      anon_sym_const,
    STATE(111), 1,
      sym_compound_statement,
    STATE(349), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17127] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1104), 1,
      anon_sym_SEMI,
    ACTIONS(1106), 1,
      anon_sym_const,
    STATE(84), 1,
      sym_compound_statement,
    STATE(339), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17152] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1108), 1,
      anon_sym_SEMI,
    ACTIONS(1110), 1,
      anon_sym_const,
    STATE(125), 1,
      sym_compound_statement,
    STATE(352), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17177] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1112), 1,
      anon_sym_SEMI,
    ACTIONS(1114), 1,
      anon_sym_const,
    STATE(129), 1,
      sym_compound_statement,
    STATE(317), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 9,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
  [17217] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1118), 1,
      anon_sym_SEMI,
    ACTIONS(1120), 1,
      anon_sym_const,
    STATE(144), 1,
      sym_compound_statement,
    STATE(347), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17242] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1122), 1,
      anon_sym_SEMI,
    ACTIONS(1124), 1,
      anon_sym_const,
    STATE(119), 1,
      sym_compound_statement,
    STATE(323), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17267] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1126), 1,
      anon_sym_SEMI,
    ACTIONS(1128), 1,
      anon_sym_const,
    STATE(152), 1,
      sym_compound_statement,
    STATE(331), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 9,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_COLON_COLON,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
  [17307] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1132), 1,
      anon_sym_SEMI,
    ACTIONS(1134), 1,
      anon_sym_const,
    STATE(130), 1,
      sym_compound_statement,
    STATE(350), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17332] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1136), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      sym_compound_statement,
    STATE(344), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(1138), 6,
      anon_sym_const,
      anon_sym_LBRACE,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17370] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1140), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      sym_compound_statement,
    STATE(342), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17392] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1142), 1,
      anon_sym_SEMI,
    STATE(121), 1,
      sym_compound_statement,
    STATE(355), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17414] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
    ACTIONS(1074), 1,
      anon_sym_AT,
    STATE(281), 1,
      aux_sym_type_repeat2,
    ACTIONS(1144), 5,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [17434] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1146), 1,
      anon_sym_SEMI,
    STATE(100), 1,
      sym_compound_statement,
    STATE(334), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17456] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1148), 1,
      anon_sym_SEMI,
    STATE(147), 1,
      sym_compound_statement,
    STATE(330), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17478] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1150), 1,
      anon_sym_SEMI,
    STATE(117), 1,
      sym_compound_statement,
    STATE(316), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      sym_identifier,
    ACTIONS(1156), 1,
      anon_sym_const,
    ACTIONS(1154), 6,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_GT,
  [17518] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_LBRACK,
    ACTIONS(1163), 1,
      anon_sym_AT,
    STATE(281), 1,
      aux_sym_type_repeat2,
    ACTIONS(1158), 5,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [17538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 8,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
  [17552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
    ACTIONS(1074), 1,
      anon_sym_AT,
    STATE(281), 1,
      aux_sym_type_repeat2,
    ACTIONS(1076), 5,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [17572] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1166), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      sym_compound_statement,
    STATE(327), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17594] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1168), 1,
      anon_sym_SEMI,
    STATE(131), 1,
      sym_compound_statement,
    STATE(313), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
    ACTIONS(1074), 1,
      anon_sym_AT,
    STATE(281), 1,
      aux_sym_type_repeat2,
    ACTIONS(1070), 5,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [17636] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1170), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      sym_compound_statement,
    STATE(338), 1,
      sym_funcattr,
    ACTIONS(1098), 4,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17658] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
    ACTIONS(1074), 1,
      anon_sym_AT,
    STATE(281), 1,
      aux_sym_type_repeat2,
    ACTIONS(1078), 5,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [17678] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_SEMI,
    ACTIONS(1174), 1,
      anon_sym_LPAREN,
    ACTIONS(1176), 1,
      anon_sym_EQ,
    STATE(267), 1,
      sym_parameter_list,
    STATE(314), 1,
      sym__argument_list,
    STATE(315), 1,
      aux_sym_variable_definition_repeat1,
  [17703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 7,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_GT,
      sym_identifier,
  [17716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      anon_sym_LPAREN,
    ACTIONS(791), 6,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_LT,
      sym_identifier,
  [17731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    ACTIONS(1116), 6,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_LT,
      sym_identifier,
  [17746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 7,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_LBRACE,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 7,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_LBRACE,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17772] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(1174), 1,
      anon_sym_LPAREN,
    ACTIONS(1184), 1,
      anon_sym_SEMI,
    ACTIONS(1186), 1,
      anon_sym_EQ,
    STATE(271), 1,
      sym_parameter_list,
    STATE(343), 1,
      sym__argument_list,
    STATE(348), 1,
      aux_sym_variable_definition_repeat1,
  [17797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 7,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_LBRACE,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 7,
      anon_sym_SEMI,
      anon_sym_const,
      anon_sym_LBRACE,
      anon_sym_override,
      anon_sym_final,
      anon_sym_explicit,
      anon_sym_property,
  [17823] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      anon_sym_SEMI,
    ACTIONS(1186), 1,
      anon_sym_EQ,
    STATE(343), 1,
      sym__argument_list,
    STATE(348), 1,
      aux_sym_variable_definition_repeat1,
  [17845] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_SEMI,
    ACTIONS(1176), 1,
      anon_sym_EQ,
    STATE(314), 1,
      sym__argument_list,
    STATE(315), 1,
      aux_sym_variable_definition_repeat1,
  [17867] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LPAREN,
    ACTIONS(1194), 1,
      anon_sym_EQ,
    STATE(371), 1,
      sym__argument_list,
    ACTIONS(1192), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [17884] = 5,
    ACTIONS(1196), 1,
      anon_sym_DQUOTE,
    ACTIONS(1198), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(1200), 1,
      sym_escape_sequence,
    ACTIONS(1202), 1,
      sym_comment,
    STATE(309), 1,
      aux_sym__double_quote_string_repeat1,
  [17900] = 4,
    ACTIONS(1202), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(303), 1,
      aux_sym__multiline_string_repeat1,
    ACTIONS(1204), 2,
      sym_escape_sequence,
      aux_sym__multiline_string_token1,
  [17914] = 4,
    ACTIONS(1202), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(303), 1,
      aux_sym__multiline_string_repeat1,
    ACTIONS(1208), 2,
      sym_escape_sequence,
      aux_sym__multiline_string_token1,
  [17928] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(1213), 1,
      anon_sym_COLON_COLON,
    STATE(328), 1,
      aux_sym_scope_repeat1,
    STATE(392), 1,
      sym_type_parameter,
  [17944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      sym_identifier,
    ACTIONS(1217), 3,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
  [17956] = 5,
    ACTIONS(1202), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_SQUOTE,
    ACTIONS(1221), 1,
      aux_sym__single_quote_string_token1,
    ACTIONS(1224), 1,
      sym_escape_sequence,
    STATE(306), 1,
      aux_sym__single_quote_string_repeat1,
  [17972] = 5,
    ACTIONS(1202), 1,
      sym_comment,
    ACTIONS(1227), 1,
      anon_sym_SQUOTE,
    ACTIONS(1229), 1,
      aux_sym__single_quote_string_token1,
    ACTIONS(1231), 1,
      sym_escape_sequence,
    STATE(306), 1,
      aux_sym__single_quote_string_repeat1,
  [17988] = 5,
    ACTIONS(1202), 1,
      sym_comment,
    ACTIONS(1233), 1,
      anon_sym_SQUOTE,
    ACTIONS(1235), 1,
      aux_sym__single_quote_string_token1,
    ACTIONS(1237), 1,
      sym_escape_sequence,
    STATE(307), 1,
      aux_sym__single_quote_string_repeat1,
  [18004] = 5,
    ACTIONS(1202), 1,
      sym_comment,
    ACTIONS(1239), 1,
      anon_sym_DQUOTE,
    ACTIONS(1241), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(1243), 1,
      sym_escape_sequence,
    STATE(310), 1,
      aux_sym__double_quote_string_repeat1,
  [18020] = 5,
    ACTIONS(1202), 1,
      sym_comment,
    ACTIONS(1245), 1,
      anon_sym_DQUOTE,
    ACTIONS(1247), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(1250), 1,
      sym_escape_sequence,
    STATE(310), 1,
      aux_sym__double_quote_string_repeat1,
  [18036] = 4,
    ACTIONS(1202), 1,
      sym_comment,
    ACTIONS(1255), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(302), 1,
      aux_sym__multiline_string_repeat1,
    ACTIONS(1253), 2,
      sym_escape_sequence,
      aux_sym__multiline_string_token1,
  [18050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_COMMA,
    ACTIONS(1257), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      aux_sym_initlist_repeat1,
  [18063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1259), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_compound_statement,
  [18076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_SEMI,
    STATE(321), 1,
      aux_sym_variable_definition_repeat1,
  [18089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_SEMI,
    STATE(318), 1,
      aux_sym_variable_definition_repeat1,
  [18102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1261), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_compound_statement,
  [18115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1263), 1,
      anon_sym_SEMI,
    STATE(118), 1,
      sym_compound_statement,
  [18128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_SEMI,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym_variable_definition_repeat1,
  [18141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_SEMI,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_variable_definition_repeat1,
  [18154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_RBRACE,
    ACTIONS(1268), 1,
      anon_sym_COMMA,
    STATE(320), 1,
      aux_sym_initlist_repeat1,
  [18167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_SEMI,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym_variable_definition_repeat1,
  [18180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [18189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1273), 1,
      anon_sym_SEMI,
    STATE(107), 1,
      sym_compound_statement,
  [18202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    STATE(329), 1,
      aux_sym__argument_list_repeat1,
  [18215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [18224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_COMMA,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_initlist_repeat1,
  [18237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1281), 1,
      anon_sym_SEMI,
    STATE(140), 1,
      sym_compound_statement,
  [18250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1286), 1,
      anon_sym_LT,
    STATE(328), 1,
      aux_sym_scope_repeat1,
  [18263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
    STATE(329), 1,
      aux_sym__argument_list_repeat1,
  [18276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1293), 1,
      anon_sym_SEMI,
    STATE(126), 1,
      sym_compound_statement,
  [18289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1295), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      sym_compound_statement,
  [18302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    ACTIONS(1299), 1,
      anon_sym_GT,
    STATE(351), 1,
      aux_sym_type_parameter_repeat1,
  [18315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1301), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      sym_compound_statement,
  [18328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1303), 1,
      anon_sym_SEMI,
    STATE(150), 1,
      sym_compound_statement,
  [18341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      anon_sym_EQ,
    ACTIONS(1305), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      sym_identifier,
    ACTIONS(1311), 1,
      anon_sym_AMP,
    STATE(387), 1,
      sym_typemod,
  [18365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    ACTIONS(1313), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_parameter_list_repeat1,
  [18378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1315), 1,
      anon_sym_SEMI,
    STATE(124), 1,
      sym_compound_statement,
  [18391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1317), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      sym_compound_statement,
  [18404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      aux_sym_parameter_list_repeat1,
  [18417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [18426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1323), 1,
      anon_sym_SEMI,
    STATE(145), 1,
      sym_compound_statement,
  [18439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_SEMI,
    STATE(315), 1,
      aux_sym_variable_definition_repeat1,
  [18452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1325), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      sym_compound_statement,
  [18465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    ACTIONS(1330), 1,
      anon_sym_GT,
    STATE(345), 1,
      aux_sym_type_parameter_repeat1,
  [18478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(1332), 1,
      anon_sym_SEMI,
    STATE(318), 1,
      aux_sym_variable_definition_repeat1,
  [18491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1334), 1,
      anon_sym_SEMI,
    STATE(136), 1,
      sym_compound_statement,
  [18504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_SEMI,
    STATE(318), 1,
      aux_sym_variable_definition_repeat1,
  [18517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1336), 1,
      anon_sym_SEMI,
    STATE(135), 1,
      sym_compound_statement,
  [18530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1338), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      sym_compound_statement,
  [18543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    ACTIONS(1340), 1,
      anon_sym_GT,
    STATE(345), 1,
      aux_sym_type_parameter_repeat1,
  [18556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1342), 1,
      anon_sym_SEMI,
    STATE(94), 1,
      sym_compound_statement,
  [18569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym__argument_list_repeat1,
  [18582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_COMMA,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
    STATE(354), 1,
      aux_sym_parameter_list_repeat1,
  [18595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1351), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      sym_compound_statement,
  [18608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      anon_sym_LPAREN,
    STATE(403), 1,
      sym_parenthesized_expression,
  [18618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [18634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_parenthesized_expression,
  [18644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      anon_sym_LPAREN,
    STATE(378), 1,
      sym_parenthesized_expression,
  [18654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 1,
      sym_identifier,
    STATE(177), 1,
      sym__field_identifier,
  [18664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_parenthesized_expression,
  [18674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [18682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
    STATE(262), 1,
      sym_parameter_list,
  [18692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
    STATE(268), 1,
      sym_parameter_list,
  [18702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 1,
      sym_identifier,
    ACTIONS(1361), 1,
      anon_sym_AMP,
  [18712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      sym_identifier,
    ACTIONS(1365), 1,
      anon_sym_AMP,
  [18722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
    STATE(261), 1,
      sym_parameter_list,
  [18732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
    STATE(267), 1,
      sym_parameter_list,
  [18742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [18750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [18758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      sym_identifier,
    ACTIONS(1371), 1,
      anon_sym_AMP,
  [18768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [18776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
    STATE(264), 1,
      sym_parameter_list,
  [18786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      anon_sym_AMP,
    ACTIONS(1373), 1,
      sym_identifier,
  [18796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [18804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [18812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_compound_statement,
  [18822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 2,
      anon_sym_COLON_COLON,
      anon_sym_LT,
  [18830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 1,
      anon_sym_while,
  [18837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 1,
      sym_identifier,
  [18844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_SEMI,
  [18851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 1,
      sym_identifier,
  [18858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
  [18865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
  [18872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      anon_sym_COLON_COLON,
  [18879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      sym_identifier,
  [18886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 1,
      sym_identifier,
  [18893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
  [18900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 1,
      sym_identifier,
  [18907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1373), 1,
      sym_identifier,
  [18914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 1,
      anon_sym_COLON_COLON,
  [18921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
  [18928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
  [18935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 1,
      sym_identifier,
  [18942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      anon_sym_LPAREN,
  [18949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1397), 1,
      sym_identifier,
  [18956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
  [18963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_SEMI,
  [18970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 1,
      sym_identifier,
  [18977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 1,
      sym_identifier,
  [18984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 1,
      anon_sym_COLON_COLON,
  [18991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1403), 1,
      anon_sym_SEMI,
  [18998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1405), 1,
      anon_sym_RBRACK,
  [19005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1407), 1,
      ts_builtin_sym_end,
  [19012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
  [19019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      sym_identifier,
  [19026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
  [19033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_SEMI,
  [19040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      anon_sym_LPAREN,
  [19047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
  [19054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_COLON,
  [19061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1417), 1,
      sym_identifier,
  [19068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_SEMI,
  [19075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 1,
      anon_sym_SEMI,
  [19082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 1,
      anon_sym_SEMI,
  [19089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 114,
  [SMALL_STATE(21)] = 222,
  [SMALL_STATE(22)] = 327,
  [SMALL_STATE(23)] = 432,
  [SMALL_STATE(24)] = 537,
  [SMALL_STATE(25)] = 642,
  [SMALL_STATE(26)] = 711,
  [SMALL_STATE(27)] = 816,
  [SMALL_STATE(28)] = 921,
  [SMALL_STATE(29)] = 1026,
  [SMALL_STATE(30)] = 1131,
  [SMALL_STATE(31)] = 1236,
  [SMALL_STATE(32)] = 1341,
  [SMALL_STATE(33)] = 1446,
  [SMALL_STATE(34)] = 1551,
  [SMALL_STATE(35)] = 1656,
  [SMALL_STATE(36)] = 1761,
  [SMALL_STATE(37)] = 1825,
  [SMALL_STATE(38)] = 1889,
  [SMALL_STATE(39)] = 1953,
  [SMALL_STATE(40)] = 2017,
  [SMALL_STATE(41)] = 2119,
  [SMALL_STATE(42)] = 2221,
  [SMALL_STATE(43)] = 2285,
  [SMALL_STATE(44)] = 2349,
  [SMALL_STATE(45)] = 2413,
  [SMALL_STATE(46)] = 2515,
  [SMALL_STATE(47)] = 2579,
  [SMALL_STATE(48)] = 2643,
  [SMALL_STATE(49)] = 2707,
  [SMALL_STATE(50)] = 2771,
  [SMALL_STATE(51)] = 2873,
  [SMALL_STATE(52)] = 2937,
  [SMALL_STATE(53)] = 3001,
  [SMALL_STATE(54)] = 3065,
  [SMALL_STATE(55)] = 3129,
  [SMALL_STATE(56)] = 3193,
  [SMALL_STATE(57)] = 3257,
  [SMALL_STATE(58)] = 3321,
  [SMALL_STATE(59)] = 3420,
  [SMALL_STATE(60)] = 3519,
  [SMALL_STATE(61)] = 3618,
  [SMALL_STATE(62)] = 3717,
  [SMALL_STATE(63)] = 3816,
  [SMALL_STATE(64)] = 3915,
  [SMALL_STATE(65)] = 4014,
  [SMALL_STATE(66)] = 4113,
  [SMALL_STATE(67)] = 4212,
  [SMALL_STATE(68)] = 4311,
  [SMALL_STATE(69)] = 4410,
  [SMALL_STATE(70)] = 4509,
  [SMALL_STATE(71)] = 4608,
  [SMALL_STATE(72)] = 4707,
  [SMALL_STATE(73)] = 4806,
  [SMALL_STATE(74)] = 4905,
  [SMALL_STATE(75)] = 5004,
  [SMALL_STATE(76)] = 5103,
  [SMALL_STATE(77)] = 5202,
  [SMALL_STATE(78)] = 5301,
  [SMALL_STATE(79)] = 5400,
  [SMALL_STATE(80)] = 5499,
  [SMALL_STATE(81)] = 5598,
  [SMALL_STATE(82)] = 5697,
  [SMALL_STATE(83)] = 5759,
  [SMALL_STATE(84)] = 5821,
  [SMALL_STATE(85)] = 5883,
  [SMALL_STATE(86)] = 5945,
  [SMALL_STATE(87)] = 6007,
  [SMALL_STATE(88)] = 6069,
  [SMALL_STATE(89)] = 6131,
  [SMALL_STATE(90)] = 6193,
  [SMALL_STATE(91)] = 6255,
  [SMALL_STATE(92)] = 6317,
  [SMALL_STATE(93)] = 6379,
  [SMALL_STATE(94)] = 6441,
  [SMALL_STATE(95)] = 6503,
  [SMALL_STATE(96)] = 6565,
  [SMALL_STATE(97)] = 6627,
  [SMALL_STATE(98)] = 6689,
  [SMALL_STATE(99)] = 6751,
  [SMALL_STATE(100)] = 6813,
  [SMALL_STATE(101)] = 6875,
  [SMALL_STATE(102)] = 6937,
  [SMALL_STATE(103)] = 6999,
  [SMALL_STATE(104)] = 7061,
  [SMALL_STATE(105)] = 7123,
  [SMALL_STATE(106)] = 7185,
  [SMALL_STATE(107)] = 7247,
  [SMALL_STATE(108)] = 7309,
  [SMALL_STATE(109)] = 7371,
  [SMALL_STATE(110)] = 7433,
  [SMALL_STATE(111)] = 7495,
  [SMALL_STATE(112)] = 7557,
  [SMALL_STATE(113)] = 7619,
  [SMALL_STATE(114)] = 7681,
  [SMALL_STATE(115)] = 7743,
  [SMALL_STATE(116)] = 7805,
  [SMALL_STATE(117)] = 7867,
  [SMALL_STATE(118)] = 7929,
  [SMALL_STATE(119)] = 7991,
  [SMALL_STATE(120)] = 8053,
  [SMALL_STATE(121)] = 8115,
  [SMALL_STATE(122)] = 8177,
  [SMALL_STATE(123)] = 8239,
  [SMALL_STATE(124)] = 8301,
  [SMALL_STATE(125)] = 8363,
  [SMALL_STATE(126)] = 8425,
  [SMALL_STATE(127)] = 8487,
  [SMALL_STATE(128)] = 8549,
  [SMALL_STATE(129)] = 8611,
  [SMALL_STATE(130)] = 8673,
  [SMALL_STATE(131)] = 8735,
  [SMALL_STATE(132)] = 8797,
  [SMALL_STATE(133)] = 8859,
  [SMALL_STATE(134)] = 8921,
  [SMALL_STATE(135)] = 8983,
  [SMALL_STATE(136)] = 9045,
  [SMALL_STATE(137)] = 9107,
  [SMALL_STATE(138)] = 9169,
  [SMALL_STATE(139)] = 9231,
  [SMALL_STATE(140)] = 9293,
  [SMALL_STATE(141)] = 9355,
  [SMALL_STATE(142)] = 9417,
  [SMALL_STATE(143)] = 9479,
  [SMALL_STATE(144)] = 9541,
  [SMALL_STATE(145)] = 9603,
  [SMALL_STATE(146)] = 9665,
  [SMALL_STATE(147)] = 9727,
  [SMALL_STATE(148)] = 9789,
  [SMALL_STATE(149)] = 9851,
  [SMALL_STATE(150)] = 9913,
  [SMALL_STATE(151)] = 9975,
  [SMALL_STATE(152)] = 10037,
  [SMALL_STATE(153)] = 10099,
  [SMALL_STATE(154)] = 10161,
  [SMALL_STATE(155)] = 10230,
  [SMALL_STATE(156)] = 10304,
  [SMALL_STATE(157)] = 10382,
  [SMALL_STATE(158)] = 10441,
  [SMALL_STATE(159)] = 10520,
  [SMALL_STATE(160)] = 10593,
  [SMALL_STATE(161)] = 10672,
  [SMALL_STATE(162)] = 10755,
  [SMALL_STATE(163)] = 10842,
  [SMALL_STATE(164)] = 10931,
  [SMALL_STATE(165)] = 11022,
  [SMALL_STATE(166)] = 11091,
  [SMALL_STATE(167)] = 11162,
  [SMALL_STATE(168)] = 11237,
  [SMALL_STATE(169)] = 11306,
  [SMALL_STATE(170)] = 11401,
  [SMALL_STATE(171)] = 11496,
  [SMALL_STATE(172)] = 11593,
  [SMALL_STATE(173)] = 11674,
  [SMALL_STATE(174)] = 11741,
  [SMALL_STATE(175)] = 11810,
  [SMALL_STATE(176)] = 11868,
  [SMALL_STATE(177)] = 11926,
  [SMALL_STATE(178)] = 11984,
  [SMALL_STATE(179)] = 12042,
  [SMALL_STATE(180)] = 12100,
  [SMALL_STATE(181)] = 12158,
  [SMALL_STATE(182)] = 12216,
  [SMALL_STATE(183)] = 12274,
  [SMALL_STATE(184)] = 12332,
  [SMALL_STATE(185)] = 12400,
  [SMALL_STATE(186)] = 12458,
  [SMALL_STATE(187)] = 12516,
  [SMALL_STATE(188)] = 12574,
  [SMALL_STATE(189)] = 12632,
  [SMALL_STATE(190)] = 12690,
  [SMALL_STATE(191)] = 12748,
  [SMALL_STATE(192)] = 12806,
  [SMALL_STATE(193)] = 12864,
  [SMALL_STATE(194)] = 12922,
  [SMALL_STATE(195)] = 12980,
  [SMALL_STATE(196)] = 13049,
  [SMALL_STATE(197)] = 13114,
  [SMALL_STATE(198)] = 13179,
  [SMALL_STATE(199)] = 13277,
  [SMALL_STATE(200)] = 13373,
  [SMALL_STATE(201)] = 13471,
  [SMALL_STATE(202)] = 13569,
  [SMALL_STATE(203)] = 13664,
  [SMALL_STATE(204)] = 13757,
  [SMALL_STATE(205)] = 13852,
  [SMALL_STATE(206)] = 13947,
  [SMALL_STATE(207)] = 14042,
  [SMALL_STATE(208)] = 14137,
  [SMALL_STATE(209)] = 14230,
  [SMALL_STATE(210)] = 14323,
  [SMALL_STATE(211)] = 14418,
  [SMALL_STATE(212)] = 14513,
  [SMALL_STATE(213)] = 14608,
  [SMALL_STATE(214)] = 14701,
  [SMALL_STATE(215)] = 14794,
  [SMALL_STATE(216)] = 14889,
  [SMALL_STATE(217)] = 14984,
  [SMALL_STATE(218)] = 15076,
  [SMALL_STATE(219)] = 15168,
  [SMALL_STATE(220)] = 15260,
  [SMALL_STATE(221)] = 15352,
  [SMALL_STATE(222)] = 15444,
  [SMALL_STATE(223)] = 15536,
  [SMALL_STATE(224)] = 15628,
  [SMALL_STATE(225)] = 15720,
  [SMALL_STATE(226)] = 15773,
  [SMALL_STATE(227)] = 15836,
  [SMALL_STATE(228)] = 15903,
  [SMALL_STATE(229)] = 15965,
  [SMALL_STATE(230)] = 16027,
  [SMALL_STATE(231)] = 16086,
  [SMALL_STATE(232)] = 16142,
  [SMALL_STATE(233)] = 16180,
  [SMALL_STATE(234)] = 16236,
  [SMALL_STATE(235)] = 16274,
  [SMALL_STATE(236)] = 16327,
  [SMALL_STATE(237)] = 16380,
  [SMALL_STATE(238)] = 16433,
  [SMALL_STATE(239)] = 16480,
  [SMALL_STATE(240)] = 16509,
  [SMALL_STATE(241)] = 16542,
  [SMALL_STATE(242)] = 16577,
  [SMALL_STATE(243)] = 16610,
  [SMALL_STATE(244)] = 16645,
  [SMALL_STATE(245)] = 16670,
  [SMALL_STATE(246)] = 16695,
  [SMALL_STATE(247)] = 16722,
  [SMALL_STATE(248)] = 16747,
  [SMALL_STATE(249)] = 16772,
  [SMALL_STATE(250)] = 16799,
  [SMALL_STATE(251)] = 16826,
  [SMALL_STATE(252)] = 16853,
  [SMALL_STATE(253)] = 16880,
  [SMALL_STATE(254)] = 16907,
  [SMALL_STATE(255)] = 16934,
  [SMALL_STATE(256)] = 16961,
  [SMALL_STATE(257)] = 16986,
  [SMALL_STATE(258)] = 17014,
  [SMALL_STATE(259)] = 17034,
  [SMALL_STATE(260)] = 17062,
  [SMALL_STATE(261)] = 17077,
  [SMALL_STATE(262)] = 17102,
  [SMALL_STATE(263)] = 17127,
  [SMALL_STATE(264)] = 17152,
  [SMALL_STATE(265)] = 17177,
  [SMALL_STATE(266)] = 17202,
  [SMALL_STATE(267)] = 17217,
  [SMALL_STATE(268)] = 17242,
  [SMALL_STATE(269)] = 17267,
  [SMALL_STATE(270)] = 17292,
  [SMALL_STATE(271)] = 17307,
  [SMALL_STATE(272)] = 17332,
  [SMALL_STATE(273)] = 17354,
  [SMALL_STATE(274)] = 17370,
  [SMALL_STATE(275)] = 17392,
  [SMALL_STATE(276)] = 17414,
  [SMALL_STATE(277)] = 17434,
  [SMALL_STATE(278)] = 17456,
  [SMALL_STATE(279)] = 17478,
  [SMALL_STATE(280)] = 17500,
  [SMALL_STATE(281)] = 17518,
  [SMALL_STATE(282)] = 17538,
  [SMALL_STATE(283)] = 17552,
  [SMALL_STATE(284)] = 17572,
  [SMALL_STATE(285)] = 17594,
  [SMALL_STATE(286)] = 17616,
  [SMALL_STATE(287)] = 17636,
  [SMALL_STATE(288)] = 17658,
  [SMALL_STATE(289)] = 17678,
  [SMALL_STATE(290)] = 17703,
  [SMALL_STATE(291)] = 17716,
  [SMALL_STATE(292)] = 17731,
  [SMALL_STATE(293)] = 17746,
  [SMALL_STATE(294)] = 17759,
  [SMALL_STATE(295)] = 17772,
  [SMALL_STATE(296)] = 17797,
  [SMALL_STATE(297)] = 17810,
  [SMALL_STATE(298)] = 17823,
  [SMALL_STATE(299)] = 17845,
  [SMALL_STATE(300)] = 17867,
  [SMALL_STATE(301)] = 17884,
  [SMALL_STATE(302)] = 17900,
  [SMALL_STATE(303)] = 17914,
  [SMALL_STATE(304)] = 17928,
  [SMALL_STATE(305)] = 17944,
  [SMALL_STATE(306)] = 17956,
  [SMALL_STATE(307)] = 17972,
  [SMALL_STATE(308)] = 17988,
  [SMALL_STATE(309)] = 18004,
  [SMALL_STATE(310)] = 18020,
  [SMALL_STATE(311)] = 18036,
  [SMALL_STATE(312)] = 18050,
  [SMALL_STATE(313)] = 18063,
  [SMALL_STATE(314)] = 18076,
  [SMALL_STATE(315)] = 18089,
  [SMALL_STATE(316)] = 18102,
  [SMALL_STATE(317)] = 18115,
  [SMALL_STATE(318)] = 18128,
  [SMALL_STATE(319)] = 18141,
  [SMALL_STATE(320)] = 18154,
  [SMALL_STATE(321)] = 18167,
  [SMALL_STATE(322)] = 18180,
  [SMALL_STATE(323)] = 18189,
  [SMALL_STATE(324)] = 18202,
  [SMALL_STATE(325)] = 18215,
  [SMALL_STATE(326)] = 18224,
  [SMALL_STATE(327)] = 18237,
  [SMALL_STATE(328)] = 18250,
  [SMALL_STATE(329)] = 18263,
  [SMALL_STATE(330)] = 18276,
  [SMALL_STATE(331)] = 18289,
  [SMALL_STATE(332)] = 18302,
  [SMALL_STATE(333)] = 18315,
  [SMALL_STATE(334)] = 18328,
  [SMALL_STATE(335)] = 18341,
  [SMALL_STATE(336)] = 18352,
  [SMALL_STATE(337)] = 18365,
  [SMALL_STATE(338)] = 18378,
  [SMALL_STATE(339)] = 18391,
  [SMALL_STATE(340)] = 18404,
  [SMALL_STATE(341)] = 18417,
  [SMALL_STATE(342)] = 18426,
  [SMALL_STATE(343)] = 18439,
  [SMALL_STATE(344)] = 18452,
  [SMALL_STATE(345)] = 18465,
  [SMALL_STATE(346)] = 18478,
  [SMALL_STATE(347)] = 18491,
  [SMALL_STATE(348)] = 18504,
  [SMALL_STATE(349)] = 18517,
  [SMALL_STATE(350)] = 18530,
  [SMALL_STATE(351)] = 18543,
  [SMALL_STATE(352)] = 18556,
  [SMALL_STATE(353)] = 18569,
  [SMALL_STATE(354)] = 18582,
  [SMALL_STATE(355)] = 18595,
  [SMALL_STATE(356)] = 18608,
  [SMALL_STATE(357)] = 18618,
  [SMALL_STATE(358)] = 18626,
  [SMALL_STATE(359)] = 18634,
  [SMALL_STATE(360)] = 18644,
  [SMALL_STATE(361)] = 18654,
  [SMALL_STATE(362)] = 18664,
  [SMALL_STATE(363)] = 18674,
  [SMALL_STATE(364)] = 18682,
  [SMALL_STATE(365)] = 18692,
  [SMALL_STATE(366)] = 18702,
  [SMALL_STATE(367)] = 18712,
  [SMALL_STATE(368)] = 18722,
  [SMALL_STATE(369)] = 18732,
  [SMALL_STATE(370)] = 18742,
  [SMALL_STATE(371)] = 18750,
  [SMALL_STATE(372)] = 18758,
  [SMALL_STATE(373)] = 18768,
  [SMALL_STATE(374)] = 18776,
  [SMALL_STATE(375)] = 18786,
  [SMALL_STATE(376)] = 18796,
  [SMALL_STATE(377)] = 18804,
  [SMALL_STATE(378)] = 18812,
  [SMALL_STATE(379)] = 18822,
  [SMALL_STATE(380)] = 18830,
  [SMALL_STATE(381)] = 18837,
  [SMALL_STATE(382)] = 18844,
  [SMALL_STATE(383)] = 18851,
  [SMALL_STATE(384)] = 18858,
  [SMALL_STATE(385)] = 18865,
  [SMALL_STATE(386)] = 18872,
  [SMALL_STATE(387)] = 18879,
  [SMALL_STATE(388)] = 18886,
  [SMALL_STATE(389)] = 18893,
  [SMALL_STATE(390)] = 18900,
  [SMALL_STATE(391)] = 18907,
  [SMALL_STATE(392)] = 18914,
  [SMALL_STATE(393)] = 18921,
  [SMALL_STATE(394)] = 18928,
  [SMALL_STATE(395)] = 18935,
  [SMALL_STATE(396)] = 18942,
  [SMALL_STATE(397)] = 18949,
  [SMALL_STATE(398)] = 18956,
  [SMALL_STATE(399)] = 18963,
  [SMALL_STATE(400)] = 18970,
  [SMALL_STATE(401)] = 18977,
  [SMALL_STATE(402)] = 18984,
  [SMALL_STATE(403)] = 18991,
  [SMALL_STATE(404)] = 18998,
  [SMALL_STATE(405)] = 19005,
  [SMALL_STATE(406)] = 19012,
  [SMALL_STATE(407)] = 19019,
  [SMALL_STATE(408)] = 19026,
  [SMALL_STATE(409)] = 19033,
  [SMALL_STATE(410)] = 19040,
  [SMALL_STATE(411)] = 19047,
  [SMALL_STATE(412)] = 19054,
  [SMALL_STATE(413)] = 19061,
  [SMALL_STATE(414)] = 19068,
  [SMALL_STATE(415)] = 19075,
  [SMALL_STATE(416)] = 19082,
  [SMALL_STATE(417)] = 19089,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(158),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(73),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(238),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(234),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(239),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(19),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(266),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(66),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(282),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(282),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(247),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(237),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(11),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(416),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(415),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(45),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(359),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(360),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(70),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(412),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(362),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(16),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(410),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(301),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(308),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(66),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(80),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(182),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(185),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(182),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(311),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 3, .production_id = 7),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 3, .production_id = 7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 7),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, .production_id = 7),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(155),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(66),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(238),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(239),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(19),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(266),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(282),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(282),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(247),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(237),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(11),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(416),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(415),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(45),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(359),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(360),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(362),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(16),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(410),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(301),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(308),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(66),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(80),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(182),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(185),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(182),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(311),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(155),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(66),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(238),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(239),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(19),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(266),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(282),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(282),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(247),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(237),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(11),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(416),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(415),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(45),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(359),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(360),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(70),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(412),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(362),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(16),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(410),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(301),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(308),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(66),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(80),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(182),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(185),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(182),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(311),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_statement_body, 4, .production_id = 61),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_statement_body, 2, .production_id = 19),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 5),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 5),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_statement_body, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_statement_body, 3, .production_id = 37),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_statement_body, 3, .production_id = 39),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_statement_body, 3, .production_id = 19),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 3, .production_id = 6),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 3, .production_id = 6),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 7),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 7),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 6),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 6),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 40),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, .production_id = 40),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 18),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 18),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 5, .production_id = 35),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_statement, 5, .production_id = 35),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 69),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 69),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 100),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 8, .production_id = 100),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 27),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 4, .production_id = 27),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 91),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 91),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 26),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 4, .production_id = 26),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 90),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 90),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 25),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 4, .production_id = 25),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 52),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 52),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 89),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 89),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 24),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 4, .production_id = 24),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 23),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 4, .production_id = 23),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 88),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 88),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 87),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 87),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 86),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 86),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 22),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 4, .production_id = 22),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 85),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 85),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 31),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 31),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 84),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 84),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 32),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 32),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 33),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 33),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 83),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 83),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 82),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 82),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 34),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 34),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 9, .production_id = 107),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 9, .production_id = 107),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 9, .production_id = 106),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 9, .production_id = 106),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 80),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 80),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 79),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 79),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 78),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 78),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 77),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 77),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 76),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 76),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 105),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 8, .production_id = 105),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 104),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 8, .production_id = 104),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 103),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 8, .production_id = 103),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 75),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 75),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 102),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 8, .production_id = 102),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 101),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 8, .production_id = 101),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 74),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 74),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 53),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 53),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 73),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 73),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 72),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 72),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 71),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 71),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 92),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 92),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 99),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 8, .production_id = 99),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 70),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 70),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 68),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 68),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 67),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 67),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8, .production_id = 98),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 8, .production_id = 98),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 51),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 51),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 16),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 4, .production_id = 16),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 93),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 93),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 50),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 50),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 15),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 4, .production_id = 15),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 94),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 94),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 95),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 95),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 66),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 66),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 42),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 42),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 96),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 96),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 65),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 65),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 43),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 43),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 64),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 64),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 63),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 63),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 44),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 44),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 45),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 45),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 7, .production_id = 97),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 7, .production_id = 97),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 46),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 46),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 47),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 47),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 48),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 48),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 3, .production_id = 9),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 3, .production_id = 9),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 57),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 57),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 6, .production_id = 56),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 6, .production_id = 56),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 3, .production_id = 10),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 3, .production_id = 10),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 5, .production_id = 49),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 5, .production_id = 49),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 1),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_access, 1), SHIFT(237),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_datatype, 1), REDUCE(sym_variable_access, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [793] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_datatype, 1), REDUCE(sym_variable_access, 1), SHIFT(237),
  [797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_datatype, 1), REDUCE(sym_variable_access, 1),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_access, 1), SHIFT(227),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, .production_id = 17),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, .production_id = 17),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 4, .production_id = 30),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_expression, 4, .production_id = 30),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 55),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_expression, 5, .production_id = 55),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 11),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 2, .production_id = 1),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_expression, 2, .production_id = 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 2),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string, 3),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string, 3),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, .production_id = 14),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 3, .production_id = 14),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 2, .production_id = 3),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_expression, 2, .production_id = 3),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string, 2),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument_list, 2),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument_list, 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument_list, 4),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument_list, 4),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_expression, 4, .production_id = 29),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript_expression, 4, .production_id = 29),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_access, 2, .production_id = 2),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_access, 2, .production_id = 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string, 3),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string, 3),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument_list, 3),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument_list, 3),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, .production_id = 28),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, .production_id = 28),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string, 2),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string, 2),
  [949] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_datatype, 1), REDUCE(sym_variable_access, 2, .production_id = 2),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_datatype, 1), REDUCE(sym_variable_access, 2, .production_id = 2),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma_expression, 3, .production_id = 41),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 4, .production_id = 62),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_statement_body, 4, .production_id = 58),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_statement_body, 4, .production_id = 59),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_statement_body, 4, .production_id = 60),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_statement_body, 5, .production_id = 81),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 54),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 4),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_statement_body, 3, .production_id = 38),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_initlist_repeat1, 2),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, .production_id = 12),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_statement_body, 3, .production_id = 36),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1031] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_location_repeat1, 2),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_location_repeat1, 2),
  [1035] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_location_repeat1, 2), SHIFT_REPEAT(232),
  [1038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_location, 1),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_location, 1),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1044] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_specifier, 1),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_specifier, 1),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 4),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 4),
  [1056] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 1),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 1),
  [1066] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 2),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 2),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [1082] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_datatype, 1), SHIFT(237),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [1089] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(237),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 4),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primative_type, 1),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 3),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat2, 1),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 1),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 2),
  [1160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(404),
  [1163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(280),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_repeat1, 2), SHIFT_REPEAT(303),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_repeat1, 2),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typemod, 1),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__single_quote_string_repeat1, 2),
  [1221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quote_string_repeat1, 2), SHIFT_REPEAT(306),
  [1224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_quote_string_repeat1, 2), SHIFT_REPEAT(306),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2),
  [1247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(310),
  [1250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(310),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2), SHIFT_REPEAT(381),
  [1268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initlist_repeat1, 2), SHIFT_REPEAT(23),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initlist, 4),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initlist, 2),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2), SHIFT_REPEAT(395),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_repeat1, 2),
  [1288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument_list_repeat1, 2), SHIFT_REPEAT(40),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__argument_list_repeat1, 2),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 20),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_specifier, 1, .production_id = 8),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initlist, 3),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameter_repeat1, 2), SHIFT_REPEAT(235),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameter_repeat1, 2),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(230),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 3),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcattr, 1),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_specifier, 2, .production_id = 21),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typemod, 2),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1407] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_angelscript(void) {
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
