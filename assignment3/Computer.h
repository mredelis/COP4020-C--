#include <iostream>
using namespace std;

class Computer
{
    char chiptype[100];
    int speed;

public:
    void getdetails()
    {
        cout << "Enter chip speed: ";
        cin >> speed;
        // before using getline, flush input buffer
        cin.ignore();
        cout << "Enter chiptype: ";
        // gets(chiptype);
        cin.getline(chiptype, 100);
    }

    void showdetails()
    {
        cout << "Chip: " << chiptype << endl
             << "Speed = " << speed << endl;
    }
};
