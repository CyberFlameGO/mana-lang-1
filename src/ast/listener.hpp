#pragma once

#include "parser/ManaBaseListener.h"

class ManaParser;
class ManaBaseListener;

namespace ast
{

    class ast_listener : public ManaBaseListener
    {
    private:
        const ManaParser &parser;

    public:
        ast_listener(const ManaParser &a_parser) : parser(a_parser)
        {
        }
        virtual void enterFile(ManaParser::FileContext *ctx) override
        {
            std::cout << "hey\n";
        }
        virtual void exitFile(ManaParser::FileContext *ctx) override
        {
            std::cout << "aww cya :(\n";
        }
        virtual void enterFunction(ManaParser::FunctionContext *ctx) override
        {
            std::cout << "woah is this a function\n";
        }
        virtual void exitFunction(ManaParser::FunctionContext *ctx) override
        {
            std::cout << "i think the function ended ;_;\n";
        }
        virtual void enterScope(ManaParser::ScopeContext * /*ctx*/) override
        {
            std::cout << "ohhh heyyy! scope-san! what's up!??\n";
        }
        virtual void exitScope(ManaParser::ScopeContext * /*ctx*/) override
        {
            std::cout << "yup. that scope tasted local\n";
        }
        virtual void enterExpression(ManaParser::ExpressionContext * /*ctx*/) override
        {
            std::cout << "i found a cute expression >:)\n";
        }
        virtual void exitExpression(ManaParser::ExpressionContext *ctx) override
        {
            std::cout << "math sucks anyway >:(\n";
        }
        virtual void enterAddSub(ManaParser::AddSubContext *ctx) override
        {
            const int left = std::stoi(ctx->left->getText());
            const int right = std::stoi(ctx->right->getText());

            std::stringstream output;
            output << "it evaluates to ";

            if (ctx->op->getType() == ManaParser::ADD)
                output << (left + right);
            else
                output << (left - right);

            output << " i think\n";
            std::cout << output.str();
        }
    };
}