/**
 * @file JSONx grammar for tree-sitter
 * @license MIT
 *
 * JSONx is a dialect of JSON (see shanhu.io/std/jsonx) that adds // and
 * /* * / comments, unquoted identifier object keys, Go-style raw strings,
 * leading number signs, and bare identifier values. A file is a sequence of
 * values; a type-tagged "series" reads as a type name followed by a value.
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'jsonx',

  word: $ => $.identifier,

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    document: $ => repeat($._statement),

    // A file is a sequence of values. Series entries (a type name followed by
    // a value) read as two adjacent values, which highlights correctly.
    _statement: $ => seq($._value, optional(';')),

    _value: $ => choice(
      $.object,
      $.array,
      $.identifier,
      $.string,
      $.raw_string,
      $.number,
      $.true,
      $.false,
      $.null,
    ),

    object: $ => seq(
      '{',
      repeat(seq($.pair, optional(','))),
      '}',
    ),

    pair: $ => seq(
      field('key', choice($.identifier, $.string)),
      ':',
      field('value', $._value),
    ),

    array: $ => seq(
      '[',
      repeat(seq($._value, optional(','))),
      ']',
    ),

    string: $ => choice(
      seq('"', '"'),
      seq('"', $.string_content, '"'),
    ),

    string_content: $ => repeat1(choice(
      token.immediate(prec(1, /[^\\"\n]+/)),
      $.escape_sequence,
    )),

    escape_sequence: _ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|f|n|r|t|u[0-9a-fA-F]{4})/,
    )),

    // Go-style raw string: backticks, no escapes, may span lines.
    raw_string: _ => token(seq('`', /[^`]*/, '`')),

    // Go number format: optional sign, hex or decimal int/float.
    number: _ => token(seq(
      optional(/[-+]/),
      choice(
        /0x[0-9a-fA-F]+/,
        /\d+(\.\d*)?([eE][-+]?\d+)?/,
      ),
    )),

    true: _ => 'true',
    false: _ => 'false',
    null: _ => 'null',

    identifier: _ => /[A-Za-z_][A-Za-z0-9_]*/,

    comment: _ => token(choice(
      seq('//', /[^\n]*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
    )),
  },
});
