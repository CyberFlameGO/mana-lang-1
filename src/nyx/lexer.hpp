#pragma once

#include <filesystem>
#include <fstream>
#include <iostream>
#include <locale>  // for functionality such as std::isdigit()
#include <map>
#include <sstream>
#include <string>
#include <utility>  // pair
#include <vector>

#include "spdlog/spdlog.h"

struct filepos {
    uint64_t line;
    uint64_t column;

    filepos(uint64_t lpos, uint64_t colpos) : line(lpos), column(colpos) {}
};

struct token {
    enum type {
        invalid = -999,
        eof,

        num_int,

        add,
        mul,
        div,
        sub,
    };

    const type token_type;
    const std::string value;

    token(const type tokentype, const std::string& val) : token_type(tokentype), value(val) {}
};

struct lexer {
    lexer(std::stringstream& stream)
        : token_position(1, 0), filestream(stream), current_char(' '), eof_reached(false) {}

    void tokenize() {
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

        tokens.emplace_back(std::make_pair(token(token::type::eof, "EOF"), filepos(token_position)));
        print_tokens();
    }

    void print_tokens() const {
        for (const auto& tk : tokens) {
            std::string type;
            if (tk.first.token_type == token::eof) {
                type = "EOF";
            } else {
                type = "Number";
            }
            spdlog::debug("Line: {} | Col: {} | Type: {} | Value: {}", tk.second.line, tk.second.column, type,
                          tk.first.value);
        }
    }

private:
    // returns false if filestream.get() returns eof
    bool next_char() {
        ++token_position.column;

        if (!filestream.get(current_char)) {
            //  eof_reached = true;
            return false;
        }

        return true;
    }

    void process_numbers() {
        if (std::isdigit(current_char)) {
            std::string num_string;
            const filepos current_pos(token_position);

            do {
                num_string += current_char;

            } while (next_char() && (std::isdigit(current_char) || current_char == '.'));
            tokens.emplace_back(std::make_pair(token(token::num_int, num_string), current_pos));
        }
    }

    filepos token_position;
    std::stringstream& filestream;
    bool eof_reached = false;

private:
    char current_char;
    std::vector<std::pair<token, filepos>> tokens;
};

void read_file(const std::string& path) {
    std::filesystem::path fs_path(path);
    const auto& file_name = fs_path.filename().string();
    const auto file_size = std::filesystem::file_size(path);

    // Avoid needless copying by simply aliasing the buffer's contained string object
    const std::ifstream source(path);

    if (source.is_open() == false) {
        spdlog::error("Could not open file: {}\n at: {}", file_name, path);
    }

    std::stringstream file_buffer;
    file_buffer.str().reserve(file_size);
    file_buffer << source.rdbuf();
    const auto& file_string = file_buffer.str();

    // const auto tokens =
    auto a = lexer(file_buffer);
    a.tokenize();
}