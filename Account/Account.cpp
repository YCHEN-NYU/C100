#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(int account_number, double balance ){
  this->account_number = account_number;
  this->balance = balance;
}

void Account::Show_account_info() const{
  cout << "Account Number:  " << Get_account_number() << endl;
  cout << "Balance: " << Get_balance() << endl;
}

int Account::Get_account_number() const{
  return account_number;
}

void Account::Set_account_number(int account_number){
  this->account_number = account_number;
}

double Account::Get_balance() const{
  return balance;
}

void Account::Deposit(double deposit_amount){
  this->balance += deposit_amount;
}

void Account::Withdraw(double withdraw_amount){
  this->balance -= withdraw_amount;
}


