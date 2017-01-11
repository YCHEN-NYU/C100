#include <iostream>
#include "MovingPoint.h"
using namespace std;

MovingPoint::MovingPoint(double x, double y, double x_speed, double y_speed):Point(x, y), x_speed(x_speed), y_speed(y_speed) {}
double MovingPoint::get_x_speed() const { return x_speed;}
double MovingPoint::get_y_speed() const { return y_speed;}
void MovingPoint::set_x_speed(double x_speed) {this->x_speed = x_speed;}
void MovingPoint::set_y_speed(double y_speed) { this->y_speed = y_speed;}
void MovingPoint::set_xy_speed(double x_speed, double y_speed) {
    this->x_speed = x_speed;
    this->y_speed = y_speed;
}

void MovingPoint::move(){
    Point::set_x(Point::get_x() + x_speed);
    Point::set_y(Point::get_y() + y_speed);
}
void MovingPoint::print() const{
    Point::print();
    cout << "speed = (" << x_speed << ", " << y_speed << ")" << endl;
}





