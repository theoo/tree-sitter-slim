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
#define STATE_COUNT 942
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
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 8,
  [13] = 13,
  [14] = 7,
  [15] = 15,
  [16] = 13,
  [17] = 11,
  [18] = 18,
  [19] = 15,
  [20] = 20,
  [21] = 10,
  [22] = 9,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 29,
  [33] = 30,
  [34] = 28,
  [35] = 27,
  [36] = 24,
  [37] = 23,
  [38] = 20,
  [39] = 18,
  [40] = 40,
  [41] = 31,
  [42] = 26,
  [43] = 43,
  [44] = 40,
  [45] = 25,
  [46] = 43,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 77,
  [79] = 76,
  [80] = 73,
  [81] = 81,
  [82] = 74,
  [83] = 72,
  [84] = 71,
  [85] = 70,
  [86] = 69,
  [87] = 53,
  [88] = 68,
  [89] = 89,
  [90] = 67,
  [91] = 66,
  [92] = 65,
  [93] = 64,
  [94] = 63,
  [95] = 62,
  [96] = 61,
  [97] = 60,
  [98] = 59,
  [99] = 58,
  [100] = 57,
  [101] = 56,
  [102] = 55,
  [103] = 54,
  [104] = 50,
  [105] = 49,
  [106] = 106,
  [107] = 47,
  [108] = 106,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 89,
  [118] = 52,
  [119] = 119,
  [120] = 119,
  [121] = 51,
  [122] = 81,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 48,
  [127] = 127,
  [128] = 109,
  [129] = 110,
  [130] = 130,
  [131] = 131,
  [132] = 111,
  [133] = 131,
  [134] = 123,
  [135] = 130,
  [136] = 112,
  [137] = 125,
  [138] = 124,
  [139] = 116,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 113,
  [144] = 75,
  [145] = 140,
  [146] = 114,
  [147] = 127,
  [148] = 115,
  [149] = 141,
  [150] = 142,
  [151] = 151,
  [152] = 151,
  [153] = 151,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 159,
  [161] = 161,
  [162] = 159,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 157,
  [171] = 158,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 172,
  [176] = 174,
  [177] = 177,
  [178] = 172,
  [179] = 174,
  [180] = 156,
  [181] = 181,
  [182] = 182,
  [183] = 156,
  [184] = 158,
  [185] = 185,
  [186] = 157,
  [187] = 156,
  [188] = 157,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 158,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 193,
  [197] = 197,
  [198] = 158,
  [199] = 157,
  [200] = 156,
  [201] = 201,
  [202] = 197,
  [203] = 156,
  [204] = 157,
  [205] = 205,
  [206] = 158,
  [207] = 207,
  [208] = 156,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 157,
  [213] = 213,
  [214] = 177,
  [215] = 173,
  [216] = 164,
  [217] = 156,
  [218] = 163,
  [219] = 219,
  [220] = 156,
  [221] = 157,
  [222] = 158,
  [223] = 223,
  [224] = 224,
  [225] = 158,
  [226] = 164,
  [227] = 158,
  [228] = 163,
  [229] = 158,
  [230] = 156,
  [231] = 157,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 169,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 169,
  [242] = 163,
  [243] = 243,
  [244] = 164,
  [245] = 157,
  [246] = 233,
  [247] = 232,
  [248] = 248,
  [249] = 233,
  [250] = 248,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 255,
  [260] = 254,
  [261] = 261,
  [262] = 256,
  [263] = 251,
  [264] = 264,
  [265] = 265,
  [266] = 253,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 251,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 264,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 265,
  [279] = 279,
  [280] = 257,
  [281] = 258,
  [282] = 271,
  [283] = 252,
  [284] = 272,
  [285] = 285,
  [286] = 273,
  [287] = 287,
  [288] = 288,
  [289] = 252,
  [290] = 290,
  [291] = 257,
  [292] = 292,
  [293] = 269,
  [294] = 268,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 258,
  [304] = 304,
  [305] = 296,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 252,
  [310] = 310,
  [311] = 279,
  [312] = 292,
  [313] = 277,
  [314] = 285,
  [315] = 177,
  [316] = 173,
  [317] = 287,
  [318] = 276,
  [319] = 275,
  [320] = 288,
  [321] = 177,
  [322] = 173,
  [323] = 295,
  [324] = 301,
  [325] = 268,
  [326] = 297,
  [327] = 310,
  [328] = 269,
  [329] = 292,
  [330] = 181,
  [331] = 257,
  [332] = 258,
  [333] = 252,
  [334] = 257,
  [335] = 308,
  [336] = 258,
  [337] = 306,
  [338] = 277,
  [339] = 276,
  [340] = 275,
  [341] = 181,
  [342] = 275,
  [343] = 169,
  [344] = 252,
  [345] = 257,
  [346] = 163,
  [347] = 164,
  [348] = 164,
  [349] = 302,
  [350] = 252,
  [351] = 258,
  [352] = 257,
  [353] = 301,
  [354] = 254,
  [355] = 255,
  [356] = 256,
  [357] = 253,
  [358] = 264,
  [359] = 265,
  [360] = 360,
  [361] = 271,
  [362] = 272,
  [363] = 273,
  [364] = 279,
  [365] = 285,
  [366] = 287,
  [367] = 288,
  [368] = 295,
  [369] = 297,
  [370] = 252,
  [371] = 258,
  [372] = 257,
  [373] = 258,
  [374] = 258,
  [375] = 252,
  [376] = 258,
  [377] = 257,
  [378] = 252,
  [379] = 163,
  [380] = 360,
  [381] = 258,
  [382] = 164,
  [383] = 261,
  [384] = 296,
  [385] = 385,
  [386] = 257,
  [387] = 163,
  [388] = 252,
  [389] = 290,
  [390] = 257,
  [391] = 275,
  [392] = 169,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 393,
  [400] = 396,
  [401] = 401,
  [402] = 398,
  [403] = 403,
  [404] = 394,
  [405] = 401,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 407,
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
  [424] = 408,
  [425] = 403,
  [426] = 410,
  [427] = 406,
  [428] = 411,
  [429] = 423,
  [430] = 412,
  [431] = 413,
  [432] = 397,
  [433] = 414,
  [434] = 434,
  [435] = 360,
  [436] = 436,
  [437] = 395,
  [438] = 415,
  [439] = 439,
  [440] = 177,
  [441] = 441,
  [442] = 173,
  [443] = 416,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 417,
  [448] = 448,
  [449] = 434,
  [450] = 418,
  [451] = 439,
  [452] = 452,
  [453] = 446,
  [454] = 419,
  [455] = 411,
  [456] = 410,
  [457] = 408,
  [458] = 407,
  [459] = 401,
  [460] = 444,
  [461] = 398,
  [462] = 181,
  [463] = 393,
  [464] = 397,
  [465] = 395,
  [466] = 169,
  [467] = 439,
  [468] = 436,
  [469] = 448,
  [470] = 448,
  [471] = 169,
  [472] = 472,
  [473] = 441,
  [474] = 446,
  [475] = 444,
  [476] = 441,
  [477] = 422,
  [478] = 421,
  [479] = 419,
  [480] = 445,
  [481] = 423,
  [482] = 418,
  [483] = 417,
  [484] = 406,
  [485] = 434,
  [486] = 403,
  [487] = 420,
  [488] = 420,
  [489] = 422,
  [490] = 394,
  [491] = 436,
  [492] = 396,
  [493] = 416,
  [494] = 421,
  [495] = 415,
  [496] = 412,
  [497] = 413,
  [498] = 414,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 502,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 500,
  [513] = 506,
  [514] = 511,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 517,
  [519] = 181,
  [520] = 509,
  [521] = 503,
  [522] = 505,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 177,
  [527] = 173,
  [528] = 181,
  [529] = 529,
  [530] = 530,
  [531] = 177,
  [532] = 532,
  [533] = 177,
  [534] = 534,
  [535] = 501,
  [536] = 536,
  [537] = 504,
  [538] = 508,
  [539] = 173,
  [540] = 173,
  [541] = 529,
  [542] = 502,
  [543] = 177,
  [544] = 544,
  [545] = 499,
  [546] = 173,
  [547] = 515,
  [548] = 500,
  [549] = 523,
  [550] = 534,
  [551] = 525,
  [552] = 525,
  [553] = 506,
  [554] = 530,
  [555] = 499,
  [556] = 503,
  [557] = 557,
  [558] = 173,
  [559] = 510,
  [560] = 532,
  [561] = 177,
  [562] = 516,
  [563] = 504,
  [564] = 510,
  [565] = 173,
  [566] = 177,
  [567] = 557,
  [568] = 508,
  [569] = 529,
  [570] = 532,
  [571] = 536,
  [572] = 511,
  [573] = 509,
  [574] = 523,
  [575] = 181,
  [576] = 517,
  [577] = 544,
  [578] = 501,
  [579] = 534,
  [580] = 580,
  [581] = 530,
  [582] = 529,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 529,
  [590] = 590,
  [591] = 591,
  [592] = 584,
  [593] = 583,
  [594] = 594,
  [595] = 595,
  [596] = 594,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 598,
  [604] = 601,
  [605] = 210,
  [606] = 606,
  [607] = 600,
  [608] = 599,
  [609] = 595,
  [610] = 610,
  [611] = 594,
  [612] = 612,
  [613] = 195,
  [614] = 614,
  [615] = 614,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 616,
  [623] = 209,
  [624] = 617,
  [625] = 618,
  [626] = 626,
  [627] = 602,
  [628] = 621,
  [629] = 599,
  [630] = 600,
  [631] = 210,
  [632] = 194,
  [633] = 612,
  [634] = 614,
  [635] = 616,
  [636] = 612,
  [637] = 617,
  [638] = 618,
  [639] = 620,
  [640] = 640,
  [641] = 205,
  [642] = 621,
  [643] = 620,
  [644] = 594,
  [645] = 619,
  [646] = 602,
  [647] = 205,
  [648] = 640,
  [649] = 209,
  [650] = 602,
  [651] = 30,
  [652] = 209,
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
  [669] = 655,
  [670] = 654,
  [671] = 653,
  [672] = 656,
  [673] = 673,
  [674] = 657,
  [675] = 658,
  [676] = 659,
  [677] = 660,
  [678] = 661,
  [679] = 662,
  [680] = 663,
  [681] = 664,
  [682] = 665,
  [683] = 666,
  [684] = 667,
  [685] = 668,
  [686] = 655,
  [687] = 654,
  [688] = 653,
  [689] = 668,
  [690] = 667,
  [691] = 666,
  [692] = 665,
  [693] = 664,
  [694] = 663,
  [695] = 662,
  [696] = 696,
  [697] = 697,
  [698] = 211,
  [699] = 661,
  [700] = 660,
  [701] = 659,
  [702] = 658,
  [703] = 657,
  [704] = 704,
  [705] = 656,
  [706] = 706,
  [707] = 707,
  [708] = 40,
  [709] = 205,
  [710] = 710,
  [711] = 207,
  [712] = 712,
  [713] = 18,
  [714] = 20,
  [715] = 715,
  [716] = 23,
  [717] = 24,
  [718] = 29,
  [719] = 210,
  [720] = 720,
  [721] = 28,
  [722] = 27,
  [723] = 224,
  [724] = 724,
  [725] = 10,
  [726] = 673,
  [727] = 11,
  [728] = 13,
  [729] = 15,
  [730] = 7,
  [731] = 731,
  [732] = 732,
  [733] = 50,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 49,
  [743] = 106,
  [744] = 47,
  [745] = 745,
  [746] = 48,
  [747] = 109,
  [748] = 110,
  [749] = 111,
  [750] = 112,
  [751] = 113,
  [752] = 114,
  [753] = 115,
  [754] = 116,
  [755] = 89,
  [756] = 52,
  [757] = 119,
  [758] = 51,
  [759] = 123,
  [760] = 124,
  [761] = 127,
  [762] = 762,
  [763] = 131,
  [764] = 130,
  [765] = 745,
  [766] = 762,
  [767] = 142,
  [768] = 715,
  [769] = 769,
  [770] = 770,
  [771] = 585,
  [772] = 772,
  [773] = 745,
  [774] = 741,
  [775] = 740,
  [776] = 739,
  [777] = 738,
  [778] = 778,
  [779] = 737,
  [780] = 736,
  [781] = 735,
  [782] = 734,
  [783] = 55,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 790,
  [791] = 791,
  [792] = 185,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 741,
  [797] = 732,
  [798] = 798,
  [799] = 799,
  [800] = 739,
  [801] = 56,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 57,
  [806] = 806,
  [807] = 58,
  [808] = 808,
  [809] = 59,
  [810] = 810,
  [811] = 60,
  [812] = 812,
  [813] = 61,
  [814] = 814,
  [815] = 62,
  [816] = 816,
  [817] = 817,
  [818] = 189,
  [819] = 778,
  [820] = 795,
  [821] = 583,
  [822] = 822,
  [823] = 823,
  [824] = 824,
  [825] = 825,
  [826] = 731,
  [827] = 827,
  [828] = 63,
  [829] = 829,
  [830] = 830,
  [831] = 831,
  [832] = 832,
  [833] = 833,
  [834] = 762,
  [835] = 64,
  [836] = 54,
  [837] = 65,
  [838] = 838,
  [839] = 66,
  [840] = 840,
  [841] = 67,
  [842] = 842,
  [843] = 798,
  [844] = 844,
  [845] = 68,
  [846] = 69,
  [847] = 724,
  [848] = 799,
  [849] = 71,
  [850] = 72,
  [851] = 73,
  [852] = 76,
  [853] = 77,
  [854] = 74,
  [855] = 855,
  [856] = 823,
  [857] = 822,
  [858] = 762,
  [859] = 814,
  [860] = 829,
  [861] = 812,
  [862] = 70,
  [863] = 810,
  [864] = 762,
  [865] = 808,
  [866] = 830,
  [867] = 806,
  [868] = 770,
  [869] = 804,
  [870] = 803,
  [871] = 802,
  [872] = 791,
  [873] = 790,
  [874] = 789,
  [875] = 788,
  [876] = 787,
  [877] = 786,
  [878] = 829,
  [879] = 824,
  [880] = 817,
  [881] = 816,
  [882] = 772,
  [883] = 799,
  [884] = 798,
  [885] = 732,
  [886] = 731,
  [887] = 795,
  [888] = 823,
  [889] = 822,
  [890] = 793,
  [891] = 814,
  [892] = 734,
  [893] = 812,
  [894] = 735,
  [895] = 810,
  [896] = 736,
  [897] = 808,
  [898] = 737,
  [899] = 806,
  [900] = 738,
  [901] = 804,
  [902] = 803,
  [903] = 802,
  [904] = 791,
  [905] = 790,
  [906] = 789,
  [907] = 788,
  [908] = 787,
  [909] = 786,
  [910] = 910,
  [911] = 911,
  [912] = 831,
  [913] = 913,
  [914] = 740,
  [915] = 745,
  [916] = 916,
  [917] = 917,
  [918] = 918,
  [919] = 919,
  [920] = 913,
  [921] = 911,
  [922] = 844,
  [923] = 842,
  [924] = 840,
  [925] = 838,
  [926] = 910,
  [927] = 927,
  [928] = 919,
  [929] = 918,
  [930] = 917,
  [931] = 910,
  [932] = 855,
  [933] = 917,
  [934] = 918,
  [935] = 919,
  [936] = 913,
  [937] = 911,
  [938] = 844,
  [939] = 842,
  [940] = 840,
  [941] = 838,
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
      if (eof) ADVANCE(209);
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(193);
      if (lookahead == '\r') SKIP(202);
      if (lookahead == ' ') ADVANCE(183);
      if (lookahead == '!') ADVANCE(756);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ')') ADVANCE(556);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(207);
      if (lookahead == ']') ADVANCE(671);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '}') ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\r') SKIP(1);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(756);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ')') ADVANCE(555);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(162);
      if (lookahead == ']') ADVANCE(670);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '}') ADVANCE(613);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 2:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\r') SKIP(119);
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == '!') ADVANCE(756);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ')') ADVANCE(555);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(162);
      if (lookahead == ']') ADVANCE(670);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '}') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 3:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\r') SKIP(119);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '!') ADVANCE(756);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ')') ADVANCE(555);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(162);
      if (lookahead == ']') ADVANCE(670);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '}') ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == '\f') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 4:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == 0x0b) SKIP(4);
      if (lookahead == '\r') SKIP(4);
      if (lookahead == ' ') ADVANCE(367);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == '\\') SKIP(165);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 5:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '\r') SKIP(120);
      if (lookahead == ' ') ADVANCE(378);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == '[') ADVANCE(480);
      if (lookahead == '\\') SKIP(165);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 6:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '\r') SKIP(120);
      if (lookahead == ' ') ADVANCE(367);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == '\\') SKIP(165);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 7:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '\r') SKIP(120);
      if (lookahead == ' ') ADVANCE(380);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == '\\') SKIP(165);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 8:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '\r') SKIP(8);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == '\\') SKIP(166);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 9:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '\r') SKIP(121);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == '=') ADVANCE(484);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == '\\') SKIP(166);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(187);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 10:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '\r') SKIP(121);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == '\\') SKIP(166);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 11:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '\r') SKIP(121);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == '\\') SKIP(166);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 12:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(12);
      if (lookahead == 0x0b) SKIP(12);
      if (lookahead == '\r') SKIP(12);
      if (lookahead == '-') ADVANCE(706);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '\\') SKIP(169);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(388);
      END_STATE();
    case 13:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '\r') SKIP(126);
      if (lookahead == '-') ADVANCE(706);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '\\') SKIP(169);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(381);
      END_STATE();
    case 14:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '\r') SKIP(126);
      if (lookahead == '-') ADVANCE(706);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '\\') SKIP(169);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(388);
      END_STATE();
    case 15:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(15);
      if (lookahead == 0x0b) ADVANCE(749);
      if (lookahead == '\r') SKIP(15);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(748);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(748);
      END_STATE();
    case 16:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '\r') SKIP(138);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '=') ADVANCE(484);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(385);
      if (lookahead != 0) ADVANCE(748);
      END_STATE();
    case 17:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '\r') SKIP(138);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(748);
      END_STATE();
    case 18:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(18);
      if (lookahead == 0x0b) SKIP(18);
      if (lookahead == '\r') SKIP(18);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '\\') SKIP(174);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(388);
      END_STATE();
    case 19:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(18);
      if (lookahead == '\r') SKIP(140);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '[') ADVANCE(480);
      if (lookahead == '\\') SKIP(174);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(379);
      END_STATE();
    case 20:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(18);
      if (lookahead == '\r') SKIP(140);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '\\') SKIP(174);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(388);
      END_STATE();
    case 21:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(21);
      if (lookahead == '\r') SKIP(21);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == '\\') SKIP(175);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 22:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(21);
      if (lookahead == '\r') SKIP(141);
      if (lookahead == ' ') ADVANCE(183);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == '\\') SKIP(175);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 23:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(21);
      if (lookahead == '\r') SKIP(141);
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == '\\') SKIP(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 24:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(21);
      if (lookahead == '\r') SKIP(141);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == '\\') SKIP(175);
      if (lookahead == '\t' ||
          lookahead == '\f') SKIP(24);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 25:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '\r') SKIP(25);
      if (lookahead == '-') ADVANCE(706);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '\\') SKIP(179);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(25);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 26:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '\r') SKIP(148);
      if (lookahead == '-') ADVANCE(706);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '\\') SKIP(179);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(26);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 27:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '\r') SKIP(148);
      if (lookahead == '-') ADVANCE(706);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '\\') SKIP(179);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 28:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '\r') ADVANCE(438);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '=') ADVANCE(484);
      if (lookahead == '\\') SKIP(181);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 29:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '\r') ADVANCE(438);
      if (lookahead == '=') ADVANCE(484);
      if (lookahead == '\\') SKIP(181);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 30:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '\r') ADVANCE(438);
      if (lookahead == '\\') SKIP(181);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 31:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '\r') SKIP(31);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\\') ADVANCE(748);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(748);
      END_STATE();
    case 32:
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '\r') SKIP(153);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(748);
      END_STATE();
    case 33:
      if ((!eof && lookahead == 00)) ADVANCE(224);
      if (lookahead == '\n') SKIP(33);
      if (lookahead == 0x0b) ADVANCE(759);
      if (lookahead == '\r') SKIP(33);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == '=') ADVANCE(717);
      if (lookahead == '\\') ADVANCE(770);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(360);
      if (lookahead != 0) ADVANCE(775);
      END_STATE();
    case 34:
      if ((!eof && lookahead == 00)) ADVANCE(224);
      if (lookahead == '\n') SKIP(33);
      if (lookahead == '\r') SKIP(123);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == '=') ADVANCE(717);
      if (lookahead == '\\') ADVANCE(770);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(392);
      if (lookahead != 0) ADVANCE(775);
      END_STATE();
    case 35:
      if ((!eof && lookahead == 00)) ADVANCE(224);
      if (lookahead == '\n') SKIP(35);
      if (lookahead == '\r') SKIP(35);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == '\\') ADVANCE(771);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(768);
      if (lookahead != 0) ADVANCE(775);
      END_STATE();
    case 36:
      if ((!eof && lookahead == 00)) ADVANCE(224);
      if (lookahead == '\n') SKIP(35);
      if (lookahead == '\r') SKIP(134);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == '\\') ADVANCE(771);
      if (lookahead != 0) ADVANCE(775);
      END_STATE();
    case 37:
      if ((!eof && lookahead == 00)) ADVANCE(224);
      if (lookahead == '\n') SKIP(37);
      if (lookahead == '\r') SKIP(37);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == '\\') ADVANCE(772);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(766);
      if (lookahead != 0) ADVANCE(775);
      END_STATE();
    case 38:
      if ((!eof && lookahead == 00)) ADVANCE(224);
      if (lookahead == '\n') SKIP(37);
      if (lookahead == '\r') SKIP(135);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == '\\') ADVANCE(772);
      if (lookahead != 0) ADVANCE(775);
      END_STATE();
    case 39:
      if ((!eof && lookahead == 00)) ADVANCE(224);
      if (lookahead == '\n') SKIP(39);
      if (lookahead == 0x0b) ADVANCE(760);
      if (lookahead == '\r') SKIP(39);
      if (lookahead == '!') ADVANCE(757);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == '[') ADVANCE(618);
      if (lookahead == '\\') ADVANCE(773);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(364);
      if (lookahead != 0) ADVANCE(775);
      END_STATE();
    case 40:
      if ((!eof && lookahead == 00)) ADVANCE(224);
      if (lookahead == '\n') SKIP(39);
      if (lookahead == '\r') SKIP(139);
      if (lookahead == '!') ADVANCE(757);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == '[') ADVANCE(618);
      if (lookahead == '\\') ADVANCE(773);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(392);
      if (lookahead != 0) ADVANCE(775);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        0, 218,
        '\n', 492,
        '\r', 518,
        ' ', 382,
        '(', 488,
        ')', 555,
        '-', 708,
        '/', 231,
        ':', 345,
        '=', 718,
        '[', 619,
        '\\', 544,
        '{', 561,
        '\t', 370,
        '\f', 370,
        ',', 554,
        ';', 554,
        ']', 554,
        '}', 554,
      );
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        0, 218,
        '\n', 424,
        '\r', 427,
        ' ', 466,
        '(', 488,
        ')', 555,
        '[', 619,
        '\\', 539,
        ']', 482,
        '{', 561,
        '\t', 448,
        '\f', 448,
        ',', 554,
        ':', 554,
        ';', 554,
        '}', 554,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 43:
      ADVANCE_MAP(
        0, 218,
        '\n', 424,
        '\r', 427,
        ' ', 459,
        '(', 488,
        ')', 556,
        '[', 619,
        '\\', 539,
        '{', 561,
        '\t', 451,
        '\f', 451,
        ',', 554,
        ':', 554,
        ';', 554,
        ']', 554,
        '}', 554,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        0, 218,
        '\n', 497,
        '\r', 523,
        ' ', 389,
        '(', 488,
        ')', 555,
        ':', 345,
        '[', 619,
        '\\', 540,
        '{', 561,
        '\t', 371,
        '\f', 371,
        ',', 554,
        ';', 554,
        ']', 554,
        '}', 554,
      );
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        0, 218,
        '\n', 500,
        '\r', 528,
        '(', 488,
        ')', 555,
        '[', 619,
        '\\', 541,
        '{', 561,
        '}', 614,
        ' ', 554,
        ',', 554,
        ':', 554,
        ';', 554,
        ']', 554,
      );
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 46:
      ADVANCE_MAP(
        0, 218,
        '\n', 503,
        '\r', 530,
        ' ', 547,
        '(', 488,
        ')', 556,
        '[', 619,
        '\\', 542,
        '{', 561,
        '\t', 545,
        '\f', 545,
        ',', 554,
        ':', 554,
        ';', 554,
        ']', 554,
        '}', 554,
      );
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 47:
      ADVANCE_MAP(
        0, 218,
        '\n', 503,
        '\r', 530,
        ' ', 548,
        '(', 488,
        ')', 555,
        '[', 619,
        '\\', 542,
        ']', 482,
        '{', 561,
        '\t', 546,
        '\f', 546,
        ',', 554,
        ':', 554,
        ';', 554,
        '}', 554,
      );
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 48:
      ADVANCE_MAP(
        0, 220,
        '\n', 563,
        '\r', 583,
        ' ', 383,
        '(', 491,
        '-', 710,
        '/', 232,
        ':', 347,
        '=', 719,
        '[', 620,
        '\\', 603,
        '{', 559,
        '}', 613,
        '\t', 372,
        '\f', 372,
        ')', 612,
        ',', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 49:
      ADVANCE_MAP(
        0, 220,
        '\n', 566,
        '\r', 588,
        ' ', 390,
        '(', 491,
        ':', 347,
        '[', 620,
        '\\', 600,
        '{', 559,
        '}', 613,
        '\t', 373,
        '\f', 373,
        ')', 612,
        ',', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 50:
      ADVANCE_MAP(
        0, 220,
        '\n', 569,
        '\r', 591,
        ' ', 606,
        '(', 491,
        ')', 479,
        '[', 620,
        '\\', 601,
        '{', 559,
        '}', 613,
        '\t', 604,
        '\f', 604,
        ',', 612,
        ':', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 51:
      ADVANCE_MAP(
        0, 220,
        '\n', 569,
        '\r', 591,
        ' ', 607,
        '(', 491,
        '[', 620,
        '\\', 601,
        ']', 483,
        '{', 559,
        '}', 613,
        '\t', 605,
        '\f', 605,
        ')', 612,
        ',', 612,
        ':', 612,
        ';', 612,
      );
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 52:
      ADVANCE_MAP(
        0, 220,
        '\n', 569,
        '\r', 591,
        '(', 491,
        '[', 620,
        '\\', 601,
        '{', 559,
        '}', 613,
        ' ', 612,
        ')', 612,
        ',', 612,
        ':', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 53:
      ADVANCE_MAP(
        0, 220,
        '\n', 439,
        '\r', 444,
        ' ', 462,
        '(', 491,
        ')', 479,
        '[', 620,
        '\\', 599,
        '{', 559,
        '}', 613,
        '\t', 450,
        '\f', 450,
        ',', 612,
        ':', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 54:
      ADVANCE_MAP(
        0, 220,
        '\n', 439,
        '\r', 444,
        ' ', 467,
        '(', 491,
        '[', 620,
        '\\', 599,
        ']', 483,
        '{', 559,
        '}', 613,
        '\t', 452,
        '\f', 452,
        ')', 612,
        ',', 612,
        ':', 612,
        ';', 612,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 55:
      ADVANCE_MAP(
        0, 219,
        '\n', 621,
        '\r', 641,
        ' ', 384,
        '(', 490,
        '-', 709,
        '/', 233,
        ':', 346,
        '=', 720,
        '[', 616,
        '\\', 661,
        ']', 670,
        '{', 562,
        '\t', 374,
        '\f', 374,
        ')', 669,
        ',', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead != 0) ADVANCE(668);
      END_STATE();
    case 56:
      ADVANCE_MAP(
        0, 219,
        '\n', 624,
        '\r', 646,
        ' ', 391,
        '(', 490,
        ':', 346,
        '[', 616,
        '\\', 657,
        ']', 670,
        '{', 562,
        '\t', 375,
        '\f', 375,
        ')', 669,
        ',', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead != 0) ADVANCE(668);
      END_STATE();
    case 57:
      ADVANCE_MAP(
        0, 219,
        '\n', 627,
        '\r', 647,
        '(', 490,
        '[', 616,
        '\\', 658,
        ']', 670,
        '{', 562,
        '}', 615,
        ' ', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
      );
      if (lookahead != 0) ADVANCE(668);
      END_STATE();
    case 58:
      ADVANCE_MAP(
        0, 219,
        '\n', 630,
        '\r', 649,
        ' ', 664,
        '(', 490,
        ')', 478,
        '[', 616,
        '\\', 659,
        ']', 670,
        '{', 562,
        '\t', 662,
        '\f', 662,
        ',', 669,
        ':', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead != 0) ADVANCE(668);
      END_STATE();
    case 59:
      ADVANCE_MAP(
        0, 219,
        '\n', 630,
        '\r', 649,
        ' ', 665,
        '(', 490,
        '[', 616,
        '\\', 659,
        ']', 671,
        '{', 562,
        '\t', 663,
        '\f', 663,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead != 0) ADVANCE(668);
      END_STATE();
    case 60:
      ADVANCE_MAP(
        0, 219,
        '\n', 435,
        '\r', 442,
        ' ', 461,
        '(', 490,
        ')', 478,
        '[', 616,
        '\\', 656,
        ']', 670,
        '{', 562,
        '\t', 449,
        '\f', 449,
        ',', 669,
        ':', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0) ADVANCE(668);
      END_STATE();
    case 61:
      ADVANCE_MAP(
        0, 219,
        '\n', 435,
        '\r', 442,
        ' ', 464,
        '(', 490,
        '[', 616,
        '\\', 656,
        ']', 671,
        '{', 562,
        '\t', 453,
        '\f', 453,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0) ADVANCE(668);
      END_STATE();
    case 62:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') SKIP(62);
      if (lookahead == 0x0b) ADVANCE(689);
      if (lookahead == '\r') SKIP(62);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '=') ADVANCE(721);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(167);
      if (lookahead == '{') ADVANCE(559);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 63:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') SKIP(62);
      if (lookahead == '\r') SKIP(124);
      if (lookahead == ' ') ADVANCE(367);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '=') ADVANCE(721);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(167);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 64:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') SKIP(62);
      if (lookahead == '\r') SKIP(124);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '=') ADVANCE(721);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(167);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 65:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') SKIP(62);
      if (lookahead == '\r') SKIP(124);
      if (lookahead == ' ') ADVANCE(381);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '=') ADVANCE(721);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(167);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 66:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') SKIP(66);
      if (lookahead == '\r') SKIP(66);
      if (lookahead == ' ') SKIP(66);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(170);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '}') ADVANCE(613);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(703);
      END_STATE();
    case 67:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') SKIP(66);
      if (lookahead == '\r') SKIP(130);
      if (lookahead == ' ') SKIP(67);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(170);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '}') ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(703);
      END_STATE();
    case 68:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') SKIP(66);
      if (lookahead == '\r') SKIP(130);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(170);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '}') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(703);
      END_STATE();
    case 69:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == '\r') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(460);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(171);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '0' || ';' < lookahead) &&
          (lookahead < 'A' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 70:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == '\r') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(465);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(171);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '0' || ';' < lookahead) &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 71:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == '\r') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(171);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '0' || ';' < lookahead) &&
          (lookahead < 'A' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 72:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') SKIP(72);
      if (lookahead == 0x0b) ADVANCE(690);
      if (lookahead == '\r') SKIP(72);
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(173);
      if (lookahead == '{') ADVANCE(559);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 73:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') SKIP(72);
      if (lookahead == '\r') SKIP(137);
      if (lookahead == ' ') ADVANCE(367);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(173);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 74:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') SKIP(72);
      if (lookahead == '\r') SKIP(137);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(173);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 75:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') SKIP(75);
      if (lookahead == '\r') SKIP(75);
      if (lookahead == ' ') SKIP(75);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(177);
      if (lookahead == '{') ADVANCE(559);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 76:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') SKIP(75);
      if (lookahead == '\r') SKIP(144);
      if (lookahead == ' ') ADVANCE(188);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(177);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 77:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') SKIP(75);
      if (lookahead == '\r') SKIP(144);
      if (lookahead == ' ') SKIP(77);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(177);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 78:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') SKIP(75);
      if (lookahead == '\r') SKIP(144);
      if (lookahead == ' ') ADVANCE(185);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(177);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 79:
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') SKIP(75);
      if (lookahead == '\r') SKIP(144);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(177);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 80:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') SKIP(80);
      if (lookahead == 0x0b) ADVANCE(694);
      if (lookahead == '\r') SKIP(80);
      if (lookahead == ' ') ADVANCE(365);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '-') ADVANCE(707);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == ';') ADVANCE(704);
      if (lookahead == '=') ADVANCE(722);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(168);
      if (lookahead == '{') ADVANCE(559);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 81:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') SKIP(80);
      if (lookahead == '\r') SKIP(125);
      if (lookahead == ' ') ADVANCE(367);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '-') ADVANCE(707);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == ';') ADVANCE(704);
      if (lookahead == '=') ADVANCE(722);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(168);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 82:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') SKIP(80);
      if (lookahead == '\r') SKIP(125);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '-') ADVANCE(707);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == ';') ADVANCE(704);
      if (lookahead == '=') ADVANCE(722);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(168);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 83:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') SKIP(80);
      if (lookahead == '\r') SKIP(125);
      if (lookahead == ' ') ADVANCE(381);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '-') ADVANCE(707);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == ';') ADVANCE(704);
      if (lookahead == '=') ADVANCE(722);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(168);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 84:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') SKIP(84);
      if (lookahead == 0x0b) ADVANCE(695);
      if (lookahead == '\r') SKIP(84);
      if (lookahead == ' ') ADVANCE(366);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == ';') ADVANCE(704);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(176);
      if (lookahead == '{') ADVANCE(559);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 85:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') SKIP(84);
      if (lookahead == '\r') SKIP(143);
      if (lookahead == ' ') ADVANCE(367);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == ';') ADVANCE(704);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(176);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 86:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') SKIP(84);
      if (lookahead == '\r') SKIP(143);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == ';') ADVANCE(704);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(176);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 87:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') SKIP(87);
      if (lookahead == '\r') SKIP(87);
      if (lookahead == ' ') SKIP(87);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(178);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 88:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') SKIP(87);
      if (lookahead == '\r') SKIP(146);
      if (lookahead == ' ') ADVANCE(188);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(178);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(699);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 89:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') SKIP(87);
      if (lookahead == '\r') SKIP(146);
      if (lookahead == ' ') ADVANCE(185);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(178);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(701);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 90:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') SKIP(87);
      if (lookahead == '\r') SKIP(146);
      if (lookahead == ' ') SKIP(90);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(178);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(696);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 91:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') SKIP(87);
      if (lookahead == '\r') SKIP(146);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(178);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 92:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') SKIP(92);
      if (lookahead == '\r') SKIP(92);
      if (lookahead == ' ') SKIP(92);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(180);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '}') ADVANCE(613);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(702);
      END_STATE();
    case 93:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') SKIP(92);
      if (lookahead == '\r') SKIP(150);
      if (lookahead == ' ') SKIP(93);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(180);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '}') ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(696);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(702);
      END_STATE();
    case 94:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') SKIP(92);
      if (lookahead == '\r') SKIP(150);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(180);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '}') ADVANCE(613);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(702);
      END_STATE();
    case 95:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(460);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(172);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(455);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < 'A' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 96:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(465);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(172);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(457);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 97:
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(447);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(172);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(447);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < 'A' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 98:
      ADVANCE_MAP(
        0, 217,
        '\n', 574,
        '\r', 584,
        '(', 491,
        ',', 676,
        ':', 341,
        '[', 620,
        '\\', 598,
        '{', 559,
        '}', 613,
        ')', 612,
        ']', 612,
      );
      if (lookahead != 0) ADVANCE(610);
      END_STATE();
    case 99:
      ADVANCE_MAP(
        0, 216,
        '\n', 635,
        '\r', 642,
        '(', 490,
        ',', 677,
        ':', 340,
        '[', 616,
        '\\', 655,
        ']', 670,
        '{', 562,
        ')', 669,
        '}', 669,
      );
      if (lookahead != 0) ADVANCE(667);
      END_STATE();
    case 100:
      ADVANCE_MAP(
        0, 215,
        '\n', 506,
        '\r', 519,
        '(', 488,
        ')', 555,
        ',', 675,
        ':', 339,
        '[', 619,
        '\\', 538,
        '{', 561,
        ']', 554,
        '}', 554,
      );
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 101:
      if ((!eof && lookahead == 00)) ADVANCE(223);
      if (lookahead == '\n') SKIP(101);
      if (lookahead == '\r') SKIP(101);
      if (lookahead == ' ') SKIP(101);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '-') ADVANCE(713);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '\\') ADVANCE(746);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      if (lookahead != 0) ADVANCE(747);
      END_STATE();
    case 102:
      if ((!eof && lookahead == 00)) ADVANCE(223);
      if (lookahead == '\n') SKIP(101);
      if (lookahead == '\r') SKIP(127);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '-') ADVANCE(713);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '\\') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(747);
      END_STATE();
    case 103:
      if ((!eof && lookahead == 00)) ADVANCE(222);
      if (lookahead == '\n') SKIP(103);
      if (lookahead == '\r') SKIP(103);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == '{') ADVANCE(559);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 104:
      if ((!eof && lookahead == 00)) ADVANCE(222);
      if (lookahead == '\n') SKIP(103);
      if (lookahead == '\r') SKIP(128);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 105:
      if ((!eof && lookahead == 00)) ADVANCE(222);
      if (lookahead == '\n') SKIP(105);
      if (lookahead == '\r') SKIP(105);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '{') ADVANCE(559);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 106:
      if ((!eof && lookahead == 00)) ADVANCE(222);
      if (lookahead == '\n') SKIP(105);
      if (lookahead == '\r') SKIP(133);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 107:
      if ((!eof && lookahead == 00)) ADVANCE(222);
      if (lookahead == '\n') SKIP(107);
      if (lookahead == '\r') SKIP(107);
      if (lookahead == '\\') SKIP(182);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 108:
      if ((!eof && lookahead == 00)) ADVANCE(222);
      if (lookahead == '\n') SKIP(107);
      if (lookahead == '\r') SKIP(154);
      if (lookahead == '\\') SKIP(182);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 109:
      if ((!eof && lookahead == 00)) ADVANCE(222);
      if (lookahead == '\n') SKIP(107);
      if (lookahead == '\r') SKIP(154);
      if (lookahead == '\\') SKIP(182);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 110:
      ADVANCE_MAP(
        0, 211,
        '\n', 509,
        '\r', 524,
        '(', 490,
        ')', 557,
        '[', 619,
        '\\', 536,
        ']', 672,
        '{', 560,
      );
      if (lookahead != 0) ADVANCE(549);
      END_STATE();
    case 111:
      ADVANCE_MAP(
        0, 213,
        '\n', 512,
        '\r', 526,
        '(', 491,
        ')', 558,
        '[', 617,
        '\\', 537,
        '{', 561,
        '}', 614,
      );
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 112:
      ADVANCE_MAP(
        0, 212,
        '\n', 577,
        '\r', 589,
        '(', 489,
        '[', 620,
        '\\', 597,
        ']', 673,
        '{', 562,
        '}', 615,
      );
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 113:
      ADVANCE_MAP(
        0, 225,
        '\n', 515,
        '\r', 532,
        '(', 488,
        ')', 555,
        '[', 619,
        '\\', 543,
        '{', 561,
      );
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 114:
      ADVANCE_MAP(
        0, 227,
        '\n', 638,
        '\r', 651,
        '(', 490,
        '[', 616,
        '\\', 660,
        ']', 670,
        '{', 562,
      );
      if (lookahead != 0) ADVANCE(669);
      END_STATE();
    case 115:
      ADVANCE_MAP(
        0, 228,
        '\n', 580,
        '\r', 593,
        '(', 491,
        '[', 620,
        '\\', 602,
        '{', 559,
        '}', 613,
      );
      if (lookahead != 0) ADVANCE(612);
      END_STATE();
    case 116:
      ADVANCE_MAP(
        0, 226,
        '\n', 393,
        '\r', 396,
        '/', 234,
        '>', 331,
        '\\', 398,
        '\t', 399,
        '\f', 399,
        ' ', 399,
      );
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(687);
      END_STATE();
    case 118:
      if (lookahead == '\n') SKIP(3);
      END_STATE();
    case 119:
      if (lookahead == '\n') SKIP(2);
      END_STATE();
    case 120:
      if (lookahead == '\n') SKIP(7);
      END_STATE();
    case 121:
      if (lookahead == '\n') SKIP(11);
      END_STATE();
    case 122:
      if (lookahead == '\n') SKIP(10);
      END_STATE();
    case 123:
      if (lookahead == '\n') SKIP(34);
      END_STATE();
    case 124:
      if (lookahead == '\n') SKIP(64);
      END_STATE();
    case 125:
      if (lookahead == '\n') SKIP(82);
      END_STATE();
    case 126:
      if (lookahead == '\n') SKIP(14);
      END_STATE();
    case 127:
      if (lookahead == '\n') SKIP(102);
      END_STATE();
    case 128:
      if (lookahead == '\n') SKIP(104);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(685);
      END_STATE();
    case 130:
      if (lookahead == '\n') SKIP(68);
      END_STATE();
    case 131:
      if (lookahead == '\n') SKIP(67);
      END_STATE();
    case 132:
      if (lookahead == '\n') SKIP(71);
      END_STATE();
    case 133:
      if (lookahead == '\n') SKIP(106);
      END_STATE();
    case 134:
      if (lookahead == '\n') SKIP(36);
      END_STATE();
    case 135:
      if (lookahead == '\n') SKIP(38);
      END_STATE();
    case 136:
      if (lookahead == '\n') SKIP(97);
      END_STATE();
    case 137:
      if (lookahead == '\n') SKIP(74);
      END_STATE();
    case 138:
      if (lookahead == '\n') SKIP(17);
      END_STATE();
    case 139:
      if (lookahead == '\n') SKIP(40);
      END_STATE();
    case 140:
      if (lookahead == '\n') SKIP(20);
      END_STATE();
    case 141:
      if (lookahead == '\n') SKIP(23);
      END_STATE();
    case 142:
      if (lookahead == '\n') SKIP(24);
      END_STATE();
    case 143:
      if (lookahead == '\n') SKIP(86);
      END_STATE();
    case 144:
      if (lookahead == '\n') SKIP(79);
      END_STATE();
    case 145:
      if (lookahead == '\n') SKIP(77);
      END_STATE();
    case 146:
      if (lookahead == '\n') SKIP(91);
      END_STATE();
    case 147:
      if (lookahead == '\n') SKIP(90);
      END_STATE();
    case 148:
      if (lookahead == '\n') SKIP(27);
      END_STATE();
    case 149:
      if (lookahead == '\n') SKIP(26);
      END_STATE();
    case 150:
      if (lookahead == '\n') SKIP(94);
      END_STATE();
    case 151:
      if (lookahead == '\n') SKIP(93);
      END_STATE();
    case 152:
      if (lookahead == '\n') SKIP(30);
      END_STATE();
    case 153:
      if (lookahead == '\n') SKIP(32);
      END_STATE();
    case 154:
      if (lookahead == '\n') SKIP(109);
      END_STATE();
    case 155:
      if (lookahead == '\n') SKIP(108);
      END_STATE();
    case 156:
      if (lookahead == '\n') SKIP(6);
      END_STATE();
    case 157:
      if (lookahead == '\n') SKIP(63);
      END_STATE();
    case 158:
      if (lookahead == '\n') SKIP(81);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(686);
      END_STATE();
    case 160:
      if (lookahead == '\n') SKIP(73);
      END_STATE();
    case 161:
      if (lookahead == '\n') SKIP(85);
      END_STATE();
    case 162:
      if (lookahead == '\r') SKIP(118);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(3);
      END_STATE();
    case 163:
      if (lookahead == '\r') ADVANCE(129);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(685);
      END_STATE();
    case 164:
      if (lookahead == '\r') ADVANCE(159);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(686);
      END_STATE();
    case 165:
      if (lookahead == '\r') SKIP(156);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(6);
      END_STATE();
    case 166:
      if (lookahead == '\r') SKIP(122);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(10);
      END_STATE();
    case 167:
      if (lookahead == '\r') SKIP(157);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(63);
      END_STATE();
    case 168:
      if (lookahead == '\r') SKIP(158);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(81);
      END_STATE();
    case 169:
      if (lookahead == '\r') SKIP(126);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(14);
      END_STATE();
    case 170:
      if (lookahead == '\r') SKIP(131);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(67);
      END_STATE();
    case 171:
      if (lookahead == '\r') SKIP(132);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(71);
      END_STATE();
    case 172:
      if (lookahead == '\r') SKIP(136);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(97);
      END_STATE();
    case 173:
      if (lookahead == '\r') SKIP(160);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(73);
      END_STATE();
    case 174:
      if (lookahead == '\r') SKIP(140);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(20);
      END_STATE();
    case 175:
      if (lookahead == '\r') SKIP(142);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(24);
      END_STATE();
    case 176:
      if (lookahead == '\r') SKIP(161);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(85);
      END_STATE();
    case 177:
      if (lookahead == '\r') SKIP(145);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(77);
      END_STATE();
    case 178:
      if (lookahead == '\r') SKIP(147);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(90);
      END_STATE();
    case 179:
      if (lookahead == '\r') SKIP(149);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(26);
      END_STATE();
    case 180:
      if (lookahead == '\r') SKIP(151);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(93);
      END_STATE();
    case 181:
      if (lookahead == '\r') SKIP(152);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(30);
      END_STATE();
    case 182:
      if (lookahead == '\r') SKIP(155);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(108);
      END_STATE();
    case 183:
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 185:
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(185);
      END_STATE();
    case 186:
      if (lookahead == '*') ADVANCE(487);
      END_STATE();
    case 187:
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == '=') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(187);
      END_STATE();
    case 188:
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(188);
      END_STATE();
    case 189:
      if (lookahead == '{') ADVANCE(705);
      END_STATE();
    case 190:
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 191:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 192:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 193:
      if (eof) ADVANCE(209);
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(193);
      if (lookahead == '\r') SKIP(193);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '!') ADVANCE(756);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ')') ADVANCE(555);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(207);
      if (lookahead == ']') ADVANCE(670);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '}') ADVANCE(613);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 194:
      if (eof) ADVANCE(209);
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(193);
      if (lookahead == '\r') SKIP(202);
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == '!') ADVANCE(756);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ')') ADVANCE(555);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(207);
      if (lookahead == ']') ADVANCE(670);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '}') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 195:
      if (eof) ADVANCE(209);
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(193);
      if (lookahead == '\r') SKIP(202);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '!') ADVANCE(756);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ')') ADVANCE(555);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == '[') ADVANCE(616);
      if (lookahead == '\\') SKIP(207);
      if (lookahead == ']') ADVANCE(670);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '}') ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == '\f') SKIP(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 196:
      if (eof) ADVANCE(209);
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(196);
      if (lookahead == '\r') SKIP(196);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '\\') SKIP(208);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '|') ADVANCE(752);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 197:
      if (eof) ADVANCE(209);
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(196);
      if (lookahead == '\r') SKIP(204);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '\\') SKIP(208);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 198:
      if (eof) ADVANCE(209);
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(196);
      if (lookahead == '\r') SKIP(204);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '\\') SKIP(208);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '|') ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 199:
      if (eof) ADVANCE(209);
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '\n') SKIP(196);
      if (lookahead == '\r') SKIP(204);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(754);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '\\') SKIP(208);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'j') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '|') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 200:
      if (eof) ADVANCE(209);
      if ((!eof && lookahead == 00)) ADVANCE(224);
      if (lookahead == '\n') SKIP(200);
      if (lookahead == '\r') SKIP(200);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '*') ADVANCE(337);
      if (lookahead == '-') ADVANCE(712);
      if (lookahead == '.') ADVANCE(774);
      if (lookahead == '/') ADVANCE(402);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(717);
      if (lookahead == '\\') ADVANCE(769);
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == 'j') ADVANCE(240);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '|') ADVANCE(753);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0) ADVANCE(775);
      END_STATE();
    case 201:
      if (eof) ADVANCE(209);
      if ((!eof && lookahead == 00)) ADVANCE(224);
      if (lookahead == '\n') SKIP(200);
      if (lookahead == '\r') SKIP(206);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(755);
      if (lookahead == '*') ADVANCE(337);
      if (lookahead == '-') ADVANCE(712);
      if (lookahead == '.') ADVANCE(774);
      if (lookahead == '/') ADVANCE(402);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(717);
      if (lookahead == '\\') ADVANCE(769);
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == 'j') ADVANCE(240);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '|') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0) ADVANCE(775);
      END_STATE();
    case 202:
      if (eof) ADVANCE(209);
      if (lookahead == '\n') SKIP(194);
      END_STATE();
    case 203:
      if (eof) ADVANCE(209);
      if (lookahead == '\n') SKIP(195);
      END_STATE();
    case 204:
      if (eof) ADVANCE(209);
      if (lookahead == '\n') SKIP(199);
      END_STATE();
    case 205:
      if (eof) ADVANCE(209);
      if (lookahead == '\n') SKIP(198);
      END_STATE();
    case 206:
      if (eof) ADVANCE(209);
      if (lookahead == '\n') SKIP(201);
      END_STATE();
    case 207:
      if (eof) ADVANCE(209);
      if (lookahead == '\r') SKIP(203);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(195);
      END_STATE();
    case 208:
      if (eof) ADVANCE(209);
      if (lookahead == '\r') SKIP(205);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') SKIP(198);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(554);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(669);
      if (lookahead != 0) ADVANCE(549);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(612);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(669);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(612);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(702);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(552);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(669);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(667);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(610);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_NULL);
      ADVANCE_MAP(
        '\n', 669,
        '\r', 669,
        ' ', 669,
        '(', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_NULL);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_NULL);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead)) ||
          lookahead == ' ') ADVANCE(684);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(747);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(400);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(229);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(230);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(702);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ' ') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(231);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(232);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      ADVANCE_MAP(
        ' ', 237,
        '\t', 233,
        '\f', 233,
        '\n', 669,
        '\r', 669,
        '(', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'b') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'b') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'f') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'f') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'k') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'k') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'v') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'v') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'w') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'w') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'x') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'x') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'y') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'y') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(702);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      ADVANCE_MAP(
        '\n', 669,
        '\r', 669,
        ' ', 669,
        '(', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < 'A' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(747);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(332);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_tag_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_tag_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_tag_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(552);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(669);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(667);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(610);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_COLON);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(704);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_COLON);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead)) ||
          lookahead == ' ') ADVANCE(684);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\n') ADVANCE(492);
      if (lookahead == 0x0b) ADVANCE(492);
      if (lookahead == '\r') ADVANCE(492);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '\\') ADVANCE(544);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\n') ADVANCE(492);
      if (lookahead == '\r') ADVANCE(518);
      if (lookahead == ' ') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\n') ADVANCE(563);
      if (lookahead == 0x0b) ADVANCE(563);
      if (lookahead == '\r') ADVANCE(563);
      if (lookahead == ' ') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(603);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\n') ADVANCE(563);
      if (lookahead == '\r') ADVANCE(583);
      if (lookahead == ' ') ADVANCE(351);
      if (lookahead == '\\') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\n') ADVANCE(621);
      if (lookahead == 0x0b) ADVANCE(621);
      if (lookahead == '\r') ADVANCE(621);
      if (lookahead == ' ') ADVANCE(352);
      if (lookahead == '\\') ADVANCE(661);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\n') ADVANCE(621);
      if (lookahead == '\r') ADVANCE(641);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '\\') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == 0x0b) ADVANCE(624);
      if (lookahead == '\r') ADVANCE(624);
      if (lookahead == ' ') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(657);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == ' ') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == 0x0b) ADVANCE(566);
      if (lookahead == '\r') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(356);
      if (lookahead == '\\') ADVANCE(600);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '\r') ADVANCE(588);
      if (lookahead == ' ') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\n') ADVANCE(497);
      if (lookahead == 0x0b) ADVANCE(497);
      if (lookahead == '\r') ADVANCE(497);
      if (lookahead == ' ') ADVANCE(358);
      if (lookahead == '\\') ADVANCE(540);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\n') ADVANCE(497);
      if (lookahead == '\r') ADVANCE(523);
      if (lookahead == ' ') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == 0x0b) ADVANCE(759);
      if (lookahead == '\\') ADVANCE(770);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == 0x0b) ADVANCE(689);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == 0x0b) ADVANCE(690);
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == 0x0b) ADVANCE(749);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == 0x0b) ADVANCE(760);
      if (lookahead == '\\') ADVANCE(773);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == 0x0b) ADVANCE(694);
      if (lookahead == ' ') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == 0x0b) ADVANCE(695);
      if (lookahead == ' ') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == ' ') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(368);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(369);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(702);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(370);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == ' ') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(372);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == ' ') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(373);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_child_token1);
      ADVANCE_MAP(
        ' ', 384,
        '/', 233,
        '\t', 374,
        '\f', 374,
        '\n', 669,
        '\r', 669,
        '(', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_child_token1);
      ADVANCE_MAP(
        ' ', 391,
        '\t', 375,
        '\f', 375,
        '\n', 669,
        '\r', 669,
        '(', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == ' ') ADVANCE(381);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(376);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == ' ') ADVANCE(381);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(377);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(702);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead == '[') ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '(') ADVANCE(423);
      if (lookahead == '[') ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(388);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '=') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\\') ADVANCE(770);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\\') ADVANCE(773);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_child_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if ((!eof && lookahead == 00)) ADVANCE(226);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '\r') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(398);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(400);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if ((!eof && lookahead == 00)) ADVANCE(226);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '\r') ADVANCE(396);
      if (lookahead == '\\') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(400);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if ((!eof && lookahead == 00)) ADVANCE(226);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '\r') ADVANCE(396);
      if (lookahead == '\\') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(400);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if (lookahead == '\n') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(400);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(400);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if (lookahead == '\r') ADVANCE(397);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(400);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_html_opening_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_ruby);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_ruby);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_javascript);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_javascript);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_css);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_css);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_sass);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_sass);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_scss);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_scss);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_less);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_less);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_coffee);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_coffee);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_markdown);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_markdown);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_textile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_textile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_rdoc);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_rdoc);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == 0x0b) ADVANCE(495);
      if (lookahead == '\r') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(539);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '\r') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(473);
      if (lookahead == '\\') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(468);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '\r') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '\\') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(473);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == 0x0b) ADVANCE(688);
      if (lookahead == '\r') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(428);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == '\r') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(471);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == '\r') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(476);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '\r') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '\r') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(476);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '\r') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == 0x0b) ADVANCE(633);
      if (lookahead == '\r') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(435);
      if (lookahead == '\\') ADVANCE(656);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == '\r') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(474);
      if (lookahead == '\\') ADVANCE(656);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(469);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == '\r') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '\\') ADVANCE(656);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(476);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == 0x0b) ADVANCE(572);
      if (lookahead == '\r') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(439);
      if (lookahead == '\\') ADVANCE(599);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(470);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(441);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(474);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(476);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(475);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == 0x0b) ADVANCE(693);
      if (lookahead == '\r') ADVANCE(445);
      if (lookahead == ' ') ADVANCE(445);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(472);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      ADVANCE_MAP(
        ' ', 466,
        ']', 482,
        '\t', 448,
        '\f', 448,
        '\n', 473,
        '\r', 473,
        ',', 554,
        ':', 554,
        ';', 554,
        '[', 554,
        '\\', 554,
        '{', 554,
        '}', 554,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      ADVANCE_MAP(
        ' ', 461,
        ')', 478,
        '\t', 449,
        '\f', 449,
        '\n', 474,
        '\r', 474,
        '(', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ' ') ADVANCE(462);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(450);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(475);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ' ') ADVANCE(459);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(451);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(473);
      if (lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      ADVANCE_MAP(
        ' ', 467,
        ']', 483,
        '\t', 452,
        '\f', 452,
        '\n', 475,
        '\r', 475,
        '(', 612,
        ')', 612,
        ',', 612,
        ':', 612,
        ';', 612,
        '[', 612,
        '\\', 612,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      ADVANCE_MAP(
        ' ', 464,
        ']', 481,
        '\t', 453,
        '\f', 453,
        '\n', 474,
        '\r', 474,
        '(', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ' ') ADVANCE(460);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(454);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ' ') ADVANCE(460);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(455);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(476);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ' ') ADVANCE(465);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(456);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ' ') ADVANCE(465);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(457);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(476);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '=') ADVANCE(484);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '=') ADVANCE(484);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(669);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ']') ADVANCE(482);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == ']') ADVANCE(483);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(468);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      ADVANCE_MAP(
        '\t', 469,
        '\f', 469,
        '\n', 474,
        '\r', 474,
        ' ', 474,
        '(', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(470);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(475);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(471);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(472);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token4);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token5);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token5);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_wrapped_parameters_token5);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_floating_parameter_pair_token1);
      if (lookahead == '=') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(485);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_floating_parameter_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_parameter_value_token1);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_splat_parameters_token1);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(612);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(669);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 218,
        '\n', 492,
        0x0b, 492,
        '\r', 492,
        ' ', 348,
        '-', 708,
        ':', 345,
        '=', 718,
        '[', 619,
        '\\', 544,
        '{', 561,
        '\t', 348,
        '\f', 348,
        ',', 554,
        ';', 554,
        ']', 554,
        '}', 554,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 218,
        '\n', 492,
        '\r', 518,
        ' ', 389,
        '-', 708,
        ':', 345,
        '=', 718,
        '[', 619,
        '\\', 544,
        '{', 561,
        '\t', 371,
        '\f', 371,
        ',', 554,
        ';', 554,
        ']', 554,
        '}', 554,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 218,
        '\n', 492,
        '\r', 518,
        ' ', 349,
        '-', 708,
        ':', 345,
        '=', 718,
        '[', 619,
        '\\', 544,
        '{', 561,
        '\t', 349,
        '\f', 349,
        ',', 554,
        ';', 554,
        ']', 554,
        '}', 554,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 218,
        '\n', 424,
        0x0b, 495,
        '\r', 424,
        ' ', 424,
        '[', 619,
        '\\', 539,
        '{', 561,
        '\t', 424,
        '\f', 424,
        ',', 554,
        ':', 554,
        ';', 554,
        ']', 554,
        '}', 554,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 218,
        '\n', 424,
        '\r', 427,
        ' ', 426,
        '[', 619,
        '\\', 539,
        '{', 561,
        '\t', 426,
        '\f', 426,
        ',', 554,
        ':', 554,
        ';', 554,
        ']', 554,
        '}', 554,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 218,
        '\n', 497,
        0x0b, 497,
        '\r', 497,
        ' ', 358,
        ':', 345,
        '[', 619,
        '\\', 540,
        '{', 561,
        '\t', 358,
        '\f', 358,
        ',', 554,
        ';', 554,
        ']', 554,
        '}', 554,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 218,
        '\n', 497,
        '\r', 523,
        ' ', 389,
        ':', 345,
        '[', 619,
        '\\', 540,
        '{', 561,
        '\t', 371,
        '\f', 371,
        ',', 554,
        ';', 554,
        ']', 554,
        '}', 554,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 218,
        '\n', 497,
        '\r', 523,
        ' ', 359,
        ':', 345,
        '[', 619,
        '\\', 540,
        '{', 561,
        '\t', 359,
        '\f', 359,
        ',', 554,
        ';', 554,
        ']', 554,
        '}', 554,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 218,
        '\n', 500,
        '\r', 500,
        ' ', 500,
        '[', 619,
        '\\', 541,
        '{', 561,
        '}', 614,
        '\t', 500,
        0x0b, 500,
        '\f', 500,
        ',', 554,
        ':', 554,
        ';', 554,
        ']', 554,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 218,
        '\n', 500,
        '\r', 528,
        ' ', 501,
        '[', 619,
        '\\', 541,
        '{', 561,
        '}', 614,
        '\t', 501,
        '\f', 501,
        ',', 554,
        ':', 554,
        ';', 554,
        ']', 554,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 218,
        '\n', 500,
        '\r', 528,
        '[', 619,
        '\\', 541,
        '{', 561,
        '}', 614,
        ' ', 554,
        ',', 554,
        ':', 554,
        ';', 554,
        ']', 554,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 218,
        '\n', 503,
        '\r', 503,
        ' ', 503,
        '[', 619,
        '\\', 542,
        '{', 561,
        '\t', 503,
        0x0b, 503,
        '\f', 503,
        ',', 554,
        ':', 554,
        ';', 554,
        ']', 554,
        '}', 554,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 218,
        '\n', 503,
        '\r', 530,
        ' ', 504,
        '[', 619,
        '\\', 542,
        '{', 561,
        '\t', 504,
        '\f', 504,
        ',', 554,
        ':', 554,
        ';', 554,
        ']', 554,
        '}', 554,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 218,
        '\n', 503,
        '\r', 530,
        '[', 619,
        '\\', 542,
        '{', 561,
        ' ', 554,
        ',', 554,
        ':', 554,
        ';', 554,
        ']', 554,
        '}', 554,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 215,
        '\n', 506,
        '\r', 506,
        ',', 675,
        ':', 339,
        '[', 619,
        '\\', 538,
        '{', 561,
        ']', 554,
        '}', 554,
        '\t', 506,
        0x0b, 506,
        '\f', 506,
        ' ', 506,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(552);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 215,
        '\n', 506,
        '\r', 519,
        ',', 675,
        ':', 339,
        '[', 619,
        '\\', 538,
        '{', 561,
        ']', 554,
        '}', 554,
        '\t', 507,
        '\f', 507,
        ' ', 507,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(552);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 215,
        '\n', 506,
        '\r', 519,
        ',', 675,
        ':', 339,
        '[', 619,
        '\\', 538,
        '{', 561,
        ']', 554,
        '}', 554,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(552);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 211,
        '\n', 509,
        '\r', 509,
        '[', 619,
        '\\', 536,
        ']', 672,
        '{', 560,
        '\t', 509,
        0x0b, 509,
        '\f', 509,
        ' ', 509,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(549);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 211,
        '\n', 509,
        '\r', 524,
        '[', 619,
        '\\', 536,
        ']', 672,
        '{', 560,
        '\t', 510,
        '\f', 510,
        ' ', 510,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(549);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if ((!eof && lookahead == 00)) ADVANCE(211);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '\r') ADVANCE(524);
      if (lookahead == '[') ADVANCE(619);
      if (lookahead == '\\') ADVANCE(536);
      if (lookahead == ']') ADVANCE(672);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(549);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 213,
        '\n', 512,
        '\r', 512,
        '[', 617,
        '\\', 537,
        '{', 561,
        '}', 614,
        '\t', 512,
        0x0b, 512,
        '\f', 512,
        ' ', 512,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(550);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 213,
        '\n', 512,
        '\r', 526,
        '[', 617,
        '\\', 537,
        '{', 561,
        '}', 614,
        '\t', 513,
        '\f', 513,
        ' ', 513,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(550);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if ((!eof && lookahead == 00)) ADVANCE(213);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == '\r') ADVANCE(526);
      if (lookahead == '[') ADVANCE(617);
      if (lookahead == '\\') ADVANCE(537);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '}') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(550);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 225,
        '\n', 515,
        '\r', 515,
        '[', 619,
        '\\', 543,
        '{', 561,
        '\t', 515,
        0x0b, 515,
        '\f', 515,
        ' ', 515,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        0, 225,
        '\n', 515,
        '\r', 532,
        '[', 619,
        '\\', 543,
        '{', 561,
        '\t', 516,
        '\f', 516,
        ' ', 516,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if ((!eof && lookahead == 00)) ADVANCE(225);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '\r') ADVANCE(532);
      if (lookahead == '[') ADVANCE(619);
      if (lookahead == '\\') ADVANCE(543);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(549);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(549);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(514);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(550);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(550);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\r') ADVANCE(525);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(510);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(549);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\r') ADVANCE(527);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(513);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(550);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\r') ADVANCE(521);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\r') ADVANCE(522);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\r') ADVANCE(535);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\r') ADVANCE(529);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\r') ADVANCE(531);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\r') ADVANCE(533);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\r') ADVANCE(534);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == ' ') ADVANCE(547);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(545);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      ADVANCE_MAP(
        ' ', 548,
        ']', 482,
        '\t', 546,
        '\f', 546,
        '\n', 554,
        '\r', 554,
        ',', 554,
        ':', 554,
        ';', 554,
        '[', 554,
        '\\', 554,
        '{', 554,
        '}', 554,
      );
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == ']') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(554);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(669);
      if (lookahead != 0) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(612);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(477);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(554);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(669);
      if (lookahead != 0) ADVANCE(549);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 220,
        '\n', 563,
        0x0b, 563,
        '\r', 563,
        ' ', 350,
        '(', 491,
        '-', 710,
        ':', 347,
        '=', 719,
        '[', 620,
        '\\', 603,
        '\t', 350,
        '\f', 350,
        ')', 612,
        ',', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 220,
        '\n', 563,
        '\r', 583,
        ' ', 390,
        '(', 491,
        '-', 710,
        ':', 347,
        '=', 719,
        '[', 620,
        '\\', 603,
        '\t', 373,
        '\f', 373,
        ')', 612,
        ',', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 220,
        '\n', 563,
        '\r', 583,
        ' ', 351,
        '(', 491,
        '-', 710,
        ':', 347,
        '=', 719,
        '[', 620,
        '\\', 603,
        '\t', 351,
        '\f', 351,
        ')', 612,
        ',', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 220,
        '\n', 566,
        0x0b, 566,
        '\r', 566,
        ' ', 356,
        '(', 491,
        ':', 347,
        '[', 620,
        '\\', 600,
        '\t', 356,
        '\f', 356,
        ')', 612,
        ',', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 220,
        '\n', 566,
        '\r', 588,
        ' ', 390,
        '(', 491,
        ':', 347,
        '[', 620,
        '\\', 600,
        '\t', 373,
        '\f', 373,
        ')', 612,
        ',', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 220,
        '\n', 566,
        '\r', 588,
        ' ', 357,
        '(', 491,
        ':', 347,
        '[', 620,
        '\\', 600,
        '\t', 357,
        '\f', 357,
        ')', 612,
        ',', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 220,
        '\n', 569,
        '\r', 569,
        ' ', 569,
        '(', 491,
        '[', 620,
        '\\', 601,
        '\t', 569,
        0x0b, 569,
        '\f', 569,
        ')', 612,
        ',', 612,
        ':', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 220,
        '\n', 569,
        '\r', 591,
        ' ', 570,
        '(', 491,
        '[', 620,
        '\\', 601,
        '\t', 570,
        '\f', 570,
        ')', 612,
        ',', 612,
        ':', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 220,
        '\n', 569,
        '\r', 591,
        '(', 491,
        '[', 620,
        '\\', 601,
        ' ', 612,
        ')', 612,
        ',', 612,
        ':', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 220,
        '\n', 439,
        0x0b, 572,
        '\r', 439,
        ' ', 439,
        '(', 491,
        '[', 620,
        '\\', 599,
        '\t', 439,
        '\f', 439,
        ')', 612,
        ',', 612,
        ':', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 220,
        '\n', 439,
        '\r', 444,
        ' ', 441,
        '(', 491,
        '[', 620,
        '\\', 599,
        '\t', 441,
        '\f', 441,
        ')', 612,
        ',', 612,
        ':', 612,
        ';', 612,
        ']', 612,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 217,
        '\n', 574,
        '\r', 574,
        '(', 491,
        ',', 676,
        ':', 341,
        '[', 620,
        '\\', 598,
        ')', 612,
        ']', 612,
        '\t', 574,
        0x0b, 574,
        '\f', 574,
        ' ', 574,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(610);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 217,
        '\n', 574,
        '\r', 584,
        '(', 491,
        ',', 676,
        ':', 341,
        '[', 620,
        '\\', 598,
        ')', 612,
        ']', 612,
        '\t', 575,
        '\f', 575,
        ' ', 575,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(610);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 217,
        '\n', 574,
        '\r', 584,
        '(', 491,
        ',', 676,
        ':', 341,
        '[', 620,
        '\\', 598,
        ')', 612,
        ']', 612,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(610);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 212,
        '\n', 577,
        '\r', 577,
        '(', 489,
        '[', 620,
        '\\', 597,
        ']', 673,
        '\t', 577,
        0x0b, 577,
        '\f', 577,
        ' ', 577,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(608);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 212,
        '\n', 577,
        '\r', 589,
        '(', 489,
        '[', 620,
        '\\', 597,
        ']', 673,
        '\t', 578,
        '\f', 578,
        ' ', 578,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(608);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if ((!eof && lookahead == 00)) ADVANCE(212);
      if (lookahead == '\n') ADVANCE(577);
      if (lookahead == '\r') ADVANCE(589);
      if (lookahead == '(') ADVANCE(489);
      if (lookahead == '[') ADVANCE(620);
      if (lookahead == '\\') ADVANCE(597);
      if (lookahead == ']') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(608);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 228,
        '\n', 580,
        '\r', 580,
        '(', 491,
        '[', 620,
        '\\', 602,
        '\t', 580,
        0x0b, 580,
        '\f', 580,
        ' ', 580,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        0, 228,
        '\n', 580,
        '\r', 593,
        '(', 491,
        '[', 620,
        '\\', 602,
        '\t', 581,
        '\f', 581,
        ' ', 581,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if ((!eof && lookahead == 00)) ADVANCE(228);
      if (lookahead == '\n') ADVANCE(580);
      if (lookahead == '\r') ADVANCE(593);
      if (lookahead == '(') ADVANCE(491);
      if (lookahead == '[') ADVANCE(620);
      if (lookahead == '\\') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(608);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(608);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\r') ADVANCE(590);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(578);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(608);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\r') ADVANCE(586);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\r') ADVANCE(587);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\r') ADVANCE(596);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\r') ADVANCE(592);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\r') ADVANCE(594);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\r') ADVANCE(595);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == ' ') ADVANCE(606);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(604);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      ADVANCE_MAP(
        ' ', 607,
        ']', 483,
        '\t', 605,
        '\f', 605,
        '\n', 612,
        '\r', 612,
        '(', 612,
        ')', 612,
        ',', 612,
        ':', 612,
        ';', 612,
        '[', 612,
        '\\', 612,
      );
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == ']') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(612);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(669);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(610);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(612);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 219,
        '\n', 621,
        0x0b, 621,
        '\r', 621,
        ' ', 352,
        '(', 490,
        '-', 709,
        ':', 346,
        '=', 720,
        '\\', 661,
        '{', 562,
        '\t', 352,
        '\f', 352,
        ')', 669,
        ',', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 219,
        '\n', 621,
        '\r', 641,
        ' ', 391,
        '(', 490,
        '-', 709,
        ':', 346,
        '=', 720,
        '\\', 661,
        '{', 562,
        '\t', 375,
        '\f', 375,
        ')', 669,
        ',', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 219,
        '\n', 621,
        '\r', 641,
        ' ', 353,
        '(', 490,
        '-', 709,
        ':', 346,
        '=', 720,
        '\\', 661,
        '{', 562,
        '\t', 353,
        '\f', 353,
        ')', 669,
        ',', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 219,
        '\n', 624,
        0x0b, 624,
        '\r', 624,
        ' ', 354,
        '(', 490,
        ':', 346,
        '\\', 657,
        '{', 562,
        '\t', 354,
        '\f', 354,
        ')', 669,
        ',', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 219,
        '\n', 624,
        '\r', 646,
        ' ', 391,
        '(', 490,
        ':', 346,
        '\\', 657,
        '{', 562,
        '\t', 375,
        '\f', 375,
        ')', 669,
        ',', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 219,
        '\n', 624,
        '\r', 646,
        ' ', 355,
        '(', 490,
        ':', 346,
        '\\', 657,
        '{', 562,
        '\t', 355,
        '\f', 355,
        ')', 669,
        ',', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 219,
        '\n', 627,
        '\r', 627,
        ' ', 627,
        '(', 490,
        '\\', 658,
        '{', 562,
        '}', 615,
        '\t', 627,
        0x0b, 627,
        '\f', 627,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 219,
        '\n', 627,
        '\r', 647,
        ' ', 628,
        '(', 490,
        '\\', 658,
        '{', 562,
        '}', 615,
        '\t', 628,
        '\f', 628,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 219,
        '\n', 627,
        '\r', 647,
        '(', 490,
        '\\', 658,
        '{', 562,
        '}', 615,
        ' ', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 219,
        '\n', 630,
        '\r', 630,
        ' ', 630,
        '(', 490,
        '\\', 659,
        '{', 562,
        '\t', 630,
        0x0b, 630,
        '\f', 630,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 219,
        '\n', 630,
        '\r', 649,
        ' ', 631,
        '(', 490,
        '\\', 659,
        '{', 562,
        '\t', 631,
        '\f', 631,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 219,
        '\n', 630,
        '\r', 649,
        '(', 490,
        '\\', 659,
        '{', 562,
        ' ', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 219,
        '\n', 435,
        0x0b, 633,
        '\r', 435,
        ' ', 435,
        '(', 490,
        '\\', 656,
        '{', 562,
        '\t', 435,
        '\f', 435,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < 'A' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 219,
        '\n', 435,
        '\r', 442,
        ' ', 437,
        '(', 490,
        '\\', 656,
        '{', 562,
        '\t', 437,
        '\f', 437,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '}', 669,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < 'A' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 216,
        '\n', 635,
        '\r', 635,
        '(', 490,
        ',', 677,
        ':', 340,
        '\\', 655,
        '{', 562,
        ')', 669,
        '}', 669,
        '\t', 635,
        0x0b, 635,
        '\f', 635,
        ' ', 635,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(667);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 216,
        '\n', 635,
        '\r', 642,
        '(', 490,
        ',', 677,
        ':', 340,
        '\\', 655,
        '{', 562,
        ')', 669,
        '}', 669,
        '\t', 636,
        '\f', 636,
        ' ', 636,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(667);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 216,
        '\n', 635,
        '\r', 642,
        '(', 490,
        ',', 677,
        ':', 340,
        '\\', 655,
        '{', 562,
        ')', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(667);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 227,
        '\n', 638,
        '\r', 638,
        '(', 490,
        '\\', 660,
        '{', 562,
        '\t', 638,
        0x0b, 638,
        '\f', 638,
        ' ', 638,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(669);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        0, 227,
        '\n', 638,
        '\r', 651,
        '(', 490,
        '\\', 660,
        '{', 562,
        '\t', 639,
        '\f', 639,
        ' ', 639,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(669);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if ((!eof && lookahead == 00)) ADVANCE(227);
      if (lookahead == '\n') ADVANCE(638);
      if (lookahead == '\r') ADVANCE(651);
      if (lookahead == '(') ADVANCE(490);
      if (lookahead == '\\') ADVANCE(660);
      if (lookahead == '{') ADVANCE(562);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(669);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\r') ADVANCE(644);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\r') ADVANCE(645);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\r') ADVANCE(654);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\r') ADVANCE(648);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\r') ADVANCE(650);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\r') ADVANCE(652);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\r') ADVANCE(653);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        ' ', 664,
        ')', 478,
        '\t', 662,
        '\f', 662,
        '\n', 669,
        '\r', 669,
        '(', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        ' ', 665,
        ']', 481,
        '\t', 663,
        '\f', 663,
        '\n', 669,
        '\r', 669,
        '(', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(669);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(669);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(667);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      ADVANCE_MAP(
        '\n', 669,
        '\r', 669,
        ' ', 669,
        '(', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__ruby_fragment_token3);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(481);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\r') ADVANCE(117);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(687);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\r') ADVANCE(520);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(554);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\r') ADVANCE(585);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(612);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\r') ADVANCE(643);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(669);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(222);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(678);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(684);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(222);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(679);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(222);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(680);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(684);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(222);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(681);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(682);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(684);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(683);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(684);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token1);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead)) ||
          lookahead == ' ') ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token2);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(678);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token2);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(680);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__ruby_multiline_token3);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(687);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == 0x0b) ADVANCE(688);
      if (lookahead == '\r') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(428);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '0' || ';' < lookahead) &&
          (lookahead < 'A' || ']' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(703);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == 0x0b) ADVANCE(689);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '-') ADVANCE(714);
      if (lookahead == '=') ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(361);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == 0x0b) ADVANCE(690);
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(362);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(691);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(692);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == 0x0b) ADVANCE(693);
      if (lookahead == '\r') ADVANCE(445);
      if (lookahead == ' ') ADVANCE(445);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < '0' || ';' < lookahead) &&
          (lookahead < 'A' || ']' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(702);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == 0x0b) ADVANCE(694);
      if (lookahead == ' ') ADVANCE(365);
      if (lookahead == '-') ADVANCE(707);
      if (lookahead == '=') ADVANCE(722);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(365);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(702);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == 0x0b) ADVANCE(695);
      if (lookahead == ' ') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(366);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(702);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(696);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(702);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(697);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(702);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if (lookahead == ' ') ADVANCE(188);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(698);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if (lookahead == ' ') ADVANCE(188);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(699);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(702);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if (lookahead == ' ') ADVANCE(185);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(700);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if (lookahead == ' ') ADVANCE(185);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(701);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(702);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(702);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token1);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_ruby_inline_token2);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(704);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(702);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_DASH);
      ADVANCE_MAP(
        '\n', 669,
        '\r', 669,
        ' ', 669,
        '(', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(747);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_DASH);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(737);
      if (lookahead == '=') ADVANCE(723);
      if (lookahead == '>') ADVANCE(730);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(743);
      if (lookahead == '=') ADVANCE(729);
      if (lookahead == '>') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(739);
      if (lookahead == '=') ADVANCE(725);
      if (lookahead == '>') ADVANCE(732);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(741);
      if (lookahead == '=') ADVANCE(727);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_EQ);
      ADVANCE_MAP(
        '<', 740,
        '=', 726,
        '>', 733,
        '\n', 669,
        '\r', 669,
        ' ', 669,
        '(', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(742);
      if (lookahead == '=') ADVANCE(728);
      if (lookahead == '>') ADVANCE(735);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(738);
      if (lookahead == '=') ADVANCE(724);
      if (lookahead == '>') ADVANCE(731);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(702);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(702);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      ADVANCE_MAP(
        '\n', 669,
        '\r', 669,
        ' ', 669,
        '(', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(702);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      ADVANCE_MAP(
        '\n', 669,
        '\r', 669,
        ' ', 669,
        '(', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_EQ_LT);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_EQ_LT);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(704);
      if ((!eof && set_contains(aux_sym_ruby_inline_token2_character_set_1, 9, lookahead))) ADVANCE(702);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_EQ_LT);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(553);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_EQ_LT);
      ADVANCE_MAP(
        '\n', 669,
        '\r', 669,
        ' ', 669,
        '(', 669,
        ')', 669,
        ',', 669,
        ':', 669,
        ';', 669,
        '\\', 669,
        '{', 669,
        '}', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(668);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_EQ_LT);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(611);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_EQ_LT);
      if ((!eof && set_contains(aux_sym_ruby_inline_token1_character_set_1, 10, lookahead))) ADVANCE(703);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_EQ_LT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_text_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(223);
      if (lookahead == '-') ADVANCE(713);
      if (lookahead == '\\') ADVANCE(746);
      if (lookahead == '\t' ||
          lookahead == '\f') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(747);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_text_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(223);
      if (lookahead == '-') ADVANCE(713);
      if (lookahead == '\\') ADVANCE(746);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(747);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_text_inline_token1);
      if ((!eof && lookahead == 00)) ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(747);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_text_inline_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(747);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_text_inline_token2);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_text_inline_token2);
      ADVANCE_MAP(
        0, 210,
        0x0b, 749,
        '#', 751,
        ':', 338,
        '\\', 748,
        '\t', 363,
        '\f', 363,
        ' ', 363,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=') ADVANCE(748);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_text_inline_token2);
      if ((!eof && lookahead == 00)) ADVANCE(210);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(750);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=') ADVANCE(748);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_text_inline_token2);
      if (lookahead == '{') ADVANCE(705);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(705);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__free_text);
      ADVANCE_MAP(
        0, 224,
        0x0b, 759,
        '-', 715,
        ':', 344,
        '=', 717,
        '\\', 770,
        '\t', 360,
        '\f', 360,
        ' ', 360,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__free_text);
      ADVANCE_MAP(
        0, 224,
        0x0b, 760,
        '!', 757,
        '[', 618,
        '\\', 773,
        '\t', 364,
        '\f', 364,
        ' ', 364,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(224);
      if (lookahead == '!') ADVANCE(757);
      if (lookahead == '[') ADVANCE(618);
      if (lookahead == '\\') ADVANCE(773);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__free_text);
      ADVANCE_MAP(
        0, 224,
        '\'', 755,
        '*', 337,
        '-', 712,
        '.', 774,
        '/', 402,
        '<', 330,
        '=', 717,
        '\\', 769,
        'c', 283,
        'j', 240,
        'l', 263,
        'm', 241,
        'r', 253,
        's', 245,
        't', 259,
        '|', 753,
        '\t', 762,
        '\f', 762,
        ' ', 762,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__free_text);
      ADVANCE_MAP(
        0, 224,
        '\'', 755,
        '*', 337,
        '-', 712,
        '.', 774,
        '/', 402,
        '<', 330,
        '=', 717,
        '\\', 769,
        'c', 283,
        'j', 240,
        'l', 263,
        'm', 241,
        'r', 253,
        's', 245,
        't', 259,
        '|', 753,
        '\t', 763,
        0x0b, 763,
        '\f', 763,
        ' ', 763,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__free_text);
      ADVANCE_MAP(
        0, 224,
        '-', 715,
        ':', 344,
        '=', 717,
        '\\', 770,
        '\t', 386,
        '\f', 386,
        ' ', 386,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(224);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == '\\') ADVANCE(772);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(224);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == '\\') ADVANCE(772);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(766);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(224);
      if (lookahead == '\\') ADVANCE(771);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(224);
      if (lookahead == '\\') ADVANCE(771);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(768);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__free_text);
      if ((!eof && lookahead == 00)) ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__free_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__free_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(775);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 197},
  [2] = {.lex_state = 197},
  [3] = {.lex_state = 197, .external_lex_state = 2},
  [4] = {.lex_state = 197, .external_lex_state = 2},
  [5] = {.lex_state = 197},
  [6] = {.lex_state = 197},
  [7] = {.lex_state = 197, .external_lex_state = 3},
  [8] = {.lex_state = 197, .external_lex_state = 3},
  [9] = {.lex_state = 197, .external_lex_state = 3},
  [10] = {.lex_state = 197, .external_lex_state = 3},
  [11] = {.lex_state = 197, .external_lex_state = 3},
  [12] = {.lex_state = 197, .external_lex_state = 4},
  [13] = {.lex_state = 197, .external_lex_state = 3},
  [14] = {.lex_state = 197, .external_lex_state = 4},
  [15] = {.lex_state = 197, .external_lex_state = 4},
  [16] = {.lex_state = 197, .external_lex_state = 4},
  [17] = {.lex_state = 197, .external_lex_state = 4},
  [18] = {.lex_state = 197, .external_lex_state = 3},
  [19] = {.lex_state = 197, .external_lex_state = 3},
  [20] = {.lex_state = 197, .external_lex_state = 3},
  [21] = {.lex_state = 197, .external_lex_state = 4},
  [22] = {.lex_state = 197, .external_lex_state = 4},
  [23] = {.lex_state = 197, .external_lex_state = 3},
  [24] = {.lex_state = 197, .external_lex_state = 3},
  [25] = {.lex_state = 197, .external_lex_state = 4},
  [26] = {.lex_state = 197, .external_lex_state = 4},
  [27] = {.lex_state = 197, .external_lex_state = 4},
  [28] = {.lex_state = 197, .external_lex_state = 4},
  [29] = {.lex_state = 197, .external_lex_state = 3},
  [30] = {.lex_state = 197, .external_lex_state = 4},
  [31] = {.lex_state = 201},
  [32] = {.lex_state = 197, .external_lex_state = 4},
  [33] = {.lex_state = 197, .external_lex_state = 3},
  [34] = {.lex_state = 197, .external_lex_state = 3},
  [35] = {.lex_state = 197, .external_lex_state = 3},
  [36] = {.lex_state = 197, .external_lex_state = 4},
  [37] = {.lex_state = 197, .external_lex_state = 4},
  [38] = {.lex_state = 197, .external_lex_state = 4},
  [39] = {.lex_state = 197, .external_lex_state = 4},
  [40] = {.lex_state = 197, .external_lex_state = 4},
  [41] = {.lex_state = 201, .external_lex_state = 2},
  [42] = {.lex_state = 197, .external_lex_state = 3},
  [43] = {.lex_state = 197, .external_lex_state = 3},
  [44] = {.lex_state = 197, .external_lex_state = 3},
  [45] = {.lex_state = 197, .external_lex_state = 3},
  [46] = {.lex_state = 197, .external_lex_state = 4},
  [47] = {.lex_state = 197},
  [48] = {.lex_state = 197, .external_lex_state = 2},
  [49] = {.lex_state = 197},
  [50] = {.lex_state = 197},
  [51] = {.lex_state = 197},
  [52] = {.lex_state = 197},
  [53] = {.lex_state = 197, .external_lex_state = 2},
  [54] = {.lex_state = 197},
  [55] = {.lex_state = 197},
  [56] = {.lex_state = 197},
  [57] = {.lex_state = 197},
  [58] = {.lex_state = 197},
  [59] = {.lex_state = 197},
  [60] = {.lex_state = 197},
  [61] = {.lex_state = 197},
  [62] = {.lex_state = 197},
  [63] = {.lex_state = 197},
  [64] = {.lex_state = 197},
  [65] = {.lex_state = 197},
  [66] = {.lex_state = 197},
  [67] = {.lex_state = 197},
  [68] = {.lex_state = 197},
  [69] = {.lex_state = 197},
  [70] = {.lex_state = 197},
  [71] = {.lex_state = 197},
  [72] = {.lex_state = 197},
  [73] = {.lex_state = 197},
  [74] = {.lex_state = 197, .external_lex_state = 2},
  [75] = {.lex_state = 197},
  [76] = {.lex_state = 197},
  [77] = {.lex_state = 197},
  [78] = {.lex_state = 197, .external_lex_state = 2},
  [79] = {.lex_state = 197, .external_lex_state = 2},
  [80] = {.lex_state = 197, .external_lex_state = 2},
  [81] = {.lex_state = 197},
  [82] = {.lex_state = 197},
  [83] = {.lex_state = 197, .external_lex_state = 2},
  [84] = {.lex_state = 197, .external_lex_state = 2},
  [85] = {.lex_state = 197, .external_lex_state = 2},
  [86] = {.lex_state = 197, .external_lex_state = 2},
  [87] = {.lex_state = 197},
  [88] = {.lex_state = 197, .external_lex_state = 2},
  [89] = {.lex_state = 197},
  [90] = {.lex_state = 197, .external_lex_state = 2},
  [91] = {.lex_state = 197, .external_lex_state = 2},
  [92] = {.lex_state = 197, .external_lex_state = 2},
  [93] = {.lex_state = 197, .external_lex_state = 2},
  [94] = {.lex_state = 197, .external_lex_state = 2},
  [95] = {.lex_state = 197, .external_lex_state = 2},
  [96] = {.lex_state = 197, .external_lex_state = 2},
  [97] = {.lex_state = 197, .external_lex_state = 2},
  [98] = {.lex_state = 197, .external_lex_state = 2},
  [99] = {.lex_state = 197, .external_lex_state = 2},
  [100] = {.lex_state = 197, .external_lex_state = 2},
  [101] = {.lex_state = 197, .external_lex_state = 2},
  [102] = {.lex_state = 197, .external_lex_state = 2},
  [103] = {.lex_state = 197, .external_lex_state = 2},
  [104] = {.lex_state = 197, .external_lex_state = 2},
  [105] = {.lex_state = 197, .external_lex_state = 2},
  [106] = {.lex_state = 197, .external_lex_state = 2},
  [107] = {.lex_state = 197, .external_lex_state = 2},
  [108] = {.lex_state = 197},
  [109] = {.lex_state = 197, .external_lex_state = 2},
  [110] = {.lex_state = 197, .external_lex_state = 2},
  [111] = {.lex_state = 197, .external_lex_state = 2},
  [112] = {.lex_state = 197, .external_lex_state = 2},
  [113] = {.lex_state = 197, .external_lex_state = 2},
  [114] = {.lex_state = 197, .external_lex_state = 2},
  [115] = {.lex_state = 197, .external_lex_state = 2},
  [116] = {.lex_state = 197, .external_lex_state = 2},
  [117] = {.lex_state = 197, .external_lex_state = 2},
  [118] = {.lex_state = 197, .external_lex_state = 2},
  [119] = {.lex_state = 197},
  [120] = {.lex_state = 197, .external_lex_state = 2},
  [121] = {.lex_state = 197, .external_lex_state = 2},
  [122] = {.lex_state = 197, .external_lex_state = 2},
  [123] = {.lex_state = 197, .external_lex_state = 2},
  [124] = {.lex_state = 197, .external_lex_state = 2},
  [125] = {.lex_state = 197},
  [126] = {.lex_state = 197},
  [127] = {.lex_state = 197, .external_lex_state = 2},
  [128] = {.lex_state = 197},
  [129] = {.lex_state = 197},
  [130] = {.lex_state = 197},
  [131] = {.lex_state = 197, .external_lex_state = 2},
  [132] = {.lex_state = 197},
  [133] = {.lex_state = 197},
  [134] = {.lex_state = 197},
  [135] = {.lex_state = 197, .external_lex_state = 2},
  [136] = {.lex_state = 197},
  [137] = {.lex_state = 197, .external_lex_state = 2},
  [138] = {.lex_state = 197},
  [139] = {.lex_state = 197},
  [140] = {.lex_state = 197},
  [141] = {.lex_state = 197},
  [142] = {.lex_state = 197},
  [143] = {.lex_state = 197},
  [144] = {.lex_state = 197, .external_lex_state = 2},
  [145] = {.lex_state = 197, .external_lex_state = 2},
  [146] = {.lex_state = 197},
  [147] = {.lex_state = 197},
  [148] = {.lex_state = 197},
  [149] = {.lex_state = 197, .external_lex_state = 2},
  [150] = {.lex_state = 197, .external_lex_state = 2},
  [151] = {.lex_state = 5, .external_lex_state = 5},
  [152] = {.lex_state = 5, .external_lex_state = 5},
  [153] = {.lex_state = 5, .external_lex_state = 5},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 5, .external_lex_state = 5},
  [156] = {.lex_state = 41, .external_lex_state = 6},
  [157] = {.lex_state = 48, .external_lex_state = 7},
  [158] = {.lex_state = 55, .external_lex_state = 8},
  [159] = {.lex_state = 34, .external_lex_state = 5},
  [160] = {.lex_state = 34, .external_lex_state = 5},
  [161] = {.lex_state = 5, .external_lex_state = 5},
  [162] = {.lex_state = 34, .external_lex_state = 5},
  [163] = {.lex_state = 65, .external_lex_state = 5},
  [164] = {.lex_state = 65, .external_lex_state = 5},
  [165] = {.lex_state = 5, .external_lex_state = 5},
  [166] = {.lex_state = 5, .external_lex_state = 5},
  [167] = {.lex_state = 5, .external_lex_state = 5},
  [168] = {.lex_state = 5, .external_lex_state = 5},
  [169] = {.lex_state = 83, .external_lex_state = 5},
  [170] = {.lex_state = 98, .external_lex_state = 7},
  [171] = {.lex_state = 99, .external_lex_state = 8},
  [172] = {.lex_state = 13, .external_lex_state = 5},
  [173] = {.lex_state = 65, .external_lex_state = 5},
  [174] = {.lex_state = 13, .external_lex_state = 5},
  [175] = {.lex_state = 13, .external_lex_state = 5},
  [176] = {.lex_state = 13, .external_lex_state = 5},
  [177] = {.lex_state = 65, .external_lex_state = 5},
  [178] = {.lex_state = 13, .external_lex_state = 5},
  [179] = {.lex_state = 13, .external_lex_state = 5},
  [180] = {.lex_state = 100, .external_lex_state = 6},
  [181] = {.lex_state = 65, .external_lex_state = 5},
  [182] = {.lex_state = 102},
  [183] = {.lex_state = 42, .external_lex_state = 9},
  [184] = {.lex_state = 60, .external_lex_state = 10},
  [185] = {.lex_state = 34, .external_lex_state = 5},
  [186] = {.lex_state = 53, .external_lex_state = 11},
  [187] = {.lex_state = 43, .external_lex_state = 9},
  [188] = {.lex_state = 54, .external_lex_state = 11},
  [189] = {.lex_state = 34, .external_lex_state = 5},
  [190] = {.lex_state = 104, .external_lex_state = 5},
  [191] = {.lex_state = 104, .external_lex_state = 5},
  [192] = {.lex_state = 61, .external_lex_state = 10},
  [193] = {.lex_state = 68, .external_lex_state = 12},
  [194] = {.lex_state = 13, .external_lex_state = 5},
  [195] = {.lex_state = 13, .external_lex_state = 5},
  [196] = {.lex_state = 68, .external_lex_state = 12},
  [197] = {.lex_state = 68, .external_lex_state = 12},
  [198] = {.lex_state = 56, .external_lex_state = 10},
  [199] = {.lex_state = 49, .external_lex_state = 11},
  [200] = {.lex_state = 44, .external_lex_state = 9},
  [201] = {.lex_state = 102},
  [202] = {.lex_state = 68, .external_lex_state = 12},
  [203] = {.lex_state = 110, .external_lex_state = 13},
  [204] = {.lex_state = 111, .external_lex_state = 14},
  [205] = {.lex_state = 13, .external_lex_state = 5},
  [206] = {.lex_state = 57, .external_lex_state = 15},
  [207] = {.lex_state = 13, .external_lex_state = 5},
  [208] = {.lex_state = 45, .external_lex_state = 14},
  [209] = {.lex_state = 13, .external_lex_state = 5},
  [210] = {.lex_state = 13, .external_lex_state = 5},
  [211] = {.lex_state = 13, .external_lex_state = 5},
  [212] = {.lex_state = 112, .external_lex_state = 15},
  [213] = {.lex_state = 104, .external_lex_state = 5},
  [214] = {.lex_state = 104, .external_lex_state = 5},
  [215] = {.lex_state = 104, .external_lex_state = 5},
  [216] = {.lex_state = 69},
  [217] = {.lex_state = 111, .external_lex_state = 14},
  [218] = {.lex_state = 69},
  [219] = {.lex_state = 104, .external_lex_state = 5},
  [220] = {.lex_state = 46, .external_lex_state = 9},
  [221] = {.lex_state = 50, .external_lex_state = 11},
  [222] = {.lex_state = 58, .external_lex_state = 10},
  [223] = {.lex_state = 106},
  [224] = {.lex_state = 13, .external_lex_state = 5},
  [225] = {.lex_state = 112, .external_lex_state = 15},
  [226] = {.lex_state = 70},
  [227] = {.lex_state = 110, .external_lex_state = 13},
  [228] = {.lex_state = 70},
  [229] = {.lex_state = 59, .external_lex_state = 10},
  [230] = {.lex_state = 47, .external_lex_state = 9},
  [231] = {.lex_state = 51, .external_lex_state = 11},
  [232] = {.lex_state = 36, .external_lex_state = 16},
  [233] = {.lex_state = 38, .external_lex_state = 5},
  [234] = {.lex_state = 38, .external_lex_state = 5},
  [235] = {.lex_state = 0, .external_lex_state = 5},
  [236] = {.lex_state = 38, .external_lex_state = 5},
  [237] = {.lex_state = 96},
  [238] = {.lex_state = 0, .external_lex_state = 5},
  [239] = {.lex_state = 38, .external_lex_state = 5},
  [240] = {.lex_state = 38, .external_lex_state = 5},
  [241] = {.lex_state = 95},
  [242] = {.lex_state = 74},
  [243] = {.lex_state = 16, .external_lex_state = 5},
  [244] = {.lex_state = 74},
  [245] = {.lex_state = 52, .external_lex_state = 11},
  [246] = {.lex_state = 38, .external_lex_state = 5},
  [247] = {.lex_state = 36, .external_lex_state = 16},
  [248] = {.lex_state = 40},
  [249] = {.lex_state = 38, .external_lex_state = 5},
  [250] = {.lex_state = 40},
  [251] = {.lex_state = 36, .external_lex_state = 2},
  [252] = {.lex_state = 113, .external_lex_state = 9},
  [253] = {.lex_state = 36, .external_lex_state = 2},
  [254] = {.lex_state = 36, .external_lex_state = 2},
  [255] = {.lex_state = 36, .external_lex_state = 2},
  [256] = {.lex_state = 36, .external_lex_state = 2},
  [257] = {.lex_state = 114, .external_lex_state = 10},
  [258] = {.lex_state = 115, .external_lex_state = 11},
  [259] = {.lex_state = 36, .external_lex_state = 2},
  [260] = {.lex_state = 36, .external_lex_state = 2},
  [261] = {.lex_state = 36, .external_lex_state = 2},
  [262] = {.lex_state = 36, .external_lex_state = 2},
  [263] = {.lex_state = 36, .external_lex_state = 2},
  [264] = {.lex_state = 36, .external_lex_state = 2},
  [265] = {.lex_state = 36, .external_lex_state = 2},
  [266] = {.lex_state = 36, .external_lex_state = 2},
  [267] = {.lex_state = 36, .external_lex_state = 5},
  [268] = {.lex_state = 19},
  [269] = {.lex_state = 19},
  [270] = {.lex_state = 36, .external_lex_state = 2},
  [271] = {.lex_state = 36, .external_lex_state = 2},
  [272] = {.lex_state = 36, .external_lex_state = 2},
  [273] = {.lex_state = 36, .external_lex_state = 2},
  [274] = {.lex_state = 36, .external_lex_state = 2},
  [275] = {.lex_state = 68},
  [276] = {.lex_state = 19},
  [277] = {.lex_state = 19},
  [278] = {.lex_state = 36, .external_lex_state = 2},
  [279] = {.lex_state = 36, .external_lex_state = 2},
  [280] = {.lex_state = 114, .external_lex_state = 10},
  [281] = {.lex_state = 115, .external_lex_state = 11},
  [282] = {.lex_state = 36, .external_lex_state = 2},
  [283] = {.lex_state = 113, .external_lex_state = 9},
  [284] = {.lex_state = 36, .external_lex_state = 2},
  [285] = {.lex_state = 36, .external_lex_state = 2},
  [286] = {.lex_state = 36, .external_lex_state = 2},
  [287] = {.lex_state = 36, .external_lex_state = 2},
  [288] = {.lex_state = 36, .external_lex_state = 2},
  [289] = {.lex_state = 113, .external_lex_state = 9},
  [290] = {.lex_state = 36, .external_lex_state = 5},
  [291] = {.lex_state = 114, .external_lex_state = 10},
  [292] = {.lex_state = 19},
  [293] = {.lex_state = 19},
  [294] = {.lex_state = 19},
  [295] = {.lex_state = 36, .external_lex_state = 2},
  [296] = {.lex_state = 68},
  [297] = {.lex_state = 36, .external_lex_state = 2},
  [298] = {.lex_state = 114, .external_lex_state = 10},
  [299] = {.lex_state = 115, .external_lex_state = 11},
  [300] = {.lex_state = 113, .external_lex_state = 9},
  [301] = {.lex_state = 19},
  [302] = {.lex_state = 36, .external_lex_state = 5},
  [303] = {.lex_state = 115, .external_lex_state = 11},
  [304] = {.lex_state = 36, .external_lex_state = 2},
  [305] = {.lex_state = 68},
  [306] = {.lex_state = 22},
  [307] = {.lex_state = 36, .external_lex_state = 2},
  [308] = {.lex_state = 22},
  [309] = {.lex_state = 113, .external_lex_state = 9},
  [310] = {.lex_state = 36, .external_lex_state = 5},
  [311] = {.lex_state = 36, .external_lex_state = 2},
  [312] = {.lex_state = 19},
  [313] = {.lex_state = 19},
  [314] = {.lex_state = 36, .external_lex_state = 2},
  [315] = {.lex_state = 70},
  [316] = {.lex_state = 70},
  [317] = {.lex_state = 36, .external_lex_state = 2},
  [318] = {.lex_state = 19},
  [319] = {.lex_state = 68},
  [320] = {.lex_state = 36, .external_lex_state = 2},
  [321] = {.lex_state = 69},
  [322] = {.lex_state = 69},
  [323] = {.lex_state = 36, .external_lex_state = 2},
  [324] = {.lex_state = 19},
  [325] = {.lex_state = 19},
  [326] = {.lex_state = 36, .external_lex_state = 2},
  [327] = {.lex_state = 36, .external_lex_state = 5},
  [328] = {.lex_state = 19},
  [329] = {.lex_state = 19},
  [330] = {.lex_state = 70},
  [331] = {.lex_state = 114, .external_lex_state = 10},
  [332] = {.lex_state = 115, .external_lex_state = 11},
  [333] = {.lex_state = 113, .external_lex_state = 9},
  [334] = {.lex_state = 114, .external_lex_state = 10},
  [335] = {.lex_state = 22},
  [336] = {.lex_state = 115, .external_lex_state = 11},
  [337] = {.lex_state = 22},
  [338] = {.lex_state = 19},
  [339] = {.lex_state = 19},
  [340] = {.lex_state = 68},
  [341] = {.lex_state = 69},
  [342] = {.lex_state = 68},
  [343] = {.lex_state = 86},
  [344] = {.lex_state = 113, .external_lex_state = 9},
  [345] = {.lex_state = 114, .external_lex_state = 10},
  [346] = {.lex_state = 76},
  [347] = {.lex_state = 76},
  [348] = {.lex_state = 68, .external_lex_state = 11},
  [349] = {.lex_state = 36, .external_lex_state = 5},
  [350] = {.lex_state = 113, .external_lex_state = 9},
  [351] = {.lex_state = 115, .external_lex_state = 11},
  [352] = {.lex_state = 114, .external_lex_state = 10},
  [353] = {.lex_state = 19},
  [354] = {.lex_state = 36, .external_lex_state = 2},
  [355] = {.lex_state = 36, .external_lex_state = 2},
  [356] = {.lex_state = 36, .external_lex_state = 2},
  [357] = {.lex_state = 36, .external_lex_state = 2},
  [358] = {.lex_state = 36, .external_lex_state = 2},
  [359] = {.lex_state = 36, .external_lex_state = 2},
  [360] = {.lex_state = 38, .external_lex_state = 5},
  [361] = {.lex_state = 36, .external_lex_state = 2},
  [362] = {.lex_state = 36, .external_lex_state = 2},
  [363] = {.lex_state = 36, .external_lex_state = 2},
  [364] = {.lex_state = 36, .external_lex_state = 2},
  [365] = {.lex_state = 36, .external_lex_state = 2},
  [366] = {.lex_state = 36, .external_lex_state = 2},
  [367] = {.lex_state = 36, .external_lex_state = 2},
  [368] = {.lex_state = 36, .external_lex_state = 2},
  [369] = {.lex_state = 36, .external_lex_state = 2},
  [370] = {.lex_state = 113, .external_lex_state = 9},
  [371] = {.lex_state = 115, .external_lex_state = 11},
  [372] = {.lex_state = 114, .external_lex_state = 10},
  [373] = {.lex_state = 115, .external_lex_state = 11},
  [374] = {.lex_state = 115, .external_lex_state = 11},
  [375] = {.lex_state = 113, .external_lex_state = 9},
  [376] = {.lex_state = 115, .external_lex_state = 11},
  [377] = {.lex_state = 114, .external_lex_state = 10},
  [378] = {.lex_state = 113, .external_lex_state = 9},
  [379] = {.lex_state = 78},
  [380] = {.lex_state = 36, .external_lex_state = 16},
  [381] = {.lex_state = 115, .external_lex_state = 11},
  [382] = {.lex_state = 78},
  [383] = {.lex_state = 36, .external_lex_state = 2},
  [384] = {.lex_state = 68},
  [385] = {.lex_state = 17, .external_lex_state = 5},
  [386] = {.lex_state = 114, .external_lex_state = 10},
  [387] = {.lex_state = 68, .external_lex_state = 11},
  [388] = {.lex_state = 113, .external_lex_state = 9},
  [389] = {.lex_state = 36, .external_lex_state = 5},
  [390] = {.lex_state = 114, .external_lex_state = 10},
  [391] = {.lex_state = 68},
  [392] = {.lex_state = 89},
  [393] = {.lex_state = 36},
  [394] = {.lex_state = 36, .external_lex_state = 5},
  [395] = {.lex_state = 36},
  [396] = {.lex_state = 36, .external_lex_state = 5},
  [397] = {.lex_state = 36},
  [398] = {.lex_state = 36},
  [399] = {.lex_state = 36},
  [400] = {.lex_state = 36, .external_lex_state = 5},
  [401] = {.lex_state = 36},
  [402] = {.lex_state = 36},
  [403] = {.lex_state = 36, .external_lex_state = 5},
  [404] = {.lex_state = 36, .external_lex_state = 5},
  [405] = {.lex_state = 36},
  [406] = {.lex_state = 36, .external_lex_state = 5},
  [407] = {.lex_state = 36},
  [408] = {.lex_state = 36},
  [409] = {.lex_state = 36},
  [410] = {.lex_state = 36},
  [411] = {.lex_state = 36},
  [412] = {.lex_state = 36, .external_lex_state = 5},
  [413] = {.lex_state = 36, .external_lex_state = 5},
  [414] = {.lex_state = 36, .external_lex_state = 5},
  [415] = {.lex_state = 36, .external_lex_state = 5},
  [416] = {.lex_state = 36, .external_lex_state = 5},
  [417] = {.lex_state = 36, .external_lex_state = 5},
  [418] = {.lex_state = 36, .external_lex_state = 5},
  [419] = {.lex_state = 36, .external_lex_state = 5},
  [420] = {.lex_state = 36, .external_lex_state = 5},
  [421] = {.lex_state = 36, .external_lex_state = 5},
  [422] = {.lex_state = 36, .external_lex_state = 5},
  [423] = {.lex_state = 36, .external_lex_state = 5},
  [424] = {.lex_state = 36},
  [425] = {.lex_state = 36, .external_lex_state = 5},
  [426] = {.lex_state = 36},
  [427] = {.lex_state = 36, .external_lex_state = 5},
  [428] = {.lex_state = 36},
  [429] = {.lex_state = 36, .external_lex_state = 5},
  [430] = {.lex_state = 36, .external_lex_state = 5},
  [431] = {.lex_state = 36, .external_lex_state = 5},
  [432] = {.lex_state = 36},
  [433] = {.lex_state = 36, .external_lex_state = 5},
  [434] = {.lex_state = 36},
  [435] = {.lex_state = 36, .external_lex_state = 5},
  [436] = {.lex_state = 36},
  [437] = {.lex_state = 36},
  [438] = {.lex_state = 36, .external_lex_state = 5},
  [439] = {.lex_state = 36},
  [440] = {.lex_state = 74},
  [441] = {.lex_state = 36},
  [442] = {.lex_state = 74},
  [443] = {.lex_state = 36, .external_lex_state = 5},
  [444] = {.lex_state = 36},
  [445] = {.lex_state = 36},
  [446] = {.lex_state = 36},
  [447] = {.lex_state = 36, .external_lex_state = 5},
  [448] = {.lex_state = 36},
  [449] = {.lex_state = 36},
  [450] = {.lex_state = 36, .external_lex_state = 5},
  [451] = {.lex_state = 36},
  [452] = {.lex_state = 27},
  [453] = {.lex_state = 36},
  [454] = {.lex_state = 36, .external_lex_state = 5},
  [455] = {.lex_state = 36},
  [456] = {.lex_state = 36},
  [457] = {.lex_state = 36},
  [458] = {.lex_state = 36},
  [459] = {.lex_state = 36},
  [460] = {.lex_state = 36},
  [461] = {.lex_state = 36},
  [462] = {.lex_state = 74},
  [463] = {.lex_state = 36},
  [464] = {.lex_state = 36},
  [465] = {.lex_state = 36},
  [466] = {.lex_state = 94, .external_lex_state = 11},
  [467] = {.lex_state = 36},
  [468] = {.lex_state = 36},
  [469] = {.lex_state = 36},
  [470] = {.lex_state = 36},
  [471] = {.lex_state = 88},
  [472] = {.lex_state = 36, .external_lex_state = 5},
  [473] = {.lex_state = 36},
  [474] = {.lex_state = 36},
  [475] = {.lex_state = 36},
  [476] = {.lex_state = 36},
  [477] = {.lex_state = 36, .external_lex_state = 5},
  [478] = {.lex_state = 36, .external_lex_state = 5},
  [479] = {.lex_state = 36, .external_lex_state = 5},
  [480] = {.lex_state = 36},
  [481] = {.lex_state = 36, .external_lex_state = 5},
  [482] = {.lex_state = 36, .external_lex_state = 5},
  [483] = {.lex_state = 36, .external_lex_state = 5},
  [484] = {.lex_state = 36, .external_lex_state = 5},
  [485] = {.lex_state = 36},
  [486] = {.lex_state = 36, .external_lex_state = 5},
  [487] = {.lex_state = 36, .external_lex_state = 5},
  [488] = {.lex_state = 36, .external_lex_state = 5},
  [489] = {.lex_state = 36, .external_lex_state = 5},
  [490] = {.lex_state = 36, .external_lex_state = 5},
  [491] = {.lex_state = 36},
  [492] = {.lex_state = 36, .external_lex_state = 5},
  [493] = {.lex_state = 36, .external_lex_state = 5},
  [494] = {.lex_state = 36, .external_lex_state = 5},
  [495] = {.lex_state = 36, .external_lex_state = 5},
  [496] = {.lex_state = 36, .external_lex_state = 5},
  [497] = {.lex_state = 36, .external_lex_state = 5},
  [498] = {.lex_state = 36, .external_lex_state = 5},
  [499] = {.lex_state = 36},
  [500] = {.lex_state = 36},
  [501] = {.lex_state = 36},
  [502] = {.lex_state = 36},
  [503] = {.lex_state = 36},
  [504] = {.lex_state = 36},
  [505] = {.lex_state = 36},
  [506] = {.lex_state = 36},
  [507] = {.lex_state = 36},
  [508] = {.lex_state = 36},
  [509] = {.lex_state = 36},
  [510] = {.lex_state = 36},
  [511] = {.lex_state = 36},
  [512] = {.lex_state = 36},
  [513] = {.lex_state = 36},
  [514] = {.lex_state = 36},
  [515] = {.lex_state = 22},
  [516] = {.lex_state = 22},
  [517] = {.lex_state = 36},
  [518] = {.lex_state = 36},
  [519] = {.lex_state = 78},
  [520] = {.lex_state = 36},
  [521] = {.lex_state = 36},
  [522] = {.lex_state = 36},
  [523] = {.lex_state = 36},
  [524] = {.lex_state = 36, .external_lex_state = 4},
  [525] = {.lex_state = 36},
  [526] = {.lex_state = 68, .external_lex_state = 11},
  [527] = {.lex_state = 115, .external_lex_state = 11},
  [528] = {.lex_state = 76},
  [529] = {.lex_state = 38, .external_lex_state = 5},
  [530] = {.lex_state = 38, .external_lex_state = 5},
  [531] = {.lex_state = 115, .external_lex_state = 11},
  [532] = {.lex_state = 36},
  [533] = {.lex_state = 113, .external_lex_state = 9},
  [534] = {.lex_state = 36},
  [535] = {.lex_state = 36},
  [536] = {.lex_state = 22},
  [537] = {.lex_state = 36},
  [538] = {.lex_state = 36},
  [539] = {.lex_state = 114, .external_lex_state = 10},
  [540] = {.lex_state = 68, .external_lex_state = 11},
  [541] = {.lex_state = 36, .external_lex_state = 16},
  [542] = {.lex_state = 36},
  [543] = {.lex_state = 114, .external_lex_state = 10},
  [544] = {.lex_state = 36},
  [545] = {.lex_state = 36},
  [546] = {.lex_state = 113, .external_lex_state = 9},
  [547] = {.lex_state = 22},
  [548] = {.lex_state = 36},
  [549] = {.lex_state = 36},
  [550] = {.lex_state = 36},
  [551] = {.lex_state = 36},
  [552] = {.lex_state = 36},
  [553] = {.lex_state = 36},
  [554] = {.lex_state = 36, .external_lex_state = 16},
  [555] = {.lex_state = 36},
  [556] = {.lex_state = 36},
  [557] = {.lex_state = 36},
  [558] = {.lex_state = 78},
  [559] = {.lex_state = 36},
  [560] = {.lex_state = 36},
  [561] = {.lex_state = 78},
  [562] = {.lex_state = 22},
  [563] = {.lex_state = 36},
  [564] = {.lex_state = 36},
  [565] = {.lex_state = 76},
  [566] = {.lex_state = 76},
  [567] = {.lex_state = 36},
  [568] = {.lex_state = 36},
  [569] = {.lex_state = 17, .external_lex_state = 5},
  [570] = {.lex_state = 36},
  [571] = {.lex_state = 22},
  [572] = {.lex_state = 36},
  [573] = {.lex_state = 36},
  [574] = {.lex_state = 36},
  [575] = {.lex_state = 68, .external_lex_state = 11},
  [576] = {.lex_state = 36},
  [577] = {.lex_state = 36},
  [578] = {.lex_state = 36},
  [579] = {.lex_state = 36},
  [580] = {.lex_state = 0, .external_lex_state = 5},
  [581] = {.lex_state = 36, .external_lex_state = 5},
  [582] = {.lex_state = 0, .external_lex_state = 5},
  [583] = {.lex_state = 29},
  [584] = {.lex_state = 28},
  [585] = {.lex_state = 36, .external_lex_state = 2},
  [586] = {.lex_state = 0, .external_lex_state = 5},
  [587] = {.lex_state = 36, .external_lex_state = 2},
  [588] = {.lex_state = 36, .external_lex_state = 2},
  [589] = {.lex_state = 36, .external_lex_state = 5},
  [590] = {.lex_state = 0, .external_lex_state = 5},
  [591] = {.lex_state = 0, .external_lex_state = 5},
  [592] = {.lex_state = 29},
  [593] = {.lex_state = 28},
  [594] = {.lex_state = 0, .external_lex_state = 17},
  [595] = {.lex_state = 22},
  [596] = {.lex_state = 0, .external_lex_state = 17},
  [597] = {.lex_state = 32},
  [598] = {.lex_state = 0, .external_lex_state = 5},
  [599] = {.lex_state = 0, .external_lex_state = 5},
  [600] = {.lex_state = 0, .external_lex_state = 5},
  [601] = {.lex_state = 0, .external_lex_state = 5},
  [602] = {.lex_state = 0, .external_lex_state = 17},
  [603] = {.lex_state = 0, .external_lex_state = 5},
  [604] = {.lex_state = 0, .external_lex_state = 5},
  [605] = {.lex_state = 28},
  [606] = {.lex_state = 116},
  [607] = {.lex_state = 0, .external_lex_state = 5},
  [608] = {.lex_state = 0, .external_lex_state = 5},
  [609] = {.lex_state = 22},
  [610] = {.lex_state = 0, .external_lex_state = 17},
  [611] = {.lex_state = 0, .external_lex_state = 17},
  [612] = {.lex_state = 0, .external_lex_state = 5},
  [613] = {.lex_state = 20},
  [614] = {.lex_state = 0, .external_lex_state = 5},
  [615] = {.lex_state = 0, .external_lex_state = 5},
  [616] = {.lex_state = 0, .external_lex_state = 5},
  [617] = {.lex_state = 0, .external_lex_state = 5},
  [618] = {.lex_state = 0, .external_lex_state = 5},
  [619] = {.lex_state = 28},
  [620] = {.lex_state = 0, .external_lex_state = 5},
  [621] = {.lex_state = 0, .external_lex_state = 5},
  [622] = {.lex_state = 0, .external_lex_state = 5},
  [623] = {.lex_state = 28},
  [624] = {.lex_state = 0, .external_lex_state = 5},
  [625] = {.lex_state = 0, .external_lex_state = 5},
  [626] = {.lex_state = 22},
  [627] = {.lex_state = 0, .external_lex_state = 17},
  [628] = {.lex_state = 0, .external_lex_state = 5},
  [629] = {.lex_state = 0, .external_lex_state = 5},
  [630] = {.lex_state = 0, .external_lex_state = 5},
  [631] = {.lex_state = 29},
  [632] = {.lex_state = 20},
  [633] = {.lex_state = 0, .external_lex_state = 5},
  [634] = {.lex_state = 0, .external_lex_state = 5},
  [635] = {.lex_state = 0, .external_lex_state = 5},
  [636] = {.lex_state = 0, .external_lex_state = 5},
  [637] = {.lex_state = 0, .external_lex_state = 5},
  [638] = {.lex_state = 0, .external_lex_state = 5},
  [639] = {.lex_state = 0, .external_lex_state = 5},
  [640] = {.lex_state = 29},
  [641] = {.lex_state = 28},
  [642] = {.lex_state = 0, .external_lex_state = 5},
  [643] = {.lex_state = 0, .external_lex_state = 5},
  [644] = {.lex_state = 0, .external_lex_state = 17},
  [645] = {.lex_state = 29},
  [646] = {.lex_state = 0, .external_lex_state = 17},
  [647] = {.lex_state = 29},
  [648] = {.lex_state = 28},
  [649] = {.lex_state = 29},
  [650] = {.lex_state = 0, .external_lex_state = 17},
  [651] = {.lex_state = 0, .external_lex_state = 18},
  [652] = {.lex_state = 20},
  [653] = {.lex_state = 20, .external_lex_state = 5},
  [654] = {.lex_state = 20, .external_lex_state = 5},
  [655] = {.lex_state = 20, .external_lex_state = 5},
  [656] = {.lex_state = 20, .external_lex_state = 5},
  [657] = {.lex_state = 20, .external_lex_state = 5},
  [658] = {.lex_state = 20, .external_lex_state = 5},
  [659] = {.lex_state = 20, .external_lex_state = 5},
  [660] = {.lex_state = 20, .external_lex_state = 5},
  [661] = {.lex_state = 20, .external_lex_state = 5},
  [662] = {.lex_state = 20, .external_lex_state = 5},
  [663] = {.lex_state = 20, .external_lex_state = 5},
  [664] = {.lex_state = 20, .external_lex_state = 5},
  [665] = {.lex_state = 20, .external_lex_state = 5},
  [666] = {.lex_state = 20, .external_lex_state = 5},
  [667] = {.lex_state = 20, .external_lex_state = 5},
  [668] = {.lex_state = 20, .external_lex_state = 5},
  [669] = {.lex_state = 20, .external_lex_state = 5},
  [670] = {.lex_state = 20, .external_lex_state = 5},
  [671] = {.lex_state = 20, .external_lex_state = 5},
  [672] = {.lex_state = 20, .external_lex_state = 5},
  [673] = {.lex_state = 0, .external_lex_state = 4},
  [674] = {.lex_state = 20, .external_lex_state = 5},
  [675] = {.lex_state = 20, .external_lex_state = 5},
  [676] = {.lex_state = 20, .external_lex_state = 5},
  [677] = {.lex_state = 20, .external_lex_state = 5},
  [678] = {.lex_state = 20, .external_lex_state = 5},
  [679] = {.lex_state = 20, .external_lex_state = 5},
  [680] = {.lex_state = 20, .external_lex_state = 5},
  [681] = {.lex_state = 20, .external_lex_state = 5},
  [682] = {.lex_state = 20, .external_lex_state = 5},
  [683] = {.lex_state = 20, .external_lex_state = 5},
  [684] = {.lex_state = 20, .external_lex_state = 5},
  [685] = {.lex_state = 20, .external_lex_state = 5},
  [686] = {.lex_state = 20, .external_lex_state = 5},
  [687] = {.lex_state = 20, .external_lex_state = 5},
  [688] = {.lex_state = 20, .external_lex_state = 5},
  [689] = {.lex_state = 20, .external_lex_state = 5},
  [690] = {.lex_state = 20, .external_lex_state = 5},
  [691] = {.lex_state = 20, .external_lex_state = 5},
  [692] = {.lex_state = 20, .external_lex_state = 5},
  [693] = {.lex_state = 20, .external_lex_state = 5},
  [694] = {.lex_state = 20, .external_lex_state = 5},
  [695] = {.lex_state = 20, .external_lex_state = 5},
  [696] = {.lex_state = 0, .external_lex_state = 5},
  [697] = {.lex_state = 9},
  [698] = {.lex_state = 20},
  [699] = {.lex_state = 20, .external_lex_state = 5},
  [700] = {.lex_state = 20, .external_lex_state = 5},
  [701] = {.lex_state = 20, .external_lex_state = 5},
  [702] = {.lex_state = 20, .external_lex_state = 5},
  [703] = {.lex_state = 20, .external_lex_state = 5},
  [704] = {.lex_state = 22},
  [705] = {.lex_state = 20, .external_lex_state = 5},
  [706] = {.lex_state = 0, .external_lex_state = 5},
  [707] = {.lex_state = 0, .external_lex_state = 5},
  [708] = {.lex_state = 0, .external_lex_state = 18},
  [709] = {.lex_state = 20},
  [710] = {.lex_state = 0, .external_lex_state = 5},
  [711] = {.lex_state = 197},
  [712] = {.lex_state = 0, .external_lex_state = 5},
  [713] = {.lex_state = 0, .external_lex_state = 18},
  [714] = {.lex_state = 0, .external_lex_state = 18},
  [715] = {.lex_state = 0, .external_lex_state = 5},
  [716] = {.lex_state = 0, .external_lex_state = 18},
  [717] = {.lex_state = 0, .external_lex_state = 18},
  [718] = {.lex_state = 0, .external_lex_state = 18},
  [719] = {.lex_state = 20},
  [720] = {.lex_state = 0, .external_lex_state = 5},
  [721] = {.lex_state = 0, .external_lex_state = 18},
  [722] = {.lex_state = 0, .external_lex_state = 18},
  [723] = {.lex_state = 20},
  [724] = {.lex_state = 0, .external_lex_state = 5},
  [725] = {.lex_state = 0, .external_lex_state = 18},
  [726] = {.lex_state = 0, .external_lex_state = 4},
  [727] = {.lex_state = 0, .external_lex_state = 18},
  [728] = {.lex_state = 0, .external_lex_state = 18},
  [729] = {.lex_state = 0, .external_lex_state = 18},
  [730] = {.lex_state = 0, .external_lex_state = 18},
  [731] = {.lex_state = 0, .external_lex_state = 5},
  [732] = {.lex_state = 0, .external_lex_state = 5},
  [733] = {.lex_state = 0, .external_lex_state = 5},
  [734] = {.lex_state = 0, .external_lex_state = 5},
  [735] = {.lex_state = 0, .external_lex_state = 5},
  [736] = {.lex_state = 0, .external_lex_state = 5},
  [737] = {.lex_state = 0, .external_lex_state = 5},
  [738] = {.lex_state = 0, .external_lex_state = 5},
  [739] = {.lex_state = 0, .external_lex_state = 5},
  [740] = {.lex_state = 0, .external_lex_state = 5},
  [741] = {.lex_state = 0, .external_lex_state = 5},
  [742] = {.lex_state = 0, .external_lex_state = 5},
  [743] = {.lex_state = 0, .external_lex_state = 5},
  [744] = {.lex_state = 0, .external_lex_state = 5},
  [745] = {.lex_state = 27},
  [746] = {.lex_state = 0, .external_lex_state = 5},
  [747] = {.lex_state = 0, .external_lex_state = 5},
  [748] = {.lex_state = 0, .external_lex_state = 5},
  [749] = {.lex_state = 0, .external_lex_state = 5},
  [750] = {.lex_state = 0, .external_lex_state = 5},
  [751] = {.lex_state = 0, .external_lex_state = 5},
  [752] = {.lex_state = 0, .external_lex_state = 5},
  [753] = {.lex_state = 0, .external_lex_state = 5},
  [754] = {.lex_state = 0, .external_lex_state = 5},
  [755] = {.lex_state = 0, .external_lex_state = 5},
  [756] = {.lex_state = 0, .external_lex_state = 5},
  [757] = {.lex_state = 0, .external_lex_state = 5},
  [758] = {.lex_state = 0, .external_lex_state = 5},
  [759] = {.lex_state = 0, .external_lex_state = 5},
  [760] = {.lex_state = 0, .external_lex_state = 5},
  [761] = {.lex_state = 0, .external_lex_state = 5},
  [762] = {.lex_state = 0, .external_lex_state = 11},
  [763] = {.lex_state = 0, .external_lex_state = 5},
  [764] = {.lex_state = 0, .external_lex_state = 5},
  [765] = {.lex_state = 27},
  [766] = {.lex_state = 0, .external_lex_state = 11},
  [767] = {.lex_state = 0, .external_lex_state = 5},
  [768] = {.lex_state = 0, .external_lex_state = 2},
  [769] = {.lex_state = 0, .external_lex_state = 5},
  [770] = {.lex_state = 0, .external_lex_state = 2},
  [771] = {.lex_state = 0, .external_lex_state = 5},
  [772] = {.lex_state = 0, .external_lex_state = 5},
  [773] = {.lex_state = 27},
  [774] = {.lex_state = 0, .external_lex_state = 5},
  [775] = {.lex_state = 0, .external_lex_state = 5},
  [776] = {.lex_state = 0, .external_lex_state = 5},
  [777] = {.lex_state = 0, .external_lex_state = 5},
  [778] = {.lex_state = 9},
  [779] = {.lex_state = 0, .external_lex_state = 5},
  [780] = {.lex_state = 0, .external_lex_state = 5},
  [781] = {.lex_state = 0, .external_lex_state = 5},
  [782] = {.lex_state = 0, .external_lex_state = 5},
  [783] = {.lex_state = 0, .external_lex_state = 5},
  [784] = {.lex_state = 0, .external_lex_state = 3},
  [785] = {.lex_state = 0, .external_lex_state = 5},
  [786] = {.lex_state = 0, .external_lex_state = 3},
  [787] = {.lex_state = 0, .external_lex_state = 3},
  [788] = {.lex_state = 0, .external_lex_state = 3},
  [789] = {.lex_state = 0, .external_lex_state = 3},
  [790] = {.lex_state = 0, .external_lex_state = 3},
  [791] = {.lex_state = 0, .external_lex_state = 3},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0, .external_lex_state = 5},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0, .external_lex_state = 5},
  [796] = {.lex_state = 0, .external_lex_state = 5},
  [797] = {.lex_state = 0, .external_lex_state = 5},
  [798] = {.lex_state = 0, .external_lex_state = 5},
  [799] = {.lex_state = 0, .external_lex_state = 5},
  [800] = {.lex_state = 0, .external_lex_state = 5},
  [801] = {.lex_state = 0, .external_lex_state = 5},
  [802] = {.lex_state = 0, .external_lex_state = 3},
  [803] = {.lex_state = 0, .external_lex_state = 3},
  [804] = {.lex_state = 0, .external_lex_state = 3},
  [805] = {.lex_state = 0, .external_lex_state = 5},
  [806] = {.lex_state = 0, .external_lex_state = 3},
  [807] = {.lex_state = 0, .external_lex_state = 5},
  [808] = {.lex_state = 0, .external_lex_state = 3},
  [809] = {.lex_state = 0, .external_lex_state = 5},
  [810] = {.lex_state = 0, .external_lex_state = 3},
  [811] = {.lex_state = 0, .external_lex_state = 5},
  [812] = {.lex_state = 0, .external_lex_state = 3},
  [813] = {.lex_state = 0, .external_lex_state = 5},
  [814] = {.lex_state = 0, .external_lex_state = 3},
  [815] = {.lex_state = 0, .external_lex_state = 5},
  [816] = {.lex_state = 197},
  [817] = {.lex_state = 197},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 9},
  [820] = {.lex_state = 0, .external_lex_state = 5},
  [821] = {.lex_state = 9},
  [822] = {.lex_state = 0, .external_lex_state = 3},
  [823] = {.lex_state = 0, .external_lex_state = 3},
  [824] = {.lex_state = 0, .external_lex_state = 5},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0, .external_lex_state = 5},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0, .external_lex_state = 5},
  [829] = {.lex_state = 0, .external_lex_state = 5},
  [830] = {.lex_state = 0, .external_lex_state = 5},
  [831] = {.lex_state = 0, .external_lex_state = 5},
  [832] = {.lex_state = 20},
  [833] = {.lex_state = 109},
  [834] = {.lex_state = 0, .external_lex_state = 11},
  [835] = {.lex_state = 0, .external_lex_state = 5},
  [836] = {.lex_state = 0, .external_lex_state = 5},
  [837] = {.lex_state = 0, .external_lex_state = 5},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0, .external_lex_state = 5},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0, .external_lex_state = 5},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0, .external_lex_state = 5},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0, .external_lex_state = 5},
  [846] = {.lex_state = 0, .external_lex_state = 5},
  [847] = {.lex_state = 0, .external_lex_state = 2},
  [848] = {.lex_state = 0, .external_lex_state = 5},
  [849] = {.lex_state = 0, .external_lex_state = 5},
  [850] = {.lex_state = 0, .external_lex_state = 5},
  [851] = {.lex_state = 0, .external_lex_state = 5},
  [852] = {.lex_state = 0, .external_lex_state = 5},
  [853] = {.lex_state = 0, .external_lex_state = 5},
  [854] = {.lex_state = 0, .external_lex_state = 5},
  [855] = {.lex_state = 22},
  [856] = {.lex_state = 0, .external_lex_state = 3},
  [857] = {.lex_state = 0, .external_lex_state = 3},
  [858] = {.lex_state = 0, .external_lex_state = 11},
  [859] = {.lex_state = 0, .external_lex_state = 3},
  [860] = {.lex_state = 0, .external_lex_state = 5},
  [861] = {.lex_state = 0, .external_lex_state = 3},
  [862] = {.lex_state = 0, .external_lex_state = 5},
  [863] = {.lex_state = 0, .external_lex_state = 3},
  [864] = {.lex_state = 0, .external_lex_state = 11},
  [865] = {.lex_state = 0, .external_lex_state = 3},
  [866] = {.lex_state = 0, .external_lex_state = 5},
  [867] = {.lex_state = 0, .external_lex_state = 3},
  [868] = {.lex_state = 0, .external_lex_state = 2},
  [869] = {.lex_state = 0, .external_lex_state = 3},
  [870] = {.lex_state = 0, .external_lex_state = 3},
  [871] = {.lex_state = 0, .external_lex_state = 3},
  [872] = {.lex_state = 0, .external_lex_state = 3},
  [873] = {.lex_state = 0, .external_lex_state = 3},
  [874] = {.lex_state = 0, .external_lex_state = 3},
  [875] = {.lex_state = 0, .external_lex_state = 3},
  [876] = {.lex_state = 0, .external_lex_state = 3},
  [877] = {.lex_state = 0, .external_lex_state = 3},
  [878] = {.lex_state = 0, .external_lex_state = 5},
  [879] = {.lex_state = 0, .external_lex_state = 5},
  [880] = {.lex_state = 197},
  [881] = {.lex_state = 197},
  [882] = {.lex_state = 0, .external_lex_state = 5},
  [883] = {.lex_state = 0, .external_lex_state = 5},
  [884] = {.lex_state = 0, .external_lex_state = 5},
  [885] = {.lex_state = 0, .external_lex_state = 5},
  [886] = {.lex_state = 0, .external_lex_state = 5},
  [887] = {.lex_state = 0, .external_lex_state = 5},
  [888] = {.lex_state = 0, .external_lex_state = 3},
  [889] = {.lex_state = 0, .external_lex_state = 3},
  [890] = {.lex_state = 0, .external_lex_state = 5},
  [891] = {.lex_state = 0, .external_lex_state = 3},
  [892] = {.lex_state = 0, .external_lex_state = 5},
  [893] = {.lex_state = 0, .external_lex_state = 3},
  [894] = {.lex_state = 0, .external_lex_state = 5},
  [895] = {.lex_state = 0, .external_lex_state = 3},
  [896] = {.lex_state = 0, .external_lex_state = 5},
  [897] = {.lex_state = 0, .external_lex_state = 3},
  [898] = {.lex_state = 0, .external_lex_state = 5},
  [899] = {.lex_state = 0, .external_lex_state = 3},
  [900] = {.lex_state = 0, .external_lex_state = 5},
  [901] = {.lex_state = 0, .external_lex_state = 3},
  [902] = {.lex_state = 0, .external_lex_state = 3},
  [903] = {.lex_state = 0, .external_lex_state = 3},
  [904] = {.lex_state = 0, .external_lex_state = 3},
  [905] = {.lex_state = 0, .external_lex_state = 3},
  [906] = {.lex_state = 0, .external_lex_state = 3},
  [907] = {.lex_state = 0, .external_lex_state = 3},
  [908] = {.lex_state = 0, .external_lex_state = 3},
  [909] = {.lex_state = 0, .external_lex_state = 3},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0, .external_lex_state = 5},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0, .external_lex_state = 5},
  [915] = {.lex_state = 27},
  [916] = {.lex_state = 22},
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
  [932] = {.lex_state = 22},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
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
    [aux_sym_wrapped_parameters_token3] = ACTIONS(1),
    [aux_sym_wrapped_parameters_token5] = ACTIONS(1),
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
    [sym_source_file] = STATE(927),
    [sym__node] = STATE(5),
    [sym_tag] = STATE(5),
    [sym_tag_name] = STATE(165),
    [sym_splat_tags] = STATE(5),
    [sym__html] = STATE(5),
    [sym_html_opening_tag] = STATE(235),
    [sym_html_closing_tag] = STATE(235),
    [sym__html_line] = STATE(603),
    [sym_injector] = STATE(5),
    [sym_ruby_interpolation] = STATE(235),
    [sym_directive] = STATE(604),
    [sym_directive_block] = STATE(5),
    [sym_text_block] = STATE(5),
    [sym_comment] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_tag_repeat1] = STATE(153),
    [aux_sym__html_line_repeat1] = STATE(235),
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
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(54), 1,
      aux_sym_tag_name_token1,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(60), 1,
      sym_tag_class,
    ACTIONS(63), 1,
      sym_tag_id,
    ACTIONS(66), 1,
      anon_sym_STAR,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    ACTIONS(72), 1,
      anon_sym_ruby,
    ACTIONS(75), 1,
      anon_sym_javascript,
    ACTIONS(78), 1,
      anon_sym_css,
    ACTIONS(81), 1,
      anon_sym_sass,
    ACTIONS(84), 1,
      anon_sym_scss,
    ACTIONS(87), 1,
      anon_sym_less,
    ACTIONS(90), 1,
      anon_sym_coffee,
    ACTIONS(93), 1,
      anon_sym_markdown,
    ACTIONS(96), 1,
      anon_sym_textile,
    ACTIONS(99), 1,
      anon_sym_rdoc,
    ACTIONS(102), 1,
      anon_sym_POUND_LBRACE,
    STATE(153), 1,
      aux_sym_tag_repeat1,
    STATE(165), 1,
      sym_tag_name,
    STATE(603), 1,
      sym__html_line,
    STATE(604), 1,
      sym_directive,
    ACTIONS(105), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    ACTIONS(111), 2,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(108), 3,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
    STATE(235), 4,
      sym_html_opening_tag,
      sym_html_closing_tag,
      sym_ruby_interpolation,
      aux_sym__html_line_repeat1,
    STATE(2), 9,
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
    ACTIONS(114), 1,
      anon_sym_NULL,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_ruby,
    ACTIONS(122), 1,
      anon_sym_javascript,
    ACTIONS(124), 1,
      anon_sym_css,
    ACTIONS(126), 1,
      anon_sym_sass,
    ACTIONS(128), 1,
      anon_sym_scss,
    ACTIONS(130), 1,
      anon_sym_less,
    ACTIONS(132), 1,
      anon_sym_coffee,
    ACTIONS(134), 1,
      anon_sym_markdown,
    ACTIONS(136), 1,
      anon_sym_textile,
    ACTIONS(138), 1,
      anon_sym_rdoc,
    ACTIONS(142), 1,
      sym__dedent,
    STATE(152), 1,
      aux_sym_tag_repeat1,
    STATE(165), 1,
      sym_tag_name,
    STATE(598), 1,
      sym__html_line,
    STATE(601), 1,
      sym_directive,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    ACTIONS(140), 2,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(45), 3,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
    STATE(235), 4,
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
    ACTIONS(49), 1,
      sym__dedent,
    ACTIONS(54), 1,
      aux_sym_tag_name_token1,
    ACTIONS(57), 1,
      anon_sym_LT,
    ACTIONS(60), 1,
      sym_tag_class,
    ACTIONS(63), 1,
      sym_tag_id,
    ACTIONS(102), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(144), 1,
      anon_sym_NULL,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(150), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_ruby,
    ACTIONS(156), 1,
      anon_sym_javascript,
    ACTIONS(159), 1,
      anon_sym_css,
    ACTIONS(162), 1,
      anon_sym_sass,
    ACTIONS(165), 1,
      anon_sym_scss,
    ACTIONS(168), 1,
      anon_sym_less,
    ACTIONS(171), 1,
      anon_sym_coffee,
    ACTIONS(174), 1,
      anon_sym_markdown,
    ACTIONS(177), 1,
      anon_sym_textile,
    ACTIONS(180), 1,
      anon_sym_rdoc,
    STATE(152), 1,
      aux_sym_tag_repeat1,
    STATE(165), 1,
      sym_tag_name,
    STATE(598), 1,
      sym__html_line,
    STATE(601), 1,
      sym_directive,
    ACTIONS(105), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    ACTIONS(183), 2,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(108), 3,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
    STATE(235), 4,
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
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 1,
      anon_sym_NULL,
    STATE(153), 1,
      aux_sym_tag_repeat1,
    STATE(165), 1,
      sym_tag_name,
    STATE(603), 1,
      sym__html_line,
    STATE(604), 1,
      sym_directive,
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
    STATE(235), 4,
      sym_html_opening_tag,
      sym_html_closing_tag,
      sym_ruby_interpolation,
      aux_sym__html_line_repeat1,
    STATE(2), 9,
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
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_ruby,
    ACTIONS(122), 1,
      anon_sym_javascript,
    ACTIONS(124), 1,
      anon_sym_css,
    ACTIONS(126), 1,
      anon_sym_sass,
    ACTIONS(128), 1,
      anon_sym_scss,
    ACTIONS(130), 1,
      anon_sym_less,
    ACTIONS(132), 1,
      anon_sym_coffee,
    ACTIONS(134), 1,
      anon_sym_markdown,
    ACTIONS(136), 1,
      anon_sym_textile,
    ACTIONS(138), 1,
      anon_sym_rdoc,
    ACTIONS(190), 1,
      anon_sym_NULL,
    STATE(152), 1,
      aux_sym_tag_repeat1,
    STATE(165), 1,
      sym_tag_name,
    STATE(598), 1,
      sym__html_line,
    STATE(601), 1,
      sym_directive,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_EQ,
    ACTIONS(140), 2,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
    ACTIONS(45), 3,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
    STATE(235), 4,
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
    ACTIONS(202), 1,
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
    ACTIONS(208), 1,
      sym__indent,
    ACTIONS(204), 13,
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
    ACTIONS(206), 13,
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
  [633] = 3,
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
  [667] = 3,
    ACTIONS(202), 1,
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
  [701] = 3,
    ACTIONS(196), 1,
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
  [735] = 3,
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
  [769] = 3,
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
  [803] = 3,
    ACTIONS(196), 1,
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
  [837] = 3,
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
  [871] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(218), 13,
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
    ACTIONS(220), 13,
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
  [939] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(218), 13,
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
    ACTIONS(220), 13,
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
  [1007] = 3,
    ACTIONS(208), 1,
      sym__indent,
    ACTIONS(204), 13,
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
    ACTIONS(206), 13,
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
    ACTIONS(218), 13,
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
    ACTIONS(220), 13,
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
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(222), 13,
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
    ACTIONS(224), 13,
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
    ACTIONS(226), 13,
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
    ACTIONS(228), 13,
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
    ACTIONS(208), 1,
      sym__indent,
    ACTIONS(230), 13,
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
    ACTIONS(232), 13,
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
    ACTIONS(222), 13,
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
    ACTIONS(224), 13,
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
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(234), 13,
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
    ACTIONS(236), 13,
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
    ACTIONS(222), 13,
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
    ACTIONS(224), 13,
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
    ACTIONS(222), 13,
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
    ACTIONS(224), 13,
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
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 1,
      sym__free_text,
    ACTIONS(240), 25,
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
    ACTIONS(222), 13,
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
    ACTIONS(224), 13,
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
    ACTIONS(222), 13,
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
    ACTIONS(224), 13,
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
    ACTIONS(234), 13,
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
    ACTIONS(236), 13,
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
    ACTIONS(222), 13,
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
    ACTIONS(224), 13,
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
    ACTIONS(222), 13,
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
    ACTIONS(224), 13,
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
    ACTIONS(218), 13,
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
    ACTIONS(220), 13,
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
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(218), 13,
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
    ACTIONS(220), 13,
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
  [1585] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(218), 13,
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
    ACTIONS(220), 13,
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
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(244), 13,
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
    ACTIONS(246), 13,
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
    ACTIONS(238), 1,
      sym__dedent,
    ACTIONS(248), 1,
      sym__free_text,
    ACTIONS(240), 25,
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
  [1687] = 3,
    ACTIONS(208), 1,
      sym__indent,
    ACTIONS(230), 13,
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
    ACTIONS(232), 13,
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
  [1755] = 3,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(244), 13,
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
    ACTIONS(246), 13,
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
    ACTIONS(226), 13,
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
    ACTIONS(228), 13,
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
  [1857] = 2,
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
  [1888] = 2,
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
  [1919] = 2,
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
  [1950] = 2,
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
  [1981] = 2,
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
  [2012] = 2,
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
  [2105] = 2,
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
  [2136] = 2,
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
  [2167] = 2,
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
  [2198] = 2,
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
  [2229] = 2,
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
  [2260] = 2,
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
  [2291] = 2,
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
  [2322] = 2,
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
  [2353] = 2,
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
  [2384] = 2,
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
  [2415] = 2,
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
  [2446] = 2,
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
  [2477] = 2,
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
  [2508] = 2,
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
  [2539] = 2,
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
  [2570] = 2,
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
  [2601] = 2,
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
  [2632] = 2,
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
  [2663] = 2,
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
  [2694] = 2,
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
  [2725] = 2,
    ACTIONS(204), 13,
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
    ACTIONS(206), 13,
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
  [2787] = 2,
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
  [2818] = 2,
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
  [2849] = 2,
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
  [2880] = 2,
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
  [2911] = 2,
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
  [2942] = 2,
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
  [2973] = 2,
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
  [3004] = 2,
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
  [3035] = 2,
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
  [3066] = 2,
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
  [3097] = 2,
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
  [3128] = 2,
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
  [3159] = 2,
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
  [3190] = 2,
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
  [3221] = 2,
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
  [3252] = 2,
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
  [3283] = 2,
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
  [3314] = 2,
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
  [3345] = 2,
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
  [3376] = 2,
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
  [3407] = 2,
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
  [3438] = 2,
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
  [3469] = 2,
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
  [3500] = 2,
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
  [3531] = 2,
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
  [3562] = 2,
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
  [3593] = 2,
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
  [3624] = 2,
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
  [3655] = 2,
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
  [3779] = 2,
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
  [3810] = 2,
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
  [3841] = 2,
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
  [3872] = 2,
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
  [3903] = 2,
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
  [3934] = 2,
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
  [3965] = 2,
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
  [3996] = 2,
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
  [4027] = 2,
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
  [4058] = 2,
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
  [4089] = 2,
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
  [4120] = 2,
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
  [4151] = 2,
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
  [4182] = 2,
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
  [4213] = 2,
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
  [4244] = 2,
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
  [4275] = 2,
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
  [4306] = 2,
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
  [4337] = 2,
    ACTIONS(218), 13,
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
    ACTIONS(220), 13,
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
  [4399] = 2,
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
  [4430] = 2,
    ACTIONS(222), 13,
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
    ACTIONS(224), 13,
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
    ACTIONS(222), 13,
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
    ACTIONS(224), 13,
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
  [4523] = 2,
    ACTIONS(222), 13,
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
    ACTIONS(224), 13,
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
  [4585] = 2,
    ACTIONS(222), 13,
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
    ACTIONS(224), 13,
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
  [4647] = 2,
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
  [4678] = 2,
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
  [4709] = 2,
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
  [4740] = 2,
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
  [4771] = 2,
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
  [4802] = 2,
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
  [4833] = 2,
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
  [4864] = 2,
    ACTIONS(204), 13,
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
    ACTIONS(206), 13,
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
  [4926] = 2,
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
  [4957] = 2,
    ACTIONS(218), 13,
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
    ACTIONS(220), 13,
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
  [5019] = 2,
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
  [5050] = 2,
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
    STATE(160), 1,
      sym_wrapped_parameters,
    STATE(161), 1,
      aux_sym_tag_repeat1,
    STATE(165), 1,
      sym_tag_name,
    STATE(172), 1,
      sym_floating_parameters,
    STATE(176), 1,
      sym_splat_parameters,
    STATE(195), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(629), 1,
      sym_directive_inline,
    STATE(630), 1,
      sym_text_inline,
    STATE(696), 1,
      sym_directive,
    STATE(860), 1,
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
    STATE(159), 1,
      sym_wrapped_parameters,
    STATE(161), 1,
      aux_sym_tag_repeat1,
    STATE(165), 1,
      sym_tag_name,
    STATE(174), 1,
      sym_splat_parameters,
    STATE(175), 1,
      sym_floating_parameters,
    STATE(195), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(599), 1,
      sym_directive_inline,
    STATE(600), 1,
      sym_text_inline,
    STATE(696), 1,
      sym_directive,
    STATE(878), 1,
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
    STATE(161), 1,
      aux_sym_tag_repeat1,
    STATE(162), 1,
      sym_wrapped_parameters,
    STATE(165), 1,
      sym_tag_name,
    STATE(178), 1,
      sym_floating_parameters,
    STATE(179), 1,
      sym_splat_parameters,
    STATE(195), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(607), 1,
      sym_text_inline,
    STATE(608), 1,
      sym_directive_inline,
    STATE(696), 1,
      sym_directive,
    STATE(829), 1,
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
    STATE(165), 1,
      sym_tag_name,
    STATE(785), 2,
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
  [5365] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(468), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    ACTIONS(472), 1,
      sym__newline,
    STATE(378), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
    ACTIONS(466), 12,
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
  [5396] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    ACTIONS(472), 1,
      sym__newline,
    ACTIONS(474), 1,
      aux_sym__ruby_fragment_token2,
    STATE(381), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
    ACTIONS(466), 12,
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
  [5427] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
    ACTIONS(472), 1,
      sym__newline,
    ACTIONS(476), 1,
      aux_sym__ruby_fragment_token3,
    STATE(386), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
    ACTIONS(466), 12,
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
  [5458] = 12,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(478), 1,
      aux_sym_child_token1,
    ACTIONS(480), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(484), 1,
      sym__newline,
    STATE(246), 1,
      aux_sym__text,
    STATE(530), 1,
      sym_ruby_interpolation,
    STATE(612), 1,
      sym_directive_inline,
    STATE(696), 1,
      sym_directive,
    STATE(883), 1,
      sym_child,
    ACTIONS(482), 2,
      anon_sym_POUND,
      sym__free_text,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5500] = 12,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(478), 1,
      aux_sym_child_token1,
    ACTIONS(480), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(486), 1,
      sym__newline,
    STATE(233), 1,
      aux_sym__text,
    STATE(530), 1,
      sym_ruby_interpolation,
    STATE(633), 1,
      sym_directive_inline,
    STATE(696), 1,
      sym_directive,
    STATE(848), 1,
      sym_child,
    ACTIONS(482), 2,
      anon_sym_POUND,
      sym__free_text,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5542] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(488), 1,
      aux_sym_tag_name_token1,
    ACTIONS(491), 1,
      sym_tag_class,
    ACTIONS(494), 1,
      sym_tag_id,
    STATE(161), 1,
      aux_sym_tag_repeat1,
    STATE(165), 1,
      sym_tag_name,
    ACTIONS(499), 3,
      sym__newline,
      aux_sym_wrapped_parameters_token1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(497), 8,
      anon_sym_COLON,
      aux_sym_child_token1,
      aux_sym_splat_parameters_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5576] = 12,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(478), 1,
      aux_sym_child_token1,
    ACTIONS(480), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(501), 1,
      sym__newline,
    STATE(249), 1,
      aux_sym__text,
    STATE(530), 1,
      sym_ruby_interpolation,
    STATE(636), 1,
      sym_directive_inline,
    STATE(696), 1,
      sym_directive,
    STATE(799), 1,
      sym_child,
    ACTIONS(482), 2,
      anon_sym_POUND,
      sym__free_text,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5618] = 8,
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
    STATE(163), 2,
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
  [5651] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(525), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(529), 1,
      sym__newline,
    STATE(163), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
    ACTIONS(519), 8,
      aux_sym_tag_token1,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5684] = 3,
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
  [5706] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(537), 3,
      sym__newline,
      aux_sym_wrapped_parameters_token1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(535), 11,
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
  [5728] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(541), 3,
      sym__newline,
      aux_sym_wrapped_parameters_token1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(539), 11,
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
  [5750] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(545), 3,
      sym__newline,
      aux_sym_wrapped_parameters_token1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(543), 11,
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
  [5772] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(549), 1,
      aux_sym_ruby_inline_token2,
    ACTIONS(551), 1,
      sym__newline,
    ACTIONS(547), 12,
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
  [5796] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(472), 1,
      sym__newline,
    ACTIONS(553), 1,
      aux_sym__ruby_fragment_token2,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    STATE(281), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
    ACTIONS(466), 8,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [5823] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(472), 1,
      sym__newline,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
    ACTIONS(557), 1,
      aux_sym__ruby_fragment_token3,
    STATE(280), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
    ACTIONS(466), 8,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [5850] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(559), 1,
      aux_sym_tag_token1,
    ACTIONS(561), 1,
      aux_sym_child_token1,
    ACTIONS(563), 1,
      sym__newline,
    STATE(635), 1,
      sym_directive_inline,
    STATE(637), 1,
      sym_text_inline,
    STATE(696), 1,
      sym_directive,
    STATE(843), 1,
      sym_child,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5885] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(567), 1,
      sym__newline,
    ACTIONS(565), 12,
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
  [5906] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      aux_sym_child_token1,
    ACTIONS(569), 1,
      aux_sym_tag_token1,
    ACTIONS(571), 1,
      sym__newline,
    STATE(620), 1,
      sym_directive_inline,
    STATE(621), 1,
      sym_text_inline,
    STATE(696), 1,
      sym_directive,
    STATE(885), 1,
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
    ACTIONS(561), 1,
      aux_sym_child_token1,
    ACTIONS(573), 1,
      aux_sym_tag_token1,
    ACTIONS(575), 1,
      sym__newline,
    STATE(616), 1,
      sym_directive_inline,
    STATE(617), 1,
      sym_text_inline,
    STATE(696), 1,
      sym_directive,
    STATE(884), 1,
      sym_child,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [5976] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      aux_sym_child_token1,
    ACTIONS(577), 1,
      aux_sym_tag_token1,
    ACTIONS(579), 1,
      sym__newline,
    STATE(639), 1,
      sym_directive_inline,
    STATE(642), 1,
      sym_text_inline,
    STATE(696), 1,
      sym_directive,
    STATE(732), 1,
      sym_child,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6011] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(583), 1,
      sym__newline,
    ACTIONS(581), 12,
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
  [6032] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      aux_sym_child_token1,
    ACTIONS(585), 1,
      aux_sym_tag_token1,
    ACTIONS(587), 1,
      sym__newline,
    STATE(622), 1,
      sym_directive_inline,
    STATE(624), 1,
      sym_text_inline,
    STATE(696), 1,
      sym_directive,
    STATE(798), 1,
      sym_child,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6067] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      aux_sym_child_token1,
    ACTIONS(589), 1,
      aux_sym_tag_token1,
    ACTIONS(591), 1,
      sym__newline,
    STATE(628), 1,
      sym_text_inline,
    STATE(643), 1,
      sym_directive_inline,
    STATE(696), 1,
      sym_directive,
    STATE(797), 1,
      sym_child,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6102] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(472), 1,
      sym__newline,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    ACTIONS(593), 1,
      aux_sym__ruby_fragment_token1,
    STATE(283), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
    ACTIONS(466), 8,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [6129] = 3,
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
  [6150] = 9,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(595), 1,
      aux_sym_tag_name_token1,
    ACTIONS(597), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(599), 1,
      aux_sym_text_inline_token1,
    STATE(211), 1,
      sym_floating_parameter_pair,
    STATE(385), 1,
      sym_ruby_interpolation,
    STATE(706), 1,
      sym_directive,
    STATE(778), 1,
      sym_parameter_name,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6182] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(601), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    STATE(289), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
    ACTIONS(466), 7,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      aux_sym_wrapped_parameters_token5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [6205] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(605), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(607), 1,
      anon_sym_RBRACK,
    STATE(291), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
    ACTIONS(466), 7,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      aux_sym_wrapped_parameters_token3,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [6228] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(611), 1,
      sym__newline,
    ACTIONS(609), 10,
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
  [6247] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    ACTIONS(613), 1,
      aux_sym__ruby_fragment_token2,
    STATE(303), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
    ACTIONS(466), 7,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      aux_sym_wrapped_parameters_token3,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [6270] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    ACTIONS(615), 1,
      aux_sym__ruby_fragment_token1,
    STATE(309), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
    ACTIONS(466), 7,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      aux_sym_wrapped_parameters_token3,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [6293] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    ACTIONS(617), 1,
      aux_sym__ruby_fragment_token2,
    STATE(258), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
    ACTIONS(466), 7,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      aux_sym_wrapped_parameters_token5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [6316] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(621), 1,
      sym__newline,
    ACTIONS(619), 10,
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
  [6335] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(623), 1,
      anon_sym_COLON,
    ACTIONS(625), 1,
      anon_sym_LPAREN,
    ACTIONS(628), 1,
      anon_sym_LBRACE,
    ACTIONS(631), 1,
      anon_sym_LBRACK,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      sym__newline,
    STATE(190), 1,
      aux_sym__ruby_multiline,
    STATE(219), 1,
      sym__ruby_fragment,
    ACTIONS(637), 3,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [6368] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_LBRACK,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      sym__newline,
    STATE(190), 1,
      aux_sym__ruby_multiline,
    STATE(219), 1,
      sym__ruby_fragment,
    ACTIONS(652), 3,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [6401] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(603), 1,
      anon_sym_RBRACK,
    ACTIONS(656), 1,
      aux_sym__ruby_fragment_token3,
    STATE(257), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
    ACTIONS(466), 7,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      aux_sym_wrapped_parameters_token5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [6424] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(658), 1,
      anon_sym_COLON,
    ACTIONS(660), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    ACTIONS(666), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(668), 1,
      sym_string_start,
    STATE(641), 1,
      sym_ruby_inline,
    STATE(648), 1,
      sym_parameter_value,
    STATE(216), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [6456] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(674), 1,
      aux_sym_child_token1,
    STATE(194), 1,
      aux_sym_floating_parameters_repeat1,
    ACTIONS(670), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(672), 6,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6478] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(681), 1,
      aux_sym_child_token1,
    STATE(194), 1,
      aux_sym_floating_parameters_repeat1,
    ACTIONS(677), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(679), 6,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6500] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(684), 1,
      anon_sym_COLON,
    ACTIONS(686), 1,
      anon_sym_LPAREN,
    ACTIONS(688), 1,
      anon_sym_LBRACE,
    ACTIONS(690), 1,
      anon_sym_LBRACK,
    ACTIONS(692), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(694), 1,
      sym_string_start,
    STATE(640), 1,
      sym_parameter_value,
    STATE(647), 1,
      sym_ruby_inline,
    STATE(226), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [6532] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(696), 1,
      anon_sym_COLON,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    ACTIONS(700), 1,
      anon_sym_LBRACE,
    ACTIONS(702), 1,
      anon_sym_LBRACK,
    ACTIONS(704), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(706), 1,
      sym_string_start,
    STATE(709), 1,
      sym_ruby_inline,
    STATE(723), 1,
      sym_parameter_value,
    STATE(244), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [6564] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(708), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(710), 1,
      anon_sym_RBRACK,
    STATE(331), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
    ACTIONS(466), 6,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [6586] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
    ACTIONS(712), 1,
      aux_sym__ruby_fragment_token2,
    STATE(332), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
    ACTIONS(466), 6,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [6608] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    ACTIONS(714), 1,
      aux_sym__ruby_fragment_token1,
    STATE(333), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
    ACTIONS(466), 6,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [6630] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(597), 1,
      anon_sym_POUND_LBRACE,
    STATE(385), 1,
      sym_ruby_interpolation,
    STATE(706), 1,
      sym_directive,
    ACTIONS(599), 2,
      aux_sym_tag_name_token1,
      aux_sym_text_inline_token1,
    ACTIONS(43), 5,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6654] = 10,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(525), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(716), 1,
      anon_sym_COLON,
    ACTIONS(718), 1,
      sym_string_start,
    STATE(205), 1,
      sym_ruby_inline,
    STATE(224), 1,
      sym_parameter_value,
    STATE(164), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [6686] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(720), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(375), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
    ACTIONS(466), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
      anon_sym_RBRACK,
  [6707] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(724), 1,
      aux_sym__ruby_fragment_token2,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
    STATE(351), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
    ACTIONS(466), 5,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [6728] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(728), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(730), 7,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6745] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(732), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(734), 1,
      anon_sym_RBRACK,
    STATE(390), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
    ACTIONS(466), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [6766] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(736), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(738), 7,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6783] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    ACTIONS(740), 1,
      aux_sym__ruby_fragment_token1,
    STATE(252), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
    ACTIONS(466), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [6804] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(742), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(744), 7,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6821] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(746), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(748), 7,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6838] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(670), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(672), 7,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [6855] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
    ACTIONS(750), 1,
      aux_sym__ruby_fragment_token2,
    STATE(376), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
    ACTIONS(466), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
      anon_sym_RBRACK,
  [6876] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(640), 1,
      sym__newline,
    ACTIONS(623), 8,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [6893] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(583), 1,
      sym__newline,
    ACTIONS(581), 8,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [6910] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(567), 1,
      sym__newline,
    ACTIONS(565), 8,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [6927] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(529), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(660), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    ACTIONS(666), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(519), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
    STATE(218), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [6954] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(752), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    STATE(370), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
    ACTIONS(466), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [6975] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(517), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(756), 1,
      anon_sym_LPAREN,
    ACTIONS(759), 1,
      anon_sym_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACK,
    ACTIONS(765), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(503), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
    STATE(218), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [7002] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(770), 1,
      sym__newline,
    ACTIONS(768), 8,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [7019] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(772), 1,
      aux_sym__ruby_fragment_token1,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    STATE(388), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
    ACTIONS(466), 5,
      aux_sym_wrapped_parameters_token3,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7040] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(774), 1,
      anon_sym_RBRACE,
    ACTIONS(776), 1,
      aux_sym__ruby_fragment_token2,
    STATE(374), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
    ACTIONS(466), 5,
      aux_sym_wrapped_parameters_token3,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7061] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(774), 1,
      anon_sym_RBRACK,
    ACTIONS(778), 1,
      aux_sym__ruby_fragment_token3,
    STATE(345), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
    ACTIONS(466), 5,
      aux_sym_wrapped_parameters_token3,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7082] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_LBRACK,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym__ruby_multiline,
    STATE(219), 1,
      sym__ruby_fragment,
    ACTIONS(652), 3,
      aux_sym__ruby_multiline_token1,
      aux_sym__ruby_multiline_token2,
      aux_sym__ruby_multiline_token3,
  [7109] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(780), 2,
      sym__newline,
      aux_sym_tag_token1,
    ACTIONS(782), 7,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [7126] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(754), 1,
      anon_sym_RBRACK,
    ACTIONS(784), 1,
      aux_sym__ruby_fragment_token3,
    STATE(372), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
    ACTIONS(466), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [7147] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(529), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(686), 1,
      anon_sym_LPAREN,
    ACTIONS(688), 1,
      anon_sym_LBRACE,
    ACTIONS(690), 1,
      anon_sym_LBRACK,
    ACTIONS(692), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(519), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
    STATE(228), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [7174] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(726), 1,
      anon_sym_RBRACK,
    ACTIONS(786), 1,
      aux_sym__ruby_fragment_token3,
    STATE(352), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
    ACTIONS(466), 5,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [7195] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(517), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(788), 1,
      anon_sym_LPAREN,
    ACTIONS(791), 1,
      anon_sym_LBRACE,
    ACTIONS(794), 1,
      anon_sym_LBRACK,
    ACTIONS(797), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(503), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
    STATE(228), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [7222] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(800), 1,
      aux_sym__ruby_fragment_token3,
    ACTIONS(802), 1,
      anon_sym_RBRACK,
    STATE(334), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
    ACTIONS(466), 5,
      aux_sym_wrapped_parameters_token5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7243] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
    ACTIONS(804), 1,
      aux_sym__ruby_fragment_token1,
    STATE(344), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
    ACTIONS(466), 5,
      aux_sym_wrapped_parameters_token5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7264] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    ACTIONS(806), 1,
      aux_sym__ruby_fragment_token2,
    STATE(336), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
    ACTIONS(466), 5,
      aux_sym_wrapped_parameters_token5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7285] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(808), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(812), 1,
      sym__newline,
    ACTIONS(814), 1,
      sym__dedent,
    STATE(380), 1,
      aux_sym__text,
    STATE(554), 1,
      sym_ruby_interpolation,
    STATE(770), 1,
      sym__text_child,
    ACTIONS(810), 2,
      anon_sym_POUND,
      sym__free_text,
  [7311] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(480), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(816), 1,
      sym__newline,
    STATE(360), 1,
      aux_sym__text,
    STATE(530), 1,
      sym_ruby_interpolation,
    STATE(735), 1,
      sym_child,
    ACTIONS(482), 2,
      anon_sym_POUND,
      sym__free_text,
  [7337] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(480), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(818), 1,
      anon_sym_COLON,
    ACTIONS(820), 1,
      sym__newline,
    STATE(236), 1,
      aux_sym__text,
    STATE(530), 1,
      sym_ruby_interpolation,
    STATE(720), 1,
      sym__text_child,
    ACTIONS(482), 2,
      anon_sym_POUND,
      sym__free_text,
  [7363] = 5,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(823), 2,
      sym__newline,
      anon_sym_COLON,
    STATE(238), 4,
      sym_html_opening_tag,
      sym_html_closing_tag,
      sym_ruby_interpolation,
      aux_sym__html_line_repeat1,
  [7383] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(480), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(825), 1,
      anon_sym_COLON,
    ACTIONS(827), 1,
      sym__newline,
    STATE(360), 1,
      aux_sym__text,
    STATE(530), 1,
      sym_ruby_interpolation,
    STATE(712), 1,
      sym__text_child,
    ACTIONS(482), 2,
      anon_sym_POUND,
      sym__free_text,
  [7409] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(551), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(830), 1,
      aux_sym_ruby_inline_token2,
    ACTIONS(547), 6,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7427] = 5,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(832), 1,
      anon_sym_LT,
    ACTIONS(837), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(835), 2,
      sym__newline,
      anon_sym_COLON,
    STATE(238), 4,
      sym_html_opening_tag,
      sym_html_closing_tag,
      sym_ruby_interpolation,
      aux_sym__html_line_repeat1,
  [7447] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(480), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(818), 1,
      anon_sym_COLON,
    ACTIONS(820), 1,
      sym__newline,
    STATE(360), 1,
      aux_sym__text,
    STATE(530), 1,
      sym_ruby_interpolation,
    STATE(720), 1,
      sym__text_child,
    ACTIONS(482), 2,
      anon_sym_POUND,
      sym__free_text,
  [7473] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(480), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(840), 1,
      anon_sym_COLON,
    ACTIONS(842), 1,
      sym__newline,
    STATE(239), 1,
      aux_sym__text,
    STATE(530), 1,
      sym_ruby_interpolation,
    STATE(710), 1,
      sym__text_child,
    ACTIONS(482), 2,
      anon_sym_POUND,
      sym__free_text,
  [7499] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(551), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(845), 1,
      aux_sym_ruby_inline_token2,
    ACTIONS(547), 6,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7517] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(850), 1,
      anon_sym_LBRACE,
    ACTIONS(853), 1,
      anon_sym_LBRACK,
    ACTIONS(856), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(503), 2,
      anon_sym_COLON,
      aux_sym_child_token1,
    STATE(242), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [7541] = 9,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(480), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(859), 1,
      anon_sym_COLON,
    ACTIONS(861), 1,
      aux_sym_child_token1,
    ACTIONS(863), 1,
      aux_sym_floating_parameter_pair_token1,
    ACTIONS(865), 1,
      aux_sym_text_inline_token2,
    ACTIONS(867), 1,
      sym__newline,
    STATE(240), 1,
      sym_ruby_interpolation,
    STATE(707), 1,
      sym__text_child,
  [7569] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    ACTIONS(700), 1,
      anon_sym_LBRACE,
    ACTIONS(702), 1,
      anon_sym_LBRACK,
    ACTIONS(704), 1,
      aux_sym_ruby_inline_token1,
    ACTIONS(519), 2,
      anon_sym_COLON,
      aux_sym_child_token1,
    STATE(242), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [7593] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(870), 1,
      aux_sym__ruby_fragment_token2,
    STATE(373), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
    ACTIONS(466), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [7611] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(480), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(872), 1,
      sym__newline,
    STATE(360), 1,
      aux_sym__text,
    STATE(530), 1,
      sym_ruby_interpolation,
    STATE(894), 1,
      sym_child,
    ACTIONS(482), 2,
      anon_sym_POUND,
      sym__free_text,
  [7637] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(808), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(874), 1,
      sym__newline,
    ACTIONS(876), 1,
      sym__dedent,
    STATE(380), 1,
      aux_sym__text,
    STATE(554), 1,
      sym_ruby_interpolation,
    STATE(868), 1,
      sym__text_child,
    ACTIONS(810), 2,
      anon_sym_POUND,
      sym__free_text,
  [7663] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(327), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
    ACTIONS(878), 3,
      aux_sym_child_token1,
      anon_sym_LBRACK,
      anon_sym_BANG,
  [7685] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(480), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(884), 1,
      sym__newline,
    STATE(360), 1,
      aux_sym__text,
    STATE(530), 1,
      sym_ruby_interpolation,
    STATE(781), 1,
      sym_child,
    ACTIONS(482), 2,
      anon_sym_POUND,
      sym__free_text,
  [7711] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(310), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
    ACTIONS(886), 3,
      aux_sym_child_token1,
      anon_sym_LBRACK,
      anon_sym_BANG,
  [7733] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(888), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [7756] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_LBRACK,
    ACTIONS(890), 2,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
    STATE(300), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [7777] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(898), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [7800] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(900), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [7823] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(902), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [7846] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(904), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [7869] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(906), 1,
      anon_sym_LPAREN,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    ACTIONS(912), 1,
      anon_sym_RBRACK,
    ACTIONS(910), 2,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
    STATE(298), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [7890] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(916), 2,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
    STATE(299), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [7911] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(920), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [7934] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(922), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [7957] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(924), 1,
      sym__dedent,
    STATE(267), 1,
      aux_sym__text,
    STATE(304), 1,
      aux_sym__comment_child_repeat1,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [7980] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(926), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8003] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(928), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8026] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(930), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8049] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(932), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8072] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(934), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8095] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(936), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    STATE(588), 1,
      sym__comment_child,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8118] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(938), 1,
      anon_sym_COLON,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(940), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [8141] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(946), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(939), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [8164] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(948), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8187] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(950), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8210] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(952), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8233] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(954), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8256] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(956), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8279] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(958), 1,
      anon_sym_LPAREN,
    ACTIONS(960), 1,
      anon_sym_LBRACE,
    ACTIONS(962), 1,
      anon_sym_LBRACK,
    ACTIONS(964), 1,
      aux_sym_ruby_inline_token1,
    STATE(858), 1,
      sym_ruby_inline,
    STATE(348), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [8302] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(966), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(913), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [8325] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(968), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(911), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [8348] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(970), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8371] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(972), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8394] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(906), 1,
      anon_sym_LPAREN,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    ACTIONS(974), 1,
      anon_sym_RBRACK,
    ACTIONS(910), 2,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
    STATE(298), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [8415] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(974), 1,
      anon_sym_RBRACE,
    ACTIONS(916), 2,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
    STATE(299), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [8436] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(976), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8459] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_LBRACK,
    ACTIONS(974), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 2,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
    STATE(300), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [8480] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(978), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8503] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(980), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8526] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(982), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8549] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(984), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8572] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(986), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8595] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_LBRACK,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 2,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
    STATE(300), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [8616] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(988), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    STATE(890), 1,
      sym__comment_child,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8639] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(906), 1,
      anon_sym_LPAREN,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    ACTIONS(990), 1,
      anon_sym_RBRACK,
    ACTIONS(910), 2,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
    STATE(298), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [8660] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(992), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(844), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [8683] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(994), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(842), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [8706] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(996), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(840), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [8729] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(998), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8752] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
    ACTIONS(1002), 1,
      anon_sym_LBRACE,
    ACTIONS(1004), 1,
      anon_sym_LBRACK,
    ACTIONS(1006), 1,
      aux_sym_ruby_inline_token1,
    STATE(711), 1,
      sym_ruby_inline,
    STATE(382), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [8775] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1008), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8798] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
    ACTIONS(1013), 1,
      anon_sym_LBRACE,
    ACTIONS(1019), 1,
      anon_sym_RBRACK,
    ACTIONS(1016), 2,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
    STATE(298), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [8819] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1021), 1,
      anon_sym_LPAREN,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
    ACTIONS(1029), 1,
      anon_sym_LBRACK,
    ACTIONS(1024), 2,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
    STATE(299), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [8840] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    ACTIONS(1037), 1,
      anon_sym_LBRACE,
    ACTIONS(1040), 1,
      anon_sym_LBRACK,
    ACTIONS(1032), 2,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
    STATE(300), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [8861] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1043), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(838), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [8884] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1045), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    STATE(882), 1,
      sym__text_child,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [8907] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(990), 1,
      anon_sym_RBRACE,
    ACTIONS(916), 2,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
    STATE(299), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [8928] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1047), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1053), 1,
      sym__dedent,
    STATE(267), 1,
      aux_sym__text,
    STATE(304), 1,
      aux_sym__comment_child_repeat1,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(1050), 2,
      anon_sym_POUND,
      sym__free_text,
  [8951] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1055), 1,
      anon_sym_LPAREN,
    ACTIONS(1057), 1,
      anon_sym_LBRACE,
    ACTIONS(1059), 1,
      anon_sym_LBRACK,
    ACTIONS(1061), 1,
      aux_sym_ruby_inline_token1,
    STATE(711), 1,
      sym_ruby_inline,
    STATE(347), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [8974] = 8,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1063), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1065), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(1067), 1,
      aux_sym_splat_parameters_token1,
    STATE(562), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(592), 1,
      sym_parameter_name,
    STATE(645), 1,
      sym_wrapped_parameter_pair,
    STATE(881), 1,
      sym_splat_parameters,
  [8999] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1069), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1075), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(1072), 2,
      anon_sym_POUND,
      sym__free_text,
  [9022] = 8,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1065), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(1077), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1079), 1,
      aux_sym_splat_parameters_token1,
    STATE(571), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(584), 1,
      sym_parameter_name,
    STATE(619), 1,
      sym_wrapped_parameter_pair,
    STATE(880), 1,
      sym_splat_parameters,
  [9047] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_LBRACK,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 2,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
    STATE(300), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [9068] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1081), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    STATE(879), 1,
      sym__comment_child,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [9091] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1083), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [9114] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1085), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(938), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [9137] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1087), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(937), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [9160] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1089), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [9183] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(583), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(581), 6,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [9198] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(567), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(565), 6,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [9213] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1091), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [9236] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1093), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(936), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [9259] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(958), 1,
      anon_sym_LPAREN,
    ACTIONS(960), 1,
      anon_sym_LBRACE,
    ACTIONS(962), 1,
      anon_sym_LBRACK,
    ACTIONS(964), 1,
      aux_sym_ruby_inline_token1,
    STATE(834), 1,
      sym_ruby_inline,
    STATE(348), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [9282] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1095), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [9305] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(583), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(581), 6,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [9320] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(567), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(565), 6,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [9335] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1097), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [9358] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1099), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(925), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [9381] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1101), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(924), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [9404] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1103), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [9427] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1105), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    STATE(824), 1,
      sym__comment_child,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [9450] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1107), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(923), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [9473] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1109), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(922), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [9496] = 3,
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
  [9511] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(906), 1,
      anon_sym_LPAREN,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    ACTIONS(1111), 1,
      anon_sym_RBRACK,
    ACTIONS(910), 2,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
    STATE(298), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [9532] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(1111), 1,
      anon_sym_RBRACE,
    ACTIONS(916), 2,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
    STATE(299), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [9553] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_LBRACK,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 2,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
    STATE(300), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [9574] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(906), 1,
      anon_sym_LPAREN,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    ACTIONS(1113), 1,
      anon_sym_RBRACK,
    ACTIONS(910), 2,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
    STATE(298), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [9595] = 8,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1077), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1079), 1,
      aux_sym_splat_parameters_token1,
    ACTIONS(1115), 1,
      aux_sym_wrapped_parameters_token3,
    STATE(536), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(584), 1,
      sym_parameter_name,
    STATE(619), 1,
      sym_wrapped_parameter_pair,
    STATE(817), 1,
      sym_splat_parameters,
  [9620] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(1113), 1,
      anon_sym_RBRACE,
    ACTIONS(916), 2,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
    STATE(299), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [9641] = 8,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1063), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1067), 1,
      aux_sym_splat_parameters_token1,
    ACTIONS(1115), 1,
      aux_sym_wrapped_parameters_token5,
    STATE(516), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(592), 1,
      sym_parameter_name,
    STATE(645), 1,
      sym_wrapped_parameter_pair,
    STATE(816), 1,
      sym_splat_parameters,
  [9666] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1117), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(921), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [9689] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1119), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(920), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [9712] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(958), 1,
      anon_sym_LPAREN,
    ACTIONS(960), 1,
      anon_sym_LBRACE,
    ACTIONS(962), 1,
      anon_sym_LBRACK,
    ACTIONS(964), 1,
      aux_sym_ruby_inline_token1,
    STATE(766), 1,
      sym_ruby_inline,
    STATE(348), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [9735] = 3,
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
  [9750] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(958), 1,
      anon_sym_LPAREN,
    ACTIONS(960), 1,
      anon_sym_LBRACE,
    ACTIONS(962), 1,
      anon_sym_LBRACK,
    ACTIONS(964), 1,
      aux_sym_ruby_inline_token1,
    STATE(762), 1,
      sym_ruby_inline,
    STATE(348), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [9773] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1121), 1,
      aux_sym_ruby_inline_token2,
    ACTIONS(547), 6,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [9788] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_LBRACK,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 2,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
    STATE(300), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [9809] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(906), 1,
      anon_sym_LPAREN,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    ACTIONS(1123), 1,
      anon_sym_RBRACK,
    ACTIONS(910), 2,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
    STATE(298), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [9830] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(517), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(1125), 1,
      anon_sym_LPAREN,
    ACTIONS(1128), 1,
      anon_sym_LBRACE,
    ACTIONS(1131), 1,
      anon_sym_LBRACK,
    ACTIONS(1134), 1,
      aux_sym_ruby_inline_token1,
    STATE(346), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [9853] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(529), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(1055), 1,
      anon_sym_LPAREN,
    ACTIONS(1057), 1,
      anon_sym_LBRACE,
    ACTIONS(1059), 1,
      anon_sym_LBRACK,
    ACTIONS(1061), 1,
      aux_sym_ruby_inline_token1,
    STATE(346), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [9876] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    ACTIONS(958), 1,
      anon_sym_LPAREN,
    ACTIONS(960), 1,
      anon_sym_LBRACE,
    ACTIONS(962), 1,
      anon_sym_LBRACK,
    ACTIONS(964), 1,
      aux_sym_ruby_inline_token1,
    STATE(387), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [9899] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1137), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    STATE(772), 1,
      sym__text_child,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [9922] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_LBRACK,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 2,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
    STATE(300), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [9943] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(1139), 1,
      anon_sym_RBRACE,
    ACTIONS(916), 2,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
    STATE(299), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [9964] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(906), 1,
      anon_sym_LPAREN,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    ACTIONS(1139), 1,
      anon_sym_RBRACK,
    ACTIONS(910), 2,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
    STATE(298), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [9985] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(940), 1,
      aux_sym_child_token1,
    ACTIONS(942), 1,
      aux_sym_wrapped_parameters_token1,
    ACTIONS(944), 1,
      aux_sym_wrapped_parameters_token4,
    ACTIONS(1141), 1,
      anon_sym_COLON,
    STATE(613), 1,
      aux_sym_floating_parameters_repeat1,
    STATE(941), 2,
      sym_wrapped_parameters,
      sym_floating_parameters,
  [10008] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1143), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10031] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1145), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10054] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1147), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10077] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1149), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10100] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1151), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10123] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1153), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10146] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1155), 1,
      anon_sym_COLON,
    ACTIONS(1157), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1163), 1,
      sym__newline,
    STATE(360), 1,
      aux_sym__text,
    STATE(530), 1,
      sym_ruby_interpolation,
    ACTIONS(1160), 2,
      anon_sym_POUND,
      sym__free_text,
  [10169] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1165), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10192] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1167), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10215] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1169), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10238] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1171), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10261] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1173), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10284] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1175), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10307] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1177), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10330] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1179), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10353] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1181), 1,
      sym__dedent,
    STATE(307), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10376] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_LBRACK,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 2,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
    STATE(300), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [10397] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(1183), 1,
      anon_sym_RBRACE,
    ACTIONS(916), 2,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
    STATE(299), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [10418] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(906), 1,
      anon_sym_LPAREN,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    ACTIONS(1183), 1,
      anon_sym_RBRACK,
    ACTIONS(910), 2,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
    STATE(298), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [10439] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(892), 1,
      anon_sym_RBRACE,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(916), 2,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
    STATE(299), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [10460] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(1123), 1,
      anon_sym_RBRACE,
    ACTIONS(916), 2,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
    STATE(299), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [10481] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_LBRACK,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 2,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
    STATE(300), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [10502] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(1185), 1,
      anon_sym_RBRACE,
    ACTIONS(916), 2,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
    STATE(299), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [10523] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(906), 1,
      anon_sym_LPAREN,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    ACTIONS(1185), 1,
      anon_sym_RBRACK,
    ACTIONS(910), 2,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
    STATE(298), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [10544] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_LBRACK,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 2,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
    STATE(300), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [10565] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(517), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(1189), 1,
      anon_sym_LPAREN,
    ACTIONS(1192), 1,
      anon_sym_LBRACE,
    ACTIONS(1195), 1,
      anon_sym_LBRACK,
    ACTIONS(1198), 1,
      aux_sym_ruby_inline_token1,
    STATE(379), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [10588] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1201), 1,
      anon_sym_POUND_LBRACE,
    STATE(380), 1,
      aux_sym__text,
    STATE(554), 1,
      sym_ruby_interpolation,
    ACTIONS(1163), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(1204), 2,
      anon_sym_POUND,
      sym__free_text,
  [10609] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(1187), 1,
      anon_sym_RBRACE,
    ACTIONS(916), 2,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
    STATE(299), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat2,
  [10630] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(529), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
    ACTIONS(1002), 1,
      anon_sym_LBRACE,
    ACTIONS(1004), 1,
      anon_sym_LBRACK,
    ACTIONS(1006), 1,
      aux_sym_ruby_inline_token1,
    STATE(379), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [10653] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1207), 1,
      sym__dedent,
    STATE(267), 1,
      aux_sym__text,
    STATE(304), 1,
      aux_sym__comment_child_repeat1,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10676] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(525), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 1,
      aux_sym_ruby_inline_token1,
    STATE(207), 1,
      sym_ruby_inline,
    STATE(164), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [10699] = 8,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(480), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(859), 1,
      anon_sym_COLON,
    ACTIONS(861), 1,
      aux_sym_child_token1,
    ACTIONS(865), 1,
      aux_sym_text_inline_token2,
    ACTIONS(867), 1,
      sym__newline,
    STATE(240), 1,
      sym_ruby_interpolation,
    STATE(707), 1,
      sym__text_child,
  [10724] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(906), 1,
      anon_sym_LPAREN,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    ACTIONS(1187), 1,
      anon_sym_RBRACK,
    ACTIONS(910), 2,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
    STATE(298), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [10745] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(1209), 1,
      anon_sym_LPAREN,
    ACTIONS(1212), 1,
      anon_sym_LBRACE,
    ACTIONS(1215), 1,
      anon_sym_LBRACK,
    ACTIONS(1218), 1,
      aux_sym_ruby_inline_token1,
    STATE(387), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [10768] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      anon_sym_LBRACK,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 2,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
    STATE(300), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat1,
  [10789] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1221), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    STATE(793), 1,
      sym__comment_child,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10812] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(892), 1,
      anon_sym_RBRACK,
    ACTIONS(906), 1,
      anon_sym_LPAREN,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    ACTIONS(910), 2,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
    STATE(298), 2,
      sym__ruby_fragment,
      aux_sym__ruby_fragment_repeat3,
  [10833] = 7,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(958), 1,
      anon_sym_LPAREN,
    ACTIONS(960), 1,
      anon_sym_LBRACE,
    ACTIONS(962), 1,
      anon_sym_LBRACK,
    ACTIONS(964), 1,
      aux_sym_ruby_inline_token1,
    STATE(864), 1,
      sym_ruby_inline,
    STATE(348), 2,
      sym__ruby_fragment,
      aux_sym_ruby_inline_repeat1,
  [10856] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(551), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(1223), 1,
      aux_sym_ruby_inline_token2,
    ACTIONS(547), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [10872] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(286), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10892] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1225), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10912] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(271), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10932] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1227), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10952] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(272), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10972] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(311), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [10992] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(273), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11012] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1229), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11032] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(314), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11052] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(279), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11072] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1231), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11092] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1233), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11112] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(285), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11132] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1235), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11152] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(287), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11172] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(288), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11192] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(317), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11212] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(295), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11232] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(297), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11252] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1237), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11272] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1239), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11292] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1241), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11312] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1243), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11332] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1245), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11352] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1247), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11372] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1249), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11392] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1251), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11412] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1253), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11432] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1255), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11452] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1257), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11472] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1259), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11492] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(320), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11512] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1261), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11532] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(323), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11552] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1263), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11572] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(326), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11592] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1265), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11612] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1267), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11632] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1269), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11652] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(284), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11672] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1271), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11692] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(354), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11712] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1163), 1,
      sym__newline,
    ACTIONS(1273), 1,
      anon_sym_POUND_LBRACE,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(1276), 2,
      anon_sym_POUND,
      sym__free_text,
  [11732] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(355), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11752] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(282), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11772] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1279), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11792] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(278), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11812] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(581), 6,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [11824] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(356), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11844] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(565), 6,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [11856] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1281), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11876] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(274), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11896] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(261), 1,
      aux_sym__comment_child_repeat1,
    STATE(267), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11916] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(357), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11936] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1283), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11956] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(270), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11976] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(260), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [11996] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1285), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12016] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(265), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12036] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(43), 1,
      anon_sym_EQ,
    STATE(706), 1,
      sym_directive,
    ACTIONS(45), 4,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_EQ_GT,
      anon_sym_EQ_LT,
  [12052] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(266), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12072] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1287), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12092] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(369), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12112] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(368), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12132] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(367), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12152] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(366), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12172] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(365), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12192] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(264), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12212] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(364), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12232] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(503), 6,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [12244] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(363), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12264] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(362), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12284] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(361), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12304] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1289), 1,
      aux_sym_ruby_inline_token2,
    ACTIONS(547), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [12318] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(359), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12338] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(259), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12358] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(263), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12378] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(251), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12398] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(551), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(1291), 1,
      aux_sym_ruby_inline_token2,
    ACTIONS(547), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [12414] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1293), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12434] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(262), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12454] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(253), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12474] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(358), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12494] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(256), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12514] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1295), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12534] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1297), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12554] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1299), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12574] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(267), 1,
      aux_sym__text,
    STATE(383), 1,
      aux_sym__comment_child_repeat1,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12594] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1301), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12614] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1303), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12634] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1305), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12654] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1307), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12674] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(254), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12694] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1309), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12714] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1311), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12734] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1313), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12754] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1315), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12774] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1317), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12794] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(255), 1,
      aux_sym_injector_repeat1,
    STATE(472), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12814] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1319), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12834] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1321), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12854] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1323), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12874] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1325), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12894] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1327), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12914] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1329), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12934] = 6,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1331), 1,
      sym__newline,
    STATE(435), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12954] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(412), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12971] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(421), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [12988] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(431), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13005] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(416), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13022] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(433), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13039] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(394), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13056] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(808), 1,
      anon_sym_POUND_LBRACE,
    STATE(247), 1,
      aux_sym__text,
    STATE(554), 1,
      sym_ruby_interpolation,
    ACTIONS(810), 2,
      anon_sym_POUND,
      sym__free_text,
  [13073] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(438), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13090] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(443), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13107] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(447), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13124] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(450), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13141] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(477), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13158] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(454), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13175] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(478), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13192] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(415), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13209] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(479), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13226] = 6,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1333), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1336), 1,
      aux_sym_wrapped_parameters_token3,
    STATE(515), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(584), 1,
      sym_parameter_name,
    STATE(619), 1,
      sym_wrapped_parameter_pair,
  [13245] = 6,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1063), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1338), 1,
      aux_sym_wrapped_parameters_token5,
    STATE(547), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(592), 1,
      sym_parameter_name,
    STATE(645), 1,
      sym_wrapped_parameter_pair,
  [13264] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(396), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13281] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(400), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13298] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(517), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(503), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13311] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(482), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13328] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(414), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13345] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(808), 1,
      anon_sym_POUND_LBRACE,
    STATE(232), 1,
      aux_sym__text,
    STATE(554), 1,
      sym_ruby_interpolation,
    ACTIONS(810), 2,
      anon_sym_POUND,
      sym__free_text,
  [13362] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(484), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13379] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1053), 1,
      sym__dedent,
    ACTIONS(1342), 1,
      sym__indent,
    ACTIONS(1340), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [13394] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(487), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13411] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(581), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13422] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(565), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [13433] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(517), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(503), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13446] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1346), 1,
      sym__newline,
    ACTIONS(1344), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [13459] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1350), 1,
      sym__newline,
    ACTIONS(1348), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [13472] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(581), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      aux_sym__ruby_fragment_token2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [13483] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(403), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13500] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(581), 5,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [13511] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(481), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13528] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(497), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13545] = 6,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1077), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1338), 1,
      aux_sym_wrapped_parameters_token3,
    STATE(515), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(584), 1,
      sym_parameter_name,
    STATE(619), 1,
      sym_wrapped_parameter_pair,
  [13564] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(404), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13581] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(483), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13598] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(565), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
      anon_sym_RBRACK,
  [13609] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(565), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13620] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1346), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(1344), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [13633] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(493), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13650] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(581), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym__ruby_fragment_token3,
      anon_sym_RBRACK,
  [13661] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(302), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13678] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(430), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13695] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(565), 5,
      anon_sym_LPAREN,
      aux_sym__ruby_fragment_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [13706] = 6,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1336), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(1352), 1,
      aux_sym_tag_name_token1,
    STATE(547), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(592), 1,
      sym_parameter_name,
    STATE(645), 1,
      sym_wrapped_parameter_pair,
  [13725] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(494), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13742] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(406), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13759] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(423), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13776] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(488), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13793] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(420), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13810] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(495), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13827] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1350), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(1348), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [13840] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(496), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13857] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(498), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13874] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(290), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13891] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(567), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(565), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13904] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(422), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13921] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(425), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13938] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(583), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(581), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [13951] = 6,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1063), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1355), 1,
      aux_sym_wrapped_parameters_token5,
    STATE(547), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(592), 1,
      sym_parameter_name,
    STATE(645), 1,
      sym_wrapped_parameter_pair,
  [13970] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(490), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [13987] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(489), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [14004] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(567), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(565), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [14017] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(583), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(581), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [14030] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(389), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [14047] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(417), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [14064] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1346), 1,
      sym__newline,
    ACTIONS(1344), 4,
      anon_sym_COLON,
      aux_sym_child_token1,
      anon_sym_POUND_LBRACE,
      aux_sym_text_inline_token2,
  [14077] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(486), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [14094] = 6,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1077), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1355), 1,
      aux_sym_wrapped_parameters_token3,
    STATE(515), 1,
      aux_sym_wrapped_parameters_repeat1,
    STATE(584), 1,
      sym_parameter_name,
    STATE(619), 1,
      sym_wrapped_parameter_pair,
  [14113] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(419), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [14130] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(418), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [14147] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(427), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [14164] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(503), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_ruby_inline_token1,
  [14175] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(492), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [14192] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(349), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [14209] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(413), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [14226] = 5,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(880), 1,
      anon_sym_POUND_LBRACE,
    STATE(429), 1,
      aux_sym__text,
    STATE(581), 1,
      sym_ruby_interpolation,
    ACTIONS(882), 2,
      anon_sym_POUND,
      sym__free_text,
  [14243] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1357), 4,
      sym__newline,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
  [14253] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1350), 1,
      sym__newline,
    ACTIONS(1348), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [14265] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1346), 4,
      sym__newline,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
  [14275] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(863), 2,
      aux_sym_wrapped_parameters_token5,
      aux_sym_floating_parameter_pair_token1,
    ACTIONS(1359), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14287] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1363), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(1365), 1,
      aux_sym_floating_parameter_pair_token1,
    ACTIONS(1361), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14301] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1369), 1,
      sym__dedent,
    ACTIONS(1367), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [14313] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1371), 4,
      sym__newline,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
  [14323] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1075), 1,
      sym__dedent,
    ACTIONS(1373), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [14335] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1053), 1,
      sym__dedent,
    ACTIONS(1340), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [14347] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1346), 1,
      sym__newline,
    ACTIONS(1344), 3,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND,
      sym__free_text,
  [14359] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1375), 4,
      sym__newline,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
  [14369] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1377), 4,
      sym__newline,
      anon_sym_LT,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
  [14379] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1363), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(1379), 1,
      aux_sym_floating_parameter_pair_token1,
    ACTIONS(1361), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14393] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(863), 2,
      aux_sym_wrapped_parameters_token3,
      aux_sym_floating_parameter_pair_token1,
    ACTIONS(1359), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14405] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1381), 1,
      sym_string_content,
    ACTIONS(1383), 1,
      sym_string_end,
    STATE(610), 1,
      aux_sym_parameter_value_repeat1,
  [14418] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1385), 1,
      aux_sym_tag_name_token1,
    STATE(211), 1,
      sym_floating_parameter_pair,
    STATE(778), 1,
      sym_parameter_name,
  [14431] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1381), 1,
      sym_string_content,
    ACTIONS(1387), 1,
      sym_string_end,
    STATE(610), 1,
      aux_sym_parameter_value_repeat1,
  [14444] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(480), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1389), 1,
      aux_sym_text_inline_token2,
    STATE(234), 1,
      sym_ruby_interpolation,
  [14457] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1393), 1,
      sym__newline,
    STATE(912), 1,
      sym_child,
  [14470] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1395), 1,
      sym__newline,
    STATE(886), 1,
      sym_child,
  [14483] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1397), 1,
      sym__newline,
    STATE(887), 1,
      sym_child,
  [14496] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1399), 1,
      sym__newline,
    STATE(866), 1,
      sym_child,
  [14509] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1401), 1,
      sym_string_content,
    ACTIONS(1403), 1,
      sym_string_end,
    STATE(644), 1,
      aux_sym_parameter_value_repeat1,
  [14522] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1405), 1,
      sym__newline,
    STATE(831), 1,
      sym_child,
  [14535] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1407), 1,
      sym__newline,
    STATE(830), 1,
      sym_child,
  [14548] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(746), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(748), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14559] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1409), 1,
      aux_sym_tag_token1,
    ACTIONS(1411), 1,
      anon_sym_GT,
    ACTIONS(1413), 1,
      aux_sym_html_opening_tag_token1,
  [14572] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1415), 1,
      sym__newline,
    STATE(795), 1,
      sym_child,
  [14585] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1417), 1,
      sym__newline,
    STATE(731), 1,
      sym_child,
  [14598] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1385), 1,
      aux_sym_tag_name_token1,
    STATE(698), 1,
      sym_floating_parameter_pair,
    STATE(819), 1,
      sym_parameter_name,
  [14611] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1419), 1,
      sym_string_content,
    ACTIONS(1422), 1,
      sym_string_end,
    STATE(610), 1,
      aux_sym_parameter_value_repeat1,
  [14624] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1381), 1,
      sym_string_content,
    ACTIONS(1424), 1,
      sym_string_end,
    STATE(610), 1,
      aux_sym_parameter_value_repeat1,
  [14637] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1426), 1,
      sym__newline,
    STATE(892), 1,
      sym_child,
  [14650] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(679), 1,
      anon_sym_COLON,
    ACTIONS(1428), 1,
      aux_sym_child_token1,
    STATE(632), 1,
      aux_sym_floating_parameters_repeat1,
  [14663] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1430), 1,
      sym__newline,
    STATE(896), 1,
      sym_child,
  [14676] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1432), 1,
      sym__newline,
    STATE(780), 1,
      sym_child,
  [14689] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1434), 1,
      sym__newline,
    STATE(898), 1,
      sym_child,
  [14702] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1436), 1,
      sym__newline,
    STATE(900), 1,
      sym_child,
  [14715] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1438), 1,
      sym__newline,
    STATE(800), 1,
      sym_child,
  [14728] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1440), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1442), 1,
      aux_sym_wrapped_parameters_token2,
    ACTIONS(1444), 1,
      aux_sym_wrapped_parameters_token3,
  [14741] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1446), 1,
      sym__newline,
    STATE(914), 1,
      sym_child,
  [14754] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1448), 1,
      sym__newline,
    STATE(796), 1,
      sym_child,
  [14767] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1450), 1,
      sym__newline,
    STATE(779), 1,
      sym_child,
  [14780] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(742), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(744), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14791] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1452), 1,
      sym__newline,
    STATE(777), 1,
      sym_child,
  [14804] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1454), 1,
      sym__newline,
    STATE(776), 1,
      sym_child,
  [14817] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1336), 3,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token3,
      aux_sym_wrapped_parameters_token5,
  [14826] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1456), 1,
      sym_string_content,
    ACTIONS(1458), 1,
      sym_string_end,
    STATE(594), 1,
      aux_sym_parameter_value_repeat1,
  [14839] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1460), 1,
      sym__newline,
    STATE(774), 1,
      sym_child,
  [14852] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1462), 1,
      sym__newline,
    STATE(826), 1,
      sym_child,
  [14865] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1464), 1,
      sym__newline,
    STATE(820), 1,
      sym_child,
  [14878] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(746), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(748), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [14889] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(1466), 1,
      aux_sym_child_token1,
    STATE(632), 1,
      aux_sym_floating_parameters_repeat1,
  [14902] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1469), 1,
      sym__newline,
    STATE(734), 1,
      sym_child,
  [14915] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1471), 1,
      sym__newline,
    STATE(736), 1,
      sym_child,
  [14928] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1473), 1,
      sym__newline,
    STATE(737), 1,
      sym_child,
  [14941] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1475), 1,
      sym__newline,
    STATE(782), 1,
      sym_child,
  [14954] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1477), 1,
      sym__newline,
    STATE(738), 1,
      sym_child,
  [14967] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1479), 1,
      sym__newline,
    STATE(739), 1,
      sym_child,
  [14980] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1481), 1,
      sym__newline,
    STATE(740), 1,
      sym_child,
  [14993] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1485), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(1483), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [15004] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(728), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(730), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [15015] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1487), 1,
      sym__newline,
    STATE(741), 1,
      sym_child,
  [15028] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1391), 1,
      anon_sym_COLON,
    ACTIONS(1489), 1,
      sym__newline,
    STATE(775), 1,
      sym_child,
  [15041] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1381), 1,
      sym_string_content,
    ACTIONS(1491), 1,
      sym_string_end,
    STATE(610), 1,
      aux_sym_parameter_value_repeat1,
  [15054] = 4,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1440), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1442), 1,
      aux_sym_wrapped_parameters_token2,
    ACTIONS(1444), 1,
      aux_sym_wrapped_parameters_token5,
  [15067] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1493), 1,
      sym_string_content,
    ACTIONS(1495), 1,
      sym_string_end,
    STATE(611), 1,
      aux_sym_parameter_value_repeat1,
  [15080] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(728), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(730), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [15091] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1485), 1,
      aux_sym_wrapped_parameters_token3,
    ACTIONS(1483), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [15102] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(742), 1,
      aux_sym_wrapped_parameters_token5,
    ACTIONS(744), 2,
      aux_sym_tag_name_token1,
      aux_sym_wrapped_parameters_token2,
  [15113] = 4,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1497), 1,
      sym_string_content,
    ACTIONS(1499), 1,
      sym_string_end,
    STATE(596), 1,
      aux_sym_parameter_value_repeat1,
  [15126] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(222), 1,
      sym__newline,
  [15136] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(742), 1,
      aux_sym_child_token1,
    ACTIONS(744), 1,
      anon_sym_COLON,
  [15146] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1501), 1,
      aux_sym_child_token1,
    ACTIONS(1503), 1,
      sym__newline,
  [15156] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1505), 1,
      aux_sym_child_token1,
    ACTIONS(1507), 1,
      sym__newline,
  [15166] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1509), 1,
      aux_sym_child_token1,
    ACTIONS(1511), 1,
      sym__newline,
  [15176] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1513), 1,
      aux_sym_child_token1,
    ACTIONS(1515), 1,
      sym__newline,
  [15186] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1517), 1,
      aux_sym_child_token1,
    ACTIONS(1519), 1,
      sym__newline,
  [15196] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1521), 1,
      aux_sym_child_token1,
    ACTIONS(1523), 1,
      sym__newline,
  [15206] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1525), 1,
      aux_sym_child_token1,
    ACTIONS(1527), 1,
      sym__newline,
  [15216] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1529), 1,
      aux_sym_child_token1,
    ACTIONS(1531), 1,
      sym__newline,
  [15226] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1533), 1,
      aux_sym_child_token1,
    ACTIONS(1535), 1,
      sym__newline,
  [15236] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1537), 1,
      aux_sym_child_token1,
    ACTIONS(1539), 1,
      sym__newline,
  [15246] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1541), 1,
      aux_sym_child_token1,
    ACTIONS(1543), 1,
      sym__newline,
  [15256] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1545), 1,
      aux_sym_child_token1,
    ACTIONS(1547), 1,
      sym__newline,
  [15266] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1549), 1,
      aux_sym_child_token1,
    ACTIONS(1551), 1,
      sym__newline,
  [15276] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1553), 1,
      aux_sym_child_token1,
    ACTIONS(1555), 1,
      sym__newline,
  [15286] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1557), 1,
      aux_sym_child_token1,
    ACTIONS(1559), 1,
      sym__newline,
  [15296] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1561), 1,
      aux_sym_child_token1,
    ACTIONS(1563), 1,
      sym__newline,
  [15306] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1565), 1,
      aux_sym_child_token1,
    ACTIONS(1567), 1,
      sym__newline,
  [15316] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1569), 1,
      aux_sym_child_token1,
    ACTIONS(1571), 1,
      sym__newline,
  [15326] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1573), 1,
      aux_sym_child_token1,
    ACTIONS(1575), 1,
      sym__newline,
  [15336] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1577), 1,
      aux_sym_child_token1,
    ACTIONS(1579), 1,
      sym__newline,
  [15346] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1581), 1,
      sym__indent,
    ACTIONS(1583), 1,
      sym__dedent,
  [15356] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1585), 1,
      aux_sym_child_token1,
    ACTIONS(1587), 1,
      sym__newline,
  [15366] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1589), 1,
      aux_sym_child_token1,
    ACTIONS(1591), 1,
      sym__newline,
  [15376] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1593), 1,
      aux_sym_child_token1,
    ACTIONS(1595), 1,
      sym__newline,
  [15386] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1597), 1,
      aux_sym_child_token1,
    ACTIONS(1599), 1,
      sym__newline,
  [15396] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1601), 1,
      aux_sym_child_token1,
    ACTIONS(1603), 1,
      sym__newline,
  [15406] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1605), 1,
      aux_sym_child_token1,
    ACTIONS(1607), 1,
      sym__newline,
  [15416] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1609), 1,
      aux_sym_child_token1,
    ACTIONS(1611), 1,
      sym__newline,
  [15426] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1613), 1,
      aux_sym_child_token1,
    ACTIONS(1615), 1,
      sym__newline,
  [15436] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1617), 1,
      aux_sym_child_token1,
    ACTIONS(1619), 1,
      sym__newline,
  [15446] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1621), 1,
      aux_sym_child_token1,
    ACTIONS(1623), 1,
      sym__newline,
  [15456] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1625), 1,
      aux_sym_child_token1,
    ACTIONS(1627), 1,
      sym__newline,
  [15466] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1629), 1,
      aux_sym_child_token1,
    ACTIONS(1631), 1,
      sym__newline,
  [15476] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1633), 1,
      aux_sym_child_token1,
    ACTIONS(1635), 1,
      sym__newline,
  [15486] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1637), 1,
      aux_sym_child_token1,
    ACTIONS(1639), 1,
      sym__newline,
  [15496] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1641), 1,
      aux_sym_child_token1,
    ACTIONS(1643), 1,
      sym__newline,
  [15506] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1645), 1,
      aux_sym_child_token1,
    ACTIONS(1647), 1,
      sym__newline,
  [15516] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1649), 1,
      aux_sym_child_token1,
    ACTIONS(1651), 1,
      sym__newline,
  [15526] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1653), 1,
      aux_sym_child_token1,
    ACTIONS(1655), 1,
      sym__newline,
  [15536] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1657), 1,
      aux_sym_child_token1,
    ACTIONS(1659), 1,
      sym__newline,
  [15546] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1661), 1,
      aux_sym_child_token1,
    ACTIONS(1663), 1,
      sym__newline,
  [15556] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1665), 1,
      aux_sym_child_token1,
    ACTIONS(1667), 1,
      sym__newline,
  [15566] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1669), 1,
      aux_sym_child_token1,
    ACTIONS(1671), 1,
      sym__newline,
  [15576] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1673), 2,
      sym__newline,
      anon_sym_COLON,
  [15584] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1675), 1,
      aux_sym_tag_token1,
    ACTIONS(1677), 1,
      anon_sym_GT,
  [15594] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(670), 1,
      aux_sym_child_token1,
    ACTIONS(672), 1,
      anon_sym_COLON,
  [15604] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1679), 1,
      aux_sym_child_token1,
    ACTIONS(1681), 1,
      sym__newline,
  [15614] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1683), 1,
      aux_sym_child_token1,
    ACTIONS(1685), 1,
      sym__newline,
  [15624] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1687), 1,
      aux_sym_child_token1,
    ACTIONS(1689), 1,
      sym__newline,
  [15634] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1691), 1,
      aux_sym_child_token1,
    ACTIONS(1693), 1,
      sym__newline,
  [15644] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1695), 1,
      aux_sym_child_token1,
    ACTIONS(1697), 1,
      sym__newline,
  [15654] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1699), 1,
      aux_sym_tag_name_token1,
    ACTIONS(1701), 1,
      anon_sym_SLASH,
  [15664] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1703), 1,
      aux_sym_child_token1,
    ACTIONS(1705), 1,
      sym__newline,
  [15674] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1707), 2,
      sym__newline,
      anon_sym_COLON,
  [15682] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1709), 2,
      sym__newline,
      anon_sym_COLON,
  [15690] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(244), 1,
      sym__newline,
  [15700] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(728), 1,
      aux_sym_child_token1,
    ACTIONS(730), 1,
      anon_sym_COLON,
  [15710] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1711), 2,
      sym__newline,
      anon_sym_COLON,
  [15718] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(736), 2,
      aux_sym_wrapped_parameters_token3,
      aux_sym_wrapped_parameters_token5,
  [15726] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1713), 2,
      sym__newline,
      anon_sym_COLON,
  [15734] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(218), 1,
      sym__newline,
  [15744] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(218), 1,
      sym__newline,
  [15754] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1715), 2,
      sym__newline,
      anon_sym_COLON,
  [15762] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(218), 1,
      sym__newline,
  [15772] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(222), 1,
      sym__newline,
  [15782] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(222), 1,
      sym__newline,
  [15792] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(746), 1,
      aux_sym_child_token1,
    ACTIONS(748), 1,
      anon_sym_COLON,
  [15802] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1717), 2,
      sym__newline,
      anon_sym_COLON,
  [15810] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(234), 1,
      sym__newline,
  [15820] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(222), 1,
      sym__newline,
  [15830] = 3,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(780), 1,
      aux_sym_child_token1,
    ACTIONS(782), 1,
      anon_sym_COLON,
  [15840] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1719), 2,
      sym__newline,
      anon_sym_COLON,
  [15848] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(210), 1,
      sym__newline,
  [15858] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1581), 1,
      sym__indent,
    ACTIONS(1721), 1,
      sym__dedent,
  [15868] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(210), 1,
      sym__newline,
  [15878] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(196), 1,
      sym__indent,
    ACTIONS(214), 1,
      sym__newline,
  [15888] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(192), 1,
      sym__newline,
    ACTIONS(196), 1,
      sym__indent,
  [15898] = 3,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(192), 1,
      sym__newline,
    ACTIONS(196), 1,
      sym__indent,
  [15908] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1723), 1,
      sym__newline,
  [15915] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1725), 1,
      sym__newline,
  [15922] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(258), 1,
      sym__newline,
  [15929] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1727), 1,
      sym__newline,
  [15936] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1729), 1,
      sym__newline,
  [15943] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1731), 1,
      sym__newline,
  [15950] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1733), 1,
      sym__newline,
  [15957] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1735), 1,
      sym__newline,
  [15964] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1737), 1,
      sym__newline,
  [15971] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1739), 1,
      sym__newline,
  [15978] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1741), 1,
      sym__newline,
  [15985] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(258), 1,
      sym__newline,
  [15992] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(254), 1,
      sym__newline,
  [15999] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(254), 1,
      sym__newline,
  [16006] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1403), 1,
      aux_sym_parameter_value_token1,
  [16013] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(254), 1,
      sym__newline,
  [16020] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(370), 1,
      sym__newline,
  [16027] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(254), 1,
      sym__newline,
  [16034] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(374), 1,
      sym__newline,
  [16041] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(378), 1,
      sym__newline,
  [16048] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(382), 1,
      sym__newline,
  [16055] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(386), 1,
      sym__newline,
  [16062] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(390), 1,
      sym__newline,
  [16069] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(394), 1,
      sym__newline,
  [16076] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(366), 1,
      sym__newline,
  [16083] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(266), 1,
      sym__newline,
  [16090] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(398), 1,
      sym__newline,
  [16097] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(262), 1,
      sym__newline,
  [16104] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(402), 1,
      sym__newline,
  [16111] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(402), 1,
      sym__newline,
  [16118] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(218), 1,
      sym__newline,
  [16125] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1743), 1,
      anon_sym_RBRACE,
  [16132] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(222), 1,
      sym__newline,
  [16139] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(222), 1,
      sym__newline,
  [16146] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1458), 1,
      aux_sym_parameter_value_token1,
  [16153] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1745), 1,
      anon_sym_RBRACE,
  [16160] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(210), 1,
      sym__newline,
  [16167] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1715), 1,
      sym__dedent,
  [16174] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1747), 1,
      sym__newline,
  [16181] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1721), 1,
      sym__dedent,
  [16188] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1369), 1,
      sym__newline,
  [16195] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1749), 1,
      sym__newline,
  [16202] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1499), 1,
      aux_sym_parameter_value_token1,
  [16209] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1751), 1,
      sym__newline,
  [16216] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1753), 1,
      sym__newline,
  [16223] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1755), 1,
      sym__newline,
  [16230] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1757), 1,
      sym__newline,
  [16237] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1759), 1,
      aux_sym_floating_parameter_pair_token1,
  [16244] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1761), 1,
      sym__newline,
  [16251] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1763), 1,
      sym__newline,
  [16258] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1765), 1,
      sym__newline,
  [16265] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1767), 1,
      sym__newline,
  [16272] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(274), 1,
      sym__newline,
  [16279] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(202), 1,
      sym__indent,
  [16286] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1769), 1,
      sym__newline,
  [16293] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1771), 1,
      sym__indent,
  [16300] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1773), 1,
      sym__indent,
  [16307] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1775), 1,
      sym__indent,
  [16314] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1777), 1,
      sym__indent,
  [16321] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1779), 1,
      sym__indent,
  [16328] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1781), 1,
      sym__indent,
  [16335] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(611), 1,
      anon_sym_COLON,
  [16342] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1783), 1,
      sym__newline,
  [16349] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1785), 1,
      anon_sym_GT,
  [16356] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1787), 1,
      sym__newline,
  [16363] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1789), 1,
      sym__newline,
  [16370] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1791), 1,
      sym__newline,
  [16377] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1793), 1,
      sym__newline,
  [16384] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1795), 1,
      sym__newline,
  [16391] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1797), 1,
      sym__newline,
  [16398] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(278), 1,
      sym__newline,
  [16405] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1799), 1,
      sym__indent,
  [16412] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1801), 1,
      sym__indent,
  [16419] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1803), 1,
      sym__indent,
  [16426] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(282), 1,
      sym__newline,
  [16433] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1805), 1,
      sym__indent,
  [16440] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(286), 1,
      sym__newline,
  [16447] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1807), 1,
      sym__indent,
  [16454] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(290), 1,
      sym__newline,
  [16461] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1809), 1,
      sym__indent,
  [16468] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(294), 1,
      sym__newline,
  [16475] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1811), 1,
      sym__indent,
  [16482] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(298), 1,
      sym__newline,
  [16489] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1813), 1,
      sym__indent,
  [16496] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(302), 1,
      sym__newline,
  [16503] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1338), 1,
      aux_sym_wrapped_parameters_token5,
  [16510] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1338), 1,
      aux_sym_wrapped_parameters_token3,
  [16517] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(621), 1,
      anon_sym_COLON,
  [16524] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1815), 1,
      aux_sym_floating_parameter_pair_token1,
  [16531] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1817), 1,
      sym__newline,
  [16538] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(863), 1,
      aux_sym_floating_parameter_pair_token1,
  [16545] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1819), 1,
      sym__indent,
  [16552] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1821), 1,
      sym__indent,
  [16559] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1823), 1,
      sym__newline,
  [16566] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1825), 1,
      anon_sym_GT,
  [16573] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1827), 1,
      sym__newline,
  [16580] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1677), 1,
      anon_sym_GT,
  [16587] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(306), 1,
      sym__newline,
  [16594] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1829), 1,
      sym__newline,
  [16601] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1831), 1,
      sym__newline,
  [16608] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1833), 1,
      sym__newline,
  [16615] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1835), 1,
      aux_sym_child_token1,
  [16622] = 2,
    ACTIONS(418), 1,
      anon_sym_NULL,
    ACTIONS(1837), 1,
      aux_sym__ruby_multiline_token1,
  [16629] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1839), 1,
      anon_sym_RBRACE,
  [16636] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(310), 1,
      sym__newline,
  [16643] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(258), 1,
      sym__newline,
  [16650] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(314), 1,
      sym__newline,
  [16657] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1841), 1,
      anon_sym_COLON,
  [16664] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(318), 1,
      sym__newline,
  [16671] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1843), 1,
      anon_sym_COLON,
  [16678] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(322), 1,
      sym__newline,
  [16685] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1845), 1,
      anon_sym_COLON,
  [16692] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1847), 1,
      sym__newline,
  [16699] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1849), 1,
      anon_sym_COLON,
  [16706] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(326), 1,
      sym__newline,
  [16713] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(330), 1,
      sym__newline,
  [16720] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1719), 1,
      sym__dedent,
  [16727] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1851), 1,
      sym__newline,
  [16734] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(338), 1,
      sym__newline,
  [16741] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(342), 1,
      sym__newline,
  [16748] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(346), 1,
      sym__newline,
  [16755] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(354), 1,
      sym__newline,
  [16762] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(358), 1,
      sym__newline,
  [16769] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(350), 1,
      sym__newline,
  [16776] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1853), 1,
      aux_sym_tag_name_token1,
  [16783] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1855), 1,
      sym__indent,
  [16790] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1857), 1,
      sym__indent,
  [16797] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1859), 1,
      anon_sym_RBRACE,
  [16804] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1861), 1,
      sym__indent,
  [16811] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1863), 1,
      sym__newline,
  [16818] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1865), 1,
      sym__indent,
  [16825] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(334), 1,
      sym__newline,
  [16832] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1867), 1,
      sym__indent,
  [16839] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1869), 1,
      anon_sym_RBRACE,
  [16846] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1871), 1,
      sym__indent,
  [16853] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1873), 1,
      sym__newline,
  [16860] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1875), 1,
      sym__indent,
  [16867] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1583), 1,
      sym__dedent,
  [16874] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1877), 1,
      sym__indent,
  [16881] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1879), 1,
      sym__indent,
  [16888] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1881), 1,
      sym__indent,
  [16895] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1883), 1,
      sym__indent,
  [16902] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1885), 1,
      sym__indent,
  [16909] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1887), 1,
      sym__indent,
  [16916] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1889), 1,
      sym__indent,
  [16923] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1891), 1,
      sym__indent,
  [16930] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1893), 1,
      sym__indent,
  [16937] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1895), 1,
      sym__newline,
  [16944] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1897), 1,
      sym__newline,
  [16951] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1355), 1,
      aux_sym_wrapped_parameters_token3,
  [16958] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1355), 1,
      aux_sym_wrapped_parameters_token5,
  [16965] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1899), 1,
      sym__newline,
  [16972] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1901), 1,
      sym__newline,
  [16979] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1903), 1,
      sym__newline,
  [16986] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1905), 1,
      sym__newline,
  [16993] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1907), 1,
      sym__newline,
  [17000] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1909), 1,
      sym__newline,
  [17007] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1911), 1,
      sym__indent,
  [17014] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1913), 1,
      sym__indent,
  [17021] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1915), 1,
      sym__newline,
  [17028] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1917), 1,
      sym__indent,
  [17035] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1919), 1,
      sym__newline,
  [17042] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1921), 1,
      sym__indent,
  [17049] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1923), 1,
      sym__newline,
  [17056] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1925), 1,
      sym__indent,
  [17063] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1927), 1,
      sym__newline,
  [17070] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1929), 1,
      sym__indent,
  [17077] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1931), 1,
      sym__newline,
  [17084] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1933), 1,
      sym__indent,
  [17091] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1935), 1,
      sym__newline,
  [17098] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1937), 1,
      sym__indent,
  [17105] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1939), 1,
      sym__indent,
  [17112] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1941), 1,
      sym__indent,
  [17119] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1943), 1,
      sym__indent,
  [17126] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1945), 1,
      sym__indent,
  [17133] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1947), 1,
      sym__indent,
  [17140] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1949), 1,
      sym__indent,
  [17147] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1951), 1,
      sym__indent,
  [17154] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1953), 1,
      sym__indent,
  [17161] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1955), 1,
      anon_sym_COLON,
  [17168] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1957), 1,
      anon_sym_COLON,
  [17175] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1959), 1,
      sym__newline,
  [17182] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1961), 1,
      anon_sym_COLON,
  [17189] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1963), 1,
      sym__newline,
  [17196] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1495), 1,
      aux_sym_parameter_value_token1,
  [17203] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1965), 1,
      aux_sym_tag_name_token1,
  [17210] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1967), 1,
      anon_sym_COLON,
  [17217] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1969), 1,
      anon_sym_COLON,
  [17224] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1971), 1,
      anon_sym_COLON,
  [17231] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1973), 1,
      anon_sym_COLON,
  [17238] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1975), 1,
      anon_sym_COLON,
  [17245] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1977), 1,
      anon_sym_COLON,
  [17252] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1979), 1,
      anon_sym_COLON,
  [17259] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1981), 1,
      anon_sym_COLON,
  [17266] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1983), 1,
      anon_sym_COLON,
  [17273] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1985), 1,
      anon_sym_COLON,
  [17280] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1987), 1,
      ts_builtin_sym_end,
  [17287] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1989), 1,
      anon_sym_COLON,
  [17294] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1991), 1,
      anon_sym_COLON,
  [17301] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1993), 1,
      anon_sym_COLON,
  [17308] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1995), 1,
      anon_sym_COLON,
  [17315] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1997), 1,
      aux_sym_tag_name_token1,
  [17322] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(1999), 1,
      anon_sym_COLON,
  [17329] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2001), 1,
      anon_sym_COLON,
  [17336] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2003), 1,
      anon_sym_COLON,
  [17343] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2005), 1,
      anon_sym_COLON,
  [17350] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2007), 1,
      anon_sym_COLON,
  [17357] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2009), 1,
      anon_sym_COLON,
  [17364] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2011), 1,
      anon_sym_COLON,
  [17371] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2013), 1,
      anon_sym_COLON,
  [17378] = 2,
    ACTIONS(3), 1,
      anon_sym_NULL,
    ACTIONS(2015), 1,
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
  [SMALL_STATE(157)] = 5396,
  [SMALL_STATE(158)] = 5427,
  [SMALL_STATE(159)] = 5458,
  [SMALL_STATE(160)] = 5500,
  [SMALL_STATE(161)] = 5542,
  [SMALL_STATE(162)] = 5576,
  [SMALL_STATE(163)] = 5618,
  [SMALL_STATE(164)] = 5651,
  [SMALL_STATE(165)] = 5684,
  [SMALL_STATE(166)] = 5706,
  [SMALL_STATE(167)] = 5728,
  [SMALL_STATE(168)] = 5750,
  [SMALL_STATE(169)] = 5772,
  [SMALL_STATE(170)] = 5796,
  [SMALL_STATE(171)] = 5823,
  [SMALL_STATE(172)] = 5850,
  [SMALL_STATE(173)] = 5885,
  [SMALL_STATE(174)] = 5906,
  [SMALL_STATE(175)] = 5941,
  [SMALL_STATE(176)] = 5976,
  [SMALL_STATE(177)] = 6011,
  [SMALL_STATE(178)] = 6032,
  [SMALL_STATE(179)] = 6067,
  [SMALL_STATE(180)] = 6102,
  [SMALL_STATE(181)] = 6129,
  [SMALL_STATE(182)] = 6150,
  [SMALL_STATE(183)] = 6182,
  [SMALL_STATE(184)] = 6205,
  [SMALL_STATE(185)] = 6228,
  [SMALL_STATE(186)] = 6247,
  [SMALL_STATE(187)] = 6270,
  [SMALL_STATE(188)] = 6293,
  [SMALL_STATE(189)] = 6316,
  [SMALL_STATE(190)] = 6335,
  [SMALL_STATE(191)] = 6368,
  [SMALL_STATE(192)] = 6401,
  [SMALL_STATE(193)] = 6424,
  [SMALL_STATE(194)] = 6456,
  [SMALL_STATE(195)] = 6478,
  [SMALL_STATE(196)] = 6500,
  [SMALL_STATE(197)] = 6532,
  [SMALL_STATE(198)] = 6564,
  [SMALL_STATE(199)] = 6586,
  [SMALL_STATE(200)] = 6608,
  [SMALL_STATE(201)] = 6630,
  [SMALL_STATE(202)] = 6654,
  [SMALL_STATE(203)] = 6686,
  [SMALL_STATE(204)] = 6707,
  [SMALL_STATE(205)] = 6728,
  [SMALL_STATE(206)] = 6745,
  [SMALL_STATE(207)] = 6766,
  [SMALL_STATE(208)] = 6783,
  [SMALL_STATE(209)] = 6804,
  [SMALL_STATE(210)] = 6821,
  [SMALL_STATE(211)] = 6838,
  [SMALL_STATE(212)] = 6855,
  [SMALL_STATE(213)] = 6876,
  [SMALL_STATE(214)] = 6893,
  [SMALL_STATE(215)] = 6910,
  [SMALL_STATE(216)] = 6927,
  [SMALL_STATE(217)] = 6954,
  [SMALL_STATE(218)] = 6975,
  [SMALL_STATE(219)] = 7002,
  [SMALL_STATE(220)] = 7019,
  [SMALL_STATE(221)] = 7040,
  [SMALL_STATE(222)] = 7061,
  [SMALL_STATE(223)] = 7082,
  [SMALL_STATE(224)] = 7109,
  [SMALL_STATE(225)] = 7126,
  [SMALL_STATE(226)] = 7147,
  [SMALL_STATE(227)] = 7174,
  [SMALL_STATE(228)] = 7195,
  [SMALL_STATE(229)] = 7222,
  [SMALL_STATE(230)] = 7243,
  [SMALL_STATE(231)] = 7264,
  [SMALL_STATE(232)] = 7285,
  [SMALL_STATE(233)] = 7311,
  [SMALL_STATE(234)] = 7337,
  [SMALL_STATE(235)] = 7363,
  [SMALL_STATE(236)] = 7383,
  [SMALL_STATE(237)] = 7409,
  [SMALL_STATE(238)] = 7427,
  [SMALL_STATE(239)] = 7447,
  [SMALL_STATE(240)] = 7473,
  [SMALL_STATE(241)] = 7499,
  [SMALL_STATE(242)] = 7517,
  [SMALL_STATE(243)] = 7541,
  [SMALL_STATE(244)] = 7569,
  [SMALL_STATE(245)] = 7593,
  [SMALL_STATE(246)] = 7611,
  [SMALL_STATE(247)] = 7637,
  [SMALL_STATE(248)] = 7663,
  [SMALL_STATE(249)] = 7685,
  [SMALL_STATE(250)] = 7711,
  [SMALL_STATE(251)] = 7733,
  [SMALL_STATE(252)] = 7756,
  [SMALL_STATE(253)] = 7777,
  [SMALL_STATE(254)] = 7800,
  [SMALL_STATE(255)] = 7823,
  [SMALL_STATE(256)] = 7846,
  [SMALL_STATE(257)] = 7869,
  [SMALL_STATE(258)] = 7890,
  [SMALL_STATE(259)] = 7911,
  [SMALL_STATE(260)] = 7934,
  [SMALL_STATE(261)] = 7957,
  [SMALL_STATE(262)] = 7980,
  [SMALL_STATE(263)] = 8003,
  [SMALL_STATE(264)] = 8026,
  [SMALL_STATE(265)] = 8049,
  [SMALL_STATE(266)] = 8072,
  [SMALL_STATE(267)] = 8095,
  [SMALL_STATE(268)] = 8118,
  [SMALL_STATE(269)] = 8141,
  [SMALL_STATE(270)] = 8164,
  [SMALL_STATE(271)] = 8187,
  [SMALL_STATE(272)] = 8210,
  [SMALL_STATE(273)] = 8233,
  [SMALL_STATE(274)] = 8256,
  [SMALL_STATE(275)] = 8279,
  [SMALL_STATE(276)] = 8302,
  [SMALL_STATE(277)] = 8325,
  [SMALL_STATE(278)] = 8348,
  [SMALL_STATE(279)] = 8371,
  [SMALL_STATE(280)] = 8394,
  [SMALL_STATE(281)] = 8415,
  [SMALL_STATE(282)] = 8436,
  [SMALL_STATE(283)] = 8459,
  [SMALL_STATE(284)] = 8480,
  [SMALL_STATE(285)] = 8503,
  [SMALL_STATE(286)] = 8526,
  [SMALL_STATE(287)] = 8549,
  [SMALL_STATE(288)] = 8572,
  [SMALL_STATE(289)] = 8595,
  [SMALL_STATE(290)] = 8616,
  [SMALL_STATE(291)] = 8639,
  [SMALL_STATE(292)] = 8660,
  [SMALL_STATE(293)] = 8683,
  [SMALL_STATE(294)] = 8706,
  [SMALL_STATE(295)] = 8729,
  [SMALL_STATE(296)] = 8752,
  [SMALL_STATE(297)] = 8775,
  [SMALL_STATE(298)] = 8798,
  [SMALL_STATE(299)] = 8819,
  [SMALL_STATE(300)] = 8840,
  [SMALL_STATE(301)] = 8861,
  [SMALL_STATE(302)] = 8884,
  [SMALL_STATE(303)] = 8907,
  [SMALL_STATE(304)] = 8928,
  [SMALL_STATE(305)] = 8951,
  [SMALL_STATE(306)] = 8974,
  [SMALL_STATE(307)] = 8999,
  [SMALL_STATE(308)] = 9022,
  [SMALL_STATE(309)] = 9047,
  [SMALL_STATE(310)] = 9068,
  [SMALL_STATE(311)] = 9091,
  [SMALL_STATE(312)] = 9114,
  [SMALL_STATE(313)] = 9137,
  [SMALL_STATE(314)] = 9160,
  [SMALL_STATE(315)] = 9183,
  [SMALL_STATE(316)] = 9198,
  [SMALL_STATE(317)] = 9213,
  [SMALL_STATE(318)] = 9236,
  [SMALL_STATE(319)] = 9259,
  [SMALL_STATE(320)] = 9282,
  [SMALL_STATE(321)] = 9305,
  [SMALL_STATE(322)] = 9320,
  [SMALL_STATE(323)] = 9335,
  [SMALL_STATE(324)] = 9358,
  [SMALL_STATE(325)] = 9381,
  [SMALL_STATE(326)] = 9404,
  [SMALL_STATE(327)] = 9427,
  [SMALL_STATE(328)] = 9450,
  [SMALL_STATE(329)] = 9473,
  [SMALL_STATE(330)] = 9496,
  [SMALL_STATE(331)] = 9511,
  [SMALL_STATE(332)] = 9532,
  [SMALL_STATE(333)] = 9553,
  [SMALL_STATE(334)] = 9574,
  [SMALL_STATE(335)] = 9595,
  [SMALL_STATE(336)] = 9620,
  [SMALL_STATE(337)] = 9641,
  [SMALL_STATE(338)] = 9666,
  [SMALL_STATE(339)] = 9689,
  [SMALL_STATE(340)] = 9712,
  [SMALL_STATE(341)] = 9735,
  [SMALL_STATE(342)] = 9750,
  [SMALL_STATE(343)] = 9773,
  [SMALL_STATE(344)] = 9788,
  [SMALL_STATE(345)] = 9809,
  [SMALL_STATE(346)] = 9830,
  [SMALL_STATE(347)] = 9853,
  [SMALL_STATE(348)] = 9876,
  [SMALL_STATE(349)] = 9899,
  [SMALL_STATE(350)] = 9922,
  [SMALL_STATE(351)] = 9943,
  [SMALL_STATE(352)] = 9964,
  [SMALL_STATE(353)] = 9985,
  [SMALL_STATE(354)] = 10008,
  [SMALL_STATE(355)] = 10031,
  [SMALL_STATE(356)] = 10054,
  [SMALL_STATE(357)] = 10077,
  [SMALL_STATE(358)] = 10100,
  [SMALL_STATE(359)] = 10123,
  [SMALL_STATE(360)] = 10146,
  [SMALL_STATE(361)] = 10169,
  [SMALL_STATE(362)] = 10192,
  [SMALL_STATE(363)] = 10215,
  [SMALL_STATE(364)] = 10238,
  [SMALL_STATE(365)] = 10261,
  [SMALL_STATE(366)] = 10284,
  [SMALL_STATE(367)] = 10307,
  [SMALL_STATE(368)] = 10330,
  [SMALL_STATE(369)] = 10353,
  [SMALL_STATE(370)] = 10376,
  [SMALL_STATE(371)] = 10397,
  [SMALL_STATE(372)] = 10418,
  [SMALL_STATE(373)] = 10439,
  [SMALL_STATE(374)] = 10460,
  [SMALL_STATE(375)] = 10481,
  [SMALL_STATE(376)] = 10502,
  [SMALL_STATE(377)] = 10523,
  [SMALL_STATE(378)] = 10544,
  [SMALL_STATE(379)] = 10565,
  [SMALL_STATE(380)] = 10588,
  [SMALL_STATE(381)] = 10609,
  [SMALL_STATE(382)] = 10630,
  [SMALL_STATE(383)] = 10653,
  [SMALL_STATE(384)] = 10676,
  [SMALL_STATE(385)] = 10699,
  [SMALL_STATE(386)] = 10724,
  [SMALL_STATE(387)] = 10745,
  [SMALL_STATE(388)] = 10768,
  [SMALL_STATE(389)] = 10789,
  [SMALL_STATE(390)] = 10812,
  [SMALL_STATE(391)] = 10833,
  [SMALL_STATE(392)] = 10856,
  [SMALL_STATE(393)] = 10872,
  [SMALL_STATE(394)] = 10892,
  [SMALL_STATE(395)] = 10912,
  [SMALL_STATE(396)] = 10932,
  [SMALL_STATE(397)] = 10952,
  [SMALL_STATE(398)] = 10972,
  [SMALL_STATE(399)] = 10992,
  [SMALL_STATE(400)] = 11012,
  [SMALL_STATE(401)] = 11032,
  [SMALL_STATE(402)] = 11052,
  [SMALL_STATE(403)] = 11072,
  [SMALL_STATE(404)] = 11092,
  [SMALL_STATE(405)] = 11112,
  [SMALL_STATE(406)] = 11132,
  [SMALL_STATE(407)] = 11152,
  [SMALL_STATE(408)] = 11172,
  [SMALL_STATE(409)] = 11192,
  [SMALL_STATE(410)] = 11212,
  [SMALL_STATE(411)] = 11232,
  [SMALL_STATE(412)] = 11252,
  [SMALL_STATE(413)] = 11272,
  [SMALL_STATE(414)] = 11292,
  [SMALL_STATE(415)] = 11312,
  [SMALL_STATE(416)] = 11332,
  [SMALL_STATE(417)] = 11352,
  [SMALL_STATE(418)] = 11372,
  [SMALL_STATE(419)] = 11392,
  [SMALL_STATE(420)] = 11412,
  [SMALL_STATE(421)] = 11432,
  [SMALL_STATE(422)] = 11452,
  [SMALL_STATE(423)] = 11472,
  [SMALL_STATE(424)] = 11492,
  [SMALL_STATE(425)] = 11512,
  [SMALL_STATE(426)] = 11532,
  [SMALL_STATE(427)] = 11552,
  [SMALL_STATE(428)] = 11572,
  [SMALL_STATE(429)] = 11592,
  [SMALL_STATE(430)] = 11612,
  [SMALL_STATE(431)] = 11632,
  [SMALL_STATE(432)] = 11652,
  [SMALL_STATE(433)] = 11672,
  [SMALL_STATE(434)] = 11692,
  [SMALL_STATE(435)] = 11712,
  [SMALL_STATE(436)] = 11732,
  [SMALL_STATE(437)] = 11752,
  [SMALL_STATE(438)] = 11772,
  [SMALL_STATE(439)] = 11792,
  [SMALL_STATE(440)] = 11812,
  [SMALL_STATE(441)] = 11824,
  [SMALL_STATE(442)] = 11844,
  [SMALL_STATE(443)] = 11856,
  [SMALL_STATE(444)] = 11876,
  [SMALL_STATE(445)] = 11896,
  [SMALL_STATE(446)] = 11916,
  [SMALL_STATE(447)] = 11936,
  [SMALL_STATE(448)] = 11956,
  [SMALL_STATE(449)] = 11976,
  [SMALL_STATE(450)] = 11996,
  [SMALL_STATE(451)] = 12016,
  [SMALL_STATE(452)] = 12036,
  [SMALL_STATE(453)] = 12052,
  [SMALL_STATE(454)] = 12072,
  [SMALL_STATE(455)] = 12092,
  [SMALL_STATE(456)] = 12112,
  [SMALL_STATE(457)] = 12132,
  [SMALL_STATE(458)] = 12152,
  [SMALL_STATE(459)] = 12172,
  [SMALL_STATE(460)] = 12192,
  [SMALL_STATE(461)] = 12212,
  [SMALL_STATE(462)] = 12232,
  [SMALL_STATE(463)] = 12244,
  [SMALL_STATE(464)] = 12264,
  [SMALL_STATE(465)] = 12284,
  [SMALL_STATE(466)] = 12304,
  [SMALL_STATE(467)] = 12318,
  [SMALL_STATE(468)] = 12338,
  [SMALL_STATE(469)] = 12358,
  [SMALL_STATE(470)] = 12378,
  [SMALL_STATE(471)] = 12398,
  [SMALL_STATE(472)] = 12414,
  [SMALL_STATE(473)] = 12434,
  [SMALL_STATE(474)] = 12454,
  [SMALL_STATE(475)] = 12474,
  [SMALL_STATE(476)] = 12494,
  [SMALL_STATE(477)] = 12514,
  [SMALL_STATE(478)] = 12534,
  [SMALL_STATE(479)] = 12554,
  [SMALL_STATE(480)] = 12574,
  [SMALL_STATE(481)] = 12594,
  [SMALL_STATE(482)] = 12614,
  [SMALL_STATE(483)] = 12634,
  [SMALL_STATE(484)] = 12654,
  [SMALL_STATE(485)] = 12674,
  [SMALL_STATE(486)] = 12694,
  [SMALL_STATE(487)] = 12714,
  [SMALL_STATE(488)] = 12734,
  [SMALL_STATE(489)] = 12754,
  [SMALL_STATE(490)] = 12774,
  [SMALL_STATE(491)] = 12794,
  [SMALL_STATE(492)] = 12814,
  [SMALL_STATE(493)] = 12834,
  [SMALL_STATE(494)] = 12854,
  [SMALL_STATE(495)] = 12874,
  [SMALL_STATE(496)] = 12894,
  [SMALL_STATE(497)] = 12914,
  [SMALL_STATE(498)] = 12934,
  [SMALL_STATE(499)] = 12954,
  [SMALL_STATE(500)] = 12971,
  [SMALL_STATE(501)] = 12988,
  [SMALL_STATE(502)] = 13005,
  [SMALL_STATE(503)] = 13022,
  [SMALL_STATE(504)] = 13039,
  [SMALL_STATE(505)] = 13056,
  [SMALL_STATE(506)] = 13073,
  [SMALL_STATE(507)] = 13090,
  [SMALL_STATE(508)] = 13107,
  [SMALL_STATE(509)] = 13124,
  [SMALL_STATE(510)] = 13141,
  [SMALL_STATE(511)] = 13158,
  [SMALL_STATE(512)] = 13175,
  [SMALL_STATE(513)] = 13192,
  [SMALL_STATE(514)] = 13209,
  [SMALL_STATE(515)] = 13226,
  [SMALL_STATE(516)] = 13245,
  [SMALL_STATE(517)] = 13264,
  [SMALL_STATE(518)] = 13281,
  [SMALL_STATE(519)] = 13298,
  [SMALL_STATE(520)] = 13311,
  [SMALL_STATE(521)] = 13328,
  [SMALL_STATE(522)] = 13345,
  [SMALL_STATE(523)] = 13362,
  [SMALL_STATE(524)] = 13379,
  [SMALL_STATE(525)] = 13394,
  [SMALL_STATE(526)] = 13411,
  [SMALL_STATE(527)] = 13422,
  [SMALL_STATE(528)] = 13433,
  [SMALL_STATE(529)] = 13446,
  [SMALL_STATE(530)] = 13459,
  [SMALL_STATE(531)] = 13472,
  [SMALL_STATE(532)] = 13483,
  [SMALL_STATE(533)] = 13500,
  [SMALL_STATE(534)] = 13511,
  [SMALL_STATE(535)] = 13528,
  [SMALL_STATE(536)] = 13545,
  [SMALL_STATE(537)] = 13564,
  [SMALL_STATE(538)] = 13581,
  [SMALL_STATE(539)] = 13598,
  [SMALL_STATE(540)] = 13609,
  [SMALL_STATE(541)] = 13620,
  [SMALL_STATE(542)] = 13633,
  [SMALL_STATE(543)] = 13650,
  [SMALL_STATE(544)] = 13661,
  [SMALL_STATE(545)] = 13678,
  [SMALL_STATE(546)] = 13695,
  [SMALL_STATE(547)] = 13706,
  [SMALL_STATE(548)] = 13725,
  [SMALL_STATE(549)] = 13742,
  [SMALL_STATE(550)] = 13759,
  [SMALL_STATE(551)] = 13776,
  [SMALL_STATE(552)] = 13793,
  [SMALL_STATE(553)] = 13810,
  [SMALL_STATE(554)] = 13827,
  [SMALL_STATE(555)] = 13840,
  [SMALL_STATE(556)] = 13857,
  [SMALL_STATE(557)] = 13874,
  [SMALL_STATE(558)] = 13891,
  [SMALL_STATE(559)] = 13904,
  [SMALL_STATE(560)] = 13921,
  [SMALL_STATE(561)] = 13938,
  [SMALL_STATE(562)] = 13951,
  [SMALL_STATE(563)] = 13970,
  [SMALL_STATE(564)] = 13987,
  [SMALL_STATE(565)] = 14004,
  [SMALL_STATE(566)] = 14017,
  [SMALL_STATE(567)] = 14030,
  [SMALL_STATE(568)] = 14047,
  [SMALL_STATE(569)] = 14064,
  [SMALL_STATE(570)] = 14077,
  [SMALL_STATE(571)] = 14094,
  [SMALL_STATE(572)] = 14113,
  [SMALL_STATE(573)] = 14130,
  [SMALL_STATE(574)] = 14147,
  [SMALL_STATE(575)] = 14164,
  [SMALL_STATE(576)] = 14175,
  [SMALL_STATE(577)] = 14192,
  [SMALL_STATE(578)] = 14209,
  [SMALL_STATE(579)] = 14226,
  [SMALL_STATE(580)] = 14243,
  [SMALL_STATE(581)] = 14253,
  [SMALL_STATE(582)] = 14265,
  [SMALL_STATE(583)] = 14275,
  [SMALL_STATE(584)] = 14287,
  [SMALL_STATE(585)] = 14301,
  [SMALL_STATE(586)] = 14313,
  [SMALL_STATE(587)] = 14323,
  [SMALL_STATE(588)] = 14335,
  [SMALL_STATE(589)] = 14347,
  [SMALL_STATE(590)] = 14359,
  [SMALL_STATE(591)] = 14369,
  [SMALL_STATE(592)] = 14379,
  [SMALL_STATE(593)] = 14393,
  [SMALL_STATE(594)] = 14405,
  [SMALL_STATE(595)] = 14418,
  [SMALL_STATE(596)] = 14431,
  [SMALL_STATE(597)] = 14444,
  [SMALL_STATE(598)] = 14457,
  [SMALL_STATE(599)] = 14470,
  [SMALL_STATE(600)] = 14483,
  [SMALL_STATE(601)] = 14496,
  [SMALL_STATE(602)] = 14509,
  [SMALL_STATE(603)] = 14522,
  [SMALL_STATE(604)] = 14535,
  [SMALL_STATE(605)] = 14548,
  [SMALL_STATE(606)] = 14559,
  [SMALL_STATE(607)] = 14572,
  [SMALL_STATE(608)] = 14585,
  [SMALL_STATE(609)] = 14598,
  [SMALL_STATE(610)] = 14611,
  [SMALL_STATE(611)] = 14624,
  [SMALL_STATE(612)] = 14637,
  [SMALL_STATE(613)] = 14650,
  [SMALL_STATE(614)] = 14663,
  [SMALL_STATE(615)] = 14676,
  [SMALL_STATE(616)] = 14689,
  [SMALL_STATE(617)] = 14702,
  [SMALL_STATE(618)] = 14715,
  [SMALL_STATE(619)] = 14728,
  [SMALL_STATE(620)] = 14741,
  [SMALL_STATE(621)] = 14754,
  [SMALL_STATE(622)] = 14767,
  [SMALL_STATE(623)] = 14780,
  [SMALL_STATE(624)] = 14791,
  [SMALL_STATE(625)] = 14804,
  [SMALL_STATE(626)] = 14817,
  [SMALL_STATE(627)] = 14826,
  [SMALL_STATE(628)] = 14839,
  [SMALL_STATE(629)] = 14852,
  [SMALL_STATE(630)] = 14865,
  [SMALL_STATE(631)] = 14878,
  [SMALL_STATE(632)] = 14889,
  [SMALL_STATE(633)] = 14902,
  [SMALL_STATE(634)] = 14915,
  [SMALL_STATE(635)] = 14928,
  [SMALL_STATE(636)] = 14941,
  [SMALL_STATE(637)] = 14954,
  [SMALL_STATE(638)] = 14967,
  [SMALL_STATE(639)] = 14980,
  [SMALL_STATE(640)] = 14993,
  [SMALL_STATE(641)] = 15004,
  [SMALL_STATE(642)] = 15015,
  [SMALL_STATE(643)] = 15028,
  [SMALL_STATE(644)] = 15041,
  [SMALL_STATE(645)] = 15054,
  [SMALL_STATE(646)] = 15067,
  [SMALL_STATE(647)] = 15080,
  [SMALL_STATE(648)] = 15091,
  [SMALL_STATE(649)] = 15102,
  [SMALL_STATE(650)] = 15113,
  [SMALL_STATE(651)] = 15126,
  [SMALL_STATE(652)] = 15136,
  [SMALL_STATE(653)] = 15146,
  [SMALL_STATE(654)] = 15156,
  [SMALL_STATE(655)] = 15166,
  [SMALL_STATE(656)] = 15176,
  [SMALL_STATE(657)] = 15186,
  [SMALL_STATE(658)] = 15196,
  [SMALL_STATE(659)] = 15206,
  [SMALL_STATE(660)] = 15216,
  [SMALL_STATE(661)] = 15226,
  [SMALL_STATE(662)] = 15236,
  [SMALL_STATE(663)] = 15246,
  [SMALL_STATE(664)] = 15256,
  [SMALL_STATE(665)] = 15266,
  [SMALL_STATE(666)] = 15276,
  [SMALL_STATE(667)] = 15286,
  [SMALL_STATE(668)] = 15296,
  [SMALL_STATE(669)] = 15306,
  [SMALL_STATE(670)] = 15316,
  [SMALL_STATE(671)] = 15326,
  [SMALL_STATE(672)] = 15336,
  [SMALL_STATE(673)] = 15346,
  [SMALL_STATE(674)] = 15356,
  [SMALL_STATE(675)] = 15366,
  [SMALL_STATE(676)] = 15376,
  [SMALL_STATE(677)] = 15386,
  [SMALL_STATE(678)] = 15396,
  [SMALL_STATE(679)] = 15406,
  [SMALL_STATE(680)] = 15416,
  [SMALL_STATE(681)] = 15426,
  [SMALL_STATE(682)] = 15436,
  [SMALL_STATE(683)] = 15446,
  [SMALL_STATE(684)] = 15456,
  [SMALL_STATE(685)] = 15466,
  [SMALL_STATE(686)] = 15476,
  [SMALL_STATE(687)] = 15486,
  [SMALL_STATE(688)] = 15496,
  [SMALL_STATE(689)] = 15506,
  [SMALL_STATE(690)] = 15516,
  [SMALL_STATE(691)] = 15526,
  [SMALL_STATE(692)] = 15536,
  [SMALL_STATE(693)] = 15546,
  [SMALL_STATE(694)] = 15556,
  [SMALL_STATE(695)] = 15566,
  [SMALL_STATE(696)] = 15576,
  [SMALL_STATE(697)] = 15584,
  [SMALL_STATE(698)] = 15594,
  [SMALL_STATE(699)] = 15604,
  [SMALL_STATE(700)] = 15614,
  [SMALL_STATE(701)] = 15624,
  [SMALL_STATE(702)] = 15634,
  [SMALL_STATE(703)] = 15644,
  [SMALL_STATE(704)] = 15654,
  [SMALL_STATE(705)] = 15664,
  [SMALL_STATE(706)] = 15674,
  [SMALL_STATE(707)] = 15682,
  [SMALL_STATE(708)] = 15690,
  [SMALL_STATE(709)] = 15700,
  [SMALL_STATE(710)] = 15710,
  [SMALL_STATE(711)] = 15718,
  [SMALL_STATE(712)] = 15726,
  [SMALL_STATE(713)] = 15734,
  [SMALL_STATE(714)] = 15744,
  [SMALL_STATE(715)] = 15754,
  [SMALL_STATE(716)] = 15762,
  [SMALL_STATE(717)] = 15772,
  [SMALL_STATE(718)] = 15782,
  [SMALL_STATE(719)] = 15792,
  [SMALL_STATE(720)] = 15802,
  [SMALL_STATE(721)] = 15810,
  [SMALL_STATE(722)] = 15820,
  [SMALL_STATE(723)] = 15830,
  [SMALL_STATE(724)] = 15840,
  [SMALL_STATE(725)] = 15848,
  [SMALL_STATE(726)] = 15858,
  [SMALL_STATE(727)] = 15868,
  [SMALL_STATE(728)] = 15878,
  [SMALL_STATE(729)] = 15888,
  [SMALL_STATE(730)] = 15898,
  [SMALL_STATE(731)] = 15908,
  [SMALL_STATE(732)] = 15915,
  [SMALL_STATE(733)] = 15922,
  [SMALL_STATE(734)] = 15929,
  [SMALL_STATE(735)] = 15936,
  [SMALL_STATE(736)] = 15943,
  [SMALL_STATE(737)] = 15950,
  [SMALL_STATE(738)] = 15957,
  [SMALL_STATE(739)] = 15964,
  [SMALL_STATE(740)] = 15971,
  [SMALL_STATE(741)] = 15978,
  [SMALL_STATE(742)] = 15985,
  [SMALL_STATE(743)] = 15992,
  [SMALL_STATE(744)] = 15999,
  [SMALL_STATE(745)] = 16006,
  [SMALL_STATE(746)] = 16013,
  [SMALL_STATE(747)] = 16020,
  [SMALL_STATE(748)] = 16027,
  [SMALL_STATE(749)] = 16034,
  [SMALL_STATE(750)] = 16041,
  [SMALL_STATE(751)] = 16048,
  [SMALL_STATE(752)] = 16055,
  [SMALL_STATE(753)] = 16062,
  [SMALL_STATE(754)] = 16069,
  [SMALL_STATE(755)] = 16076,
  [SMALL_STATE(756)] = 16083,
  [SMALL_STATE(757)] = 16090,
  [SMALL_STATE(758)] = 16097,
  [SMALL_STATE(759)] = 16104,
  [SMALL_STATE(760)] = 16111,
  [SMALL_STATE(761)] = 16118,
  [SMALL_STATE(762)] = 16125,
  [SMALL_STATE(763)] = 16132,
  [SMALL_STATE(764)] = 16139,
  [SMALL_STATE(765)] = 16146,
  [SMALL_STATE(766)] = 16153,
  [SMALL_STATE(767)] = 16160,
  [SMALL_STATE(768)] = 16167,
  [SMALL_STATE(769)] = 16174,
  [SMALL_STATE(770)] = 16181,
  [SMALL_STATE(771)] = 16188,
  [SMALL_STATE(772)] = 16195,
  [SMALL_STATE(773)] = 16202,
  [SMALL_STATE(774)] = 16209,
  [SMALL_STATE(775)] = 16216,
  [SMALL_STATE(776)] = 16223,
  [SMALL_STATE(777)] = 16230,
  [SMALL_STATE(778)] = 16237,
  [SMALL_STATE(779)] = 16244,
  [SMALL_STATE(780)] = 16251,
  [SMALL_STATE(781)] = 16258,
  [SMALL_STATE(782)] = 16265,
  [SMALL_STATE(783)] = 16272,
  [SMALL_STATE(784)] = 16279,
  [SMALL_STATE(785)] = 16286,
  [SMALL_STATE(786)] = 16293,
  [SMALL_STATE(787)] = 16300,
  [SMALL_STATE(788)] = 16307,
  [SMALL_STATE(789)] = 16314,
  [SMALL_STATE(790)] = 16321,
  [SMALL_STATE(791)] = 16328,
  [SMALL_STATE(792)] = 16335,
  [SMALL_STATE(793)] = 16342,
  [SMALL_STATE(794)] = 16349,
  [SMALL_STATE(795)] = 16356,
  [SMALL_STATE(796)] = 16363,
  [SMALL_STATE(797)] = 16370,
  [SMALL_STATE(798)] = 16377,
  [SMALL_STATE(799)] = 16384,
  [SMALL_STATE(800)] = 16391,
  [SMALL_STATE(801)] = 16398,
  [SMALL_STATE(802)] = 16405,
  [SMALL_STATE(803)] = 16412,
  [SMALL_STATE(804)] = 16419,
  [SMALL_STATE(805)] = 16426,
  [SMALL_STATE(806)] = 16433,
  [SMALL_STATE(807)] = 16440,
  [SMALL_STATE(808)] = 16447,
  [SMALL_STATE(809)] = 16454,
  [SMALL_STATE(810)] = 16461,
  [SMALL_STATE(811)] = 16468,
  [SMALL_STATE(812)] = 16475,
  [SMALL_STATE(813)] = 16482,
  [SMALL_STATE(814)] = 16489,
  [SMALL_STATE(815)] = 16496,
  [SMALL_STATE(816)] = 16503,
  [SMALL_STATE(817)] = 16510,
  [SMALL_STATE(818)] = 16517,
  [SMALL_STATE(819)] = 16524,
  [SMALL_STATE(820)] = 16531,
  [SMALL_STATE(821)] = 16538,
  [SMALL_STATE(822)] = 16545,
  [SMALL_STATE(823)] = 16552,
  [SMALL_STATE(824)] = 16559,
  [SMALL_STATE(825)] = 16566,
  [SMALL_STATE(826)] = 16573,
  [SMALL_STATE(827)] = 16580,
  [SMALL_STATE(828)] = 16587,
  [SMALL_STATE(829)] = 16594,
  [SMALL_STATE(830)] = 16601,
  [SMALL_STATE(831)] = 16608,
  [SMALL_STATE(832)] = 16615,
  [SMALL_STATE(833)] = 16622,
  [SMALL_STATE(834)] = 16629,
  [SMALL_STATE(835)] = 16636,
  [SMALL_STATE(836)] = 16643,
  [SMALL_STATE(837)] = 16650,
  [SMALL_STATE(838)] = 16657,
  [SMALL_STATE(839)] = 16664,
  [SMALL_STATE(840)] = 16671,
  [SMALL_STATE(841)] = 16678,
  [SMALL_STATE(842)] = 16685,
  [SMALL_STATE(843)] = 16692,
  [SMALL_STATE(844)] = 16699,
  [SMALL_STATE(845)] = 16706,
  [SMALL_STATE(846)] = 16713,
  [SMALL_STATE(847)] = 16720,
  [SMALL_STATE(848)] = 16727,
  [SMALL_STATE(849)] = 16734,
  [SMALL_STATE(850)] = 16741,
  [SMALL_STATE(851)] = 16748,
  [SMALL_STATE(852)] = 16755,
  [SMALL_STATE(853)] = 16762,
  [SMALL_STATE(854)] = 16769,
  [SMALL_STATE(855)] = 16776,
  [SMALL_STATE(856)] = 16783,
  [SMALL_STATE(857)] = 16790,
  [SMALL_STATE(858)] = 16797,
  [SMALL_STATE(859)] = 16804,
  [SMALL_STATE(860)] = 16811,
  [SMALL_STATE(861)] = 16818,
  [SMALL_STATE(862)] = 16825,
  [SMALL_STATE(863)] = 16832,
  [SMALL_STATE(864)] = 16839,
  [SMALL_STATE(865)] = 16846,
  [SMALL_STATE(866)] = 16853,
  [SMALL_STATE(867)] = 16860,
  [SMALL_STATE(868)] = 16867,
  [SMALL_STATE(869)] = 16874,
  [SMALL_STATE(870)] = 16881,
  [SMALL_STATE(871)] = 16888,
  [SMALL_STATE(872)] = 16895,
  [SMALL_STATE(873)] = 16902,
  [SMALL_STATE(874)] = 16909,
  [SMALL_STATE(875)] = 16916,
  [SMALL_STATE(876)] = 16923,
  [SMALL_STATE(877)] = 16930,
  [SMALL_STATE(878)] = 16937,
  [SMALL_STATE(879)] = 16944,
  [SMALL_STATE(880)] = 16951,
  [SMALL_STATE(881)] = 16958,
  [SMALL_STATE(882)] = 16965,
  [SMALL_STATE(883)] = 16972,
  [SMALL_STATE(884)] = 16979,
  [SMALL_STATE(885)] = 16986,
  [SMALL_STATE(886)] = 16993,
  [SMALL_STATE(887)] = 17000,
  [SMALL_STATE(888)] = 17007,
  [SMALL_STATE(889)] = 17014,
  [SMALL_STATE(890)] = 17021,
  [SMALL_STATE(891)] = 17028,
  [SMALL_STATE(892)] = 17035,
  [SMALL_STATE(893)] = 17042,
  [SMALL_STATE(894)] = 17049,
  [SMALL_STATE(895)] = 17056,
  [SMALL_STATE(896)] = 17063,
  [SMALL_STATE(897)] = 17070,
  [SMALL_STATE(898)] = 17077,
  [SMALL_STATE(899)] = 17084,
  [SMALL_STATE(900)] = 17091,
  [SMALL_STATE(901)] = 17098,
  [SMALL_STATE(902)] = 17105,
  [SMALL_STATE(903)] = 17112,
  [SMALL_STATE(904)] = 17119,
  [SMALL_STATE(905)] = 17126,
  [SMALL_STATE(906)] = 17133,
  [SMALL_STATE(907)] = 17140,
  [SMALL_STATE(908)] = 17147,
  [SMALL_STATE(909)] = 17154,
  [SMALL_STATE(910)] = 17161,
  [SMALL_STATE(911)] = 17168,
  [SMALL_STATE(912)] = 17175,
  [SMALL_STATE(913)] = 17182,
  [SMALL_STATE(914)] = 17189,
  [SMALL_STATE(915)] = 17196,
  [SMALL_STATE(916)] = 17203,
  [SMALL_STATE(917)] = 17210,
  [SMALL_STATE(918)] = 17217,
  [SMALL_STATE(919)] = 17224,
  [SMALL_STATE(920)] = 17231,
  [SMALL_STATE(921)] = 17238,
  [SMALL_STATE(922)] = 17245,
  [SMALL_STATE(923)] = 17252,
  [SMALL_STATE(924)] = 17259,
  [SMALL_STATE(925)] = 17266,
  [SMALL_STATE(926)] = 17273,
  [SMALL_STATE(927)] = 17280,
  [SMALL_STATE(928)] = 17287,
  [SMALL_STATE(929)] = 17294,
  [SMALL_STATE(930)] = 17301,
  [SMALL_STATE(931)] = 17308,
  [SMALL_STATE(932)] = 17315,
  [SMALL_STATE(933)] = 17322,
  [SMALL_STATE(934)] = 17329,
  [SMALL_STATE(935)] = 17336,
  [SMALL_STATE(936)] = 17343,
  [SMALL_STATE(937)] = 17350,
  [SMALL_STATE(938)] = 17357,
  [SMALL_STATE(939)] = 17364,
  [SMALL_STATE(940)] = 17371,
  [SMALL_STATE(941)] = 17378,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(931),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(930),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(929),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(704),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(932),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(931),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(930),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(929),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(928),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(577),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(910),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(917),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(918),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(919),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(855),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(910),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(329),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(917),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(918),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(919),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(544),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 10),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 10),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 5),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 11),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 11),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, 0, 11),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, 0, 11),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, 0, 10),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, 0, 10),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, 0, 13),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, 0, 13),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_tags, 2, 0, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_tags, 2, 0, 4),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, 0, 5),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, 0, 5),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_block, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5, 0, 10),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5, 0, 10),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5, 0, 11),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5, 0, 11),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 14),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 14),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 18),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 18),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_tags, 3, 0, 8),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_tags, 3, 0, 8),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 26),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 26),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 27),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 27),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 28),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 28),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 29),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 29),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 30),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 30),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 31),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 31),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 32),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 32),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 33),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 33),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 34),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 34),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 35),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 35),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 36),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 36),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 37),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 37),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 38),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 38),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 39),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 39),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 40),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 40),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 6, 0, 41),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 6, 0, 41),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 7, 0, 42),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 7, 0, 42),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 7, 0, 43),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 7, 0, 43),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 7, 0, 44),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 7, 0, 44),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 7, 0, 47),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 7, 0, 47),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 7, 0, 45),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 7, 0, 45),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 7, 0, 46),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 7, 0, 46),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 19),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 19),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5, 0, 13),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5, 0, 13),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 25),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 25),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 24),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 24),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 23),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 23),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 22),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 22),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 21),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 21),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 20),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 20),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injector, 5, 0, 15),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injector, 5, 0, 15),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, 0, 5),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, 0, 5),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_block, 4, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html, 3, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html, 3, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 3, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_block, 3, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(832),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(926),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(933),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(934),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(935),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_name, 1, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 1, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ruby_fragment, 1, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ruby_fragment, 1, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 6), SHIFT_REPEAT(155),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 6), SHIFT_REPEAT(168),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 6), SHIFT_REPEAT(167),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 6),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 6),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruby_inline, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_inline, 1, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 1, 0, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 1, 0, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_name, 2, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 2, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 1, 0, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 1, 0, 2),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 1, 0, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 1, 0, 1),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 1, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruby_inline_repeat1, 1, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ruby_fragment, 2, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ruby_fragment, 2, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ruby_fragment, 3, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ruby_fragment, 3, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wrapped_parameters, 3, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_parameters, 3, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wrapped_parameters, 2, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_parameters, 2, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ruby_multiline, 2, 0, 0),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_multiline, 2, 0, 0), SHIFT_REPEAT(180),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_multiline, 2, 0, 0), SHIFT_REPEAT(170),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_multiline, 2, 0, 0), SHIFT_REPEAT(171),
  [634] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_multiline, 2, 0, 0), SHIFT_REPEAT(833),
  [637] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_multiline, 2, 0, 0), SHIFT_REPEAT(219),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ruby_multiline, 2, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 4),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 4),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(915),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_floating_parameters_repeat1, 2, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_floating_parameters_repeat1, 2, 0, 0),
  [674] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_floating_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(595),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_parameters, 1, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_parameters, 1, 0, 0),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_floating_parameters, 1, 0, 0), SHIFT(595),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 1, 0, 17),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_value, 1, 0, 17),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat_parameters, 2, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat_parameters, 2, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 2, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_value, 2, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 3, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_value, 3, 0, 0),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [756] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [759] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [765] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ruby_multiline, 1, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ruby_multiline, 1, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_parameter_pair, 3, 0, 16),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_parameter_pair, 3, 0, 16),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [788] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [791] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [794] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 4, 0, 0),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_text_inline, 4, 0, 0), SHIFT(784),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_line, 1, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 5, 0, 0),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_text_inline, 5, 0, 0), SHIFT(784),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__html_line_repeat1, 2, 0, 0), SHIFT_REPEAT(704),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__html_line_repeat1, 2, 0, 0),
  [837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__html_line_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 3, 0, 0),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_text_inline, 3, 0, 0), SHIFT(784),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [847] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [850] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [853] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [856] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_inline, 2, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_name, 1, 0, 0),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [867] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0), SHIFT(784),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1010] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat3, 2, 0, 0), SHIFT_REPEAT(203),
  [1013] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat3, 2, 0, 0), SHIFT_REPEAT(212),
  [1016] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat3, 2, 0, 0), SHIFT_REPEAT(298),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat3, 2, 0, 0),
  [1021] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat2, 2, 0, 0), SHIFT_REPEAT(217),
  [1024] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat2, 2, 0, 0), SHIFT_REPEAT(299),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat2, 2, 0, 0),
  [1029] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat2, 2, 0, 0), SHIFT_REPEAT(225),
  [1032] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [1035] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat1, 2, 0, 0),
  [1037] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [1040] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ruby_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1047] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_child_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [1050] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_child_repeat1, 2, 0, 0), SHIFT_REPEAT(581),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_child_repeat1, 2, 0, 0),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1069] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_injector_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [1072] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_injector_repeat1, 2, 0, 0), SHIFT_REPEAT(581),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_injector_repeat1, 2, 0, 0),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(682),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [1128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [1131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [1134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0),
  [1157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(342),
  [1160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(530),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text, 2, 0, 0),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [1192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [1195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [1198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(392),
  [1201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(340),
  [1204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(554),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [1212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [1215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [1218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ruby_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(466),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(275),
  [1276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(581),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wrapped_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(593),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_wrapped_parameters_repeat1, 2, 0, 0),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_child_repeat1, 2, 0, 0),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruby_interpolation, 3, 0, 9),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_interpolation, 3, 0, 9),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text, 1, 0, 0),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text, 1, 0, 0),
  [1352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wrapped_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(583),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_opening_tag, 3, 0, 7),
  [1359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_name, 1, 0, 0),
  [1361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wrapped_parameter_pair, 1, 0, 3),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_parameter_pair, 1, 0, 3),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_child, 4, 0, 0),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_child, 4, 0, 0),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_opening_tag, 5, 0, 7),
  [1373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_injector_repeat1, 2, 0, 0),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_opening_tag, 4, 0, 7),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_closing_tag, 4, 0, 12),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [1413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_value_repeat1, 2, 0, 0), SHIFT_REPEAT(610),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_value_repeat1, 2, 0, 0),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_wrapped_parameters_repeat1, 1, 0, 0),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_wrapped_parameters_repeat1, 1, 0, 0),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_floating_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(609),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wrapped_parameter_pair, 3, 0, 16),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrapped_parameter_pair, 3, 0, 16),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_inline, 1, 0, 0),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_inline, 2, 0, 0),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 3, 0, 0),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 4, 0, 0),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 6, 0, 0),
  [1715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_child, 5, 0, 0),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 5, 0, 0),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_child, 4, 0, 0),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 4, 0, 0),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 3, 0, 0),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1987] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
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

static const bool ts_external_scanner_states[19][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token__newline] = true,
    [ts_external_token_RPAREN] = true,
  },
  [7] = {
    [ts_external_token__newline] = true,
    [ts_external_token_RBRACE] = true,
  },
  [8] = {
    [ts_external_token__newline] = true,
    [ts_external_token_RBRACK] = true,
  },
  [9] = {
    [ts_external_token_RPAREN] = true,
  },
  [10] = {
    [ts_external_token_RBRACK] = true,
  },
  [11] = {
    [ts_external_token_RBRACE] = true,
  },
  [12] = {
    [ts_external_token_string_start] = true,
  },
  [13] = {
    [ts_external_token_RBRACK] = true,
    [ts_external_token_RPAREN] = true,
  },
  [14] = {
    [ts_external_token_RPAREN] = true,
    [ts_external_token_RBRACE] = true,
  },
  [15] = {
    [ts_external_token_RBRACK] = true,
    [ts_external_token_RBRACE] = true,
  },
  [16] = {
    [ts_external_token__newline] = true,
    [ts_external_token__dedent] = true,
  },
  [17] = {
    [ts_external_token_string_content] = true,
    [ts_external_token_string_end] = true,
  },
  [18] = {
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
