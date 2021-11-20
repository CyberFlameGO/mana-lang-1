#include "nyx/lexer.hpp"

#include <locale>

lexer::lexer(std::stringstream& stream)
    : token_position(1, 0)
    , filestream(stream)
    , current_char(' ')
{}

void lexer::tokenize() {
    while (next_char()) {
        // Ignore whitespace
        while (std::isspace(current_char)) {
            next_char();
        }

        process_numbers();

        // Track newlines
        if (current_char == '\n') {
            ++token_position.line;
            token_position.column = 0;  // Column will always get incremented on next_char(),so we reset it to 0
        }
    }

    tokens.emplace_back(std::make_pair(token(tokentype::eof, "EOF"), filepos(token_position)));
    print_tokens();
}

void lexer::print_tokens() const {
    for (const auto& tk : tokens) {
        std::string type;
        if (tk.first.type == tokentype::eof) {
            type = "EOF";
        }
        else {
            type = "Number";
        }
        spdlog::debug("Line: {} | Col: {} | Type: {} | Value: {}", tk.second.line, tk.second.column, type,
            tk.first.value);
    }
}

bool lexer::next_char() {
    ++token_position.column;

    if (!filestream.get(current_char)) {
        return false;
    }
    return true;
}

void lexer::process_numbers() {
    if (std::isdigit(current_char)) {
        std::string num_string;
        const filepos current_pos(token_position);

        do {
            num_string += current_char;

        } while (next_char() && (std::isdigit(current_char) || current_char == '.'));

        tokens.emplace_back(std::make_pair(token(tokentype::num_int, num_string), current_pos));
    }
}
