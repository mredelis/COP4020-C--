#include <iostream>
#include <fstream>
#include "Stud.h"

using namespace std;

int main()
{
  fstream file("STUD.DAT", ios::out | ios::in | ios::binary);
  if (!file)
  {
    cout << "File could not be opened" << endl;
    return 1;
  }

  // First, write Student objects to file
  Stud outStud;
  int count;

  cout << "Enter number of Student records to write: ";
  cin >> count;
  while (count > 0)
  {
    outStud.Enter();
    file.write(reinterpret_cast<char *>(&outStud), sizeof(Stud));
    count--;
  }

  cout << "Would you like to add a new student? (y/n) ";
  char c;
  cin >> c;
  if (c == 'y' || c == 'Y')
  {
    outStud.Enter();
    file.write(reinterpret_cast<char *>(&outStud), sizeof(Stud));
  }
  else
    cout << "No new records added to the file" << endl;

   Stud inStud;
  file.seekp(0);

  while (file.peek() != EOF)
  {
    file.read(reinterpret_cast<char *>(&inStud), sizeof(Stud));
    inStud.Display();
  }

  file.close();

  return 0;
}
