#include <iostream>
using namespace std;

int main()
{
  int number = 2;
  int *ptr_number = &number;

  cout << "number = " << number << endl;
  cout << "ptr_number = " << ptr_number << endl;

  int *ptr2 = new int(88);
  cout << ptr2 << endl;

  *ptr2 = 99;
  cout << ptr2 << endl;
  cout << *ptr2 << endl;
  
  delete ptr2;

  return 0;
}
