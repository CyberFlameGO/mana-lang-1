// #include "build_test.hpp"
#include "parser/grammar/generated/manaParser.h"
#include "parser/grammar/generated/manaLexer.h"
#include "antlr4-runtime.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

const std::string PATH("../parse_input/main.mana");

int main() {
    std::string line;
    std::ifstream file(PATH);
    if (file.is_open()) {
        antlr4::ANTLRInputStream input(file);
        mana::manaLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);

        tokens.fill();
        for (auto token : tokens.getTokens()) {
            std::cout << token->toString() << "\n";
        }

        mana::manaParser parser(&tokens);
        antlr4::tree::ParseTree* tree = parser.r();

        std::cout << tree->toStringTree(&parser) << std::endl;
        file.close();
    }

}
