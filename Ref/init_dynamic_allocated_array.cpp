#include <iostream>
using namespace std;

int main()
{
  // initialization of dynamically-allocated-array is only allowed in C++11
  int *ptr_array = new int[5] {1, 2, 3, 4, 5};
  for(int i = 0; i < 5; ++i)
  {
    cout << *(ptr_array + i) << " ";
  }
  cout << endl;

  // always remember to deallocate  
  delete[] ptr_array;
  return 0;
}
