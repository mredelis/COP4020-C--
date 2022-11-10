#include <iostream>

using namespace std;

// Part a.
class Distance
{
private:
    int feet;
    float inches;

public:
    // sets the feet and inches of the distance
    void set(int feet, float inches)
    {
        this->feet = feet;
        this->inches = inches;
    }

    // displays the distance in feet and inches
    void disp()
    {
        cout << feet << " ft " << inches << " inches" << endl;
    }

    // returns the sum of two distances
    Distance add(Distance d)
    {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        // convert inches to feet if >= 12
        while (temp.inches >= 12.0)
        {
            temp.inches -= 12.0;
            temp.feet++;
        }

        return temp;
    }
};