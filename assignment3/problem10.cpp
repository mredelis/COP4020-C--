#include <fstream>
#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
  fstream myFile("employee.bin", ios::out | ios::in | ios::binary);
  if (!myFile)
  {
    cout << "File could not be opened" << endl;
    return 1;
  }

  Employee employee1, employee2;

  // write employee object to bin file
  employee1.GETIT();
  myFile.write((char *)&employee1, sizeof(Employee));

  // reposition put pointer to start of the file to read Employee object
  myFile.seekp(0);
  myFile.read((char *)&employee2, sizeof(Employee));
  employee2.SHOWIT();

  myFile.close();

  return 0;
}
