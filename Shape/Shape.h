#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;
class Shape{
    private:
        string color;
    public:
        Shape(const string &color = "red");
        string get_color() const;
        void set_color(const string &color);
        virtual void print() const;//virtual function
        virtual double get_area() const = 0;// pure virtual function 
};
#endif
