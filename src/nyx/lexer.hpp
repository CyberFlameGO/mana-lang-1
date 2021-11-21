#pragma once

#include <sstream>
#include <string>
#include <utility> // pair
#include <vector>

#include "spdlog/spdlog.h"

struct filepos {
    uint64_t line;
    uint64_t column;

    filepos(uint64_t linepos, uint64_t colpos)
        : line(linepos)
        , column(colpos)
    {}
};

struct token {
public:
    enum class type {
        EoF = -999,

        LIT_INT,
        LIT_FLOAT,

        ADD,
        MUL,
        DIV,
        SUB,
    };

public:
    const type _type;
    const std::string value;

    token(const type token_type, const std::string& val)
        : _type(token_type)
        , value(val)
    {}
};

struct lexer {
public:
    lexer(std::stringstream& source);

    void tokenize();
    void print_tokens() const;

private:
    bool next_char();
    void process_number();

private:
    filepos token_position;
    std::stringstream& src;
    char current_char;
    std::vector<std::pair<token, filepos>> tokens;
};