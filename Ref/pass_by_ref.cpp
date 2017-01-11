#include <iostream>

using namespace std;

void square(int *ptr_number){
  cout << "In square(): ptr_number = " << ptr_number << endl;
  *ptr_number *= *ptr_number;
}

void cubic(int &ptr_number){
  ptr_number = ptr_number*ptr_number*ptr_number;
}
int main()
{
  int number = 8;

  cout << "In main(): &number = " << &number << endl;
  cout << "number = " << number << endl;
  square(&number);
  cout << "number = " << number << endl;

  cubic(number);
  cout << "number^6 = " << number << endl;
  return 0;
}
