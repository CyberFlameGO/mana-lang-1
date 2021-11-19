
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


//----------------- FileContext ------------------------------------------------------------------

ManaParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ManaParser::FileContext::EOF() {
  return getToken(ManaParser::EOF, 0);
}

std::vector<ManaParser::StatementContext *> ManaParser::FileContext::statement() {
  return getRuleContexts<ManaParser::StatementContext>();
}

ManaParser::StatementContext* ManaParser::FileContext::statement(size_t i) {
  return getRuleContext<ManaParser::StatementContext>(i);
}


size_t ManaParser::FileContext::getRuleIndex() const {
  return ManaParser::RuleFile;
}

void ManaParser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void ManaParser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}

ManaParser::FileContext* ManaParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, ManaParser::RuleFile);
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
    setState(13); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(12);
      statement();
      setState(15); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ManaParser::T__0)
      | (1ULL << ManaParser::T__2)
      | (1ULL << ManaParser::KEY_FN)
      | (1ULL << ManaParser::END)
      | (1ULL << ManaParser::ID)
      | (1ULL << ManaParser::INT)
      | (1ULL << ManaParser::NEWLINE))) != 0));
    setState(17);
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

ManaParser::ExpressionContext* ManaParser::StatementContext::expression() {
  return getRuleContext<ManaParser::ExpressionContext>(0);
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
    setState(24);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ManaParser::T__2: {
        enterOuterAlt(_localctx, 1);
        setState(19);
        scope();
        break;
      }

      case ManaParser::KEY_FN: {
        enterOuterAlt(_localctx, 2);
        setState(20);
        function();
        break;
      }

      case ManaParser::T__0:
      case ManaParser::ID:
      case ManaParser::INT: {
        enterOuterAlt(_localctx, 3);
        setState(21);
        expression();
        break;
      }

      case ManaParser::END: {
        enterOuterAlt(_localctx, 4);
        setState(22);
        match(ManaParser::END);
        break;
      }

      case ManaParser::NEWLINE: {
        enterOuterAlt(_localctx, 5);
        setState(23);
        match(ManaParser::NEWLINE);
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
  enterRule(_localctx, 4, ManaParser::RuleFunction);

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
    setState(26);
    match(ManaParser::KEY_FN);
    setState(27);
    match(ManaParser::ID);
    setState(28);
    match(ManaParser::T__0);
    setState(29);
    match(ManaParser::T__1);
    setState(31); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(30);
              scope();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(33); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
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
  enterRule(_localctx, 6, ManaParser::RuleExpression);

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
    arithmetic(0);
   
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
  enterRule(_localctx, 8, ManaParser::RuleScope);
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
    setState(37);
    match(ManaParser::T__2);
    setState(41);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ManaParser::T__0)
      | (1ULL << ManaParser::T__2)
      | (1ULL << ManaParser::KEY_FN)
      | (1ULL << ManaParser::END)
      | (1ULL << ManaParser::ID)
      | (1ULL << ManaParser::INT)
      | (1ULL << ManaParser::NEWLINE))) != 0)) {
      setState(38);
      statement();
      setState(43);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(44);
    match(ManaParser::T__3);
   
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

//----------------- IdentifierContext ------------------------------------------------------------------

tree::TerminalNode* ManaParser::IdentifierContext::ID() {
  return getToken(ManaParser::ID, 0);
}

ManaParser::IdentifierContext::IdentifierContext(ArithmeticContext *ctx) { copyFrom(ctx); }

void ManaParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}
void ManaParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
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
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* ManaParser::IntContext::INT() {
  return getToken(ManaParser::INT, 0);
}

ManaParser::IntContext::IntContext(ArithmeticContext *ctx) { copyFrom(ctx); }

void ManaParser::IntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt(this);
}
void ManaParser::IntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ManaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt(this);
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
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, ManaParser::RuleArithmetic, precedence);

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
    setState(53);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ManaParser::INT: {
        _localctx = _tracker.createInstance<IntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(47);
        match(ManaParser::INT);
        break;
      }

      case ManaParser::ID: {
        _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(48);
        match(ManaParser::ID);
        break;
      }

      case ManaParser::T__0: {
        _localctx = _tracker.createInstance<ParensExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(49);
        match(ManaParser::T__0);
        setState(50);
        arithmetic(0);
        setState(51);
        match(ManaParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(63);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(61);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ArithmeticContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleArithmetic);
          setState(55);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(56);
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
          setState(57);
          antlrcpp::downCast<MulDivContext *>(_localctx)->right = arithmetic(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ArithmeticContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleArithmetic);
          setState(58);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(59);
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
          setState(60);
          antlrcpp::downCast<AddSubContext *>(_localctx)->right = arithmetic(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(65);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
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
    case 5: return arithmeticSempred(antlrcpp::downCast<ArithmeticContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ManaParser::arithmeticSempred(ArithmeticContext *_localctx, size_t predicateIndex) {
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
  "file", "statement", "function", "expression", "scope", "arithmetic"
};

std::vector<std::string> ManaParser::_literalNames = {
  "", "'('", "')'", "'{'", "'}'", "'fn'", "'let'", "'i32'", "';'", "'='", 
  "'*'", "'/'", "'+'", "'-'"
};

std::vector<std::string> ManaParser::_symbolicNames = {
  "", "", "", "", "", "KEY_FN", "KEY_LET", "TYPE_I32", "END", "ASSIGN", 
  "MUL", "DIV", "ADD", "SUB", "ID", "INT", "NEWLINE", "WS"
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
       0x3, 0x13, 0x45, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x3, 0x2, 0x6, 0x2, 0x10, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x11, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x5, 0x3, 0x1b, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x6, 0x4, 0x22, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x23, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x2a, 0xa, 0x6, 
       0xc, 0x6, 0xe, 0x6, 0x2d, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
       0x7, 0x38, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x7, 0x7, 0x40, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x43, 
       0xb, 0x7, 0x3, 0x7, 0x2, 0x3, 0xc, 0x8, 0x2, 0x4, 0x6, 0x8, 0xa, 
       0xc, 0x2, 0x4, 0x3, 0x2, 0xc, 0xd, 0x3, 0x2, 0xe, 0xf, 0x2, 0x49, 
       0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x6, 
       0x1c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x25, 0x3, 0x2, 0x2, 0x2, 0xa, 0x27, 
       0x3, 0x2, 0x2, 0x2, 0xc, 0x37, 0x3, 0x2, 0x2, 0x2, 0xe, 0x10, 0x5, 
       0x4, 0x3, 0x2, 0xf, 0xe, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x3, 0x2, 
       0x2, 0x2, 0x11, 0xf, 0x3, 0x2, 0x2, 0x2, 0x11, 0x12, 0x3, 0x2, 0x2, 
       0x2, 0x12, 0x13, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x7, 0x2, 0x2, 0x3, 
       0x14, 0x3, 0x3, 0x2, 0x2, 0x2, 0x15, 0x1b, 0x5, 0xa, 0x6, 0x2, 0x16, 
       0x1b, 0x5, 0x6, 0x4, 0x2, 0x17, 0x1b, 0x5, 0x8, 0x5, 0x2, 0x18, 0x1b, 
       0x7, 0xa, 0x2, 0x2, 0x19, 0x1b, 0x7, 0x12, 0x2, 0x2, 0x1a, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0x1a, 0x16, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x17, 0x3, 
       0x2, 0x2, 0x2, 0x1a, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x19, 0x3, 0x2, 
       0x2, 0x2, 0x1b, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x7, 0x2, 
       0x2, 0x1d, 0x1e, 0x7, 0x10, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x3, 0x2, 
       0x2, 0x1f, 0x21, 0x7, 0x4, 0x2, 0x2, 0x20, 0x22, 0x5, 0xa, 0x6, 0x2, 
       0x21, 0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 
       0x21, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x3, 0x2, 0x2, 0x2, 0x24, 0x7, 
       0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x5, 0xc, 0x7, 0x2, 0x26, 0x9, 0x3, 
       0x2, 0x2, 0x2, 0x27, 0x2b, 0x7, 0x5, 0x2, 0x2, 0x28, 0x2a, 0x5, 0x4, 
       0x3, 0x2, 0x29, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2d, 0x3, 0x2, 0x2, 
       0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x3, 0x2, 0x2, 0x2, 
       0x2c, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2e, 
       0x2f, 0x7, 0x6, 0x2, 0x2, 0x2f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 
       0x8, 0x7, 0x1, 0x2, 0x31, 0x38, 0x7, 0x11, 0x2, 0x2, 0x32, 0x38, 
       0x7, 0x10, 0x2, 0x2, 0x33, 0x34, 0x7, 0x3, 0x2, 0x2, 0x34, 0x35, 
       0x5, 0xc, 0x7, 0x2, 0x35, 0x36, 0x7, 0x4, 0x2, 0x2, 0x36, 0x38, 0x3, 
       0x2, 0x2, 0x2, 0x37, 0x30, 0x3, 0x2, 0x2, 0x2, 0x37, 0x32, 0x3, 0x2, 
       0x2, 0x2, 0x37, 0x33, 0x3, 0x2, 0x2, 0x2, 0x38, 0x41, 0x3, 0x2, 0x2, 
       0x2, 0x39, 0x3a, 0xc, 0x7, 0x2, 0x2, 0x3a, 0x3b, 0x9, 0x2, 0x2, 0x2, 
       0x3b, 0x40, 0x5, 0xc, 0x7, 0x8, 0x3c, 0x3d, 0xc, 0x6, 0x2, 0x2, 0x3d, 
       0x3e, 0x9, 0x3, 0x2, 0x2, 0x3e, 0x40, 0x5, 0xc, 0x7, 0x7, 0x3f, 0x39, 
       0x3, 0x2, 0x2, 0x2, 0x3f, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x40, 0x43, 0x3, 
       0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 
       0x2, 0x2, 0x42, 0xd, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 
       0x2, 0x9, 0x11, 0x1a, 0x23, 0x2b, 0x37, 0x3f, 0x41, 
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
