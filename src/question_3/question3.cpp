#include "question3.h"
#include <string>
using namespace std;
#include <vector>
#include <iostream>


bool test_config()
{
    return true;
}


string get_fib_sequence(int parameterMaximumValue)
{
    string finalSequence;
    string integerToString;
    int nextValue;
    int firstValue = 0;
    int secondValue = 1;


    finalSequence.append("0 1 ");


    for(int i = 1; i <= parameterMaximumValue; i++)
    {


        nextValue = firstValue + secondValue;//The next value is equal to the previous values

        firstValue = secondValue;
        secondValue = nextValue;


        integerToString = to_string(nextValue);
        finalSequence.append(integerToString);
        finalSequence.append(" ");
    }

    return finalSequence;
}