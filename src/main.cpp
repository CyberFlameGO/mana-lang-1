#include "nyx/lexer.hpp"
#include "util.hpp"

constexpr const char* DEFAULT_PATH = "../test/main.mana";

int main() {
    init_logger();
    read_file(DEFAULT_PATH);
}

// #include "util.hpp"
// #include "constants.hpp"

// #include <fstream>
// #include <string>
// #include <filesystem>

// void parse_file(const std::string& path);

// int main(int argc, char *argv[])
// {
//     init_logger();
//     const int cli_args = argc;

//     if (cli_args > 1) {
//         for (int i = 1; i < cli_args; ++i) {
//             parse_file(argv[i]);
//         }
//     } else {
//         spdlog::warn("No source path specified. Proceeding with default path:
//         {}", DEFAULT_PATH); parse_file(DEFAULT_PATH);
//     }
// }

// // We can later replace this bool with an actual error type
// void parse_file(const std::string& path_in)
// {
//     // Check if file is available
//     std::ifstream source_file(path_in);
//     if (source_file.is_open() == false) {
//         spdlog::error("Could not open file: \"{}\" -- skipping\n", path_in);
//         return;
//     }

//     // We'll need an fs object esp for handling modules later
//     const std::filesystem::path path(path_in);
//     if (!path.has_filename()) {
//         spdlog::error("No file name specified for \"{}\" -- skipping\n",
//         path_in); return;
//     }

//     const auto& filename = path.filename().string();
//     if (!path.has_extension()) {
//         spdlog::error("No extension for file \"{}\" -- skipping\n",
//         filename); return;
//     }

//     const auto& extension = path.extension().string();
//     if (extension != FILE_EXT_MANA
//         && extension != FILE_EXT_MANA_MN) {
//             spdlog::error("Invalid extension \"{}\" -- skipping", extension);
//             spdlog::info("NOTE: Mana source files can be either \".mana\" or
//             \".mn\"\n");

//             return;
//     }

//     // File is valid, so begin parsing
//     spdlog::info("--- Parsing file: {} ---", filename);
// }

// backing up antlr code here
// antlr4::ANTLRInputStream input(source_file);
// ManaLexer lexer(&input);
// antlr4::CommonTokenStream tokens(&lexer);
// tokens.fill();

// ManaParser parser(&tokens);
// antlr4::tree::ParseTree *tree = parser.src();

// const antlr4::tree::ParseTreeWalker walker;
// ast::listener listener(parser);
// walker.walk(&listener, tree);