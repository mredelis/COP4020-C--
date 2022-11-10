#include "CashRegister.h"
#include "DispenserType.h"
#include <iostream>
using namespace std;

void showSelection();
void sellProduct(DispenserType &, CashRegister &);

int main()
{
  // initialize vending machine
  DispenserType candy(100, 2);
  DispenserType chips(200, 3);
  DispenserType gum(300, 4);
  DispenserType cookies(50, 3);

  CashRegister regCounter;

  int ch;
  showSelection();
  cin >> ch;
  while (ch != 5)
  {
    switch (ch)
    {
    case 1:
      sellProduct(candy, regCounter);
      break;
    case 2:
      sellProduct(chips, regCounter);
      break;
    case 3:
      sellProduct(gum, regCounter);
      break;
    case 4:
      sellProduct(cookies, regCounter);
      break;
    default:
      cout << "Invalid selection." << endl;
    }
    showSelection();
    cin >> ch;
  }

  return 0;
}

void showSelection()
{
  cout << "**** Available Items in the Vending Machine ****" << endl;
  cout << "To select an item, enter: " << endl;
  cout << "1 for Candy" << endl;
  cout << "2 for Chips" << endl;
  cout << "3 for Gum" << endl;
  cout << "4 for Cookies" << endl;
  cout << "5 to exit" << endl;
  cout << "> ";
}

void sellProduct(DispenserType &product, CashRegister &pCounter)
{
  int amt;
  int extraAmt;

  // if there's product type in the DispenserType
  if (product.getNoOfItems() > 0)
  {
    cout << "Item costs " << product.getCost() << " dollars" << endl;
    cout << "Please deposit " << product.getCost() << " to make the purchase or 0 to cancel the sell: ";
    cin >> amt;

    while (amt < product.getCost())
    {
      // sell is canceled
      if (amt == 0)
      {
        cout << "Sorry to see you go. " << endl;
        return;
      }

      cout << "Deposit an additional " << product.getCost() - amt << " dollars: ";
      cin >> extraAmt;
      amt += extraAmt;
    }

    if (amt >= product.getCost())
    {
      pCounter.acceptAmount(amt);
      product.makeSale();
      cout << "\nSale made successfully\n"
           << endl;
    }
  }
  else
  {
    cout << "Sorry, item is sold out" << endl;
  }
}