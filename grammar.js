const newline = '\n'
const terminator = choice(newline, ';')
const terminator2 = choice(newline, ';', ';;', '\n', '&')
// prettier-ignore
const wordDelimiters = [
	'&', '|', ';', '<', '>', '(', ')',
	'&&', '||', '<<',  '>>'
]

// prettier-ignore
module.exports = grammar({
	name: 'tcsh',

	extras: $ => [
		$.comment,
		/\s/
	],

	rules: {
		program: $ => repeat(choice(
			seq($._statement, terminator),
		)),

		comment: $ => seq('#', /.*/),

		_statement: $ => repeat1(choice(
			$.string_doublequote,
			$.string_singlequote,
			$.string_raw
		)),

		_statement_terminated: $ => seq(
			$._statement,
			terminator2
		),

		redirections: $ => seq(
			'<', '<<',
			'>', '>!', '>&', '>&!',
			'>>', '>>&', '>>!', '>>&!'
		),

		// substitution_history: $ => seq(),
		// substitution_alias: $ => seq(),
		// substitution_variable: $ => seq(),
		// command, filename, directory stack substitution
		// substitution_command: $ => seq('`', '`'),
		// substitution_filename: $ => seq(),
		// substitution_directory_stack: $ => seq(),

		string_doublequote: $ => seq('"', /[a-z]*/, '"'),
		string_singlequote: $ => seq("'", /[a-z]*/, "'"),
		string_dollarquote: $ => seq("$'", /[a-z]*/,  "'"),
		string_raw: $ => /[a-z]+/,
	},
})
