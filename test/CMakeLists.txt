add_executable(roman_numerals_tests main.cpp RomanNumeralsTest.cpp)
target_link_libraries(roman_numerals_tests gmock_main src)
target_include_directories(roman_numerals_tests PRIVATE ${CMAKE_SOURCE_DIR}/google/googletest/include)
target_compile_options(roman_numerals_tests PRIVATE -g -Werror -Wall -std=c++14)