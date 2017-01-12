#include <iostream>
#include "usr_defined_overload_operator.h"
using namespace std;

Point::Point(int x, int y): x(x), y(y) {}

int Point::get_x() const { return x;}
int Point::get_y() const { return y;}

void Point::set_x(int x) { this->x = x;}
void Point::set_y(int y) { this->y = y;}

void Point::print() const{
  cout << "(" << x << ", " << y << ")" << endl;}

const Point Point::operator+(const Point &rhs) const {
  return Point(x + rhs.x, y + rhs.y);
}



