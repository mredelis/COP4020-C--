#include <iostream>
#include "Distance.h"

using namespace std;

int main()
{
    // Part b.
    // creates three distance objects
    Distance d1, d2, d3;

    // sets the feet and inches of the first two distances
    d1.set(5, 6);
    d2.set(6, 20);

    // calls the add function to add the first two distances
    // and assigns the result to the third distance
    d3 = d1.add(d2);

    // displays all distances
    cout << "Distance 1:" << endl;
    d1.disp();
    cout << endl;
    cout << "Distance 2:" << endl;
    d2.disp();
    cout << endl;
    cout << "Distance 3:" << endl;
    d3.disp();

    return 0;
}