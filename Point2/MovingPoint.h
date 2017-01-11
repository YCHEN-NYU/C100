#ifndef MOVINGPOINT_H
#define MOVINGPOINT_H
#include "Point.h"
class MovingPoint:public Point{
private:
    double x_speed, y_speed;
public:
    MovingPoint(double x, double y, double x_speed = 0.0, double y_speed = 0.0);
    double get_x_speed() const;
    double get_y_speed() const;
    void set_x_speed(double x_speed);
    void set_y_speed(double y_speed);
    void set_xy_speed(double x_speed, double y_speed);
    void move();
    void print() const;
};
#endif

