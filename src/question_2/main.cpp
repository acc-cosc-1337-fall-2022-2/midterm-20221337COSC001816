#include "question2.h"
#include <string>
using namespace std;
#include <vector>
#include <iostream>



int main()
{
    int secondsArgumentForTheFunctionsTest1 = 1570846218;
    int secondsArgumentForTheFunctionsTest2 = 1570875018;


    //If ((secondsArgumentForTheFunctions  % 86400) /2) >= 43200    Then the time is in the afternoon PM (If time remaining is past half a day)


    cout << "Test 1 (seconds argument) == " << secondsArgumentForTheFunctionsTest1 << endl;
    cout << "The Time is   " << get_hours(secondsArgumentForTheFunctionsTest1) << ":" << get_minutes(secondsArgumentForTheFunctionsTest1) << ":"  << get_seconds(secondsArgumentForTheFunctionsTest1) << " AM" << endl <<endl;


    cout << "Test 2 (seconds argument) == " << secondsArgumentForTheFunctionsTest2 << endl;
    cout << "The Time is   " << get_hours(secondsArgumentForTheFunctionsTest2) << ":" << get_minutes(secondsArgumentForTheFunctionsTest2) << ":" << get_seconds(secondsArgumentForTheFunctionsTest2) << " AM" << endl <<endl;




    return 0;
}