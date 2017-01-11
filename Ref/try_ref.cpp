#include <iostream>
using namespace std;

int add_integer(int &num1, int &num2)
  {
   return num1+num2;
  } 
int main()
{
  int num = 1, int1 = 2, int2 = 3;
  int &num_ref = num;

  cout << "num = " << num << endl;
  cout << "num_ref = " << num_ref << endl;
  cout << endl; 
  num_ref = 2;
  cout << "num = " << num << endl;
  cout << "num_ref = " << num_ref << endl;
  
  cout << "int1 + int2 = " << add_integer(int1, int2) << endl;

  return 0;
}
