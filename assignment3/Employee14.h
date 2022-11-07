class Employee14
{
  int Eno;
  char Ename[20];

public:
  // Function to count the total number of records
  int Countrec();

  // Added function to create Employee objects
  void readData(int, char *);
  void displayData();
};
