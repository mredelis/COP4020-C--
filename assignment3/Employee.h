#include <iostream>
using namespace std;

// class Employee
// {
//     int ENO;
//     char ENAME[10];

// public:
//     // Employee(int eno, char* name)
//     // {
//     //     this->ENO = eno;
//     //     strcpy(this->ENAME, name);
//     // }

//     void GETIT()
//     {
//         cout << "Enter employee name: ";
//         // replace gets for getline due to compiler issues
//         // gets(ENAME);
//         cin.getline(ENAME, 10);
//         cout << "Enter employee number: ";
//         cin >> ENO;
//     }

//     void SHOWIT()
//     {
//         cout << ENO << ENAME << endl;
//     }
// };

class Employee
{
    int Eno;
    char Ename[20];

public:
    void getdata()
    {
        cout << "Enter Employee Number: ";
        cin >> Eno;
        cout << "Enter Employee Name: ";
        cin >> Ename;
    }
    void putdata()
    {
        cout << "Employee Number: " << Eno << endl;
        cout << "Employee Name: " << Ename << endl;
    }
    // function to count the total number of records
    int countRecords();
};

int Employee::countRecords()
{
    fstream file;
    file.open("EMP.DAT", ios::binary | ios::in);
    file.seekg(0, ios::end);
    int bytes = file.tellg();
    int count = bytes / sizeof(Employee);
    file.close();
    return count;
}
