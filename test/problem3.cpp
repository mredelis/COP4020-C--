#include <iostream>
#include "Distance.h"

int main()
{
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