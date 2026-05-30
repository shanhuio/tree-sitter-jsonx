; Object keys: unquoted identifiers and quoted strings both read as property names.
(pair
  key: (identifier) @property)
(pair
  key: (string) @property)

; Bare identifiers / dotted paths used as values (e.g. a.b.c, or a series type tag).
(dotted_name (identifier) @variable)

; Literals.
(string) @string
(raw_string) @string
(escape_sequence) @string.escape
(number) @number
(true) @boolean
(false) @boolean
(null) @constant.builtin

; Comments.
(comment) @comment

; Punctuation.
[
  ","
  ":"
  ";"
  "."
] @punctuation.delimiter

[
  "{"
  "}"
  "["
  "]"
] @punctuation.bracket
