#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle:public Shape{
    private:
        double radius;
    public:
        Circle(double radius = 1.0, const string &color = "red");
        double get_radius() const;
        void set_radius(double radius);
        void print() const;
        double get_area() const;
};
#endif
