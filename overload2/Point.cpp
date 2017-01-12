// Implementation of Point.h
#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(int x, int y): x(x), y(y) {}

int Point::get_x() const { return x;}

int Point::get_y() const { return y;}

void Point::set_x(int x) { this->x = x;}

void Point::set_y(int y) { this->y = y;}

void Point::print() const { cout << "(" << x << ", " << y << ")\n";}

Point &Point::operator++() { return Point(++this->x, ++this->y);}

ostream &operator<<(ostream &out, const Point &point){
    out << "(" << point.get_x() << ", " << point.get_y() << ")"; 
    return out;
}

istream &operator>>(istream &in, Point &point){
    cout << "Enter x and y coordinates: ";
    int temp_x, temp_y;
    in >> temp_x >> temp_y;
    point.set_x(temp_x);
    point.set_y(temp_y);
    //in >> point.x >> point.y;
    return in;
}

