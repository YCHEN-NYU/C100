#include <iostream>
using namespace std;

template <typename T>
void swap_element(T & _1st_element, T & _2nd_element);

template <typename T>
void swap_element(T _1st_array[], T _2nd_array[], int size_of_array);

template <typename T>
void print_array(T _array_2B_print[], int size_of_array);

template <typename T>
void swap_element(T & _1st_element, T & _2nd_element){
  T temp;
  temp = _1st_element;
  _1st_element = _2nd_element;
  _2nd_element = temp;
}

template <typename T>
void swap_element(T _1st_array[], T _2nd_array[], int size_of_array){
  T temp;
  for(int i = 0; i < size_of_array; ++i)
  {
    temp = _1st_array[i];
    _1st_array[i] = _2nd_array[i];
    _2nd_array[i] = temp;
  }
}

template <typename T>
void print_array(T _array_2B_print[], int size_of_array){
  for(int i = 0; i < size_of_array; ++i)
  {
    cout << _array_2B_print[i] << " ";
  }
  cout << endl;
}

int main(){
  int first_int = 1, second_int = 2;
  swap_element(first_int, second_int);
  cout << first_int << " | " << second_int << endl;

  double first_double = 3.0, second_double = 4.5;
  swap_element(first_double, second_double);
  cout << first_double << " | " << second_double << endl;

  int first_array_int[] = {1, 2, 3}, second_array_int[] = {4, 5, 6};
  swap_element(first_array_int, second_array_int, 3);
  print_array(first_array_int,3);
  print_array(second_array_int, 3);

  return 0;
}

