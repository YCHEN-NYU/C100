#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account{
 private:
  int account_number;
  double balance;
 public:
  Account(int account_number = 0, double balance = 0.0);
  void Show_account_info() const;
  int Get_account_number() const;
  void Set_account_number(int account_number);
  double Get_balance() const;
  void Deposit(double deposit_amount);
  void Withdraw(double withdraw_amount);
};

#endif
