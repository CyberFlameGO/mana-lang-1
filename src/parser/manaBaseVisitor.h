
// Generated from /home/nyx/dev/mana/mana-lang/src/parser/grammar/mana.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "manaVisitor.h"


namespace mana {

/**
 * This class provides an empty implementation of manaVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  manaBaseVisitor : public manaVisitor {
public:

  virtual antlrcpp::Any visitProg(manaParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintExpr(manaParser::PrintExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(manaParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlank(manaParser::BlankContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(manaParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDiv(manaParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSub(manaParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParensExpr(manaParser::ParensExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt(manaParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace mana
