#include <iostream>
using namespace std;
class Employee14
{
  int Eno;
  char Ename[20];

public:
  // Function to count the total number of records
  int Countrec()
  {
    fstream File;
    File.open("EMP.DAT", ios::binary | ios::in);

    // Move file pointer to EOF and get current position
    File.seekg(0, ios::end);
    int Bytes = File.tellg();
    int Count = Bytes / sizeof(Employee14);
    File.close();
    return Count;
  }

  void readData(int eno, char *ename)
  {
    this->Eno = eno;
    strcpy(this->Ename, ename);
  }

  void displayData()
  {
    cout << "Employee Number: " << Eno << " Employee Name: " << Ename << endl;
  }
};
