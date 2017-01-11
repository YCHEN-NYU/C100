#include <iostream>
using namespace std;

int *square_ptr(int number){
  int *dynamic_allocated_result = new int(number*number);
  return dynamic_allocated_result;
}

int &square_ref(int number){
  int *dynamic_allocated_result = new int(number*number);
  return *dynamic_allocated_result;
}

int main()
{
  int number = 2;
  cout << "number = " << number << endl;
  cout << *square_ptr(number) << endl;
  cout << square_ref(number) << endl;
  return 0;
}
