#include <iostream>
#include "Point.h"
using namespace std;

int main() {
    Point origin;
    origin.print();
    origin.set_x(1.0);
    origin.print();
    origin.set_y(-1.0);
    origin.print();
    origin.set_xy(-1.0, 1.0);
    origin.print();
    cout << "x = " << origin.get_x() << endl;
    cout << "y = " << origin.get_y() << endl;

    Point OneOne(1.0, 1.0);
    origin.print();

    Point *OneTwo, *ZeroZero;
    OneTwo = new Point(1.0, 2.0);
    OneTwo->print();

    ZeroZero = new Point();
    ZeroZero->print();

    delete OneTwo;
    delete ZeroZero;
    Point &ThirdPoint=origin;
    ThirdPoint.print();
    
    // Point array
    Point Point_array[] = {Point(0,0), Point(1, 1), Point(2, 3), Point(-1, -1)};
    Point_array[0].print();
    Point_array->set_xy(-0.1,-0.1);
    Point_array->print();

    Point *new_point_array = new Point[3];
    new_point_array->set_xy(-0.2, -0.3);
    new_point_array->print();
    new_point_array[0].print();

    (new_point_array+1)->print();
    new_point_array[1].print();
    delete[] new_point_array;

    return 0;

}


