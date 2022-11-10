#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    // Part b.
    // creates two rectangle objects
    Rectangle r1, r2;

    // sets the length and width of the rectangles
    r1.setlength(5);
    r1.setwidth(2.5);
    r2.setlength(5);
    r2.setwidth(18.9);

    // displays each rectangle and its area and perimeter
    cout << "First Rectangle: " << endl;
    r1.show();
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    cout << endl;

    cout << "Second Rectangle: " << endl;
    r2.show();
    cout << "Area: " << r2.area() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl;

    cout << endl;

    // Part c.
    // compares the area of the two rectangles
    string result = (r1.sameArea(r2) == 1) ? "the same." : "different.";
    cout << "The areas of the rectangles are " << result << endl;

    cout << endl;
    cout << endl;

    // resets the length and width of the first rectangle
    r1.setlength(15);
    r1.setwidth(6.3);

    // displays each rectangle and its area and perimeter
    cout << "First Rectangle: " << endl;
    r1.show();
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    cout << endl;

    cout << "Second Rectangle: " << endl;
    r2.show();
    cout << "Area: " << r2.area() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl;

    cout << endl;

    // compares the area of the two rectangles
    result = (r1.sameArea(r2) == 1) ? "the same." : "different.";
    cout << "The areas of the rectangles are " << result << endl;

    return 0;
}