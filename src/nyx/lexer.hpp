#pragma once

#include <sstream>
#include <string>
#include <utility>  // pair
#include <vector>

#include "spdlog/spdlog.h"

struct filepos {
    uint64_t line;
    uint64_t column;

    filepos(uint64_t lpos, uint64_t colpos) 
        : line(lpos)
        , column(colpos)
    {}
};

enum class tokentype {
    invalid = -999,
    eof,

    num_int,

    add,
    mul,
    div,
    sub,
};

struct token {
    const tokentype type;
    const std::string value;

    token(const tokentype tktype, const std::string& val) 
        : type(tktype)
        , value(val) 
    {}
};

struct lexer {
    lexer(std::stringstream& stream);

    void tokenize();
    void print_tokens() const;

private:
    bool next_char();
    void process_numbers();

    filepos token_position;
    std::stringstream& filestream;

private:
    char current_char;
    std::vector<std::pair<token, filepos>> tokens;
};