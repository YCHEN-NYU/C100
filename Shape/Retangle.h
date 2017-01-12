#ifndef RETANGLE_H
#define RETANGLE_H
#include "Shape.h"
using namespace std;
class Retangle:public Shape{
    private:
        double length;
        double width;
    public:
        Retangle(double length = 1.0, double width = 1.0, const string &color = "red");
        double get_length() const;
        double get_width() const;
        void set_length(double length);
        void set_width(double width);
        void print() const;
        double get_area() const;
};
#endif


