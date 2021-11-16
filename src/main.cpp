// #include "build_test.hpp"
#include "parser/manaParser.h"
#include "parser/manaLexer.h"
#include "parser/manaBaseVisitor.h"
#include "antlr4-runtime.h"

#include <fstream>
#include <iostream>
#include <string>
#include <map>

#include <vector>

const std::string PATH("../parse_input/main.mana");

class mana_visitor : public mana::manaBaseVisitor {
public:
    std::map<std::string, int> memory;

    virtual antlrcpp::Any visitAssign(mana::manaParser::AssignContext *ctx) override {
        std::string id = ctx->ID()->getText();
        int value = visit(ctx->expr()).as<int>();
        memory.insert(std::make_pair(id, value));
        return value;
    }

    virtual antlrcpp::Any visitPrintExpr(mana::manaParser::PrintExprContext *ctx) override {
        int value = visit(ctx->expr()).as<int>();
        std::cout << value << "\n";
        return 0;
    }

    virtual antlrcpp::Any visitInt(mana::manaParser::IntContext *ctx) override {
        return std::stoi(ctx->INT()->getText());
    }

    virtual antlrcpp::Any visitIdentifier(mana::manaParser::IdentifierContext *ctx) override {
        std::string id = ctx->ID()->getText();
        const auto found = memory.find(id);
        if (found != memory.end())
            return found->second;

        return 0;
    }

    virtual antlrcpp::Any visitMulDiv(mana::manaParser::MulDivContext *ctx) override {
        int left = visit(ctx->expr(0)).as<int>();
        int right = visit(ctx->expr(1)).as<int>();
        
        if (ctx->op->getType() == mana::manaParser::MUL)
            return left * right;
        return left / right;
    }

    virtual antlrcpp::Any visitAddSub(mana::manaParser::AddSubContext *ctx) override {
        int left = visit(ctx->expr(0)).as<int>();
        int right = visit(ctx->expr(1)).as<int>();
        
        if (ctx->op->getType() == mana::manaParser::ADD)
            return left + right;
        return left - right;
    }

    virtual antlrcpp::Any visitParensExpr(mana::manaParser::ParensExprContext *ctx) override {
        return visit(ctx->expr());
    }   
};

int main() {
    std::string line;
    std::ifstream file(PATH);
    if (file.is_open()) {
        antlr4::ANTLRInputStream input(file);
        mana::manaLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);

        tokens.fill();
        for (const auto token : tokens.getTokens()) {
            std::cout << token->toString() << "\n";
        }

        mana::manaParser parser(&tokens);
        antlr4::tree::ParseTree* tree = parser.prog();

        mana_visitor visitor;
        visitor.visit(tree);

        file.close();
        return 0;
    }
}
