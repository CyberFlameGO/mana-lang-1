
// Generated from /home/nyx/dev/mana/mana-lang/src/parser/grammar/mana.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "manaParser.h"


namespace mana {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by manaParser.
 */
class  manaVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by manaParser.
   */
    virtual antlrcpp::Any visitProg(manaParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitPrintExpr(manaParser::PrintExprContext *context) = 0;

    virtual antlrcpp::Any visitAssign(manaParser::AssignContext *context) = 0;

    virtual antlrcpp::Any visitBlank(manaParser::BlankContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(manaParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitMulDiv(manaParser::MulDivContext *context) = 0;

    virtual antlrcpp::Any visitAddSub(manaParser::AddSubContext *context) = 0;

    virtual antlrcpp::Any visitParensExpr(manaParser::ParensExprContext *context) = 0;

    virtual antlrcpp::Any visitInt(manaParser::IntContext *context) = 0;


};

}  // namespace mana
