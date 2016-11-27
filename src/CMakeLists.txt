add_library(src RomanNumerals.cpp)
target_include_directories(src PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_options(src PRIVATE -g -Werror -Wall -std=c++14)