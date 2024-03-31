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
#define STATE_COUNT 945
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 10
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 11
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 48

enum ts_symbol_identifiers {
  anon_sym_NULL = 1,
  aux_sym_tag_token1 = 2,
  aux_sym_tag_name_token1 = 3,
  anon_sym_LT = 4,
  anon_sym_GT = 5,
  anon_sym_LT_GT = 6,
  sym_tag_class = 7,
  sym_tag_id = 8,
  anon_sym_STAR = 9,
  anon_sym_COLON = 10,
  aux_sym_child_token1 = 11,
  aux_sym_html_opening_tag_token1 = 12,
  anon_sym_SLASH = 13,
  anon_sym_ruby = 14,
  anon_sym_javascript = 15,
  anon_sym_css = 16,
  anon_sym_sass = 17,
  anon_sym_scss = 18,
  anon_sym_less = 19,
  anon_sym_coffee = 20,
  anon_sym_markdown = 21,
  anon_sym_textile = 22,
  anon_sym_rdoc = 23,
  aux_sym_wrapped_parameters_token1 = 24,
  aux_sym_wrapped_parameters_token2 = 25,
  aux_sym_wrapped_parameters_token3 = 26,
  aux_sym_wrapped_parameters_token4 = 27,
  aux_sym_wrapped_parameters_token5 = 28,
  aux_sym_floating_parameter_pair_token1 = 29,
  aux_sym_parameter_value_token1 = 30,
  aux_sym_splat_parameters_token1 = 31,
  anon_sym_LPAREN = 32,
  aux_sym__ruby_fragment_token1 = 33,
  anon_sym_RPAREN = 34,
  anon_sym_LBRACE = 35,
  aux_sym__ruby_fragment_token2 = 36,
  anon_sym_RBRACE = 37,
  anon_sym_LBRACK = 38,
  aux_sym__ruby_fragment_token3 = 39,
  anon_sym_RBRACK = 40,
  anon_sym_COMMA = 41,
  aux_sym__ruby_multiline_token1 = 42,
  aux_sym__ruby_multiline_token2 = 43,
  aux_sym__ruby_multiline_token3 = 44,
  aux_sym_ruby_inline_token1 = 45,
  aux_sym_ruby_inline_token2 = 46,
  anon_sym_POUND_LBRACE = 47,
  anon_sym_DASH = 48,
  anon_sym_EQ = 49,
  anon_sym_EQ_EQ = 50,
  anon_sym_EQ_GT = 51,
  anon_sym_EQ_LT = 52,
  aux_sym_text_inline_token1 = 53,
  aux_sym_text_inline_token2 = 54,
  anon_sym_PIPE = 55,
  anon_sym_SQUOTE = 56,
  anon_sym_BANG = 57,
  anon_sym_POUND = 58,
  sym__free_text = 59,
  sym__newline = 60,
  sym__indent = 61,
  sym__dedent = 62,
  sym_string_start = 63,
  sym_string_content = 64,
  sym_string_end = 65,
  sym__comment = 66,
  sym__except = 67,
  sym_source_file = 68,
  sym__node = 69,
  sym_tag = 70,
  sym_tag_name = 71,
  sym_splat_tags = 72,
  sym_child = 73,
  sym__html = 74,
  sym_html_opening_tag = 75,
  sym_html_closing_tag = 76,
  sym__html_line = 77,
  sym_injector = 78,
  sym_wrapped_parameters = 79,
  sym_floating_parameters = 80,
  sym_floating_parameter_pair = 81,
  sym_wrapped_parameter_pair = 82,
  sym_parameter_name = 83,
  sym_parameter_value = 84,
  sym_splat_parameters = 85,
  sym__ruby_fragment = 86,
  aux_sym__ruby_multiline = 87,
  sym_ruby_inline = 88,
  sym_ruby_interpolation = 89,
  sym_directive = 90,
  sym_directive_block = 91,
  sym_directive_inline = 92,
  sym_text_inline = 93,
  sym_text_block = 94,
  sym__text_child = 95,
  sym_comment = 96,
  sym__comment_child = 97,
  aux_sym__text = 98,
  aux_sym_source_file_repeat1 = 99,
  aux_sym_tag_repeat1 = 100,
  aux_sym__html_line_repeat1 = 101,
  aux_sym_injector_repeat1 = 102,
  aux_sym_wrapped_parameters_repeat1 = 103,
  aux_sym_floating_parameters_repeat1 = 104,
  aux_sym_parameter_value_repeat1 = 105,
  aux_sym__ruby_fragment_repeat1 = 106,
  aux_sym__ruby_fragment_repeat2 = 107,
  aux_sym__ruby_fragment_repeat3 = 108,
  aux_sym_ruby_inline_repeat1 = 109,
  aux_sym__comment_child_repeat1 = 110,
  alias_sym_coffee_lang = 111,
  alias_sym_css_lang = 112,
  alias_sym_javascript_lang = 113,
  alias_sym_less_lang = 114,
  alias_sym_markdown_lang = 115,
  alias_sym_rdoc_lang = 116,
  alias_sym_ruby_lang = 117,
  alias_sym_sass_lang = 118,
  alias_sym_scss_lang = 119,
  alias_sym_textile_lang = 120,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_NULL] = "\0",
  [aux_sym_tag_token1] = "inline_tag_close",
  [aux_sym_tag_name_token1] = "tag_name_token1",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_GT] = "<>",
  [sym_tag_class] = "tag_class",
  [sym_tag_id] = "tag_id",
  [anon_sym_STAR] = "*",
  [anon_sym_COLON] = ":",
  [aux_sym_child_token1] = "child_token1",
  [aux_sym_html_opening_tag_token1] = "html_opening_tag_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_ruby] = "ruby",
  [anon_sym_javascript] = "javascript",
  [anon_sym_css] = "css",
  [anon_sym_sass] = "sass",
  [anon_sym_scss] = "scss",
  [anon_sym_less] = "less",
  [anon_sym_coffee] = "coffee",
  [anon_sym_markdown] = "markdown",
  [anon_sym_textile] = "textile",
  [anon_sym_rdoc] = "rdoc",
  [aux_sym_wrapped_parameters_token1] = "bracket",
  [aux_sym_wrapped_parameters_token2] = "wrapped_parameters_token2",
  [aux_sym_wrapped_parameters_token3] = "bracket",
  [aux_sym_wrapped_parameters_token4] = "bracket",
  [aux_sym_wrapped_parameters_token5] = "bracket",
  [aux_sym_floating_parameter_pair_token1] = "delimiter",
  [aux_sym_parameter_value_token1] = "parameter_value_token1",
  [aux_sym_splat_parameters_token1] = "splat_parameters_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym__ruby_fragment_token1] = "_ruby_fragment_token1",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [aux_sym__ruby_fragment_token2] = "_ruby_fragment_token2",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [aux_sym__ruby_fragment_token3] = "_ruby_fragment_token3",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [aux_sym__ruby_multiline_token1] = "_ruby_multiline_token1",
  [aux_sym__ruby_multiline_token2] = "_ruby_multiline_token2",
  [aux_sym__ruby_multiline_token3] = "_ruby_multiline_token3",
  [aux_sym_ruby_inline_token1] = "ruby_inline_token1",
  [aux_sym_ruby_inline_token2] = "ruby_inline_token2",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_DASH] = "directive_sign",
  [anon_sym_EQ] = "directive_sign",
  [anon_sym_EQ_EQ] = "directive_sign",
  [anon_sym_EQ_GT] = "directive_sign",
  [anon_sym_EQ_LT] = "directive_sign",
  [aux_sym_text_inline_token1] = "text_inline_token1",
  [aux_sym_text_inline_token2] = "text_inline_token2",
  [anon_sym_PIPE] = "|",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BANG] = "!",
  [anon_sym_POUND] = "#",
  [sym__free_text] = "_free_text",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_string_start] = "string_start",
  [sym_string_content] = "string_content",
  [sym_string_end] = "string_end",
  [sym__comment] = "_comment",
  [sym__except] = "_except",
  [sym_source_file] = "source_file",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [sym_tag_name] = "tag_name",
  [sym_splat_tags] = "splat_tags",
  [sym_child] = "child",
  [sym__html] = "_html",
  [sym_html_opening_tag] = "html_opening_tag",
  [sym_html_closing_tag] = "html_closing_tag",
  [sym__html_line] = "_html_line",
  [sym_injector] = "injector",
  [sym_wrapped_parameters] = "wrapped_parameters",
  [sym_floating_parameters] = "floating_parameters",
  [sym_floating_parameter_pair] = "floating_parameter_pair",
  [sym_wrapped_parameter_pair] = "wrapped_parameter_pair",
  [sym_parameter_name] = "parameter_name",
  [sym_parameter_value] = "parameter_value",
  [sym_splat_parameters] = "splat_parameters",
  [sym__ruby_fragment] = "_ruby_fragment",
  [aux_sym__ruby_multiline] = "_ruby_multiline",
  [sym_ruby_inline] = "ruby_inline",
  [sym_ruby_interpolation] = "ruby_interpolation",
  [sym_directive] = "directive",
  [sym_directive_block] = "directive_block",
  [sym_directive_inline] = "directive_inline",
  [sym_text_inline] = "text_inline",
  [sym_text_block] = "text_block",
  [sym__text_child] = "_text_child",
  [sym_comment] = "comment",
  [sym__comment_child] = "_comment_child",
  [aux_sym__text] = "_text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym__html_line_repeat1] = "_html_line_repeat1",
  [aux_sym_injector_repeat1] = "injector_repeat1",
  [aux_sym_wrapped_parameters_repeat1] = "wrapped_parameters_repeat1",
  [aux_sym_floating_parameters_repeat1] = "floating_parameters_repeat1",
  [aux_sym_parameter_value_repeat1] = "parameter_value_repeat1",
  [aux_sym__ruby_fragment_repeat1] = "_ruby_fragment_repeat1",
  [aux_sym__ruby_fragment_repeat2] = "_ruby_fragment_repeat2",
  [aux_sym__ruby_fragment_repeat3] = "_ruby_fragment_repeat3",
  [aux_sym_ruby_inline_repeat1] = "ruby_inline_repeat1",
  [aux_sym__comment_child_repeat1] = "_comment_child_repeat1",
  [alias_sym_coffee_lang] = "coffee_lang",
  [alias_sym_css_lang] = "css_lang",
  [alias_sym_javascript_lang] = "javascript_lang",
  [alias_sym_less_lang] = "less_lang",
  [alias_sym_markdown_lang] = "markdown_lang",
  [alias_sym_rdoc_lang] = "rdoc_lang",
  [alias_sym_ruby_lang] = "ruby_lang",
  [alias_sym_sass_lang] = "sass_lang",
  [alias_sym_scss_lang] = "scss_lang",
  [alias_sym_textile_lang] = "textile_lang",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_NULL] = anon_sym_NULL,
  [aux_sym_tag_token1] = aux_sym_tag_token1,
  [aux_sym_tag_name_token1] = aux_sym_tag_name_token1,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [sym_tag_class] = sym_tag_class,
  [sym_tag_id] = sym_tag_id,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_child_token1] = aux_sym_child_token1,
  [aux_sym_html_opening_tag_token1] = aux_sym_html_opening_tag_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_ruby] = anon_sym_ruby,
  [anon_sym_javascript] = anon_sym_javascript,
  [anon_sym_css] = anon_sym_css,
  [anon_sym_sass] = anon_sym_sass,
  [anon_sym_scss] = anon_sym_scss,
  [anon_sym_less] = anon_sym_less,
  [anon_sym_coffee] = anon_sym_coffee,
  [anon_sym_markdown] = anon_sym_markdown,
  [anon_sym_textile] = anon_sym_textile,
  [anon_sym_rdoc] = anon_sym_rdoc,
  [aux_sym_wrapped_parameters_token1] = aux_sym_wrapped_parameters_token1,
  [aux_sym_wrapped_parameters_token2] = aux_sym_wrapped_parameters_token2,
  [aux_sym_wrapped_parameters_token3] = aux_sym_wrapped_parameters_token1,
  [aux_sym_wrapped_parameters_token4] = aux_sym_wrapped_parameters_token1,
  [aux_sym_wrapped_parameters_token5] = aux_sym_wrapped_parameters_token1,
  [aux_sym_floating_parameter_pair_token1] = aux_sym_floating_parameter_pair_token1,
  [aux_sym_parameter_value_token1] = aux_sym_parameter_value_token1,
  [aux_sym_splat_parameters_token1] = aux_sym_splat_parameters_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__ruby_fragment_token1] = aux_sym__ruby_fragment_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym__ruby_fragment_token2] = aux_sym__ruby_fragment_token2,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym__ruby_fragment_token3] = aux_sym__ruby_fragment_token3,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym__ruby_multiline_token1] = aux_sym__ruby_multiline_token1,
  [aux_sym__ruby_multiline_token2] = aux_sym__ruby_multiline_token2,
  [aux_sym__ruby_multiline_token3] = aux_sym__ruby_multiline_token3,
  [aux_sym_ruby_inline_token1] = aux_sym_ruby_inline_token1,
  [aux_sym_ruby_inline_token2] = aux_sym_ruby_inline_token2,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ] = anon_sym_DASH,
  [anon_sym_EQ_EQ] = anon_sym_DASH,
  [anon_sym_EQ_GT] = anon_sym_DASH,
  [anon_sym_EQ_LT] = anon_sym_DASH,
  [aux_sym_text_inline_token1] = aux_sym_text_inline_token1,
  [aux_sym_text_inline_token2] = aux_sym_text_inline_token2,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym__free_text] = sym__free_text,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_string_start] = sym_string_start,
  [sym_string_content] = sym_string_content,
  [sym_string_end] = sym_string_end,
  [sym__comment] = sym__comment,
  [sym__except] = sym__except,
  [sym_source_file] = sym_source_file,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [sym_tag_name] = sym_tag_name,
  [sym_splat_tags] = sym_splat_tags,
  [sym_child] = sym_child,
  [sym__html] = sym__html,
  [sym_html_opening_tag] = sym_html_opening_tag,
  [sym_html_closing_tag] = sym_html_closing_tag,
  [sym__html_line] = sym__html_line,
  [sym_injector] = sym_injector,
  [sym_wrapped_parameters] = sym_wrapped_parameters,
  [sym_floating_parameters] = sym_floating_parameters,
  [sym_floating_parameter_pair] = sym_floating_parameter_pair,
  [sym_wrapped_parameter_pair] = sym_wrapped_parameter_pair,
  [sym_parameter_name] = sym_parameter_name,
  [sym_parameter_value] = sym_parameter_value,
  [sym_splat_parameters] = sym_splat_parameters,
  [sym__ruby_fragment] = sym__ruby_fragment,
  [aux_sym__ruby_multiline] = aux_sym__ruby_multiline,
  [sym_ruby_inline] = sym_ruby_inline,
  [sym_ruby_interpolation] = sym_ruby_interpolation,
  [sym_directive] = sym_directive,
  [sym_directive_block] = sym_directive_block,
  [sym_directive_inline] = sym_directive_inline,
  [sym_text_inline] = sym_text_inline,
  [sym_text_block] = sym_text_block,
  [sym__text_child] = sym__text_child,
  [sym_comment] = sym_comment,
  [sym__comment_child] = sym__comment_child,
  [aux_sym__text] = aux_sym__text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym__html_line_repeat1] = aux_sym__html_line_repeat1,
  [aux_sym_injector_repeat1] = aux_sym_injector_repeat1,
  [aux_sym_wrapped_parameters_repeat1] = aux_sym_wrapped_parameters_repeat1,
  [aux_sym_floating_parameters_repeat1] = aux_sym_floating_parameters_repeat1,
  [aux_sym_parameter_value_repeat1] = aux_sym_parameter_value_repeat1,
  [aux_sym__ruby_fragment_repeat1] = aux_sym__ruby_fragment_repeat1,
  [aux_sym__ruby_fragment_repeat2] = aux_sym__ruby_fragment_repeat2,
  [aux_sym__ruby_fragment_repeat3] = aux_sym__ruby_fragment_repeat3,
  [aux_sym_ruby_inline_repeat1] = aux_sym_ruby_inline_repeat1,
  [aux_sym__comment_child_repeat1] = aux_sym__comment_child_repeat1,
  [alias_sym_coffee_lang] = alias_sym_coffee_lang,
  [alias_sym_css_lang] = alias_sym_css_lang,
  [alias_sym_javascript_lang] = alias_sym_javascript_lang,
  [alias_sym_less_lang] = alias_sym_less_lang,
  [alias_sym_markdown_lang] = alias_sym_markdown_lang,
  [alias_sym_rdoc_lang] = alias_sym_rdoc_lang,
  [alias_sym_ruby_lang] = alias_sym_ruby_lang,
  [alias_sym_sass_lang] = alias_sym_sass_lang,
  [alias_sym_scss_lang] = alias_sym_scss_lang,
  [alias_sym_textile_lang] = alias_sym_textile_lang,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_tag_name_token1] = {
    .visible = false,
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
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_class] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_child_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_html_opening_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ruby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_javascript] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_css] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_less] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coffee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_markdown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rdoc] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_wrapped_parameters_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_wrapped_parameters_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_wrapped_parameters_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_wrapped_parameters_token4] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_wrapped_parameters_token5] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_floating_parameter_pair_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_parameter_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_splat_parameters_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ruby_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ruby_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ruby_fragment_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ruby_multiline_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ruby_multiline_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ruby_multiline_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ruby_inline_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ruby_inline_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_LT] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_inline_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_inline_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym__free_text] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_string_start] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_string_end] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym__except] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_splat_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_child] = {
    .visible = true,
    .named = true,
  },
  [sym__html] = {
    .visible = false,
    .named = true,
  },
  [sym_html_opening_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_html_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__html_line] = {
    .visible = false,
    .named = true,
  },
  [sym_injector] = {
    .visible = true,
    .named = true,
  },
  [sym_wrapped_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_parameter_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_wrapped_parameter_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_value] = {
    .visible = true,
    .named = true,
  },
  [sym_splat_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym__ruby_fragment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__ruby_multiline] = {
    .visible = false,
    .named = false,
  },
  [sym_ruby_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_block] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_text_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_text_block] = {
    .visible = true,
    .named = true,
  },
  [sym__text_child] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_child] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__text] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__html_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_injector_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_wrapped_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_floating_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ruby_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ruby_fragment_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ruby_fragment_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ruby_inline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comment_child_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_coffee_lang] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_css_lang] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_javascript_lang] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_less_lang] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_markdown_lang] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_rdoc_lang] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_ruby_lang] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sass_lang] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_scss_lang] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_textile_lang] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_class = 1,
  field_id = 2,
  field_injection = 3,
  field_name = 4,
  field_parameters = 5,
  field_splat_parameters = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_class] = "class",
  [field_id] = "id",
  [field_injection] = "injection",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_splat_parameters] = "splat_parameters",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 3},
  [6] = {.index = 7, .length = 6},
  [7] = {.index = 13, .length = 1},
  [8] = {.index = 3, .length = 1},
  [9] = {.index = 3, .length = 1},
  [10] = {.index = 14, .length = 4},
  [11] = {.index = 18, .length = 4},
  [12] = {.index = 22, .length = 1},
  [13] = {.index = 14, .length = 4},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 2},
  [17] = {.index = 27, .length = 1},
  [18] = {.index = 23, .length = 2},
  [19] = {.index = 23, .length = 2},
  [20] = {.index = 23, .length = 2},
  [21] = {.index = 23, .length = 2},
  [22] = {.index = 23, .length = 2},
  [23] = {.index = 23, .length = 2},
  [24] = {.index = 23, .length = 2},
  [25] = {.index = 23, .length = 2},
  [26] = {.index = 28, .length = 1},
  [27] = {.index = 28, .length = 1},
  [28] = {.index = 29, .length = 2},
  [29] = {.index = 28, .length = 1},
  [30] = {.index = 29, .length = 2},
  [31] = {.index = 28, .length = 1},
  [32] = {.index = 29, .length = 2},
  [33] = {.index = 28, .length = 1},
  [34] = {.index = 29, .length = 2},
  [35] = {.index = 28, .length = 1},
  [36] = {.index = 29, .length = 2},
  [37] = {.index = 28, .length = 1},
  [38] = {.index = 29, .length = 2},
  [39] = {.index = 28, .length = 1},
  [40] = {.index = 28, .length = 1},
  [41] = {.index = 28, .length = 1},
  [42] = {.index = 31, .length = 1},
  [43] = {.index = 31, .length = 1},
  [44] = {.index = 31, .length = 1},
  [45] = {.index = 31, .length = 1},
  [46] = {.index = 31, .length = 1},
  [47] = {.index = 31, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_class, 0},
  [1] =
    {field_id, 0},
  [2] =
    {field_name, 0},
  [3] =
    {field_injection, 1},
  [4] =
    {field_class, 0, .inherited = true},
    {field_id, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [7] =
    {field_class, 0, .inherited = true},
    {field_class, 1, .inherited = true},
    {field_id, 0, .inherited = true},
    {field_id, 1, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [13] =
    {field_name, 1},
  [14] =
    {field_class, 0, .inherited = true},
    {field_id, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_parameters, 1},
  [18] =
    {field_class, 0, .inherited = true},
    {field_id, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_splat_parameters, 1},
  [22] =
    {field_name, 2},
  [23] =
    {field_injection, 3},
    {field_injection, 4},
  [25] =
    {field_name, 0},
    {field_value, 2},
  [27] =
    {field_injection, 0},
  [28] =
    {field_injection, 4},
  [29] =
    {field_injection, 4},
    {field_injection, 5},
  [31] =
    {field_injection, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [1] = sym_ruby_inline,
  },
  [7] = {
    [1] = sym_tag_name,
  },
  [8] = {
    [1] = sym_ruby_inline,
    [2] = sym_text_inline,
  },
  [12] = {
    [2] = sym_tag_name,
  },
  [13] = {
    [2] = sym_text_inline,
  },
  [14] = {
    [3] = alias_sym_ruby_lang,
    [4] = alias_sym_ruby_lang,
  },
  [15] = {
    [3] = alias_sym_javascript_lang,
    [4] = alias_sym_javascript_lang,
  },
  [18] = {
    [3] = alias_sym_css_lang,
    [4] = alias_sym_css_lang,
  },
  [19] = {
    [3] = alias_sym_sass_lang,
    [4] = alias_sym_sass_lang,
  },
  [20] = {
    [3] = alias_sym_scss_lang,
    [4] = alias_sym_scss_lang,
  },
  [21] = {
    [3] = alias_sym_less_lang,
    [4] = alias_sym_less_lang,
  },
  [22] = {
    [3] = alias_sym_coffee_lang,
    [4] = alias_sym_coffee_lang,
  },
  [23] = {
    [3] = alias_sym_markdown_lang,
    [4] = alias_sym_markdown_lang,
  },
  [24] = {
    [3] = alias_sym_textile_lang,
    [4] = alias_sym_textile_lang,
  },
  [25] = {
    [3] = alias_sym_rdoc_lang,
    [4] = alias_sym_rdoc_lang,
  },
  [26] = {
    [4] = alias_sym_ruby_lang,
  },
  [27] = {
    [4] = alias_sym_javascript_lang,
  },
  [28] = {
    [4] = alias_sym_javascript_lang,
    [5] = alias_sym_javascript_lang,
  },
  [29] = {
    [4] = alias_sym_css_lang,
  },
  [30] = {
    [4] = alias_sym_css_lang,
    [5] = alias_sym_css_lang,
  },
  [31] = {
    [4] = alias_sym_sass_lang,
  },
  [32] = {
    [4] = alias_sym_sass_lang,
    [5] = alias_sym_sass_lang,
  },
  [33] = {
    [4] = alias_sym_scss_lang,
  },
  [34] = {
    [4] = alias_sym_scss_lang,
    [5] = alias_sym_scss_lang,
  },
  [35] = {
    [4] = alias_sym_less_lang,
  },
  [36] = {
    [4] = alias_sym_less_lang,
    [5] = alias_sym_less_lang,
  },
  [37] = {
    [4] = alias_sym_coffee_lang,
  },
  [38] = {
    [4] = alias_sym_coffee_lang,
    [5] = alias_sym_coffee_lang,
  },
  [39] = {
    [4] = alias_sym_markdown_lang,
  },
  [40] = {
    [4] = alias_sym_textile_lang,
  },
  [41] = {
    [4] = alias_sym_rdoc_lang,
  },
  [42] = {
    [5] = alias_sym_javascript_lang,
  },
  [43] = {
    [5] = alias_sym_css_lang,
  },
  [44] = {
    [5] = alias_sym_sass_lang,
  },
  [45] = {
    [5] = alias_sym_scss_lang,
  },
  [46] = {
    [5] = alias_sym_less_lang,
  },
  [47] = {
    [5] = alias_sym_coffee_lang,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__ruby_multiline, 2,
    aux_sym__ruby_multiline,
    sym_ruby_inline,
  aux_sym__text, 12,
    aux_sym__text,
    alias_sym_coffee_lang,
    alias_sym_css_lang,
    alias_sym_javascript_lang,
    alias_sym_less_lang,
    alias_sym_markdown_lang,
    alias_sym_rdoc_lang,
    alias_sym_ruby_lang,
    alias_sym_sass_lang,
    alias_sym_scss_lang,
    alias_sym_textile_lang,
    sym_text_inline,
  aux_sym_injector_repeat1, 11,
    aux_sym_injector_repeat1,
    alias_sym_coffee_lang,
    alias_sym_css_lang,
    alias_sym_javascript_lang,
    alias_sym_less_lang,
    alias_sym_markdown_lang,
    alias_sym_rdoc_lang,
    alias_sym_ruby_lang,
    alias_sym_sass_lang,
    alias_sym_scss_lang,
    alias_sym_textile_lang,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 16,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 19,
  [25] = 25,
  [26] = 26,
  [27] = 11,
  [28] = 28,
  [29] = 20,
  [30] = 21,
  [31] = 31,
  [32] = 7,
  [33] = 23,
  [34] = 8,
  [35] = 25,
  [36] = 36,
  [37] = 10,
  [38] = 31,
  [39] = 22,
  [40] = 28,
  [41] = 41,
  [42] = 41,
  [43] = 26,
  [44] = 44,
  [45] = 36,
  [46] = 44,
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
  [60] = 49,
  [61] = 61,
  [62] = 62,
  [63] = 54,
  [64] = 52,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 57,
  [69] = 69,
  [70] = 70,
  [71] = 65,
  [72] = 58,
  [73] = 73,
  [74] = 74,
  [75] = 55,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 73,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 53,
  [86] = 86,
  [87] = 87,
  [88] = 62,
  [89] = 89,
  [90] = 90,
  [91] = 83,
  [92] = 76,
  [93] = 77,
  [94] = 82,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 59,
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
  [110] = 78,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 113,
  [115] = 112,
  [116] = 111,
  [117] = 47,
  [118] = 107,
  [119] = 106,
  [120] = 61,
  [121] = 90,
  [122] = 89,
  [123] = 80,
  [124] = 109,
  [125] = 125,
  [126] = 125,
  [127] = 108,
  [128] = 95,
  [129] = 87,
  [130] = 86,
  [131] = 84,
  [132] = 105,
  [133] = 56,
  [134] = 104,
  [135] = 74,
  [136] = 96,
  [137] = 66,
  [138] = 97,
  [139] = 51,
  [140] = 50,
  [141] = 81,
  [142] = 103,
  [143] = 48,
  [144] = 102,
  [145] = 70,
  [146] = 101,
  [147] = 67,
  [148] = 99,
  [149] = 100,
  [150] = 69,
  [151] = 151,
  [152] = 151,
  [153] = 151,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 156,
  [158] = 158,
  [159] = 156,
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
  [172] = 168,
  [173] = 167,
  [174] = 167,
  [175] = 168,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 184,
  [186] = 183,
  [187] = 187,
  [188] = 160,
  [189] = 160,
  [190] = 170,
  [191] = 171,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 161,
  [197] = 197,
  [198] = 161,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 166,
  [209] = 209,
  [210] = 160,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 203,
  [215] = 206,
  [216] = 209,
  [217] = 166,
  [218] = 218,
  [219] = 203,
  [220] = 161,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 221,
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
  [240] = 171,
  [241] = 170,
  [242] = 171,
  [243] = 170,
  [244] = 169,
  [245] = 169,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 166,
  [250] = 161,
  [251] = 160,
  [252] = 161,
  [253] = 253,
  [254] = 160,
  [255] = 255,
  [256] = 227,
  [257] = 226,
  [258] = 225,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 224,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 223,
  [267] = 221,
  [268] = 268,
  [269] = 269,
  [270] = 222,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 260,
  [275] = 236,
  [276] = 235,
  [277] = 234,
  [278] = 261,
  [279] = 232,
  [280] = 280,
  [281] = 161,
  [282] = 263,
  [283] = 228,
  [284] = 264,
  [285] = 285,
  [286] = 265,
  [287] = 230,
  [288] = 230,
  [289] = 221,
  [290] = 228,
  [291] = 226,
  [292] = 225,
  [293] = 224,
  [294] = 223,
  [295] = 222,
  [296] = 260,
  [297] = 261,
  [298] = 263,
  [299] = 264,
  [300] = 265,
  [301] = 259,
  [302] = 268,
  [303] = 269,
  [304] = 304,
  [305] = 271,
  [306] = 272,
  [307] = 307,
  [308] = 273,
  [309] = 236,
  [310] = 235,
  [311] = 259,
  [312] = 234,
  [313] = 230,
  [314] = 268,
  [315] = 221,
  [316] = 228,
  [317] = 269,
  [318] = 236,
  [319] = 235,
  [320] = 271,
  [321] = 234,
  [322] = 230,
  [323] = 272,
  [324] = 228,
  [325] = 236,
  [326] = 273,
  [327] = 235,
  [328] = 234,
  [329] = 230,
  [330] = 221,
  [331] = 228,
  [332] = 236,
  [333] = 231,
  [334] = 235,
  [335] = 234,
  [336] = 230,
  [337] = 221,
  [338] = 228,
  [339] = 236,
  [340] = 235,
  [341] = 234,
  [342] = 232,
  [343] = 230,
  [344] = 221,
  [345] = 228,
  [346] = 233,
  [347] = 236,
  [348] = 160,
  [349] = 235,
  [350] = 234,
  [351] = 234,
  [352] = 235,
  [353] = 236,
  [354] = 230,
  [355] = 221,
  [356] = 228,
  [357] = 253,
  [358] = 236,
  [359] = 235,
  [360] = 234,
  [361] = 230,
  [362] = 221,
  [363] = 228,
  [364] = 236,
  [365] = 235,
  [366] = 234,
  [367] = 230,
  [368] = 221,
  [369] = 228,
  [370] = 237,
  [371] = 238,
  [372] = 372,
  [373] = 372,
  [374] = 239,
  [375] = 372,
  [376] = 372,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 285,
  [383] = 372,
  [384] = 377,
  [385] = 378,
  [386] = 379,
  [387] = 285,
  [388] = 381,
  [389] = 380,
  [390] = 379,
  [391] = 378,
  [392] = 377,
  [393] = 380,
  [394] = 381,
  [395] = 395,
  [396] = 166,
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
  [413] = 397,
  [414] = 398,
  [415] = 399,
  [416] = 400,
  [417] = 401,
  [418] = 402,
  [419] = 403,
  [420] = 404,
  [421] = 405,
  [422] = 406,
  [423] = 423,
  [424] = 407,
  [425] = 425,
  [426] = 398,
  [427] = 395,
  [428] = 399,
  [429] = 429,
  [430] = 400,
  [431] = 431,
  [432] = 401,
  [433] = 433,
  [434] = 402,
  [435] = 435,
  [436] = 408,
  [437] = 409,
  [438] = 410,
  [439] = 411,
  [440] = 412,
  [441] = 441,
  [442] = 442,
  [443] = 166,
  [444] = 253,
  [445] = 423,
  [446] = 166,
  [447] = 425,
  [448] = 429,
  [449] = 431,
  [450] = 433,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 435,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 423,
  [463] = 425,
  [464] = 395,
  [465] = 441,
  [466] = 429,
  [467] = 412,
  [468] = 431,
  [469] = 460,
  [470] = 433,
  [471] = 411,
  [472] = 459,
  [473] = 451,
  [474] = 452,
  [475] = 453,
  [476] = 435,
  [477] = 455,
  [478] = 456,
  [479] = 457,
  [480] = 458,
  [481] = 459,
  [482] = 460,
  [483] = 410,
  [484] = 458,
  [485] = 409,
  [486] = 457,
  [487] = 408,
  [488] = 456,
  [489] = 407,
  [490] = 455,
  [491] = 406,
  [492] = 171,
  [493] = 170,
  [494] = 405,
  [495] = 453,
  [496] = 404,
  [497] = 452,
  [498] = 403,
  [499] = 451,
  [500] = 397,
  [501] = 169,
  [502] = 171,
  [503] = 503,
  [504] = 504,
  [505] = 170,
  [506] = 503,
  [507] = 171,
  [508] = 508,
  [509] = 509,
  [510] = 169,
  [511] = 170,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 170,
  [521] = 169,
  [522] = 509,
  [523] = 523,
  [524] = 171,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 170,
  [531] = 531,
  [532] = 509,
  [533] = 533,
  [534] = 503,
  [535] = 512,
  [536] = 536,
  [537] = 171,
  [538] = 513,
  [539] = 514,
  [540] = 515,
  [541] = 516,
  [542] = 542,
  [543] = 170,
  [544] = 519,
  [545] = 518,
  [546] = 171,
  [547] = 170,
  [548] = 171,
  [549] = 542,
  [550] = 550,
  [551] = 550,
  [552] = 169,
  [553] = 553,
  [554] = 523,
  [555] = 553,
  [556] = 517,
  [557] = 504,
  [558] = 558,
  [559] = 536,
  [560] = 508,
  [561] = 550,
  [562] = 525,
  [563] = 518,
  [564] = 542,
  [565] = 523,
  [566] = 525,
  [567] = 526,
  [568] = 519,
  [569] = 526,
  [570] = 527,
  [571] = 528,
  [572] = 516,
  [573] = 528,
  [574] = 527,
  [575] = 515,
  [576] = 514,
  [577] = 533,
  [578] = 533,
  [579] = 512,
  [580] = 531,
  [581] = 513,
  [582] = 529,
  [583] = 583,
  [584] = 509,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 517,
  [589] = 509,
  [590] = 590,
  [591] = 591,
  [592] = 591,
  [593] = 593,
  [594] = 590,
  [595] = 595,
  [596] = 596,
  [597] = 181,
  [598] = 197,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 600,
  [605] = 182,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 202,
  [610] = 610,
  [611] = 194,
  [612] = 612,
  [613] = 612,
  [614] = 614,
  [615] = 615,
  [616] = 608,
  [617] = 617,
  [618] = 607,
  [619] = 610,
  [620] = 612,
  [621] = 621,
  [622] = 622,
  [623] = 194,
  [624] = 624,
  [625] = 614,
  [626] = 626,
  [627] = 202,
  [628] = 614,
  [629] = 629,
  [630] = 621,
  [631] = 631,
  [632] = 602,
  [633] = 601,
  [634] = 624,
  [635] = 635,
  [636] = 635,
  [637] = 626,
  [638] = 629,
  [639] = 197,
  [640] = 599,
  [641] = 614,
  [642] = 612,
  [643] = 602,
  [644] = 601,
  [645] = 607,
  [646] = 599,
  [647] = 626,
  [648] = 624,
  [649] = 608,
  [650] = 603,
  [651] = 606,
  [652] = 629,
  [653] = 635,
  [654] = 654,
  [655] = 655,
  [656] = 15,
  [657] = 16,
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
  [671] = 655,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 13,
  [677] = 658,
  [678] = 659,
  [679] = 660,
  [680] = 20,
  [681] = 21,
  [682] = 7,
  [683] = 23,
  [684] = 8,
  [685] = 661,
  [686] = 663,
  [687] = 9,
  [688] = 11,
  [689] = 664,
  [690] = 665,
  [691] = 666,
  [692] = 667,
  [693] = 668,
  [694] = 670,
  [695] = 655,
  [696] = 672,
  [697] = 674,
  [698] = 673,
  [699] = 10,
  [700] = 674,
  [701] = 675,
  [702] = 26,
  [703] = 675,
  [704] = 704,
  [705] = 705,
  [706] = 658,
  [707] = 25,
  [708] = 197,
  [709] = 41,
  [710] = 659,
  [711] = 711,
  [712] = 712,
  [713] = 662,
  [714] = 660,
  [715] = 715,
  [716] = 202,
  [717] = 717,
  [718] = 661,
  [719] = 194,
  [720] = 192,
  [721] = 663,
  [722] = 668,
  [723] = 723,
  [724] = 673,
  [725] = 670,
  [726] = 664,
  [727] = 195,
  [728] = 672,
  [729] = 665,
  [730] = 730,
  [731] = 666,
  [732] = 667,
  [733] = 193,
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
  [744] = 59,
  [745] = 745,
  [746] = 53,
  [747] = 738,
  [748] = 57,
  [749] = 178,
  [750] = 750,
  [751] = 591,
  [752] = 61,
  [753] = 753,
  [754] = 66,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 69,
  [759] = 759,
  [760] = 70,
  [761] = 177,
  [762] = 762,
  [763] = 763,
  [764] = 734,
  [765] = 765,
  [766] = 766,
  [767] = 738,
  [768] = 705,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 81,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 750,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 86,
  [786] = 87,
  [787] = 740,
  [788] = 745,
  [789] = 756,
  [790] = 790,
  [791] = 89,
  [792] = 742,
  [793] = 90,
  [794] = 794,
  [795] = 762,
  [796] = 796,
  [797] = 797,
  [798] = 763,
  [799] = 776,
  [800] = 712,
  [801] = 738,
  [802] = 106,
  [803] = 99,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 47,
  [808] = 111,
  [809] = 809,
  [810] = 810,
  [811] = 593,
  [812] = 112,
  [813] = 813,
  [814] = 735,
  [815] = 815,
  [816] = 113,
  [817] = 109,
  [818] = 108,
  [819] = 105,
  [820] = 104,
  [821] = 103,
  [822] = 102,
  [823] = 823,
  [824] = 101,
  [825] = 825,
  [826] = 826,
  [827] = 84,
  [828] = 828,
  [829] = 49,
  [830] = 830,
  [831] = 743,
  [832] = 100,
  [833] = 741,
  [834] = 826,
  [835] = 739,
  [836] = 737,
  [837] = 837,
  [838] = 838,
  [839] = 837,
  [840] = 65,
  [841] = 58,
  [842] = 74,
  [843] = 55,
  [844] = 73,
  [845] = 80,
  [846] = 83,
  [847] = 847,
  [848] = 76,
  [849] = 742,
  [850] = 78,
  [851] = 742,
  [852] = 852,
  [853] = 826,
  [854] = 735,
  [855] = 806,
  [856] = 837,
  [857] = 737,
  [858] = 739,
  [859] = 755,
  [860] = 753,
  [861] = 741,
  [862] = 736,
  [863] = 743,
  [864] = 796,
  [865] = 806,
  [866] = 813,
  [867] = 48,
  [868] = 828,
  [869] = 107,
  [870] = 838,
  [871] = 777,
  [872] = 847,
  [873] = 852,
  [874] = 874,
  [875] = 782,
  [876] = 790,
  [877] = 797,
  [878] = 805,
  [879] = 809,
  [880] = 815,
  [881] = 778,
  [882] = 125,
  [883] = 779,
  [884] = 780,
  [885] = 874,
  [886] = 783,
  [887] = 784,
  [888] = 762,
  [889] = 52,
  [890] = 738,
  [891] = 755,
  [892] = 753,
  [893] = 783,
  [894] = 736,
  [895] = 780,
  [896] = 796,
  [897] = 830,
  [898] = 813,
  [899] = 779,
  [900] = 828,
  [901] = 778,
  [902] = 838,
  [903] = 777,
  [904] = 847,
  [905] = 852,
  [906] = 874,
  [907] = 782,
  [908] = 790,
  [909] = 797,
  [910] = 805,
  [911] = 809,
  [912] = 815,
  [913] = 913,
  [914] = 77,
  [915] = 915,
  [916] = 82,
  [917] = 95,
  [918] = 96,
  [919] = 919,
  [920] = 920,
  [921] = 921,
  [922] = 922,
  [923] = 775,
  [924] = 773,
  [925] = 772,
  [926] = 771,
  [927] = 770,
  [928] = 769,
  [929] = 913,
  [930] = 97,
  [931] = 922,
  [932] = 921,
  [933] = 920,
  [934] = 913,
  [935] = 810,
  [936] = 920,
  [937] = 921,
  [938] = 922,
  [939] = 775,
  [940] = 773,
  [941] = 772,
  [942] = 771,
  [943] = 770,
  [944] = 769,
};

static TSCharacterRange aux_sym_ruby_inline_token1_character_set_1[] = {
  {0, '\t'}, {0x0b, '\f'}, {0x0e, 0x1f}, {'!', '\''}, {'*', '+'}, {'-', '9'}, {'<', 'Z'}, {'^', 'z'},
  {'|', '|'}, {'~', 0x10ffff},
};

static TSCharacterRange aux_sym_ruby_inline_token2_character_set_1[] = {
  {0, '\t'}, {0x0b, '\f'}, {0x0e, 0x1f}, {'!', '\''}, {'*', '+'}, {'-', 'Z'}, {'^', 'z'}, {'|', '|'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(181);
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(166);
      if (lookahead == '\r') SKIP(174);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '!') ADVANCE(476);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(474);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(388);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == ',') ADVANCE(412);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(179);
      if (lookahead == ']') ADVANCE(411);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '|') ADVANCE(472);
      if (lookahead == '}') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\r') SKIP(1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(476);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(474);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(388);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == ',') ADVANCE(412);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(135);
      if (lookahead == ']') ADVANCE(411);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '|') ADVANCE(472);
      if (lookahead == '}') ADVANCE(399);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 2:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\r') SKIP(92);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '!') ADVANCE(476);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(474);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(388);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == ',') ADVANCE(412);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(135);
      if (lookahead == ']') ADVANCE(411);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '|') ADVANCE(472);
      if (lookahead == '}') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 3:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\r') SKIP(92);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '!') ADVANCE(476);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(474);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(388);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == ',') ADVANCE(412);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(135);
      if (lookahead == ']') ADVANCE(411);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '|') ADVANCE(472);
      if (lookahead == '}') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\f') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 4:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == 0x0b) SKIP(4);
      if (lookahead == '\r') SKIP(4);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '\\') SKIP(138);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 5:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '\r') SKIP(93);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '[') ADVANCE(372);
      if (lookahead == '\\') SKIP(138);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 6:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '\r') SKIP(93);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '\\') SKIP(138);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 7:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '\r') SKIP(93);
      if (lookahead == ' ') ADVANCE(310);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '\\') SKIP(138);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 8:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '\r') SKIP(8);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '\\') SKIP(139);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 9:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '\r') SKIP(94);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '\\') SKIP(139);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 10:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '\r') SKIP(94);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '\\') SKIP(139);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 11:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '\r') SKIP(94);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '\\') SKIP(139);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 12:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(12);
      if (lookahead == 0x0b) SKIP(12);
      if (lookahead == '\r') SKIP(12);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '\\') SKIP(142);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 13:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '\r') SKIP(99);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '\\') SKIP(142);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 14:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '\r') SKIP(99);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '\\') SKIP(142);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 15:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(15);
      if (lookahead == 0x0b) ADVANCE(469);
      if (lookahead == '\r') SKIP(15);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(468);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(468);
      END_STATE();
    case 16:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '\r') SKIP(109);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 17:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '\r') SKIP(109);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(468);
      END_STATE();
    case 18:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(18);
      if (lookahead == '\r') SKIP(18);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == '\\') SKIP(147);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 19:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(18);
      if (lookahead == '\r') SKIP(113);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == '\\') SKIP(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 20:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(18);
      if (lookahead == '\r') SKIP(113);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == '\\') SKIP(147);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 21:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(18);
      if (lookahead == '\r') SKIP(113);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == '\\') SKIP(147);
      if (lookahead == '\t' ||
          lookahead == '\f') SKIP(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 22:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(22);
      if (lookahead == 0x0b) SKIP(22);
      if (lookahead == '\r') SKIP(22);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '\\') SKIP(150);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 23:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(22);
      if (lookahead == '\r') SKIP(118);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '[') ADVANCE(372);
      if (lookahead == '\\') SKIP(150);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 24:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(22);
      if (lookahead == '\r') SKIP(118);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '\\') SKIP(150);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 25:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '\r') SKIP(25);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '\\') SKIP(153);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(25);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 26:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '\r') SKIP(123);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '\\') SKIP(153);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(26);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 27:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '\r') SKIP(123);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '\\') SKIP(153);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 28:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(352);
      if (lookahead == '\r') ADVANCE(355);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '\\') SKIP(154);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 29:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(352);
      if (lookahead == '\r') ADVANCE(355);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '\\') SKIP(154);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 30:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') ADVANCE(352);
      if (lookahead == '\r') ADVANCE(355);
      if (lookahead == '\\') SKIP(154);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 31:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '\r') SKIP(31);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '\\') ADVANCE(468);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(468);
      END_STATE();
    case 32:
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '\r') SKIP(126);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '\\') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(468);
      END_STATE();
    case 33:
      if ((!eof && lookahead == 00)) ADVANCE(187);
      if (lookahead == '\n') SKIP(33);
      if (lookahead == 0x0b) ADVANCE(479);
      if (lookahead == '\r') SKIP(33);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '-') ADVANCE(447);
      if (lookahead == ':') ADVANCE(295);
      if (lookahead == '=') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(490);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 34:
      if ((!eof && lookahead == 00)) ADVANCE(187);
      if (lookahead == '\n') SKIP(33);
      if (lookahead == '\r') SKIP(96);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '-') ADVANCE(447);
      if (lookahead == ':') ADVANCE(295);
      if (lookahead == '=') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 35:
      if ((!eof && lookahead == 00)) ADVANCE(187);
      if (lookahead == '\n') SKIP(35);
      if (lookahead == '\r') SKIP(35);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == ':') ADVANCE(295);
      if (lookahead == '\\') ADVANCE(491);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(486);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 36:
      if ((!eof && lookahead == 00)) ADVANCE(187);
      if (lookahead == '\n') SKIP(35);
      if (lookahead == '\r') SKIP(107);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == ':') ADVANCE(295);
      if (lookahead == '\\') ADVANCE(491);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 37:
      if ((!eof && lookahead == 00)) ADVANCE(187);
      if (lookahead == '\n') SKIP(37);
      if (lookahead == '\r') SKIP(37);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\\') ADVANCE(492);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(488);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 38:
      if ((!eof && lookahead == 00)) ADVANCE(187);
      if (lookahead == '\n') SKIP(37);
      if (lookahead == '\r') SKIP(108);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\\') ADVANCE(492);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 39:
      if ((!eof && lookahead == 00)) ADVANCE(187);
      if (lookahead == '\n') SKIP(39);
      if (lookahead == 0x0b) ADVANCE(480);
      if (lookahead == '\r') SKIP(39);
      if (lookahead == '!') ADVANCE(477);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(493);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 40:
      if ((!eof && lookahead == 00)) ADVANCE(187);
      if (lookahead == '\n') SKIP(39);
      if (lookahead == '\r') SKIP(111);
      if (lookahead == '!') ADVANCE(477);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 41:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') SKIP(41);
      if (lookahead == 0x0b) ADVANCE(424);
      if (lookahead == '\r') SKIP(41);
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '=') ADVANCE(450);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(140);
      if (lookahead == '{') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 42:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') SKIP(41);
      if (lookahead == '\r') SKIP(97);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '=') ADVANCE(450);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(140);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 43:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') SKIP(41);
      if (lookahead == '\r') SKIP(97);
      if (lookahead == ' ') ADVANCE(315);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '=') ADVANCE(450);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(140);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 44:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') SKIP(41);
      if (lookahead == '\r') SKIP(97);
      if (lookahead == ' ') ADVANCE(311);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '=') ADVANCE(450);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(140);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 45:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') SKIP(45);
      if (lookahead == '\r') SKIP(45);
      if (lookahead == ' ') SKIP(45);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(143);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '}') ADVANCE(399);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(438);
      END_STATE();
    case 46:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') SKIP(45);
      if (lookahead == '\r') SKIP(103);
      if (lookahead == ' ') SKIP(46);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(143);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '}') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(438);
      END_STATE();
    case 47:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') SKIP(45);
      if (lookahead == '\r') SKIP(103);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(143);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '}') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(438);
      END_STATE();
    case 48:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') ADVANCE(348);
      if (lookahead == '\r') ADVANCE(351);
      if (lookahead == ' ') ADVANCE(367);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(144);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '0' || ';' < lookahead) &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 49:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') ADVANCE(348);
      if (lookahead == '\r') ADVANCE(351);
      if (lookahead == ' ') ADVANCE(365);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(144);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '0' || ';' < lookahead) &&
          (lookahead < 'A' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 50:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') ADVANCE(348);
      if (lookahead == '\r') ADVANCE(351);
      if (lookahead == ' ') ADVANCE(350);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(144);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '0' || ';' < lookahead) &&
          (lookahead < 'A' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 51:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') SKIP(51);
      if (lookahead == 0x0b) ADVANCE(425);
      if (lookahead == '\r') SKIP(51);
      if (lookahead == ' ') ADVANCE(300);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(146);
      if (lookahead == '{') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 52:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') SKIP(51);
      if (lookahead == '\r') SKIP(112);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(146);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 53:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') SKIP(51);
      if (lookahead == '\r') SKIP(112);
      if (lookahead == ' ') ADVANCE(315);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(146);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 54:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') SKIP(54);
      if (lookahead == '\r') SKIP(54);
      if (lookahead == ' ') SKIP(54);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(149);
      if (lookahead == '{') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 55:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') SKIP(54);
      if (lookahead == '\r') SKIP(116);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(149);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 56:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') SKIP(54);
      if (lookahead == '\r') SKIP(116);
      if (lookahead == ' ') SKIP(56);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(149);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 57:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') SKIP(54);
      if (lookahead == '\r') SKIP(116);
      if (lookahead == ' ') ADVANCE(158);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(149);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 58:
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') SKIP(54);
      if (lookahead == '\r') SKIP(116);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(149);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 59:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') SKIP(59);
      if (lookahead == 0x0b) ADVANCE(429);
      if (lookahead == '\r') SKIP(59);
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == ';') ADVANCE(439);
      if (lookahead == '=') ADVANCE(451);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(141);
      if (lookahead == '{') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 60:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') SKIP(59);
      if (lookahead == '\r') SKIP(98);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == ';') ADVANCE(439);
      if (lookahead == '=') ADVANCE(451);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(141);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 61:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') SKIP(59);
      if (lookahead == '\r') SKIP(98);
      if (lookahead == ' ') ADVANCE(315);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == ';') ADVANCE(439);
      if (lookahead == '=') ADVANCE(451);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(141);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 62:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') SKIP(59);
      if (lookahead == '\r') SKIP(98);
      if (lookahead == ' ') ADVANCE(311);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == ';') ADVANCE(439);
      if (lookahead == '=') ADVANCE(451);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(141);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 63:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') SKIP(63);
      if (lookahead == 0x0b) ADVANCE(430);
      if (lookahead == '\r') SKIP(63);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == ';') ADVANCE(439);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(148);
      if (lookahead == '{') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 64:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') SKIP(63);
      if (lookahead == '\r') SKIP(115);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == ';') ADVANCE(439);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(148);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 65:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') SKIP(63);
      if (lookahead == '\r') SKIP(115);
      if (lookahead == ' ') ADVANCE(315);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == ';') ADVANCE(439);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(148);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 66:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') SKIP(66);
      if (lookahead == '\r') SKIP(66);
      if (lookahead == ' ') SKIP(66);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(151);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 67:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') SKIP(66);
      if (lookahead == '\r') SKIP(119);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(151);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(434);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 68:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') SKIP(66);
      if (lookahead == '\r') SKIP(119);
      if (lookahead == ' ') ADVANCE(158);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(151);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(436);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 69:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') SKIP(66);
      if (lookahead == '\r') SKIP(119);
      if (lookahead == ' ') SKIP(69);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(151);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(431);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 70:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') SKIP(66);
      if (lookahead == '\r') SKIP(119);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(151);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 71:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') SKIP(71);
      if (lookahead == '\r') SKIP(71);
      if (lookahead == ' ') SKIP(71);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(152);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '}') ADVANCE(399);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(437);
      END_STATE();
    case 72:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') SKIP(71);
      if (lookahead == '\r') SKIP(121);
      if (lookahead == ' ') SKIP(72);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(152);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '}') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(431);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(437);
      END_STATE();
    case 73:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') SKIP(71);
      if (lookahead == '\r') SKIP(121);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(152);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '}') ADVANCE(399);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(437);
      END_STATE();
    case 74:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') ADVANCE(357);
      if (lookahead == '\r') ADVANCE(356);
      if (lookahead == ' ') ADVANCE(367);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(145);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(361);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 75:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') ADVANCE(357);
      if (lookahead == '\r') ADVANCE(356);
      if (lookahead == ' ') ADVANCE(365);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(145);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(363);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < 'A' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 76:
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') ADVANCE(357);
      if (lookahead == '\r') ADVANCE(356);
      if (lookahead == ' ') ADVANCE(359);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(145);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(359);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < 'A' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 77:
      if ((!eof && lookahead == 00)) ADVANCE(186);
      if (lookahead == '\n') SKIP(77);
      if (lookahead == '\r') SKIP(77);
      if (lookahead == ' ') SKIP(77);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(466);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 78:
      if ((!eof && lookahead == 00)) ADVANCE(186);
      if (lookahead == '\n') SKIP(77);
      if (lookahead == '\r') SKIP(100);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(467);
      END_STATE();
    case 79:
      if ((!eof && lookahead == 00)) ADVANCE(185);
      if (lookahead == '\n') SKIP(79);
      if (lookahead == '\r') SKIP(79);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ',') ADVANCE(412);
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '{') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 80:
      if ((!eof && lookahead == 00)) ADVANCE(185);
      if (lookahead == '\n') SKIP(79);
      if (lookahead == '\r') SKIP(101);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ',') ADVANCE(412);
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 81:
      if ((!eof && lookahead == 00)) ADVANCE(185);
      if (lookahead == '\n') SKIP(81);
      if (lookahead == '\r') SKIP(81);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ',') ADVANCE(412);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '{') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 82:
      if ((!eof && lookahead == 00)) ADVANCE(185);
      if (lookahead == '\n') SKIP(81);
      if (lookahead == '\r') SKIP(106);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ',') ADVANCE(412);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 83:
      if ((!eof && lookahead == 00)) ADVANCE(185);
      if (lookahead == '\n') SKIP(83);
      if (lookahead == '\r') SKIP(83);
      if (lookahead == '\\') SKIP(155);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 84:
      if ((!eof && lookahead == 00)) ADVANCE(185);
      if (lookahead == '\n') SKIP(83);
      if (lookahead == '\r') SKIP(127);
      if (lookahead == '\\') SKIP(155);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 85:
      if ((!eof && lookahead == 00)) ADVANCE(185);
      if (lookahead == '\n') SKIP(83);
      if (lookahead == '\r') SKIP(127);
      if (lookahead == '\\') SKIP(155);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 86:
      ADVANCE_MAP(
        0, 191,
        '\n', 392,
        '\r', 395,
        '(', 380,
        '[', 403,
        '\\', 397,
        '{', 389,
        '}', 399,
      );
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 87:
      ADVANCE_MAP(
        0, 190,
        '\n', 404,
        '\r', 407,
        '(', 379,
        '[', 400,
        '\\', 409,
        ']', 411,
        '{', 391,
      );
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 88:
      ADVANCE_MAP(
        0, 188,
        '\n', 381,
        '\r', 384,
        '(', 378,
        ')', 388,
        '[', 402,
        '\\', 386,
        '{', 390,
      );
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 89:
      ADVANCE_MAP(
        0, 189,
        '\n', 317,
        '\r', 320,
        '/', 194,
        '>', 285,
        '\\', 322,
        '\t', 323,
        '\f', 323,
        ' ', 323,
      );
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(422);
      END_STATE();
    case 91:
      if (lookahead == '\n') SKIP(3);
      END_STATE();
    case 92:
      if (lookahead == '\n') SKIP(2);
      END_STATE();
    case 93:
      if (lookahead == '\n') SKIP(7);
      END_STATE();
    case 94:
      if (lookahead == '\n') SKIP(11);
      END_STATE();
    case 95:
      if (lookahead == '\n') SKIP(10);
      END_STATE();
    case 96:
      if (lookahead == '\n') SKIP(34);
      END_STATE();
    case 97:
      if (lookahead == '\n') SKIP(43);
      END_STATE();
    case 98:
      if (lookahead == '\n') SKIP(61);
      END_STATE();
    case 99:
      if (lookahead == '\n') SKIP(14);
      END_STATE();
    case 100:
      if (lookahead == '\n') SKIP(78);
      END_STATE();
    case 101:
      if (lookahead == '\n') SKIP(80);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(420);
      END_STATE();
    case 103:
      if (lookahead == '\n') SKIP(47);
      END_STATE();
    case 104:
      if (lookahead == '\n') SKIP(46);
      END_STATE();
    case 105:
      if (lookahead == '\n') SKIP(50);
      END_STATE();
    case 106:
      if (lookahead == '\n') SKIP(82);
      END_STATE();
    case 107:
      if (lookahead == '\n') SKIP(36);
      END_STATE();
    case 108:
      if (lookahead == '\n') SKIP(38);
      END_STATE();
    case 109:
      if (lookahead == '\n') SKIP(17);
      END_STATE();
    case 110:
      if (lookahead == '\n') SKIP(76);
      END_STATE();
    case 111:
      if (lookahead == '\n') SKIP(40);
      END_STATE();
    case 112:
      if (lookahead == '\n') SKIP(53);
      END_STATE();
    case 113:
      if (lookahead == '\n') SKIP(19);
      END_STATE();
    case 114:
      if (lookahead == '\n') SKIP(21);
      END_STATE();
    case 115:
      if (lookahead == '\n') SKIP(65);
      END_STATE();
    case 116:
      if (lookahead == '\n') SKIP(58);
      END_STATE();
    case 117:
      if (lookahead == '\n') SKIP(56);
      END_STATE();
    case 118:
      if (lookahead == '\n') SKIP(24);
      END_STATE();
    case 119:
      if (lookahead == '\n') SKIP(70);
      END_STATE();
    case 120:
      if (lookahead == '\n') SKIP(69);
      END_STATE();
    case 121:
      if (lookahead == '\n') SKIP(73);
      END_STATE();
    case 122:
      if (lookahead == '\n') SKIP(72);
      END_STATE();
    case 123:
      if (lookahead == '\n') SKIP(27);
      END_STATE();
    case 124:
      if (lookahead == '\n') SKIP(26);
      END_STATE();
    case 125:
      if (lookahead == '\n') SKIP(30);
      END_STATE();
    case 126:
      if (lookahead == '\n') SKIP(32);
      END_STATE();
    case 127:
      if (lookahead == '\n') SKIP(85);
      END_STATE();
    case 128:
      if (lookahead == '\n') SKIP(84);
      END_STATE();
    case 129:
      if (lookahead == '\n') SKIP(6);
      END_STATE();
    case 130:
      if (lookahead == '\n') SKIP(42);
      END_STATE();
    case 131:
      if (lookahead == '\n') SKIP(60);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(421);
      END_STATE();
    case 133:
      if (lookahead == '\n') SKIP(52);
      END_STATE();
    case 134:
      if (lookahead == '\n') SKIP(64);
      END_STATE();
    case 135:
      if (lookahead == '\r') SKIP(91);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(3);
      END_STATE();
    case 136:
      if (lookahead == '\r') ADVANCE(102);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(420);
      END_STATE();
    case 137:
      if (lookahead == '\r') ADVANCE(132);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(421);
      END_STATE();
    case 138:
      if (lookahead == '\r') SKIP(129);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(6);
      END_STATE();
    case 139:
      if (lookahead == '\r') SKIP(95);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(10);
      END_STATE();
    case 140:
      if (lookahead == '\r') SKIP(130);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(42);
      END_STATE();
    case 141:
      if (lookahead == '\r') SKIP(131);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(60);
      END_STATE();
    case 142:
      if (lookahead == '\r') SKIP(99);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(14);
      END_STATE();
    case 143:
      if (lookahead == '\r') SKIP(104);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(46);
      END_STATE();
    case 144:
      if (lookahead == '\r') SKIP(105);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(50);
      END_STATE();
    case 145:
      if (lookahead == '\r') SKIP(110);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(76);
      END_STATE();
    case 146:
      if (lookahead == '\r') SKIP(133);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(52);
      END_STATE();
    case 147:
      if (lookahead == '\r') SKIP(114);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(21);
      END_STATE();
    case 148:
      if (lookahead == '\r') SKIP(134);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(64);
      END_STATE();
    case 149:
      if (lookahead == '\r') SKIP(117);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(56);
      END_STATE();
    case 150:
      if (lookahead == '\r') SKIP(118);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(24);
      END_STATE();
    case 151:
      if (lookahead == '\r') SKIP(120);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(69);
      END_STATE();
    case 152:
      if (lookahead == '\r') SKIP(122);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(72);
      END_STATE();
    case 153:
      if (lookahead == '\r') SKIP(124);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(26);
      END_STATE();
    case 154:
      if (lookahead == '\r') SKIP(125);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(30);
      END_STATE();
    case 155:
      if (lookahead == '\r') SKIP(128);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(84);
      END_STATE();
    case 156:
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 158:
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(158);
      END_STATE();
    case 159:
      if (lookahead == '*') ADVANCE(377);
      END_STATE();
    case 160:
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(160);
      END_STATE();
    case 161:
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 162:
      if (lookahead == '{') ADVANCE(440);
      END_STATE();
    case 163:
      if (lookahead == '{') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 164:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 165:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 166:
      if (eof) ADVANCE(181);
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(166);
      if (lookahead == '\r') SKIP(166);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(476);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(474);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(388);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == ',') ADVANCE(412);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(179);
      if (lookahead == ']') ADVANCE(411);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '|') ADVANCE(472);
      if (lookahead == '}') ADVANCE(399);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 167:
      if (eof) ADVANCE(181);
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(166);
      if (lookahead == '\r') SKIP(174);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '!') ADVANCE(476);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\'') ADVANCE(474);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')') ADVANCE(388);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == ',') ADVANCE(412);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') SKIP(179);
      if (lookahead == ']') ADVANCE(411);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '|') ADVANCE(472);
      if (lookahead == '}') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\f') SKIP(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 168:
      if (eof) ADVANCE(181);
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(168);
      if (lookahead == '\r') SKIP(168);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '\'') ADVANCE(474);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == '<') ADVANCE(282);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '\\') SKIP(180);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '|') ADVANCE(472);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 169:
      if (eof) ADVANCE(181);
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(168);
      if (lookahead == '\r') SKIP(176);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '\'') ADVANCE(474);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == '<') ADVANCE(282);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '\\') SKIP(180);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '|') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 170:
      if (eof) ADVANCE(181);
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(168);
      if (lookahead == '\r') SKIP(176);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '\'') ADVANCE(474);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == '<') ADVANCE(282);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '\\') SKIP(180);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '|') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 171:
      if (eof) ADVANCE(181);
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '\n') SKIP(168);
      if (lookahead == '\r') SKIP(176);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '\'') ADVANCE(474);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == '<') ADVANCE(282);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '\\') SKIP(180);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'j') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '|') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 172:
      if (eof) ADVANCE(181);
      if ((!eof && lookahead == 00)) ADVANCE(187);
      if (lookahead == '\n') SKIP(172);
      if (lookahead == '\r') SKIP(172);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '*') ADVANCE(291);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == '<') ADVANCE(284);
      if (lookahead == '=') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(489);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'j') ADVANCE(197);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == 'm') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == '|') ADVANCE(473);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 173:
      if (eof) ADVANCE(181);
      if ((!eof && lookahead == 00)) ADVANCE(187);
      if (lookahead == '\n') SKIP(172);
      if (lookahead == '\r') SKIP(178);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '*') ADVANCE(291);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '.') ADVANCE(494);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == '<') ADVANCE(284);
      if (lookahead == '=') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(489);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'j') ADVANCE(197);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == 'm') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == '|') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 174:
      if (eof) ADVANCE(181);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 175:
      if (eof) ADVANCE(181);
      if (lookahead == '\n') SKIP(167);
      END_STATE();
    case 176:
      if (eof) ADVANCE(181);
      if (lookahead == '\n') SKIP(171);
      END_STATE();
    case 177:
      if (eof) ADVANCE(181);
      if (lookahead == '\n') SKIP(170);
      END_STATE();
    case 178:
      if (eof) ADVANCE(181);
      if (lookahead == '\n') SKIP(173);
      END_STATE();
    case 179:
      if (eof) ADVANCE(181);
      if (lookahead == '\r') SKIP(175);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(167);
      END_STATE();
    case 180:
      if (eof) ADVANCE(181);
      if (lookahead == '\r') SKIP(177);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(170);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(437);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_NULL);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_NULL);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead)) ||
          lookahead == ' ') ADVANCE(419);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(467);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(387);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(324);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(410);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ' ') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(192);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ' ') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(193);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(437);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'c') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'b') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'b') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'd') ADVANCE(241);
      if (lookahead == 'u') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'd') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'k') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'k') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'n') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == 's') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'p') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'v') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'v') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'w') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'w') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'x') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'x') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'y') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'y') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(437);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(467);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(286);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_tag_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_tag_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_tag_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_COLON);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(439);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_COLON);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead)) ||
          lookahead == ' ') ADVANCE(419);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == 0x0b) ADVANCE(479);
      if (lookahead == '\\') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == 0x0b) ADVANCE(424);
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == 0x0b) ADVANCE(469);
      if (lookahead == '\\') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == 0x0b) ADVANCE(480);
      if (lookahead == '\\') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == 0x0b) ADVANCE(425);
      if (lookahead == ' ') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == 0x0b) ADVANCE(429);
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == 0x0b) ADVANCE(430);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == ' ') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(304);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == ' ') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(305);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(437);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == ' ') ADVANCE(311);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(306);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == ' ') ADVANCE(311);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(307);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(437);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '[') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == '[') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\\') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\\') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if ((!eof && lookahead == 00)) ADVANCE(189);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(322);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(324);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if ((!eof && lookahead == 00)) ADVANCE(189);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(320);
      if (lookahead == '\\') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(324);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if ((!eof && lookahead == 00)) ADVANCE(189);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(320);
      if (lookahead == '\\') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(324);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if (lookahead == '\n') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(324);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if (lookahead == '\n') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(324);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if (lookahead == '\r') ADVANCE(321);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(324);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_ruby);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_ruby);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_javascript);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_javascript);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_css);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_css);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_sass);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_sass);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_scss);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_scss);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_less);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_less);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_coffee);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_coffee);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_markdown);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_markdown);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_textile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_textile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_rdoc);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_rdoc);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(348);
      if (lookahead == 0x0b) ADVANCE(423);
      if (lookahead == '\r') ADVANCE(348);
      if (lookahead == ' ') ADVANCE(348);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(348);
      if (lookahead == '\r') ADVANCE(351);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(368);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(348);
      if (lookahead == '\r') ADVANCE(351);
      if (lookahead == ' ') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(370);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(352);
      if (lookahead == '\r') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(352);
      if (lookahead == '\r') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(370);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(352);
      if (lookahead == '\r') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(370);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(370);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(357);
      if (lookahead == 0x0b) ADVANCE(428);
      if (lookahead == '\r') ADVANCE(357);
      if (lookahead == ' ') ADVANCE(357);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(357);
      if (lookahead == '\r') ADVANCE(356);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(369);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(357);
      if (lookahead == '\r') ADVANCE(356);
      if (lookahead == ' ') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ' ') ADVANCE(367);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(360);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ' ') ADVANCE(367);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(361);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(370);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ' ') ADVANCE(365);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(362);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ' ') ADVANCE(365);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(363);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(370);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(368);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(369);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token4);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token5);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_floating_parameter_pair_token1);
      if (lookahead == '=') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_floating_parameter_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_parameter_value_token1);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_splat_parameters_token1);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(410);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 188,
        '\n', 381,
        '\r', 381,
        '[', 402,
        '\\', 386,
        '{', 390,
        '\t', 381,
        0x0b, 381,
        '\f', 381,
        ' ', 381,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(387);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 188,
        '\n', 381,
        '\r', 384,
        '[', 402,
        '\\', 386,
        '{', 390,
        '\t', 382,
        '\f', 382,
        ' ', 382,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(387);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if ((!eof && lookahead == 00)) ADVANCE(188);
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead == '\r') ADVANCE(384);
      if (lookahead == '[') ADVANCE(402);
      if (lookahead == '\\') ADVANCE(386);
      if (lookahead == '{') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(387);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(387);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(387);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\r') ADVANCE(385);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(387);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(410);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 191,
        '\n', 392,
        '\r', 392,
        '(', 380,
        '[', 403,
        '\\', 397,
        '\t', 392,
        0x0b, 392,
        '\f', 392,
        ' ', 392,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 191,
        '\n', 392,
        '\r', 395,
        '(', 380,
        '[', 403,
        '\\', 397,
        '\t', 393,
        '\f', 393,
        ' ', 393,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if ((!eof && lookahead == 00)) ADVANCE(191);
      if (lookahead == '\n') ADVANCE(392);
      if (lookahead == '\r') ADVANCE(395);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == '[') ADVANCE(403);
      if (lookahead == '\\') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\r') ADVANCE(396);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(387);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(398);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 190,
        '\n', 404,
        '\r', 404,
        '(', 379,
        '\\', 409,
        '{', 391,
        '\t', 404,
        0x0b, 404,
        '\f', 404,
        ' ', 404,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(410);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 190,
        '\n', 404,
        '\r', 407,
        '(', 379,
        '\\', 409,
        '{', 391,
        '\t', 405,
        '\f', 405,
        ' ', 405,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(410);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if ((!eof && lookahead == 00)) ADVANCE(190);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\r') ADVANCE(407);
      if (lookahead == '(') ADVANCE(379);
      if (lookahead == '\\') ADVANCE(409);
      if (lookahead == '{') ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(410);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(410);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(410);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\r') ADVANCE(408);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\r') ADVANCE(90);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(422);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(185);
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(413);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(419);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(185);
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(185);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(415);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(419);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(185);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(417);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(419);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(418);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token1);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead)) ||
          lookahead == ' ') ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token2);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(413);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token2);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(415);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\n') ADVANCE(348);
      if (lookahead == 0x0b) ADVANCE(423);
      if (lookahead == '\r') ADVANCE(348);
      if (lookahead == ' ') ADVANCE(348);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '0' || ';' < lookahead) &&
          (lookahead < 'A' || ']' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(438);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == 0x0b) ADVANCE(424);
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead == '=') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(297);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == 0x0b) ADVANCE(425);
      if (lookahead == ' ') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(300);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(426);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(427);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\n') ADVANCE(357);
      if (lookahead == 0x0b) ADVANCE(428);
      if (lookahead == '\r') ADVANCE(357);
      if (lookahead == ' ') ADVANCE(357);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '0' || ';' < lookahead) &&
          (lookahead < 'A' || ']' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(437);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == 0x0b) ADVANCE(429);
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '=') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(301);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(437);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == 0x0b) ADVANCE(430);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(302);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(437);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(431);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(437);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(432);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(437);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(433);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(434);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(437);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if (lookahead == ' ') ADVANCE(158);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(435);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if (lookahead == ' ') ADVANCE(158);
      if (lookahead == ')') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(436);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token2);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(437);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(467);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_DASH);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(460);
      if (lookahead == '=') ADVANCE(452);
      if (lookahead == '>') ADVANCE(456);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '=') ADVANCE(455);
      if (lookahead == '>') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(462);
      if (lookahead == '=') ADVANCE(454);
      if (lookahead == '>') ADVANCE(458);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(461);
      if (lookahead == '=') ADVANCE(453);
      if (lookahead == '>') ADVANCE(457);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(437);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(437);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(437);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_EQ_LT);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_EQ_LT);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(439);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(437);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_EQ_LT);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(438);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_EQ_LT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_text_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(186);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead == '\\') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(467);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_text_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(186);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead == '\\') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(467);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_text_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(467);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_text_inline_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_text_inline_token2);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_text_inline_token2);
      ADVANCE_MAP(
        0, 182,
        0x0b, 469,
        '#', 471,
        ':', 292,
        '\\', 468,
        '\t', 298,
        '\f', 298,
        ' ', 298,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=') ADVANCE(468);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_text_inline_token2);
      if ((!eof && lookahead == 00)) ADVANCE(182);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '\\') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=') ADVANCE(468);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_text_inline_token2);
      if (lookahead == '{') ADVANCE(440);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(440);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__free_text);
      ADVANCE_MAP(
        0, 187,
        0x0b, 479,
        '-', 447,
        ':', 295,
        '=', 449,
        '\\', 490,
        '\t', 296,
        '\f', 296,
        ' ', 296,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__free_text);
      ADVANCE_MAP(
        0, 187,
        0x0b, 480,
        '!', 477,
        '[', 401,
        '\\', 493,
        '\t', 299,
        '\f', 299,
        ' ', 299,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(187);
      if (lookahead == '!') ADVANCE(477);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__free_text);
      ADVANCE_MAP(
        0, 187,
        '\'', 475,
        '*', 291,
        '-', 444,
        '.', 494,
        '/', 326,
        '<', 284,
        '=', 449,
        '\\', 489,
        'c', 240,
        'j', 197,
        'l', 220,
        'm', 198,
        'r', 210,
        's', 202,
        't', 216,
        '|', 473,
        '\t', 482,
        '\f', 482,
        ' ', 482,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__free_text);
      ADVANCE_MAP(
        0, 187,
        '\'', 475,
        '*', 291,
        '-', 444,
        '.', 494,
        '/', 326,
        '<', 284,
        '=', 449,
        '\\', 489,
        'c', 240,
        'j', 197,
        'l', 220,
        'm', 198,
        'r', 210,
        's', 202,
        't', 216,
        '|', 473,
        '\t', 483,
        0x0b, 483,
        '\f', 483,
        ' ', 483,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__free_text);
      ADVANCE_MAP(
        0, 187,
        '-', 447,
        ':', 295,
        '=', 449,
        '\\', 490,
        '\t', 313,
        '\f', 313,
        ' ', 313,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(187);
      if (lookahead == ':') ADVANCE(295);
      if (lookahead == '\\') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(187);
      if (lookahead == ':') ADVANCE(295);
      if (lookahead == '\\') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(187);
      if (lookahead == '\\') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(187);
      if (lookahead == '\\') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__free_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__free_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(495);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 169},
  [2] = {.lex_state = 169},
  [3] = {.lex_state = 169, .external_lex_state = 2},
  [4] = {.lex_state = 169, .external_lex_state = 2},
  [5] = {.lex_state = 169},
  [6] = {.lex_state = 169},
  [7] = {.lex_state = 169, .external_lex_state = 3},
  [8] = {.lex_state = 169, .external_lex_state = 3},
  [9] = {.lex_state = 169, .external_lex_state = 3},
  [10] = {.lex_state = 169, .external_lex_state = 4},
  [11] = {.lex_state = 169, .external_lex_state = 4},
  [12] = {.lex_state = 169, .external_lex_state = 4},
  [13] = {.lex_state = 169, .external_lex_state = 3},
  [14] = {.lex_state = 169, .external_lex_state = 4},
  [15] = {.lex_state = 169, .external_lex_state = 4},
  [16] = {.lex_state = 169, .external_lex_state = 4},
  [17] = {.lex_state = 169, .external_lex_state = 3},
  [18] = {.lex_state = 169, .external_lex_state = 3},
  [19] = {.lex_state = 169, .external_lex_state = 3},
  [20] = {.lex_state = 169, .external_lex_state = 3},
  [21] = {.lex_state = 169, .external_lex_state = 3},
  [22] = {.lex_state = 169, .external_lex_state = 3},
  [23] = {.lex_state = 169, .external_lex_state = 3},
  [24] = {.lex_state = 169, .external_lex_state = 4},
  [25] = {.lex_state = 169, .external_lex_state = 3},
  [26] = {.lex_state = 169, .external_lex_state = 4},
  [27] = {.lex_state = 169, .external_lex_state = 3},
  [28] = {.lex_state = 169, .external_lex_state = 3},
  [29] = {.lex_state = 169, .external_lex_state = 4},
  [30] = {.lex_state = 169, .external_lex_state = 4},
  [31] = {.lex_state = 173},
  [32] = {.lex_state = 169, .external_lex_state = 4},
  [33] = {.lex_state = 169, .external_lex_state = 4},
  [34] = {.lex_state = 169, .external_lex_state = 4},
  [35] = {.lex_state = 169, .external_lex_state = 4},
  [36] = {.lex_state = 169, .external_lex_state = 3},
  [37] = {.lex_state = 169, .external_lex_state = 3},
  [38] = {.lex_state = 173, .external_lex_state = 2},
  [39] = {.lex_state = 169, .external_lex_state = 4},
  [40] = {.lex_state = 169, .external_lex_state = 4},
  [41] = {.lex_state = 169, .external_lex_state = 3},
  [42] = {.lex_state = 169, .external_lex_state = 4},
  [43] = {.lex_state = 169, .external_lex_state = 3},
  [44] = {.lex_state = 169, .external_lex_state = 4},
  [45] = {.lex_state = 169, .external_lex_state = 4},
  [46] = {.lex_state = 169, .external_lex_state = 3},
  [47] = {.lex_state = 169, .external_lex_state = 2},
  [48] = {.lex_state = 169, .external_lex_state = 2},
  [49] = {.lex_state = 169, .external_lex_state = 2},
  [50] = {.lex_state = 169, .external_lex_state = 2},
  [51] = {.lex_state = 169, .external_lex_state = 2},
  [52] = {.lex_state = 169, .external_lex_state = 2},
  [53] = {.lex_state = 169, .external_lex_state = 2},
  [54] = {.lex_state = 169},
  [55] = {.lex_state = 169, .external_lex_state = 2},
  [56] = {.lex_state = 169},
  [57] = {.lex_state = 169, .external_lex_state = 2},
  [58] = {.lex_state = 169, .external_lex_state = 2},
  [59] = {.lex_state = 169},
  [60] = {.lex_state = 169},
  [61] = {.lex_state = 169, .external_lex_state = 2},
  [62] = {.lex_state = 169, .external_lex_state = 2},
  [63] = {.lex_state = 169, .external_lex_state = 2},
  [64] = {.lex_state = 169},
  [65] = {.lex_state = 169, .external_lex_state = 2},
  [66] = {.lex_state = 169, .external_lex_state = 2},
  [67] = {.lex_state = 169},
  [68] = {.lex_state = 169},
  [69] = {.lex_state = 169, .external_lex_state = 2},
  [70] = {.lex_state = 169, .external_lex_state = 2},
  [71] = {.lex_state = 169},
  [72] = {.lex_state = 169},
  [73] = {.lex_state = 169, .external_lex_state = 2},
  [74] = {.lex_state = 169},
  [75] = {.lex_state = 169},
  [76] = {.lex_state = 169, .external_lex_state = 2},
  [77] = {.lex_state = 169, .external_lex_state = 2},
  [78] = {.lex_state = 169},
  [79] = {.lex_state = 169},
  [80] = {.lex_state = 169},
  [81] = {.lex_state = 169, .external_lex_state = 2},
  [82] = {.lex_state = 169, .external_lex_state = 2},
  [83] = {.lex_state = 169, .external_lex_state = 2},
  [84] = {.lex_state = 169, .external_lex_state = 2},
  [85] = {.lex_state = 169},
  [86] = {.lex_state = 169, .external_lex_state = 2},
  [87] = {.lex_state = 169, .external_lex_state = 2},
  [88] = {.lex_state = 169},
  [89] = {.lex_state = 169, .external_lex_state = 2},
  [90] = {.lex_state = 169, .external_lex_state = 2},
  [91] = {.lex_state = 169},
  [92] = {.lex_state = 169},
  [93] = {.lex_state = 169},
  [94] = {.lex_state = 169},
  [95] = {.lex_state = 169},
  [96] = {.lex_state = 169},
  [97] = {.lex_state = 169},
  [98] = {.lex_state = 169, .external_lex_state = 2},
  [99] = {.lex_state = 169},
  [100] = {.lex_state = 169},
  [101] = {.lex_state = 169},
  [102] = {.lex_state = 169},
  [103] = {.lex_state = 169},
  [104] = {.lex_state = 169},
  [105] = {.lex_state = 169},
  [106] = {.lex_state = 169, .external_lex_state = 2},
  [107] = {.lex_state = 169, .external_lex_state = 2},
  [108] = {.lex_state = 169},
  [109] = {.lex_state = 169},
  [110] = {.lex_state = 169, .external_lex_state = 2},
  [111] = {.lex_state = 169, .external_lex_state = 2},
  [112] = {.lex_state = 169, .external_lex_state = 2},
  [113] = {.lex_state = 169, .external_lex_state = 2},
  [114] = {.lex_state = 169},
  [115] = {.lex_state = 169},
  [116] = {.lex_state = 169},
  [117] = {.lex_state = 169},
  [118] = {.lex_state = 169},
  [119] = {.lex_state = 169},
  [120] = {.lex_state = 169},
  [121] = {.lex_state = 169},
  [122] = {.lex_state = 169},
  [123] = {.lex_state = 169, .external_lex_state = 2},
  [124] = {.lex_state = 169, .external_lex_state = 2},
  [125] = {.lex_state = 169, .external_lex_state = 2},
  [126] = {.lex_state = 169},
  [127] = {.lex_state = 169, .external_lex_state = 2},
  [128] = {.lex_state = 169, .external_lex_state = 2},
  [129] = {.lex_state = 169},
  [130] = {.lex_state = 169},
  [131] = {.lex_state = 169},
  [132] = {.lex_state = 169, .external_lex_state = 2},
  [133] = {.lex_state = 169, .external_lex_state = 2},
  [134] = {.lex_state = 169, .external_lex_state = 2},
  [135] = {.lex_state = 169, .external_lex_state = 2},
  [136] = {.lex_state = 169, .external_lex_state = 2},
  [137] = {.lex_state = 169},
  [138] = {.lex_state = 169, .external_lex_state = 2},
  [139] = {.lex_state = 169},
  [140] = {.lex_state = 169},
  [141] = {.lex_state = 169},
  [142] = {.lex_state = 169, .external_lex_state = 2},
  [143] = {.lex_state = 169},
  [144] = {.lex_state = 169, .external_lex_state = 2},
  [145] = {.lex_state = 169},
  [146] = {.lex_state = 169, .external_lex_state = 2},
  [147] = {.lex_state = 169, .external_lex_state = 2},
  [148] = {.lex_state = 169, .external_lex_state = 2},
  [149] = {.lex_state = 169, .external_lex_state = 2},
  [150] = {.lex_state = 169},
  [151] = {.lex_state = 5, .external_lex_state = 5},
  [152] = {.lex_state = 5, .external_lex_state = 5},
  [153] = {.lex_state = 5, .external_lex_state = 5},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 5, .external_lex_state = 5},
  [156] = {.lex_state = 34, .external_lex_state = 5},
  [157] = {.lex_state = 34, .external_lex_state = 5},
  [158] = {.lex_state = 5, .external_lex_state = 5},
  [159] = {.lex_state = 34, .external_lex_state = 5},
  [160] = {.lex_state = 44, .external_lex_state = 5},
  [161] = {.lex_state = 44, .external_lex_state = 5},
  [162] = {.lex_state = 5, .external_lex_state = 5},
  [163] = {.lex_state = 5, .external_lex_state = 5},
  [164] = {.lex_state = 5, .external_lex_state = 5},
  [165] = {.lex_state = 5, .external_lex_state = 5},
  [166] = {.lex_state = 62, .external_lex_state = 5},
  [167] = {.lex_state = 13, .external_lex_state = 5},
  [168] = {.lex_state = 13, .external_lex_state = 5},
  [169] = {.lex_state = 44, .external_lex_state = 5},
  [170] = {.lex_state = 44, .external_lex_state = 5},
  [171] = {.lex_state = 44, .external_lex_state = 5},
  [172] = {.lex_state = 13, .external_lex_state = 5},
  [173] = {.lex_state = 13, .external_lex_state = 5},
  [174] = {.lex_state = 13, .external_lex_state = 5},
  [175] = {.lex_state = 13, .external_lex_state = 5},
  [176] = {.lex_state = 78},
  [177] = {.lex_state = 34, .external_lex_state = 5},
  [178] = {.lex_state = 34, .external_lex_state = 5},
  [179] = {.lex_state = 80, .external_lex_state = 5},
  [180] = {.lex_state = 80, .external_lex_state = 5},
  [181] = {.lex_state = 13, .external_lex_state = 5},
  [182] = {.lex_state = 13, .external_lex_state = 5},
  [183] = {.lex_state = 47, .external_lex_state = 6},
  [184] = {.lex_state = 47, .external_lex_state = 6},
  [185] = {.lex_state = 47, .external_lex_state = 6},
  [186] = {.lex_state = 47, .external_lex_state = 6},
  [187] = {.lex_state = 78},
  [188] = {.lex_state = 48},
  [189] = {.lex_state = 49},
  [190] = {.lex_state = 80, .external_lex_state = 5},
  [191] = {.lex_state = 80, .external_lex_state = 5},
  [192] = {.lex_state = 13, .external_lex_state = 5},
  [193] = {.lex_state = 13, .external_lex_state = 5},
  [194] = {.lex_state = 13, .external_lex_state = 5},
  [195] = {.lex_state = 13, .external_lex_state = 5},
  [196] = {.lex_state = 49},
  [197] = {.lex_state = 13, .external_lex_state = 5},
  [198] = {.lex_state = 48},
  [199] = {.lex_state = 80, .external_lex_state = 5},
  [200] = {.lex_state = 80, .external_lex_state = 5},
  [201] = {.lex_state = 82},
  [202] = {.lex_state = 13, .external_lex_state = 5},
  [203] = {.lex_state = 36, .external_lex_state = 5},
  [204] = {.lex_state = 0, .external_lex_state = 5},
  [205] = {.lex_state = 36, .external_lex_state = 5},
  [206] = {.lex_state = 38, .external_lex_state = 7},
  [207] = {.lex_state = 16, .external_lex_state = 5},
  [208] = {.lex_state = 74},
  [209] = {.lex_state = 40},
  [210] = {.lex_state = 53},
  [211] = {.lex_state = 36, .external_lex_state = 5},
  [212] = {.lex_state = 36, .external_lex_state = 5},
  [213] = {.lex_state = 36, .external_lex_state = 5},
  [214] = {.lex_state = 36, .external_lex_state = 5},
  [215] = {.lex_state = 38, .external_lex_state = 7},
  [216] = {.lex_state = 40},
  [217] = {.lex_state = 75},
  [218] = {.lex_state = 0, .external_lex_state = 5},
  [219] = {.lex_state = 36, .external_lex_state = 5},
  [220] = {.lex_state = 53},
  [221] = {.lex_state = 86, .external_lex_state = 8},
  [222] = {.lex_state = 38, .external_lex_state = 2},
  [223] = {.lex_state = 38, .external_lex_state = 2},
  [224] = {.lex_state = 38, .external_lex_state = 2},
  [225] = {.lex_state = 38, .external_lex_state = 2},
  [226] = {.lex_state = 38, .external_lex_state = 2},
  [227] = {.lex_state = 38, .external_lex_state = 2},
  [228] = {.lex_state = 87, .external_lex_state = 9},
  [229] = {.lex_state = 86, .external_lex_state = 8},
  [230] = {.lex_state = 88, .external_lex_state = 10},
  [231] = {.lex_state = 38, .external_lex_state = 5},
  [232] = {.lex_state = 47},
  [233] = {.lex_state = 38, .external_lex_state = 5},
  [234] = {.lex_state = 87, .external_lex_state = 9},
  [235] = {.lex_state = 86, .external_lex_state = 8},
  [236] = {.lex_state = 88, .external_lex_state = 10},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 20},
  [239] = {.lex_state = 38, .external_lex_state = 5},
  [240] = {.lex_state = 48},
  [241] = {.lex_state = 48},
  [242] = {.lex_state = 49},
  [243] = {.lex_state = 49},
  [244] = {.lex_state = 48},
  [245] = {.lex_state = 49},
  [246] = {.lex_state = 88, .external_lex_state = 10},
  [247] = {.lex_state = 86, .external_lex_state = 8},
  [248] = {.lex_state = 87, .external_lex_state = 9},
  [249] = {.lex_state = 65},
  [250] = {.lex_state = 55},
  [251] = {.lex_state = 55},
  [252] = {.lex_state = 57},
  [253] = {.lex_state = 38, .external_lex_state = 7},
  [254] = {.lex_state = 57},
  [255] = {.lex_state = 38, .external_lex_state = 5},
  [256] = {.lex_state = 38, .external_lex_state = 2},
  [257] = {.lex_state = 38, .external_lex_state = 2},
  [258] = {.lex_state = 38, .external_lex_state = 2},
  [259] = {.lex_state = 38, .external_lex_state = 2},
  [260] = {.lex_state = 38, .external_lex_state = 2},
  [261] = {.lex_state = 38, .external_lex_state = 2},
  [262] = {.lex_state = 38, .external_lex_state = 2},
  [263] = {.lex_state = 38, .external_lex_state = 2},
  [264] = {.lex_state = 38, .external_lex_state = 2},
  [265] = {.lex_state = 38, .external_lex_state = 2},
  [266] = {.lex_state = 38, .external_lex_state = 2},
  [267] = {.lex_state = 86, .external_lex_state = 8},
  [268] = {.lex_state = 38, .external_lex_state = 2},
  [269] = {.lex_state = 38, .external_lex_state = 2},
  [270] = {.lex_state = 38, .external_lex_state = 2},
  [271] = {.lex_state = 38, .external_lex_state = 2},
  [272] = {.lex_state = 38, .external_lex_state = 2},
  [273] = {.lex_state = 38, .external_lex_state = 2},
  [274] = {.lex_state = 38, .external_lex_state = 2},
  [275] = {.lex_state = 88, .external_lex_state = 10},
  [276] = {.lex_state = 86, .external_lex_state = 8},
  [277] = {.lex_state = 87, .external_lex_state = 9},
  [278] = {.lex_state = 38, .external_lex_state = 2},
  [279] = {.lex_state = 47},
  [280] = {.lex_state = 17, .external_lex_state = 5},
  [281] = {.lex_state = 47, .external_lex_state = 8},
  [282] = {.lex_state = 38, .external_lex_state = 2},
  [283] = {.lex_state = 87, .external_lex_state = 9},
  [284] = {.lex_state = 38, .external_lex_state = 2},
  [285] = {.lex_state = 23},
  [286] = {.lex_state = 38, .external_lex_state = 2},
  [287] = {.lex_state = 88, .external_lex_state = 10},
  [288] = {.lex_state = 88, .external_lex_state = 10},
  [289] = {.lex_state = 86, .external_lex_state = 8},
  [290] = {.lex_state = 87, .external_lex_state = 9},
  [291] = {.lex_state = 38, .external_lex_state = 2},
  [292] = {.lex_state = 38, .external_lex_state = 2},
  [293] = {.lex_state = 38, .external_lex_state = 2},
  [294] = {.lex_state = 38, .external_lex_state = 2},
  [295] = {.lex_state = 38, .external_lex_state = 2},
  [296] = {.lex_state = 38, .external_lex_state = 2},
  [297] = {.lex_state = 38, .external_lex_state = 2},
  [298] = {.lex_state = 38, .external_lex_state = 2},
  [299] = {.lex_state = 38, .external_lex_state = 2},
  [300] = {.lex_state = 38, .external_lex_state = 2},
  [301] = {.lex_state = 38, .external_lex_state = 2},
  [302] = {.lex_state = 38, .external_lex_state = 2},
  [303] = {.lex_state = 38, .external_lex_state = 2},
  [304] = {.lex_state = 38, .external_lex_state = 2},
  [305] = {.lex_state = 38, .external_lex_state = 2},
  [306] = {.lex_state = 38, .external_lex_state = 2},
  [307] = {.lex_state = 38, .external_lex_state = 2},
  [308] = {.lex_state = 38, .external_lex_state = 2},
  [309] = {.lex_state = 88, .external_lex_state = 10},
  [310] = {.lex_state = 86, .external_lex_state = 8},
  [311] = {.lex_state = 38, .external_lex_state = 2},
  [312] = {.lex_state = 87, .external_lex_state = 9},
  [313] = {.lex_state = 88, .external_lex_state = 10},
  [314] = {.lex_state = 38, .external_lex_state = 2},
  [315] = {.lex_state = 86, .external_lex_state = 8},
  [316] = {.lex_state = 87, .external_lex_state = 9},
  [317] = {.lex_state = 38, .external_lex_state = 2},
  [318] = {.lex_state = 88, .external_lex_state = 10},
  [319] = {.lex_state = 86, .external_lex_state = 8},
  [320] = {.lex_state = 38, .external_lex_state = 2},
  [321] = {.lex_state = 87, .external_lex_state = 9},
  [322] = {.lex_state = 88, .external_lex_state = 10},
  [323] = {.lex_state = 38, .external_lex_state = 2},
  [324] = {.lex_state = 87, .external_lex_state = 9},
  [325] = {.lex_state = 88, .external_lex_state = 10},
  [326] = {.lex_state = 38, .external_lex_state = 2},
  [327] = {.lex_state = 86, .external_lex_state = 8},
  [328] = {.lex_state = 87, .external_lex_state = 9},
  [329] = {.lex_state = 88, .external_lex_state = 10},
  [330] = {.lex_state = 86, .external_lex_state = 8},
  [331] = {.lex_state = 87, .external_lex_state = 9},
  [332] = {.lex_state = 88, .external_lex_state = 10},
  [333] = {.lex_state = 38, .external_lex_state = 5},
  [334] = {.lex_state = 86, .external_lex_state = 8},
  [335] = {.lex_state = 87, .external_lex_state = 9},
  [336] = {.lex_state = 88, .external_lex_state = 10},
  [337] = {.lex_state = 86, .external_lex_state = 8},
  [338] = {.lex_state = 87, .external_lex_state = 9},
  [339] = {.lex_state = 88, .external_lex_state = 10},
  [340] = {.lex_state = 86, .external_lex_state = 8},
  [341] = {.lex_state = 87, .external_lex_state = 9},
  [342] = {.lex_state = 47},
  [343] = {.lex_state = 88, .external_lex_state = 10},
  [344] = {.lex_state = 86, .external_lex_state = 8},
  [345] = {.lex_state = 87, .external_lex_state = 9},
  [346] = {.lex_state = 38, .external_lex_state = 5},
  [347] = {.lex_state = 88, .external_lex_state = 10},
  [348] = {.lex_state = 47, .external_lex_state = 8},
  [349] = {.lex_state = 86, .external_lex_state = 8},
  [350] = {.lex_state = 87, .external_lex_state = 9},
  [351] = {.lex_state = 87, .external_lex_state = 9},
  [352] = {.lex_state = 86, .external_lex_state = 8},
  [353] = {.lex_state = 88, .external_lex_state = 10},
  [354] = {.lex_state = 88, .external_lex_state = 10},
  [355] = {.lex_state = 86, .external_lex_state = 8},
  [356] = {.lex_state = 87, .external_lex_state = 9},
  [357] = {.lex_state = 36, .external_lex_state = 5},
  [358] = {.lex_state = 88, .external_lex_state = 10},
  [359] = {.lex_state = 86, .external_lex_state = 8},
  [360] = {.lex_state = 87, .external_lex_state = 9},
  [361] = {.lex_state = 88, .external_lex_state = 10},
  [362] = {.lex_state = 86, .external_lex_state = 8},
  [363] = {.lex_state = 87, .external_lex_state = 9},
  [364] = {.lex_state = 88, .external_lex_state = 10},
  [365] = {.lex_state = 86, .external_lex_state = 8},
  [366] = {.lex_state = 87, .external_lex_state = 9},
  [367] = {.lex_state = 88, .external_lex_state = 10},
  [368] = {.lex_state = 86, .external_lex_state = 8},
  [369] = {.lex_state = 87, .external_lex_state = 9},
  [370] = {.lex_state = 20},
  [371] = {.lex_state = 20},
  [372] = {.lex_state = 47},
  [373] = {.lex_state = 47},
  [374] = {.lex_state = 38, .external_lex_state = 5},
  [375] = {.lex_state = 47},
  [376] = {.lex_state = 47},
  [377] = {.lex_state = 23},
  [378] = {.lex_state = 23},
  [379] = {.lex_state = 23},
  [380] = {.lex_state = 23},
  [381] = {.lex_state = 23},
  [382] = {.lex_state = 23},
  [383] = {.lex_state = 47},
  [384] = {.lex_state = 23},
  [385] = {.lex_state = 23},
  [386] = {.lex_state = 23},
  [387] = {.lex_state = 23},
  [388] = {.lex_state = 23},
  [389] = {.lex_state = 23},
  [390] = {.lex_state = 23},
  [391] = {.lex_state = 23},
  [392] = {.lex_state = 23},
  [393] = {.lex_state = 23},
  [394] = {.lex_state = 23},
  [395] = {.lex_state = 38, .external_lex_state = 5},
  [396] = {.lex_state = 67},
  [397] = {.lex_state = 38},
  [398] = {.lex_state = 38},
  [399] = {.lex_state = 38},
  [400] = {.lex_state = 38},
  [401] = {.lex_state = 38},
  [402] = {.lex_state = 38},
  [403] = {.lex_state = 38},
  [404] = {.lex_state = 38},
  [405] = {.lex_state = 38},
  [406] = {.lex_state = 38},
  [407] = {.lex_state = 38},
  [408] = {.lex_state = 38},
  [409] = {.lex_state = 38},
  [410] = {.lex_state = 38},
  [411] = {.lex_state = 38},
  [412] = {.lex_state = 38},
  [413] = {.lex_state = 38},
  [414] = {.lex_state = 38},
  [415] = {.lex_state = 38},
  [416] = {.lex_state = 38},
  [417] = {.lex_state = 38},
  [418] = {.lex_state = 38},
  [419] = {.lex_state = 38},
  [420] = {.lex_state = 38},
  [421] = {.lex_state = 38},
  [422] = {.lex_state = 38},
  [423] = {.lex_state = 38, .external_lex_state = 5},
  [424] = {.lex_state = 38},
  [425] = {.lex_state = 38, .external_lex_state = 5},
  [426] = {.lex_state = 38},
  [427] = {.lex_state = 38, .external_lex_state = 5},
  [428] = {.lex_state = 38},
  [429] = {.lex_state = 38, .external_lex_state = 5},
  [430] = {.lex_state = 38},
  [431] = {.lex_state = 38, .external_lex_state = 5},
  [432] = {.lex_state = 38},
  [433] = {.lex_state = 38, .external_lex_state = 5},
  [434] = {.lex_state = 38},
  [435] = {.lex_state = 38, .external_lex_state = 5},
  [436] = {.lex_state = 38},
  [437] = {.lex_state = 38},
  [438] = {.lex_state = 38},
  [439] = {.lex_state = 38},
  [440] = {.lex_state = 38},
  [441] = {.lex_state = 38},
  [442] = {.lex_state = 38, .external_lex_state = 5},
  [443] = {.lex_state = 73, .external_lex_state = 8},
  [444] = {.lex_state = 38, .external_lex_state = 5},
  [445] = {.lex_state = 38, .external_lex_state = 5},
  [446] = {.lex_state = 68},
  [447] = {.lex_state = 38, .external_lex_state = 5},
  [448] = {.lex_state = 38, .external_lex_state = 5},
  [449] = {.lex_state = 38, .external_lex_state = 5},
  [450] = {.lex_state = 38, .external_lex_state = 5},
  [451] = {.lex_state = 38, .external_lex_state = 5},
  [452] = {.lex_state = 38, .external_lex_state = 5},
  [453] = {.lex_state = 38, .external_lex_state = 5},
  [454] = {.lex_state = 38, .external_lex_state = 5},
  [455] = {.lex_state = 38, .external_lex_state = 5},
  [456] = {.lex_state = 38, .external_lex_state = 5},
  [457] = {.lex_state = 38, .external_lex_state = 5},
  [458] = {.lex_state = 38, .external_lex_state = 5},
  [459] = {.lex_state = 38, .external_lex_state = 5},
  [460] = {.lex_state = 38, .external_lex_state = 5},
  [461] = {.lex_state = 27},
  [462] = {.lex_state = 38, .external_lex_state = 5},
  [463] = {.lex_state = 38, .external_lex_state = 5},
  [464] = {.lex_state = 38, .external_lex_state = 5},
  [465] = {.lex_state = 38},
  [466] = {.lex_state = 38, .external_lex_state = 5},
  [467] = {.lex_state = 38},
  [468] = {.lex_state = 38, .external_lex_state = 5},
  [469] = {.lex_state = 38, .external_lex_state = 5},
  [470] = {.lex_state = 38, .external_lex_state = 5},
  [471] = {.lex_state = 38},
  [472] = {.lex_state = 38, .external_lex_state = 5},
  [473] = {.lex_state = 38, .external_lex_state = 5},
  [474] = {.lex_state = 38, .external_lex_state = 5},
  [475] = {.lex_state = 38, .external_lex_state = 5},
  [476] = {.lex_state = 38, .external_lex_state = 5},
  [477] = {.lex_state = 38, .external_lex_state = 5},
  [478] = {.lex_state = 38, .external_lex_state = 5},
  [479] = {.lex_state = 38, .external_lex_state = 5},
  [480] = {.lex_state = 38, .external_lex_state = 5},
  [481] = {.lex_state = 38, .external_lex_state = 5},
  [482] = {.lex_state = 38, .external_lex_state = 5},
  [483] = {.lex_state = 38},
  [484] = {.lex_state = 38, .external_lex_state = 5},
  [485] = {.lex_state = 38},
  [486] = {.lex_state = 38, .external_lex_state = 5},
  [487] = {.lex_state = 38},
  [488] = {.lex_state = 38, .external_lex_state = 5},
  [489] = {.lex_state = 38},
  [490] = {.lex_state = 38, .external_lex_state = 5},
  [491] = {.lex_state = 38},
  [492] = {.lex_state = 53},
  [493] = {.lex_state = 53},
  [494] = {.lex_state = 38},
  [495] = {.lex_state = 38, .external_lex_state = 5},
  [496] = {.lex_state = 38},
  [497] = {.lex_state = 38, .external_lex_state = 5},
  [498] = {.lex_state = 38},
  [499] = {.lex_state = 38, .external_lex_state = 5},
  [500] = {.lex_state = 38},
  [501] = {.lex_state = 53},
  [502] = {.lex_state = 87, .external_lex_state = 9},
  [503] = {.lex_state = 38},
  [504] = {.lex_state = 38},
  [505] = {.lex_state = 47, .external_lex_state = 8},
  [506] = {.lex_state = 38},
  [507] = {.lex_state = 88, .external_lex_state = 10},
  [508] = {.lex_state = 38},
  [509] = {.lex_state = 17, .external_lex_state = 5},
  [510] = {.lex_state = 57},
  [511] = {.lex_state = 88, .external_lex_state = 10},
  [512] = {.lex_state = 38},
  [513] = {.lex_state = 38},
  [514] = {.lex_state = 38},
  [515] = {.lex_state = 38},
  [516] = {.lex_state = 38},
  [517] = {.lex_state = 36, .external_lex_state = 5},
  [518] = {.lex_state = 38},
  [519] = {.lex_state = 38},
  [520] = {.lex_state = 86, .external_lex_state = 8},
  [521] = {.lex_state = 55},
  [522] = {.lex_state = 36, .external_lex_state = 5},
  [523] = {.lex_state = 38},
  [524] = {.lex_state = 86, .external_lex_state = 8},
  [525] = {.lex_state = 38},
  [526] = {.lex_state = 38},
  [527] = {.lex_state = 38},
  [528] = {.lex_state = 38},
  [529] = {.lex_state = 20},
  [530] = {.lex_state = 87, .external_lex_state = 9},
  [531] = {.lex_state = 20},
  [532] = {.lex_state = 38, .external_lex_state = 7},
  [533] = {.lex_state = 38},
  [534] = {.lex_state = 38},
  [535] = {.lex_state = 38},
  [536] = {.lex_state = 38},
  [537] = {.lex_state = 47, .external_lex_state = 8},
  [538] = {.lex_state = 38},
  [539] = {.lex_state = 38},
  [540] = {.lex_state = 38},
  [541] = {.lex_state = 38},
  [542] = {.lex_state = 38},
  [543] = {.lex_state = 57},
  [544] = {.lex_state = 38},
  [545] = {.lex_state = 38},
  [546] = {.lex_state = 57},
  [547] = {.lex_state = 55},
  [548] = {.lex_state = 55},
  [549] = {.lex_state = 38},
  [550] = {.lex_state = 38},
  [551] = {.lex_state = 38},
  [552] = {.lex_state = 47, .external_lex_state = 8},
  [553] = {.lex_state = 20},
  [554] = {.lex_state = 38},
  [555] = {.lex_state = 20},
  [556] = {.lex_state = 38, .external_lex_state = 7},
  [557] = {.lex_state = 38},
  [558] = {.lex_state = 38, .external_lex_state = 4},
  [559] = {.lex_state = 38},
  [560] = {.lex_state = 38},
  [561] = {.lex_state = 38},
  [562] = {.lex_state = 38},
  [563] = {.lex_state = 38},
  [564] = {.lex_state = 38},
  [565] = {.lex_state = 38},
  [566] = {.lex_state = 38},
  [567] = {.lex_state = 38},
  [568] = {.lex_state = 38},
  [569] = {.lex_state = 38},
  [570] = {.lex_state = 38},
  [571] = {.lex_state = 38},
  [572] = {.lex_state = 38},
  [573] = {.lex_state = 38},
  [574] = {.lex_state = 38},
  [575] = {.lex_state = 38},
  [576] = {.lex_state = 38},
  [577] = {.lex_state = 38},
  [578] = {.lex_state = 38},
  [579] = {.lex_state = 38},
  [580] = {.lex_state = 20},
  [581] = {.lex_state = 38},
  [582] = {.lex_state = 20},
  [583] = {.lex_state = 38, .external_lex_state = 2},
  [584] = {.lex_state = 0, .external_lex_state = 5},
  [585] = {.lex_state = 0, .external_lex_state = 5},
  [586] = {.lex_state = 0, .external_lex_state = 5},
  [587] = {.lex_state = 0, .external_lex_state = 5},
  [588] = {.lex_state = 38, .external_lex_state = 5},
  [589] = {.lex_state = 38, .external_lex_state = 5},
  [590] = {.lex_state = 29},
  [591] = {.lex_state = 29},
  [592] = {.lex_state = 28},
  [593] = {.lex_state = 38, .external_lex_state = 2},
  [594] = {.lex_state = 28},
  [595] = {.lex_state = 38, .external_lex_state = 2},
  [596] = {.lex_state = 0, .external_lex_state = 5},
  [597] = {.lex_state = 24},
  [598] = {.lex_state = 29},
  [599] = {.lex_state = 0, .external_lex_state = 5},
  [600] = {.lex_state = 20},
  [601] = {.lex_state = 0, .external_lex_state = 5},
  [602] = {.lex_state = 0, .external_lex_state = 5},
  [603] = {.lex_state = 0, .external_lex_state = 5},
  [604] = {.lex_state = 20},
  [605] = {.lex_state = 24},
  [606] = {.lex_state = 0, .external_lex_state = 5},
  [607] = {.lex_state = 0, .external_lex_state = 5},
  [608] = {.lex_state = 0, .external_lex_state = 5},
  [609] = {.lex_state = 29},
  [610] = {.lex_state = 28},
  [611] = {.lex_state = 29},
  [612] = {.lex_state = 0, .external_lex_state = 11},
  [613] = {.lex_state = 0, .external_lex_state = 11},
  [614] = {.lex_state = 0, .external_lex_state = 11},
  [615] = {.lex_state = 32},
  [616] = {.lex_state = 0, .external_lex_state = 5},
  [617] = {.lex_state = 0, .external_lex_state = 11},
  [618] = {.lex_state = 0, .external_lex_state = 5},
  [619] = {.lex_state = 29},
  [620] = {.lex_state = 0, .external_lex_state = 11},
  [621] = {.lex_state = 29},
  [622] = {.lex_state = 20},
  [623] = {.lex_state = 28},
  [624] = {.lex_state = 0, .external_lex_state = 5},
  [625] = {.lex_state = 0, .external_lex_state = 11},
  [626] = {.lex_state = 0, .external_lex_state = 5},
  [627] = {.lex_state = 28},
  [628] = {.lex_state = 0, .external_lex_state = 11},
  [629] = {.lex_state = 0, .external_lex_state = 5},
  [630] = {.lex_state = 28},
  [631] = {.lex_state = 89},
  [632] = {.lex_state = 0, .external_lex_state = 5},
  [633] = {.lex_state = 0, .external_lex_state = 5},
  [634] = {.lex_state = 0, .external_lex_state = 5},
  [635] = {.lex_state = 0, .external_lex_state = 5},
  [636] = {.lex_state = 0, .external_lex_state = 5},
  [637] = {.lex_state = 0, .external_lex_state = 5},
  [638] = {.lex_state = 0, .external_lex_state = 5},
  [639] = {.lex_state = 28},
  [640] = {.lex_state = 0, .external_lex_state = 5},
  [641] = {.lex_state = 0, .external_lex_state = 11},
  [642] = {.lex_state = 0, .external_lex_state = 11},
  [643] = {.lex_state = 0, .external_lex_state = 5},
  [644] = {.lex_state = 0, .external_lex_state = 5},
  [645] = {.lex_state = 0, .external_lex_state = 5},
  [646] = {.lex_state = 0, .external_lex_state = 5},
  [647] = {.lex_state = 0, .external_lex_state = 5},
  [648] = {.lex_state = 0, .external_lex_state = 5},
  [649] = {.lex_state = 0, .external_lex_state = 5},
  [650] = {.lex_state = 0, .external_lex_state = 5},
  [651] = {.lex_state = 0, .external_lex_state = 5},
  [652] = {.lex_state = 0, .external_lex_state = 5},
  [653] = {.lex_state = 0, .external_lex_state = 5},
  [654] = {.lex_state = 0, .external_lex_state = 5},
  [655] = {.lex_state = 24, .external_lex_state = 5},
  [656] = {.lex_state = 0, .external_lex_state = 12},
  [657] = {.lex_state = 0, .external_lex_state = 12},
  [658] = {.lex_state = 24, .external_lex_state = 5},
  [659] = {.lex_state = 24, .external_lex_state = 5},
  [660] = {.lex_state = 24, .external_lex_state = 5},
  [661] = {.lex_state = 24, .external_lex_state = 5},
  [662] = {.lex_state = 0, .external_lex_state = 4},
  [663] = {.lex_state = 24, .external_lex_state = 5},
  [664] = {.lex_state = 24, .external_lex_state = 5},
  [665] = {.lex_state = 24, .external_lex_state = 5},
  [666] = {.lex_state = 24, .external_lex_state = 5},
  [667] = {.lex_state = 24, .external_lex_state = 5},
  [668] = {.lex_state = 24, .external_lex_state = 5},
  [669] = {.lex_state = 0, .external_lex_state = 5},
  [670] = {.lex_state = 24, .external_lex_state = 5},
  [671] = {.lex_state = 24, .external_lex_state = 5},
  [672] = {.lex_state = 24, .external_lex_state = 5},
  [673] = {.lex_state = 24, .external_lex_state = 5},
  [674] = {.lex_state = 24, .external_lex_state = 5},
  [675] = {.lex_state = 24, .external_lex_state = 5},
  [676] = {.lex_state = 0, .external_lex_state = 12},
  [677] = {.lex_state = 24, .external_lex_state = 5},
  [678] = {.lex_state = 24, .external_lex_state = 5},
  [679] = {.lex_state = 24, .external_lex_state = 5},
  [680] = {.lex_state = 0, .external_lex_state = 12},
  [681] = {.lex_state = 0, .external_lex_state = 12},
  [682] = {.lex_state = 0, .external_lex_state = 12},
  [683] = {.lex_state = 0, .external_lex_state = 12},
  [684] = {.lex_state = 0, .external_lex_state = 12},
  [685] = {.lex_state = 24, .external_lex_state = 5},
  [686] = {.lex_state = 24, .external_lex_state = 5},
  [687] = {.lex_state = 0, .external_lex_state = 12},
  [688] = {.lex_state = 0, .external_lex_state = 12},
  [689] = {.lex_state = 24, .external_lex_state = 5},
  [690] = {.lex_state = 24, .external_lex_state = 5},
  [691] = {.lex_state = 24, .external_lex_state = 5},
  [692] = {.lex_state = 24, .external_lex_state = 5},
  [693] = {.lex_state = 24, .external_lex_state = 5},
  [694] = {.lex_state = 24, .external_lex_state = 5},
  [695] = {.lex_state = 24, .external_lex_state = 5},
  [696] = {.lex_state = 24, .external_lex_state = 5},
  [697] = {.lex_state = 24, .external_lex_state = 5},
  [698] = {.lex_state = 24, .external_lex_state = 5},
  [699] = {.lex_state = 0, .external_lex_state = 12},
  [700] = {.lex_state = 24, .external_lex_state = 5},
  [701] = {.lex_state = 24, .external_lex_state = 5},
  [702] = {.lex_state = 0, .external_lex_state = 12},
  [703] = {.lex_state = 24, .external_lex_state = 5},
  [704] = {.lex_state = 0, .external_lex_state = 5},
  [705] = {.lex_state = 0, .external_lex_state = 5},
  [706] = {.lex_state = 24, .external_lex_state = 5},
  [707] = {.lex_state = 0, .external_lex_state = 12},
  [708] = {.lex_state = 24},
  [709] = {.lex_state = 0, .external_lex_state = 12},
  [710] = {.lex_state = 24, .external_lex_state = 5},
  [711] = {.lex_state = 0, .external_lex_state = 5},
  [712] = {.lex_state = 0, .external_lex_state = 5},
  [713] = {.lex_state = 0, .external_lex_state = 4},
  [714] = {.lex_state = 24, .external_lex_state = 5},
  [715] = {.lex_state = 20},
  [716] = {.lex_state = 24},
  [717] = {.lex_state = 0, .external_lex_state = 5},
  [718] = {.lex_state = 24, .external_lex_state = 5},
  [719] = {.lex_state = 24},
  [720] = {.lex_state = 24},
  [721] = {.lex_state = 24, .external_lex_state = 5},
  [722] = {.lex_state = 24, .external_lex_state = 5},
  [723] = {.lex_state = 9},
  [724] = {.lex_state = 24, .external_lex_state = 5},
  [725] = {.lex_state = 24, .external_lex_state = 5},
  [726] = {.lex_state = 24, .external_lex_state = 5},
  [727] = {.lex_state = 24},
  [728] = {.lex_state = 24, .external_lex_state = 5},
  [729] = {.lex_state = 24, .external_lex_state = 5},
  [730] = {.lex_state = 0, .external_lex_state = 5},
  [731] = {.lex_state = 24, .external_lex_state = 5},
  [732] = {.lex_state = 24, .external_lex_state = 5},
  [733] = {.lex_state = 169},
  [734] = {.lex_state = 0, .external_lex_state = 5},
  [735] = {.lex_state = 0, .external_lex_state = 5},
  [736] = {.lex_state = 0, .external_lex_state = 3},
  [737] = {.lex_state = 0, .external_lex_state = 5},
  [738] = {.lex_state = 0, .external_lex_state = 8},
  [739] = {.lex_state = 0, .external_lex_state = 5},
  [740] = {.lex_state = 169},
  [741] = {.lex_state = 0, .external_lex_state = 5},
  [742] = {.lex_state = 27},
  [743] = {.lex_state = 0, .external_lex_state = 5},
  [744] = {.lex_state = 0, .external_lex_state = 5},
  [745] = {.lex_state = 169},
  [746] = {.lex_state = 0, .external_lex_state = 5},
  [747] = {.lex_state = 0, .external_lex_state = 8},
  [748] = {.lex_state = 0, .external_lex_state = 5},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 9},
  [751] = {.lex_state = 9},
  [752] = {.lex_state = 0, .external_lex_state = 5},
  [753] = {.lex_state = 0, .external_lex_state = 3},
  [754] = {.lex_state = 0, .external_lex_state = 5},
  [755] = {.lex_state = 0, .external_lex_state = 3},
  [756] = {.lex_state = 0, .external_lex_state = 5},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0, .external_lex_state = 5},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0, .external_lex_state = 5},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0, .external_lex_state = 5},
  [763] = {.lex_state = 0, .external_lex_state = 5},
  [764] = {.lex_state = 0, .external_lex_state = 5},
  [765] = {.lex_state = 24},
  [766] = {.lex_state = 85},
  [767] = {.lex_state = 0, .external_lex_state = 8},
  [768] = {.lex_state = 0, .external_lex_state = 2},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0, .external_lex_state = 5},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0, .external_lex_state = 5},
  [777] = {.lex_state = 0, .external_lex_state = 5},
  [778] = {.lex_state = 0, .external_lex_state = 5},
  [779] = {.lex_state = 0, .external_lex_state = 5},
  [780] = {.lex_state = 0, .external_lex_state = 5},
  [781] = {.lex_state = 9},
  [782] = {.lex_state = 0, .external_lex_state = 3},
  [783] = {.lex_state = 0, .external_lex_state = 5},
  [784] = {.lex_state = 0, .external_lex_state = 5},
  [785] = {.lex_state = 0, .external_lex_state = 5},
  [786] = {.lex_state = 0, .external_lex_state = 5},
  [787] = {.lex_state = 169},
  [788] = {.lex_state = 169},
  [789] = {.lex_state = 0, .external_lex_state = 5},
  [790] = {.lex_state = 0, .external_lex_state = 3},
  [791] = {.lex_state = 0, .external_lex_state = 5},
  [792] = {.lex_state = 27},
  [793] = {.lex_state = 0, .external_lex_state = 5},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0, .external_lex_state = 5},
  [796] = {.lex_state = 0, .external_lex_state = 3},
  [797] = {.lex_state = 0, .external_lex_state = 3},
  [798] = {.lex_state = 0, .external_lex_state = 5},
  [799] = {.lex_state = 0, .external_lex_state = 5},
  [800] = {.lex_state = 0, .external_lex_state = 2},
  [801] = {.lex_state = 0, .external_lex_state = 8},
  [802] = {.lex_state = 0, .external_lex_state = 5},
  [803] = {.lex_state = 0, .external_lex_state = 5},
  [804] = {.lex_state = 0, .external_lex_state = 5},
  [805] = {.lex_state = 0, .external_lex_state = 3},
  [806] = {.lex_state = 0, .external_lex_state = 5},
  [807] = {.lex_state = 0, .external_lex_state = 5},
  [808] = {.lex_state = 0, .external_lex_state = 5},
  [809] = {.lex_state = 0, .external_lex_state = 3},
  [810] = {.lex_state = 20},
  [811] = {.lex_state = 0, .external_lex_state = 5},
  [812] = {.lex_state = 0, .external_lex_state = 5},
  [813] = {.lex_state = 0, .external_lex_state = 3},
  [814] = {.lex_state = 0, .external_lex_state = 5},
  [815] = {.lex_state = 0, .external_lex_state = 3},
  [816] = {.lex_state = 0, .external_lex_state = 5},
  [817] = {.lex_state = 0, .external_lex_state = 5},
  [818] = {.lex_state = 0, .external_lex_state = 5},
  [819] = {.lex_state = 0, .external_lex_state = 5},
  [820] = {.lex_state = 0, .external_lex_state = 5},
  [821] = {.lex_state = 0, .external_lex_state = 5},
  [822] = {.lex_state = 0, .external_lex_state = 5},
  [823] = {.lex_state = 0, .external_lex_state = 5},
  [824] = {.lex_state = 0, .external_lex_state = 5},
  [825] = {.lex_state = 0, .external_lex_state = 3},
  [826] = {.lex_state = 0, .external_lex_state = 5},
  [827] = {.lex_state = 0, .external_lex_state = 5},
  [828] = {.lex_state = 0, .external_lex_state = 3},
  [829] = {.lex_state = 0, .external_lex_state = 5},
  [830] = {.lex_state = 0, .external_lex_state = 2},
  [831] = {.lex_state = 0, .external_lex_state = 5},
  [832] = {.lex_state = 0, .external_lex_state = 5},
  [833] = {.lex_state = 0, .external_lex_state = 5},
  [834] = {.lex_state = 0, .external_lex_state = 5},
  [835] = {.lex_state = 0, .external_lex_state = 5},
  [836] = {.lex_state = 0, .external_lex_state = 5},
  [837] = {.lex_state = 0, .external_lex_state = 5},
  [838] = {.lex_state = 0, .external_lex_state = 3},
  [839] = {.lex_state = 0, .external_lex_state = 5},
  [840] = {.lex_state = 0, .external_lex_state = 5},
  [841] = {.lex_state = 0, .external_lex_state = 5},
  [842] = {.lex_state = 0, .external_lex_state = 5},
  [843] = {.lex_state = 0, .external_lex_state = 5},
  [844] = {.lex_state = 0, .external_lex_state = 5},
  [845] = {.lex_state = 0, .external_lex_state = 5},
  [846] = {.lex_state = 0, .external_lex_state = 5},
  [847] = {.lex_state = 0, .external_lex_state = 3},
  [848] = {.lex_state = 0, .external_lex_state = 5},
  [849] = {.lex_state = 27},
  [850] = {.lex_state = 0, .external_lex_state = 5},
  [851] = {.lex_state = 27},
  [852] = {.lex_state = 0, .external_lex_state = 3},
  [853] = {.lex_state = 0, .external_lex_state = 5},
  [854] = {.lex_state = 0, .external_lex_state = 5},
  [855] = {.lex_state = 0, .external_lex_state = 5},
  [856] = {.lex_state = 0, .external_lex_state = 5},
  [857] = {.lex_state = 0, .external_lex_state = 5},
  [858] = {.lex_state = 0, .external_lex_state = 5},
  [859] = {.lex_state = 0, .external_lex_state = 3},
  [860] = {.lex_state = 0, .external_lex_state = 3},
  [861] = {.lex_state = 0, .external_lex_state = 5},
  [862] = {.lex_state = 0, .external_lex_state = 3},
  [863] = {.lex_state = 0, .external_lex_state = 5},
  [864] = {.lex_state = 0, .external_lex_state = 3},
  [865] = {.lex_state = 0, .external_lex_state = 5},
  [866] = {.lex_state = 0, .external_lex_state = 3},
  [867] = {.lex_state = 0, .external_lex_state = 5},
  [868] = {.lex_state = 0, .external_lex_state = 3},
  [869] = {.lex_state = 0, .external_lex_state = 5},
  [870] = {.lex_state = 0, .external_lex_state = 3},
  [871] = {.lex_state = 0, .external_lex_state = 5},
  [872] = {.lex_state = 0, .external_lex_state = 3},
  [873] = {.lex_state = 0, .external_lex_state = 3},
  [874] = {.lex_state = 0, .external_lex_state = 3},
  [875] = {.lex_state = 0, .external_lex_state = 3},
  [876] = {.lex_state = 0, .external_lex_state = 3},
  [877] = {.lex_state = 0, .external_lex_state = 3},
  [878] = {.lex_state = 0, .external_lex_state = 3},
  [879] = {.lex_state = 0, .external_lex_state = 3},
  [880] = {.lex_state = 0, .external_lex_state = 3},
  [881] = {.lex_state = 0, .external_lex_state = 5},
  [882] = {.lex_state = 0, .external_lex_state = 5},
  [883] = {.lex_state = 0, .external_lex_state = 5},
  [884] = {.lex_state = 0, .external_lex_state = 5},
  [885] = {.lex_state = 0, .external_lex_state = 3},
  [886] = {.lex_state = 0, .external_lex_state = 5},
  [887] = {.lex_state = 0, .external_lex_state = 5},
  [888] = {.lex_state = 0, .external_lex_state = 5},
  [889] = {.lex_state = 0, .external_lex_state = 5},
  [890] = {.lex_state = 0, .external_lex_state = 8},
  [891] = {.lex_state = 0, .external_lex_state = 3},
  [892] = {.lex_state = 0, .external_lex_state = 3},
  [893] = {.lex_state = 0, .external_lex_state = 5},
  [894] = {.lex_state = 0, .external_lex_state = 3},
  [895] = {.lex_state = 0, .external_lex_state = 5},
  [896] = {.lex_state = 0, .external_lex_state = 3},
  [897] = {.lex_state = 0, .external_lex_state = 2},
  [898] = {.lex_state = 0, .external_lex_state = 3},
  [899] = {.lex_state = 0, .external_lex_state = 5},
  [900] = {.lex_state = 0, .external_lex_state = 3},
  [901] = {.lex_state = 0, .external_lex_state = 5},
  [902] = {.lex_state = 0, .external_lex_state = 3},
  [903] = {.lex_state = 0, .external_lex_state = 5},
  [904] = {.lex_state = 0, .external_lex_state = 3},
  [905] = {.lex_state = 0, .external_lex_state = 3},
  [906] = {.lex_state = 0, .external_lex_state = 3},
  [907] = {.lex_state = 0, .external_lex_state = 3},
  [908] = {.lex_state = 0, .external_lex_state = 3},
  [909] = {.lex_state = 0, .external_lex_state = 3},
  [910] = {.lex_state = 0, .external_lex_state = 3},
  [911] = {.lex_state = 0, .external_lex_state = 3},
  [912] = {.lex_state = 0, .external_lex_state = 3},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0, .external_lex_state = 5},
  [915] = {.lex_state = 20},
  [916] = {.lex_state = 0, .external_lex_state = 5},
  [917] = {.lex_state = 0, .external_lex_state = 5},
  [918] = {.lex_state = 0, .external_lex_state = 5},
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
  [930] = {.lex_state = 0, .external_lex_state = 5},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 20},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(3),
    [aux_sym_tag_name_token1] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [sym_tag_class] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_ruby] = ACTIONS(1),
    [anon_sym_javascript] = ACTIONS(1),
    [anon_sym_css] = ACTIONS(1),
    [anon_sym_sass] = ACTIONS(1),
    [anon_sym_scss] = ACTIONS(1),
    [anon_sym_less] = ACTIONS(1),
    [anon_sym_coffee] = ACTIONS(1),
    [anon_sym_markdown] = ACTIONS(1),
    [anon_sym_textile] = ACTIONS(1),
    [anon_sym_rdoc] = ACTIONS(1),
    [aux_sym_splat_parameters_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__ruby_multiline_token3] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_EQ_LT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym_string_start] = ACTIONS(1),
    [sym_string_content] = ACTIONS(1),
    [sym_string_end] = ACTIONS(1),
    [sym__comment] = ACTIONS(1),
    [sym__except] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(919),
    [sym__node] = STATE(2),
    [sym_tag] = STATE(2),
    [sym_tag_name] = STATE(163),
    [sym_splat_tags] = STATE(2),
    [sym__html] = STATE(2),
    [sym_html_opening_tag] = STATE(218),
    [sym_html_closing_tag] = STATE(218),
    [sym__html_line] = STATE(651),
    [sym_injector] = STATE(2),
    [sym_ruby_interpolation] = STATE(218),
    [sym_directive] = STATE(650),
    [sym_directive_block] = STATE(2),
    [sym_text_block] = STATE(2),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_tag_repeat1] = STATE(152),
    [aux_sym__html_line_repeat1] = STATE(218),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_NULL] = ACTIONS(7),
    [aux_sym_tag_name_token1] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym_tag_class] = ACTIONS(13),
    [sym_tag_id] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_ruby] = ACTIONS(21),
    [anon_sym_javascript] = ACTIONS(23),
    [anon_sym_css] = ACTIONS(25),
    [anon_sym_sass] = ACTIONS(27),
    [anon_sym_scss] = ACTIONS(29),
    [anon_sym_less] = ACTIONS(31),
    [anon_sym_coffee] = ACTIONS(33),
    [anon_sym_markdown] = ACTIONS(35),
    [anon_sym_textile] = ACTIONS(37),
    [anon_sym_rdoc] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_EQ_EQ] = ACTIONS(45),
    [anon_sym_EQ_GT] = ACTIONS(45),
    [anon_sym_EQ_LT] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(9), 1,
      aux_sym_tag_name_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      sym_tag_class,
    ACTIONS(15), 1,
      sym_tag_id,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(21), 1,
      anon_sym_ruby,
    ACTIONS(23), 1,
      anon_sym_javascript,
    ACTIONS(25), 1,
      anon_sym_css,
    ACTIONS(27), 1,
      anon_sym_sass,
    ACTIONS(29), 1,
      anon_sym_scss,
    ACTIONS(31), 1,
      anon_sym_less,
    ACTIONS(33), 1,
      anon_sym_coffee,
    ACTIONS(35), 1,
      anon_sym_markdown,
    ACTIONS(37), 1,
      anon_sym_textile,
    ACTIONS(39), 1,
      anon_sym_rdoc,
    ACTIONS(41), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_NULL,
    STATE(152), 1,
      aux_sym_tag_repeat1,
    STATE(163), 1,
      sym_tag_name,
    STATE(650), 1,
      sym_directive,
    STATE(651), 1,
      sym__html_line,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    ACTIONS(47), 2,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(45), 3,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
    STATE(218), 4,
      sym_html_opening_tag,
      sym_html_closing_tag,
      sym_ruby_interpolation,
      aux_sym__html_line_repeat1,
    STATE(5), 9,
      sym__node,
      sym_tag,
      sym_splat_tags,
      sym__html,
      sym_injector,
      sym_directive_block,
      sym_text_block,
      sym_comment,
      aux_sym_source_file_repeat1,
  [100] = 28,
    ACTIONS(9), 1,
      aux_sym_tag_name_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      sym_tag_class,
    ACTIONS(15), 1,
      sym_tag_id,
    ACTIONS(41), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_ruby,
    ACTIONS(61), 1,
      anon_sym_javascript,
    ACTIONS(63), 1,
      anon_sym_css,
    ACTIONS(65), 1,
      anon_sym_sass,
    ACTIONS(67), 1,
      anon_sym_scss,
    ACTIONS(69), 1,
      anon_sym_less,
    ACTIONS(71), 1,
      anon_sym_coffee,
    ACTIONS(73), 1,
      anon_sym_markdown,
    ACTIONS(75), 1,
      anon_sym_textile,
    ACTIONS(77), 1,
      anon_sym_rdoc,
    ACTIONS(81), 1,
      sym__dedent,
    STATE(153), 1,
      aux_sym_tag_repeat1,
    STATE(163), 1,
      sym_tag_name,
    STATE(603), 1,
      sym_directive,
    STATE(606), 1,
      sym__html_line,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    ACTIONS(79), 2,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(45), 3,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
    STATE(218), 4,
      sym_html_opening_tag,
      sym_html_closing_tag,
      sym_ruby_interpolation,
      aux_sym__html_line_repeat1,
    STATE(4), 9,
      sym__node,
      sym_tag,
      sym_splat_tags,
      sym__html,
      sym_injector,
      sym_directive_block,
      sym_text_block,
      sym_comment,
      aux_sym_source_file_repeat1,
  [200] = 28,
    ACTIONS(83), 1,
      anon_sym_NULL,
    ACTIONS(86), 1,
      aux_sym_tag_name_token1,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(92), 1,
      sym_tag_class,
    ACTIONS(95), 1,
      sym_tag_id,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_ruby,
    ACTIONS(107), 1,
      anon_sym_javascript,
    ACTIONS(110), 1,
      anon_sym_css,
    ACTIONS(113), 1,
      anon_sym_sass,
    ACTIONS(116), 1,
      anon_sym_scss,
    ACTIONS(119), 1,
      anon_sym_less,
    ACTIONS(122), 1,
      anon_sym_coffee,
    ACTIONS(125), 1,
      anon_sym_markdown,
    ACTIONS(128), 1,
      anon_sym_textile,
    ACTIONS(131), 1,
      anon_sym_rdoc,
    ACTIONS(134), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(146), 1,
      sym__dedent,
    STATE(153), 1,
      aux_sym_tag_repeat1,
    STATE(163), 1,
      sym_tag_name,
    STATE(603), 1,
      sym_directive,
    STATE(606), 1,
      sym__html_line,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    ACTIONS(143), 2,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(140), 3,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
    STATE(218), 4,
      sym_html_opening_tag,
      sym_html_closing_tag,
      sym_ruby_interpolation,
      aux_sym__html_line_repeat1,
    STATE(4), 9,
      sym__node,
      sym_tag,
      sym_splat_tags,
      sym__html,
      sym_injector,
      sym_directive_block,
      sym_text_block,
      sym_comment,
      aux_sym_source_file_repeat1,
  [300] = 28,
    ACTIONS(86), 1,
      aux_sym_tag_name_token1,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(92), 1,
      sym_tag_class,
    ACTIONS(95), 1,
      sym_tag_id,
    ACTIONS(134), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      anon_sym_NULL,
    ACTIONS(151), 1,
      anon_sym_STAR,
    ACTIONS(154), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      anon_sym_ruby,
    ACTIONS(160), 1,
      anon_sym_javascript,
    ACTIONS(163), 1,
      anon_sym_css,
    ACTIONS(166), 1,
      anon_sym_sass,
    ACTIONS(169), 1,
      anon_sym_scss,
    ACTIONS(172), 1,
      anon_sym_less,
    ACTIONS(175), 1,
      anon_sym_coffee,
    ACTIONS(178), 1,
      anon_sym_markdown,
    ACTIONS(181), 1,
      anon_sym_textile,
    ACTIONS(184), 1,
      anon_sym_rdoc,
    STATE(152), 1,
      aux_sym_tag_repeat1,
    STATE(163), 1,
      sym_tag_name,
    STATE(650), 1,
      sym_directive,
    STATE(651), 1,
      sym__html_line,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    ACTIONS(187), 2,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(140), 3,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
    STATE(218), 4,
      sym_html_opening_tag,
      sym_html_closing_tag,
      sym_ruby_interpolation,
      aux_sym__html_line_repeat1,
    STATE(5), 9,
      sym__node,
      sym_tag,
      sym_splat_tags,
      sym__html,
      sym_injector,
      sym_directive_block,
      sym_text_block,
      sym_comment,
      aux_sym_source_file_repeat1,
  [400] = 27,
    ACTIONS(9), 1,
      aux_sym_tag_name_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      sym_tag_class,
    ACTIONS(15), 1,
      sym_tag_id,
    ACTIONS(41), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_ruby,
    ACTIONS(61), 1,
      anon_sym_javascript,
    ACTIONS(63), 1,
      anon_sym_css,
    ACTIONS(65), 1,
      anon_sym_sass,
    ACTIONS(67), 1,
      anon_sym_scss,
    ACTIONS(69), 1,
      anon_sym_less,
    ACTIONS(71), 1,
      anon_sym_coffee,
    ACTIONS(73), 1,
      anon_sym_markdown,
    ACTIONS(75), 1,
      anon_sym_textile,
    ACTIONS(77), 1,
      anon_sym_rdoc,
    ACTIONS(190), 1,
      anon_sym_NULL,
    STATE(153), 1,
      aux_sym_tag_repeat1,
    STATE(163), 1,
      sym_tag_name,
    STATE(603), 1,
      sym_directive,
    STATE(606), 1,
      sym__html_line,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    ACTIONS(79), 2,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(45), 3,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
    STATE(218), 4,
      sym_html_opening_tag,
      sym_html_closing_tag,
      sym_ruby_interpolation,
      aux_sym__html_line_repeat1,
    STATE(3), 9,
      sym__node,
      sym_tag,
      sym_splat_tags,
      sym__html,
      sym_injector,
      sym_directive_block,
      sym_text_block,
      sym_comment,
      aux_sym_source_file_repeat1,
  [497] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(192), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(194), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [531] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(198), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(200), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [565] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(202), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(204), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [599] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(206), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(208), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [633] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(202), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(204), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [667] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(202), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(204), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [701] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(202), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(204), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [735] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(202), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(204), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [769] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(210), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(212), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [803] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(202), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(204), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [837] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(210), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(212), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [871] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(202), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(204), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [905] = 3,
    ACTIONS(218), 1,
      sym__indent,
    ACTIONS(214), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(216), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [939] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(220), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(222), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [973] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(220), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(222), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1007] = 3,
    ACTIONS(218), 1,
      sym__indent,
    ACTIONS(224), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(226), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1041] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(198), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(200), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1075] = 3,
    ACTIONS(218), 1,
      sym__indent,
    ACTIONS(214), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(216), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1109] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(206), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(208), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1143] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(206), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(208), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1177] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(202), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(204), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1211] = 3,
    ACTIONS(232), 1,
      sym__indent,
    ACTIONS(228), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(230), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1245] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(220), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(222), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1279] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(220), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(222), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1313] = 3,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(238), 1,
      sym__free_text,
    ACTIONS(236), 25,
      anon_sym_NULL,
      aux_sym_tag_name_token1,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_POUND_LBRACE,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
  [1347] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(192), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(194), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1381] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(198), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(200), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1415] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(198), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(200), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1449] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(206), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(208), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1483] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(240), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(242), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1517] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(206), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(208), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1551] = 3,
    ACTIONS(234), 1,
      sym__dedent,
    ACTIONS(244), 1,
      sym__free_text,
    ACTIONS(236), 25,
      anon_sym_NULL,
      aux_sym_tag_name_token1,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_POUND_LBRACE,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
  [1585] = 3,
    ACTIONS(218), 1,
      sym__indent,
    ACTIONS(224), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(226), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1619] = 3,
    ACTIONS(232), 1,
      sym__indent,
    ACTIONS(228), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(230), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1653] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(246), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(248), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1687] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(246), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(248), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1721] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(206), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(208), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1755] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(250), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(252), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1789] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(240), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(242), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1823] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(250), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(252), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1857] = 2,
    ACTIONS(254), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(256), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1888] = 2,
    ACTIONS(220), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(222), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1919] = 2,
    ACTIONS(258), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(260), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1950] = 2,
    ACTIONS(262), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(264), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [1981] = 2,
    ACTIONS(266), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(268), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2012] = 2,
    ACTIONS(202), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(204), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2043] = 2,
    ACTIONS(270), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(272), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2074] = 2,
    ACTIONS(274), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(276), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2105] = 2,
    ACTIONS(278), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(280), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2136] = 2,
    ACTIONS(282), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(284), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2167] = 2,
    ACTIONS(286), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(288), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2198] = 2,
    ACTIONS(290), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(292), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2229] = 2,
    ACTIONS(258), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(260), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2260] = 2,
    ACTIONS(258), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(260), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2291] = 2,
    ACTIONS(294), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(296), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2322] = 2,
    ACTIONS(298), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(300), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2353] = 2,
    ACTIONS(274), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(276), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2384] = 2,
    ACTIONS(202), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(204), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2415] = 2,
    ACTIONS(302), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(304), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2446] = 2,
    ACTIONS(306), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(308), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2477] = 2,
    ACTIONS(214), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(216), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2508] = 2,
    ACTIONS(286), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(288), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2539] = 2,
    ACTIONS(310), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(312), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2570] = 2,
    ACTIONS(314), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(316), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2601] = 2,
    ACTIONS(302), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(304), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2632] = 2,
    ACTIONS(290), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(292), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2663] = 2,
    ACTIONS(318), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(320), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2694] = 2,
    ACTIONS(322), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(324), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2725] = 2,
    ACTIONS(278), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(280), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2756] = 2,
    ACTIONS(326), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(328), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2787] = 2,
    ACTIONS(330), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(332), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2818] = 2,
    ACTIONS(206), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(208), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2849] = 2,
    ACTIONS(318), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(320), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2880] = 2,
    ACTIONS(334), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(336), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2911] = 2,
    ACTIONS(338), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(340), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2942] = 2,
    ACTIONS(342), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(344), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [2973] = 2,
    ACTIONS(346), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(348), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3004] = 2,
    ACTIONS(350), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(352), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3035] = 2,
    ACTIONS(270), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(272), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3066] = 2,
    ACTIONS(354), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(356), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3097] = 2,
    ACTIONS(358), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(360), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3128] = 2,
    ACTIONS(298), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(300), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3159] = 2,
    ACTIONS(254), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(256), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3190] = 2,
    ACTIONS(362), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(364), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3221] = 2,
    ACTIONS(346), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(348), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3252] = 2,
    ACTIONS(326), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(328), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3283] = 2,
    ACTIONS(330), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(332), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3314] = 2,
    ACTIONS(342), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(344), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3345] = 2,
    ACTIONS(366), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(368), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3376] = 2,
    ACTIONS(370), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(372), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3407] = 2,
    ACTIONS(374), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(376), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3438] = 2,
    ACTIONS(258), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(260), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3469] = 2,
    ACTIONS(378), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(380), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3500] = 2,
    ACTIONS(382), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(384), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3531] = 2,
    ACTIONS(386), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(388), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3562] = 2,
    ACTIONS(390), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(392), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3593] = 2,
    ACTIONS(394), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(396), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3624] = 2,
    ACTIONS(398), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(400), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3655] = 2,
    ACTIONS(402), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(404), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3686] = 2,
    ACTIONS(254), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(256), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3717] = 2,
    ACTIONS(254), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(256), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3748] = 2,
    ACTIONS(406), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(408), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3779] = 2,
    ACTIONS(410), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(412), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3810] = 2,
    ACTIONS(206), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(208), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3841] = 2,
    ACTIONS(414), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(416), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3872] = 2,
    ACTIONS(414), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(416), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3903] = 2,
    ACTIONS(414), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(416), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3934] = 2,
    ACTIONS(414), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(416), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3965] = 2,
    ACTIONS(414), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(416), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [3996] = 2,
    ACTIONS(414), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(416), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4027] = 2,
    ACTIONS(254), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(256), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4058] = 2,
    ACTIONS(254), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(256), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4089] = 2,
    ACTIONS(254), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(256), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4120] = 2,
    ACTIONS(294), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(296), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4151] = 2,
    ACTIONS(362), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(364), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4182] = 2,
    ACTIONS(254), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(256), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4213] = 2,
    ACTIONS(334), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(336), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4244] = 2,
    ACTIONS(410), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(412), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4275] = 2,
    ACTIONS(202), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(204), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4306] = 2,
    ACTIONS(202), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(204), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4337] = 2,
    ACTIONS(406), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(408), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4368] = 2,
    ACTIONS(366), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(368), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4399] = 2,
    ACTIONS(358), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(360), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4430] = 2,
    ACTIONS(354), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(356), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4461] = 2,
    ACTIONS(350), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(352), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4492] = 2,
    ACTIONS(402), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(404), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4523] = 2,
    ACTIONS(282), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(284), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4554] = 2,
    ACTIONS(398), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(400), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4585] = 2,
    ACTIONS(322), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(324), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4616] = 2,
    ACTIONS(370), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(372), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4647] = 2,
    ACTIONS(306), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(308), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4678] = 2,
    ACTIONS(374), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(376), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4709] = 2,
    ACTIONS(266), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(268), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4740] = 2,
    ACTIONS(262), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(264), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4771] = 2,
    ACTIONS(338), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(340), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4802] = 2,
    ACTIONS(394), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(396), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4833] = 2,
    ACTIONS(220), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(222), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4864] = 2,
    ACTIONS(390), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(392), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4895] = 2,
    ACTIONS(314), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(316), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4926] = 2,
    ACTIONS(386), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(388), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4957] = 2,
    ACTIONS(214), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(216), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [4988] = 2,
    ACTIONS(378), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(380), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [5019] = 2,
    ACTIONS(382), 13,
      sym__dedent,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(384), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [5050] = 2,
    ACTIONS(310), 13,
      ts_builtin_sym_end,
      anon_sym_NULL,
      anon_sym_LT,
      sym_tag_class,
      sym_tag_id,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(312), 13,
      aux_sym_tag_name_token1,
      anon_sym_ruby,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_less,
      anon_sym_coffee,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_DASH,
      anon_sym_EQ,
  [5081] = 21,
    ACTIONS(9), 1,
      aux_sym_tag_name_token1,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(420), 1,
      sym_tag_class,
    ACTIONS(422), 1,
      sym_tag_id,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(426), 1,
      aux_sym_child_token1,
    ACTIONS(428), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(430), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(432), 1,
      aux_sym_splat_parameters_token1,
    ACTIONS(434), 1,
      sym__newline,
    STATE(156), 1,
      sym_wrapped_parameters,
    STATE(158), 1,
      aux_sym_tag_repeat1,
    STATE(163), 1,
      sym_tag_name,
    STATE(167), 1,
      sym_splat_parameters,
    STATE(168), 1,
      sym_floating_parameters,
    STATE(182), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(645), 1,
      sym_directive_inline,
    STATE(649), 1,
      sym_text_inline,
    STATE(730), 1,
      sym_directive,
    STATE(888), 1,
      sym_child,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5149] = 21,
    ACTIONS(9), 1,
      aux_sym_tag_name_token1,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(420), 1,
      sym_tag_class,
    ACTIONS(422), 1,
      sym_tag_id,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(426), 1,
      aux_sym_child_token1,
    ACTIONS(428), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(430), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(432), 1,
      aux_sym_splat_parameters_token1,
    ACTIONS(436), 1,
      sym__newline,
    STATE(158), 1,
      aux_sym_tag_repeat1,
    STATE(159), 1,
      sym_wrapped_parameters,
    STATE(163), 1,
      sym_tag_name,
    STATE(172), 1,
      sym_floating_parameters,
    STATE(173), 1,
      sym_splat_parameters,
    STATE(182), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(607), 1,
      sym_directive_inline,
    STATE(608), 1,
      sym_text_inline,
    STATE(730), 1,
      sym_directive,
    STATE(762), 1,
      sym_child,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5217] = 21,
    ACTIONS(9), 1,
      aux_sym_tag_name_token1,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(420), 1,
      sym_tag_class,
    ACTIONS(422), 1,
      sym_tag_id,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(426), 1,
      aux_sym_child_token1,
    ACTIONS(428), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(430), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(432), 1,
      aux_sym_splat_parameters_token1,
    ACTIONS(438), 1,
      sym__newline,
    STATE(157), 1,
      sym_wrapped_parameters,
    STATE(158), 1,
      aux_sym_tag_repeat1,
    STATE(163), 1,
      sym_tag_name,
    STATE(174), 1,
      sym_splat_parameters,
    STATE(175), 1,
      sym_floating_parameters,
    STATE(182), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(616), 1,
      sym_text_inline,
    STATE(618), 1,
      sym_directive_inline,
    STATE(730), 1,
      sym_directive,
    STATE(795), 1,
      sym_child,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5285] = 17,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(9), 1,
      aux_sym_tag_name_token1,
    ACTIONS(13), 1,
      sym_tag_class,
    ACTIONS(15), 1,
      sym_tag_id,
    ACTIONS(440), 1,
      anon_sym_ruby,
    ACTIONS(442), 1,
      anon_sym_javascript,
    ACTIONS(444), 1,
      anon_sym_css,
    ACTIONS(446), 1,
      anon_sym_sass,
    ACTIONS(448), 1,
      anon_sym_scss,
    ACTIONS(450), 1,
      anon_sym_less,
    ACTIONS(452), 1,
      anon_sym_coffee,
    ACTIONS(454), 1,
      anon_sym_markdown,
    ACTIONS(456), 1,
      anon_sym_textile,
    ACTIONS(458), 1,
      anon_sym_rdoc,
    STATE(151), 1,
      aux_sym_tag_repeat1,
    STATE(163), 1,
      sym_tag_name,
    STATE(823), 2,
      sym_tag,
      sym_injector,
  [5338] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(462), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_GT,
    ACTIONS(464), 3,
      sym__newline,
      aux_sym_wrapped_parameters_token1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(460), 11,
      aux_sym_tag_name_token1,
      sym_tag_class,
      sym_tag_id,
      anon_sym_COLON,
      aux_sym_child_token1,
      aux_sym_splat_parameters_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5365] = 12,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(466), 1,
      aux_sym_child_token1,
    ACTIONS(468), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(472), 1,
      sym__newline,
    STATE(214), 1,
      aux_sym__text,
    STATE(517), 1,
      sym_ruby_interpolation,
    STATE(635), 1,
      sym_directive_inline,
    STATE(730), 1,
      sym_directive,
    STATE(886), 1,
      sym_child,
    ACTIONS(470), 2,
      anon_sym_POUND,
      sym__free_text,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5407] = 12,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(466), 1,
      aux_sym_child_token1,
    ACTIONS(468), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(474), 1,
      sym__newline,
    STATE(203), 1,
      aux_sym__text,
    STATE(517), 1,
      sym_ruby_interpolation,
    STATE(636), 1,
      sym_directive_inline,
    STATE(730), 1,
      sym_directive,
    STATE(783), 1,
      sym_child,
    ACTIONS(470), 2,
      anon_sym_POUND,
      sym__free_text,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5449] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(476), 1,
      aux_sym_tag_name_token1,
    ACTIONS(479), 1,
      sym_tag_class,
    ACTIONS(482), 1,
      sym_tag_id,
    STATE(158), 1,
      aux_sym_tag_repeat1,
    STATE(163), 1,
      sym_tag_name,
    ACTIONS(487), 3,
      sym__newline,
      aux_sym_wrapped_parameters_token1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(485), 8,
      anon_sym_COLON,
      aux_sym_child_token1,
      aux_sym_splat_parameters_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5483] = 12,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(466), 1,
      aux_sym_child_token1,
    ACTIONS(468), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(489), 1,
      sym__newline,
    STATE(219), 1,
      aux_sym__text,
    STATE(517), 1,
      sym_ruby_interpolation,
    STATE(653), 1,
      sym_directive_inline,
    STATE(730), 1,
      sym_directive,
    STATE(893), 1,
      sym_child,
    ACTIONS(470), 2,
      anon_sym_POUND,
      sym__free_text,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5525] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    ACTIONS(497), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(501), 1,
      sym__newline,
    STATE(161), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
    ACTIONS(491), 8,
      aux_sym_tag_token1,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5558] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(505), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
    ACTIONS(511), 1,
      anon_sym_LBRACK,
    ACTIONS(514), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(517), 1,
      sym__newline,
    STATE(161), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
    ACTIONS(503), 8,
      aux_sym_tag_token1,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5591] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(521), 3,
      sym__newline,
      aux_sym_wrapped_parameters_token1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(519), 11,
      aux_sym_tag_name_token1,
      sym_tag_class,
      sym_tag_id,
      anon_sym_COLON,
      aux_sym_child_token1,
      aux_sym_splat_parameters_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5613] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(525), 3,
      sym__newline,
      aux_sym_wrapped_parameters_token1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(523), 11,
      aux_sym_tag_name_token1,
      sym_tag_class,
      sym_tag_id,
      anon_sym_COLON,
      aux_sym_child_token1,
      aux_sym_splat_parameters_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5635] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(529), 3,
      sym__newline,
      aux_sym_wrapped_parameters_token1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(527), 11,
      aux_sym_tag_name_token1,
      sym_tag_class,
      sym_tag_id,
      anon_sym_COLON,
      aux_sym_child_token1,
      aux_sym_splat_parameters_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5657] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(533), 3,
      sym__newline,
      aux_sym_wrapped_parameters_token1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(531), 11,
      aux_sym_tag_name_token1,
      sym_tag_class,
      sym_tag_id,
      anon_sym_COLON,
      aux_sym_child_token1,
      aux_sym_splat_parameters_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5679] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(537), 1,
      aux_sym_ruby_inline_token2,
    ACTIONS(539), 1,
      sym__newline,
    ACTIONS(535), 12,
      aux_sym_tag_token1,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5703] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(541), 1,
      aux_sym_tag_token1,
    ACTIONS(543), 1,
      aux_sym_child_token1,
    ACTIONS(545), 1,
      sym__newline,
    STATE(632), 1,
      sym_text_inline,
    STATE(633), 1,
      sym_directive_inline,
    STATE(730), 1,
      sym_directive,
    STATE(883), 1,
      sym_child,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5738] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(543), 1,
      aux_sym_child_token1,
    ACTIONS(547), 1,
      aux_sym_tag_token1,
    ACTIONS(549), 1,
      sym__newline,
    STATE(634), 1,
      sym_directive_inline,
    STATE(637), 1,
      sym_text_inline,
    STATE(730), 1,
      sym_directive,
    STATE(884), 1,
      sym_child,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5773] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(517), 1,
      sym__newline,
    ACTIONS(503), 12,
      aux_sym_tag_token1,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5794] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(553), 1,
      sym__newline,
    ACTIONS(551), 12,
      aux_sym_tag_token1,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5815] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(557), 1,
      sym__newline,
    ACTIONS(555), 12,
      aux_sym_tag_token1,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5836] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(543), 1,
      aux_sym_child_token1,
    ACTIONS(559), 1,
      aux_sym_tag_token1,
    ACTIONS(561), 1,
      sym__newline,
    STATE(647), 1,
      sym_text_inline,
    STATE(648), 1,
      sym_directive_inline,
    STATE(730), 1,
      sym_directive,
    STATE(895), 1,
      sym_child,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5871] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(543), 1,
      aux_sym_child_token1,
    ACTIONS(563), 1,
      aux_sym_tag_token1,
    ACTIONS(565), 1,
      sym__newline,
    STATE(643), 1,
      sym_text_inline,
    STATE(644), 1,
      sym_directive_inline,
    STATE(730), 1,
      sym_directive,
    STATE(899), 1,
      sym_child,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5906] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(543), 1,
      aux_sym_child_token1,
    ACTIONS(567), 1,
      aux_sym_tag_token1,
    ACTIONS(569), 1,
      sym__newline,
    STATE(601), 1,
      sym_directive_inline,
    STATE(602), 1,
      sym_text_inline,
    STATE(730), 1,
      sym_directive,
    STATE(779), 1,
      sym_child,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5941] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(543), 1,
      aux_sym_child_token1,
    ACTIONS(571), 1,
      aux_sym_tag_token1,
    ACTIONS(573), 1,
      sym__newline,
    STATE(624), 1,
      sym_directive_inline,
    STATE(626), 1,
      sym_text_inline,
    STATE(730), 1,
      sym_directive,
    STATE(780), 1,
      sym_child,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5976] = 9,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(575), 1,
      aux_sym_tag_name_token1,
    ACTIONS(577), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(579), 1,
      aux_sym_text_inline_token1,
    STATE(195), 1,
      sym_floating_parameter_pair,
    STATE(280), 1,
      sym_ruby_interpolation,
    STATE(669), 1,
      sym_directive,
    STATE(781), 1,
      sym_parameter_name,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6008] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(583), 1,
      sym__newline,
    ACTIONS(581), 10,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_POUND_LBRACE,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_POUND,
      sym__free_text,
  [6027] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(587), 1,
      sym__newline,
    ACTIONS(585), 10,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_POUND_LBRACE,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
      anon_sym_POUND,
      sym__free_text,
  [6046] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(594), 1,
      anon_sym_LBRACE,
    ACTIONS(597), 1,
      anon_sym_LBRACK,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      sym__newline,
    STATE(179), 1,
      aux_sym__ruby_multiline,
    STATE(199), 1,
      sym__ruby_fragment,
    ACTIONS(603), 3,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [6079] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(608), 1,
      anon_sym_COLON,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    ACTIONS(614), 1,
      anon_sym_LBRACK,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      sym__newline,
    STATE(179), 1,
      aux_sym__ruby_multiline,
    STATE(199), 1,
      sym__ruby_fragment,
    ACTIONS(618), 3,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [6112] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(626), 1,
      aux_sym_child_token1,
    STATE(181), 1,
      aux_sym_floating_parameters_repeat1,
    ACTIONS(622), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(624), 6,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6134] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(633), 1,
      aux_sym_child_token1,
    STATE(181), 1,
      aux_sym_floating_parameters_repeat1,
    ACTIONS(629), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(631), 6,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6156] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(636), 1,
      anon_sym_COLON,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
    ACTIONS(640), 1,
      anon_sym_LBRACE,
    ACTIONS(642), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(646), 1,
      sym_string_start,
    STATE(719), 1,
      sym_ruby_inline,
    STATE(720), 1,
      sym_parameter_value,
    STATE(210), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [6188] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(648), 1,
      anon_sym_COLON,
    ACTIONS(650), 1,
      anon_sym_LPAREN,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(658), 1,
      sym_string_start,
    STATE(611), 1,
      sym_ruby_inline,
    STATE(621), 1,
      sym_parameter_value,
    STATE(188), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [6220] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(660), 1,
      anon_sym_COLON,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    ACTIONS(664), 1,
      anon_sym_LBRACE,
    ACTIONS(666), 1,
      anon_sym_LBRACK,
    ACTIONS(668), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(670), 1,
      sym_string_start,
    STATE(623), 1,
      sym_ruby_inline,
    STATE(630), 1,
      sym_parameter_value,
    STATE(189), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [6252] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    ACTIONS(497), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(674), 1,
      sym_string_start,
    STATE(192), 1,
      sym_parameter_value,
    STATE(194), 1,
      sym_ruby_inline,
    STATE(160), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [6284] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(577), 1,
      anon_sym_POUND_LBRACE,
    STATE(280), 1,
      sym_ruby_interpolation,
    STATE(669), 1,
      sym_directive,
    ACTIONS(579), 2,
      aux_sym_tag_name_token1,
      aux_sym_text_inline_token1,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6308] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(501), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(650), 1,
      anon_sym_LPAREN,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(491), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
    STATE(198), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [6335] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(501), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    ACTIONS(664), 1,
      anon_sym_LBRACE,
    ACTIONS(666), 1,
      anon_sym_LBRACK,
    ACTIONS(668), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(491), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
    STATE(196), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [6362] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(553), 1,
      sym__newline,
    ACTIONS(551), 8,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [6379] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(557), 1,
      sym__newline,
    ACTIONS(555), 8,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [6396] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(676), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(678), 7,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6413] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(680), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(682), 7,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6430] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(684), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(686), 7,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6447] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(622), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(624), 7,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6464] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(517), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(688), 1,
      anon_sym_LPAREN,
    ACTIONS(691), 1,
      anon_sym_LBRACE,
    ACTIONS(694), 1,
      anon_sym_LBRACK,
    ACTIONS(697), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(503), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
    STATE(196), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [6491] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(700), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(702), 7,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6508] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(517), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(704), 1,
      anon_sym_LPAREN,
    ACTIONS(707), 1,
      anon_sym_LBRACE,
    ACTIONS(710), 1,
      anon_sym_LBRACK,
    ACTIONS(713), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(503), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
    STATE(198), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [6535] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(718), 1,
      sym__newline,
    ACTIONS(716), 8,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [6552] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(606), 1,
      sym__newline,
    ACTIONS(589), 8,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [6569] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    ACTIONS(614), 1,
      anon_sym_LBRACK,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym__ruby_multiline,
    STATE(199), 1,
      sym__ruby_fragment,
    ACTIONS(618), 3,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [6596] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(720), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(722), 7,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6613] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(468), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(724), 1,
      sym__newline,
    STATE(357), 1,
      aux_sym__text,
    STATE(517), 1,
      sym_ruby_interpolation,
    STATE(741), 1,
      sym_child,
    ACTIONS(470), 2,
      anon_sym_POUND,
      sym__free_text,
  [6639] = 5,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(726), 1,
      anon_sym_LT,
    ACTIONS(731), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(729), 2,
      sym__newline,
      anon_sym_COLON,
    STATE(204), 4,
      sym_html_opening_tag,
      sym_html_closing_tag,
      sym_ruby_interpolation,
      aux_sym__html_line_repeat1,
  [6659] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(468), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(734), 1,
      anon_sym_COLON,
    ACTIONS(736), 1,
      sym__newline,
    STATE(357), 1,
      aux_sym__text,
    STATE(517), 1,
      sym_ruby_interpolation,
    STATE(704), 1,
      sym__text_child,
    ACTIONS(470), 2,
      anon_sym_POUND,
      sym__free_text,
  [6685] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(739), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(743), 1,
      sym__newline,
    ACTIONS(745), 1,
      sym__dedent,
    STATE(253), 1,
      aux_sym__text,
    STATE(556), 1,
      sym_ruby_interpolation,
    STATE(897), 1,
      sym__text_child,
    ACTIONS(741), 2,
      anon_sym_POUND,
      sym__free_text,
  [6711] = 9,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(468), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(747), 1,
      anon_sym_COLON,
    ACTIONS(749), 1,
      aux_sym_child_token1,
    ACTIONS(751), 1,
      aux_sym_floating_parameter_pair_token1,
    ACTIONS(753), 1,
      aux_sym_text_inline_token2,
    ACTIONS(755), 1,
      sym__newline,
    STATE(212), 1,
      sym_ruby_interpolation,
    STATE(711), 1,
      sym__text_child,
  [6739] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(539), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(758), 1,
      aux_sym_ruby_inline_token2,
    ACTIONS(535), 6,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [6757] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(374), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
    ACTIONS(760), 3,
      aux_sym_child_token1,
      anon_sym_LBRACK,
      anon_sym_BANG,
  [6779] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
    ACTIONS(640), 1,
      anon_sym_LBRACE,
    ACTIONS(642), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(491), 2,
      anon_sym_COLON,
      aux_sym_child_token1,
    STATE(220), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [6803] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(468), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(766), 1,
      anon_sym_COLON,
    ACTIONS(768), 1,
      sym__newline,
    STATE(357), 1,
      aux_sym__text,
    STATE(517), 1,
      sym_ruby_interpolation,
    STATE(654), 1,
      sym__text_child,
    ACTIONS(470), 2,
      anon_sym_POUND,
      sym__free_text,
  [6829] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(468), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(771), 1,
      anon_sym_COLON,
    ACTIONS(773), 1,
      sym__newline,
    STATE(211), 1,
      aux_sym__text,
    STATE(517), 1,
      sym_ruby_interpolation,
    STATE(717), 1,
      sym__text_child,
    ACTIONS(470), 2,
      anon_sym_POUND,
      sym__free_text,
  [6855] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(468), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(766), 1,
      anon_sym_COLON,
    ACTIONS(768), 1,
      sym__newline,
    STATE(205), 1,
      aux_sym__text,
    STATE(517), 1,
      sym_ruby_interpolation,
    STATE(654), 1,
      sym__text_child,
    ACTIONS(470), 2,
      anon_sym_POUND,
      sym__free_text,
  [6881] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(468), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(776), 1,
      sym__newline,
    STATE(357), 1,
      aux_sym__text,
    STATE(517), 1,
      sym_ruby_interpolation,
    STATE(861), 1,
      sym_child,
    ACTIONS(470), 2,
      anon_sym_POUND,
      sym__free_text,
  [6907] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(739), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(778), 1,
      sym__newline,
    ACTIONS(780), 1,
      sym__dedent,
    STATE(253), 1,
      aux_sym__text,
    STATE(556), 1,
      sym_ruby_interpolation,
    STATE(830), 1,
      sym__text_child,
    ACTIONS(741), 2,
      anon_sym_POUND,
      sym__free_text,
  [6933] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(239), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
    ACTIONS(782), 3,
      aux_sym_child_token1,
      anon_sym_LBRACK,
      anon_sym_BANG,
  [6955] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(539), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(784), 1,
      aux_sym_ruby_inline_token2,
    ACTIONS(535), 6,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [6973] = 5,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(786), 2,
      sym__newline,
      anon_sym_COLON,
    STATE(204), 4,
      sym_html_opening_tag,
      sym_html_closing_tag,
      sym_ruby_interpolation,
      aux_sym__html_line_repeat1,
  [6993] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(468), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(788), 1,
      sym__newline,
    STATE(357), 1,
      aux_sym__text,
    STATE(517), 1,
      sym_ruby_interpolation,
    STATE(833), 1,
      sym_child,
    ACTIONS(470), 2,
      anon_sym_POUND,
      sym__free_text,
  [7019] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(790), 1,
      anon_sym_LPAREN,
    ACTIONS(793), 1,
      anon_sym_LBRACE,
    ACTIONS(796), 1,
      anon_sym_LBRACK,
    ACTIONS(799), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(503), 2,
      anon_sym_COLON,
      aux_sym_child_token1,
    STATE(220), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [7043] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(806), 1,
      aux_sym__ruby_fragment_token2,
    ACTIONS(808), 1,
      anon_sym_RBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    STATE(247), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [7066] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(812), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7089] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(814), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7112] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(816), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7135] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(818), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7158] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(820), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7181] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(822), 1,
      sym__dedent,
    STATE(255), 1,
      aux_sym__text,
    STATE(304), 1,
      aux_sym__comment_child_repeat1,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7204] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(830), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(832), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [7227] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(806), 1,
      aux_sym__ruby_fragment_token2,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(832), 1,
      anon_sym_RBRACE,
    STATE(247), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [7250] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(836), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    STATE(246), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [7273] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(842), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    STATE(776), 1,
      sym__comment_child,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7296] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(844), 1,
      anon_sym_LPAREN,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
    ACTIONS(848), 1,
      anon_sym_LBRACK,
    ACTIONS(850), 1,
      aux_sym_ruby_inline_token1,
    STATE(733), 1,
      sym_ruby_inline,
    STATE(254), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [7319] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(852), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    STATE(784), 1,
      sym__text_child,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7342] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(854), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(856), 1,
      anon_sym_RBRACK,
    STATE(228), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [7365] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
    ACTIONS(858), 1,
      aux_sym__ruby_fragment_token2,
    STATE(229), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [7388] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
    ACTIONS(860), 1,
      aux_sym__ruby_fragment_token1,
    STATE(230), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [7411] = 8,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(862), 1,
      aux_sym_tag_name_token1,
    ACTIONS(864), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(866), 1,
      aux_sym_splat_parameters_token1,
    STATE(582), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(590), 1,
      sym_parameter_name,
    STATE(619), 1,
      sym_wrapped_parameter_pair,
    STATE(787), 1,
      sym_splat_parameters,
  [7436] = 8,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(864), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(868), 1,
      aux_sym_tag_name_token1,
    ACTIONS(870), 1,
      aux_sym_splat_parameters_token1,
    STATE(580), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(594), 1,
      sym_parameter_name,
    STATE(610), 1,
      sym_wrapped_parameter_pair,
    STATE(788), 1,
      sym_splat_parameters,
  [7461] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(872), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    STATE(789), 1,
      sym__comment_child,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7484] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(557), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(555), 6,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7499] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(553), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(551), 6,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7514] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(557), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(555), 6,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7529] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(553), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(551), 6,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7544] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(517), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(503), 6,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7559] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(517), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(503), 6,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7574] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(874), 1,
      anon_sym_LPAREN,
    ACTIONS(877), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    ACTIONS(882), 1,
      anon_sym_LBRACE,
    ACTIONS(885), 1,
      anon_sym_LBRACK,
    STATE(246), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [7597] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(888), 1,
      anon_sym_LPAREN,
    ACTIONS(891), 1,
      anon_sym_LBRACE,
    ACTIONS(894), 1,
      aux_sym__ruby_fragment_token2,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
    ACTIONS(899), 1,
      anon_sym_LBRACK,
    STATE(247), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [7620] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(902), 1,
      anon_sym_LPAREN,
    ACTIONS(905), 1,
      anon_sym_LBRACE,
    ACTIONS(908), 1,
      anon_sym_LBRACK,
    ACTIONS(911), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(914), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [7643] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(916), 1,
      aux_sym_ruby_inline_token2,
    ACTIONS(535), 6,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7658] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(517), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(918), 1,
      anon_sym_LPAREN,
    ACTIONS(921), 1,
      anon_sym_LBRACE,
    ACTIONS(924), 1,
      anon_sym_LBRACK,
    ACTIONS(927), 1,
      aux_sym_ruby_inline_token1,
    STATE(250), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [7681] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(501), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(930), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      anon_sym_LBRACE,
    ACTIONS(934), 1,
      anon_sym_LBRACK,
    ACTIONS(936), 1,
      aux_sym_ruby_inline_token1,
    STATE(250), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [7704] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(517), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(938), 1,
      anon_sym_LPAREN,
    ACTIONS(941), 1,
      anon_sym_LBRACE,
    ACTIONS(944), 1,
      anon_sym_LBRACK,
    ACTIONS(947), 1,
      aux_sym_ruby_inline_token1,
    STATE(252), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [7727] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(950), 1,
      anon_sym_POUND_LBRACE,
    STATE(253), 1,
      aux_sym__text,
    STATE(556), 1,
      sym_ruby_interpolation,
    ACTIONS(953), 2,
      anon_sym_POUND,
      sym__free_text,
    ACTIONS(956), 2,
      sym__newline,
      sym__dedent,
  [7748] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(501), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(844), 1,
      anon_sym_LPAREN,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
    ACTIONS(848), 1,
      anon_sym_LBRACK,
    ACTIONS(850), 1,
      aux_sym_ruby_inline_token1,
    STATE(252), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [7771] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(958), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    STATE(595), 1,
      sym__comment_child,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7794] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(960), 1,
      sym__dedent,
    STATE(255), 1,
      aux_sym__text,
    STATE(304), 1,
      aux_sym__comment_child_repeat1,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7817] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(962), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7840] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(964), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7863] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(966), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7886] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(968), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7909] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(970), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7932] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(972), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7955] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(974), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [7978] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(976), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8001] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(978), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8024] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(980), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8047] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(806), 1,
      aux_sym__ruby_fragment_token2,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(982), 1,
      anon_sym_RBRACE,
    STATE(247), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [8070] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(984), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8093] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(986), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8116] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(988), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8139] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(990), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8162] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(992), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8185] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(994), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8208] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8231] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(998), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    STATE(288), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [8254] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1000), 1,
      anon_sym_RBRACE,
    ACTIONS(1002), 1,
      aux_sym__ruby_fragment_token2,
    STATE(289), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [8277] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(1000), 1,
      anon_sym_RBRACK,
    ACTIONS(1004), 1,
      aux_sym__ruby_fragment_token3,
    STATE(290), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [8300] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1006), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8323] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(930), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      anon_sym_LBRACE,
    ACTIONS(934), 1,
      anon_sym_LBRACK,
    ACTIONS(936), 1,
      aux_sym_ruby_inline_token1,
    STATE(733), 1,
      sym_ruby_inline,
    STATE(251), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [8346] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(468), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(747), 1,
      anon_sym_COLON,
    ACTIONS(749), 1,
      aux_sym_child_token1,
    ACTIONS(753), 1,
      aux_sym_text_inline_token2,
    ACTIONS(755), 1,
      sym__newline,
    STATE(212), 1,
      sym_ruby_interpolation,
    STATE(711), 1,
      sym__text_child,
  [8371] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(1008), 1,
      anon_sym_LPAREN,
    ACTIONS(1011), 1,
      anon_sym_LBRACE,
    ACTIONS(1014), 1,
      anon_sym_LBRACK,
    ACTIONS(1017), 1,
      aux_sym_ruby_inline_token1,
    STATE(281), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [8394] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1020), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8417] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(830), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(982), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [8440] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1022), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8463] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1024), 1,
      anon_sym_COLON,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(944), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [8486] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1032), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8509] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(836), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    STATE(246), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [8532] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(836), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1034), 1,
      anon_sym_RPAREN,
    STATE(246), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [8555] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(806), 1,
      aux_sym__ruby_fragment_token2,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1034), 1,
      anon_sym_RBRACE,
    STATE(247), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [8578] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(830), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(1034), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [8601] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1036), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8624] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1038), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8647] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1040), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8670] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1042), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8693] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1044), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8716] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1046), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8739] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1048), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8762] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1050), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8785] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1052), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8808] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1054), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8831] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1056), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8854] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1058), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8877] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1060), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8900] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1062), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1068), 1,
      sym__dedent,
    STATE(255), 1,
      aux_sym__text,
    STATE(304), 1,
      aux_sym__comment_child_repeat1,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(1065), 2,
      anon_sym_POUND,
      sym__free_text,
  [8923] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1070), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8946] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1072), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [8969] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1074), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1080), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(1077), 2,
      anon_sym_POUND,
      sym__free_text,
  [8992] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1082), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [9015] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1084), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
    STATE(313), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [9038] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1086), 1,
      anon_sym_RBRACE,
    ACTIONS(1088), 1,
      aux_sym__ruby_fragment_token2,
    STATE(315), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [9061] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1090), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [9084] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(1086), 1,
      anon_sym_RBRACK,
    ACTIONS(1092), 1,
      aux_sym__ruby_fragment_token3,
    STATE(316), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [9107] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(836), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
    STATE(246), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [9130] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1096), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [9153] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(806), 1,
      aux_sym__ruby_fragment_token2,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1094), 1,
      anon_sym_RBRACE,
    STATE(247), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [9176] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(830), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(1094), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [9199] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1098), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [9222] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1100), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(1102), 1,
      anon_sym_RPAREN,
    STATE(322), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [9245] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1102), 1,
      anon_sym_RBRACE,
    ACTIONS(1104), 1,
      aux_sym__ruby_fragment_token2,
    STATE(221), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [9268] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1106), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [9291] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(1102), 1,
      anon_sym_RBRACK,
    ACTIONS(1108), 1,
      aux_sym__ruby_fragment_token3,
    STATE(324), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [9314] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(836), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    STATE(246), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [9337] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1110), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [9360] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(808), 1,
      anon_sym_RBRACK,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(830), 1,
      aux_sym__ruby_fragment_token3,
    STATE(248), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [9383] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1112), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    STATE(329), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [9406] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1116), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [9429] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1114), 1,
      anon_sym_RBRACE,
    ACTIONS(1118), 1,
      aux_sym__ruby_fragment_token2,
    STATE(330), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [9452] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(1114), 1,
      anon_sym_RBRACK,
    ACTIONS(1120), 1,
      aux_sym__ruby_fragment_token3,
    STATE(331), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [9475] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(836), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    STATE(246), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [9498] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(806), 1,
      aux_sym__ruby_fragment_token2,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1122), 1,
      anon_sym_RBRACE,
    STATE(247), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [9521] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(830), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(1122), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [9544] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1124), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
    STATE(336), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [9567] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1128), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    STATE(799), 1,
      sym__comment_child,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [9590] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1126), 1,
      anon_sym_RBRACE,
    ACTIONS(1130), 1,
      aux_sym__ruby_fragment_token2,
    STATE(337), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [9613] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(1126), 1,
      anon_sym_RBRACK,
    ACTIONS(1132), 1,
      aux_sym__ruby_fragment_token3,
    STATE(338), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [9636] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(836), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(246), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [9659] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(806), 1,
      aux_sym__ruby_fragment_token2,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1134), 1,
      anon_sym_RBRACE,
    STATE(247), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [9682] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(830), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(1134), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [9705] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1136), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    STATE(343), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [9728] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1138), 1,
      anon_sym_RBRACE,
    ACTIONS(1140), 1,
      aux_sym__ruby_fragment_token2,
    STATE(344), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [9751] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(1138), 1,
      anon_sym_RBRACK,
    ACTIONS(1142), 1,
      aux_sym__ruby_fragment_token3,
    STATE(345), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [9774] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    ACTIONS(497), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      aux_sym_ruby_inline_token1,
    STATE(193), 1,
      sym_ruby_inline,
    STATE(160), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [9797] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(836), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1144), 1,
      anon_sym_RPAREN,
    STATE(246), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [9820] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(806), 1,
      aux_sym__ruby_fragment_token2,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1144), 1,
      anon_sym_RBRACE,
    STATE(247), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [9843] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(830), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(1144), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [9866] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1146), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    STATE(887), 1,
      sym__text_child,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [9889] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1148), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(354), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [9912] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    ACTIONS(1152), 1,
      anon_sym_LPAREN,
    ACTIONS(1154), 1,
      anon_sym_LBRACE,
    ACTIONS(1156), 1,
      anon_sym_LBRACK,
    ACTIONS(1158), 1,
      aux_sym_ruby_inline_token1,
    STATE(281), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [9935] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1150), 1,
      anon_sym_RBRACE,
    ACTIONS(1160), 1,
      aux_sym__ruby_fragment_token2,
    STATE(355), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [9958] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(1150), 1,
      anon_sym_RBRACK,
    ACTIONS(1162), 1,
      aux_sym__ruby_fragment_token3,
    STATE(356), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [9981] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(1164), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(1166), 1,
      anon_sym_RBRACK,
    STATE(283), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [10004] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1166), 1,
      anon_sym_RBRACE,
    ACTIONS(1168), 1,
      aux_sym__ruby_fragment_token2,
    STATE(267), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [10027] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    ACTIONS(1170), 1,
      aux_sym__ruby_fragment_token1,
    STATE(287), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [10050] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(836), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(246), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [10073] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(806), 1,
      aux_sym__ruby_fragment_token2,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1172), 1,
      anon_sym_RBRACE,
    STATE(247), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [10096] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(830), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(1172), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [10119] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(956), 1,
      sym__newline,
    ACTIONS(1174), 1,
      anon_sym_COLON,
    ACTIONS(1176), 1,
      anon_sym_POUND_LBRACE,
    STATE(357), 1,
      aux_sym__text,
    STATE(517), 1,
      sym_ruby_interpolation,
    ACTIONS(1179), 2,
      anon_sym_POUND,
      sym__free_text,
  [10142] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1182), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(1184), 1,
      anon_sym_RPAREN,
    STATE(361), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [10165] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1184), 1,
      anon_sym_RBRACE,
    ACTIONS(1186), 1,
      aux_sym__ruby_fragment_token2,
    STATE(362), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [10188] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(1184), 1,
      anon_sym_RBRACK,
    ACTIONS(1188), 1,
      aux_sym__ruby_fragment_token3,
    STATE(363), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [10211] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(836), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1190), 1,
      anon_sym_RPAREN,
    STATE(246), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [10234] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(806), 1,
      aux_sym__ruby_fragment_token2,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1190), 1,
      anon_sym_RBRACE,
    STATE(247), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [10257] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(830), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(1190), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [10280] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1192), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(1194), 1,
      anon_sym_RPAREN,
    STATE(367), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [10303] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1194), 1,
      anon_sym_RBRACE,
    ACTIONS(1196), 1,
      aux_sym__ruby_fragment_token2,
    STATE(368), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [10326] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(1194), 1,
      anon_sym_RBRACK,
    ACTIONS(1198), 1,
      aux_sym__ruby_fragment_token3,
    STATE(369), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [10349] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
    ACTIONS(836), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(246), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [10372] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(806), 1,
      aux_sym__ruby_fragment_token2,
    ACTIONS(810), 1,
      anon_sym_LBRACK,
    ACTIONS(1200), 1,
      anon_sym_RBRACE,
    STATE(247), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [10395] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(824), 1,
      anon_sym_LPAREN,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    ACTIONS(830), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(1200), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [10418] = 8,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(862), 1,
      aux_sym_tag_name_token1,
    ACTIONS(866), 1,
      aux_sym_splat_parameters_token1,
    ACTIONS(1202), 1,
      aux_sym_wrapped_parameters_token5,
    STATE(529), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(590), 1,
      sym_parameter_name,
    STATE(619), 1,
      sym_wrapped_parameter_pair,
    STATE(740), 1,
      sym_splat_parameters,
  [10443] = 8,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(868), 1,
      aux_sym_tag_name_token1,
    ACTIONS(870), 1,
      aux_sym_splat_parameters_token1,
    ACTIONS(1202), 1,
      aux_sym_wrapped_parameters_token3,
    STATE(531), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(594), 1,
      sym_parameter_name,
    STATE(610), 1,
      sym_wrapped_parameter_pair,
    STATE(745), 1,
      sym_splat_parameters,
  [10468] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1152), 1,
      anon_sym_LPAREN,
    ACTIONS(1154), 1,
      anon_sym_LBRACE,
    ACTIONS(1156), 1,
      anon_sym_LBRACK,
    ACTIONS(1158), 1,
      aux_sym_ruby_inline_token1,
    STATE(801), 1,
      sym_ruby_inline,
    STATE(348), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [10491] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1152), 1,
      anon_sym_LPAREN,
    ACTIONS(1154), 1,
      anon_sym_LBRACE,
    ACTIONS(1156), 1,
      anon_sym_LBRACK,
    ACTIONS(1158), 1,
      aux_sym_ruby_inline_token1,
    STATE(890), 1,
      sym_ruby_inline,
    STATE(348), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [10514] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1204), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    STATE(756), 1,
      sym__comment_child,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [10537] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1152), 1,
      anon_sym_LPAREN,
    ACTIONS(1154), 1,
      anon_sym_LBRACE,
    ACTIONS(1156), 1,
      anon_sym_LBRACK,
    ACTIONS(1158), 1,
      aux_sym_ruby_inline_token1,
    STATE(738), 1,
      sym_ruby_inline,
    STATE(348), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [10560] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1152), 1,
      anon_sym_LPAREN,
    ACTIONS(1154), 1,
      anon_sym_LBRACE,
    ACTIONS(1156), 1,
      anon_sym_LBRACK,
    ACTIONS(1158), 1,
      aux_sym_ruby_inline_token1,
    STATE(747), 1,
      sym_ruby_inline,
    STATE(348), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [10583] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1206), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(923), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10606] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1208), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(924), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10629] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1210), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(925), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10652] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1212), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(926), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10675] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1214), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(927), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10698] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1216), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(928), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10721] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1152), 1,
      anon_sym_LPAREN,
    ACTIONS(1154), 1,
      anon_sym_LBRACE,
    ACTIONS(1156), 1,
      anon_sym_LBRACK,
    ACTIONS(1158), 1,
      aux_sym_ruby_inline_token1,
    STATE(767), 1,
      sym_ruby_inline,
    STATE(348), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [10744] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1218), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(939), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10767] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1220), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(940), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10790] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1222), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(941), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10813] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1224), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(769), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10836] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1226), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(770), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10859] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1228), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(771), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10882] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1230), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(772), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10905] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1232), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(773), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10928] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1234), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(775), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10951] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1236), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(942), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10974] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1026), 1,
      aux_sym_child_token1,
    ACTIONS(1028), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(1030), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1238), 1,
      anon_sym_COLON,
    STATE(605), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(943), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10997] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1240), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11017] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(539), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(1242), 1,
      aux_sym_ruby_inline_token2,
    ACTIONS(535), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [11033] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(308), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11053] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(306), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11073] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(305), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11093] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(303), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11113] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(302), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11133] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(301), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11153] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(300), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11173] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(299), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11193] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(298), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11213] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(297), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11233] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(296), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11253] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(295), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11273] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(294), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11293] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(293), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11313] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(292), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11333] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(291), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11353] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(273), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11373] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(272), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11393] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(271), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11413] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(269), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11433] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(268), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11453] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(259), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11473] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(265), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11493] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(264), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11513] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(263), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11533] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(261), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11553] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1244), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11573] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(260), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11593] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1246), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11613] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(323), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11633] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1248), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11653] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(320), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11673] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1250), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11693] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(317), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11713] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1252), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11733] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(314), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11753] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1254), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11773] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(311), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11793] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1256), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11813] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(222), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11833] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(223), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11853] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(224), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11873] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(225), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11893] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(226), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11913] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(227), 1,
      aux_sym__comment_child_repeat1,
    STATE(255), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11933] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1258), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [11953] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1260), 1,
      aux_sym_ruby_inline_token2,
    ACTIONS(535), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [11967] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(956), 1,
      sym__newline,
    ACTIONS(1262), 1,
      anon_sym_POUND_LBRACE,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(1265), 2,
      anon_sym_POUND,
      sym__free_text,
  [11987] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1268), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12007] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(539), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(1270), 1,
      aux_sym_ruby_inline_token2,
    ACTIONS(535), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [12023] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1272), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12043] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1274), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12063] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1276), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12083] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1278), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12103] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1280), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12123] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1282), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12143] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1284), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12163] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1286), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12183] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1288), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12203] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1290), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12223] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1292), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12243] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1294), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12263] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1296), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12283] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1298), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12303] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(43), 1,
      anon_sym_EQ,
    STATE(669), 1,
      sym_directive,
    ACTIONS(45), 4,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [12319] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1300), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12339] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1302), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12359] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1304), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12379] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(255), 1,
      aux_sym__text,
    STATE(256), 1,
      aux_sym__comment_child_repeat1,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12399] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1306), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12419] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(257), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12439] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1308), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12459] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1310), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12479] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1312), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12499] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(258), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12519] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1314), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12539] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1316), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12559] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1318), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12579] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1320), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12599] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1322), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12619] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1324), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12639] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1326), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12659] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1328), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12679] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1330), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12699] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1332), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12719] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1334), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12739] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(262), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12759] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1336), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12779] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(266), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12799] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1338), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12819] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(270), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12839] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1340), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12859] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(274), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12879] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1342), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12899] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(278), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12919] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(555), 6,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [12931] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(551), 6,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [12943] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(282), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12963] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1344), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [12983] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(284), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13003] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1346), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13023] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(286), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13043] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1348), 1,
      sym__newline,
    STATE(444), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13063] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(326), 1,
      aux_sym_injector_repeat1,
    STATE(442), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13083] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(503), 6,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13095] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(555), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
      anon_sym_RBRACK,
  [13106] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(474), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13123] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(346), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13140] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(551), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13151] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(497), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13168] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(555), 5,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [13179] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(333), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13196] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1352), 1,
      sym__newline,
    ACTIONS(1350), 4,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_POUND_LBRACE,
      aux_sym_text_inline_token2,
  [13209] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(517), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(503), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13222] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(551), 5,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [13233] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(495), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13250] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(435), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13267] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(490), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13284] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(488), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13301] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(486), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13318] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1356), 1,
      sym__newline,
    ACTIONS(1354), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [13331] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(445), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13348] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(484), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13365] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(551), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [13376] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(517), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(503), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13389] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1352), 1,
      sym__newline,
    ACTIONS(1350), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [13402] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(447), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13419] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(555), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [13430] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(395), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13447] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(448), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13464] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(449), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13481] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(450), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13498] = 6,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(862), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1358), 1,
      aux_sym_wrapped_parameters_token5,
    STATE(553), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(590), 1,
      sym_parameter_name,
    STATE(619), 1,
      sym_wrapped_parameter_pair,
  [13517] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(551), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
      anon_sym_RBRACK,
  [13528] = 6,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(868), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1358), 1,
      aux_sym_wrapped_parameters_token3,
    STATE(555), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(594), 1,
      sym_parameter_name,
    STATE(610), 1,
      sym_wrapped_parameter_pair,
  [13547] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1352), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(1350), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [13560] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(451), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13577] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(452), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13594] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(453), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13611] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(739), 1,
      anon_sym_POUND_LBRACE,
    STATE(215), 1,
      aux_sym__text,
    STATE(556), 1,
      sym_ruby_interpolation,
    ACTIONS(741), 2,
      anon_sym_POUND,
      sym__free_text,
  [13628] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(555), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13639] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(454), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13656] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(455), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13673] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(456), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13690] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(457), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13707] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(472), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13724] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(553), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(551), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13737] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(458), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13754] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(423), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13771] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(557), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(555), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13784] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(553), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(551), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13797] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(557), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(555), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13810] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(459), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13827] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(460), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13844] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(469), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13861] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(503), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13872] = 6,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1360), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1363), 1,
      aux_sym_wrapped_parameters_token5,
    STATE(553), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(590), 1,
      sym_parameter_name,
    STATE(619), 1,
      sym_wrapped_parameter_pair,
  [13891] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(425), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13908] = 6,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1363), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(1365), 1,
      aux_sym_tag_name_token1,
    STATE(555), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(594), 1,
      sym_parameter_name,
    STATE(610), 1,
      sym_wrapped_parameter_pair,
  [13927] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1356), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(1354), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [13940] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(233), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [13957] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1068), 1,
      sym__dedent,
    ACTIONS(1370), 1,
      sym__indent,
    ACTIONS(1368), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [13972] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(739), 1,
      anon_sym_POUND_LBRACE,
    STATE(206), 1,
      aux_sym__text,
    STATE(556), 1,
      sym_ruby_interpolation,
    ACTIONS(741), 2,
      anon_sym_POUND,
      sym__free_text,
  [13989] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(231), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14006] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(482), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14023] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(427), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14040] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(462), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14057] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(481), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14074] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(463), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14091] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(464), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14108] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(429), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14125] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(480), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14142] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(466), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14159] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(468), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14176] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(470), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14193] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(479), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14210] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(433), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14227] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(431), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14244] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(478), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14261] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(477), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14278] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(473), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14295] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(499), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14312] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(475), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14329] = 6,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(868), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1372), 1,
      aux_sym_wrapped_parameters_token3,
    STATE(555), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(594), 1,
      sym_parameter_name,
    STATE(610), 1,
      sym_wrapped_parameter_pair,
  [14348] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(762), 1,
      anon_sym_POUND_LBRACE,
    STATE(476), 1,
      aux_sym__text,
    STATE(588), 1,
      sym_ruby_interpolation,
    ACTIONS(764), 2,
      anon_sym_POUND,
      sym__free_text,
  [14365] = 6,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(862), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1372), 1,
      aux_sym_wrapped_parameters_token5,
    STATE(553), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(590), 1,
      sym_parameter_name,
    STATE(619), 1,
      sym_wrapped_parameter_pair,
  [14384] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1080), 1,
      sym__dedent,
    ACTIONS(1374), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [14396] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1352), 4,
      sym__newline,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
  [14406] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1376), 4,
      sym__newline,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
  [14416] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1378), 4,
      sym__newline,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
  [14426] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1380), 4,
      sym__newline,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
  [14436] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1356), 1,
      sym__newline,
    ACTIONS(1354), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [14448] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1352), 1,
      sym__newline,
    ACTIONS(1350), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [14460] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1384), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(1386), 1,
      aux_sym_floating_parameter_pair_token1,
    ACTIONS(1382), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14474] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(751), 2,
      aux_sym_wrapped_parameters_token5,
      aux_sym_floating_parameter_pair_token1,
    ACTIONS(1388), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14486] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(751), 2,
      aux_sym_wrapped_parameters_token3,
      aux_sym_floating_parameter_pair_token1,
    ACTIONS(1388), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14498] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1392), 1,
      sym__dedent,
    ACTIONS(1390), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [14510] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1384), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(1394), 1,
      aux_sym_floating_parameter_pair_token1,
    ACTIONS(1382), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14524] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1068), 1,
      sym__dedent,
    ACTIONS(1368), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [14536] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1396), 4,
      sym__newline,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
  [14546] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(624), 1,
      anon_sym_COLON,
    ACTIONS(1398), 1,
      aux_sym_child_token1,
    STATE(597), 1,
      aux_sym_floating_parameters_repeat1,
  [14559] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(700), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(702), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14570] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1403), 1,
      sym__newline,
    STATE(806), 1,
      sym_child,
  [14583] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1405), 1,
      aux_sym_tag_name_token1,
    STATE(195), 1,
      sym_floating_parameter_pair,
    STATE(781), 1,
      sym_parameter_name,
  [14596] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1407), 1,
      sym__newline,
    STATE(814), 1,
      sym_child,
  [14609] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1409), 1,
      sym__newline,
    STATE(826), 1,
      sym_child,
  [14622] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1411), 1,
      sym__newline,
    STATE(798), 1,
      sym_child,
  [14635] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1405), 1,
      aux_sym_tag_name_token1,
    STATE(727), 1,
      sym_floating_parameter_pair,
    STATE(750), 1,
      sym_parameter_name,
  [14648] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(631), 1,
      anon_sym_COLON,
    ACTIONS(1413), 1,
      aux_sym_child_token1,
    STATE(597), 1,
      aux_sym_floating_parameters_repeat1,
  [14661] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1415), 1,
      sym__newline,
    STATE(734), 1,
      sym_child,
  [14674] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1417), 1,
      sym__newline,
    STATE(901), 1,
      sym_child,
  [14687] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1419), 1,
      sym__newline,
    STATE(903), 1,
      sym_child,
  [14700] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(720), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(722), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14711] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1421), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1423), 1,
      aux_sym_wrapped_parameters_token2,
    ACTIONS(1425), 1,
      aux_sym_wrapped_parameters_token3,
  [14724] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(684), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(686), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14735] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1427), 1,
      sym_string_content,
    ACTIONS(1429), 1,
      sym_string_end,
    STATE(617), 1,
      aux_sym_parameter_value_repeat1,
  [14748] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1427), 1,
      sym_string_content,
    ACTIONS(1431), 1,
      sym_string_end,
    STATE(617), 1,
      aux_sym_parameter_value_repeat1,
  [14761] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1433), 1,
      sym_string_content,
    ACTIONS(1435), 1,
      sym_string_end,
    STATE(613), 1,
      aux_sym_parameter_value_repeat1,
  [14774] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(468), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1437), 1,
      aux_sym_text_inline_token2,
    STATE(213), 1,
      sym_ruby_interpolation,
  [14787] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1439), 1,
      sym__newline,
    STATE(777), 1,
      sym_child,
  [14800] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1441), 1,
      sym_string_content,
    ACTIONS(1444), 1,
      sym_string_end,
    STATE(617), 1,
      aux_sym_parameter_value_repeat1,
  [14813] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1446), 1,
      sym__newline,
    STATE(778), 1,
      sym_child,
  [14826] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1421), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1423), 1,
      aux_sym_wrapped_parameters_token2,
    ACTIONS(1425), 1,
      aux_sym_wrapped_parameters_token5,
  [14839] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1427), 1,
      sym_string_content,
    ACTIONS(1448), 1,
      sym_string_end,
    STATE(617), 1,
      aux_sym_parameter_value_repeat1,
  [14852] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1452), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(1450), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14863] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1363), 3,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token3,
      aux_sym_wrapped_parameters_token5,
  [14872] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(684), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(686), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14883] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1454), 1,
      sym__newline,
    STATE(737), 1,
      sym_child,
  [14896] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1456), 1,
      sym_string_content,
    ACTIONS(1458), 1,
      sym_string_end,
    STATE(642), 1,
      aux_sym_parameter_value_repeat1,
  [14909] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1460), 1,
      sym__newline,
    STATE(839), 1,
      sym_child,
  [14922] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(720), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(722), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14933] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1462), 1,
      sym_string_content,
    ACTIONS(1464), 1,
      sym_string_end,
    STATE(620), 1,
      aux_sym_parameter_value_repeat1,
  [14946] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1466), 1,
      sym__newline,
    STATE(739), 1,
      sym_child,
  [14959] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1452), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(1450), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14970] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1468), 1,
      aux_sym_tag_token1,
    ACTIONS(1470), 1,
      anon_sym_GT,
    ACTIONS(1472), 1,
      aux_sym_html_opening_tag_token1,
  [14983] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1474), 1,
      sym__newline,
    STATE(853), 1,
      sym_child,
  [14996] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1476), 1,
      sym__newline,
    STATE(854), 1,
      sym_child,
  [15009] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1478), 1,
      sym__newline,
    STATE(857), 1,
      sym_child,
  [15022] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1480), 1,
      sym__newline,
    STATE(863), 1,
      sym_child,
  [15035] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1482), 1,
      sym__newline,
    STATE(743), 1,
      sym_child,
  [15048] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1484), 1,
      sym__newline,
    STATE(856), 1,
      sym_child,
  [15061] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1486), 1,
      sym__newline,
    STATE(858), 1,
      sym_child,
  [15074] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(700), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(702), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [15085] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1488), 1,
      sym__newline,
    STATE(855), 1,
      sym_child,
  [15098] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1490), 1,
      sym_string_content,
    ACTIONS(1492), 1,
      sym_string_end,
    STATE(612), 1,
      aux_sym_parameter_value_repeat1,
  [15111] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1427), 1,
      sym_string_content,
    ACTIONS(1494), 1,
      sym_string_end,
    STATE(617), 1,
      aux_sym_parameter_value_repeat1,
  [15124] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1496), 1,
      sym__newline,
    STATE(834), 1,
      sym_child,
  [15137] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1498), 1,
      sym__newline,
    STATE(735), 1,
      sym_child,
  [15150] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1500), 1,
      sym__newline,
    STATE(881), 1,
      sym_child,
  [15163] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1502), 1,
      sym__newline,
    STATE(865), 1,
      sym_child,
  [15176] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1504), 1,
      sym__newline,
    STATE(837), 1,
      sym_child,
  [15189] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1506), 1,
      sym__newline,
    STATE(836), 1,
      sym_child,
  [15202] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1508), 1,
      sym__newline,
    STATE(871), 1,
      sym_child,
  [15215] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1510), 1,
      sym__newline,
    STATE(763), 1,
      sym_child,
  [15228] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1512), 1,
      sym__newline,
    STATE(764), 1,
      sym_child,
  [15241] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1514), 1,
      sym__newline,
    STATE(835), 1,
      sym_child,
  [15254] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      anon_sym_COLON,
    ACTIONS(1516), 1,
      sym__newline,
    STATE(831), 1,
      sym_child,
  [15267] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1518), 2,
      sym__newline,
      anon_sym_COLON,
  [15275] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1520), 1,
      aux_sym_child_token1,
    ACTIONS(1522), 1,
      sym__newline,
  [15285] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(210), 1,
      sym__newline,
  [15295] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(202), 1,
      sym__newline,
  [15305] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1524), 1,
      aux_sym_child_token1,
    ACTIONS(1526), 1,
      sym__newline,
  [15315] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1528), 1,
      aux_sym_child_token1,
    ACTIONS(1530), 1,
      sym__newline,
  [15325] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1532), 1,
      aux_sym_child_token1,
    ACTIONS(1534), 1,
      sym__newline,
  [15335] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1536), 1,
      aux_sym_child_token1,
    ACTIONS(1538), 1,
      sym__newline,
  [15345] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1540), 1,
      sym__indent,
    ACTIONS(1542), 1,
      sym__dedent,
  [15355] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1544), 1,
      aux_sym_child_token1,
    ACTIONS(1546), 1,
      sym__newline,
  [15365] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1548), 1,
      aux_sym_child_token1,
    ACTIONS(1550), 1,
      sym__newline,
  [15375] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1552), 1,
      aux_sym_child_token1,
    ACTIONS(1554), 1,
      sym__newline,
  [15385] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1556), 1,
      aux_sym_child_token1,
    ACTIONS(1558), 1,
      sym__newline,
  [15395] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1560), 1,
      aux_sym_child_token1,
    ACTIONS(1562), 1,
      sym__newline,
  [15405] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1564), 1,
      aux_sym_child_token1,
    ACTIONS(1566), 1,
      sym__newline,
  [15415] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1568), 2,
      sym__newline,
      anon_sym_COLON,
  [15423] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1570), 1,
      aux_sym_child_token1,
    ACTIONS(1572), 1,
      sym__newline,
  [15433] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1574), 1,
      aux_sym_child_token1,
    ACTIONS(1576), 1,
      sym__newline,
  [15443] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1578), 1,
      aux_sym_child_token1,
    ACTIONS(1580), 1,
      sym__newline,
  [15453] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1582), 1,
      aux_sym_child_token1,
    ACTIONS(1584), 1,
      sym__newline,
  [15463] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1586), 1,
      aux_sym_child_token1,
    ACTIONS(1588), 1,
      sym__newline,
  [15473] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1590), 1,
      aux_sym_child_token1,
    ACTIONS(1592), 1,
      sym__newline,
  [15483] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(202), 1,
      sym__newline,
  [15493] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1594), 1,
      aux_sym_child_token1,
    ACTIONS(1596), 1,
      sym__newline,
  [15503] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1598), 1,
      aux_sym_child_token1,
    ACTIONS(1600), 1,
      sym__newline,
  [15513] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1602), 1,
      aux_sym_child_token1,
    ACTIONS(1604), 1,
      sym__newline,
  [15523] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(220), 1,
      sym__newline,
  [15533] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(220), 1,
      sym__newline,
  [15543] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(192), 1,
      sym__newline,
    ACTIONS(196), 1,
      sym__indent,
  [15553] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(198), 1,
      sym__newline,
  [15563] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(198), 1,
      sym__newline,
  [15573] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1606), 1,
      aux_sym_child_token1,
    ACTIONS(1608), 1,
      sym__newline,
  [15583] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1610), 1,
      aux_sym_child_token1,
    ACTIONS(1612), 1,
      sym__newline,
  [15593] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(202), 1,
      sym__newline,
  [15603] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(202), 1,
      sym__newline,
  [15613] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1614), 1,
      aux_sym_child_token1,
    ACTIONS(1616), 1,
      sym__newline,
  [15623] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1618), 1,
      aux_sym_child_token1,
    ACTIONS(1620), 1,
      sym__newline,
  [15633] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1622), 1,
      aux_sym_child_token1,
    ACTIONS(1624), 1,
      sym__newline,
  [15643] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1626), 1,
      aux_sym_child_token1,
    ACTIONS(1628), 1,
      sym__newline,
  [15653] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1630), 1,
      aux_sym_child_token1,
    ACTIONS(1632), 1,
      sym__newline,
  [15663] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1634), 1,
      aux_sym_child_token1,
    ACTIONS(1636), 1,
      sym__newline,
  [15673] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1638), 1,
      aux_sym_child_token1,
    ACTIONS(1640), 1,
      sym__newline,
  [15683] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1642), 1,
      aux_sym_child_token1,
    ACTIONS(1644), 1,
      sym__newline,
  [15693] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1646), 1,
      aux_sym_child_token1,
    ACTIONS(1648), 1,
      sym__newline,
  [15703] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1650), 1,
      aux_sym_child_token1,
    ACTIONS(1652), 1,
      sym__newline,
  [15713] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(206), 1,
      sym__newline,
  [15723] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1654), 1,
      aux_sym_child_token1,
    ACTIONS(1656), 1,
      sym__newline,
  [15733] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1658), 1,
      aux_sym_child_token1,
    ACTIONS(1660), 1,
      sym__newline,
  [15743] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(206), 1,
      sym__newline,
  [15753] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1662), 1,
      aux_sym_child_token1,
    ACTIONS(1664), 1,
      sym__newline,
  [15763] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1666), 2,
      sym__newline,
      anon_sym_COLON,
  [15771] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1668), 2,
      sym__newline,
      anon_sym_COLON,
  [15779] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1670), 1,
      aux_sym_child_token1,
    ACTIONS(1672), 1,
      sym__newline,
  [15789] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(206), 1,
      sym__newline,
  [15799] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(700), 1,
      aux_sym_child_token1,
    ACTIONS(702), 1,
      anon_sym_COLON,
  [15809] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(246), 1,
      sym__newline,
  [15819] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1674), 1,
      aux_sym_child_token1,
    ACTIONS(1676), 1,
      sym__newline,
  [15829] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1678), 2,
      sym__newline,
      anon_sym_COLON,
  [15837] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1680), 2,
      sym__newline,
      anon_sym_COLON,
  [15845] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1540), 1,
      sym__indent,
    ACTIONS(1682), 1,
      sym__dedent,
  [15855] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1684), 1,
      aux_sym_child_token1,
    ACTIONS(1686), 1,
      sym__newline,
  [15865] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1688), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1690), 1,
      anon_sym_SLASH,
  [15875] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(720), 1,
      aux_sym_child_token1,
    ACTIONS(722), 1,
      anon_sym_COLON,
  [15885] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1692), 2,
      sym__newline,
      anon_sym_COLON,
  [15893] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1694), 1,
      aux_sym_child_token1,
    ACTIONS(1696), 1,
      sym__newline,
  [15903] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(684), 1,
      aux_sym_child_token1,
    ACTIONS(686), 1,
      anon_sym_COLON,
  [15913] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(676), 1,
      aux_sym_child_token1,
    ACTIONS(678), 1,
      anon_sym_COLON,
  [15923] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1698), 1,
      aux_sym_child_token1,
    ACTIONS(1700), 1,
      sym__newline,
  [15933] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1702), 1,
      aux_sym_child_token1,
    ACTIONS(1704), 1,
      sym__newline,
  [15943] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1706), 1,
      aux_sym_tag_token1,
    ACTIONS(1708), 1,
      anon_sym_GT,
  [15953] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1710), 1,
      aux_sym_child_token1,
    ACTIONS(1712), 1,
      sym__newline,
  [15963] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1714), 1,
      aux_sym_child_token1,
    ACTIONS(1716), 1,
      sym__newline,
  [15973] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1718), 1,
      aux_sym_child_token1,
    ACTIONS(1720), 1,
      sym__newline,
  [15983] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(622), 1,
      aux_sym_child_token1,
    ACTIONS(624), 1,
      anon_sym_COLON,
  [15993] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1722), 1,
      aux_sym_child_token1,
    ACTIONS(1724), 1,
      sym__newline,
  [16003] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1726), 1,
      aux_sym_child_token1,
    ACTIONS(1728), 1,
      sym__newline,
  [16013] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1730), 2,
      sym__newline,
      anon_sym_COLON,
  [16021] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1732), 1,
      aux_sym_child_token1,
    ACTIONS(1734), 1,
      sym__newline,
  [16031] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1736), 1,
      aux_sym_child_token1,
    ACTIONS(1738), 1,
      sym__newline,
  [16041] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(680), 2,
      aux_sym_wrapped_parameters_token3,
      aux_sym_wrapped_parameters_token5,
  [16049] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1740), 1,
      sym__newline,
  [16056] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1742), 1,
      sym__newline,
  [16063] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1744), 1,
      sym__indent,
  [16070] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1746), 1,
      sym__newline,
  [16077] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1748), 1,
      anon_sym_RBRACE,
  [16084] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1750), 1,
      sym__newline,
  [16091] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1358), 1,
      aux_sym_wrapped_parameters_token5,
  [16098] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1752), 1,
      sym__newline,
  [16105] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1435), 1,
      aux_sym_parameter_value_token1,
  [16112] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1754), 1,
      sym__newline,
  [16119] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(258), 1,
      sym__newline,
  [16126] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1358), 1,
      aux_sym_wrapped_parameters_token3,
  [16133] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(270), 1,
      sym__newline,
  [16140] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1756), 1,
      anon_sym_RBRACE,
  [16147] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(286), 1,
      sym__newline,
  [16154] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(587), 1,
      anon_sym_COLON,
  [16161] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1758), 1,
      aux_sym_floating_parameter_pair_token1,
  [16168] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(751), 1,
      aux_sym_floating_parameter_pair_token1,
  [16175] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(294), 1,
      sym__newline,
  [16182] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1760), 1,
      sym__indent,
  [16189] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(306), 1,
      sym__newline,
  [16196] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1762), 1,
      sym__indent,
  [16203] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1764), 1,
      sym__newline,
  [16210] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1766), 1,
      anon_sym_GT,
  [16217] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(310), 1,
      sym__newline,
  [16224] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1708), 1,
      anon_sym_GT,
  [16231] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(314), 1,
      sym__newline,
  [16238] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(583), 1,
      anon_sym_COLON,
  [16245] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1768), 1,
      sym__newline,
  [16252] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1770), 1,
      sym__newline,
  [16259] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1772), 1,
      sym__newline,
  [16266] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1774), 1,
      aux_sym_child_token1,
  [16273] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1776), 1,
      aux_sym__ruby_multiline_token1,
  [16280] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1778), 1,
      anon_sym_RBRACE,
  [16287] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1668), 1,
      sym__dedent,
  [16294] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1780), 1,
      anon_sym_COLON,
  [16301] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1782), 1,
      anon_sym_COLON,
  [16308] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1784), 1,
      anon_sym_COLON,
  [16315] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1786), 1,
      anon_sym_COLON,
  [16322] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1788), 1,
      anon_sym_COLON,
  [16329] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(338), 1,
      sym__newline,
  [16336] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1790), 1,
      anon_sym_COLON,
  [16343] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1792), 1,
      sym__newline,
  [16350] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1794), 1,
      sym__newline,
  [16357] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1796), 1,
      sym__newline,
  [16364] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1798), 1,
      sym__newline,
  [16371] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1800), 1,
      sym__newline,
  [16378] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1802), 1,
      aux_sym_floating_parameter_pair_token1,
  [16385] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1804), 1,
      sym__indent,
  [16392] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1806), 1,
      sym__newline,
  [16399] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1808), 1,
      sym__newline,
  [16406] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(354), 1,
      sym__newline,
  [16413] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(358), 1,
      sym__newline,
  [16420] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1372), 1,
      aux_sym_wrapped_parameters_token5,
  [16427] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1372), 1,
      aux_sym_wrapped_parameters_token3,
  [16434] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1810), 1,
      sym__newline,
  [16441] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1812), 1,
      sym__indent,
  [16448] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(254), 1,
      sym__newline,
  [16455] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1492), 1,
      aux_sym_parameter_value_token1,
  [16462] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(362), 1,
      sym__newline,
  [16469] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1814), 1,
      anon_sym_GT,
  [16476] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1816), 1,
      sym__newline,
  [16483] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1818), 1,
      sym__indent,
  [16490] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1820), 1,
      sym__indent,
  [16497] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1822), 1,
      sym__newline,
  [16504] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1824), 1,
      sym__newline,
  [16511] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1680), 1,
      sym__dedent,
  [16518] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1826), 1,
      anon_sym_RBRACE,
  [16525] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(254), 1,
      sym__newline,
  [16532] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(378), 1,
      sym__newline,
  [16539] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1828), 1,
      sym__newline,
  [16546] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1830), 1,
      sym__indent,
  [16553] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1832), 1,
      sym__newline,
  [16560] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(254), 1,
      sym__newline,
  [16567] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(414), 1,
      sym__newline,
  [16574] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1834), 1,
      sym__indent,
  [16581] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1836), 1,
      aux_sym_tag_name_token1,
  [16588] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1392), 1,
      sym__newline,
  [16595] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(414), 1,
      sym__newline,
  [16602] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1838), 1,
      sym__indent,
  [16609] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1840), 1,
      sym__newline,
  [16616] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1842), 1,
      sym__indent,
  [16623] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(414), 1,
      sym__newline,
  [16630] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(410), 1,
      sym__newline,
  [16637] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(406), 1,
      sym__newline,
  [16644] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(402), 1,
      sym__newline,
  [16651] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(398), 1,
      sym__newline,
  [16658] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(394), 1,
      sym__newline,
  [16665] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(390), 1,
      sym__newline,
  [16672] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1844), 1,
      sym__newline,
  [16679] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(386), 1,
      sym__newline,
  [16686] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(232), 1,
      sym__indent,
  [16693] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1846), 1,
      sym__newline,
  [16700] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(350), 1,
      sym__newline,
  [16707] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1848), 1,
      sym__indent,
  [16714] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(258), 1,
      sym__newline,
  [16721] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1682), 1,
      sym__dedent,
  [16728] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1850), 1,
      sym__newline,
  [16735] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(382), 1,
      sym__newline,
  [16742] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1852), 1,
      sym__newline,
  [16749] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1854), 1,
      sym__newline,
  [16756] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1856), 1,
      sym__newline,
  [16763] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1858), 1,
      sym__newline,
  [16770] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1860), 1,
      sym__newline,
  [16777] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1862), 1,
      sym__indent,
  [16784] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1864), 1,
      sym__newline,
  [16791] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(302), 1,
      sym__newline,
  [16798] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(290), 1,
      sym__newline,
  [16805] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(322), 1,
      sym__newline,
  [16812] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(278), 1,
      sym__newline,
  [16819] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(318), 1,
      sym__newline,
  [16826] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(334), 1,
      sym__newline,
  [16833] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(346), 1,
      sym__newline,
  [16840] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1866), 1,
      sym__indent,
  [16847] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(326), 1,
      sym__newline,
  [16854] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1458), 1,
      aux_sym_parameter_value_token1,
  [16861] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(206), 1,
      sym__newline,
  [16868] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1464), 1,
      aux_sym_parameter_value_token1,
  [16875] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1868), 1,
      sym__indent,
  [16882] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1870), 1,
      sym__newline,
  [16889] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1872), 1,
      sym__newline,
  [16896] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1874), 1,
      sym__newline,
  [16903] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1876), 1,
      sym__newline,
  [16910] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1878), 1,
      sym__newline,
  [16917] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1880), 1,
      sym__newline,
  [16924] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1882), 1,
      sym__indent,
  [16931] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1884), 1,
      sym__indent,
  [16938] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1886), 1,
      sym__newline,
  [16945] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1888), 1,
      sym__indent,
  [16952] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1890), 1,
      sym__newline,
  [16959] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1892), 1,
      sym__indent,
  [16966] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1894), 1,
      sym__newline,
  [16973] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1896), 1,
      sym__indent,
  [16980] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(220), 1,
      sym__newline,
  [16987] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1898), 1,
      sym__indent,
  [16994] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(254), 1,
      sym__newline,
  [17001] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1900), 1,
      sym__indent,
  [17008] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1902), 1,
      sym__newline,
  [17015] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1904), 1,
      sym__indent,
  [17022] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1906), 1,
      sym__indent,
  [17029] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1908), 1,
      sym__indent,
  [17036] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1910), 1,
      sym__indent,
  [17043] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1912), 1,
      sym__indent,
  [17050] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1914), 1,
      sym__indent,
  [17057] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1916), 1,
      sym__indent,
  [17064] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1918), 1,
      sym__indent,
  [17071] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1920), 1,
      sym__indent,
  [17078] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1922), 1,
      sym__newline,
  [17085] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(202), 1,
      sym__newline,
  [17092] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1924), 1,
      sym__newline,
  [17099] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1926), 1,
      sym__newline,
  [17106] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1928), 1,
      sym__indent,
  [17113] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1930), 1,
      sym__newline,
  [17120] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1932), 1,
      sym__newline,
  [17127] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1934), 1,
      sym__newline,
  [17134] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(202), 1,
      sym__newline,
  [17141] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1936), 1,
      anon_sym_RBRACE,
  [17148] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1938), 1,
      sym__indent,
  [17155] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1940), 1,
      sym__indent,
  [17162] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1942), 1,
      sym__newline,
  [17169] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1944), 1,
      sym__indent,
  [17176] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1946), 1,
      sym__newline,
  [17183] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1948), 1,
      sym__indent,
  [17190] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1542), 1,
      sym__dedent,
  [17197] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1950), 1,
      sym__indent,
  [17204] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1952), 1,
      sym__newline,
  [17211] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1954), 1,
      sym__indent,
  [17218] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1956), 1,
      sym__newline,
  [17225] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1958), 1,
      sym__indent,
  [17232] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1960), 1,
      sym__newline,
  [17239] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1962), 1,
      sym__indent,
  [17246] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1964), 1,
      sym__indent,
  [17253] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1966), 1,
      sym__indent,
  [17260] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1968), 1,
      sym__indent,
  [17267] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1970), 1,
      sym__indent,
  [17274] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1972), 1,
      sym__indent,
  [17281] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1974), 1,
      sym__indent,
  [17288] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1976), 1,
      sym__indent,
  [17295] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1978), 1,
      sym__indent,
  [17302] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1980), 1,
      anon_sym_COLON,
  [17309] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(330), 1,
      sym__newline,
  [17316] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1982), 1,
      aux_sym_tag_name_token1,
  [17323] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(342), 1,
      sym__newline,
  [17330] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(366), 1,
      sym__newline,
  [17337] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(370), 1,
      sym__newline,
  [17344] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1984), 1,
      ts_builtin_sym_end,
  [17351] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1986), 1,
      anon_sym_COLON,
  [17358] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1988), 1,
      anon_sym_COLON,
  [17365] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1990), 1,
      anon_sym_COLON,
  [17372] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1992), 1,
      anon_sym_COLON,
  [17379] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1994), 1,
      anon_sym_COLON,
  [17386] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1996), 1,
      anon_sym_COLON,
  [17393] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1998), 1,
      anon_sym_COLON,
  [17400] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2000), 1,
      anon_sym_COLON,
  [17407] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2002), 1,
      anon_sym_COLON,
  [17414] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2004), 1,
      anon_sym_COLON,
  [17421] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(374), 1,
      sym__newline,
  [17428] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2006), 1,
      anon_sym_COLON,
  [17435] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2008), 1,
      anon_sym_COLON,
  [17442] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2010), 1,
      anon_sym_COLON,
  [17449] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2012), 1,
      anon_sym_COLON,
  [17456] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2014), 1,
      aux_sym_tag_name_token1,
  [17463] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2016), 1,
      anon_sym_COLON,
  [17470] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2018), 1,
      anon_sym_COLON,
  [17477] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2020), 1,
      anon_sym_COLON,
  [17484] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2022), 1,
      anon_sym_COLON,
  [17491] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2024), 1,
      anon_sym_COLON,
  [17498] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2026), 1,
      anon_sym_COLON,
  [17505] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2028), 1,
      anon_sym_COLON,
  [17512] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2030), 1,
      anon_sym_COLON,
  [17519] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2032), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 100,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 300,
  [SMALL_STATE(6)] = 400,
  [SMALL_STATE(7)] = 497,
  [SMALL_STATE(8)] = 531,
  [SMALL_STATE(9)] = 565,
  [SMALL_STATE(10)] = 599,
  [SMALL_STATE(11)] = 633,
  [SMALL_STATE(12)] = 667,
  [SMALL_STATE(13)] = 701,
  [SMALL_STATE(14)] = 735,
  [SMALL_STATE(15)] = 769,
  [SMALL_STATE(16)] = 803,
  [SMALL_STATE(17)] = 837,
  [SMALL_STATE(18)] = 871,
  [SMALL_STATE(19)] = 905,
  [SMALL_STATE(20)] = 939,
  [SMALL_STATE(21)] = 973,
  [SMALL_STATE(22)] = 1007,
  [SMALL_STATE(23)] = 1041,
  [SMALL_STATE(24)] = 1075,
  [SMALL_STATE(25)] = 1109,
  [SMALL_STATE(26)] = 1143,
  [SMALL_STATE(27)] = 1177,
  [SMALL_STATE(28)] = 1211,
  [SMALL_STATE(29)] = 1245,
  [SMALL_STATE(30)] = 1279,
  [SMALL_STATE(31)] = 1313,
  [SMALL_STATE(32)] = 1347,
  [SMALL_STATE(33)] = 1381,
  [SMALL_STATE(34)] = 1415,
  [SMALL_STATE(35)] = 1449,
  [SMALL_STATE(36)] = 1483,
  [SMALL_STATE(37)] = 1517,
  [SMALL_STATE(38)] = 1551,
  [SMALL_STATE(39)] = 1585,
  [SMALL_STATE(40)] = 1619,
  [SMALL_STATE(41)] = 1653,
  [SMALL_STATE(42)] = 1687,
  [SMALL_STATE(43)] = 1721,
  [SMALL_STATE(44)] = 1755,
  [SMALL_STATE(45)] = 1789,
  [SMALL_STATE(46)] = 1823,
  [SMALL_STATE(47)] = 1857,
  [SMALL_STATE(48)] = 1888,
  [SMALL_STATE(49)] = 1919,
  [SMALL_STATE(50)] = 1950,
  [SMALL_STATE(51)] = 1981,
  [SMALL_STATE(52)] = 2012,
  [SMALL_STATE(53)] = 2043,
  [SMALL_STATE(54)] = 2074,
  [SMALL_STATE(55)] = 2105,
  [SMALL_STATE(56)] = 2136,
  [SMALL_STATE(57)] = 2167,
  [SMALL_STATE(58)] = 2198,
  [SMALL_STATE(59)] = 2229,
  [SMALL_STATE(60)] = 2260,
  [SMALL_STATE(61)] = 2291,
  [SMALL_STATE(62)] = 2322,
  [SMALL_STATE(63)] = 2353,
  [SMALL_STATE(64)] = 2384,
  [SMALL_STATE(65)] = 2415,
  [SMALL_STATE(66)] = 2446,
  [SMALL_STATE(67)] = 2477,
  [SMALL_STATE(68)] = 2508,
  [SMALL_STATE(69)] = 2539,
  [SMALL_STATE(70)] = 2570,
  [SMALL_STATE(71)] = 2601,
  [SMALL_STATE(72)] = 2632,
  [SMALL_STATE(73)] = 2663,
  [SMALL_STATE(74)] = 2694,
  [SMALL_STATE(75)] = 2725,
  [SMALL_STATE(76)] = 2756,
  [SMALL_STATE(77)] = 2787,
  [SMALL_STATE(78)] = 2818,
  [SMALL_STATE(79)] = 2849,
  [SMALL_STATE(80)] = 2880,
  [SMALL_STATE(81)] = 2911,
  [SMALL_STATE(82)] = 2942,
  [SMALL_STATE(83)] = 2973,
  [SMALL_STATE(84)] = 3004,
  [SMALL_STATE(85)] = 3035,
  [SMALL_STATE(86)] = 3066,
  [SMALL_STATE(87)] = 3097,
  [SMALL_STATE(88)] = 3128,
  [SMALL_STATE(89)] = 3159,
  [SMALL_STATE(90)] = 3190,
  [SMALL_STATE(91)] = 3221,
  [SMALL_STATE(92)] = 3252,
  [SMALL_STATE(93)] = 3283,
  [SMALL_STATE(94)] = 3314,
  [SMALL_STATE(95)] = 3345,
  [SMALL_STATE(96)] = 3376,
  [SMALL_STATE(97)] = 3407,
  [SMALL_STATE(98)] = 3438,
  [SMALL_STATE(99)] = 3469,
  [SMALL_STATE(100)] = 3500,
  [SMALL_STATE(101)] = 3531,
  [SMALL_STATE(102)] = 3562,
  [SMALL_STATE(103)] = 3593,
  [SMALL_STATE(104)] = 3624,
  [SMALL_STATE(105)] = 3655,
  [SMALL_STATE(106)] = 3686,
  [SMALL_STATE(107)] = 3717,
  [SMALL_STATE(108)] = 3748,
  [SMALL_STATE(109)] = 3779,
  [SMALL_STATE(110)] = 3810,
  [SMALL_STATE(111)] = 3841,
  [SMALL_STATE(112)] = 3872,
  [SMALL_STATE(113)] = 3903,
  [SMALL_STATE(114)] = 3934,
  [SMALL_STATE(115)] = 3965,
  [SMALL_STATE(116)] = 3996,
  [SMALL_STATE(117)] = 4027,
  [SMALL_STATE(118)] = 4058,
  [SMALL_STATE(119)] = 4089,
  [SMALL_STATE(120)] = 4120,
  [SMALL_STATE(121)] = 4151,
  [SMALL_STATE(122)] = 4182,
  [SMALL_STATE(123)] = 4213,
  [SMALL_STATE(124)] = 4244,
  [SMALL_STATE(125)] = 4275,
  [SMALL_STATE(126)] = 4306,
  [SMALL_STATE(127)] = 4337,
  [SMALL_STATE(128)] = 4368,
  [SMALL_STATE(129)] = 4399,
  [SMALL_STATE(130)] = 4430,
  [SMALL_STATE(131)] = 4461,
  [SMALL_STATE(132)] = 4492,
  [SMALL_STATE(133)] = 4523,
  [SMALL_STATE(134)] = 4554,
  [SMALL_STATE(135)] = 4585,
  [SMALL_STATE(136)] = 4616,
  [SMALL_STATE(137)] = 4647,
  [SMALL_STATE(138)] = 4678,
  [SMALL_STATE(139)] = 4709,
  [SMALL_STATE(140)] = 4740,
  [SMALL_STATE(141)] = 4771,
  [SMALL_STATE(142)] = 4802,
  [SMALL_STATE(143)] = 4833,
  [SMALL_STATE(144)] = 4864,
  [SMALL_STATE(145)] = 4895,
  [SMALL_STATE(146)] = 4926,
  [SMALL_STATE(147)] = 4957,
  [SMALL_STATE(148)] = 4988,
  [SMALL_STATE(149)] = 5019,
  [SMALL_STATE(150)] = 5050,
  [SMALL_STATE(151)] = 5081,
  [SMALL_STATE(152)] = 5149,
  [SMALL_STATE(153)] = 5217,
  [SMALL_STATE(154)] = 5285,
  [SMALL_STATE(155)] = 5338,
  [SMALL_STATE(156)] = 5365,
  [SMALL_STATE(157)] = 5407,
  [SMALL_STATE(158)] = 5449,
  [SMALL_STATE(159)] = 5483,
  [SMALL_STATE(160)] = 5525,
  [SMALL_STATE(161)] = 5558,
  [SMALL_STATE(162)] = 5591,
  [SMALL_STATE(163)] = 5613,
  [SMALL_STATE(164)] = 5635,
  [SMALL_STATE(165)] = 5657,
  [SMALL_STATE(166)] = 5679,
  [SMALL_STATE(167)] = 5703,
  [SMALL_STATE(168)] = 5738,
  [SMALL_STATE(169)] = 5773,
  [SMALL_STATE(170)] = 5794,
  [SMALL_STATE(171)] = 5815,
  [SMALL_STATE(172)] = 5836,
  [SMALL_STATE(173)] = 5871,
  [SMALL_STATE(174)] = 5906,
  [SMALL_STATE(175)] = 5941,
  [SMALL_STATE(176)] = 5976,
  [SMALL_STATE(177)] = 6008,
  [SMALL_STATE(178)] = 6027,
  [SMALL_STATE(179)] = 6046,
  [SMALL_STATE(180)] = 6079,
  [SMALL_STATE(181)] = 6112,
  [SMALL_STATE(182)] = 6134,
  [SMALL_STATE(183)] = 6156,
  [SMALL_STATE(184)] = 6188,
  [SMALL_STATE(185)] = 6220,
  [SMALL_STATE(186)] = 6252,
  [SMALL_STATE(187)] = 6284,
  [SMALL_STATE(188)] = 6308,
  [SMALL_STATE(189)] = 6335,
  [SMALL_STATE(190)] = 6362,
  [SMALL_STATE(191)] = 6379,
  [SMALL_STATE(192)] = 6396,
  [SMALL_STATE(193)] = 6413,
  [SMALL_STATE(194)] = 6430,
  [SMALL_STATE(195)] = 6447,
  [SMALL_STATE(196)] = 6464,
  [SMALL_STATE(197)] = 6491,
  [SMALL_STATE(198)] = 6508,
  [SMALL_STATE(199)] = 6535,
  [SMALL_STATE(200)] = 6552,
  [SMALL_STATE(201)] = 6569,
  [SMALL_STATE(202)] = 6596,
  [SMALL_STATE(203)] = 6613,
  [SMALL_STATE(204)] = 6639,
  [SMALL_STATE(205)] = 6659,
  [SMALL_STATE(206)] = 6685,
  [SMALL_STATE(207)] = 6711,
  [SMALL_STATE(208)] = 6739,
  [SMALL_STATE(209)] = 6757,
  [SMALL_STATE(210)] = 6779,
  [SMALL_STATE(211)] = 6803,
  [SMALL_STATE(212)] = 6829,
  [SMALL_STATE(213)] = 6855,
  [SMALL_STATE(214)] = 6881,
  [SMALL_STATE(215)] = 6907,
  [SMALL_STATE(216)] = 6933,
  [SMALL_STATE(217)] = 6955,
  [SMALL_STATE(218)] = 6973,
  [SMALL_STATE(219)] = 6993,
  [SMALL_STATE(220)] = 7019,
  [SMALL_STATE(221)] = 7043,
  [SMALL_STATE(222)] = 7066,
  [SMALL_STATE(223)] = 7089,
  [SMALL_STATE(224)] = 7112,
  [SMALL_STATE(225)] = 7135,
  [SMALL_STATE(226)] = 7158,
  [SMALL_STATE(227)] = 7181,
  [SMALL_STATE(228)] = 7204,
  [SMALL_STATE(229)] = 7227,
  [SMALL_STATE(230)] = 7250,
  [SMALL_STATE(231)] = 7273,
  [SMALL_STATE(232)] = 7296,
  [SMALL_STATE(233)] = 7319,
  [SMALL_STATE(234)] = 7342,
  [SMALL_STATE(235)] = 7365,
  [SMALL_STATE(236)] = 7388,
  [SMALL_STATE(237)] = 7411,
  [SMALL_STATE(238)] = 7436,
  [SMALL_STATE(239)] = 7461,
  [SMALL_STATE(240)] = 7484,
  [SMALL_STATE(241)] = 7499,
  [SMALL_STATE(242)] = 7514,
  [SMALL_STATE(243)] = 7529,
  [SMALL_STATE(244)] = 7544,
  [SMALL_STATE(245)] = 7559,
  [SMALL_STATE(246)] = 7574,
  [SMALL_STATE(247)] = 7597,
  [SMALL_STATE(248)] = 7620,
  [SMALL_STATE(249)] = 7643,
  [SMALL_STATE(250)] = 7658,
  [SMALL_STATE(251)] = 7681,
  [SMALL_STATE(252)] = 7704,
  [SMALL_STATE(253)] = 7727,
  [SMALL_STATE(254)] = 7748,
  [SMALL_STATE(255)] = 7771,
  [SMALL_STATE(256)] = 7794,
  [SMALL_STATE(257)] = 7817,
  [SMALL_STATE(258)] = 7840,
  [SMALL_STATE(259)] = 7863,
  [SMALL_STATE(260)] = 7886,
  [SMALL_STATE(261)] = 7909,
  [SMALL_STATE(262)] = 7932,
  [SMALL_STATE(263)] = 7955,
  [SMALL_STATE(264)] = 7978,
  [SMALL_STATE(265)] = 8001,
  [SMALL_STATE(266)] = 8024,
  [SMALL_STATE(267)] = 8047,
  [SMALL_STATE(268)] = 8070,
  [SMALL_STATE(269)] = 8093,
  [SMALL_STATE(270)] = 8116,
  [SMALL_STATE(271)] = 8139,
  [SMALL_STATE(272)] = 8162,
  [SMALL_STATE(273)] = 8185,
  [SMALL_STATE(274)] = 8208,
  [SMALL_STATE(275)] = 8231,
  [SMALL_STATE(276)] = 8254,
  [SMALL_STATE(277)] = 8277,
  [SMALL_STATE(278)] = 8300,
  [SMALL_STATE(279)] = 8323,
  [SMALL_STATE(280)] = 8346,
  [SMALL_STATE(281)] = 8371,
  [SMALL_STATE(282)] = 8394,
  [SMALL_STATE(283)] = 8417,
  [SMALL_STATE(284)] = 8440,
  [SMALL_STATE(285)] = 8463,
  [SMALL_STATE(286)] = 8486,
  [SMALL_STATE(287)] = 8509,
  [SMALL_STATE(288)] = 8532,
  [SMALL_STATE(289)] = 8555,
  [SMALL_STATE(290)] = 8578,
  [SMALL_STATE(291)] = 8601,
  [SMALL_STATE(292)] = 8624,
  [SMALL_STATE(293)] = 8647,
  [SMALL_STATE(294)] = 8670,
  [SMALL_STATE(295)] = 8693,
  [SMALL_STATE(296)] = 8716,
  [SMALL_STATE(297)] = 8739,
  [SMALL_STATE(298)] = 8762,
  [SMALL_STATE(299)] = 8785,
  [SMALL_STATE(300)] = 8808,
  [SMALL_STATE(301)] = 8831,
  [SMALL_STATE(302)] = 8854,
  [SMALL_STATE(303)] = 8877,
  [SMALL_STATE(304)] = 8900,
  [SMALL_STATE(305)] = 8923,
  [SMALL_STATE(306)] = 8946,
  [SMALL_STATE(307)] = 8969,
  [SMALL_STATE(308)] = 8992,
  [SMALL_STATE(309)] = 9015,
  [SMALL_STATE(310)] = 9038,
  [SMALL_STATE(311)] = 9061,
  [SMALL_STATE(312)] = 9084,
  [SMALL_STATE(313)] = 9107,
  [SMALL_STATE(314)] = 9130,
  [SMALL_STATE(315)] = 9153,
  [SMALL_STATE(316)] = 9176,
  [SMALL_STATE(317)] = 9199,
  [SMALL_STATE(318)] = 9222,
  [SMALL_STATE(319)] = 9245,
  [SMALL_STATE(320)] = 9268,
  [SMALL_STATE(321)] = 9291,
  [SMALL_STATE(322)] = 9314,
  [SMALL_STATE(323)] = 9337,
  [SMALL_STATE(324)] = 9360,
  [SMALL_STATE(325)] = 9383,
  [SMALL_STATE(326)] = 9406,
  [SMALL_STATE(327)] = 9429,
  [SMALL_STATE(328)] = 9452,
  [SMALL_STATE(329)] = 9475,
  [SMALL_STATE(330)] = 9498,
  [SMALL_STATE(331)] = 9521,
  [SMALL_STATE(332)] = 9544,
  [SMALL_STATE(333)] = 9567,
  [SMALL_STATE(334)] = 9590,
  [SMALL_STATE(335)] = 9613,
  [SMALL_STATE(336)] = 9636,
  [SMALL_STATE(337)] = 9659,
  [SMALL_STATE(338)] = 9682,
  [SMALL_STATE(339)] = 9705,
  [SMALL_STATE(340)] = 9728,
  [SMALL_STATE(341)] = 9751,
  [SMALL_STATE(342)] = 9774,
  [SMALL_STATE(343)] = 9797,
  [SMALL_STATE(344)] = 9820,
  [SMALL_STATE(345)] = 9843,
  [SMALL_STATE(346)] = 9866,
  [SMALL_STATE(347)] = 9889,
  [SMALL_STATE(348)] = 9912,
  [SMALL_STATE(349)] = 9935,
  [SMALL_STATE(350)] = 9958,
  [SMALL_STATE(351)] = 9981,
  [SMALL_STATE(352)] = 10004,
  [SMALL_STATE(353)] = 10027,
  [SMALL_STATE(354)] = 10050,
  [SMALL_STATE(355)] = 10073,
  [SMALL_STATE(356)] = 10096,
  [SMALL_STATE(357)] = 10119,
  [SMALL_STATE(358)] = 10142,
  [SMALL_STATE(359)] = 10165,
  [SMALL_STATE(360)] = 10188,
  [SMALL_STATE(361)] = 10211,
  [SMALL_STATE(362)] = 10234,
  [SMALL_STATE(363)] = 10257,
  [SMALL_STATE(364)] = 10280,
  [SMALL_STATE(365)] = 10303,
  [SMALL_STATE(366)] = 10326,
  [SMALL_STATE(367)] = 10349,
  [SMALL_STATE(368)] = 10372,
  [SMALL_STATE(369)] = 10395,
  [SMALL_STATE(370)] = 10418,
  [SMALL_STATE(371)] = 10443,
  [SMALL_STATE(372)] = 10468,
  [SMALL_STATE(373)] = 10491,
  [SMALL_STATE(374)] = 10514,
  [SMALL_STATE(375)] = 10537,
  [SMALL_STATE(376)] = 10560,
  [SMALL_STATE(377)] = 10583,
  [SMALL_STATE(378)] = 10606,
  [SMALL_STATE(379)] = 10629,
  [SMALL_STATE(380)] = 10652,
  [SMALL_STATE(381)] = 10675,
  [SMALL_STATE(382)] = 10698,
  [SMALL_STATE(383)] = 10721,
  [SMALL_STATE(384)] = 10744,
  [SMALL_STATE(385)] = 10767,
  [SMALL_STATE(386)] = 10790,
  [SMALL_STATE(387)] = 10813,
  [SMALL_STATE(388)] = 10836,
  [SMALL_STATE(389)] = 10859,
  [SMALL_STATE(390)] = 10882,
  [SMALL_STATE(391)] = 10905,
  [SMALL_STATE(392)] = 10928,
  [SMALL_STATE(393)] = 10951,
  [SMALL_STATE(394)] = 10974,
  [SMALL_STATE(395)] = 10997,
  [SMALL_STATE(396)] = 11017,
  [SMALL_STATE(397)] = 11033,
  [SMALL_STATE(398)] = 11053,
  [SMALL_STATE(399)] = 11073,
  [SMALL_STATE(400)] = 11093,
  [SMALL_STATE(401)] = 11113,
  [SMALL_STATE(402)] = 11133,
  [SMALL_STATE(403)] = 11153,
  [SMALL_STATE(404)] = 11173,
  [SMALL_STATE(405)] = 11193,
  [SMALL_STATE(406)] = 11213,
  [SMALL_STATE(407)] = 11233,
  [SMALL_STATE(408)] = 11253,
  [SMALL_STATE(409)] = 11273,
  [SMALL_STATE(410)] = 11293,
  [SMALL_STATE(411)] = 11313,
  [SMALL_STATE(412)] = 11333,
  [SMALL_STATE(413)] = 11353,
  [SMALL_STATE(414)] = 11373,
  [SMALL_STATE(415)] = 11393,
  [SMALL_STATE(416)] = 11413,
  [SMALL_STATE(417)] = 11433,
  [SMALL_STATE(418)] = 11453,
  [SMALL_STATE(419)] = 11473,
  [SMALL_STATE(420)] = 11493,
  [SMALL_STATE(421)] = 11513,
  [SMALL_STATE(422)] = 11533,
  [SMALL_STATE(423)] = 11553,
  [SMALL_STATE(424)] = 11573,
  [SMALL_STATE(425)] = 11593,
  [SMALL_STATE(426)] = 11613,
  [SMALL_STATE(427)] = 11633,
  [SMALL_STATE(428)] = 11653,
  [SMALL_STATE(429)] = 11673,
  [SMALL_STATE(430)] = 11693,
  [SMALL_STATE(431)] = 11713,
  [SMALL_STATE(432)] = 11733,
  [SMALL_STATE(433)] = 11753,
  [SMALL_STATE(434)] = 11773,
  [SMALL_STATE(435)] = 11793,
  [SMALL_STATE(436)] = 11813,
  [SMALL_STATE(437)] = 11833,
  [SMALL_STATE(438)] = 11853,
  [SMALL_STATE(439)] = 11873,
  [SMALL_STATE(440)] = 11893,
  [SMALL_STATE(441)] = 11913,
  [SMALL_STATE(442)] = 11933,
  [SMALL_STATE(443)] = 11953,
  [SMALL_STATE(444)] = 11967,
  [SMALL_STATE(445)] = 11987,
  [SMALL_STATE(446)] = 12007,
  [SMALL_STATE(447)] = 12023,
  [SMALL_STATE(448)] = 12043,
  [SMALL_STATE(449)] = 12063,
  [SMALL_STATE(450)] = 12083,
  [SMALL_STATE(451)] = 12103,
  [SMALL_STATE(452)] = 12123,
  [SMALL_STATE(453)] = 12143,
  [SMALL_STATE(454)] = 12163,
  [SMALL_STATE(455)] = 12183,
  [SMALL_STATE(456)] = 12203,
  [SMALL_STATE(457)] = 12223,
  [SMALL_STATE(458)] = 12243,
  [SMALL_STATE(459)] = 12263,
  [SMALL_STATE(460)] = 12283,
  [SMALL_STATE(461)] = 12303,
  [SMALL_STATE(462)] = 12319,
  [SMALL_STATE(463)] = 12339,
  [SMALL_STATE(464)] = 12359,
  [SMALL_STATE(465)] = 12379,
  [SMALL_STATE(466)] = 12399,
  [SMALL_STATE(467)] = 12419,
  [SMALL_STATE(468)] = 12439,
  [SMALL_STATE(469)] = 12459,
  [SMALL_STATE(470)] = 12479,
  [SMALL_STATE(471)] = 12499,
  [SMALL_STATE(472)] = 12519,
  [SMALL_STATE(473)] = 12539,
  [SMALL_STATE(474)] = 12559,
  [SMALL_STATE(475)] = 12579,
  [SMALL_STATE(476)] = 12599,
  [SMALL_STATE(477)] = 12619,
  [SMALL_STATE(478)] = 12639,
  [SMALL_STATE(479)] = 12659,
  [SMALL_STATE(480)] = 12679,
  [SMALL_STATE(481)] = 12699,
  [SMALL_STATE(482)] = 12719,
  [SMALL_STATE(483)] = 12739,
  [SMALL_STATE(484)] = 12759,
  [SMALL_STATE(485)] = 12779,
  [SMALL_STATE(486)] = 12799,
  [SMALL_STATE(487)] = 12819,
  [SMALL_STATE(488)] = 12839,
  [SMALL_STATE(489)] = 12859,
  [SMALL_STATE(490)] = 12879,
  [SMALL_STATE(491)] = 12899,
  [SMALL_STATE(492)] = 12919,
  [SMALL_STATE(493)] = 12931,
  [SMALL_STATE(494)] = 12943,
  [SMALL_STATE(495)] = 12963,
  [SMALL_STATE(496)] = 12983,
  [SMALL_STATE(497)] = 13003,
  [SMALL_STATE(498)] = 13023,
  [SMALL_STATE(499)] = 13043,
  [SMALL_STATE(500)] = 13063,
  [SMALL_STATE(501)] = 13083,
  [SMALL_STATE(502)] = 13095,
  [SMALL_STATE(503)] = 13106,
  [SMALL_STATE(504)] = 13123,
  [SMALL_STATE(505)] = 13140,
  [SMALL_STATE(506)] = 13151,
  [SMALL_STATE(507)] = 13168,
  [SMALL_STATE(508)] = 13179,
  [SMALL_STATE(509)] = 13196,
  [SMALL_STATE(510)] = 13209,
  [SMALL_STATE(511)] = 13222,
  [SMALL_STATE(512)] = 13233,
  [SMALL_STATE(513)] = 13250,
  [SMALL_STATE(514)] = 13267,
  [SMALL_STATE(515)] = 13284,
  [SMALL_STATE(516)] = 13301,
  [SMALL_STATE(517)] = 13318,
  [SMALL_STATE(518)] = 13331,
  [SMALL_STATE(519)] = 13348,
  [SMALL_STATE(520)] = 13365,
  [SMALL_STATE(521)] = 13376,
  [SMALL_STATE(522)] = 13389,
  [SMALL_STATE(523)] = 13402,
  [SMALL_STATE(524)] = 13419,
  [SMALL_STATE(525)] = 13430,
  [SMALL_STATE(526)] = 13447,
  [SMALL_STATE(527)] = 13464,
  [SMALL_STATE(528)] = 13481,
  [SMALL_STATE(529)] = 13498,
  [SMALL_STATE(530)] = 13517,
  [SMALL_STATE(531)] = 13528,
  [SMALL_STATE(532)] = 13547,
  [SMALL_STATE(533)] = 13560,
  [SMALL_STATE(534)] = 13577,
  [SMALL_STATE(535)] = 13594,
  [SMALL_STATE(536)] = 13611,
  [SMALL_STATE(537)] = 13628,
  [SMALL_STATE(538)] = 13639,
  [SMALL_STATE(539)] = 13656,
  [SMALL_STATE(540)] = 13673,
  [SMALL_STATE(541)] = 13690,
  [SMALL_STATE(542)] = 13707,
  [SMALL_STATE(543)] = 13724,
  [SMALL_STATE(544)] = 13737,
  [SMALL_STATE(545)] = 13754,
  [SMALL_STATE(546)] = 13771,
  [SMALL_STATE(547)] = 13784,
  [SMALL_STATE(548)] = 13797,
  [SMALL_STATE(549)] = 13810,
  [SMALL_STATE(550)] = 13827,
  [SMALL_STATE(551)] = 13844,
  [SMALL_STATE(552)] = 13861,
  [SMALL_STATE(553)] = 13872,
  [SMALL_STATE(554)] = 13891,
  [SMALL_STATE(555)] = 13908,
  [SMALL_STATE(556)] = 13927,
  [SMALL_STATE(557)] = 13940,
  [SMALL_STATE(558)] = 13957,
  [SMALL_STATE(559)] = 13972,
  [SMALL_STATE(560)] = 13989,
  [SMALL_STATE(561)] = 14006,
  [SMALL_STATE(562)] = 14023,
  [SMALL_STATE(563)] = 14040,
  [SMALL_STATE(564)] = 14057,
  [SMALL_STATE(565)] = 14074,
  [SMALL_STATE(566)] = 14091,
  [SMALL_STATE(567)] = 14108,
  [SMALL_STATE(568)] = 14125,
  [SMALL_STATE(569)] = 14142,
  [SMALL_STATE(570)] = 14159,
  [SMALL_STATE(571)] = 14176,
  [SMALL_STATE(572)] = 14193,
  [SMALL_STATE(573)] = 14210,
  [SMALL_STATE(574)] = 14227,
  [SMALL_STATE(575)] = 14244,
  [SMALL_STATE(576)] = 14261,
  [SMALL_STATE(577)] = 14278,
  [SMALL_STATE(578)] = 14295,
  [SMALL_STATE(579)] = 14312,
  [SMALL_STATE(580)] = 14329,
  [SMALL_STATE(581)] = 14348,
  [SMALL_STATE(582)] = 14365,
  [SMALL_STATE(583)] = 14384,
  [SMALL_STATE(584)] = 14396,
  [SMALL_STATE(585)] = 14406,
  [SMALL_STATE(586)] = 14416,
  [SMALL_STATE(587)] = 14426,
  [SMALL_STATE(588)] = 14436,
  [SMALL_STATE(589)] = 14448,
  [SMALL_STATE(590)] = 14460,
  [SMALL_STATE(591)] = 14474,
  [SMALL_STATE(592)] = 14486,
  [SMALL_STATE(593)] = 14498,
  [SMALL_STATE(594)] = 14510,
  [SMALL_STATE(595)] = 14524,
  [SMALL_STATE(596)] = 14536,
  [SMALL_STATE(597)] = 14546,
  [SMALL_STATE(598)] = 14559,
  [SMALL_STATE(599)] = 14570,
  [SMALL_STATE(600)] = 14583,
  [SMALL_STATE(601)] = 14596,
  [SMALL_STATE(602)] = 14609,
  [SMALL_STATE(603)] = 14622,
  [SMALL_STATE(604)] = 14635,
  [SMALL_STATE(605)] = 14648,
  [SMALL_STATE(606)] = 14661,
  [SMALL_STATE(607)] = 14674,
  [SMALL_STATE(608)] = 14687,
  [SMALL_STATE(609)] = 14700,
  [SMALL_STATE(610)] = 14711,
  [SMALL_STATE(611)] = 14724,
  [SMALL_STATE(612)] = 14735,
  [SMALL_STATE(613)] = 14748,
  [SMALL_STATE(614)] = 14761,
  [SMALL_STATE(615)] = 14774,
  [SMALL_STATE(616)] = 14787,
  [SMALL_STATE(617)] = 14800,
  [SMALL_STATE(618)] = 14813,
  [SMALL_STATE(619)] = 14826,
  [SMALL_STATE(620)] = 14839,
  [SMALL_STATE(621)] = 14852,
  [SMALL_STATE(622)] = 14863,
  [SMALL_STATE(623)] = 14872,
  [SMALL_STATE(624)] = 14883,
  [SMALL_STATE(625)] = 14896,
  [SMALL_STATE(626)] = 14909,
  [SMALL_STATE(627)] = 14922,
  [SMALL_STATE(628)] = 14933,
  [SMALL_STATE(629)] = 14946,
  [SMALL_STATE(630)] = 14959,
  [SMALL_STATE(631)] = 14970,
  [SMALL_STATE(632)] = 14983,
  [SMALL_STATE(633)] = 14996,
  [SMALL_STATE(634)] = 15009,
  [SMALL_STATE(635)] = 15022,
  [SMALL_STATE(636)] = 15035,
  [SMALL_STATE(637)] = 15048,
  [SMALL_STATE(638)] = 15061,
  [SMALL_STATE(639)] = 15074,
  [SMALL_STATE(640)] = 15085,
  [SMALL_STATE(641)] = 15098,
  [SMALL_STATE(642)] = 15111,
  [SMALL_STATE(643)] = 15124,
  [SMALL_STATE(644)] = 15137,
  [SMALL_STATE(645)] = 15150,
  [SMALL_STATE(646)] = 15163,
  [SMALL_STATE(647)] = 15176,
  [SMALL_STATE(648)] = 15189,
  [SMALL_STATE(649)] = 15202,
  [SMALL_STATE(650)] = 15215,
  [SMALL_STATE(651)] = 15228,
  [SMALL_STATE(652)] = 15241,
  [SMALL_STATE(653)] = 15254,
  [SMALL_STATE(654)] = 15267,
  [SMALL_STATE(655)] = 15275,
  [SMALL_STATE(656)] = 15285,
  [SMALL_STATE(657)] = 15295,
  [SMALL_STATE(658)] = 15305,
  [SMALL_STATE(659)] = 15315,
  [SMALL_STATE(660)] = 15325,
  [SMALL_STATE(661)] = 15335,
  [SMALL_STATE(662)] = 15345,
  [SMALL_STATE(663)] = 15355,
  [SMALL_STATE(664)] = 15365,
  [SMALL_STATE(665)] = 15375,
  [SMALL_STATE(666)] = 15385,
  [SMALL_STATE(667)] = 15395,
  [SMALL_STATE(668)] = 15405,
  [SMALL_STATE(669)] = 15415,
  [SMALL_STATE(670)] = 15423,
  [SMALL_STATE(671)] = 15433,
  [SMALL_STATE(672)] = 15443,
  [SMALL_STATE(673)] = 15453,
  [SMALL_STATE(674)] = 15463,
  [SMALL_STATE(675)] = 15473,
  [SMALL_STATE(676)] = 15483,
  [SMALL_STATE(677)] = 15493,
  [SMALL_STATE(678)] = 15503,
  [SMALL_STATE(679)] = 15513,
  [SMALL_STATE(680)] = 15523,
  [SMALL_STATE(681)] = 15533,
  [SMALL_STATE(682)] = 15543,
  [SMALL_STATE(683)] = 15553,
  [SMALL_STATE(684)] = 15563,
  [SMALL_STATE(685)] = 15573,
  [SMALL_STATE(686)] = 15583,
  [SMALL_STATE(687)] = 15593,
  [SMALL_STATE(688)] = 15603,
  [SMALL_STATE(689)] = 15613,
  [SMALL_STATE(690)] = 15623,
  [SMALL_STATE(691)] = 15633,
  [SMALL_STATE(692)] = 15643,
  [SMALL_STATE(693)] = 15653,
  [SMALL_STATE(694)] = 15663,
  [SMALL_STATE(695)] = 15673,
  [SMALL_STATE(696)] = 15683,
  [SMALL_STATE(697)] = 15693,
  [SMALL_STATE(698)] = 15703,
  [SMALL_STATE(699)] = 15713,
  [SMALL_STATE(700)] = 15723,
  [SMALL_STATE(701)] = 15733,
  [SMALL_STATE(702)] = 15743,
  [SMALL_STATE(703)] = 15753,
  [SMALL_STATE(704)] = 15763,
  [SMALL_STATE(705)] = 15771,
  [SMALL_STATE(706)] = 15779,
  [SMALL_STATE(707)] = 15789,
  [SMALL_STATE(708)] = 15799,
  [SMALL_STATE(709)] = 15809,
  [SMALL_STATE(710)] = 15819,
  [SMALL_STATE(711)] = 15829,
  [SMALL_STATE(712)] = 15837,
  [SMALL_STATE(713)] = 15845,
  [SMALL_STATE(714)] = 15855,
  [SMALL_STATE(715)] = 15865,
  [SMALL_STATE(716)] = 15875,
  [SMALL_STATE(717)] = 15885,
  [SMALL_STATE(718)] = 15893,
  [SMALL_STATE(719)] = 15903,
  [SMALL_STATE(720)] = 15913,
  [SMALL_STATE(721)] = 15923,
  [SMALL_STATE(722)] = 15933,
  [SMALL_STATE(723)] = 15943,
  [SMALL_STATE(724)] = 15953,
  [SMALL_STATE(725)] = 15963,
  [SMALL_STATE(726)] = 15973,
  [SMALL_STATE(727)] = 15983,
  [SMALL_STATE(728)] = 15993,
  [SMALL_STATE(729)] = 16003,
  [SMALL_STATE(730)] = 16013,
  [SMALL_STATE(731)] = 16021,
  [SMALL_STATE(732)] = 16031,
  [SMALL_STATE(733)] = 16041,
  [SMALL_STATE(734)] = 16049,
  [SMALL_STATE(735)] = 16056,
  [SMALL_STATE(736)] = 16063,
  [SMALL_STATE(737)] = 16070,
  [SMALL_STATE(738)] = 16077,
  [SMALL_STATE(739)] = 16084,
  [SMALL_STATE(740)] = 16091,
  [SMALL_STATE(741)] = 16098,
  [SMALL_STATE(742)] = 16105,
  [SMALL_STATE(743)] = 16112,
  [SMALL_STATE(744)] = 16119,
  [SMALL_STATE(745)] = 16126,
  [SMALL_STATE(746)] = 16133,
  [SMALL_STATE(747)] = 16140,
  [SMALL_STATE(748)] = 16147,
  [SMALL_STATE(749)] = 16154,
  [SMALL_STATE(750)] = 16161,
  [SMALL_STATE(751)] = 16168,
  [SMALL_STATE(752)] = 16175,
  [SMALL_STATE(753)] = 16182,
  [SMALL_STATE(754)] = 16189,
  [SMALL_STATE(755)] = 16196,
  [SMALL_STATE(756)] = 16203,
  [SMALL_STATE(757)] = 16210,
  [SMALL_STATE(758)] = 16217,
  [SMALL_STATE(759)] = 16224,
  [SMALL_STATE(760)] = 16231,
  [SMALL_STATE(761)] = 16238,
  [SMALL_STATE(762)] = 16245,
  [SMALL_STATE(763)] = 16252,
  [SMALL_STATE(764)] = 16259,
  [SMALL_STATE(765)] = 16266,
  [SMALL_STATE(766)] = 16273,
  [SMALL_STATE(767)] = 16280,
  [SMALL_STATE(768)] = 16287,
  [SMALL_STATE(769)] = 16294,
  [SMALL_STATE(770)] = 16301,
  [SMALL_STATE(771)] = 16308,
  [SMALL_STATE(772)] = 16315,
  [SMALL_STATE(773)] = 16322,
  [SMALL_STATE(774)] = 16329,
  [SMALL_STATE(775)] = 16336,
  [SMALL_STATE(776)] = 16343,
  [SMALL_STATE(777)] = 16350,
  [SMALL_STATE(778)] = 16357,
  [SMALL_STATE(779)] = 16364,
  [SMALL_STATE(780)] = 16371,
  [SMALL_STATE(781)] = 16378,
  [SMALL_STATE(782)] = 16385,
  [SMALL_STATE(783)] = 16392,
  [SMALL_STATE(784)] = 16399,
  [SMALL_STATE(785)] = 16406,
  [SMALL_STATE(786)] = 16413,
  [SMALL_STATE(787)] = 16420,
  [SMALL_STATE(788)] = 16427,
  [SMALL_STATE(789)] = 16434,
  [SMALL_STATE(790)] = 16441,
  [SMALL_STATE(791)] = 16448,
  [SMALL_STATE(792)] = 16455,
  [SMALL_STATE(793)] = 16462,
  [SMALL_STATE(794)] = 16469,
  [SMALL_STATE(795)] = 16476,
  [SMALL_STATE(796)] = 16483,
  [SMALL_STATE(797)] = 16490,
  [SMALL_STATE(798)] = 16497,
  [SMALL_STATE(799)] = 16504,
  [SMALL_STATE(800)] = 16511,
  [SMALL_STATE(801)] = 16518,
  [SMALL_STATE(802)] = 16525,
  [SMALL_STATE(803)] = 16532,
  [SMALL_STATE(804)] = 16539,
  [SMALL_STATE(805)] = 16546,
  [SMALL_STATE(806)] = 16553,
  [SMALL_STATE(807)] = 16560,
  [SMALL_STATE(808)] = 16567,
  [SMALL_STATE(809)] = 16574,
  [SMALL_STATE(810)] = 16581,
  [SMALL_STATE(811)] = 16588,
  [SMALL_STATE(812)] = 16595,
  [SMALL_STATE(813)] = 16602,
  [SMALL_STATE(814)] = 16609,
  [SMALL_STATE(815)] = 16616,
  [SMALL_STATE(816)] = 16623,
  [SMALL_STATE(817)] = 16630,
  [SMALL_STATE(818)] = 16637,
  [SMALL_STATE(819)] = 16644,
  [SMALL_STATE(820)] = 16651,
  [SMALL_STATE(821)] = 16658,
  [SMALL_STATE(822)] = 16665,
  [SMALL_STATE(823)] = 16672,
  [SMALL_STATE(824)] = 16679,
  [SMALL_STATE(825)] = 16686,
  [SMALL_STATE(826)] = 16693,
  [SMALL_STATE(827)] = 16700,
  [SMALL_STATE(828)] = 16707,
  [SMALL_STATE(829)] = 16714,
  [SMALL_STATE(830)] = 16721,
  [SMALL_STATE(831)] = 16728,
  [SMALL_STATE(832)] = 16735,
  [SMALL_STATE(833)] = 16742,
  [SMALL_STATE(834)] = 16749,
  [SMALL_STATE(835)] = 16756,
  [SMALL_STATE(836)] = 16763,
  [SMALL_STATE(837)] = 16770,
  [SMALL_STATE(838)] = 16777,
  [SMALL_STATE(839)] = 16784,
  [SMALL_STATE(840)] = 16791,
  [SMALL_STATE(841)] = 16798,
  [SMALL_STATE(842)] = 16805,
  [SMALL_STATE(843)] = 16812,
  [SMALL_STATE(844)] = 16819,
  [SMALL_STATE(845)] = 16826,
  [SMALL_STATE(846)] = 16833,
  [SMALL_STATE(847)] = 16840,
  [SMALL_STATE(848)] = 16847,
  [SMALL_STATE(849)] = 16854,
  [SMALL_STATE(850)] = 16861,
  [SMALL_STATE(851)] = 16868,
  [SMALL_STATE(852)] = 16875,
  [SMALL_STATE(853)] = 16882,
  [SMALL_STATE(854)] = 16889,
  [SMALL_STATE(855)] = 16896,
  [SMALL_STATE(856)] = 16903,
  [SMALL_STATE(857)] = 16910,
  [SMALL_STATE(858)] = 16917,
  [SMALL_STATE(859)] = 16924,
  [SMALL_STATE(860)] = 16931,
  [SMALL_STATE(861)] = 16938,
  [SMALL_STATE(862)] = 16945,
  [SMALL_STATE(863)] = 16952,
  [SMALL_STATE(864)] = 16959,
  [SMALL_STATE(865)] = 16966,
  [SMALL_STATE(866)] = 16973,
  [SMALL_STATE(867)] = 16980,
  [SMALL_STATE(868)] = 16987,
  [SMALL_STATE(869)] = 16994,
  [SMALL_STATE(870)] = 17001,
  [SMALL_STATE(871)] = 17008,
  [SMALL_STATE(872)] = 17015,
  [SMALL_STATE(873)] = 17022,
  [SMALL_STATE(874)] = 17029,
  [SMALL_STATE(875)] = 17036,
  [SMALL_STATE(876)] = 17043,
  [SMALL_STATE(877)] = 17050,
  [SMALL_STATE(878)] = 17057,
  [SMALL_STATE(879)] = 17064,
  [SMALL_STATE(880)] = 17071,
  [SMALL_STATE(881)] = 17078,
  [SMALL_STATE(882)] = 17085,
  [SMALL_STATE(883)] = 17092,
  [SMALL_STATE(884)] = 17099,
  [SMALL_STATE(885)] = 17106,
  [SMALL_STATE(886)] = 17113,
  [SMALL_STATE(887)] = 17120,
  [SMALL_STATE(888)] = 17127,
  [SMALL_STATE(889)] = 17134,
  [SMALL_STATE(890)] = 17141,
  [SMALL_STATE(891)] = 17148,
  [SMALL_STATE(892)] = 17155,
  [SMALL_STATE(893)] = 17162,
  [SMALL_STATE(894)] = 17169,
  [SMALL_STATE(895)] = 17176,
  [SMALL_STATE(896)] = 17183,
  [SMALL_STATE(897)] = 17190,
  [SMALL_STATE(898)] = 17197,
  [SMALL_STATE(899)] = 17204,
  [SMALL_STATE(900)] = 17211,
  [SMALL_STATE(901)] = 17218,
  [SMALL_STATE(902)] = 17225,
  [SMALL_STATE(903)] = 17232,
  [SMALL_STATE(904)] = 17239,
  [SMALL_STATE(905)] = 17246,
  [SMALL_STATE(906)] = 17253,
  [SMALL_STATE(907)] = 17260,
  [SMALL_STATE(908)] = 17267,
  [SMALL_STATE(909)] = 17274,
  [SMALL_STATE(910)] = 17281,
  [SMALL_STATE(911)] = 17288,
  [SMALL_STATE(912)] = 17295,
  [SMALL_STATE(913)] = 17302,
  [SMALL_STATE(914)] = 17309,
  [SMALL_STATE(915)] = 17316,
  [SMALL_STATE(916)] = 17323,
  [SMALL_STATE(917)] = 17330,
  [SMALL_STATE(918)] = 17337,
  [SMALL_STATE(919)] = 17344,
  [SMALL_STATE(920)] = 17351,
  [SMALL_STATE(921)] = 17358,
  [SMALL_STATE(922)] = 17365,
  [SMALL_STATE(923)] = 17372,
  [SMALL_STATE(924)] = 17379,
  [SMALL_STATE(925)] = 17386,
  [SMALL_STATE(926)] = 17393,
  [SMALL_STATE(927)] = 17400,
  [SMALL_STATE(928)] = 17407,
  [SMALL_STATE(929)] = 17414,
  [SMALL_STATE(930)] = 17421,
  [SMALL_STATE(931)] = 17428,
  [SMALL_STATE(932)] = 17435,
  [SMALL_STATE(933)] = 17442,
  [SMALL_STATE(934)] = 17449,
  [SMALL_STATE(935)] = 17456,
  [SMALL_STATE(936)] = 17463,
  [SMALL_STATE(937)] = 17470,
  [SMALL_STATE(938)] = 17477,
  [SMALL_STATE(939)] = 17484,
  [SMALL_STATE(940)] = 17491,
  [SMALL_STATE(941)] = 17498,
  [SMALL_STATE(942)] = 17505,
  [SMALL_STATE(943)] = 17512,
  [SMALL_STATE(944)] = 17519,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(934),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(933),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(932),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(931),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(913),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(920),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(921),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(922),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(715),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(810),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(913),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(379),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(920),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(921),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(922),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(557),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(935),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(934),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(392),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(933),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(932),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(931),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(504),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 11),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 11),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 10),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 10),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, 0, 10),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, 0, 10),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, 0, 11),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, 0, 11),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, 0, 13),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, 0, 13),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 5),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_tags, 2, 0, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_tags, 2, 0, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, 0, 5),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, 0, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_block, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5, 0, 10),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5, 0, 10),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, 0, 5),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, 0, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_block, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 14),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 14),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 4, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 7, 0, 44),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 7, 0, 44),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 15),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 15),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 7, 0, 46),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 7, 0, 46),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 18),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 18),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_tags, 3, 0, 8),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_tags, 3, 0, 8),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 7, 0, 47),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 7, 0, 47),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 19),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 19),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 20),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 20),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 21),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 21),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 7, 0, 43),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 7, 0, 43),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 7, 0, 45),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 7, 0, 45),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 40),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 40),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 39),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 39),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 7, 0, 42),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 7, 0, 42),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 22),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 22),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 38),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 38),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 41),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 41),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 23),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 23),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 24),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 24),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 25),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 25),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5, 0, 13),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5, 0, 13),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 37),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 37),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 36),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 36),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 35),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 35),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 34),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 34),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 33),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 33),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 32),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 32),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 31),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 31),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 30),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 30),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 29),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 29),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 28),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 28),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 27),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 27),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 26),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 26),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5, 0, 11),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5, 0, 11),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(929),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(936),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(937),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(938),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_name, 1, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 1, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 6), SHIFT_REPEAT(155),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 6), SHIFT_REPEAT(165),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 6), SHIFT_REPEAT(164),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 6),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 6),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruby_inline, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_inline, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_name, 2, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 2, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 1, 0, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 1, 0, 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 1, 0, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 1, 0, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 1, 0, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 1, 0, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 1, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruby_inline_repeat1, 1, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ruby_fragment, 2, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ruby_fragment, 2, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ruby_fragment, 3, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ruby_fragment, 3, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wrapped_parameters, 3, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_parameters, 3, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wrapped_parameters, 2, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_parameters, 2, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ruby_multiline, 2, 0, 0),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_multiline, 2, 0, 0), SHIFT_REPEAT(236),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_multiline, 2, 0, 0), SHIFT_REPEAT(235),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_multiline, 2, 0, 0), SHIFT_REPEAT(234),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_multiline, 2, 0, 0), SHIFT_REPEAT(766),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_multiline, 2, 0, 0), SHIFT_REPEAT(199),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ruby_multiline, 2, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 4),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 4),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_floating_parameters_repeat1, 2, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_floating_parameters_repeat1, 2, 0, 0),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_floating_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(600),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_parameters, 1, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_parameters, 1, 0, 0),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_floating_parameters, 1, 0, 0), SHIFT(600),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_parameter_pair, 3, 0, 16),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_parameter_pair, 3, 0, 16),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_parameters, 2, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_parameters, 2, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 1, 0, 17),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_value, 1, 0, 17),
  [688] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(360),
  [697] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 3, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_value, 3, 0, 0),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(364),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(365),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(366),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ruby_multiline, 1, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ruby_multiline, 1, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 2, 0, 0),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_value, 2, 0, 0),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__html_line_repeat1, 2, 0, 0), SHIFT_REPEAT(715),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__html_line_repeat1, 2, 0, 0),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__html_line_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 5, 0, 0),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_text_inline, 5, 0, 0), SHIFT(825),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 2, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_name, 1, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0), SHIFT(825),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 4, 0, 0),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_text_inline, 4, 0, 0), SHIFT(825),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 3, 0, 0),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_text_inline, 3, 0, 0), SHIFT(825),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_line, 1, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [790] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(347),
  [793] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [796] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [874] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [877] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat1, 2, 0, 0),
  [882] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [885] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [888] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat2, 2, 0, 0), SHIFT_REPEAT(309),
  [891] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat2, 2, 0, 0), SHIFT_REPEAT(310),
  [894] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat2, 2, 0, 0), SHIFT_REPEAT(247),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat2, 2, 0, 0),
  [899] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat2, 2, 0, 0), SHIFT_REPEAT(312),
  [902] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat3, 2, 0, 0), SHIFT_REPEAT(318),
  [905] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat3, 2, 0, 0), SHIFT_REPEAT(319),
  [908] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat3, 2, 0, 0), SHIFT_REPEAT(321),
  [911] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat3, 2, 0, 0), SHIFT_REPEAT(248),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat3, 2, 0, 0),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [918] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [921] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [924] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(341),
  [927] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(396),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [938] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(332),
  [941] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [944] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [947] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [950] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(376),
  [953] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(556),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text, 2, 0, 0),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1008] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [1011] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [1014] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [1017] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1062] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_child_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [1065] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_child_repeat1, 2, 0, 0), SHIFT_REPEAT(588),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_child_repeat1, 2, 0, 0),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1074] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_injector_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [1077] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_injector_repeat1, 2, 0, 0), SHIFT_REPEAT(588),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_injector_repeat1, 2, 0, 0),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0),
  [1176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(375),
  [1179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(517),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(372),
  [1265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(588),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruby_interpolation, 3, 0, 9),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_interpolation, 3, 0, 9),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text, 1, 0, 0),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text, 1, 0, 0),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wrapped_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(591),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_wrapped_parameters_repeat1, 2, 0, 0),
  [1365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wrapped_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(592),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_child_repeat1, 2, 0, 0),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_injector_repeat1, 2, 0, 0),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_opening_tag, 5, 0, 7),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_opening_tag, 4, 0, 7),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_closing_tag, 4, 0, 12),
  [1382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wrapped_parameter_pair, 1, 0, 3),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_parameter_pair, 1, 0, 3),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_name, 1, 0, 0),
  [1390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_child, 4, 0, 0),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_child, 4, 0, 0),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_opening_tag, 3, 0, 7),
  [1398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_floating_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(604),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_wrapped_parameters_repeat1, 1, 0, 0),
  [1423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_wrapped_parameters_repeat1, 1, 0, 0),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_value_repeat1, 2, 0, 0), SHIFT_REPEAT(617),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_value_repeat1, 2, 0, 0),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wrapped_parameter_pair, 3, 0, 16),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_parameter_pair, 3, 0, 16),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 5, 0, 0),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_inline, 2, 0, 0),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 6, 0, 0),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_child, 5, 0, 0),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 3, 0, 0),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_child, 4, 0, 0),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 4, 0, 0),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_inline, 1, 0, 0),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 4, 0, 0),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 3, 0, 0),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1984] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token_string_start = 3,
  ts_external_token_string_content = 4,
  ts_external_token_string_end = 5,
  ts_external_token__comment = 6,
  ts_external_token_RBRACK = 7,
  ts_external_token_RPAREN = 8,
  ts_external_token_RBRACE = 9,
  ts_external_token__except = 10,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token_string_start] = sym_string_start,
  [ts_external_token_string_content] = sym_string_content,
  [ts_external_token_string_end] = sym_string_end,
  [ts_external_token__comment] = sym__comment,
  [ts_external_token_RBRACK] = anon_sym_RBRACK,
  [ts_external_token_RPAREN] = anon_sym_RPAREN,
  [ts_external_token_RBRACE] = anon_sym_RBRACE,
  [ts_external_token__except] = sym__except,
};

static const bool ts_external_scanner_states[13][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_string_start] = true,
    [ts_external_token_string_content] = true,
    [ts_external_token_string_end] = true,
    [ts_external_token__comment] = true,
    [ts_external_token_RBRACK] = true,
    [ts_external_token_RPAREN] = true,
    [ts_external_token_RBRACE] = true,
    [ts_external_token__except] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [5] = {
    [ts_external_token__newline] = true,
  },
  [6] = {
    [ts_external_token_string_start] = true,
  },
  [7] = {
    [ts_external_token__newline] = true,
    [ts_external_token__dedent] = true,
  },
  [8] = {
    [ts_external_token_RBRACE] = true,
  },
  [9] = {
    [ts_external_token_RBRACK] = true,
  },
  [10] = {
    [ts_external_token_RPAREN] = true,
  },
  [11] = {
    [ts_external_token_string_content] = true,
    [ts_external_token_string_end] = true,
  },
  [12] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_slim_external_scanner_create(void);
void tree_sitter_slim_external_scanner_destroy(void *);
bool tree_sitter_slim_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_slim_external_scanner_serialize(void *, char *);
void tree_sitter_slim_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_slim(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_slim_external_scanner_create,
      tree_sitter_slim_external_scanner_destroy,
      tree_sitter_slim_external_scanner_scan,
      tree_sitter_slim_external_scanner_serialize,
      tree_sitter_slim_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
