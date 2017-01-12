#ifndef POINT_H
#define POINT_H

#include <iostream>


class Point{
    private:
        int x, y;
    public:
        Point(int x = 0, int y = 0);
        int get_x() const;
        int get_y() const;
        void set_x(int x);
        void set_y(int y);
        void print() const;
        Point &operator++();
};

std::ostream &operator<<(std::ostream &out, const Point &point);
std::istream &operator>>(std::istream &in, Point &point);

#endif

