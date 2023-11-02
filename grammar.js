module.exports = grammar({
  name: "kusto",

  rules: {
    source_file: ($) =>
      choice(
        seq($._statement, optional($._delimiter)),
        seq($._statement, repeat1(seq($._delimiter, $._statement))),
      ),
    _statement: ($) => choice($.let_statement, $.tabular_expression),

    let_statement: ($) =>
      seq(
        $.let_keyword,
        $.identifier,
        "=",
        choice($.tabular_expression, $._expression),
      ),

    tabular_expression: ($) => seq($.source, repeat($.operation)),
    source: ($) => prec.left(1, $.identifier),
    operation: ($) =>
      seq(
        $.pipe,
        choice(
          seq($.operator, $._expressions),
          seq(
            $.summarize_operator,
            $._expressions,
            $.summarize_operator,
            $._expressions,
          ),
          seq(
            $.join_operator,
            optional(seq($.join_operator, "=", $.join_types)),
            choice($.source, seq("(", $.tabular_expression, ")")),
            $.join_operator,
            choice($.identifier, $._non_repeating_expression),
          ),
        ),
      ),

    join_types: ($) =>
      choice(
        "innerunique",
        "inner",
        "leftouter",
        "leftsemi",
        "leftanti",
        "rightouter",
        "fullouter",
        "anti",
        "leftantisemi",
        "rightanti",
        "rightantisemi",
      ),
    pipe: ($) => /[|]/,
    _delimiter: ($) => ";",

    let_keyword: ($) => "let",
    operator: ($) =>
      choice(
        "order by",
        "project",
        "where",
        "extend",
        "evaluate",
        "bag_unpack",
      ),
    join_operator: ($) => choice("join", "kind", "on"),
    summarize_operator: ($) => choice("summarize", "by"),
    _expressions: ($) =>
      choice(
        seq($._expression, repeat(seq(",", $._expression))),
        $._non_repeating_expression,
      ),
    _expression: ($) =>
      choice($._expression_options, seq("(", $._expression_options, ")")),
    _expression_options: ($) =>
      choice(
        $.number,
        $.string,
        $.function_call,
        $.datatable,
        $.identifier,
        $.unary_expression,
        $.assignment_expression,
        $.array,
        $.typed_parameter,
        $.property_identifier,
        $.property_index,
      ),
    _non_repeating_expression: ($) =>
      choice($.binary_expression, $.compound_expression),

    binary_expression: ($) =>
      prec.left(
        1,
        seq(
          $._expression,
          choice(
            "*",
            "+",
            "-",
            "/",
            "==",
            "<",
            ">",
            "<=",
            ">=",
            $.binary_operator,
          ),
          $._expression,
        ),
      ),
    binary_operator: ($) => choice("in", "has"),
    assignment_expression: ($) =>
      prec.left(1, seq($._expression, "=", $._expression)),
    compound_expression: ($) =>
      prec.left(
        2,
        seq(
          $.binary_expression,
          repeat1(seq($.compound_keywords, $.binary_expression)),
        ),
      ),
    compound_keywords: ($) => choice("and", "or"),
    unary_expression: ($) => choice(prec.left(1, seq("not", $._expression))),
    typed_parameter: ($) => seq($.identifier, ":", $.type),
    type: ($) =>
      choice(
        "string",
        "int",
        "bool",
        "dynamic",
        "array",
        "guid",
        "datetime",
        "long",
        "real",
        "timespan",
        "decimal",
      ),
    number: ($) => /[0-9]+/,
    string: ($) => /'[^']*'/,
    identifier: ($) => /\$?[a-zA-Z_][a-zA-Z0-9_]*/,
    property_identifier: ($) =>
      seq($.identifier, repeat1(seq(".", $.identifier))),
    // /\$[a-zA-Z_][a-zA-Z0-9_]*(\.[a-zA-Z_][a-zA-Z0-9_]*)*/,
    property_index: ($) => seq($._expression, "[", $._expression, "]"),
    array: ($) => seq("[", $._expressions, "]"),
    function_call: ($) => seq($.identifier, "(", $.function_arguments, ")"),
    function_arguments: ($) => $._expressions,
    datatable: ($) => prec.left(1, seq($.function_call, $.array)),
  },
});
