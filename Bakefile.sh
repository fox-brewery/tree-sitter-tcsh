# shellcheck shell=bash

init() {
	PATH="$PWD/node_modules/.bin:$PATH"
}

task.test() {
	tree-sitter generate
	tree-sitter parse
}
