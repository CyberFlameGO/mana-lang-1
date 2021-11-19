#include "util.hpp"
#include "parser/ManaParser.h"
#include "parser/ManaLexer.h"
#include "parser/ManaBaseListener.h"
#include "ast/listener.hpp"

#include "antlr4-runtime.h"

#include <fstream>
#include <string>

constexpr const char* DEFAULT_PATH = "../test/main.mana";

void parse_file(const std::string& path);

int main(int argc, char *argv[])
{
    init_logger();
    const int cli_args = argc;

    if (cli_args > 1) {
        for (int i = 1; i < cli_args; ++i) {
            parse_file(argv[i]);
        }
    } else {
        spdlog::warn("No source path specified. Proceeding with default path: {}", DEFAULT_PATH);
        parse_file(DEFAULT_PATH);
    }
}

void parse_file(const std::string& path) {

    std::ifstream source_file(path);
    if (source_file.is_open()) {

        antlr4::ANTLRInputStream input(source_file);
        ManaLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        tokens.fill();

        ManaParser parser(&tokens);
        antlr4::tree::ParseTree *tree = parser.src();

        const antlr4::tree::ParseTreeWalker walker;
        ast::listener listener(parser);
        walker.walk(&listener, tree);

        source_file.close();
    } else {
        spdlog::error("Could not open source file at: {}", path);
    }
}
