class Dispenser
{
private:
  int numOfItems;
  int cost;

public:
  // default constructor
  Dispenser();
  // overloaded constructor
  Dispenser(int setNumOfItems, int setCost);
  int getNumOfItems();
  int getCost();
  void doSale();
};

Dispenser::Dispenser()
{
  numOfItems = 100;
  cost = 20;
}

Dispenser::Dispenser(int setNumOfItems, int setCost)
{
  numOfItems = setNumOfItems;
  cost = setCost;
}

int Dispenser::getNumOfItems()
{
  return numOfItems;
}

int Dispenser::getCost()
{
  return cost;
}

void Dispenser::doSale()
{
  numOfItems--;
}
