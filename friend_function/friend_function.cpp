#include <iostream>
using namespace std;

//incorrect use of friends may corrupt the
//concept of information hiding and encapsulation.

class Point{
  // friend function
  friend void set_point(Point &point, int x, int y);
 private:
  int x,y;
 public:
  Point(int x = 0, int y = 0): x(x), y(y) {}
  void print() const { cout << "(" << x << ", " << y << ")\n";}
};

void set_point(Point &point, int x, int y){
  point.x = x;
  point.y = y;
}

int main(){
  Point origin;
  origin.print();
  set_point(origin, 1, 2);
  origin.print();

  return 0;
  }

