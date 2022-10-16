#include "question4.h"
#include <string>
using namespace std;
#include <vector>
#include <iostream>







int main()
{

    string userExitChoice = " ";
    string zeroDigit = "0";
    string oneDigit = "1";

    string userBinaryInput;



    string outputFromFibFunction;


	do{

        cout << "Enter the number of iteration 1-15: " << endl;
		cin >> userBinaryInput;
		cout << endl;

        if(userBinaryInput.find(zeroDigit) == false && userBinaryInput.find(oneDigit) == false)
        {
            cout << "No 0's or 1's detected";
        }
        else
        {
            cout << binary_to_decimal(userBinaryInput);

        }




        cout << "Would you like to exit? (y/n) " << endl;
        cin >> userExitChoice;
        cout << endl << endl;



    }while(userExitChoice != "y");










    return 0;
}