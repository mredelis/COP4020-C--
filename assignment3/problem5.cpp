#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void countNumOfWords();

int main()
{
    countNumOfWords();
    return 0;
}

void countNumOfWords()
{
    ifstream fin;
    fin.open("OUT.TXT");

    char ch;
    int count = 0;
    while (!fin.eof())
    {
        fin.get(ch);
        // if (ch == ' ')
        if (isblank(ch))
        {
            count++;
        }
    }
    cout << "Number of blanks present in the file -> " << count << endl;
}