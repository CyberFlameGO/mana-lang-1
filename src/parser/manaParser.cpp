
// Generated from /home/nyx/dev/mana/mana-lang/src/parser/grammar/mana.g4 by ANTLR 4.9.3


#include "manaVisitor.h"

#include "manaParser.h"


using namespace antlrcpp;
using namespace mana;
using namespace antlr4;

manaParser::manaParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

manaParser::~manaParser() {
  delete _interpreter;
}

std::string manaParser::getGrammarFileName() const {
  return "mana.g4";
}

const std::vector<std::string>& manaParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& manaParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

manaParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* manaParser::ProgContext::EOF() {
  return getToken(manaParser::EOF, 0);
}

std::vector<manaParser::StmtContext *> manaParser::ProgContext::stmt() {
  return getRuleContexts<manaParser::StmtContext>();
}

manaParser::StmtContext* manaParser::ProgContext::stmt(size_t i) {
  return getRuleContext<manaParser::StmtContext>(i);
}


size_t manaParser::ProgContext::getRuleIndex() const {
  return manaParser::RuleProg;
}


antlrcpp::Any manaParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<manaVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

manaParser::ProgContext* manaParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, manaParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(7); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(6);
      stmt();
      setState(9); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << manaParser::T__0)
      | (1ULL << manaParser::ID)
      | (1ULL << manaParser::INT)
      | (1ULL << manaParser::NEWLINE))) != 0));
    setState(11);
    match(manaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

manaParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t manaParser::StmtContext::getRuleIndex() const {
  return manaParser::RuleStmt;
}

void manaParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlankContext ------------------------------------------------------------------

tree::TerminalNode* manaParser::BlankContext::NEWLINE() {
  return getToken(manaParser::NEWLINE, 0);
}

manaParser::BlankContext::BlankContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any manaParser::BlankContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<manaVisitor*>(visitor))
    return parserVisitor->visitBlank(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

tree::TerminalNode* manaParser::AssignContext::ID() {
  return getToken(manaParser::ID, 0);
}

tree::TerminalNode* manaParser::AssignContext::ASSIGN() {
  return getToken(manaParser::ASSIGN, 0);
}

manaParser::ExprContext* manaParser::AssignContext::expr() {
  return getRuleContext<manaParser::ExprContext>(0);
}

tree::TerminalNode* manaParser::AssignContext::NEWLINE() {
  return getToken(manaParser::NEWLINE, 0);
}

manaParser::AssignContext::AssignContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any manaParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<manaVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintExprContext ------------------------------------------------------------------

manaParser::ExprContext* manaParser::PrintExprContext::expr() {
  return getRuleContext<manaParser::ExprContext>(0);
}

tree::TerminalNode* manaParser::PrintExprContext::NEWLINE() {
  return getToken(manaParser::NEWLINE, 0);
}

manaParser::PrintExprContext::PrintExprContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any manaParser::PrintExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<manaVisitor*>(visitor))
    return parserVisitor->visitPrintExpr(this);
  else
    return visitor->visitChildren(this);
}
manaParser::StmtContext* manaParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 2, manaParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(22);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<manaParser::PrintExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(13);
      expr(0);
      setState(14);
      match(manaParser::NEWLINE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<manaParser::AssignContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(16);
      match(manaParser::ID);
      setState(17);
      match(manaParser::ASSIGN);
      setState(18);
      expr(0);
      setState(19);
      match(manaParser::NEWLINE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<manaParser::BlankContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(21);
      match(manaParser::NEWLINE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

manaParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t manaParser::ExprContext::getRuleIndex() const {
  return manaParser::RuleExpr;
}

void manaParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdentifierContext ------------------------------------------------------------------

tree::TerminalNode* manaParser::IdentifierContext::ID() {
  return getToken(manaParser::ID, 0);
}

manaParser::IdentifierContext::IdentifierContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any manaParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<manaVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<manaParser::ExprContext *> manaParser::MulDivContext::expr() {
  return getRuleContexts<manaParser::ExprContext>();
}

manaParser::ExprContext* manaParser::MulDivContext::expr(size_t i) {
  return getRuleContext<manaParser::ExprContext>(i);
}

tree::TerminalNode* manaParser::MulDivContext::MUL() {
  return getToken(manaParser::MUL, 0);
}

tree::TerminalNode* manaParser::MulDivContext::DIV() {
  return getToken(manaParser::DIV, 0);
}

manaParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any manaParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<manaVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<manaParser::ExprContext *> manaParser::AddSubContext::expr() {
  return getRuleContexts<manaParser::ExprContext>();
}

manaParser::ExprContext* manaParser::AddSubContext::expr(size_t i) {
  return getRuleContext<manaParser::ExprContext>(i);
}

tree::TerminalNode* manaParser::AddSubContext::ADD() {
  return getToken(manaParser::ADD, 0);
}

tree::TerminalNode* manaParser::AddSubContext::SUB() {
  return getToken(manaParser::SUB, 0);
}

manaParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any manaParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<manaVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensExprContext ------------------------------------------------------------------

manaParser::ExprContext* manaParser::ParensExprContext::expr() {
  return getRuleContext<manaParser::ExprContext>(0);
}

manaParser::ParensExprContext::ParensExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any manaParser::ParensExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<manaVisitor*>(visitor))
    return parserVisitor->visitParensExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* manaParser::IntContext::INT() {
  return getToken(manaParser::INT, 0);
}

manaParser::IntContext::IntContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any manaParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<manaVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}

manaParser::ExprContext* manaParser::expr() {
   return expr(0);
}

manaParser::ExprContext* manaParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  manaParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  manaParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, manaParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(31);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case manaParser::INT: {
        _localctx = _tracker.createInstance<IntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(25);
        match(manaParser::INT);
        break;
      }

      case manaParser::ID: {
        _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(26);
        match(manaParser::ID);
        break;
      }

      case manaParser::T__0: {
        _localctx = _tracker.createInstance<ParensExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(27);
        match(manaParser::T__0);
        setState(28);
        expr(0);
        setState(29);
        match(manaParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(41);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(39);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(33);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(34);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == manaParser::MUL

          || _la == manaParser::DIV)) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(35);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(36);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(37);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == manaParser::ADD

          || _la == manaParser::SUB)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(38);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(43);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool manaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool manaParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> manaParser::_decisionToDFA;
atn::PredictionContextCache manaParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN manaParser::_atn;
std::vector<uint16_t> manaParser::_serializedATN;

std::vector<std::string> manaParser::_ruleNames = {
  "prog", "stmt", "expr"
};

std::vector<std::string> manaParser::_literalNames = {
  "", "'('", "')'", "'fn'", "'let'", "'i32'", "'='", "'*'", "'/'", "'+'", 
  "'-'"
};

std::vector<std::string> manaParser::_symbolicNames = {
  "", "", "", "KEY_FN", "KEY_LET", "TYPE_I32", "ASSIGN", "MUL", "DIV", "ADD", 
  "SUB", "ID", "INT", "NEWLINE", "WS"
};

dfa::Vocabulary manaParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> manaParser::_tokenNames;

manaParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x10, 0x2f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x3, 0x2, 0x6, 0x2, 0xa, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 
       0xb, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x19, 
       0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x5, 0x4, 0x22, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x2a, 0xa, 0x4, 0xc, 
       0x4, 0xe, 0x4, 0x2d, 0xb, 0x4, 0x3, 0x4, 0x2, 0x3, 0x6, 0x5, 0x2, 
       0x4, 0x6, 0x2, 0x4, 0x3, 0x2, 0x9, 0xa, 0x3, 0x2, 0xb, 0xc, 0x2, 
       0x32, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4, 0x18, 0x3, 0x2, 0x2, 0x2, 
       0x6, 0x21, 0x3, 0x2, 0x2, 0x2, 0x8, 0xa, 0x5, 0x4, 0x3, 0x2, 0x9, 
       0x8, 0x3, 0x2, 0x2, 0x2, 0xa, 0xb, 0x3, 0x2, 0x2, 0x2, 0xb, 0x9, 
       0x3, 0x2, 0x2, 0x2, 0xb, 0xc, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x3, 
       0x2, 0x2, 0x2, 0xd, 0xe, 0x7, 0x2, 0x2, 0x3, 0xe, 0x3, 0x3, 0x2, 
       0x2, 0x2, 0xf, 0x10, 0x5, 0x6, 0x4, 0x2, 0x10, 0x11, 0x7, 0xf, 0x2, 
       0x2, 0x11, 0x19, 0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 0x7, 0xd, 0x2, 0x2, 
       0x13, 0x14, 0x7, 0x8, 0x2, 0x2, 0x14, 0x15, 0x5, 0x6, 0x4, 0x2, 0x15, 
       0x16, 0x7, 0xf, 0x2, 0x2, 0x16, 0x19, 0x3, 0x2, 0x2, 0x2, 0x17, 0x19, 
       0x7, 0xf, 0x2, 0x2, 0x18, 0xf, 0x3, 0x2, 0x2, 0x2, 0x18, 0x12, 0x3, 
       0x2, 0x2, 0x2, 0x18, 0x17, 0x3, 0x2, 0x2, 0x2, 0x19, 0x5, 0x3, 0x2, 
       0x2, 0x2, 0x1a, 0x1b, 0x8, 0x4, 0x1, 0x2, 0x1b, 0x22, 0x7, 0xe, 0x2, 
       0x2, 0x1c, 0x22, 0x7, 0xd, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x3, 0x2, 0x2, 
       0x1e, 0x1f, 0x5, 0x6, 0x4, 0x2, 0x1f, 0x20, 0x7, 0x4, 0x2, 0x2, 0x20, 
       0x22, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1c, 
       0x3, 0x2, 0x2, 0x2, 0x21, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x22, 0x2b, 0x3, 
       0x2, 0x2, 0x2, 0x23, 0x24, 0xc, 0x7, 0x2, 0x2, 0x24, 0x25, 0x9, 0x2, 
       0x2, 0x2, 0x25, 0x2a, 0x5, 0x6, 0x4, 0x8, 0x26, 0x27, 0xc, 0x6, 0x2, 
       0x2, 0x27, 0x28, 0x9, 0x3, 0x2, 0x2, 0x28, 0x2a, 0x5, 0x6, 0x4, 0x7, 
       0x29, 0x23, 0x3, 0x2, 0x2, 0x2, 0x29, 0x26, 0x3, 0x2, 0x2, 0x2, 0x2a, 
       0x2d, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 
       0x3, 0x2, 0x2, 0x2, 0x2c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 
       0x2, 0x2, 0x2, 0x7, 0xb, 0x18, 0x21, 0x29, 0x2b, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

manaParser::Initializer manaParser::_init;
