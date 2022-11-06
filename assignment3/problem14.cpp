#include <iostream>
#include <fstream>
#include "Student.h"

using namespace std;

int main()
{
  fstream file("STUDENT.DAT", ios::out | ios::in | ios::binary);
  if (!file)
  {
    cout << "File could not be opened" << endl;
    return 1;
  }

  // First, write Student objects to file
  Student outStudent;
  int count;

  cout << "Enter number of Student records to write: ";
  cin >> count;

  while (count > 0)
  {
    outStudent.EnterData();
    file.write(reinterpret_cast<char *>(&outStudent), sizeof(Student));
    count--;
  }

  // Second, read objects from file and display them
  Student inStudent;
  file.seekp(0);
  while (file.peek() != EOF)
  {
    file.read(reinterpret_cast<char *>(&inStudent), sizeof(Student));
    if (inStudent.ReturnPercentage() > 75)
    {
      inStudent.DisplayData();
    }
  }

  file.close();

  return 0;
}
