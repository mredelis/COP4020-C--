class CashRegister
{
private:
  int cashOnHand;

public:
  // default amount of cash on the register
  CashRegister();

  // set cash on register to a different amount
  CashRegister(int cashIn);

  int getCurrentBalance();
  // Update amount in Register based on $ deposited by customer
  void acceptAmount(int amountIn);
};

CashRegister::CashRegister()
{
  cashOnHand = 500;
}

CashRegister::CashRegister(int cashIn)
{
  cashOnHand = cashIn;
}

void CashRegister::acceptAmount(int amountIn)
{
  cashOnHand += amountIn;
}

int CashRegister::getCurrentBalance()
{
  return cashOnHand;
}