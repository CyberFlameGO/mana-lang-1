cmake_minimum_required(VERSION 3.16)
project(mana VERSION 1.0.0)

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

add_executable(mana 
    src/main.cpp 
    src/nyx/lexer.cpp
)

target_include_directories(mana PRIVATE
    "src/"
    "include/"
)

target_link_libraries(mana PRIVATE 
    spdlog::spdlog
    ${llvm_libs}
)