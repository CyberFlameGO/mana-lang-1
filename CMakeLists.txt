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

# Add specific ANTLR include path so the ANTLR headers play nice
include_directories(${PROJECT_SOURCE_DIR}/include/antlr)
include_directories(${PROJECT_SOURCE_DIR}/include)

# So portable honestly it's incredible (we'll fix it somehow)
set(antlr_static "${PROJECT_SOURCE_DIR}/libs/libantlr4-runtime.a")

add_executable(mana 
    src/main.cpp 
    src/parser/ManaLexer.cpp 
    src/parser/ManaParser.cpp
)

target_link_libraries(mana 
    ${antlr_static}
    ${llvm_libs}
)

# These are required since we are using LLVM with SanitizeAddress enabled
target_compile_options(mana PUBLIC
    -fsanitize=address
)

target_link_options(mana PUBLIC
    -fsanitize=address
)