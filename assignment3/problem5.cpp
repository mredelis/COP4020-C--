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
    int words = 0;
    while (!fin.eof())
    {
        fin.get(ch);
        // if it is space, increment word count
        if (ch == ' ')
        {
            words++;
        }
    }
    // at eof, all spaces have been counted. Increment words one more time for correct word count
    words++;

    cout << "Number of words present in the file -> " << words << endl;
}