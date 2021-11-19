#include <iostream>

#include "listener.hpp"
#include "parser/ManaParser.h"

ast::listener::listener(const ManaParser& a_parser)
    : parser(a_parser)
{}

void ast::listener::enterFile(ManaParser::FileContext* ctx)
{
    std::cout << "hey\n";
}

void ast::listener::exitFile(ManaParser::FileContext* ctx)
{
    std::cout << "aww cya :(\n";
}

void ast::listener::enterStatement(ManaParser::StatementContext* ctx) 
{}

void ast::listener::exitStatement(ManaParser::StatementContext* ctx) 
{}

void ast::listener::enterFunction(ManaParser::FunctionContext* ctx)
{
    std::cout << "woah is this a function\n";
}

void ast::listener::exitFunction(ManaParser::FunctionContext* ctx)
{
    std::cout << "i think the function ended ;_;\n";
}

void ast::listener::enterScope(ManaParser::ScopeContext* ctx)
{
    std::cout << "ohhh heyyy! scope-san! what's up!??\n";
}

void ast::listener::exitScope(ManaParser::ScopeContext* ctx)
{
    std::cout << "yup. that scope tasted local\n";
}

void ast::listener::enterExpression(ManaParser::ExpressionContext* ctx)
{
    std::cout << "i found a cute expression >:)\n";
}

void ast::listener::exitExpression(ManaParser::ExpressionContext* ctx)
{
    std::cout << "math sucks anyway >:(\n";
}

void ast::listener::enterAddSub(ManaParser::AddSubContext* ctx)
{
    const int left = std::stoi(ctx->left->getText());
    const int right = std::stoi(ctx->right->getText());

    std::stringstream output;
    output << "it evaluates to ";

    if (ctx->op->getType() == ManaParser::ADD) {
        output << (left + right);
    } else {
        output << (left - right);
    }

    output << " i think\n";
    std::cout << output.str();
}

void ast::listener::exitAddSub(ManaParser::AddSubContext* ctx) 
{ }

void ast::listener::enterMulDiv(ManaParser::MulDivContext* ctx) 
{ 
    const float left = std::stof(ctx->left->getText());
    const float right = std::stof(ctx->right->getText());

    std::stringstream output;
    output << "it evaluates to ";

    if (ctx->op->getType() == ManaParser::MUL) {
        output << (left * right);
    } else {
        output << (left / right);
    }

    output << " i think\n";
    std::cout << output.str();
}

void ast::listener::exitMulDiv(ManaParser::MulDivContext* ctx) 
{ }

void ast::listener::enterParensExpr(ManaParser::ParensExprContext* ctx) 
{ }

void ast::listener::exitParensExpr(ManaParser::ParensExprContext* ctx) 
{ }
