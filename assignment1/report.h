#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;

class Report
{
private:
    int adno;
    char name[20];
    float marks[5];
    float average;
    float GETAVG();

public:
    void READINFO(int adno, const char name[], float marks[]);
    void DISPLAYINFO();
};
