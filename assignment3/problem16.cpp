#include <iostream>
#include <fstream>
#include "Stock.h"

using namespace std;

int main()
{
    fstream file("STOCK.DAT", ios::out | ios::in | ios::binary);
    if (!file)
    {
        cout << "File could not be opened" << endl;
        return 1;
    }

    // write stock objects to file
    Stock stock;
    int count;

    cout << "Enter number of stock records to write: ";
    cin >> count;

    while (count > 0)
    {
        stock.Enter();
        file.write(reinterpret_cast<char *>(&stock), sizeof(Stock));
        count--;
    }

    // read objects from file and display them
    Stock inStock;
    file.seekp(0);
    while (file.peek() != EOF)
    {
        file.read(reinterpret_cast<char *>(&inStock), sizeof(Stock));
        inStock.Display();
    }

    Stock viewStock;
    viewStock.MakeChoice();

    viewStock.Display();

    file.close();

    return 0;
}