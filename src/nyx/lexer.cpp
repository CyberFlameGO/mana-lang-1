#include "nyx/lexer.hpp"

#include <locale>

lexer::lexer(std::stringstream &stream)
    : token_position(1, 0)
    , filestream(stream)
    , current_char(' ')
{}

void lexer::tokenize()
{
    // what
    while (next_char()) {
        // Ignore whitespace
        while (std::isspace(current_char)) {
            next_char();
        }

        if (std::isdigit(current_char)) {
            process_numbers();
        }

        // Track newlines
        if (current_char == '\n') {
            ++token_position.line;
            token_position.column = 0; // Column will always get incremented on next_char(), so we reset it to 0

        }
    }

    tokens.emplace_back(std::make_pair(token(token::type::eof, "EOF"), filepos(token_position)));
    print_tokens();
}

void lexer::print_tokens() const
{
    for (const auto &tk : tokens) {
        std::string type;
        if (tk.first._type == token::type::eof) {
            type = "EOF";
        } else if (tk.first._type == token::type::num_float) {
            type = "Float";
        } else {
            type = "Int";
        }
        spdlog::debug("Line: {} | Col: {} | Type: {} | Value: {}",
                      tk.second.line,
                      tk.second.column,
                      type,
                      tk.first.value);
    }
}

bool lexer::next_char()
{
    ++token_position.column;

    if (!filestream.get(current_char)) {
        return false;
    }
    return true;
}

void lexer::process_numbers()
{
    bool is_float = false;
    std::string num_string;
    const filepos current_pos(token_position);

    do {
        num_string += current_char;
        is_float = (current_char == '.');

    } while (next_char() && (std::isdigit(current_char)) || current_char == '.');

    if (is_float && current_char == '.') {
        spdlog::error("Yea that ain't a float buddy");
        return;
    }

    using tktype = token::type;
    tktype t = (is_float ? tktype::num_float : tktype::num_int);

    tokens.emplace_back(std::make_pair(token(t, num_string), current_pos));
}
