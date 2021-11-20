
// Generated from /home/nyx/dev/mana/mana-lang/src/grammar/Mana.g4 by ANTLR 4.9.3


#include "ManaListener.h"

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


//----------------- SrcContext ------------------------------------------------------------------

ManaParser::SrcContext::SrcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ManaParser::SrcContext::EOF() {
  return getToken(ManaParser::EOF, 0);
}

std::vector<ManaParser::StatementContext *> ManaParser::SrcContext::statement() {
  return getRuleContexts<ManaParser::StatementContext>();
}

ManaParser::StatementContext* ManaParser::SrcContext::statement(size_t i) {
  return getRuleContext<ManaParser::StatementContext>(i);
}


size_t ManaParser::SrcContext::getRuleIndex() const {
  return ManaParser::RuleSrc;
}

void ManaParser::SrcContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSrc(this);
}

void ManaParser::SrcContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSrc(this);
}

ManaParser::SrcContext* ManaParser::src() {
  SrcContext *_localctx = _tracker.createInstance<SrcContext>(_ctx, getState());
  enterRule(_localctx, 0, ManaParser::RuleSrc);
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
    setState(19); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(18);
      statement();
      setState(21); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ManaParser::T__0)
      | (1ULL << ManaParser::T__2)
      | (1ULL << ManaParser::KEY_FN)
      | (1ULL << ManaParser::KEY_LET)
      | (1ULL << ManaParser::END)
      | (1ULL << ManaParser::ID)
      | (1ULL << ManaParser::INT)
      | (1ULL << ManaParser::FLOAT)
      | (1ULL << ManaParser::NEWLINE))) != 0));
    setState(23);
    match(ManaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ManaParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ManaParser::ScopeContext* ManaParser::StatementContext::scope() {
  return getRuleContext<ManaParser::ScopeContext>(0);
}

ManaParser::FunctionContext* ManaParser::StatementContext::function() {
  return getRuleContext<ManaParser::FunctionContext>(0);
}

ManaParser::DeclarationContext* ManaParser::StatementContext::declaration() {
  return getRuleContext<ManaParser::DeclarationContext>(0);
}

ManaParser::ExpressionContext* ManaParser::StatementContext::expression() {
  return getRuleContext<ManaParser::ExpressionContext>(0);
}

ManaParser::AtomContext* ManaParser::StatementContext::atom() {
  return getRuleContext<ManaParser::AtomContext>(0);
}

tree::TerminalNode* ManaParser::StatementContext::END() {
  return getToken(ManaParser::END, 0);
}

tree::TerminalNode* ManaParser::StatementContext::NEWLINE() {
  return getToken(ManaParser::NEWLINE, 0);
}


size_t ManaParser::StatementContext::getRuleIndex() const {
  return ManaParser::RuleStatement;
}

void ManaParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void ManaParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

ManaParser::StatementContext* ManaParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, ManaParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(32);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(25);
      scope();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(26);
      function();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(27);
      declaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(28);
      expression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(29);
      atom();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(30);
      match(ManaParser::END);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(31);
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

std::vector<ManaParser::StatementContext *> ManaParser::ScopeContext::statement() {
  return getRuleContexts<ManaParser::StatementContext>();
}

ManaParser::StatementContext* ManaParser::ScopeContext::statement(size_t i) {
  return getRuleContext<ManaParser::StatementContext>(i);
}


size_t ManaParser::ScopeContext::getRuleIndex() const {
  return ManaParser::RuleScope;
}

void ManaParser::ScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScope(this);
}

void ManaParser::ScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScope(this);
}

ManaParser::ScopeContext* ManaParser::scope() {
  ScopeContext *_localctx = _tracker.createInstance<ScopeContext>(_ctx, getState());
  enterRule(_localctx, 4, ManaParser::RuleScope);
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
    setState(34);
    match(ManaParser::T__0);
    setState(38);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ManaParser::T__0)
      | (1ULL << ManaParser::T__2)
      | (1ULL << ManaParser::KEY_FN)
      | (1ULL << ManaParser::KEY_LET)
      | (1ULL << ManaParser::END)
      | (1ULL << ManaParser::ID)
      | (1ULL << ManaParser::INT)
      | (1ULL << ManaParser::FLOAT)
      | (1ULL << ManaParser::NEWLINE))) != 0)) {
      setState(35);
      statement();
      setState(40);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(41);
    match(ManaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

ManaParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ManaParser::FunctionContext::KEY_FN() {
  return getToken(ManaParser::KEY_FN, 0);
}

tree::TerminalNode* ManaParser::FunctionContext::ID() {
  return getToken(ManaParser::ID, 0);
}

std::vector<ManaParser::ScopeContext *> ManaParser::FunctionContext::scope() {
  return getRuleContexts<ManaParser::ScopeContext>();
}

ManaParser::ScopeContext* ManaParser::FunctionContext::scope(size_t i) {
  return getRuleContext<ManaParser::ScopeContext>(i);
}


size_t ManaParser::FunctionContext::getRuleIndex() const {
  return ManaParser::RuleFunction;
}

void ManaParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void ManaParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

ManaParser::FunctionContext* ManaParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 6, ManaParser::RuleFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(43);
    match(ManaParser::KEY_FN);
    setState(44);
    match(ManaParser::ID);
    setState(45);
    match(ManaParser::T__2);
    setState(46);
    match(ManaParser::T__3);
    setState(48); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(47);
              scope();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(50); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

ManaParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ManaParser::DeclarationContext::KEY_LET() {
  return getToken(ManaParser::KEY_LET, 0);
}

tree::TerminalNode* ManaParser::DeclarationContext::ID() {
  return getToken(ManaParser::ID, 0);
}

tree::TerminalNode* ManaParser::DeclarationContext::ASSIGN() {
  return getToken(ManaParser::ASSIGN, 0);
}

ManaParser::ExpressionContext* ManaParser::DeclarationContext::expression() {
  return getRuleContext<ManaParser::ExpressionContext>(0);
}


size_t ManaParser::DeclarationContext::getRuleIndex() const {
  return ManaParser::RuleDeclaration;
}

void ManaParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void ManaParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

ManaParser::DeclarationContext* ManaParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, ManaParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(ManaParser::KEY_LET);
    setState(53);
    match(ManaParser::ID);
    setState(54);
    match(ManaParser::ASSIGN);
    setState(55);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ManaParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ManaParser::ArithmeticContext* ManaParser::ExpressionContext::arithmetic() {
  return getRuleContext<ManaParser::ArithmeticContext>(0);
}


size_t ManaParser::ExpressionContext::getRuleIndex() const {
  return ManaParser::RuleExpression;
}

void ManaParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void ManaParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

ManaParser::ExpressionContext* ManaParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 10, ManaParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    arithmetic(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

ManaParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ManaParser::LiteralContext* ManaParser::AtomContext::literal() {
  return getRuleContext<ManaParser::LiteralContext>(0);
}

tree::TerminalNode* ManaParser::AtomContext::ID() {
  return getToken(ManaParser::ID, 0);
}


size_t ManaParser::AtomContext::getRuleIndex() const {
  return ManaParser::RuleAtom;
}

void ManaParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void ManaParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}

ManaParser::AtomContext* ManaParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 12, ManaParser::RuleAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(61);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ManaParser::INT:
      case ManaParser::FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(59);
        literal();
        break;
      }

      case ManaParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(60);
        match(ManaParser::ID);
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

//----------------- LiteralContext ------------------------------------------------------------------

ManaParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ManaParser::LiteralContext::INT() {
  return getToken(ManaParser::INT, 0);
}

tree::TerminalNode* ManaParser::LiteralContext::FLOAT() {
  return getToken(ManaParser::FLOAT, 0);
}


size_t ManaParser::LiteralContext::getRuleIndex() const {
  return ManaParser::RuleLiteral;
}

void ManaParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void ManaParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

ManaParser::LiteralContext* ManaParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 14, ManaParser::RuleLiteral);
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
    setState(63);
    _la = _input->LA(1);
    if (!(_la == ManaParser::INT

    || _la == ManaParser::FLOAT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmeticContext ------------------------------------------------------------------

ManaParser::ArithmeticContext::ArithmeticContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ManaParser::ArithmeticContext::getRuleIndex() const {
  return ManaParser::RuleArithmetic;
}

void ManaParser::ArithmeticContext::copyFrom(ArithmeticContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SingleValueContext ------------------------------------------------------------------

ManaParser::LiteralContext* ManaParser::SingleValueContext::literal() {
  return getRuleContext<ManaParser::LiteralContext>(0);
}

ManaParser::SingleValueContext::SingleValueContext(ArithmeticContext *ctx) { copyFrom(ctx); }

void ManaParser::SingleValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleValue(this);
}
void ManaParser::SingleValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleValue(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<ManaParser::ArithmeticContext *> ManaParser::MulDivContext::arithmetic() {
  return getRuleContexts<ManaParser::ArithmeticContext>();
}

ManaParser::ArithmeticContext* ManaParser::MulDivContext::arithmetic(size_t i) {
  return getRuleContext<ManaParser::ArithmeticContext>(i);
}

tree::TerminalNode* ManaParser::MulDivContext::MUL() {
  return getToken(ManaParser::MUL, 0);
}

tree::TerminalNode* ManaParser::MulDivContext::DIV() {
  return getToken(ManaParser::DIV, 0);
}

ManaParser::MulDivContext::MulDivContext(ArithmeticContext *ctx) { copyFrom(ctx); }

void ManaParser::MulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDiv(this);
}
void ManaParser::MulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDiv(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<ManaParser::ArithmeticContext *> ManaParser::AddSubContext::arithmetic() {
  return getRuleContexts<ManaParser::ArithmeticContext>();
}

ManaParser::ArithmeticContext* ManaParser::AddSubContext::arithmetic(size_t i) {
  return getRuleContext<ManaParser::ArithmeticContext>(i);
}

tree::TerminalNode* ManaParser::AddSubContext::ADD() {
  return getToken(ManaParser::ADD, 0);
}

tree::TerminalNode* ManaParser::AddSubContext::SUB() {
  return getToken(ManaParser::SUB, 0);
}

ManaParser::AddSubContext::AddSubContext(ArithmeticContext *ctx) { copyFrom(ctx); }

void ManaParser::AddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSub(this);
}
void ManaParser::AddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSub(this);
}
//----------------- ParensExprContext ------------------------------------------------------------------

ManaParser::ArithmeticContext* ManaParser::ParensExprContext::arithmetic() {
  return getRuleContext<ManaParser::ArithmeticContext>(0);
}

ManaParser::ParensExprContext::ParensExprContext(ArithmeticContext *ctx) { copyFrom(ctx); }

void ManaParser::ParensExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParensExpr(this);
}
void ManaParser::ParensExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParensExpr(this);
}

ManaParser::ArithmeticContext* ManaParser::arithmetic() {
   return arithmetic(0);
}

ManaParser::ArithmeticContext* ManaParser::arithmetic(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ManaParser::ArithmeticContext *_localctx = _tracker.createInstance<ArithmeticContext>(_ctx, parentState);
  ManaParser::ArithmeticContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, ManaParser::RuleArithmetic, precedence);

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
    setState(71);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ManaParser::INT:
      case ManaParser::FLOAT: {
        _localctx = _tracker.createInstance<SingleValueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(66);
        literal();
        break;
      }

      case ManaParser::T__2: {
        _localctx = _tracker.createInstance<ParensExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(67);
        match(ManaParser::T__2);
        setState(68);
        arithmetic(0);
        setState(69);
        match(ManaParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(81);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(79);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ArithmeticContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleArithmetic);
          setState(73);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(74);
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
          setState(75);
          antlrcpp::downCast<MulDivContext *>(_localctx)->right = arithmetic(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ArithmeticContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleArithmetic);
          setState(76);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(77);
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
          setState(78);
          antlrcpp::downCast<AddSubContext *>(_localctx)->right = arithmetic(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(83);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
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
    case 8: return arithmeticSempred(antlrcpp::downCast<ArithmeticContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ManaParser::arithmeticSempred(ArithmeticContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

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
  "src", "statement", "scope", "function", "declaration", "expression", 
  "atom", "literal", "arithmetic"
};

std::vector<std::string> ManaParser::_literalNames = {
  "", "'{'", "'}'", "'('", "')'", "'fn'", "'let'", "'true'", "'false'", 
  "'i32'", "'f32'", "';'", "'='", "'*'", "'/'", "'+'", "'-'"
};

std::vector<std::string> ManaParser::_symbolicNames = {
  "", "", "", "", "", "KEY_FN", "KEY_LET", "KEY_TRUE", "KEY_FALSE", "TYPE_I32", 
  "TYPE_F32", "END", "ASSIGN", "MUL", "DIV", "ADD", "SUB", "ID", "INT", 
  "FLOAT", "NEWLINE", "WS"
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
       0x3, 0x17, 0x57, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x3, 0x2, 0x6, 0x2, 0x16, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x17, 0x3, 
       0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x23, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 
       0x7, 0x4, 0x27, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x2a, 0xb, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x6, 0x5, 0x33, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x34, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
       0x3, 0x8, 0x5, 0x8, 0x40, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x4a, 
       0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x7, 0xa, 0x52, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x55, 0xb, 0xa, 
       0x3, 0xa, 0x2, 0x3, 0x12, 0xb, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
       0x10, 0x12, 0x2, 0x5, 0x3, 0x2, 0x14, 0x15, 0x3, 0x2, 0xf, 0x10, 
       0x3, 0x2, 0x11, 0x12, 0x2, 0x5a, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x4, 
       0x22, 0x3, 0x2, 0x2, 0x2, 0x6, 0x24, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0xa, 0x36, 0x3, 0x2, 0x2, 0x2, 0xc, 0x3b, 0x3, 
       0x2, 0x2, 0x2, 0xe, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x10, 0x41, 0x3, 0x2, 
       0x2, 0x2, 0x12, 0x49, 0x3, 0x2, 0x2, 0x2, 0x14, 0x16, 0x5, 0x4, 0x3, 
       0x2, 0x15, 0x14, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x3, 0x2, 0x2, 0x2, 
       0x17, 0x15, 0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x3, 0x2, 0x2, 0x2, 0x18, 
       0x19, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x7, 0x2, 0x2, 0x3, 0x1a, 0x3, 
       0x3, 0x2, 0x2, 0x2, 0x1b, 0x23, 0x5, 0x6, 0x4, 0x2, 0x1c, 0x23, 0x5, 
       0x8, 0x5, 0x2, 0x1d, 0x23, 0x5, 0xa, 0x6, 0x2, 0x1e, 0x23, 0x5, 0xc, 
       0x7, 0x2, 0x1f, 0x23, 0x5, 0xe, 0x8, 0x2, 0x20, 0x23, 0x7, 0xd, 0x2, 
       0x2, 0x21, 0x23, 0x7, 0x16, 0x2, 0x2, 0x22, 0x1b, 0x3, 0x2, 0x2, 
       0x2, 0x22, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x22, 0x1d, 0x3, 0x2, 0x2, 0x2, 
       0x22, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x22, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x22, 
       0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 0x21, 0x3, 0x2, 0x2, 0x2, 0x23, 0x5, 
       0x3, 0x2, 0x2, 0x2, 0x24, 0x28, 0x7, 0x3, 0x2, 0x2, 0x25, 0x27, 0x5, 
       0x4, 0x3, 0x2, 0x26, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x2a, 0x3, 0x2, 
       0x2, 0x2, 0x28, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 0x2, 0x2, 
       0x2, 0x29, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 
       0x2b, 0x2c, 0x7, 0x4, 0x2, 0x2, 0x2c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2d, 
       0x2e, 0x7, 0x7, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x13, 0x2, 0x2, 0x2f, 
       0x30, 0x7, 0x5, 0x2, 0x2, 0x30, 0x32, 0x7, 0x6, 0x2, 0x2, 0x31, 0x33, 
       0x5, 0x6, 0x4, 0x2, 0x32, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 
       0x2, 0x2, 0x2, 0x34, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x3, 0x2, 
       0x2, 0x2, 0x35, 0x9, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 0x8, 0x2, 
       0x2, 0x37, 0x38, 0x7, 0x13, 0x2, 0x2, 0x38, 0x39, 0x7, 0xe, 0x2, 
       0x2, 0x39, 0x3a, 0x5, 0xc, 0x7, 0x2, 0x3a, 0xb, 0x3, 0x2, 0x2, 0x2, 
       0x3b, 0x3c, 0x5, 0x12, 0xa, 0x2, 0x3c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3d, 
       0x40, 0x5, 0x10, 0x9, 0x2, 0x3e, 0x40, 0x7, 0x13, 0x2, 0x2, 0x3f, 
       0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 0xf, 
       0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x9, 0x2, 0x2, 0x2, 0x42, 0x11, 0x3, 
       0x2, 0x2, 0x2, 0x43, 0x44, 0x8, 0xa, 0x1, 0x2, 0x44, 0x4a, 0x5, 0x10, 
       0x9, 0x2, 0x45, 0x46, 0x7, 0x5, 0x2, 0x2, 0x46, 0x47, 0x5, 0x12, 
       0xa, 0x2, 0x47, 0x48, 0x7, 0x6, 0x2, 0x2, 0x48, 0x4a, 0x3, 0x2, 0x2, 
       0x2, 0x49, 0x43, 0x3, 0x2, 0x2, 0x2, 0x49, 0x45, 0x3, 0x2, 0x2, 0x2, 
       0x4a, 0x53, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0xc, 0x6, 0x2, 0x2, 0x4c, 
       0x4d, 0x9, 0x3, 0x2, 0x2, 0x4d, 0x52, 0x5, 0x12, 0xa, 0x7, 0x4e, 
       0x4f, 0xc, 0x5, 0x2, 0x2, 0x4f, 0x50, 0x9, 0x4, 0x2, 0x2, 0x50, 0x52, 
       0x5, 0x12, 0xa, 0x6, 0x51, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4e, 
       0x3, 0x2, 0x2, 0x2, 0x52, 0x55, 0x3, 0x2, 0x2, 0x2, 0x53, 0x51, 0x3, 
       0x2, 0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 0x2, 0x54, 0x13, 0x3, 0x2, 
       0x2, 0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 0xa, 0x17, 0x22, 0x28, 
       0x34, 0x3f, 0x49, 0x51, 0x53, 
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
