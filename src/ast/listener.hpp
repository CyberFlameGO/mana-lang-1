#pragma once

#include "parser/ManaBaseListener.h"

class ManaParser;

namespace ast
{

    class listener : public ManaBaseListener
    {
    private:
        const ManaParser &parser;

    public:
        listener(const ManaParser& a_parser);
        virtual void enterSrc(ManaParser::SrcContext* ctx) override;
        virtual void exitSrc(ManaParser::SrcContext* ctx) override;

        virtual void enterStatement(ManaParser::StatementContext* ctx) override;
        virtual void exitStatement(ManaParser::StatementContext* ctx) override;

        virtual void enterFunction(ManaParser::FunctionContext* ctx) override;
        virtual void exitFunction(ManaParser::FunctionContext* ctx) override;

        virtual void enterScope(ManaParser::ScopeContext* ctx) override;
        virtual void exitScope(ManaParser::ScopeContext* ctx) override;

        virtual void enterExpression(ManaParser::ExpressionContext* ctx) override;
        virtual void exitExpression(ManaParser::ExpressionContext* ctx) override;

        virtual void enterAddSub(ManaParser::AddSubContext* ctx) override;
        virtual void exitAddSub(ManaParser::AddSubContext* ctx) override;

        virtual void enterMulDiv(ManaParser::MulDivContext* ctx) override;
        virtual void exitMulDiv(ManaParser::MulDivContext* ctx) override;

        virtual void enterParensExpr(ManaParser::ParensExprContext* ctx) override;
        virtual void exitParensExpr(ManaParser::ParensExprContext* ctx) override;
    };
}