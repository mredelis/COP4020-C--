#include <iostream>

using namespace std;

class CashRegister
{
private:
    int cashOnHand;

public:
    // sets the cash on hand to 500
    CashRegister()
    {
        cashOnHand = 500;
    }
    // sets the cash in the register to a specific amount
    CashRegister(int cash)
    {
        cashOnHand = cash;
    }
    // returns the cash on hand
    int getCurrentBalance()
    {
        return cashOnHand;
    }
    // accepts an amount as an argument and adds it to cash on hand
    void acceptAmount(int amount)
    {
        cashOnHand += amount;
    }
};
