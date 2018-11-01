#ifndef BIGDECIMALINT_H
#define BIGDECIMALINT_H

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class BigDecimalInt
{
    friend ostream& operator<< (ostream&, BigDecimalInt);

public:
    BigDecimalInt (string decStr); // Initialize from string
    BigDecimalInt (int decInt); // Initialize from integer
    BigDecimalInt operator+ (BigDecimalInt anotherDec); //Add big number
    BigDecimalInt operator- (BigDecimalInt anotherDec); //subtract big number
    string m_number;
    bool is_positive;  //check if the number positive
};

#endif
