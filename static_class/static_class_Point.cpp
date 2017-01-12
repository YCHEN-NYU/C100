#include <iostream>
#include "static_class_Point.h"
using namespace std;

int Point::count = 0;

int Point::get_count(){
return count; }

Point::Point(int x, int y): x(x), y(y) { ++count;}

void Point::print() const { cout << "(" << x << ", " << y << ")" << endl;}


