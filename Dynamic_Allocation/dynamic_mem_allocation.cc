#include <iostream>
using namespace std;

int main()
{
  // allocate a new integer into ptr_integer
  int *ptr_integer = new int(1);
  cout << "ptr_integer = " << ptr_integer << " | ";
  cout << "*ptr_integer = " << *ptr_integer << endl;
  delete ptr_integer;

  // allocate a new array of integers into ptr_array_integer
  int ARRAY_SIZE = 10;
  int *ptr_array_integer = new int[ARRAY_SIZE];
  for(int i = 0; i < ARRAY_SIZE; ++i){
    *(ptr_array_integer + i) = i;
  }

  for(int i = 0; i < ARRAY_SIZE; ++i){
    cout << *(ptr_array_integer + i) << " ";
  }
  cout << endl;
  delete[] ptr_array_integer;

  for(int i = 0; i < ARRAY_SIZE; ++i){
    cout << *(ptr_array_integer + i) << " ";
  }
  cout << endl;

  ptr_array_integer = NULL;

  for(int i = 0; i < ARRAY_SIZE; ++i){
    cout << *(ptr_array_integer + i) << " ";
  }
  cout << endl;

  return 0;
}
