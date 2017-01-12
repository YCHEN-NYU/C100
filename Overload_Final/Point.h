#ifndef POINT_H
#define POINT_H

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
        const Point operator+(const Point &point) const;
        const Point operator+(int delta) const;
        const Point operator-(const Point &point) const;
        const Point operator-(int delta) const;

        
};
#endif

