#include <iostream>
#include "student.h"
#include "batsman.h"

#include "report.h"
#include "rectangle.h"
#include "complex.h"
#include "distance.h"
#include "time.h"

using namespace std;

int main()
{
    cout << "========== Exercise 1 ==========" << endl;
    Student myStudent;
    myStudent.takeData(35, "Lindsay", 3, 4, 5);
    myStudent.showData();

    cout << "========== Exercise 2 ==========" << endl;
    Batsman myBatsman;
    myBatsman.readData(1234, "Otani", 6, 4, 3);
    myBatsman.displayData();

    cout << "========== Exercise 6 ==========" << endl;
    Report rep;
    float mark[5] = {5.0, 4.2, 3.3, 3.1, 4.5};
    rep.READINFO(5465, "Edel", mark);
    rep.DISPLAYINFO();

    cout << "========== Exercise 7 ==========" << endl;
    Rectangle r1, r2;
    r1.setlength(5);
    r1.setwidth(2.5);
    r2.setlength(5);
    r2.setwidth(18.9);

    cout << "First Rectangle: " << endl;
    r1.show();
    cout << "Area: " << r1.area() << " Perimeter: " << r1.perimeter() << endl;

    cout << "Second Rectangle: " << endl;
    r2.show();
    cout << "Area: " << r2.area() << " Perimeter: " << r2.perimeter() << endl;

    cout << endl;
    string result = (r1.sameArea(r2) == 1) ? "the same" : "different";
    cout << "The area of the rectangles is " << result << endl;

    cout << endl;
    cout << "Exercise 7 Second Part" << endl;
    cout << "First Rectangle: " << endl;
    r1.setlength(15);
    r1.setwidth(6.3);
    r1.show();
    cout << "Area: " << r1.area() << " Perimeter: " << r1.perimeter() << endl;

    cout << "Second Rectangle: " << endl;
    r2.show();
    cout << "Area: " << r2.area() << " Perimeter: " << r2.perimeter() << endl;

    cout << endl;
    result = (r1.sameArea(r2) == 1) ? "the same" : "different";
    cout << "The area of the new rectangles is " << result << endl;

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

    cout << "========== Exercise 10 ==========" << endl;
    Time t1, t2, t3;
    t1.settime(10, 50);
    t2.settime(15, 40);
    t3 = t1.sum(t2);

    cout << "Time 1:" << endl;
    t1.showtime();
    cout << "Time 2:" << endl;
    t2.showtime();
    cout << "Time 3 = Time 1 + Time 2:" << endl;
    t3.showtime();

    return 0;
}