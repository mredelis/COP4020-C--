#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    // Part b.
    // creates three complex number objects
    Complex c1, c2, c3;

    // sets the real and imaginary parts of the first two complex numbers
    c1.set(4, 2);
    c2.set(5, 1);

    // calls the sum function to add the two complex numbers
    // and assigns the result to the third complex number
    c3 = c1.sum(c2);

    // displays all complex numbers
    cout << "Complex number 1:" << endl;
    c1.disp();
    cout << "Complex number 2:" << endl;
    c2.disp();
    cout << "Complex number 3:" << endl;
    c3.disp();

    return 0;
}