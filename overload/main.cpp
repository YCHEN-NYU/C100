#include <iostream>
#include "usr_defined_overload_operator.h"
using namespace std;

int main()
{
  Point p1(1, 2), p2(4, 5);
  // user overloaded operator +
  Point p3 = p1 + p2;
  p1.print();
  p2.print();
  p3.print();

  // Invoke by usual dot syntax, same as p1 + p2
  Point p4 = p1.operator+(p2);
  p4.print();

  // chaining 
  Point p5 = p1 + p2 + p3 + p4;
  p5.print();
}

