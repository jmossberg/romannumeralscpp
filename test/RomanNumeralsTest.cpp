#include "gmock/gmock.h"
#include "RomanNumerals.hpp"

TEST(RomanNumeralsTest, CanConvertOne)
{
	//Setup
	RomanNumerals rn;

	//Exercise
	std::string roman_numeral = rn.convert(1);

	//Verify
	ASSERT_EQ("I", roman_numeral);
}

TEST(RomanNumeralsTest, CanConvertTwo)
{
	//Setup
	RomanNumerals rn;

	//Exercise
	std::string roman_numeral = rn.convert(2);

	//Verify
	ASSERT_EQ("II", roman_numeral);
}

TEST(RomanNumeralsTest, CanConvertFour)
{
	//Setup
	RomanNumerals rn;

	//Exercise
	std::string roman_numeral = rn.convert(4);

	//Verify
	ASSERT_EQ("IV", roman_numeral);
}

TEST(RomanNumeralsTest, CanConvertSeven)
{
	//Setup
	RomanNumerals rn;

	//Exercise
	std::string roman_numeral = rn.convert(7);

	//Verify
	ASSERT_EQ("VII", roman_numeral);
}

TEST(RomanNumeralsTest, CanConvertTwentyFour)
{
	//Setup
	RomanNumerals rn;

	//Exercise
	std::string roman_numeral = rn.convert(24);

	//Verify
	ASSERT_EQ("XXIV", roman_numeral);
}

TEST(RomanNumeralsTest, CanConvertFortyFour)
{
	//Setup
	RomanNumerals rn;

	//Exercise
	std::string roman_numeral = rn.convert(44);

	//Verify
	ASSERT_EQ("XLIV", roman_numeral);
}

TEST(RomanNumeralsTest, CanConvertFortyNine)
{
	//Setup
	RomanNumerals rn;

	//Exercise
	std::string roman_numeral = rn.convert(49);

	//Verify
	ASSERT_EQ("XLIX", roman_numeral);
}

TEST(RomanNumeralsTest, CanConvertEightyNine)
{
	//Setup
	RomanNumerals rn;

	//Exercise
	std::string roman_numeral = rn.convert(89);

	//Verify
	ASSERT_EQ("LXXXIX", roman_numeral);
}

TEST(RomanNumeralsTest, CanConvertNintyFive)
{
	//Setup
	RomanNumerals rn;

	//Exercise
	std::string roman_numeral = rn.convert(95);

	//Verify
	ASSERT_EQ("XCV", roman_numeral);
}

TEST(RomanNumeralsTest, CanConvertOneHundred)
{
	//Setup
	RomanNumerals rn;

	//Exercise
	std::string roman_numeral = rn.convert(100);

	//Verify
	ASSERT_EQ("C", roman_numeral);
}
