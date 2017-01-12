#include <iostream>
#include "Circle.h"
#define PI 3.1415926
using namespace std;

Circle::Circle(double radius, const string &color)
{
    this->radius = radius;
    Shape::set_color(color);
}

double Circle::get_radius() const{
    return radius;
}

void Circle::set_radius(double radius){
    this->radius = radius;
}

void Circle::print() const{
    cout << "radius = " << radius << endl;
    cout << "color = " << Shape::get_color() << endl;
}

double Circle::get_area() const{
    return PI*radius*radius;
}

