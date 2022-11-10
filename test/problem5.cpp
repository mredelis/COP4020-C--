#include "CashRegister.h"
#include "Dispenser.h"
#include <iostream>
using namespace std;

void showProducts();
void sellProduct(Dispenser &, CashRegister &);

int main()
{
  // initialize vending machine
  Dispenser candy(100, 2);
  Dispenser chips(200, 3);
  Dispenser gum(300, 1);
  Dispenser cookies(50, 3);

  CashRegister regCounter;

  int ch;
  showProducts();
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
    showProducts();
    cin >> ch;
  }

  return 0;
}

void showProducts()
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

void sellProduct(Dispenser &product, CashRegister &pCounter)
{
  int amt;
  int extraAmt;

  // if there's product type in the dispenser
  if (product.getNumOfItems() > 0)
  {
    cout << "Deposit " << product.getCost() << " dollars: ";
    cin >> amt;

    while (amt < product.getCost())
    {
      cout << "Deposit an additional " << product.getCost() - amt << " dollars: ";
      cin >> extraAmt;
      amt += extraAmt;
    }

    if (amt >= product.getCost())
    {
      pCounter.updateCashRegister(amt);
      product.doSale();
      cout << "Sale made successfully" << endl;
    }
  }
  else
  {
    cout << "Sorry, item is sold out" << endl;
  }
}