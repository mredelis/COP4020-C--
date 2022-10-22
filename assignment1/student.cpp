#include "student.h"
#include <iostream>
#include <string>

using namespace std;

void Student::takeData(int admno, const char sname[], float eng, float math, float science)
{
    this->admno = admno;
    strcpy(this->sname, sname);
    this->eng = eng;
    this->math = math;
    this->science = science;
    this->total = ctotal();
}

void Student::showData()
{
    cout << "Student admno  : " << admno << endl;
    cout << "Student name   : " << sname << endl;
    cout << "Student eng    : " << eng << endl;
    cout << "Student math   : " << math << endl;
    cout << "Student science: " << science << endl;
    cout << "Student total  : " << total << endl;
}

float Student::ctotal()
{
    return eng + math + science;
}
