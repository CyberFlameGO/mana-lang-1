
// Generated from /home/nyx/dev/mana/mana-lang/src/grammar/Mana.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "ManaParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ManaParser.
 */
class  ManaListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSrc(ManaParser::SrcContext *ctx) = 0;
  virtual void exitSrc(ManaParser::SrcContext *ctx) = 0;

  virtual void enterStatement(ManaParser::StatementContext *ctx) = 0;
  virtual void exitStatement(ManaParser::StatementContext *ctx) = 0;

  virtual void enterFunction(ManaParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(ManaParser::FunctionContext *ctx) = 0;

  virtual void enterExpression(ManaParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(ManaParser::ExpressionContext *ctx) = 0;

  virtual void enterScope(ManaParser::ScopeContext *ctx) = 0;
  virtual void exitScope(ManaParser::ScopeContext *ctx) = 0;

  virtual void enterIdentifier(ManaParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(ManaParser::IdentifierContext *ctx) = 0;

  virtual void enterMulDiv(ManaParser::MulDivContext *ctx) = 0;
  virtual void exitMulDiv(ManaParser::MulDivContext *ctx) = 0;

  virtual void enterAddSub(ManaParser::AddSubContext *ctx) = 0;
  virtual void exitAddSub(ManaParser::AddSubContext *ctx) = 0;

  virtual void enterParensExpr(ManaParser::ParensExprContext *ctx) = 0;
  virtual void exitParensExpr(ManaParser::ParensExprContext *ctx) = 0;

  virtual void enterInt(ManaParser::IntContext *ctx) = 0;
  virtual void exitInt(ManaParser::IntContext *ctx) = 0;


};

