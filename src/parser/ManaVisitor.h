
// Generated from /home/nyx/dev/mana/mana-lang/src/parser/grammar/Mana.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "ManaParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ManaParser.
 */
class  ManaVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ManaParser.
   */
    virtual antlrcpp::Any visitProg(ManaParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinition(ManaParser::FunctionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitLocalScope(ManaParser::LocalScopeContext *context) = 0;

    virtual antlrcpp::Any visitPrintExpr(ManaParser::PrintExprContext *context) = 0;

    virtual antlrcpp::Any visitDefaultAssignment(ManaParser::DefaultAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStatement(ManaParser::EmptyStatementContext *context) = 0;

    virtual antlrcpp::Any visitEmptyLine(ManaParser::EmptyLineContext *context) = 0;

    virtual antlrcpp::Any visitExpr(ManaParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitAssign(ManaParser::AssignContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(ManaParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitMulDiv(ManaParser::MulDivContext *context) = 0;

    virtual antlrcpp::Any visitAddSub(ManaParser::AddSubContext *context) = 0;

    virtual antlrcpp::Any visitParensExpr(ManaParser::ParensExprContext *context) = 0;

    virtual antlrcpp::Any visitInt(ManaParser::IntContext *context) = 0;


};

