#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point origin;
    origin.print();
    Point new_position = origin.operator+(Point(1, 2));
    new_position.print();

    Point forward_position = origin.operator+(3);
    forward_position.print();

    Point backward_position = origin.operator-(Point(5, 6));
    backward_position.print();

    Point backward_unit_position = origin.operator-(7);
    backward_unit_position.print();
    return 0;
}
    
