#include "question1.h"
#include <string>
using namespace std;
#include <vector>


bool test_config()
{
    return true;
}






vector<double> get_cookie_ingredients(int cookiesToBake)
{
//48 Cookies =
//1.5 cups of sugar
//1 cup of butter
//2.75 cups of flour

//1 cup of sugar  ==  32 cookies
//1 cup of butter ==  48 cookies
//1 cup of flour  ==  17.45 cookies


    vector<double> ingredientsTotal;



    double cupsOfSugarNeeded;
    double cupsOfButterNeeded;
    double cupsOfFlourNeeded;

    double cookiesMadePerCupSugar = (48/1.5);
    double cookiesMadePerCupButter = (48/1);
    double cookiesMadePerCupFlour = (48/2.75);


    cupsOfSugarNeeded = cookiesToBake * cookiesMadePerCupSugar;
    cupsOfButterNeeded = cookiesToBake * cookiesMadePerCupButter;
    cupsOfFlourNeeded = cookiesToBake * cookiesMadePerCupFlour;


    ingredientsTotal.push_back(cupsOfSugarNeeded);
    ingredientsTotal.push_back(cupsOfButterNeeded);
    ingredientsTotal.push_back(cupsOfFlourNeeded);





    //cout << ingredientsTotal;

    return ingredientsTotal;
}