#include <iostream>
#include <vector>
#include "question1.h"
using namespace std;


int main()
{



    string userExitChoice = " ";
	do{
        int userNumberOfCookies;
		int userMenuOption;

        vector<double> outputFromGCI;


        cout << "Enter the number of cookies you would like to make: " << endl;
		cin >> userNumberOfCookies;
		cout << endl;





        // cout << "      MENU" << endl;
		// cout << "1- Get GC Content" << endl;
		// cout << "2- Get DNA Complement" << endl;
		// cout << "3- Exit" << endl;
		// cout << "Enter your menu option: " << endl;



        outputFromGCI = get_cookie_ingredients(userNumberOfCookies);

        for(auto i = outputFromGCI.begin(); i != outputFromGCI.end(); i++)
        {
            if (i == outputFromGCI.begin())
            {
                cout << "Expected Number of Cups Of Sugar: " << *i << " Cups" << endl;
            }
            else if(i != outputFromGCI.begin() && i != outputFromGCI.end())
            {
                cout << "Expected Number of Cups Of Butter: " << *i << " Cups" << endl;
            }  
            else
            {
                cout << "Expected Number of Cups Of Flour: " << *i << " Cups" << endl << endl;
            }


        }

		









    }while(userExitChoice != "y");







    return 0;
}