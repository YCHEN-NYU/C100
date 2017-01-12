#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Retangle.h"
#include <iomanip>
using namespace std;

int main()
{
    Circle unit_circle(1.0, "red");
    unit_circle.print();
    cout << endl;

    Circle *ptr_bigger_circle = new Circle(2.0, "green");
    ptr_bigger_circle->print();
    cout << setprecision(4) << "area = " << ptr_bigger_circle->get_area() << endl;
    delete ptr_bigger_circle;
    cout << endl;

    Retangle simple_retangle(1.0, 2.0, "blue");
    simple_retangle.print();
    cout << endl;

    Retangle *ptr_square = new Retangle(1.0, 1.0, "white");
    ptr_square->print();
    cout << setprecision(4) <<"area = " << ptr_square->get_area() << endl;
    cout << endl;
    
    return 0;
}

