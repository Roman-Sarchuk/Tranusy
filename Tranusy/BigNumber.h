#pragma once
#include <string>
#include <vector>
#include <algorithm>
using std::string;
using std::vector;
using std::find;

class BigNumber
{
    vector<short> digits;
    size_t pointPos;
	bool isWhole;
	bool isNegative;

public:
    // *** Constructors ***
    explicit BigNumber();
    explicit BigNumber(const string& num = "");
    explicit BigNumber(int num);
    explicit BigNumber(long long num);
    explicit BigNumber(float num);
    explicit BigNumber(double num);

    // *** Mathematical operators ***
    BigNumber operator+(const BigNumber& other) const;
    BigNumber operator-(const BigNumber& other) const;
    BigNumber operator*(const BigNumber& other) const;
    BigNumber operator/(const BigNumber& other) const;
    BigNumber operator%(const BigNumber& other) const;

    // *** Assignment operators ***
    BigNumber& operator=(const BigNumber& other);
    BigNumber& operator+=(const BigNumber& other);
    BigNumber& operator-=(const BigNumber& other);
    BigNumber& operator*=(const BigNumber& other);
    BigNumber& operator/=(const BigNumber& other);
    BigNumber& operator%=(const BigNumber& other);

    // *** Logical operators ***
    bool operator==(const BigNumber& other) const;
    bool operator!=(const BigNumber& other) const;
    bool operator>(const BigNumber& other) const;
    bool operator<(const BigNumber& other) const;
    bool operator>=(const BigNumber& other) const;
    bool operator<=(const BigNumber& other) const;

	// *** Other function ***
	string get();
};

