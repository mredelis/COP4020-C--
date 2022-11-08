#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void readNumOfBlanks();

int main()
{
    readNumOfBlanks();
    return 0;
}

void readNumOfBlanks()
{
    ifstream fin;
    fin.open("OUT.TXT");

    char ch;
    int count = 0;
    while (!fin.eof())
    {
        fin.get(ch);
        if (isblank(ch))
        {
            count++;
        }
    }
    cout << "Number of blanks present in the file -> " << count << endl;
    fin.close();
}