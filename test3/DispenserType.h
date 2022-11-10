#include <iostream>

using namespace std;

class DispenserType
{
private:
    int numberOfItems, cost;

public:
    // sets the number of items in the dispenser to 50 and the cost to 50 cents
    DispenserType()
    {
        numberOfItems = 50;
        cost = 50;
    }
    // sets the number of items in the dispenser and the cost to a specific amount set by the user
    DispenserType(int numberOfItems, int cost)
    {
        this->numberOfItems = numberOfItems;
        this->cost = cost;
    }
    // returns the number of items left in the dispenser
    int getNoOfItems()
    {
        return numberOfItems;
    }
    // returns the cost of the item
    int getCost()
    {
        return cost;
    }
    // simulates dispensing an item and reduces the number of items by 1
    void makeSale()
    {
        numberOfItems--;
    }
};