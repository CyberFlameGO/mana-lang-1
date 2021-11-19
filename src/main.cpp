#include "util.hpp"
#include "constants.hpp"
#include "ast/listener.hpp"

#include "parser/ManaParser.h"
#include "parser/ManaLexer.h"
#include "parser/ManaBaseListener.h"

#include "antlr4-runtime.h"

#include <fstream>
#include <string>
#include <utility>

constexpr const char* DEFAULT_PATH = "../test/main.mana";

bool parse_file(const std::string& path);

int main(int argc, char *argv[])
{
    init_logger();
    const int cli_args = argc;

    if (cli_args > 1) {
        for (int i = 1; i < cli_args; ++i) {
            parse_file(argv[i]);
        }
    } else {
        spdlog::warn("No source path specified. Proceeding with default path: {}", DEFAULT_PATH);
        parse_file(DEFAULT_PATH);
    }
}

// We can later replace this bool with an actual error type
bool parse_file(const std::string& path) 
{
    // Determine file name -- we assume '/' since Windows pretty much fully supports it
    const auto path_end       = path.size() - 1;
    const auto file_delimiter = path.find_last_of('/');
    const bool has_path       = file_delimiter != std::string::npos;
    const std::string& filename = (has_path) ? path.substr(file_delimiter + 1, path_end) : path; // + 1 to omit the '/'

    // Validate extension
    if (path.ends_with(FILE_EXT_MANA)     == false 
     && path.ends_with(FILE_EXT_MANA_ALT) == false) {
        const std::string::size_type pos = path.find_last_of('.');
        if (pos != std::string::npos) {
            // We found the extension
            spdlog::error("Invalid extension \"{}\"", path.substr(pos, path_end));
        } else {
            // No extension at all
            spdlog::error("No extension for file \"{}\"", filename);
        }

        spdlog::warn("Note -- Mana source files can be either '.mana' or '.mn'\n");
        return false;
    }

        // Check if file is available
    std::ifstream source_file(path);
    if (source_file.is_open() == false) {
        spdlog::error("Could not open file at: '{}' -- skipping\n", path);
        return false;
    }

    // File is valid, so begin parsing
    spdlog::info("--- Parsing file: {} ---", filename);

    antlr4::ANTLRInputStream input(source_file);
    ManaLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    tokens.fill();

    ManaParser parser(&tokens);
    antlr4::tree::ParseTree *tree = parser.src();

    const antlr4::tree::ParseTreeWalker walker;
    ast::listener listener(parser);
    walker.walk(&listener, tree);

    return true;
}

// old
// const std::string get_extension(const std::string& path) 
// {
//     // we need the iterator outside the loop
//     const auto path_size = path.size();
//     int i = path_size - 1;

//     // first we search for a period
//     for ( ; i > 0; --i) {
//         if (path.at(i) == '.') {
//             break;
//         }
//     }

//     // we just exit if we found no period
//     if (i == 0) {
//         return path;
//     }

//     // otherwise we fill the buffer with the remaining string
//     std::stringstream buffer;
//     for ( ; i < path_size; ++i) {
//         buffer << path.at(i);
//     }


//     return buffer.str();
// }
