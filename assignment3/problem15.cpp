#include <fstream>
#include <iostream>
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

    // write Student objects to file
    STUD student;
    int count;

    cout << "Enter number of records to write: ";
    cin >> count;

    while (count > 0)
    {
        student.Enter();
        file.write(reinterpret_cast<char *>(&student), sizeof(STUD));
        count--;
    }

    // read objects from file and display them
    STUD inStudent;
    file.seekp(0);
    while (file.peek() != EOF)
    {
        file.read(reinterpret_cast<char *>(&inStudent), sizeof(STUD));
        inStudent.Display();
    }

    // ask user if they want to add a new student record
    cout << "Do you want to add a new student record? (y/n): ";

    char choice;
    cin >> choice;

    STUD newStudent;

    if (choice == 'y' || choice == 'Y')
        newStudent.addStudent();

    else
        cout << "No new student record added." << endl;

    file.close();

    return 0;
}