#include "RomanNumerals.hpp"

RomanNumerals::RomanNumerals()
{
	v.push_back({100, "C"});
	v.push_back({90, "XC"});
	v.push_back({50, "L"});
	v.push_back({40, "XL"});
	v.push_back({10, "X"});
	v.push_back({9, "IX"});
	v.push_back({5, "V"});
	v.push_back({4, "IV"});
	v.push_back({1, "I"});
}

std::string RomanNumerals::convert(int arabic_number)
{
	string result{""};
	auto remainder = arabic_number;

	while(remainder > 0) {
		for(struct ArabicToRoman a2r : v) {
			while (remainder >= a2r.arabic) {
				result.append(a2r.roman);
				remainder -= a2r.arabic;
			}
		}
	}

	return result;
}
