#include <fstream>
#include <iostream>
#include <string.h>

using namespace std;
class Item
{
private:
  int Ino;
  char Item[20];

public:
  // Function to search and display the content from a particular record number
  void Search(int RecNo)
  {
    fstream File;
    File.open("STOCK.DAT", ios::binary | ios::in);
    if (!File)
    {
      cout << "File could not be opened for writing" << endl;
      return;
    }

    // Move the file pointer to position the file before writing
    File.seekp((RecNo - 1) * sizeof(Item));

    File.read((char *)this, sizeof(Item));
    cout << "Item with RecNo = " << RecNo << endl
         << Ino << " ==> " << Item << endl;
    File.close();
  }

  // Function to modify the content of a particular record number
  void Modify(int RecNo)
  {
    fstream File;
    File.open("STOCK.DAT", ios::binary | ios::in | ios::out);
    if (!File)
    {
      cout << "File could not be opened for reading" << endl;
      return;
    }

    cout << "Modify Item with RecNo = " << RecNo << endl;
    cout << "Enter new Ino: ";
    cin >> Ino;
    cin.ignore();
    cout << "Enter new Item: ";
    cin.getline(Item, 20);

    // Move the file pointer to position the file before reading
    File.seekg((RecNo - 1) * sizeof(Item));

    File.write((char *)this, sizeof(Item));
    File.close();
  }

  // Added function to create Item objects

  void readData(int ino, char *item)
  {
    this->Ino = ino;
    strcpy(this->Item, item);
  }
};