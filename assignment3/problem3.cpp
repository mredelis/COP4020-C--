#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void readAlphabets();

int main()
{
    readAlphabets();
    return 0;
}

void readAlphabets()
{
    ifstream fin;
    fin.open("OUT.TXT");

    char ch;
    int cnt = 0;
    while (!fin.eof())
    {
        fin.get(ch);
        if (isalpha(ch))
        {
            cnt++;
        }
    }
    cout << "Number of alphabets present in the file -> " << cnt << endl;
    fin.close();
}