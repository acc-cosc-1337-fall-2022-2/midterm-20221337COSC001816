#include "question2.h"
#include <string>
using namespace std;
#include <vector>


bool test_config()
{
    return true;
}





int get_hours(int seconds_since_1970)
{
    int timeRemainerLessThanADay;
    int hoursTime;


    timeRemainerLessThanADay = seconds_since_1970 % 86400;//There are 86400 seconds in a day. This will return the remainder of any time that is not a full day ie, time of the day

    timeRemainerLessThanADay = timeRemainerLessThanADay / 60;//Convert the number of seconds to number of minutes
    hoursTime = timeRemainerLessThanADay / 60;//Convert the number of minutes to number of hours


    return hoursTime;
}


int get_minutes(int seconds_since_1970)
{
    int timeRemainerLessThanADay;
    int minutesTime;

    timeRemainerLessThanADay = seconds_since_1970 % 86400;//There are 86400 seconds in a day. This will return the remainder of any time that is not a full day ie, time of the day

    timeRemainerLessThanADay = timeRemainerLessThanADay / 60;//Convert the number of seconds to number of minutes
    minutesTime = timeRemainerLessThanADay % 60;//There are 60 minutes in an hour. This will get the remianing minutes left 


    return minutesTime;

}


int get_seconds(int seconds_since_1970)
{
    int timeRemainerLessThanADay;
    int secondsTime;

    timeRemainerLessThanADay = seconds_since_1970 % 86400;//There are 86400 seconds in a day. This will return the remainder of any time that is not a full day ie, time of the day

    timeRemainerLessThanADay = timeRemainerLessThanADay % 60;//Get the remaining seconds not from the hour interval. 
    secondsTime = timeRemainerLessThanADay % 60;//Get the remaining seconds not from the minutes interval.


    return secondsTime;
}
