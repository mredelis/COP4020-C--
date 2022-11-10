#include <iostream>
#include "CashRegister.h"
#include "DispenserType.h"

using namespace std;

void showSelection();
void sellProduct(DispenserType &product, CashRegister &pCounter);

int main()
{
    // creates a cash register object
    CashRegister counter;

    // creates 4 dispenserType objects
    DispenserType candy(100, 2), chips(200, 4), gum(300, 3), cookies(50, 5);
    int choice;

    // calls the showSelection function
    showSelection();
    cin >> choice;

    // loops until the user enters 5 to quit
    while (choice != 5)
    {
        switch (choice)
        {
        case 1:
            sellProduct(candy, counter);
            break;
        case 2:
            sellProduct(chips, counter);
            break;
        case 3:
            sellProduct(gum, counter);
            break;
        case 4:
            sellProduct(cookies, counter);
            break;
        default:
            cout << "Invalid selection." << endl;
        }

        showSelection();
        cin >> choice;
    }

    return 0;
}

// displays the selection of products
void showSelection()
{
    cout << "Make your selection from the available menu items:" << endl;
    cout << "1. Candies" << endl;
    cout << "2. Chips" << endl;
    cout << "3. Gum" << endl;
    cout << "4. Cookies" << endl;
    cout << "5. Exit" << endl;
}

// simulates the sale of a product
void sellProduct(DispenserType &product, CashRegister &pCounter)
{
    int amount, amount2;

    // if dispenser is not empty
    if (product.getNoOfItems() > 0)
    {
        cout << "Item costs " << product.getCost() << " dollars." << endl;
        cout << "Please deposit " << product.getCost() << " dollars to make purchase or 0 to cancel sale:" << endl;
        cin >> amount;

        while (amount < product.getCost())
        {
            if (amount == 0)
            {
                cout << "Sale cancelled." << endl;
                return;
            }
            else
            {
                cout << "Please deposit an additional " << product.getCost() - amount << " dollars to make purchase." << endl;
                cin >> amount2;
                amount += amount2;
            }
        }

        // if user enters enough money
        if (amount >= product.getCost())
        {
            pCounter.acceptAmount(amount);
            product.makeSale();

            if (amount > product.getCost())
            {
                amount2 = amount - product.getCost();
                cout << "Please take your change of " << amount2 << " dollars." << endl;
            }

            cout << "Please take your item." << endl;
        }
    }
    else
    {
        cout << "Sorry, this item is sold out." << endl;
    }
}