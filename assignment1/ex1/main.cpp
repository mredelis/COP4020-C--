#include <iostream>
#include "student.h"

int main()
{
    student myStudent;

    myStudent.takeData(35, "Lindsay", 3, 4, 5);
    myStudent.showData();

    return 0;
}