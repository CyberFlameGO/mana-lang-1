/* parser/listener/visitor header section */

// Generated from ManaParser.g4 by ANTLR 4.9.2

/* parser precinclude section */


#include "ManaParser.h"


/* parser postinclude section */
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif


using namespace antlrcpp;
using namespace mana::parser;
using namespace antlr4;

ManaParser::ManaParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ManaParser::~ManaParser() {
  delete _interpreter;
}

std::string ManaParser::getGrammarFileName() const {
  return "ManaParser.g4";
}

const std::vector<std::string>& ManaParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ManaParser::getVocabulary() const {
  return _vocabulary;
}

/* parser definitions section */

//----------------- MainContext ------------------------------------------------------------------

ManaParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ManaParser::MainContext::EOF() {
  return getToken(ManaParser::EOF, 0);
}

std::vector<ManaParser::StatContext *> ManaParser::MainContext::stat() {
  return getRuleContexts<ManaParser::StatContext>();
}

ManaParser::StatContext* ManaParser::MainContext::stat(size_t i) {
  return getRuleContext<ManaParser::StatContext>(i);
}


size_t ManaParser::MainContext::getRuleIndex() const {
  return ManaParser::RuleMain;
}


ManaParser::MainContext* ManaParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 0, ManaParser::RuleMain);
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
    setState(27); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(26);
      stat();
      setState(29); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ManaParser::Return)
      | (1ULL << ManaParser::Continue)
      | (1ULL << ManaParser::INT)
      | (1ULL << ManaParser::ID)
      | (1ULL << ManaParser::OpenPar)
      | (1ULL << ManaParser::String))) != 0));
    setState(31);
    match(ManaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DivideContext ------------------------------------------------------------------

ManaParser::DivideContext::DivideContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ManaParser::DivideContext::ID() {
  return getToken(ManaParser::ID, 0);
}

ManaParser::And_Context* ManaParser::DivideContext::and_() {
  return getRuleContext<ManaParser::And_Context>(0);
}

tree::TerminalNode* ManaParser::DivideContext::GreaterThan() {
  return getToken(ManaParser::GreaterThan, 0);
}


size_t ManaParser::DivideContext::getRuleIndex() const {
  return ManaParser::RuleDivide;
}


ManaParser::DivideContext* ManaParser::divide() {
  DivideContext *_localctx = _tracker.createInstance<DivideContext>(_ctx, getState());
  enterRule(_localctx, 2, ManaParser::RuleDivide);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    match(ManaParser::ID);
    setState(37);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(34);
      and_();
      setState(35);
      match(ManaParser::GreaterThan);
      break;
    }

    default:
      break;
    }
    setState(39);

    if (!(doesItBlend())) throw FailedPredicateException(this, "doesItBlend()");
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- And_Context ------------------------------------------------------------------

ManaParser::And_Context::And_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ManaParser::And_Context::And() {
  return getToken(ManaParser::And, 0);
}


size_t ManaParser::And_Context::getRuleIndex() const {
  return ManaParser::RuleAnd_;
}


ManaParser::And_Context* ManaParser::and_() {
  And_Context *_localctx = _tracker.createInstance<And_Context>(_ctx, getState());
  enterRule(_localctx, 4, ManaParser::RuleAnd_);
   doInit(); 

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    match(ManaParser::And);
   _ctx->stop = _input->LT(-1);
     doAfter(); 
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConquerContext ------------------------------------------------------------------

ManaParser::ConquerContext::ConquerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ManaParser::DivideContext *> ManaParser::ConquerContext::divide() {
  return getRuleContexts<ManaParser::DivideContext>();
}

ManaParser::DivideContext* ManaParser::ConquerContext::divide(size_t i) {
  return getRuleContext<ManaParser::DivideContext>(i);
}

ManaParser::And_Context* ManaParser::ConquerContext::and_() {
  return getRuleContext<ManaParser::And_Context>(0);
}

tree::TerminalNode* ManaParser::ConquerContext::ID() {
  return getToken(ManaParser::ID, 0);
}

std::vector<tree::TerminalNode *> ManaParser::ConquerContext::LessThan() {
  return getTokens(ManaParser::LessThan);
}

tree::TerminalNode* ManaParser::ConquerContext::LessThan(size_t i) {
  return getToken(ManaParser::LessThan, i);
}


size_t ManaParser::ConquerContext::getRuleIndex() const {
  return ManaParser::RuleConquer;
}


ManaParser::ConquerContext* ManaParser::conquer() {
  ConquerContext *_localctx = _tracker.createInstance<ConquerContext>(_ctx, getState());
  enterRule(_localctx, 6, ManaParser::RuleConquer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(63);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(44); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(43);
        divide();
        setState(46); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == ManaParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(48);

      if (!(doesItBlend())) throw FailedPredicateException(this, "doesItBlend()");
      setState(49);
      and_();
       myAction(); 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(52);
      dynamic_cast<ConquerContext *>(_localctx)->idToken = match(ManaParser::ID);
      setState(60);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
      case 1 + 1: {
        setState(56);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ManaParser::LessThan) {
          setState(53);
          match(ManaParser::LessThan);
          setState(58);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(59);
        divide();
        break;
      }

      default:
        break;
      }
       (dynamic_cast<ConquerContext *>(_localctx)->idToken != nullptr ? dynamic_cast<ConquerContext *>(_localctx)->idToken->getText() : ""); 
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

//----------------- UnusedContext ------------------------------------------------------------------

ManaParser::UnusedContext::UnusedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ManaParser::UnusedContext::UnusedContext(ParserRuleContext *parent, size_t invokingState, double input)
  : ParserRuleContext(parent, invokingState) {
  this->input = input;
}

ManaParser::StatContext* ManaParser::UnusedContext::stat() {
  return getRuleContext<ManaParser::StatContext>(0);
}


size_t ManaParser::UnusedContext::getRuleIndex() const {
  return ManaParser::RuleUnused;
}


ManaParser::UnusedContext* ManaParser::unused(double input) {
  UnusedContext *_localctx = _tracker.createInstance<UnusedContext>(_ctx, getState(), input);
  enterRule(_localctx, 8, ManaParser::RuleUnused);
   doInit(); 

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif

    cleanUp();

    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    stat();
   _ctx->stop = _input->LT(-1);
     doAfter(); 
  }
  catch (...) {

      // Replaces the standard exception handling.

  }
  return _localctx;
}

//----------------- Unused2Context ------------------------------------------------------------------

ManaParser::Unused2Context::Unused2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ManaParser::Unused2Context::Semicolon() {
  return getTokens(ManaParser::Semicolon);
}

tree::TerminalNode* ManaParser::Unused2Context::Semicolon(size_t i) {
  return getToken(ManaParser::Semicolon, i);
}

std::vector<ManaParser::UnusedContext *> ManaParser::Unused2Context::unused() {
  return getRuleContexts<ManaParser::UnusedContext>();
}

ManaParser::UnusedContext* ManaParser::Unused2Context::unused(size_t i) {
  return getRuleContext<ManaParser::UnusedContext>(i);
}

tree::TerminalNode* ManaParser::Unused2Context::Colon() {
  return getToken(ManaParser::Colon, 0);
}

tree::TerminalNode* ManaParser::Unused2Context::Plus() {
  return getToken(ManaParser::Plus, 0);
}


size_t ManaParser::Unused2Context::getRuleIndex() const {
  return ManaParser::RuleUnused2;
}


ManaParser::Unused2Context* ManaParser::unused2() {
  Unused2Context *_localctx = _tracker.createInstance<Unused2Context>(_ctx, getState());
  enterRule(_localctx, 10, ManaParser::RuleUnused2);
  size_t _la = 0;

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
    setState(70); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(67);
              unused(1);
              setState(68);
              matchWildcard();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(72); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(75);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(74);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ManaParser::Colon)
        | (1ULL << ManaParser::Semicolon)
        | (1ULL << ManaParser::Plus))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
    setState(77);
    _la = _input->LA(1);
    if (_la == 0 || _la == Token::EOF || (_la == ManaParser::Semicolon)) {
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

//----------------- StatContext ------------------------------------------------------------------

ManaParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ManaParser::ExprContext *> ManaParser::StatContext::expr() {
  return getRuleContexts<ManaParser::ExprContext>();
}

ManaParser::ExprContext* ManaParser::StatContext::expr(size_t i) {
  return getRuleContext<ManaParser::ExprContext>(i);
}

tree::TerminalNode* ManaParser::StatContext::Equal() {
  return getToken(ManaParser::Equal, 0);
}

tree::TerminalNode* ManaParser::StatContext::Semicolon() {
  return getToken(ManaParser::Semicolon, 0);
}


size_t ManaParser::StatContext::getRuleIndex() const {
  return ManaParser::RuleStat;
}


ManaParser::StatContext* ManaParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 12, ManaParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(87);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(79);
      expr(0);
      setState(80);
      match(ManaParser::Equal);
      setState(81);
      expr(0);
      setState(82);
      match(ManaParser::Semicolon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(84);
      expr(0);
      setState(85);
      match(ManaParser::Semicolon);
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

ManaParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ManaParser::ExprContext::OpenPar() {
  return getToken(ManaParser::OpenPar, 0);
}

std::vector<ManaParser::ExprContext *> ManaParser::ExprContext::expr() {
  return getRuleContexts<ManaParser::ExprContext>();
}

ManaParser::ExprContext* ManaParser::ExprContext::expr(size_t i) {
  return getRuleContext<ManaParser::ExprContext>(i);
}

tree::TerminalNode* ManaParser::ExprContext::ClosePar() {
  return getToken(ManaParser::ClosePar, 0);
}

ManaParser::IdContext* ManaParser::ExprContext::id() {
  return getRuleContext<ManaParser::IdContext>(0);
}

ManaParser::FlowControlContext* ManaParser::ExprContext::flowControl() {
  return getRuleContext<ManaParser::FlowControlContext>(0);
}

tree::TerminalNode* ManaParser::ExprContext::INT() {
  return getToken(ManaParser::INT, 0);
}

tree::TerminalNode* ManaParser::ExprContext::String() {
  return getToken(ManaParser::String, 0);
}

tree::TerminalNode* ManaParser::ExprContext::Star() {
  return getToken(ManaParser::Star, 0);
}

tree::TerminalNode* ManaParser::ExprContext::Plus() {
  return getToken(ManaParser::Plus, 0);
}

tree::TerminalNode* ManaParser::ExprContext::QuestionMark() {
  return getToken(ManaParser::QuestionMark, 0);
}

tree::TerminalNode* ManaParser::ExprContext::Colon() {
  return getToken(ManaParser::Colon, 0);
}

tree::TerminalNode* ManaParser::ExprContext::Equal() {
  return getToken(ManaParser::Equal, 0);
}


size_t ManaParser::ExprContext::getRuleIndex() const {
  return ManaParser::RuleExpr;
}



ManaParser::ExprContext* ManaParser::expr() {
   return expr(0);
}

ManaParser::ExprContext* ManaParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ManaParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ManaParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, ManaParser::RuleExpr, precedence);

    

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
    setState(98);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ManaParser::OpenPar: {
        setState(90);
        match(ManaParser::OpenPar);
        setState(91);
        expr(0);
        setState(92);
        match(ManaParser::ClosePar);
        break;
      }

      case ManaParser::ID: {
        setState(94);
        dynamic_cast<ExprContext *>(_localctx)->identifier = id();
        break;
      }

      case ManaParser::Return:
      case ManaParser::Continue: {
        setState(95);
        flowControl();
        break;
      }

      case ManaParser::INT: {
        setState(96);
        match(ManaParser::INT);
        break;
      }

      case ManaParser::String: {
        setState(97);
        match(ManaParser::String);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(117);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(115);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(100);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(101);
          match(ManaParser::Star);
          setState(102);
          expr(10);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(103);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(104);
          match(ManaParser::Plus);
          setState(105);
          expr(9);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(106);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(107);
          match(ManaParser::QuestionMark);
          setState(108);
          expr(0);
          setState(109);
          match(ManaParser::Colon);
          setState(110);
          expr(6);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(112);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(113);
          match(ManaParser::Equal);
          setState(114);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(119);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FlowControlContext ------------------------------------------------------------------

ManaParser::FlowControlContext::FlowControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ManaParser::FlowControlContext::getRuleIndex() const {
  return ManaParser::RuleFlowControl;
}

void ManaParser::FlowControlContext::copyFrom(FlowControlContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ReturnContext ------------------------------------------------------------------

tree::TerminalNode* ManaParser::ReturnContext::Return() {
  return getToken(ManaParser::Return, 0);
}

ManaParser::ExprContext* ManaParser::ReturnContext::expr() {
  return getRuleContext<ManaParser::ExprContext>(0);
}

ManaParser::ReturnContext::ReturnContext(FlowControlContext *ctx) { copyFrom(ctx); }


//----------------- ContinueContext ------------------------------------------------------------------

tree::TerminalNode* ManaParser::ContinueContext::Continue() {
  return getToken(ManaParser::Continue, 0);
}

ManaParser::ContinueContext::ContinueContext(FlowControlContext *ctx) { copyFrom(ctx); }


ManaParser::FlowControlContext* ManaParser::flowControl() {
  FlowControlContext *_localctx = _tracker.createInstance<FlowControlContext>(_ctx, getState());
  enterRule(_localctx, 16, ManaParser::RuleFlowControl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(123);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ManaParser::Return: {
        _localctx = dynamic_cast<FlowControlContext *>(_tracker.createInstance<ManaParser::ReturnContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(120);
        match(ManaParser::Return);
        setState(121);
        expr(0);
        break;
      }

      case ManaParser::Continue: {
        _localctx = dynamic_cast<FlowControlContext *>(_tracker.createInstance<ManaParser::ContinueContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(122);
        match(ManaParser::Continue);
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

//----------------- IdContext ------------------------------------------------------------------

ManaParser::IdContext::IdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ManaParser::IdContext::ID() {
  return getToken(ManaParser::ID, 0);
}


size_t ManaParser::IdContext::getRuleIndex() const {
  return ManaParser::RuleId;
}


ManaParser::IdContext* ManaParser::id() {
  IdContext *_localctx = _tracker.createInstance<IdContext>(_ctx, getState());
  enterRule(_localctx, 18, ManaParser::RuleId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(ManaParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayContext ------------------------------------------------------------------

ManaParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ManaParser::ArrayContext::OpenCurly() {
  return getToken(ManaParser::OpenCurly, 0);
}

tree::TerminalNode* ManaParser::ArrayContext::CloseCurly() {
  return getToken(ManaParser::CloseCurly, 0);
}

std::vector<tree::TerminalNode *> ManaParser::ArrayContext::INT() {
  return getTokens(ManaParser::INT);
}

tree::TerminalNode* ManaParser::ArrayContext::INT(size_t i) {
  return getToken(ManaParser::INT, i);
}

std::vector<tree::TerminalNode *> ManaParser::ArrayContext::Comma() {
  return getTokens(ManaParser::Comma);
}

tree::TerminalNode* ManaParser::ArrayContext::Comma(size_t i) {
  return getToken(ManaParser::Comma, i);
}


size_t ManaParser::ArrayContext::getRuleIndex() const {
  return ManaParser::RuleArray;
}


ManaParser::ArrayContext* ManaParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 20, ManaParser::RuleArray);
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
    setState(127);
    match(ManaParser::OpenCurly);
    setState(128);
    dynamic_cast<ArrayContext *>(_localctx)->intToken = match(ManaParser::INT);
    dynamic_cast<ArrayContext *>(_localctx)->el.push_back(dynamic_cast<ArrayContext *>(_localctx)->intToken);
    setState(133);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ManaParser::Comma) {
      setState(129);
      match(ManaParser::Comma);
      setState(130);
      dynamic_cast<ArrayContext *>(_localctx)->intToken = match(ManaParser::INT);
      dynamic_cast<ArrayContext *>(_localctx)->el.push_back(dynamic_cast<ArrayContext *>(_localctx)->intToken);
      setState(135);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(136);
    match(ManaParser::CloseCurly);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdarrayContext ------------------------------------------------------------------

ManaParser::IdarrayContext::IdarrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ManaParser::IdarrayContext::OpenCurly() {
  return getToken(ManaParser::OpenCurly, 0);
}

tree::TerminalNode* ManaParser::IdarrayContext::CloseCurly() {
  return getToken(ManaParser::CloseCurly, 0);
}

std::vector<ManaParser::IdContext *> ManaParser::IdarrayContext::id() {
  return getRuleContexts<ManaParser::IdContext>();
}

ManaParser::IdContext* ManaParser::IdarrayContext::id(size_t i) {
  return getRuleContext<ManaParser::IdContext>(i);
}

std::vector<tree::TerminalNode *> ManaParser::IdarrayContext::Comma() {
  return getTokens(ManaParser::Comma);
}

tree::TerminalNode* ManaParser::IdarrayContext::Comma(size_t i) {
  return getToken(ManaParser::Comma, i);
}


size_t ManaParser::IdarrayContext::getRuleIndex() const {
  return ManaParser::RuleIdarray;
}


ManaParser::IdarrayContext* ManaParser::idarray() {
  IdarrayContext *_localctx = _tracker.createInstance<IdarrayContext>(_ctx, getState());
  enterRule(_localctx, 22, ManaParser::RuleIdarray);
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
    setState(138);
    match(ManaParser::OpenCurly);
    setState(139);
    dynamic_cast<IdarrayContext *>(_localctx)->idContext = id();
    dynamic_cast<IdarrayContext *>(_localctx)->element.push_back(dynamic_cast<IdarrayContext *>(_localctx)->idContext);
    setState(144);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ManaParser::Comma) {
      setState(140);
      match(ManaParser::Comma);
      setState(141);
      dynamic_cast<IdarrayContext *>(_localctx)->idContext = id();
      dynamic_cast<IdarrayContext *>(_localctx)->element.push_back(dynamic_cast<IdarrayContext *>(_localctx)->idContext);
      setState(146);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(147);
    match(ManaParser::CloseCurly);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnyContext ------------------------------------------------------------------

ManaParser::AnyContext::AnyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ManaParser::AnyContext::getRuleIndex() const {
  return ManaParser::RuleAny;
}


ManaParser::AnyContext* ManaParser::any() {
  AnyContext *_localctx = _tracker.createInstance<AnyContext>(_ctx, getState());
  enterRule(_localctx, 24, ManaParser::RuleAny);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    dynamic_cast<AnyContext *>(_localctx)->t = matchWildcard();
   
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
    case 1: return divideSempred(dynamic_cast<DivideContext *>(context), predicateIndex);
    case 3: return conquerSempred(dynamic_cast<ConquerContext *>(context), predicateIndex);
    case 7: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ManaParser::divideSempred(DivideContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return doesItBlend();

  default:
    break;
  }
  return true;
}

bool ManaParser::conquerSempred(ConquerContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return doesItBlend();

  default:
    break;
  }
  return true;
}

bool ManaParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 9);
    case 3: return precpred(_ctx, 8);
    case 4: return precpred(_ctx, 6);
    case 5: return precpred(_ctx, 5);

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
  "main", "divide", "and_", "conquer", "unused", "unused2", "stat", "expr", 
  "flowControl", "id", "array", "idarray", "any"
};

std::vector<std::string> ManaParser::_literalNames = {
  "", "", "'return'", "'continue'", "", "", "", "'<'", "'>'", "'='", "'and'", 
  "':'", "';'", "'+'", "'-'", "'*'", "'('", "')'", "'{'", "'}'", "'\u003F'", 
  "','", "", "", "", "", "", "", "'.'", "'..'", "'$'", "'&'"
};

std::vector<std::string> ManaParser::_symbolicNames = {
  "", "DUMMY", "Return", "Continue", "INT", "Digit", "ID", "LessThan", "GreaterThan", 
  "Equal", "And", "Colon", "Semicolon", "Plus", "Minus", "Star", "OpenPar", 
  "ClosePar", "OpenCurly", "CloseCurly", "QuestionMark", "Comma", "String", 
  "Foo", "Bar", "Any", "Comment", "WS", "Dot", "DotDot", "Dollar", "Ampersand"
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
       0x3, 0x21, 0x9a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x3, 0x2, 0x6, 0x2, 0x1e, 0xa, 0x2, 0xd, 0x2, 0xe, 
       0x2, 0x1f, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x5, 0x3, 0x28, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x5, 0x6, 0x5, 0x2f, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x30, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 
       0x5, 0x39, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x3c, 0xb, 0x5, 0x3, 0x5, 
       0x5, 0x5, 0x3f, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0x42, 0xa, 0x5, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x6, 0x7, 0x49, 0xa, 
       0x7, 0xd, 0x7, 0xe, 0x7, 0x4a, 0x3, 0x7, 0x5, 0x7, 0x4e, 0xa, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x5a, 0xa, 0x8, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x65, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x7, 0x9, 0x76, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x79, 0xb, 0x9, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x7e, 0xa, 0xa, 0x3, 0xb, 0x3, 
       0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x86, 0xa, 
       0xc, 0xc, 0xc, 0xe, 0xc, 0x89, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x91, 0xa, 0xd, 0xc, 
       0xd, 0xe, 0xd, 0x94, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0x3e, 0x3, 0x10, 0xf, 0x2, 0x4, 0x6, 0x8, 0xa, 
       0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x2, 0x4, 0x3, 0x2, 
       0xd, 0xf, 0x3, 0x2, 0xe, 0xe, 0x2, 0xa1, 0x2, 0x1d, 0x3, 0x2, 0x2, 
       0x2, 0x4, 0x23, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2b, 0x3, 0x2, 0x2, 0x2, 
       0x8, 0x41, 0x3, 0x2, 0x2, 0x2, 0xa, 0x43, 0x3, 0x2, 0x2, 0x2, 0xc, 
       0x48, 0x3, 0x2, 0x2, 0x2, 0xe, 0x59, 0x3, 0x2, 0x2, 0x2, 0x10, 0x64, 
       0x3, 0x2, 0x2, 0x2, 0x12, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x14, 0x7f, 0x3, 
       0x2, 0x2, 0x2, 0x16, 0x81, 0x3, 0x2, 0x2, 0x2, 0x18, 0x8c, 0x3, 0x2, 
       0x2, 0x2, 0x1a, 0x97, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1e, 0x5, 0xe, 0x8, 
       0x2, 0x1d, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x3, 0x2, 0x2, 0x2, 
       0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 0x2, 0x2, 0x2, 0x20, 
       0x21, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 0x2, 0x2, 0x3, 0x22, 0x3, 
       0x3, 0x2, 0x2, 0x2, 0x23, 0x27, 0x7, 0x8, 0x2, 0x2, 0x24, 0x25, 0x5, 
       0x6, 0x4, 0x2, 0x25, 0x26, 0x7, 0xa, 0x2, 0x2, 0x26, 0x28, 0x3, 0x2, 
       0x2, 0x2, 0x27, 0x24, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 
       0x2, 0x28, 0x29, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x6, 0x3, 0x2, 0x2, 
       0x2a, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0xc, 0x2, 0x2, 0x2c, 
       0x7, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2f, 0x5, 0x4, 0x3, 0x2, 0x2e, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2e, 0x3, 
       0x2, 0x2, 0x2, 0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 0x31, 0x42, 0x3, 0x2, 
       0x2, 0x2, 0x32, 0x33, 0x6, 0x5, 0x3, 0x2, 0x33, 0x34, 0x5, 0x6, 0x4, 
       0x2, 0x34, 0x35, 0x8, 0x5, 0x1, 0x2, 0x35, 0x42, 0x3, 0x2, 0x2, 0x2, 
       0x36, 0x3e, 0x7, 0x8, 0x2, 0x2, 0x37, 0x39, 0x7, 0x9, 0x2, 0x2, 0x38, 
       0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 
       0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3d, 0x3, 
       0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3f, 0x5, 0x4, 
       0x3, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3a, 0x3, 0x2, 0x2, 
       0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 0x8, 0x5, 0x1, 0x2, 
       0x41, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x41, 0x32, 0x3, 0x2, 0x2, 0x2, 0x41, 
       0x36, 0x3, 0x2, 0x2, 0x2, 0x42, 0x9, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 
       0x5, 0xe, 0x8, 0x2, 0x44, 0xb, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x5, 
       0xa, 0x6, 0x2, 0x46, 0x47, 0xb, 0x2, 0x2, 0x2, 0x47, 0x49, 0x3, 0x2, 
       0x2, 0x2, 0x48, 0x45, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 
       0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 
       0x4b, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4e, 0x9, 0x2, 0x2, 0x2, 0x4d, 
       0x4c, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0xa, 0x3, 0x2, 0x2, 0x50, 0xd, 0x3, 
       0x2, 0x2, 0x2, 0x51, 0x52, 0x5, 0x10, 0x9, 0x2, 0x52, 0x53, 0x7, 
       0xb, 0x2, 0x2, 0x53, 0x54, 0x5, 0x10, 0x9, 0x2, 0x54, 0x55, 0x7, 
       0xe, 0x2, 0x2, 0x55, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x5, 0x10, 
       0x9, 0x2, 0x57, 0x58, 0x7, 0xe, 0x2, 0x2, 0x58, 0x5a, 0x3, 0x2, 0x2, 
       0x2, 0x59, 0x51, 0x3, 0x2, 0x2, 0x2, 0x59, 0x56, 0x3, 0x2, 0x2, 0x2, 
       0x5a, 0xf, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x8, 0x9, 0x1, 0x2, 0x5c, 
       0x5d, 0x7, 0x12, 0x2, 0x2, 0x5d, 0x5e, 0x5, 0x10, 0x9, 0x2, 0x5e, 
       0x5f, 0x7, 0x13, 0x2, 0x2, 0x5f, 0x65, 0x3, 0x2, 0x2, 0x2, 0x60, 
       0x65, 0x5, 0x14, 0xb, 0x2, 0x61, 0x65, 0x5, 0x12, 0xa, 0x2, 0x62, 
       0x65, 0x7, 0x6, 0x2, 0x2, 0x63, 0x65, 0x7, 0x18, 0x2, 0x2, 0x64, 
       0x5b, 0x3, 0x2, 0x2, 0x2, 0x64, 0x60, 0x3, 0x2, 0x2, 0x2, 0x64, 0x61, 
       0x3, 0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x63, 0x3, 
       0x2, 0x2, 0x2, 0x65, 0x77, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0xc, 0xb, 
       0x2, 0x2, 0x67, 0x68, 0x7, 0x11, 0x2, 0x2, 0x68, 0x76, 0x5, 0x10, 
       0x9, 0xc, 0x69, 0x6a, 0xc, 0xa, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0xf, 0x2, 
       0x2, 0x6b, 0x76, 0x5, 0x10, 0x9, 0xb, 0x6c, 0x6d, 0xc, 0x8, 0x2, 
       0x2, 0x6d, 0x6e, 0x7, 0x16, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x10, 0x9, 
       0x2, 0x6f, 0x70, 0x7, 0xd, 0x2, 0x2, 0x70, 0x71, 0x5, 0x10, 0x9, 
       0x8, 0x71, 0x76, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0xc, 0x7, 0x2, 0x2, 
       0x73, 0x74, 0x7, 0xb, 0x2, 0x2, 0x74, 0x76, 0x5, 0x10, 0x9, 0x7, 
       0x75, 0x66, 0x3, 0x2, 0x2, 0x2, 0x75, 0x69, 0x3, 0x2, 0x2, 0x2, 0x75, 
       0x6c, 0x3, 0x2, 0x2, 0x2, 0x75, 0x72, 0x3, 0x2, 0x2, 0x2, 0x76, 0x79, 
       0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 
       0x2, 0x2, 0x2, 0x78, 0x11, 0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 
       0x2, 0x2, 0x7a, 0x7b, 0x7, 0x4, 0x2, 0x2, 0x7b, 0x7e, 0x5, 0x10, 
       0x9, 0x2, 0x7c, 0x7e, 0x7, 0x5, 0x2, 0x2, 0x7d, 0x7a, 0x3, 0x2, 0x2, 
       0x2, 0x7d, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x13, 0x3, 0x2, 0x2, 0x2, 
       0x7f, 0x80, 0x7, 0x8, 0x2, 0x2, 0x80, 0x15, 0x3, 0x2, 0x2, 0x2, 0x81, 
       0x82, 0x7, 0x14, 0x2, 0x2, 0x82, 0x87, 0x7, 0x6, 0x2, 0x2, 0x83, 
       0x84, 0x7, 0x17, 0x2, 0x2, 0x84, 0x86, 0x7, 0x6, 0x2, 0x2, 0x85, 
       0x83, 0x3, 0x2, 0x2, 0x2, 0x86, 0x89, 0x3, 0x2, 0x2, 0x2, 0x87, 0x85, 
       0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8a, 0x3, 
       0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x15, 
       0x2, 0x2, 0x8b, 0x17, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x14, 
       0x2, 0x2, 0x8d, 0x92, 0x5, 0x14, 0xb, 0x2, 0x8e, 0x8f, 0x7, 0x17, 
       0x2, 0x2, 0x8f, 0x91, 0x5, 0x14, 0xb, 0x2, 0x90, 0x8e, 0x3, 0x2, 
       0x2, 0x2, 0x91, 0x94, 0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 
       0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x95, 0x3, 0x2, 0x2, 0x2, 
       0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x7, 0x15, 0x2, 0x2, 
       0x96, 0x19, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0xb, 0x2, 0x2, 0x2, 0x98, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0x11, 0x1f, 0x27, 0x30, 0x3a, 0x3e, 0x41, 
       0x4a, 0x4d, 0x59, 0x64, 0x75, 0x77, 0x7d, 0x87, 0x92, 
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
