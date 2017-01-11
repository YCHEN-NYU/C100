#include <iostream>
#include "Account.h"
using namespace std;

int main()
{

  Account citi(87389, 100.0);
  citi.Show_account_info();
  citi.Set_account_number(28339);
  citi.Show_account_info();
  citi.Deposit(199.9);
  citi.Show_account_info();
  citi.Withdraw(40.0);
  citi.Show_account_info(); 
  return 0;
}

