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

    fin.open("FIRST1.TXT");
    fout.open("SECOND1.TXT");

    char word[100];
    while (!fin.eof())
    {
        fin >> word;
        if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u')
            fout << word << " ";
    }
    fin.close();
    fout.close();
}