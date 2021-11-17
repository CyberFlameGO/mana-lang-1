// #include "build_test.hpp"
#include "parser/ManaParser.h"
#include "parser/ManaLexer.h"
#include "parser/ManaBaseVisitor.h"
#include "antlr4-runtime.h"

#include <fstream>
#include <iostream>
#include <string>
#include <map>

#include <vector>

const std::string PATH("../parse_input/main.mana");

class ast_visitor : public ManaBaseVisitor {
public:
    std::map<std::string, int> memory;

    // Associate assigned value to given identifier
    virtual antlrcpp::Any visitAssign(ManaParser::AssignContext *ctx) override {
        std::string id = ctx->ID()->getText();
        int value = visit(ctx->expr()).as<int>();

        // Store assigned value in map
        memory.insert(std::make_pair(id, value));
        return value;
    }

    // For standalone expressions (i.e. a lone number) we print them to console
    virtual antlrcpp::Any visitPrintExpr(ManaParser::PrintExprContext *ctx) override {
        int value = visit(ctx->expr()).as<int>();
        std::cout << value << "\n";
        return 0;
    }

    // Convert any parsed integer literals to actual ints
    virtual antlrcpp::Any visitInt(ManaParser::IntContext *ctx) override {
        return std::stoi(ctx->INT()->getText());
    }

    // No clue what this is supposed to be doing
    virtual antlrcpp::Any visitIdentifier(ManaParser::IdentifierContext *ctx) override {
        std::string id = ctx->ID()->getText();
        const auto& found = memory.find(id);
        if (found != memory.end())
            return found->second;

        return 0;
    }


    // Multiplication and division
    virtual antlrcpp::Any visitMulDiv(ManaParser::MulDivContext *ctx) override {
        const int left  = visit(ctx->left).as<int>();
        const int right = visit(ctx->right).as<int>();
        
        if (ctx->op->getType() == ManaParser::MUL)
            return left * right;
        return left / right;
        return 0;
    }

    // Addition and subtraction
    virtual antlrcpp::Any visitAddSub(ManaParser::AddSubContext *ctx) override {
        const int left  = visit(ctx->left).as<int>();
        const int right = visit(ctx->right).as<int>();
        
        if (ctx->op->getType() == ManaParser::ADD)
            return left + right;
        return left - right;
        return 0;
    }

    virtual antlrcpp::Any visitLocalScope(ManaParser::LocalScopeContext *ctx) override {
        return 0;
    }

    virtual antlrcpp::Any visitParensExpr(ManaParser::ParensExprContext *ctx) override {
        return visit(ctx->arithm());
    }   
};

int main() {
    std::string line;
    std::ifstream file(PATH);
    if (file.is_open()) {
        antlr4::ANTLRInputStream input(file);
        ManaLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);

        tokens.fill();
        for (const auto token : tokens.getTokens()) {
            std::cout << token->toString() << "\n";
        }

        ManaParser parser(&tokens);
        antlr4::tree::ParseTree* tree = parser.prog();

        ast_visitor visitor;
        visitor.visit(tree);

        file.close();
        return 0;
    }
}
