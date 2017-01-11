#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int num = 1;
  int *ptr_num;
  ptr_num = &num; // address-of operator
  cout << left << setw(10) << "-1-" << endl;
  cout << right << setw(20) << "num" << right << setw(20) << right << num << endl;
  cout << right << setw(20) << "ptr_num" << right << setw(20) << right << ptr_num << endl;
  cout << right << setw(20) << "*ptr_num " << right << setw(20) << right << *ptr_num << endl;
  cout << right << setw(20) << "&(*ptr_num)" << right << setw(20) << right << &(*ptr_num) << endl;
  cout << right << setw(20) << "&ptr_num" << right << setw(20) << right << &ptr_num << endl;
  cout << endl;

  *ptr_num = 2;
  cout << left << setw(10) << "-2-" << endl;
  cout << right << setw(20) << "num" << right << setw(20) << right << num << endl;
  cout << right << setw(20) << "ptr_num" << right << setw(20) << right << ptr_num << endl;
  cout << right << setw(20) << "*ptr_num " << right << setw(20) << right << *ptr_num << endl;
  cout << right << setw(20) << "&(*ptr_num)" << right << setw(20) << right << &(*ptr_num) << endl;
  cout << right << setw(20) << "&ptr_num" << right << setw(20) << right << &ptr_num << endl;
  cout << endl;
  int *ptr_null;
  ptr_null = NULL;
  cout << "ptr_null = " << ptr_null << endl;

  return 0;

}
