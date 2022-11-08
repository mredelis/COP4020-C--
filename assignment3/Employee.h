#include <iostream>
using namespace std;

class Employee
{
    int ENO;
    char ENAME[10];

public:
    void GETIT()
    {
        cout << "Enter employee name: ";
        // replace gets for getline due to compiler issues
        // gets(ENAME);
        cin.getline(ENAME, 10);
        cout << "Enter employee number: ";
        cin >> ENO;
    }

    void SHOWIT()
    {
        cout << ENO << " " << ENAME << endl;
    }
};
