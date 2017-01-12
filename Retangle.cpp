#include <iostream>
#include "Retangle.h"
using namespace std;

Retangle::Retangle(double length, double width, const string &color){
    this->length = length;
    this->width = width;
    this->color = color;
}

double Retangle::get_length() const{
    return length;
}

double Retangle::get_width() const{
    return width;
}

void Retangle::set_length(double length){
    this->length = length;
}

void Retangle::set_width(double width){
    this->width = width;
}

void Retangle::print() const{
    cout << "length = " << length << " width = " << width << endl;
}

double Retangle::get_area() const{
    return length*width;
}


