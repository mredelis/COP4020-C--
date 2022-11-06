#include <iostream>
#include <fstream>
#include "Employee14.h"
using namespace std;

int Employee14::Countrec()
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

void Employee14::readData(int eno, char *ename)
{
  this->Eno = eno;
  strcpy(this->Ename, ename);
}