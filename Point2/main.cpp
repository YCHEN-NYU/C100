#include <iostream>
#include <typeinfo>
#include "Point.h"
#include "MovingPoint.h"
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

    MovingPoint ball(1, 2, -0.1, 0.1);
    ball.print();

    ball.set_x_speed(0.1);
    ball.set_y_speed(0.2);
    ball.print();

    ball.set_xy_speed(-1.3, 2.3);
    ball.print();
    
    ball.move();
    ball.print();

    Point *center_of_court = new Point(10, 20);
    center_of_court->print();
    cout << "typeid = " << typeid(center_of_court).name() << endl;
    cout << "typeid = " << typeid(*center_of_court).name() << endl;
    delete center_of_court;

    MovingPoint *player1 = new MovingPoint(10, 20, 5, 5);
    player1->print();
    player1->move();
    player1->print();
    delete player1;

    // upcast: always permissible and safe
    Point *south_corner = new MovingPoint(-10, 15, 1, 2);
    south_corner->print();

    cout << "typeid = " << typeid(*south_corner).name() << endl;
    // downcast: requires explicit casting operator
    MovingPoint *mid_point = (MovingPoint *) south_corner;
    mid_point->print();
    delete south_corner;

    return 0;

}


