#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void copyToUpper();

int main()
{
    copyToUpper();
    return 0;
}

void copyToUpper()
{
    ifstream fin;
    ofstream fout;

    fin.open("FIRST.TXT");
    fout.open("SECOND.TXT");

    char c;
    while (!fin.eof())
    {
        fin.get(c);
        c = toupper(c);
        fout << c;
    }
    fin.close();
    fout.close();
}