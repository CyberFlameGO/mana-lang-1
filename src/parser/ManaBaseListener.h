
// Generated from /home/nyx/dev/mana/mana-lang/src/grammar/Mana.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "ManaListener.h"


/**
 * This class provides an empty implementation of ManaListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ManaBaseListener : public ManaListener {
public:

  virtual void enterFile(ManaParser::FileContext * /*ctx*/) override { }
  virtual void exitFile(ManaParser::FileContext * /*ctx*/) override { }

  virtual void enterStatement(ManaParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(ManaParser::StatementContext * /*ctx*/) override { }

  virtual void enterFunction(ManaParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(ManaParser::FunctionContext * /*ctx*/) override { }

  virtual void enterExpression(ManaParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(ManaParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterScope(ManaParser::ScopeContext * /*ctx*/) override { }
  virtual void exitScope(ManaParser::ScopeContext * /*ctx*/) override { }

  virtual void enterIdentifier(ManaParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(ManaParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterMulDiv(ManaParser::MulDivContext * /*ctx*/) override { }
  virtual void exitMulDiv(ManaParser::MulDivContext * /*ctx*/) override { }

  virtual void enterAddSub(ManaParser::AddSubContext * /*ctx*/) override { }
  virtual void exitAddSub(ManaParser::AddSubContext * /*ctx*/) override { }

  virtual void enterParensExpr(ManaParser::ParensExprContext * /*ctx*/) override { }
  virtual void exitParensExpr(ManaParser::ParensExprContext * /*ctx*/) override { }

  virtual void enterInt(ManaParser::IntContext * /*ctx*/) override { }
  virtual void exitInt(ManaParser::IntContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

