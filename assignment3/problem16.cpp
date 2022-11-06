#include <iostream>
#include <fstream>
#include "Item.h"

using namespace std;

int main()
{
  // First write data to file
  fstream file("STOCK.DAT", ios::out | ios::binary);
  if (!file)
  {
    cout << "File could not be opened" << endl;
    return 1;
  }

  Item outItem;
  int count;
  int Ino;
  char Item[20];

  cout << "Enter number of records to write: ";
  cin >> count;

  while (count > 0)
  {
    cout << "Enter Ino (integer): ";
    cin >> Ino;
    // before using getline, flush input buffer
    cin.ignore();
    cout << "Enter Item (string): ";
    cin.getline(Item, 20);

    outItem.readData(Ino, Item);
    file.write(reinterpret_cast<char *>(&outItem), sizeof(Item));
    count--;
  }

  // Search Item in position 1 and display its content
  outItem.Search(2);

  // Modify Item in position 1
  outItem.Modify(2);
  outItem.Search(2);

  file.close();

  return 0;
}
