#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(double x, double y){
    set_x(x);
    set_y(y);
}

double Point::get_x() const{
    return x;
}

double Point::get_y() const{
    return y;
}

void Point::set_x(double x){
    this->x = x;
}

void Point::set_y(double y){
    this->y = y;
}

void Point::set_xy(double x, double y){
    set_x(x);
    set_y(y);
}

void Point::print() const{
    cout << "(" << x << "," << y << ")" << endl;
}

