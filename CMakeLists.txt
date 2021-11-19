cmake_minimum_required(VERSION 3.16)
project(mana VERSION 1.0.0)

# ANTLR does not support CXX17
set(CMAKE_CXX_STANDARD 20)

# Todo: Explicitly target x64 architectures

# spdlog
find_package(spdlog REQUIRED)

# Disable default stdout logger, enabling it breaks some features of LizardFS
# Enable it on your own responsibility
add_definitions(-DSPDLOG_DISABLE_DEFAULT_LOGGER)

# LLVM
find_package(LLVM REQUIRED CONFIG)
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

llvm_map_components_to_libnames(llvm_libs
        support
        core
        irreader
        )

# ANTLR
add_definitions(-DANTLR4CPP_STATIC)

# Uncomment if compiling with Visual C++
set(ANTLR4_WITH_STATIC_CRT ON)

add_subdirectory(vendor/antlr4-cpp-runtime)

add_executable(mana 
    src/main.cpp 
    src/ast/listener.cpp
    #src/logger.cpp

    src/parser/ManaLexer.cpp 
    src/parser/ManaParser.cpp
    src/parser/ManaBaseListener.cpp
    src/parser/ManaListener.cpp
)

target_include_directories(mana PRIVATE
    "src/"
)

target_link_libraries(mana PRIVATE 
    spdlog::spdlog
    antlr4_cpp_runtime
    ${llvm_libs}
)

