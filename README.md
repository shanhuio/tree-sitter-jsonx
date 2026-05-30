# tree-sitter-jsonx

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for
**JSONx**, a dialect of JSON (see
[`shanhu.io/std/jsonx`](https://github.com/shanhuio/std/tree/main/jsonx)) that
adds:

- `//` line and `/* */` block comments
- unquoted, Go-style identifier object keys (`{value: 42}`)
- backtick raw strings (may span lines)
- a leading `+`/`-` sign on numbers, plus `0x` hex
- dotted-identifier paths (`a.b.c`)

It recognizes files with the `.jsonx` and `.caco3` extensions.

## Development

```sh
npm install          # installs tree-sitter-cli
npm run generate     # regenerate src/parser.c from grammar.js
npm test             # run the corpus tests in test/corpus
```

`src/` is committed so that editors (e.g. Zed) can compile the parser without
running `tree-sitter generate`. Regenerate and commit it after any change to
`grammar.js`.

## Editors

The Zed extension and the Vim / VS Code syntax files live in the std repo
under [`jsonx/`](https://github.com/shanhuio/std/tree/main/jsonx).
