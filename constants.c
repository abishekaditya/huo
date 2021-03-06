#include "constants.h"

struct String functions = {
    .body = "*+-/!=<>\0",
    .length = 8
};

struct String numbers = {
    .body = "0123456789\0",
    .length = 10
};

struct String letters = {
    .body = "_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
    .length = 52
};

struct String print_const = {
    .body = "print",
    .length = 5
};

struct String concat_const = {
    .body = "cat",
    .length = 3
};

struct String if_const = {
    .body = "if",
    .length = 2
};

struct String def_const = {
    .body = "def",
    .length = 3
};

struct String let_const = {
    .body = "let",
    .length = 3
};

struct String length_const = {
    .body = "length",
    .length = 6
};

struct String index_const = {
    .body = "index",
    .length = 5
};

struct String push_const = {
    .body = "push",
    .length = 4
};

struct String each_const = {
    .body = "each",
    .length = 4
};

struct String map_const = {
    .body = "map",
    .length = 3
};

struct String reduce_const = {
    .body = "reduce",
    .length = 6
};

struct String set_const = {
    .body = "set",
    .length = 3
};

struct String for_const = {
    .body = "for",
    .length = 3
};

struct String do_const = {
    .body = "do",
    .length = 2
};

struct String read_const = {
    .body = "read",
    .length = 4
};

struct String import_const = {
    .body = "import",
    .length = 6
};

struct String substring_const = {
    .body = "substring",
    .length = 9
};

struct String split_const = {
    .body = "split",
    .length = 5
};

struct String return_const = {
    .body = "return",
    .length = 6
};

struct String parallel_const = {
    .body = "parallel",
    .length = 8
};

const char bool_true = 't';
const char bool_false = 'f';
const char bool_undefined = 'u';

const char open_parens_const = '(';
const char close_parens_const = ')';
const char root_type_const = 'r';
const char quote_const = '"';
const char bracket_const = '[';
const char end_bracket_const = ']';
const char dot_const = '.';

int is_a_open_parens(char ch){ return ch == open_parens_const; }
int is_a_close_parens(char ch){ return ch == close_parens_const; }
int is_a_root_type(char ch){ return ch == root_type_const; }
int is_a_quote(char ch){ return ch == quote_const; }
int is_a_bracket(char ch){ return ch == bracket_const; }
int is_a_end_bracket(char ch){ return ch == end_bracket_const; }

int is_a_letter(char ch){
    return string_contains(ch, &letters);
}

int is_a_number(char ch){
    return string_contains(ch, &numbers);
}

int is_a_function(char ch){
  return string_contains(ch, &functions);
}
