#include "BigNumber.h"

BigNumber::BigNumber()
{
	// defult constructor
	digits.push_back(0);
	pointPos = 0;
	isWhole = true;
	isNegative = false;
}

BigNumber::BigNumber(const string& num)
{
	if (num.empty())
	{
		// defult constructor
		digits.push_back(0);
		pointPos = 0;
		isWhole = true;
		isNegative = false;
		return;
	}

	// check floatable
	//string:: it = find(num.begin(), num.end(), '.');
	isWhole = find(num.begin(), num.end(), '.') != num.end();
	// check negativable
	isNegative = num[0] == '-';
}
