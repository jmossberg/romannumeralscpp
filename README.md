# romannumeralscpp

Solution to the Roman Numerals Kata in C++14

## How to build tests

    mkdir build
    cd build
    cmake ..
    cd ../build
    make all

## How to run tests

    build/test/roman_numerals_tests

## Kata

Credit: This kata can be found in the book “The Coding Dojo Handbook” written
by Emily Bache. It is also available at several other locations such as
http://codingdojo.org/cgi-bin/index.pl?KataRomanNumerals

Write a function to convert from normal (Arabic) numbers to Roman Numerals:

* Step 1) Support all numbers between 1 - 8
* Step 2) Support all numbers between 1 - 30
* Step 3) Support all numbers between 1 - 100

### Background information:

     Symbol      Value   Can be subtracted by  Can be repeated max number of times
     -----------------------------------------------------------------------------
     I           1                             3 -> e.g III for 3 is OK   
     V           5       I -> IV for 4         1 -> e.g. VV for 10 is not OK
     X           10      I -> IX for 9         3 -> e.g. XXX for 30 is OK
     L           50      X -> XL for 40        1 -> e.g. LL for 100 is not OK
     C           100     X -> XC for 90        3
     D           500
     M           1000

The largest symbol is on the left. Except when subtracted a smaller
symbol from a larger symbol, e.g. IV for 4.

Examples:

    1   -> I
    3   -> III
    4   -> IV <- 1 is subtracted from 5 by putting I in front of V
    7   -> VII
    9   -> IX <- 1 is subtracted from 10 by putting I in front of X
    10  -> X
    17  -> XVII
    39  -> XXXIX
    40  -> XL <- 10 is subtracted from 50
    47  -> XLVII
    53  -> LIII
    99  -> XCIX
