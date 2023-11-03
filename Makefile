
tree-sitter-angelscript.wasm: grammar.js
	tree-sitter generate
	tree-sitter build-wasm

.PHONY:
play: tree-sitter-angelscript.wasm
	tree-sitter playground
