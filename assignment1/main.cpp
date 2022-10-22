#include <iostream>
#include "student.h"
#include "batsman.h"

#include "complex.h"
#include "distance.h"

using namespace std;

int main()
{
    Student myStudent;

    cout << "========== Exercise 1 ==========" << endl;
    myStudent.takeData(35, "Lindsay", 3, 4, 5);
    myStudent.showData();

    cout << "========== Exercise 2 ==========" << endl;
    Batsman myBatsman;
    myBatsman.readData(1234, "Otani", 6, 4, 3);
    myBatsman.displayData();

    cout << "========== Exercise 8 ==========" << endl;
    Complex c1, c2, c3;
    c1.set(4, 2);
    c2.set(5, 1);
    c3 = c1.sum(c2);

    cout << "Complex number 1:" << endl;
    c1.disp();
    cout << "Complex number 2:" << endl;
    c2.disp();
    cout << "Complex number 3 = Complex 1 + Complex 2:" << endl;
    c3.disp();

    cout << "========== Exercise 9 ==========" << endl;
    Distance d1, d2, d3;
    d1.set(5, 4);
    d2.set(9, 20);
    d3 = d1.add(d2);

    cout << "Distance 1:" << endl;
    d1.disp();
    cout << "Distance 2:" << endl;
    d2.disp();
    cout << "Distance 3 = Distance 1 + Distance 2:" << endl;
    d3.disp();

    return 0;
}