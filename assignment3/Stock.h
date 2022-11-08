#include <iostream>
#include <fstream>

using namespace std;

class Stock
{
    int Ino;
    char Item[20];

public:
    void Enter()
    {
        cout << "Enter Item Number: ";
        cin >> Ino;
        cout << "Enter Item Name: ";
        cin >> Item;
    }

    void Display()
    {
        cout << "Item Number: " << Ino << endl;
        cout << "Item Name: " << Item << endl;
    }

    void MakeChoice()
    {
        int choice;
        int recordNumber;

        do
        {

            cout << "1. Search" << endl;
            cout << "2. Modify" << endl;
            cout << "3. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            cin.ignore();

            if (choice == 1)
            {
                cout << "Enter record number: ";
                cin >> recordNumber;
                cin.ignore();
                Search(recordNumber);
            }

            else if (choice == 2)
            {
                cout << "Enter record number: ";
                cin >> recordNumber;
                cin.ignore();
                Modify(recordNumber);
            }

            else if (choice == 3)
                cout << "Exiting..." << endl;

            else
                cout << "Invalid choice" << endl;

            cout << endl;

        } while (choice != 3);
    }

    // Function to search and display the content from a particular record number
    void Search(int);
    // Function to modify the content of a particular record number
    void Modify(int);
};

void Stock::Search(int recNo)
{
    fstream file;
    file.open("STOCK.DAT", ios::binary | ios::in);
    file.seekp((recNo - 1) * sizeof(Stock));
    file.read(reinterpret_cast<char *>(this), sizeof(Stock));
    cout << "Item Number: " << Ino << endl;
    cout << "Item Name: " << Item << endl;
    file.close();
}

void Stock::Modify(int recNo)
{
    fstream file;
    file.open("STOCK.DAT", ios::binary | ios::in | ios::out);
    cout << "Enter New Item Number: ";
    cin >> Ino;
    cin.ignore();
    cout << "Enter New Item Name: ";
    cin.getline(Item, 20);
    file.seekg((recNo - 1) * sizeof(Stock)); // seek to the record
    file.write(reinterpret_cast<char *>(this), sizeof(Stock));
    file.close();
}