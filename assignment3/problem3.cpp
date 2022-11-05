#include <fstream>
#include <string>
using namespace std;

int main()
{
    string str = "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";

    ofstream fout;
    fout.open("OUT.TXT");
    fout << str;

    fout.close();

    return 0;
}