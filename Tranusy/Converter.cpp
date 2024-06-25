#include "Converter.h"


namespace UIcppProject
{
    Converter::Converter(short accuracy) { setAccuracy(accuracy); }

    Converter::Converter(short from, short to, string value)
    {
        setFromSys(from);
        setToSys(to);
        setNum(value);
    }

    string Converter::convert()
    {
        info.clear();

        try
        {
            if (toSys == 10)
            {
                toDecimal();
            }
            else if (fromSys == 10) {
                fromDecimal();
            }
            else if (fromSys == toSys)
            {
                res = num;
                info = num + "[" + to_string(fromSys) + "]";
                info += " = " + info + "\r\n";
            }
            else
            {
                toDecimal();
                info.append("\r\n\r\n");
                num = res;
                fromDecimal();
            }
        }
        catch (const std::exception& ex)
        {
            string message = ex.what();
            System::String^ errorMessage = gcnew System::String(message.c_str());
            System::Exception^ exp = gcnew System::Exception(errorMessage);
            throw exp;
        }

        return res;
    }

    string Converter::convert(short from, short to, string value)
    {
        setFromSys(from);
        setToSys(to);
        setNum(value);

        return convert();
    }

    void Converter::toDecimal()
    {
        /*  : INFO of algorithm :
            num[base] = digit * base^dr + .. = product + .. = res[10]
                           \^       piece1      ^/   \^  piece2 ^/
            : FOR EXAMPLE :
            num = -1101.1010[2] -> isFloat = true , isNegative = true
            1101 = 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0 = 13
            0.1010 = 1*2^-1 + 0*2^-2 + 1*2^-3 + 0*2^-4 = 0.625
            res = -13.625[10]
        */
        // init value
        bool isFloat = false, isNegative = false;
        if (isin('.', num))
            isFloat = true;
        if (num[0] == '-')
        {
            isNegative = true;
            num.erase(num.begin());
        }

        string wholePart = num, fractionalPart = num;
        long long wholeRes = 0;
        double fractionalRes = 0.0;

        res = "";
        string piece1{}, piece2{};   // info

        if (isFloat) {
            wholePart.erase(wholePart.find('.'));                   // (cut) '.' to end
            fractionalPart.erase(0, fractionalPart.find('.') + 1);  // (cut) begin to '.'
        }

        // calc whole res
        long long digit, wproduct;
        for (int i = 0, dr = (int)wholePart.size() - 1; dr >= 0; i++, dr--)
        {
            if (wholePart[i] >= 'A')
                digit = (long long)(wholePart[i] - 'A' + 10);
            else
                digit = (long long)(wholePart[i] - '0');
            wproduct = digit * powll(fromSys, dr);
            wholeRes += wproduct;
            piece1.append(to_string(digit) + "*" + to_string(fromSys) + "^" + to_string(dr));
            piece2.append(to_string(wproduct));
            if (dr != 0)
            {
                piece1.append(" + ");
                piece2.append(" + ");
            }
        }

        // calc fractional res
        if (isFloat) {
            piece1.append(" + ");
            piece2.append(" + ");
            double fproduct;
            for (int i = 0, dr = -1, end = -((int)fractionalPart.size()); dr >= end; i++, dr--)
            {
                if (fractionalPart[i] >= 'A')
                    digit = (long long)(fractionalPart[i] - 'A' + 10);
                else
                    digit = (long long)(fractionalPart[i] - '0');
                fproduct = (double)digit * pow(fromSys, dr);
                fractionalRes += fproduct;
                piece1.append(to_string(digit) + "*" + to_string(fromSys) + "^" + to_string(dr));
                piece2.append(to_string(fproduct));
                if (dr != end) {
                    piece1.append(" + ");
                    piece2.append(" + ");
                }
            }
        }

        // form the result
        res = to_string(wholeRes);
        if (isFloat) {
            string sfr = to_string(fractionalRes);
            sfr.erase(0, sfr.find('.'));
            res.append(sfr);
        }

        // form the info
        info.append(num + "[" + to_string(fromSys) + "] = ");
        info.append(piece1 + " = " + piece2);
        info.append(" = " + res + "[10]\r\n");

        info.append((isNegative ? "-" : "") + num + "[" + to_string(fromSys) + "] = ");
        if (isNegative) res = "-" + res;
        info.append(res + "[10]");
    }

    void Converter::fromDecimal()
    {
        /*  : INFO of algorithm :
            num / base = piece (remainder_1)
            piece / base = .. (remainder_2)
            . . . = .. (remainder_n)
            res = {'remainder_n' .. 'remainder_1'}
            num[10] = res[base]
            : FOR EXAMPLE :

        */
        // init values
        bool isFloat = false, isNegative = false;
        if (isin('.', num))
            isFloat = true;
        if (num[0] == '-')
        {
            isNegative = true;
            num.erase(num.begin());
        }

        long long wholePart = 0, fractionalPart = 0;
        string wholeRes, fractionalRes{};
        stack<char> remainder;  // use to whole calc
        queue<char> whole;      // use to fraction calc

        string wholeAct{}, fractionalAct{};   // info
        pair<string, string> partRes{};
        bool isInfinite = false;

        if (isFloat) {
            string part = num;
            part.erase(part.find('.'));
            wholePart = stoll(part);            // (value) begine to '.'
            part = num;
            part.erase(0, part.find('.') + 1);
            fractionalPart = stoll(part);       // (value) '.' to end
        }
        else {
            wholePart = stoll(num);
        }

        // calc whole res
        partRes.first.append(to_string(wholePart) + "[10] = ");
        int rem;
        while (wholePart != 0)
        {
            rem = wholePart % toSys;
            remainder.push(getCharNum(rem));

            wholeAct.append(to_string(wholePart) + " / " + to_string(toSys) + " = ");
            wholePart /= toSys;
            wholeAct.append(to_string(wholePart) + " (" + to_string(rem) + ")\r\n");
        }

        // calc fractional res
        if (isFloat) {
            partRes.second.append("0." + to_string(fractionalPart) + "[10] = ");
            string part{};
            char digit;
            double fractional = stod("0." + to_string(fractionalPart));
            for (size_t i = accuracy; fractionalPart != 0 && accuracy > 0; accuracy--)
            {
                fractionalAct.append(to_string(fractional) + " * " + to_string(toSys) + " = ");
                fractional *= toSys;
                fractionalAct.append(to_string(fractional));

                part = to_string(fractional);   // get whole digit form fraction
                part.erase(part.find('.'));
                digit = getCharNum(stoi(part));
                whole.push(digit);
                fractionalAct.append(" (");
                fractionalAct.push_back(digit);
                fractionalAct.append(")\r\n");

                part = to_string(fractional);   // get fraction without whole digit
                part.erase(0, part.find('.') + 1);
                fractional = stod("0." + part);

                fractionalPart = stoll(part);   // set new fractional part without whole digit & witout 0.
            }
            if (accuracy <= 0)
                isInfinite = true;
        }

        // form the res
        if (remainder.empty())
            wholeRes = "0";
        else {
            while (!remainder.empty())
            {
                wholeRes += remainder.top();
                remainder.pop();
            }
        }
        partRes.first.append(wholeRes + "[" + to_string(toSys) + "]");
        if (isFloat) {
            while (!whole.empty())
            {
                fractionalRes += whole.front();
                whole.pop();
            }
            partRes.second.append("0." + fractionalRes + (isInfinite ? "..." : "") + "[" + to_string(toSys) + "]");
        }

        info.append(wholeAct + partRes.first + "\r\n\r\n");
        if (isFloat)
            info.append(fractionalAct + partRes.second + "\r\n\r\n");
        res = isNegative ? "-" : "";
        res += isFloat ? wholeRes + "." + fractionalRes : wholeRes;
        info.append((isNegative ? "-" : "") + num + "[10] = " + res + (isInfinite ? "..." : "") + "[" + to_string(toSys) + "]");
    }

    long long Converter::powll(long long x, int exp)
    {
        long long res = 1;

        if (exp == 0) return 1;
        else for (size_t i = 1, end = abs(exp); i <= end; i++)  res *= x;

        if (exp < 0) res = 1 / res;
        return res;
    }

    char Converter::getCharNum(unsigned short digit)
    {
        if (digit < 10)
            return '0' + digit;
        return 'A' + digit - 10;
    }

    void Converter::setFromSys(short base)
    {
        if (!verifyBase(base))
        {
            string message = "Value " + to_string(base) + " must be in range(" + to_string(getRange().first) + ", " + to_string(getRange().second) + ")";
            System::String^ errorMessage = gcnew System::String(message.c_str());
            System::Exception^ exp = gcnew System::Exception(errorMessage);
            throw exp;
        }

        fromSys = base;
    }

    void Converter::setToSys(short base)
    {
        if (!verifyBase(base))
        {
            string message = "Value " + to_string(base) + " must be in range(" + to_string(getRange().first) + " to " + to_string(getRange().second) + ")";
            System::String^ errorMessage = gcnew System::String(message.c_str());
            System::Exception^ exp = gcnew System::Exception(errorMessage);
            throw exp;
        }

        toSys = base;
    }

    void Converter::setNum(string value)
    {
        if (!verifyNumber(value, fromSys))
        {
            string message = "Value must only contain that symbols: " + getAlphabet();
            System::String^ errorMessage = gcnew System::String(message.c_str());
            System::Exception^ exp = gcnew System::Exception(errorMessage);
            throw exp;
        }

        num = value;
    }

    void Converter::setAccuracy(unsigned short value)
    {
        if (accuracy < 1)
        {
            System::String^ errorMessage = "'Accuracy' must be greater than 1";
            System::Exception^ exp = gcnew System::Exception(errorMessage);
            throw exp;
        }

        accuracy = value;
    }
}