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

    origin.operator+=(Point(-8, -9));
    origin.print();
    
    origin.operator+=(10);
    origin.print();

    cout << "prefix: ++Point " << endl; 
    cout << ++origin;
    cout << origin;
    cout << "postfix: Point++ " << endl;
    cout << origin++;
    cout << origin;

    
    

    return 0;
}
    
