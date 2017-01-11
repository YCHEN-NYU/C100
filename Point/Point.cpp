#include <iostream>
#include <cmath>
#include "Point.h"
using namespace std;

Point::Point(int x, int y){
  this->x = x;
  this->y = y;
}

int Point::GetX() const {
  return x;
}

void Point::SetX(int x){
  this->x = x;
}

int Point::GetY() const{
  return y;
}

void Point::SetY(int y){
  this->y = y;
}

void Point::SetXY(int x, int y){
  this->x = x;
  this->y = y;
}

double Point::GetMagnitude() const{
  return sqrt(pow(x, 2)+pow(y, 2));
}

double Point::GetArgument() const{
  return atan2(y, x);
}

void Point::PrintXY() const{
  cout << "(" << x << ", " << y << ")" << endl;
}

