#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::setlength(float len)
{
  length = len;
}

void Rectangle::setwidth(float wid)
{
  width = wid;
}

float Rectangle::perimeter()
{
  return (2 * length + 2 * width);
}

float Rectangle::area()
{
  return length * width;
}

void Rectangle::show()
{
  cout << "Rectangle Length: " << length << endl
       << "Rectangle Width: " << width << endl;
}

int Rectangle::sameArea(Rectangle rec2)
{
  if (this->area() == rec2.area())
    return 1;
  return 0;
}