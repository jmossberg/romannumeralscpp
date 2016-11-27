#ifndef ROMANNUMERALS_HPP_
#define ROMANNUMERALS_HPP_

#include <string>
#include <vector>

using namespace std;

struct ArabicToRoman {
	int arabic;
	string roman;
};

class RomanNumerals
{
public:
	string convert(int arabic_number);
	RomanNumerals();
private:
	vector<struct ArabicToRoman> v;
};

#endif /* ROMANNUMERALS_HPP_ */
