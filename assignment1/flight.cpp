#include "flight.h"
#include <iostream>
#include <string.h>
using namespace std;

void Flight::FEEDINFO()
{
    cout << "Enter Flight Number: ";
    cin >> this->flightNo;
    cout << "Enter Flight Destination: ";
    cin >> this->destination;
    cout << "Enter Flight Distance:   ";
    cin >> this->distance;

    fuel = CALCFUEL();
}

void Flight::SHOWINFO()
{
    cout << "Flight Number: " << flightNo << endl;
    cout << "Flight Destination: " << destination << endl;
    cout << "Flight Distance: " << distance << endl;
    cout << "Flight Fuel: " << fuel << endl;
}

float Flight::CALCFUEL()
{
    if (distance <= 100)
    {
        return 500;
    }
    else if (distance <= 200)
    {
        return 1100;
    }
    else
    {
        return 2200;
    }
}