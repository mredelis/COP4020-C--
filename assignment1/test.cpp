#include "test.h"
#include <iostream>
#include <string.h>
using namespace std;

void Test::SCHEDULE()
{
    // int code, noCand;
    // string descr;

    cout << "Enter Test Code: ";
    cin >> this->testCode;
    cout << "Enter Test Description: ";
    cin >> this->description;
    cout << "Enter Test No. Candidate:   ";
    cin >> this->noCandidate;

    // this->testCode = testCode;
    // this->description = description;
    // this->noCandidate = noCandidate;

    centerReqd = CALCNTR();
}

void Test::DISPTEST()
{
    cout << "Test Code:            " << testCode << endl;
    cout << "Test Description:     " << description << endl;
    cout << "Test No. Candidate:   " << noCandidate << endl;
    cout << "Test Center Required: " << centerReqd << endl;
}

double Test::CALCNTR()
{
    return (noCandidate / (100 + 1));
}