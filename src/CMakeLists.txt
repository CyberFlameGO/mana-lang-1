# CMakeList.txt : CMake project for mana-lang, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (mana-lang "mana-lang.cpp" "mana-lang.h" "test_module.cpp" "test_module.h")

# TODO: Add tests and install targets if needed.
