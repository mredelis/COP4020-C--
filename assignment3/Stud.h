#include <iostream>
using namespace std;

class Stud
{
  int Rno;
  char Name[20];

public:
  void Enter()
  {
    cout << "Enter Student Rno: ";
    cin >> Rno;
    cout << "Enter Student Name: ";
    cin >> Name;
  }

  void Display()
  {
    cout << "Student Rno: " << Rno << " Student Name: " << Name << endl;
  }
};
