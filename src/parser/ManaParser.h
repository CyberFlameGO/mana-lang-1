
// Generated from /home/nyx/dev/mana/mana-lang/src/grammar/Mana.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  ManaParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, KEY_FN = 5, KEY_LET = 6, TYPE_I32 = 7, 
    END = 8, ASSIGN = 9, MUL = 10, DIV = 11, ADD = 12, SUB = 13, ID = 14, 
    INT = 15, NEWLINE = 16, WS = 17
  };

  enum {
    RuleSrc = 0, RuleStatement = 1, RuleFunction = 2, RuleExpression = 3, 
    RuleScope = 4, RuleArithmetic = 5
  };

  explicit ManaParser(antlr4::TokenStream *input);
  ~ManaParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class SrcContext;
  class StatementContext;
  class FunctionContext;
  class ExpressionContext;
  class ScopeContext;
  class ArithmeticContext; 

  class  SrcContext : public antlr4::ParserRuleContext {
  public:
    SrcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SrcContext* src();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScopeContext *scope();
    FunctionContext *function();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_FN();
    antlr4::tree::TerminalNode *ID();
    std::vector<ScopeContext *> scope();
    ScopeContext* scope(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionContext* function();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArithmeticContext *arithmetic();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  ScopeContext : public antlr4::ParserRuleContext {
  public:
    ScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScopeContext* scope();

  class  ArithmeticContext : public antlr4::ParserRuleContext {
  public:
    ArithmeticContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ArithmeticContext() = default;
    void copyFrom(ArithmeticContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IdentifierContext : public ArithmeticContext {
  public:
    IdentifierContext(ArithmeticContext *ctx);

    antlr4::tree::TerminalNode *ID();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MulDivContext : public ArithmeticContext {
  public:
    MulDivContext(ArithmeticContext *ctx);

    ManaParser::ArithmeticContext *left = nullptr;
    antlr4::Token *op = nullptr;
    ManaParser::ArithmeticContext *right = nullptr;
    std::vector<ArithmeticContext *> arithmetic();
    ArithmeticContext* arithmetic(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AddSubContext : public ArithmeticContext {
  public:
    AddSubContext(ArithmeticContext *ctx);

    ManaParser::ArithmeticContext *left = nullptr;
    antlr4::Token *op = nullptr;
    ManaParser::ArithmeticContext *right = nullptr;
    std::vector<ArithmeticContext *> arithmetic();
    ArithmeticContext* arithmetic(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ParensExprContext : public ArithmeticContext {
  public:
    ParensExprContext(ArithmeticContext *ctx);

    ArithmeticContext *arithmetic();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IntContext : public ArithmeticContext {
  public:
    IntContext(ArithmeticContext *ctx);

    antlr4::tree::TerminalNode *INT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ArithmeticContext* arithmetic();
  ArithmeticContext* arithmetic(int precedence);

  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool arithmeticSempred(ArithmeticContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

