#include <fstream>
#include <iostream>
#include "Emp.h"
using namespace std;

// NOTE: to view just the amount of records in the file, comment out all lines except lines: 32 & 40

int main()
{
    // create a file object
    fstream file("EMP.DAT", ios::out | ios::in | ios::binary);

    // if file does not exist, create it
    if (!file)
    {
        cout << "File could not be opened" << endl;
        return 1;
    }

    // First, write Employee objects to file
    Employee employee; // create an Employee object
    int count;         // count of records

    cout << "Enter number of employee records to write: ";
    cin >> count; // get the number of records to write

    while (count > 0)
    {
        employee.getData();
        file.write(reinterpret_cast<char *>(&employee), sizeof(Employee));
        count--;
    }

    // Second, read objects from file and display them
    Employee inEmployee;
    file.seekp(0); // move to the beginning of the file

    while (file.peek() != EOF)
    {
        file.read(reinterpret_cast<char *>(&inEmployee), sizeof(Employee)); // read the next record
        inEmployee.displayData();                                           // display the record
    }

    // Third, count the number of records in the file
    cout << "Total number of Employee records: " << inEmployee.countRecords() << endl;

    file.close();
}
