#include "batsman.h"
#include <iostream>
using namespace std;

void Batsman::readData(int bcode, const char bname[], int innings, int notout, int runs)
{
    this->bcode = bcode;
    strcpy(this->bname, bname);
    this->innings = innings;
    this->notout = notout;
    this->runs = runs;
    this->batavg = calcavg();
}

void Batsman::displayData()
{
    cout << "Batsman bcode  : " << bcode << endl;
    cout << "Batsman name   : " << bname << endl;
    cout << "Batsman innings: " << innings << endl;
    cout << "Batsman notout : " << notout << endl;
    cout << "Batsman runs   : " << runs << endl;
    cout << "Batsman batavg : " << batavg << endl;
}

double Batsman::calcavg()
{
    return (runs / (double)(innings - notout));
}
