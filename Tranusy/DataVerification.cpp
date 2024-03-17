#include "DataVerification.h"

DataVerification::DataVerification()
{
	setAlphabet(range.second);
}

bool DataVerification::verifyBase(short base)
{
	if (base < range.first || base > range.second)
		return false;
	return true;
}

bool DataVerification::verifyNumber(string num, short base)
{
	setAlphabet(base);

	if (isin(num, alphabet))
		return true;
	return false;
}

void DataVerification::setRange(short begin, short end)
{
	if (begin < 2)
	{
		invalid_argument exp("'Begin value' must be greater or equal to 2");
		throw exp;
	}
	else if (end <= begin)
	{
		invalid_argument exp("'End value' must be greater then 'begin value'");
		throw exp;
	}

	range = pair<short, short>(begin, end);
}

void DataVerification::setAlphabet(short base)
{
	alphabet = "";

	for (int i = 0; i < base; i++)
	{
		if (i > 9)
			alphabet.push_back('A' + i - 10);
		else
			alphabet.append(to_string(i));
	}
	alphabet += ".-";
}

bool DataVerification::isin(char value, string list)
{
	for (size_t i = 0, s = list.size(); i < s; i++)
	{
		if (value == list[i])
			return true;
	}
	return false;
}

bool DataVerification::isin(string valueList, string verfList)
{
	for (size_t i = 0, s = valueList.size(); i < s; i++)
	{
		if (!isin(valueList[i], verfList))
			return false;
	}
	return true;
}
