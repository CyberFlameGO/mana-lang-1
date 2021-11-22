#include "nyx/lexer.hpp"

#include <locale>

lexer::lexer(std::stringstream& source)
    : token_position(1, 0)
    , src(source)
    , current_char(' ')
{}

void lexer::tokenize()
{
    while (next_char()) {
        // Ignore whitespace
        while (std::isspace(current_char)) {
            next_char();
        }

        if (std::isdigit(current_char)) {
            process_number();
        }

        // Track newlines
        if (current_char == '\n') {
            ++token_position.line;
            token_position.column = 0; // Column will always get incremented on next_char(), so we reset it to 0
        }
    }

    tokens.emplace_back(std::make_pair(token(token::type::EoF, "EOF"), filepos(token_position)));
    print_tokens();
}

/// TODO: Make this print enums directly with magic_enum.hpp
void lexer::print_tokens() const
{
    for (const auto& tk : tokens) {
        std::string type;
        if (tk.first._type == token::type::EoF) {
            type = "EOF";
        } else if (tk.first._type == token::type::LIT_FLOAT) {
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
    return (src.get(current_char) ? true : false);
}

void lexer::process_number()
{
    std::string num_string;
    const filepos current_pos(token_position);

    // We define a lambda because we need to potentially re-run the integer processing code,
    // in order to process a float. This is better than recursion as the part of code we
    // wish to repeat is very small.
    const auto process = [&]() {
        do {
            num_string += current_char;

        } while (next_char() && (std::isdigit(current_char)));
    };

    process();

    token::type tktype = token::type::LIT_INT;

    if (current_char == '.') {
        process();
        tktype = token::type::LIT_FLOAT;
    }

    tokens.emplace_back(std::make_pair(token(tktype, num_string), current_pos));
}