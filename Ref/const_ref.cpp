#include <iostream>
using namespace std;

int square_const(const int number){
  return number*number;
}

int square_nonconst(int number){
  number *= number;
  return number;
}

int square_const_ref(const int &number){
  return number*number;
}

int square_nonconst_ref(int &number){
  return number*number;
}

int main(){
  int number = 2;
  cout << "number = " << number <<  "\tsquare_nonconst: " << square_nonconst(number) << endl;
  cout << "number = " << number << "\tsquare_nonconst_ref: " << square_nonconst_ref(number) << endl;

  const int const_number = 10;
  cout << "number = " << number << "\tsquare_const: " << square_const(const_number) << endl; 
  cout << "number = " << number << "\tsquare_const_ref: " << square_const_ref(const_number) << endl;

  return 0;
}
  


