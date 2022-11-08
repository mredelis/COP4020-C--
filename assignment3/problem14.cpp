#include <iostream>
#include <fstream>
#include "Employee14.h"

using namespace std;

int main()
{
  fstream file("EMP.DAT", ios::out | ios::in | ios::binary);
  if (!file)
  {
    cout << "File could not be opened" << endl;
    return 1;
  }

  // First, write Employee objects to file
  Employee14 outEmployee;
  int count;
  int Eno;
  char Ename[20];

  cout << "Enter number of Employee records to write: ";
  cin >> count;

  while (count > 0)
  {
    cout << "Enter Eno (integer): ";
    cin >> Eno;
    // before using getline, flush input buffer
    cin.ignore();
    cout << "Enter Ename (string): ";
    cin.getline(Ename, 20);

    outEmployee.readData(Eno, Ename);
    file.write(reinterpret_cast<char *>(&outEmployee), sizeof(Employee14));
    count--;
  }

  // Count records
  cout << "Number of Employee Records -> " << outEmployee.Countrec() << endl;

  file.close();

  return 0;
}
