#include <iostream>
#include <fstream>

using namespace std;

class STUD
{
    int Rno;
    char Name[20];

public:
    void Enter()
    {
        cout << "Enter Roll Number: ";
        cin >> Rno;
        cout << "Enter Name: ";
        cin >> Name;
    }

    void Display()
    {
        cout << "Roll Number: " << Rno << endl;
        cout << "Name: " << Name << endl;
    }

    // function that adds a new student at the bottom of the file
    void addStudent()
    {
        fstream file;
        file.open("STUD.DAT", ios::binary | ios::app);
        STUD student;
        student.Enter();
        file.write(reinterpret_cast<char *>(&student), sizeof(STUD));
        file.close();
    }
};