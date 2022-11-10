#include <iostream>

using namespace std;

// Part a.
class Time
{
private:
    int hours, minutes;

public:
    // sets the hours and minutes of the time object
    void settime(int hours, int minutes)
    {
        this->hours = hours;
        this->minutes = minutes;
    }

    // displays the time in hours and minutes
    void showtime()
    {
        cout << hours << " hours " << minutes << " minutes " << endl;
    }

    // returns the sum of two time objects
    Time sum(Time t)
    {
        Time temp;
        temp.hours = hours + t.hours;
        temp.minutes = minutes + t.minutes;

        // convert minutes to hours if >= 60
        while (temp.minutes >= 60)
        {
            temp.minutes -= 60;
            temp.hours++;
        }

        return temp;
    }
};