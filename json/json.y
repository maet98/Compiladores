%%
/* Grammar Rules */
object : 	'{' whitespace '}'
		| 	'{' whitespace string whitespace ':' value another'}'

another:	',' whitespace string whitespace ':' value
		| ''

array: '[' whitespace ']'
	|	'[' value otro ']'

otro: ',' value otro 
	| ''

value: whitespace var whitespace

var: string
	| number
	| object
	| array
	| true
	| false
	| null
%%