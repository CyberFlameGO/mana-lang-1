
// Generated from /home/nyx/dev/mana/mana-lang/src/parser/grammar/Mana.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "ManaVisitor.h"


/**
 * This class provides an empty implementation of ManaVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ManaBaseVisitor : public ManaVisitor {
public:

  virtual antlrcpp::Any visitProg(ManaParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDefinition(ManaParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocalScope(ManaParser::LocalScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintExpr(ManaParser::PrintExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultAssignment(ManaParser::DefaultAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyStatement(ManaParser::EmptyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyLine(ManaParser::EmptyLineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(ManaParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(ManaParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(ManaParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDiv(ManaParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSub(ManaParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParensExpr(ManaParser::ParensExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt(ManaParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }


};

