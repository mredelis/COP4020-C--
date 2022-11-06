#include <iostream>
#include <fstream>
#include "Computer.h"

using namespace std;

int main()
{
  fstream file("CHIP.DAT", ios::out | ios::in | ios::binary);
  if (!file)
  {
    cout << "File could not be opened" << endl;
    return 1;
  }

  // First, write Computer objects to file
  Computer outComputer;
  int count;

  cout << "Enter number of records to write: ";
  cin >> count;

  while (count > 0)
  {
    outComputer.getdetails();
    file.write(reinterpret_cast<char *>(&outComputer), sizeof(Computer));
    count--;
  }

  // Second, read objects from file and display them
  Computer inComputer;
  file.seekp(0);
  while (file.peek() != EOF)
  {
    file.read(reinterpret_cast<char *>(&inComputer), sizeof(Computer));
    inComputer.showdetails();
  }

  file.close();

  return 0;
}
