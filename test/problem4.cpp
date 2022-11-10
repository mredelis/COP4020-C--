#include <iostream>
#include "Time.h"

int main()
{
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