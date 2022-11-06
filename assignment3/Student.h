#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
  char S_Admno[10]; // Admission number of student
  char S_Name[30];  // Name of student
  int Percentage;   // Marks Percentage of student

public:
  void EnterData()
  {
    cout << "Enter Percentage 1-100: ";
    cin >> Percentage;
    cin.ignore();
    cout << "Enter Admission number: ";
    cin.getline(S_Admno, 10);
    cout << "Enter Student Name: ";
    cin.getline(S_Name, 30);
  }

  void DisplayData()
  {
    cout << setw(10) << S_Admno;
    cout << setw(30) << S_Name;
    cout << setw(10) << Percentage << endl;
  }

  int ReturnPercentage()
  {
    return Percentage;
  }
};
