#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void countLines();

int main()
{
    countLines();
    return 0;
}

void countLines()
{
    ifstream fin;
    fin.open("STORY1.TXT");

    string line;
    int count = 0;

    while (!fin.eof())
    {
        getline(fin, line);
        if (line[0] != 'A')
        {
            count++;
        }
    }

    cout << "Number of lines not starting with A are -> " << count << endl;
    fin.close();
}