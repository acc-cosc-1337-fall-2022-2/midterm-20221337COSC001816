#include "question4.h"
#include <string>
using namespace std;
#include <vector>
#include <iostream>



bool test_config()
{
    return true;
}



int binary_to_decimal(string parameterString)
{
    int integerFormOfString = stoi(parameterString);
    int remainder;
    int dec;

    int i = 0;

    while(integerFormOfString != 0)
    {
        remainder = integerFormOfString % 10;
        integerFormOfString = integerFormOfString / 10;

        dec = dec + (remainder * 2 * i * i);
        i++;
    }

    return dec;
}








