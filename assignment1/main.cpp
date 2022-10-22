#include <iostream>
#include "student.h"

using namespace std;

int main()
{
    Student myStudent;

    cout << "========== Exercise 1 ==========" << endl;
    myStudent.takeData(35, "Lindsay", 3, 4, 5);
    myStudent.showData();

    return 0;
}