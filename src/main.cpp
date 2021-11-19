// #include "build_test.hpp"
#include "parser/ManaParser.h"
#include "parser/ManaLexer.h"
#include "parser/ManaBaseListener.h"
#include "antlr4-runtime.h"

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>

#include "ast/listener.hpp"

const std::string PATH("../test/main.mana");

int main()
{
    std::string line;
    std::ifstream file(PATH);
    if (file.is_open())
    {
        antlr4::ANTLRInputStream input(file);
        ManaLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);

        tokens.fill();
        for (const auto token : tokens.getTokens())
        {
            //std::cout << token->toString() << "\n";
        }

        ManaParser parser(&tokens);
        antlr4::tree::ParseTree *tree = parser.file();

        const antlr4::tree::ParseTreeWalker walker;
        ast_listener listener(parser);

        walker.walk(&listener, tree);

        file.close();
        return 0;
    }
}
