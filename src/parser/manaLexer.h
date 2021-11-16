
// Generated from /home/nyx/dev/mana/mana-lang/src/parser/grammar/mana.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"


namespace mana {


class  manaLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, KEY_FN = 3, KEY_LET = 4, TYPE_I32 = 5, ASSIGN = 6, 
    MUL = 7, DIV = 8, ADD = 9, SUB = 10, ID = 11, INT = 12, NEWLINE = 13, 
    WS = 14
  };

  explicit manaLexer(antlr4::CharStream *input);
  ~manaLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace mana
