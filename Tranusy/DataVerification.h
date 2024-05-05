#pragma once
#include "DataVerification.h"
#include <string>
#include <utility>
#include <stdexcept>
using std::pair;
using std::string;
using std::to_string;
using std::invalid_argument;

class DataVerification
{
	pair<short, short> range = pair<short, short>(2, 36);
	string alphabet{};

public:
	DataVerification();
	bool verifyBase(short base);
	bool verifyNumber(string num, short base);
	void setRange(short begin, short end);
	void setAlphabet(short base);
	inline string getAlphabet() { return alphabet; }
	inline pair<short, short> getRange() { return range; }
	bool isin(char value, string list);
	bool isin(string valueList, string verfList);
};
