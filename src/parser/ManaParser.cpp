
// Generated from /home/nyx/dev/mana/mana-lang/src/parser/grammar/Mana.g4 by ANTLR 4.9.3


#include "ManaVisitor.h"

#include "ManaParser.h"


using namespace antlrcpp;
using namespace antlr4;

ManaParser::ManaParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ManaParser::~ManaParser() {
  delete _interpreter;
}

std::string ManaParser::getGrammarFileName() const {
  return "Mana.g4";
}

const std::vector<std::string>& ManaParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ManaParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

ManaParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ManaParser::ProgContext::EOF() {
  return getToken(ManaParser::EOF, 0);
}

std::vector<ManaParser::StmtContext *> ManaParser::ProgContext::stmt() {
  return getRuleContexts<ManaParser::StmtContext>();
}

ManaParser::StmtContext* ManaParser::ProgContext::stmt(size_t i) {
  return getRuleContext<ManaParser::StmtContext>(i);
}


size_t ManaParser::ProgContext::getRuleIndex() const {
  return ManaParser::RuleProg;
}


antlrcpp::Any ManaParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ManaVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ManaParser::ProgContext* ManaParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ManaParser::RuleProg);
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
    setState(11); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(10);
      stmt();
      setState(13); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ManaParser::T__2)
      | (1ULL << ManaParser::ID)
      | (1ULL << ManaParser::INT)
      | (1ULL << ManaParser::NEWLINE))) != 0));
    setState(15);
    match(ManaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

ManaParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ManaParser::StmtContext::getRuleIndex() const {
  return ManaParser::RuleStmt;
}

void ManaParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlankContext ------------------------------------------------------------------

tree::TerminalNode* ManaParser::BlankContext::NEWLINE() {
  return getToken(ManaParser::NEWLINE, 0);
}

ManaParser::BlankContext::BlankContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ManaParser::BlankContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ManaVisitor*>(visitor))
    return parserVisitor->visitBlank(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

tree::TerminalNode* ManaParser::AssignContext::ID() {
  return getToken(ManaParser::ID, 0);
}

tree::TerminalNode* ManaParser::AssignContext::ASSIGN() {
  return getToken(ManaParser::ASSIGN, 0);
}

ManaParser::ExprContext* ManaParser::AssignContext::expr() {
  return getRuleContext<ManaParser::ExprContext>(0);
}

tree::TerminalNode* ManaParser::AssignContext::NEWLINE() {
  return getToken(ManaParser::NEWLINE, 0);
}

ManaParser::AssignContext::AssignContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ManaParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ManaVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintExprContext ------------------------------------------------------------------

ManaParser::ExprContext* ManaParser::PrintExprContext::expr() {
  return getRuleContext<ManaParser::ExprContext>(0);
}

tree::TerminalNode* ManaParser::PrintExprContext::NEWLINE() {
  return getToken(ManaParser::NEWLINE, 0);
}

ManaParser::PrintExprContext::PrintExprContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ManaParser::PrintExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ManaVisitor*>(visitor))
    return parserVisitor->visitPrintExpr(this);
  else
    return visitor->visitChildren(this);
}
ManaParser::StmtContext* ManaParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 2, ManaParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(26);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ManaParser::PrintExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(17);
      expr();
      setState(18);
      match(ManaParser::NEWLINE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ManaParser::AssignContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(20);
      match(ManaParser::ID);
      setState(21);
      match(ManaParser::ASSIGN);
      setState(22);
      expr();
      setState(23);
      match(ManaParser::NEWLINE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ManaParser::BlankContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(25);
      match(ManaParser::NEWLINE);
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

//----------------- ScopeContext ------------------------------------------------------------------

ManaParser::ScopeContext::ScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ManaParser::ScopeContext::getRuleIndex() const {
  return ManaParser::RuleScope;
}

void ManaParser::ScopeContext::copyFrom(ScopeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- GlobalScopeContext ------------------------------------------------------------------

ManaParser::ExprContext* ManaParser::GlobalScopeContext::expr() {
  return getRuleContext<ManaParser::ExprContext>(0);
}

ManaParser::GlobalScopeContext::GlobalScopeContext(ScopeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ManaParser::GlobalScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ManaVisitor*>(visitor))
    return parserVisitor->visitGlobalScope(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LocalScopeContext ------------------------------------------------------------------

ManaParser::ExprContext* ManaParser::LocalScopeContext::expr() {
  return getRuleContext<ManaParser::ExprContext>(0);
}

ManaParser::LocalScopeContext::LocalScopeContext(ScopeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ManaParser::LocalScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ManaVisitor*>(visitor))
    return parserVisitor->visitLocalScope(this);
  else
    return visitor->visitChildren(this);
}
ManaParser::ScopeContext* ManaParser::scope() {
  ScopeContext *_localctx = _tracker.createInstance<ScopeContext>(_ctx, getState());
  enterRule(_localctx, 4, ManaParser::RuleScope);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(33);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ManaParser::T__2:
      case ManaParser::ID:
      case ManaParser::INT: {
        _localctx = _tracker.createInstance<ManaParser::GlobalScopeContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(28);
        expr();
        break;
      }

      case ManaParser::T__0: {
        _localctx = _tracker.createInstance<ManaParser::LocalScopeContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(29);
        match(ManaParser::T__0);
        setState(30);
        expr();
        setState(31);
        match(ManaParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
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

ManaParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ManaParser::ArithmContext* ManaParser::ExprContext::arithm() {
  return getRuleContext<ManaParser::ArithmContext>(0);
}


size_t ManaParser::ExprContext::getRuleIndex() const {
  return ManaParser::RuleExpr;
}


antlrcpp::Any ManaParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ManaVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

ManaParser::ExprContext* ManaParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 6, ManaParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    arithm(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmContext ------------------------------------------------------------------

ManaParser::ArithmContext::ArithmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ManaParser::ArithmContext::getRuleIndex() const {
  return ManaParser::RuleArithm;
}

void ManaParser::ArithmContext::copyFrom(ArithmContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdentifierContext ------------------------------------------------------------------

tree::TerminalNode* ManaParser::IdentifierContext::ID() {
  return getToken(ManaParser::ID, 0);
}

ManaParser::IdentifierContext::IdentifierContext(ArithmContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ManaParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ManaVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<ManaParser::ArithmContext *> ManaParser::MulDivContext::arithm() {
  return getRuleContexts<ManaParser::ArithmContext>();
}

ManaParser::ArithmContext* ManaParser::MulDivContext::arithm(size_t i) {
  return getRuleContext<ManaParser::ArithmContext>(i);
}

tree::TerminalNode* ManaParser::MulDivContext::MUL() {
  return getToken(ManaParser::MUL, 0);
}

tree::TerminalNode* ManaParser::MulDivContext::DIV() {
  return getToken(ManaParser::DIV, 0);
}

ManaParser::MulDivContext::MulDivContext(ArithmContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ManaParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ManaVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<ManaParser::ArithmContext *> ManaParser::AddSubContext::arithm() {
  return getRuleContexts<ManaParser::ArithmContext>();
}

ManaParser::ArithmContext* ManaParser::AddSubContext::arithm(size_t i) {
  return getRuleContext<ManaParser::ArithmContext>(i);
}

tree::TerminalNode* ManaParser::AddSubContext::ADD() {
  return getToken(ManaParser::ADD, 0);
}

tree::TerminalNode* ManaParser::AddSubContext::SUB() {
  return getToken(ManaParser::SUB, 0);
}

ManaParser::AddSubContext::AddSubContext(ArithmContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ManaParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ManaVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensExprContext ------------------------------------------------------------------

ManaParser::ArithmContext* ManaParser::ParensExprContext::arithm() {
  return getRuleContext<ManaParser::ArithmContext>(0);
}

ManaParser::ParensExprContext::ParensExprContext(ArithmContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ManaParser::ParensExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ManaVisitor*>(visitor))
    return parserVisitor->visitParensExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* ManaParser::IntContext::INT() {
  return getToken(ManaParser::INT, 0);
}

ManaParser::IntContext::IntContext(ArithmContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ManaParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ManaVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}

ManaParser::ArithmContext* ManaParser::arithm() {
   return arithm(0);
}

ManaParser::ArithmContext* ManaParser::arithm(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ManaParser::ArithmContext *_localctx = _tracker.createInstance<ArithmContext>(_ctx, parentState);
  ManaParser::ArithmContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, ManaParser::RuleArithm, precedence);

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
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ManaParser::INT: {
        _localctx = _tracker.createInstance<IntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(38);
        match(ManaParser::INT);
        break;
      }

      case ManaParser::ID: {
        _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(39);
        match(ManaParser::ID);
        break;
      }

      case ManaParser::T__2: {
        _localctx = _tracker.createInstance<ParensExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(40);
        match(ManaParser::T__2);
        setState(41);
        arithm(0);
        setState(42);
        match(ManaParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(54);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(52);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ArithmContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleArithm);
          setState(46);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(47);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ManaParser::MUL

          || _la == ManaParser::DIV)) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(48);
          antlrcpp::downCast<MulDivContext *>(_localctx)->right = arithm(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ArithmContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleArithm);
          setState(49);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(50);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ManaParser::ADD

          || _la == ManaParser::SUB)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(51);
          antlrcpp::downCast<AddSubContext *>(_localctx)->right = arithm(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(56);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool ManaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 4: return arithmSempred(antlrcpp::downCast<ArithmContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ManaParser::arithmSempred(ArithmContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ManaParser::_decisionToDFA;
atn::PredictionContextCache ManaParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ManaParser::_atn;
std::vector<uint16_t> ManaParser::_serializedATN;

std::vector<std::string> ManaParser::_ruleNames = {
  "prog", "stmt", "scope", "expr", "arithm"
};

std::vector<std::string> ManaParser::_literalNames = {
  "", "'{'", "'}'", "'('", "')'", "'fn'", "'let'", "'i32'", "'='", "'*'", 
  "'/'", "'+'", "'-'"
};

std::vector<std::string> ManaParser::_symbolicNames = {
  "", "", "", "", "", "KEY_FN", "KEY_LET", "TYPE_I32", "ASSIGN", "MUL", 
  "DIV", "ADD", "SUB", "ID", "INT", "NEWLINE", "WS"
};

dfa::Vocabulary ManaParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ManaParser::_tokenNames;

ManaParser::Initializer::Initializer() {
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
       0x3, 0x12, 0x3c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x6, 
       0x2, 0xe, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0xf, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x1d, 0xa, 0x3, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x24, 0xa, 0x4, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x2f, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x37, 0xa, 0x6, 
       0xc, 0x6, 0xe, 0x6, 0x3a, 0xb, 0x6, 0x3, 0x6, 0x2, 0x3, 0xa, 0x7, 
       0x2, 0x4, 0x6, 0x8, 0xa, 0x2, 0x4, 0x3, 0x2, 0xb, 0xc, 0x3, 0x2, 
       0xd, 0xe, 0x2, 0x3e, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1c, 0x3, 
       0x2, 0x2, 0x2, 0x6, 0x23, 0x3, 0x2, 0x2, 0x2, 0x8, 0x25, 0x3, 0x2, 
       0x2, 0x2, 0xa, 0x2e, 0x3, 0x2, 0x2, 0x2, 0xc, 0xe, 0x5, 0x4, 0x3, 
       0x2, 0xd, 0xc, 0x3, 0x2, 0x2, 0x2, 0xe, 0xf, 0x3, 0x2, 0x2, 0x2, 
       0xf, 0xd, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 0x3, 0x2, 0x2, 0x2, 0x10, 
       0x11, 0x3, 0x2, 0x2, 0x2, 0x11, 0x12, 0x7, 0x2, 0x2, 0x3, 0x12, 0x3, 
       0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x5, 0x8, 0x5, 0x2, 0x14, 0x15, 0x7, 
       0x11, 0x2, 0x2, 0x15, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x7, 
       0xf, 0x2, 0x2, 0x17, 0x18, 0x7, 0xa, 0x2, 0x2, 0x18, 0x19, 0x5, 0x8, 
       0x5, 0x2, 0x19, 0x1a, 0x7, 0x11, 0x2, 0x2, 0x1a, 0x1d, 0x3, 0x2, 
       0x2, 0x2, 0x1b, 0x1d, 0x7, 0x11, 0x2, 0x2, 0x1c, 0x13, 0x3, 0x2, 
       0x2, 0x2, 0x1c, 0x16, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1b, 0x3, 0x2, 0x2, 
       0x2, 0x1d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x24, 0x5, 0x8, 0x5, 0x2, 
       0x1f, 0x20, 0x7, 0x3, 0x2, 0x2, 0x20, 0x21, 0x5, 0x8, 0x5, 0x2, 0x21, 
       0x22, 0x7, 0x4, 0x2, 0x2, 0x22, 0x24, 0x3, 0x2, 0x2, 0x2, 0x23, 0x1e, 
       0x3, 0x2, 0x2, 0x2, 0x23, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x24, 0x7, 0x3, 
       0x2, 0x2, 0x2, 0x25, 0x26, 0x5, 0xa, 0x6, 0x2, 0x26, 0x9, 0x3, 0x2, 
       0x2, 0x2, 0x27, 0x28, 0x8, 0x6, 0x1, 0x2, 0x28, 0x2f, 0x7, 0x10, 
       0x2, 0x2, 0x29, 0x2f, 0x7, 0xf, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x5, 0x2, 
       0x2, 0x2b, 0x2c, 0x5, 0xa, 0x6, 0x2, 0x2c, 0x2d, 0x7, 0x6, 0x2, 0x2, 
       0x2d, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2e, 
       0x29, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x38, 
       0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0xc, 0x7, 0x2, 0x2, 0x31, 0x32, 0x9, 
       0x2, 0x2, 0x2, 0x32, 0x37, 0x5, 0xa, 0x6, 0x8, 0x33, 0x34, 0xc, 0x6, 
       0x2, 0x2, 0x34, 0x35, 0x9, 0x3, 0x2, 0x2, 0x35, 0x37, 0x5, 0xa, 0x6, 
       0x7, 0x36, 0x30, 0x3, 0x2, 0x2, 0x2, 0x36, 0x33, 0x3, 0x2, 0x2, 0x2, 
       0x37, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 
       0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 
       0x3, 0x2, 0x2, 0x2, 0x8, 0xf, 0x1c, 0x23, 0x2e, 0x36, 0x38, 
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

ManaParser::Initializer ManaParser::_init;
