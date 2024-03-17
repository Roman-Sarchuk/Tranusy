#pragma once
#include "DataVerification.h"
#include <string>
#include <stdexcept>
#include <stack>
#include <queue>
using std::string;
using std::to_string;
using std::invalid_argument;
using std::stack;
using std::queue;

class Converter : public DataVerification
{
	short fromSys = getRange().first;
	short toSys = getRange().second;
	unsigned short accuracy = 10;
	string num, res{}, info{};

	void toDecimal();
	void fromDecimal();
	long long powll(long long x, int exp);
	char getCharNum(unsigned short digit);

public:
	Converter() {}
	Converter(short accuracy);
	Converter(short from, short to, string value);

	string convert();
	string convert(short from, short to, string value);

	void setFromSys(short base);
	void setToSys(short base);
	void setNum(string value);
	void setAccuracy(unsigned short value);
	inline string getRes() { return res; }
	inline string getInfo() { return info; }
	inline unsigned short getAccuracy() { return accuracy; }
};

