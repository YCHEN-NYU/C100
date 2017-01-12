#include <iostream>
#include "Shape.h"
using namespace std;
Shape::Shape(const string &color) {
    this->color = color;
}

string Shape::get_color() const {
    return color;
}

void Shape::set_color(const string &color){
    this->color = color;
}

void Shape::print() const{
    cout << "color = " << color << endl;
}

