#include <iostream>
using namespace std;

int main()
{
  const int ARRAY_SIZE = 10;
  int array_int[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  cout << array_int << endl;
  cout << array_int+1 << endl;
  cout << *array_int << endl;
  cout << *(array_int+1) << endl;
  cout << *(array_int+3) << endl;
  cout << *(array_int+9) << endl;

  double array_DBL[] = {-1.0, 2.0, 3.0};
  double *ptr_DBL = array_DBL; 
  cout << ptr_DBL  << endl;
  cout << ptr_DBL + 1 << endl;
  cout << *ptr_DBL  << endl;
  cout << *(ptr_DBL + 1) << endl;
  cout << *ptr_DBL + 1 << endl;
  cout << "sizeof(array_DBL) = " << sizeof(array_DBL) << endl; 
  cout << "sizeof(ptr_DBL) = " << sizeof(ptr_DBL) << endl; 
  cout << "Array Size of array_DBL[] = " << sizeof(array_DBL)/sizeof(&array_DBL) << endl;
  return 0;
}
