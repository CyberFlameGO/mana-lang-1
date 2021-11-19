#include <iostream>

#include "listener.hpp"
#include "parser/ManaParser.h"
#include "spdlog/spdlog.h"

ast::listener::listener(const ManaParser &a_parser)
    : parser(a_parser)
{
}

void ast::listener::enterSrc(ManaParser::SrcContext* ctx)
{
    spdlog::debug("Parse Start");
}

void ast::listener::exitSrc(ManaParser::SrcContext* ctx)
{
    spdlog::debug("Parse End\n");
}

void ast::listener::enterStatement(ManaParser::StatementContext* ctx)
{
    //spdlog::debug("Statement Start");
}

void ast::listener::exitStatement(ManaParser::StatementContext* ctx)
{
    //spdlog::debug("Statement End");
}

void ast::listener::enterFunction(ManaParser::FunctionContext* ctx)
{
    spdlog::debug("Function Start");
}

void ast::listener::exitFunction(ManaParser::FunctionContext* ctx)
{
    spdlog::debug("Function End");
}

void ast::listener::enterScope(ManaParser::ScopeContext* ctx)
{
    spdlog::debug("Scope Open");
}

void ast::listener::exitScope(ManaParser::ScopeContext* ctx)
{
    spdlog::debug("Scope Close");
}

void ast::listener::enterExpression(ManaParser::ExpressionContext* ctx)
{
    spdlog::debug("Encountered Expression");
}

void ast::listener::exitExpression(ManaParser::ExpressionContext* ctx)
{
}

void ast::listener::enterAddSub(ManaParser::AddSubContext* ctx)
{
    const float left = std::stof(ctx->left->getText());
    const float right = std::stof(ctx->right->getText());

    spdlog::debug("Expression type: Arithmetic | Operands: {} {} {}", left, ctx->op->getText(), right);

    std::stringstream output;
    output << "Performing ";

    if (ctx->op->getType() == ManaParser::ADD) {
        output << "Addition. Result: " << (left + right);
    } else {
        output << "Subtraction. Result: " << (left - right);
    }

    spdlog::debug(output.str());

}

void ast::listener::exitAddSub(ManaParser::AddSubContext* ctx)
{
}

void ast::listener::enterMulDiv(ManaParser::MulDivContext* ctx)
{
    const float left = std::stof(ctx->left->getText());
    const float right = std::stof(ctx->right->getText());

    spdlog::debug("Expression type: Arithmetic | Operands: {} {} {}", left, ctx->op->getText(), right);

    std::stringstream output;
    output << "Performing ";

    if (ctx->op->getType() == ManaParser::MUL) {
        output << "Multiplication. Result: " << (left * right);
    } else {
        output << "Division. Result: " << (left / right);
    }

    spdlog::debug(output.str());
}

void ast::listener::exitMulDiv(ManaParser::MulDivContext* ctx)
{
}

void ast::listener::enterDeclaration(ManaParser::DeclarationContext* ctx) 
{ 
    spdlog::info("Declaration spotted.\n\nID: {}\nexpr: {}", ctx->ID()->getText(), ctx->expression()->getText());

    
}

void ast::listener::exitDeclaration(ManaParser::DeclarationContext* ctx) 
{ 

}

void ast::listener::enterParensExpr(ManaParser::ParensExprContext* ctx)
{
}

void ast::listener::exitParensExpr(ManaParser::ParensExprContext* ctx)
{
}
