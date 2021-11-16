
// Generated from /home/nyx/dev/mana/mana-lang/src/parser/grammar/Mana.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  ManaParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, KEY_FN = 3, KEY_LET = 4, TYPE_I32 = 5, ASSIGN = 6, 
    MUL = 7, DIV = 8, ADD = 9, SUB = 10, ID = 11, INT = 12, NEWLINE = 13, 
    WS = 14
  };

  enum {
    RuleProg = 0, RuleStmt = 1, RuleExpr = 2, RuleArithm = 3
  };

  explicit ManaParser(antlr4::TokenStream *input);
  ~ManaParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class StmtContext;
  class ExprContext;
  class ArithmContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StmtContext() = default;
    void copyFrom(StmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BlankContext : public StmtContext {
  public:
    BlankContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *NEWLINE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignContext : public StmtContext {
  public:
    AssignContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrintExprContext : public StmtContext {
  public:
    PrintExprContext(StmtContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StmtContext* stmt();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArithmContext *arithm();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  ArithmContext : public antlr4::ParserRuleContext {
  public:
    ArithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ArithmContext() = default;
    void copyFrom(ArithmContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IdentifierContext : public ArithmContext {
  public:
    IdentifierContext(ArithmContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulDivContext : public ArithmContext {
  public:
    MulDivContext(ArithmContext *ctx);

    ManaParser::ArithmContext *left = nullptr;
    antlr4::Token *op = nullptr;
    ManaParser::ArithmContext *right = nullptr;
    std::vector<ArithmContext *> arithm();
    ArithmContext* arithm(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddSubContext : public ArithmContext {
  public:
    AddSubContext(ArithmContext *ctx);

    ManaParser::ArithmContext *left = nullptr;
    antlr4::Token *op = nullptr;
    ManaParser::ArithmContext *right = nullptr;
    std::vector<ArithmContext *> arithm();
    ArithmContext* arithm(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParensExprContext : public ArithmContext {
  public:
    ParensExprContext(ArithmContext *ctx);

    ArithmContext *arithm();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntContext : public ArithmContext {
  public:
    IntContext(ArithmContext *ctx);

    antlr4::tree::TerminalNode *INT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ArithmContext* arithm();
  ArithmContext* arithm(int precedence);

  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool arithmSempred(ArithmContext *_localctx, size_t predicateIndex);

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

