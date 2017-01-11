#include <iostream>
#include "Point.h"
using namespace std;

int main(){

  Point P1(1, 1);
  cout << "x = " << P1.GetX() << endl;
  cout << "y = " << P1.GetY() << endl;
  P1.PrintXY();

  P1.SetX(-1);
  P1.SetY(-2);
  P1.PrintXY();

  P1.SetXY(-3, -4);
  P1.PrintXY();
  cout << P1.GetMagnitude() << ", " 
       << P1.GetArgument() << endl;

  return 0;
}
  
