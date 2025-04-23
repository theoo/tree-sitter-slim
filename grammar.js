const IDENTIFIER_REGEX = /[a-zA-Z0-9_-]+/
const SPACES = /[ \t\f]+/
const CARRIAGE_RETURN = /\r?\n/

module.exports = grammar({
  name: 'slim',

  externals: $ => [
    $._newline,
    $._indent,
    $._dedent,
    $.string_start,
    $.string_content,
    $.string_end,
    // TODO: rewrite scanner to support interpolation in string content
    // $.interpolation_start,
    // $.interpolation_content,
    // $.interpolation_end,
    $._comment,

    // Allow the external scanner to check for the validity of closing brackets
    // so that it can avoid returning dedent tokens between brackets.
    ']',
    ')',
    '}',
    $._except
  ],

  extras: () => [
    // $.comment has an ambiguous ending preventing its usage here
    // EOF
    '\0',
    // Carriage return, which isn't the same as $._newline from the external scanner
    CARRIAGE_RETURN,
    // Empty lines
    /\n[\S]+/,
    line_continuation()
  ],

  conflicts: $ => [
    [$.text_inline],
    [$.floating_parameters]
  ],

  rules: {
    source_file: $ => repeat($._node),

    _node: $ => choice(
      $.tag,
      $.splat_tags,
      $._html,
      $.injector,
      $.directive_block,
      $.text_block,
      $.comment,
      '\0' // End Of File
    ),

    // Ref: https://github.com/slim-template/slim?tab=readme-ov-file#html-tags
    //      https://github.com/slim-template/slim?tab=readme-ov-file#inline-tags
    tag: $ => seq(
      repeat1(
        choice(
          field('name', $.tag_name),
          field('class', $.tag_class),
          field('id', $.tag_id)
        )
      ),
      optional(
        choice(
          // Wrapped parameters with a following directive or text...
          seq(
            field(
              'parameters',
              $.wrapped_parameters
            ),
            optional(
              choice(
                $.directive_inline,
                alias($._text, $.text_inline)
              )
            )
          ),
          // Floating parameters
          seq(
            choice(
              field(
                'parameters',
                $.floating_parameters
              ),
              field(
                'splat_parameters',
                $.splat_parameters
              )
            ),
            optional(
              choice(
                $.text_inline,
                $.directive_inline,
                alias(floating_char('/'), $.inline_tag_close)
              )
            )
          ),
          // Direct directive
          $.directive_inline,
          // Just some text
          $.text_inline
        )
      ),
      optional($.child),
      $._newline
    ),
    // Calling token prevents an infinite loop on classes and IDs.
    // Ref: https://github.com/slim-template/slim?tab=readme-ov-file#trailing-and-leading-whitespace--
    tag_name: () => seq(
      token(IDENTIFIER_REGEX),
      optional(
        choice(
          '<',
          '>',
          '<>'
        )
      )
    ),
    tag_class: () => token(seq('.', IDENTIFIER_REGEX)),
    tag_id: () => token(seq('#', IDENTIFIER_REGEX)),

    // Ref: https://github.com/slim-template/slim?tab=readme-ov-file#splat-attributes-
    splat_tags: $ => prec.left(
      1,
      seq(
        '*',
        field(
          'injection',
          alias(
            IDENTIFIER_REGEX,
            $.ruby_inline
          )
        ),
        optional(
          alias(
            $._free_text,
            $.text_inline
          )
        )
      )
    ),

    child: $ => choice(
      seq(
        $._newline,
        $._indent,
        repeat1($._node),
        $._dedent
      ),
      seq(
        seq(':', SPACES),
        choice(
          $.tag,
          $.injector
        )
      )
    ),

    // Ref: https://github.com/slim-template/slim?tab=readme-ov-file#inline-html-
    _html: $ => seq(
      choice(
        $.html_opening_tag,
        $.html_closing_tag,
        $._html_line
      ),
      optional($.child),
      $._newline
    ),
    html_opening_tag: $ => seq(
      '<',
      field('name', alias(IDENTIFIER_REGEX, $.tag_name)),
      optional(/[^>/]+/),
      optional(
        alias(
          floating_char('/'),
          $.inline_tag_close
        )
      ),
      '>'
    ),
    html_closing_tag: $ => seq(
      '<',
      '/',
      field('name', alias(IDENTIFIER_REGEX, $.tag_name)),
      '>'
    ),
    _html_line: $ => prec.right(
      1,
      repeat1(
        prec(
          1,
          choice(
            $.html_opening_tag,
            $.html_closing_tag,
            $.ruby_interpolation
          )
        )
      )
    ),

    // Ref: https://github.com/slim-template/slim?tab=readme-ov-file#embedded-engines-markdown-
    injector: $ => build_injectors($, {
      ruby: false,
      javascript: true,
      css: true,
      sass: true,
      scss: true,
      less: true,
      coffee: true,
      markdown: false,
      textile: false,
      rdoc: false
    }),

    // Ref: https://github.com/slim-template/slim?tab=readme-ov-file#attributes
    wrapped_parameters: $ => choice(
      wrapped_parameters($, '(', ')'),
      wrapped_parameters($, '[', ']'),
    ),
    floating_parameters: $ =>
      repeat1(
        seq(
          SPACES,
          $.floating_parameter_pair
        )
      ),

    // Ref: https://github.com/slim-template/slim?tab=readme-ov-file#quoted-attributes
    // Ref: https://github.com/slim-template/slim?tab=readme-ov-file#boolean-attributes
    floating_parameter_pair: $ => prec.left(
      1,
      seq(
        field('name', $.parameter_name),
        alias(
          floating_char(
            choice('=', '==')
          ),
          $.delimiter
        ),
        field('value', $.parameter_value)
      )
    ),
    wrapped_parameter_pair: $ => prec.left(
      1,
      seq(
        field('name', $.parameter_name),
        optional(
          seq(
            alias(
              floating_char(
                choice('=', '==')
              ),
              $.delimiter
            ),
            field('value', $.parameter_value)
          )
        )
      )
    ),
    parameter_name: () => IDENTIFIER_REGEX,
    parameter_value: $ => choice(
      // ruby
      field('injection',
        $.ruby_inline
      ),
      // string
      seq(
        $.string_start,
        repeat($.string_content),
        $.string_end
      ),
      // list of "symbols"
      seq(
        ':',
        /[a-zA-Z0-9:,]+/
      )
    ),
    splat_parameters: $ => seq(
      / ?\*/, // optional(SPACES) not working here for unknown reasons
      $.ruby_inline
    ),

    // "optional" cannot be set at the function level because empty strings are prohibited
    _ruby_fragment: $ => choice(
      // Parentheses
      brackets_pair($, '(', /[^()\r\n]+/, ')'),
      // Braces
      brackets_pair($, '{', /[^{}\r\n]+/, '}'),
      // Square brackets
      brackets_pair($, '[', /[^\[\]\r\n]+/, ']')
    ),
    _ruby_multiline: $ => repeat1(
      choice(
        // Scan all chars excluded in the regex that is not a comma followed by a new-line
        // Regex: Anything that is not a bracket, a back-slash, a comma or a new-line
        seq(optional(','), /[^(){}\[\]\\,\r\n]+/),
        $._ruby_fragment,
        // anti-slash followed by a new-line
        line_continuation(),
        // // comma followed by a new-line
        line_continuation(',')
      )
    ),
    ruby_inline: $ => repeat1(
      choice(
        // Inline ruby cannot contain spaces or new-line, obviously
        // Regex: Anything that is not a space, a bracket, a back-slash, a comma or a new-line. It cannot
        // start with a (semi)-column because of the strange class list syntax.
        seq(
          /[^ (){}\[\]\\,:;\r\n]+/,
          optional(/[^ (){}\[\]\\,\r\n]+/)
        ),
        $._ruby_fragment
      )
    ),
    ruby_interpolation: $ => seq(
      '#{',
      field('injection', $.ruby_inline),
      '}'
    ),

    // Ref: https://github.com/slim-template/slim?tab=readme-ov-file#control-code--
    //      https://github.com/slim-template/slim?tab=readme-ov-file#output-
    //      https://github.com/slim-template/slim?tab=readme-ov-file#output-without-html-escaping-
    directive: $ => seq(
      alias(
        // Theses cannot be "floating chars" when used alone (without tag)
        choice(
          '-',
          '=',
          '==',
          '=>',
          '=<'
        ),
        $.directive_sign
      ),
      field('injection',
        alias(
          $._ruby_multiline,
          $.ruby_inline
        )
      ),
    ),
    directive_block: $ => seq(
      $.directive,
      optional($.child),
      $._newline
    ),
    directive_inline: $ => seq(
      optional(SPACES),
      $.directive
    ),

    // Ref: https://github.com/slim-template/slim?tab=readme-ov-file#verbatim-text-
    text_inline: $ => seq(
      SPACES,
      // It must start with a word
      choice(
        IDENTIFIER_REGEX,
        /[^=\r\n# ]+/,
        $.ruby_interpolation
      ),
      optional(
        // Then it can continue with words, but not a "="
        seq(
          optional(SPACES),
          choice(
            /[^=\r\n]/,
            $.ruby_interpolation
          ),
          optional($._text)
        )
      ),
      optional($._text_child)
    ),
    text_block: $ => seq(
      choice('|', '\''),
      $._text,
      optional($._text_child),
      $._newline
    ),
    _text_child: $ => seq(
      $._newline,
      $._indent,
      $._text,
      optional(
        choice(
          $._text_child,
          $._newline
        )
      ),
      $._dedent
    ),

    // Ref: https://github.com/slim-template/slim?tab=readme-ov-file#code-comment-
    //      https://github.com/slim-template/slim?tab=readme-ov-file#html-comment-
    //      https://github.com/slim-template/slim?tab=readme-ov-file#ie-conditional-comment-
    comment: $ => seq(
      '/',
      // Forcing to ad a space after the comment char helps distinguish comment from closing tags
      choice(
        SPACES,
        optional(
          choice(
            '[',
            '!'
          )
        )
      ),
      $._text,
      optional($._comment_child),
      $._newline
    ),
    _comment_child: $ => seq(
      $._newline,
      $._indent,
      repeat1(
        seq(
          $._text,
          choice(
            $._comment_child,
            $._newline
          )
        )
      ),
      $._dedent
    ),

    // TODO: This should be in scanner.c to avoid conflict with directives (match the "=" at start?)
    _text: $ => repeat1(
      choice(
        $.ruby_interpolation,
        '#',
        $._free_text
      ),
    ),
    _free_text: () => token(/[^\r\n#]+/)
  }
});

/**
 * Rules matching a char surrounded by spaces
 *
 * @param {string} floating char
 *
 * @returns {array} rule, token
 */
function floating_char(char) {
  return token.immediate(
    seq(
      optional(SPACES),
      char,
      optional(SPACES)
    )
  )
}

/**
 * Rules matching a brackets pair with specific content
 *
 * @param {object} $ grammar context
 * @param {string} opening char
 * @param {regex} content found within the brackets
 * @param {string} closing char
 *
 * @returns {array} rule
 */
function brackets_pair($, opening_char, content_regex, closing_char) {
  return seq(
    // prec is require to avoid crashing when opening a parenthesis
    prec.right(1, opening_char),
    repeat(
      choice(
        content_regex,
        $._ruby_fragment,
      )
    ),
    closing_char
  )
}

/**
 * Rules matching a line continuation
 * https://github.com/slim-template/slim?tab=readme-ov-file#html-comment-
 *
 * @param {string} char preceding the new line
 *
 * @returns {array} rule
 */
function line_continuation(char = '\\') {
  return token(
    seq(
      char,
      choice(
        seq(
          optional('\r'),
          '\n'
        ),
        '\0'
      ),
      optional(SPACES)
    )
  )
}


/**
 * Rules matching parameters wrapped in the provided chars pair
 *
 * @param {object} $ grammar context
 * @param {string} opening char
 * @param {string} closing char
 *
 * @returns {array} rule
 */
function wrapped_parameters($, opening_char, closing_char) {
  return seq(
    alias(floating_char(opening_char), $.bracket),
    choice(
      $.splat_parameters,
      repeat(
        seq(
          $.wrapped_parameter_pair,
          // Any of the SPACES or CARRIAGE_RETURN. Doesn't work with "choice()"
          optional(/[ \t\f\r\n]+/)
        )
      )
    ),
    alias(floating_char(closing_char), $.bracket)
  )
}

/**
 * Rules matching an injector
 *
 * @param {object} $ grammar context
 * @param {object} list Object { lang: true } to enable HTML parameters for this "lang" injector. Set the value to false
 *  to disable HTML parameters.
 *
 * @returns {array} rule
 */
function build_injectors($, list) {
  injectors = []
  Object.keys(list).forEach(i => {
    inline_content = field(
      'injection',
      alias(
        seq($._text, $._newline),
        eval(`$.${i}_lang`)
      )
    )
    indented_content = seq(
      $._indent,
      field(
        'injection',
        alias(
          repeat1(
            seq($._text, $._newline)
          ),
          eval(`$.${i}_lang`)
        )
      ),
      $._dedent
    )

    let sequence = [
      i,
      ':',
      choice(
        seq(
          $._newline,
          indented_content
        ),
        seq(
          SPACES,
          inline_content,
        )
      )
    ]

    if (list[i]) {
      // Allow optional HTML parameters.
      // See https://github.com/slim-template/slim?tab=readme-ov-file#embedded-engines-markdown- for more info
      sequence.splice(1, 0,
        optional(
          choice(
            $.wrapped_parameters,
            $.floating_parameters
          )
        )
      )
    }

    injectors.push(seq(...sequence))
  })
  return choice(...injectors)
}
