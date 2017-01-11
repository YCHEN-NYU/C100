#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  const int ARRAY_SIZE = 10;
  int *ptr_array;

  ptr_array = new int[ARRAY_SIZE];

  srand(time(NULL));
  for(int i = 0; i < ARRAY_SIZE; ++i)
  {
    *(ptr_array + i) = rand()%100;
  }
  cout << endl;

  for(int i = 0;i < ARRAY_SIZE; ++i)
  {
    cout << *(ptr_array+i) << " ";
  }
  cout << endl;

  delete[] ptr_array;
  
  return 0;
}
