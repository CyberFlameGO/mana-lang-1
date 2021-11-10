cmake_minimum_required(VERSION 3.16)
project(mana VERSION 1.0.0)

# ANTLR does not support CXX17
set(CMAKE_CXX_STANDARD 14)

# will need to set architecture to x64 at some point
#set(BUILD_ARCH "-m64")
#set(TARGET_64 ON)

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
# list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

add_definitions(-DANTLR4CPP_STATIC)

# Uncomment if compiling with Visual C++
# set(ANTLR4_WITH_STATIC_CRT ON)

# add external build for antlrcpp
# include(ExternalAntlr4Cpp)
# add antrl4cpp artifacts to project environment
# include_directories(${ANTLR4_INCLUDE_DIRS})

# Set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
# set(ANTLR_EXECUTABLE ${PROJECT_SOURCE_DIR}/tools/antlr/antlr-4.9.3-complete.jar)
# NOTE: There is currently no reason to enable this. 
# changes to the grammar should be updated through the script.

# add macros to generate ANTLR Cpp code from grammar
# find_package(ANTLR REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/include)

# Add specific ANTLR include path so the ANTLR headers play nice
include_directories(${PROJECT_SOURCE_DIR}/include/antlr)

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