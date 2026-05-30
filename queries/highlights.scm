; Object keys: unquoted identifiers and quoted strings both read as property names.
(pair
  key: (identifier) @property)
(pair
  key: (string) @property)

; Bare identifiers used as values (e.g. a series type tag).
(identifier) @variable

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
] @punctuation.delimiter

[
  "{"
  "}"
  "["
  "]"
] @punctuation.bracket
