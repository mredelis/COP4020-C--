#include <iostream>

using namespace std;

class Rectangle
{
private:
    float length, width;

public:
    // sets the length of the rectangle
    void setlength(float length)
    {
        this->length = length;
    }

    // sets the width of the rectangle
    void setwidth(float width)
    {
        this->width = width;
    }

    // calculates and returns the perimeter of the rectangle
    float perimeter()
    {
        return (2 * (length + width));
    }

    // calculates and returns the area of the rectangle
    float area()
    {
        return (length * width);
    }

    // displays the length and width of the rectangle
    void show()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }

    // returns 1 if the area of both rectangles being compared have the same area.
    // otherwise, returns 0
    int sameArea(Rectangle r)
    {
        return ((area() == r.area()) ? 1 : 0);
    }
};