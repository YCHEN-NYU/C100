#include <iostream>
using namespace std;

//definition of template
template <typename T>
void swap_element(T & _1st_element, T & _2nd_element);

//implementation of template
template <typename T>
void swap_element(T & _1st_element, T & _2nd_element){
  T temp;
  temp = _1st_element;
  _1st_element = _2nd_element;
  _2nd_element = temp;
}

int main()
{
  int INT_number1 = 1, INT_number2 = 2;
  swap_element(INT_number1, INT_number2);
  cout << INT_number1 << " | " << INT_number2 << endl;

  double DBL_number1 = 3.0, DBL_number2 = 4.0;
  swap_element(DBL_number1, DBL_number2);
  cout << DBL_number1 << " | " << DBL_number2 << endl;

  string msg1 = "hello", msg2 = "NYC";
  swap_element(msg1, msg2);
  cout << msg1 << " | " << msg2 << endl;
  return 0;
  }


