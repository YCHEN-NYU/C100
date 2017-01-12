#include <iostream>
#include "static_class_Point.h"
using namespace std;

int main()
{
  Point origin;
  origin.print();
  cout << Point::get_count() << endl;
  Point P2(1, 1);
  P2.print();
  cout << Point::get_count() << endl;
  Point P3(-1, -2);
  P3.print();
  cout << Point::get_count() << endl;

  Point *point_array= new Point[5];
  cout << Point::get_count() << endl;
  for(int i = 0; i < 5; ++i)
  {
    (point_array + i)->print();
  }
  cout << endl;
  delete[] point_array;
  cout << Point::get_count() << endl;
  
  return 0;
}

