#include <string.h>

class Item
{
private:
  int Ino;
  char Item[20];

public:
  // Function to search and display the content from a particular record number
  void Search(int);
  // Function to modify the content of a particular record number
  void Modify(int);

  // Added function to create Item objects
  void readData(int, char *);
};
