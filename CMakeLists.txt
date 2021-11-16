cmake_minimum_required(VERSION 3.16)
project(mana VERSION 1.0.0)

# ANTLR does not support CXX17
set(CMAKE_CXX_STANDARD 14)

# Todo: Explicitly target x64 architectures

# Import LLVM and add components
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
# set(ANTLR4_WITH_STATIC_CRT ON)

add_subdirectory(vendor/antlr4-cpp-runtime)

add_executable(mana 
    src/main.cpp 
    src/parser/ManaLexer.cpp 
    src/parser/ManaParser.cpp
    src/parser/ManaBaseVisitor.cpp
    src/parser/ManaVisitor.cpp
)

target_link_libraries(mana 
    antlr4_cpp_runtime
    ${llvm_libs}
)

# These are required since we are using LLVM with SanitizeAddress enabled
target_compile_options(mana PUBLIC
    -fsanitize=address
)

target_link_options(mana PUBLIC
    -fsanitize=address
)
