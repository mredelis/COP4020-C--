#include <fstream>

int main()
{
    std::ofstream myFile;
    myFile.open("NOTES.TXT");

    for (int i = 1; i <= 100; i++)
        myFile << i << std::endl;

    myFile.close();

    return 0;
}