#include <iostream>
using namespace std;

class Distance
{
private:
  int feet;
  float inches;

public:
  void set(int f, float in)
  {
    feet = f;
    inches = in;
  }

  void disp()
  {
    cout << feet << " ft " << inches << " inches " << endl;
  }

  Distance add(Distance d)
  {
    Distance temp;
    temp.feet = feet + d.feet;
    temp.inches = inches + d.inches;

    // convert inches to feet if greater than 12
    while (temp.inches >= 12.0)
    {
      temp.inches = temp.inches - 12.0;
      ++temp.feet;
    }

    return temp;
  }
};
