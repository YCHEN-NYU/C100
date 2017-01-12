#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(int x, int y): x(x), y(y) {}

int Point::get_x() const { return x;}

int Point::get_y() const { return y;}

void Point::set_x(int x) { this->x = x;}

void Point::set_y(int y) { this->y = y;}

void Point::print() const { cout << "(" << x << ", " << y << ")" << endl;}

const Point Point::operator+(const Point &point) const{
    return Point(this->x + point.get_x(), this->y + point.get_y());
}

const Point Point::operator+(int delta) const{
    return Point(this->x + delta, this->y + delta); 
}

const Point Point::operator-(const Point &point) const{
    return Point(this->x - point.get_x(), this->y - point.get_y());
}

const Point Point::operator-(int delta) const{
    return Point(this->x - delta, this->y - delta);
}

Point & Point::operator+=(const Point &point){
    this->x += point.get_x();
    this->y += point.get_y();
    return *this;
}

Point & Point::operator+=(int value_to_add){
    this->x += value_to_add;
    this->y += value_to_add;
    return *this;
}

Point Point::operator++(){
    ++x;
    ++y;
    return *this;
}

const Point Point::operator++(int dummy){
    Point old(*this);
    ++x;
    ++y;
    return old;
}

ostream &operator<<(ostream &out, const Point &point){
    out << "(" << point.x << ", " << point.y << ")\n";
    return out;
}

istream &operator>>(istream &in, Point &point){
    in >> point.x >> point.y;
    return in;
}
