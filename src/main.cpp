#include "nyx/lexer.hpp"
#include "util.hpp"

#include <filesystem>
#include <fstream>

constexpr const char* DEFAULT_PATH = "../test/main.mana";

void read_file(const std::string& path) {
    std::filesystem::path fs_path(path);
    const auto& file_name = fs_path.filename().string();
    const auto file_size = std::filesystem::file_size(path);

    // Avoid needless copying by simply aliasing the buffer's contained string object
    const std::ifstream source(path);

    if (source.is_open() == false) {
        spdlog::error("Could not open file: {}\n at: {}", file_name, path);
    }

    std::stringstream file_buffer;
    file_buffer.str().reserve(file_size);
    file_buffer << source.rdbuf();
    const auto& file_string = file_buffer.str();

    // const auto tokens =
    auto a = lexer(file_buffer);
    a.tokenize();
}

int main() {
    init_logger();
    read_file(DEFAULT_PATH);
}