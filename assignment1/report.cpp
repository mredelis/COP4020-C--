#include <string.h>
#include <algorithm>
#include <iostream>
#include "report.h"
using namespace std;

void Report::READINFO(int adno, const char name[], float marks[])
{
    this->adno = adno;
    strcpy(this->name, name);
    for (int i = 0; i < 5; i++)
    {
        this->marks[i] = marks[i];
    }

    average = GETAVG();
}

void Report::DISPLAYINFO()
{
    cout << "Admision No.: " << adno << endl;
    cout << "Name: " << name << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Mark " << i + 1 << " = " << marks[i + 1] << endl;
    }
    cout << "Average: " << average << endl;
}

float Report::GETAVG()
{
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
    }
    return total / 5;
}