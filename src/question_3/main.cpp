#include "question3.h"
#include <string>
using namespace std;
#include <vector>
#include <iostream>




int main()
{

    string userExitChoice = " ";
    int userNumberOfIterations;

    string outputFromFibFunction;


	do{

        cout << "Enter the number of iteration 1-15: " << endl;
		cin >> userNumberOfIterations;
		cout << endl;



        switch(userNumberOfIterations)
		{
			case 1 ... 15:
				outputFromFibFunction = get_fib_sequence(userNumberOfIterations);
				cout << endl << outputFromFibFunction << endl << endl;
				break;
			default:
				cout << "Invalid Input!" << endl;
				break;
		}




        cout << "Would you like to exit? (y/n) " << endl;
        cin >> userExitChoice;
        cout << endl << endl;



    }while(userExitChoice != "y");





    return 0;
}