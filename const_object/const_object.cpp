#include <iostream>
using namespace std;

class Point{
 private:
  int x;
  int y;
 public:
  Point(int x = 0, int y = 0): x(x), y(y) {};
  int get_x() const { return x;}
  int get_y() const { return y;}
  void set_x(int x) { this->x = x;} 
  void set_y(int y) { this->y = y;}
  void print() const { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(){
  Point origin(2, 2);
  origin.print();
  origin.set_x(-1);
  origin.set_y(2);
  origin.print();

  const Point center(1, 1);
  center.print();
  return 0;
}

