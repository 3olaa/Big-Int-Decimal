// Course:  CS213 - Programming II  - 2018
// Title:   Assignment II
// Program: CS213-2018-A2
// Purpose: Add and Subtract big numbers
// Author1: Mostafa Khaled - 20170288 - G8
// Author2: Ola Sameh - 20170165 - G8
// Author3: Radwa Ahmed - 20170104 - G8

#include <iostream>
#include <BigIntDecimal.h>

using namespace std;

ostream& operator<< (ostream& out, BigDecimalInt bInt)
{
    string str = "";

    if(!bInt.is_positive)
        str += '-';

    str += bInt.m_number;

    out << str << endl;
    return out;
}

int main()
{
    BigDecimalInt b1("123"), b2("123"), b3("-123"), b4("-463886253245"), b5("347892858397456");

    cout << b1 + b2 << endl << b1 - b5 << endl << b1 + b4 << endl << b5 - b4 << endl << b3 + b4;
    return 0;
}
