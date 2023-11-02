(source) @type
(let_statement
  (let_keyword) @keyword
  (identifier) @variable)

(function_call
  (identifier) @function.call)

(function_arguments
  (typed_parameter
    (identifier) @parameter
    (type) @type.builtin))

(function_arguments
  (identifier) @parameter)
(operation (identifier) @variable)
(binary_expression (identifier) @variable)
(assignment_expression (identifier) @variable)
(property_identifier (identifier) @variable)

(pipe) @punctuation.delimiter
(operator) @keyword.operator
(join_types) @constant
(binary_operator) @keyword.operator
(compound_keywords) @keyword.operator
(summarize_operator) @keyword.operator
(join_operator) @keyword.operator
(string) @string
(number) @number
