#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    // Part b.
    // creates three time objects
    Time t1, t2, t3;

    // sets the hours and minutes of the first two times
    t1.settime(11, 55);
    t2.settime(15, 45);

    // calls the sum function to add the first two times
    // and assigns the result to the third time
    t3 = t1.sum(t2);

    // displays all times
    cout << "Time 1:" << endl;
    t1.showtime();
    cout << endl;
    cout << "Time 2:" << endl;
    t2.showtime();
    cout << endl;
    cout << "Time 3:" << endl;
    t3.showtime();

    return 0;
}