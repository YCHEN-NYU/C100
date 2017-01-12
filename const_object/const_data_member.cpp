#include <iostream>
using namespace std;

class Point{
 private:
  int x;
  const int y;
 public:
  Point(int x = 0, int y = 0):x(x), y(y) {}
  int get_x() const { return x;}
  int get_y() const { return y;}
  void set_x(int x) { this->x = x;}
  //void set_x(int x) { this->x = x;}
  void print() const { cout << "(" << x << ", " << y << ")" << endl;
  }
};
int main(){
  Point P1(1, 1);
  P1.print();

  return 0;
}
