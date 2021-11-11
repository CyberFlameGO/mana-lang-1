#include <llvm/ADT/APFloat.h>
#include <llvm/ADT/STLExtras.h>
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/Constants.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Verifier.h>

#include <antlr4-runtime.h>

#include <iostream>

#include "parser/ManaLexer.h"
#include "parser/ManaParser.h"

//using namespace lex;
using namespace mana::parser;
using namespace antlr4;

int main() {
     llvm::LLVMContext context;

    ANTLRInputStream input(u8"🍴 = 🍐 + \"😎\";(((x * π))) * µ + ∰; a + (x * (y ? 0 : 1) + z);");
    ManaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }

    ManaParser parser(&tokens);
    tree::ParseTree* tree = parser.main();

    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
    std::cout << "holy shit it actually compiled\n";
}
