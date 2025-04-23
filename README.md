# Tree-sitter slim parse

[Slim](https://github.com/slim-template/slim) parser for [tree-sitter](https://github.com/nvim-treesitter/nvim-treesitter).

>> warning, this code is at it's alpha stage.

When this project began, no Slim parser was available. While an [alternative](#alternatives) now exists, I chose to continue because my approach differs.

### Goals

This project aims to:

- Support all _slim_ features except custom syntax configurations.
- Follow tree-sitter guidelines.
- Enable static analysis, Ruby linting, and support for other embedded languages through injections.

Performance will improve once the syntax tree stabilizes. That said, the plugin is functional and lag-free on modern computers.

## Installation

This documentation supports only [neovim](https://neovim.io) with [Lazy](https://github.com/folke/lazy.nvim) and [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter).

Running the following command to build an install the parser:

```bash
tree-sitter generate && \
tree-sitter build -o slim.so && \
cp slim.so ~/.local/share/nvim/lazy/nvim-treesitter/parser/ && \
mkdir -p ~/.local/share/nvim/lazy/nvim-treesitter/queries/slim && \
cp queries/* ~/.local/share/nvim/lazy/nvim-treesitter/queries/slim/
```

## Syntax tree

The syntax tree may evolve until the library stabilizes. Share your needs or feedback regarding a stable syntax tree.

## Queries

All queries are provided: _folds_, _highlights_, _indent_, _injections_ and _locals_.

## Tests

Tests are based on the [slim documentation](https://github.com/slim-template/slim), not its
[parse code](https://github.com/slim-template/slim/blob/main/lib/slim/parser.rb).
Test files match documentation chapters, with additional files for _extensive custom tests_ and _unsupported syntax_.

## Syntax highlight

Syntax highlighting follows tree-sitter's [recommendations](https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md#highlights). Since Slim isn't a traditional language with variables or functions, some liberties were taken.

## Unsupported features

The `unsupported.txt` test file lists unsupported features:

Won't be fixed:

- [Shortcuts/attributes](https://github.com/slim-template/slim?tab=readme-ov-file#attribute-shortcuts)
- [Shortcuts/lambda](https://github.com/slim-template/slim?tab=readme-ov-file#lambda-shortcuts)

## Parser, Scanner and Performances

The custom scanner is based on the tree-sitter [python scanner](https://github.com/tree-sitter/tree-sitter-python/blob/master/src/scanner.c), modified for _slim_. Future refactoring will improve performance and align with tree-sitter recommendations.

Example: Parsing 12k lines under 35ms on a Ryzen 7040

```
> wc -cl views/**/*.slim
...
 12262 531233 total
```

```
> time tree-sitter parse --timeout 1000 views/**/*.slim -sq
Total parses: 301; successful parses: 301; failed parses: 0; success percentage: 100.00%; average speed: 20701 bytes/ms
________________________________________________________
Executed in   32.25 millis    fish           external
   usr time   28.60 millis  393.00 micros   28.21 millis
   sys time    3.46 millis  369.00 micros    3.09 millis
```

## Developing/Contributing

The main repository is on [GitLab](https://gitlab.com/theoreichel/tree-sitter-slim).
Issues and PRs on GitHub will be ignored.

Feedback and merge requests are welcome! To test the parser with a _slim_ codebase, clone this repo and run:

```bash
tree-sitter generate
```

Then example, test all _slim_ file in a rails project:

```bash
tree-sitter parse --timeout 1000 views/**/*.slim -sq
```

While developing with neovim, use this handy command:

```bash
nvim your_file.slim +"InspectTree"
```

### Inspiration

- <https://tree-sitter.github.io/tree-sitter/creating-parsers>
- <https://github.com/zealot128/tree-sitter-pug/blob/master/queries/highlights.scm>

## Alternatives

- <https://github.com/kolen/tree-sitter-slim>
