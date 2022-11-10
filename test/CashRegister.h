class CashRegister
{
private:
  int cashOnRegister;

public:
  // default amount of cash on the register
  CashRegister();

  // set cash on register to a different amount
  CashRegister(int cashIn);

  // Update amount in Register based on $ deposited by customer
  void updateCashRegister(int amountIn);
  int getCurrentBalance();
};

CashRegister::CashRegister()
{
  cashOnRegister = 1000;
}

CashRegister::CashRegister(int cashIn)
{
  cashOnRegister = cashIn;
}

void CashRegister::updateCashRegister(int amountIn)
{
  cashOnRegister += amountIn;
}

int CashRegister::getCurrentBalance()
{
  return cashOnRegister;
}