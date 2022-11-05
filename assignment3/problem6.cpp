#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void countWordThe();

int main()
{
    countWordThe();
    return 0;
}

void countWordThe()
{
    ifstream fin;
    fin.open("STORY.TXT");

    char ch;
    int count = 0;
    char word[100];

    while (!fin.eof())
    {
        // >> operator separates on whitespace
        fin >> word;
        if (strcasecmp(word, "the") == 0) // compare without sensitivity to case
        {
            count++;
        }
    }

    cout << "Number of 'the' as independent word in the file -> " << count << endl;
}