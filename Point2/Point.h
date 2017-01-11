#ifndef POINT_H
#define POINT_H

class Point{
    private:
        double x;
        double y;
    public:
        Point(double x = 0.0, double y = 0.0);
        double get_x() const;
        double get_y() const;
        void set_x(double x);
        void set_y(double y);
        void set_xy(double x, double y);
        void print() const;
};
#endif

        
