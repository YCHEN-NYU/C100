#include <iostream>
#include "Box.h"
using namespace std;

Box::Box(double length, double width, double height): length(length), width(width), height(height) {}

double Box::get_length() const{
    return length;
}

double Box::get_width() const{
    return width;
}

double Box::get_height() const{
    return height;
}

double Box::get_volume() const{
    return length*width*height;
}

void Box::set_length(double length) {
    this->length = length;
}

void Box::set_width(double width) {
    this->width = width;
}

void Box::set_height(double height) {
    this->height = height;
}

void Box::print() const{
    cout << length << "x" << width << "x" << height << "=" << Box::get_volume() << endl;
}

Box Box::operator+(const Box &box){
    return Box(this->length + box.length, this->width + box.width, this->height + box.height);
}

