class DispenserType
{
private:
  int numberOfItems;
  int cost;

public:
  // default constructor
  DispenserType();
  // overloaded constructor
  DispenserType(int setNumOfItems, int setCost);
  int getNoOfItems();
  int getCost();
  void makeSale();
};

DispenserType::DispenserType()
{
  numberOfItems = 50;
  cost = 50;
}

DispenserType::DispenserType(int setNumOfItems, int setCost)
{
  numberOfItems = setNumOfItems;
  cost = setCost;
}

int DispenserType::getNoOfItems()
{
  return numberOfItems;
}

int DispenserType::getCost()
{
  return cost;
}

void DispenserType::makeSale()
{
  numberOfItems--;
}
