#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
  Rectangle rec1, rec2;
  rec1.setlength(5);
  rec1.setwidth(2.5);
  rec2.setlength(20);
  rec2.setwidth(2);

  cout << "========= First rectangle ========= : " << endl;
  rec1.show();
  cout << "Area: " << rec1.area() << endl
       << "Perimeter: " << rec1.perimeter() << endl;

  cout << "========= Second rectangle ========= : " << endl;
  rec2.show();
  cout << "Area: " << rec2.area() << endl
       << "Perimeter: " << rec2.perimeter() << endl;

  if (rec1.sameArea(rec2))
    cout << "Rectangles have the same area\n";
  else
    cout << "Rectangles do not have the same area\n";

  // set and show new dimensions
  rec1.setlength(10);
  rec1.setwidth(4);

  cout << "========= First rectangle ========= : " << endl;
  rec1.show();
  cout << "Area: " << rec1.area() << endl
       << "Perimeter: " << rec1.perimeter() << endl;

  cout << "========= Second rectangle ========= : " << endl;
  rec2.show();
  cout << "Area: " << rec2.area() << endl
       << "Perimeter: " << rec2.perimeter() << endl;

  if (rec1.sameArea(rec2))
    cout << "Rectangles have the same area\n";
  else
    cout << "Rectangles do not have the same area\n";

  return 0;
}