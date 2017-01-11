#include <iostream>
using namespace std;

int main()
{
  int num = 1;
  int &num_ref = num;
  
  cout << "num = " << num << endl;
  cout << "num_ref = " << num_ref << endl;

  ++num;
  cout << "num = " << num << endl;
  cout << "num_ref = " << num_ref << endl;
  
  return 0;
  }
