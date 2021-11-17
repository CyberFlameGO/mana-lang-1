
// Generated from /home/nyx/dev/mana/mana-lang/src/parser/grammar/Mana.g4 by ANTLR 4.9.3


#include "ManaLexer.h"


using namespace antlr4;


ManaLexer::ManaLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ManaLexer::~ManaLexer() {
  delete _interpreter;
}

std::string ManaLexer::getGrammarFileName() const {
  return "Mana.g4";
}

const std::vector<std::string>& ManaLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& ManaLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& ManaLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& ManaLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& ManaLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> ManaLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& ManaLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> ManaLexer::_decisionToDFA;
atn::PredictionContextCache ManaLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ManaLexer::_atn;
std::vector<uint16_t> ManaLexer::_serializedATN;

std::vector<std::string> ManaLexer::_ruleNames = {
  "T__0", "T__1", "T__2", "T__3", "KEY_FN", "KEY_LET", "TYPE_I32", "ASSIGN", 
  "MUL", "DIV", "ADD", "SUB", "ID", "INT", "NEWLINE", "WS"
};

std::vector<std::string> ManaLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> ManaLexer::_modeNames = {
  "DEFAULT_MODE"
};

std::vector<std::string> ManaLexer::_literalNames = {
  "", "'{'", "'}'", "'('", "')'", "'fn'", "'let'", "'i32'", "'='", "'*'", 
  "'/'", "'+'", "'-'"
};

std::vector<std::string> ManaLexer::_symbolicNames = {
  "", "", "", "", "", "KEY_FN", "KEY_LET", "TYPE_I32", "ASSIGN", "MUL", 
  "DIV", "ADD", "SUB", "ID", "INT", "NEWLINE", "WS"
};

dfa::Vocabulary ManaLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ManaLexer::_tokenNames;

ManaLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
       0x2, 0x12, 0x56, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 
       0x4, 0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 
       0x7, 0x9, 0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 
       0x9, 0xa, 0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 
       0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 
       0x4, 0x11, 0x9, 0x11, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x6, 
       0xe, 0x42, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0x43, 0x3, 0xf, 0x6, 0xf, 
       0x47, 0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 0x48, 0x3, 0x10, 0x5, 0x10, 0x4c, 
       0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x6, 0x11, 0x51, 0xa, 
       0x11, 0xd, 0x11, 0xe, 0x11, 0x52, 0x3, 0x11, 0x3, 0x11, 0x2, 0x2, 
       0x12, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 
       0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 0x17, 0xd, 0x19, 0xe, 
       0x1b, 0xf, 0x1d, 0x10, 0x1f, 0x11, 0x21, 0x12, 0x3, 0x2, 0x5, 0x4, 
       0x2, 0x43, 0x5c, 0x63, 0x7c, 0x3, 0x2, 0x32, 0x3b, 0x4, 0x2, 0xb, 
       0xb, 0x22, 0x22, 0x2, 0x59, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 
       0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 
       0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 
       0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 
       0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 
       0x2, 0x17, 0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 0x3, 0x2, 0x2, 0x2, 0x2, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1f, 
       0x3, 0x2, 0x2, 0x2, 0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 0x3, 0x23, 0x3, 
       0x2, 0x2, 0x2, 0x5, 0x25, 0x3, 0x2, 0x2, 0x2, 0x7, 0x27, 0x3, 0x2, 
       0x2, 0x2, 0x9, 0x29, 0x3, 0x2, 0x2, 0x2, 0xb, 0x2b, 0x3, 0x2, 0x2, 
       0x2, 0xd, 0x2e, 0x3, 0x2, 0x2, 0x2, 0xf, 0x32, 0x3, 0x2, 0x2, 0x2, 
       0x11, 0x36, 0x3, 0x2, 0x2, 0x2, 0x13, 0x38, 0x3, 0x2, 0x2, 0x2, 0x15, 
       0x3a, 0x3, 0x2, 0x2, 0x2, 0x17, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x19, 0x3e, 
       0x3, 0x2, 0x2, 0x2, 0x1b, 0x41, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x46, 0x3, 
       0x2, 0x2, 0x2, 0x1f, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x21, 0x50, 0x3, 0x2, 
       0x2, 0x2, 0x23, 0x24, 0x7, 0x7d, 0x2, 0x2, 0x24, 0x4, 0x3, 0x2, 0x2, 
       0x2, 0x25, 0x26, 0x7, 0x7f, 0x2, 0x2, 0x26, 0x6, 0x3, 0x2, 0x2, 0x2, 
       0x27, 0x28, 0x7, 0x2a, 0x2, 0x2, 0x28, 0x8, 0x3, 0x2, 0x2, 0x2, 0x29, 
       0x2a, 0x7, 0x2b, 0x2, 0x2, 0x2a, 0xa, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 
       0x7, 0x68, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x70, 0x2, 0x2, 0x2d, 0xc, 
       0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x6e, 0x2, 0x2, 0x2f, 0x30, 
       0x7, 0x67, 0x2, 0x2, 0x30, 0x31, 0x7, 0x76, 0x2, 0x2, 0x31, 0xe, 
       0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x7, 0x6b, 0x2, 0x2, 0x33, 0x34, 
       0x7, 0x35, 0x2, 0x2, 0x34, 0x35, 0x7, 0x34, 0x2, 0x2, 0x35, 0x10, 
       0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 0x3f, 0x2, 0x2, 0x37, 0x12, 
       0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x7, 0x2c, 0x2, 0x2, 0x39, 0x14, 
       0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x31, 0x2, 0x2, 0x3b, 0x16, 
       0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0x2d, 0x2, 0x2, 0x3d, 0x18, 
       0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x2f, 0x2, 0x2, 0x3f, 0x1a, 
       0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 0x9, 0x2, 0x2, 0x2, 0x41, 0x40, 0x3, 
       0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 
       0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1c, 0x3, 0x2, 0x2, 
       0x2, 0x45, 0x47, 0x9, 0x3, 0x2, 0x2, 0x46, 0x45, 0x3, 0x2, 0x2, 0x2, 
       0x47, 0x48, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 
       0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4c, 
       0x7, 0xf, 0x2, 0x2, 0x4b, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 
       0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0xc, 
       0x2, 0x2, 0x4e, 0x20, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x51, 0x9, 0x4, 0x2, 
       0x2, 0x50, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 
       0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 
       0x54, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x8, 0x11, 0x2, 0x2, 0x55, 
       0x22, 0x3, 0x2, 0x2, 0x2, 0x7, 0x2, 0x43, 0x48, 0x4b, 0x52, 0x3, 
       0x8, 0x2, 0x2, 
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

ManaLexer::Initializer ManaLexer::_init;
