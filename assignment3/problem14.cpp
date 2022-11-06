#include <iostream>
#include <fstream>
#include "Employee14.h"

using namespace std;

int main()
{
  fstream file("EMP.DAT", ios::out | ios::binary);
  if (!file)
  {
    cout << "File could not be opened" << endl;
    return 1;
  }

  // First, write Employee objects to file
  Employee14 outEmp;
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

    outEmp.readData(Eno, Ename);
    file.write(reinterpret_cast<char *>(&outEmp), sizeof(Employee14));
    count--;
  }

  // Count records
  cout << "Number of Employee Records -> " << outEmp.Countrec() << endl;

  file.close();

  return 0;
}
