#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{

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

  return 0;
}