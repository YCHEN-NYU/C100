#ifndef BOX_H
#define BOX_H

class Box{
    private:
        double length, width, height;
    public:
        Box(double length = 1.0, double width = 1.0, double height = 1.0);
        double get_length() const;
        double get_width() const;
        double get_height() const;
        double get_volume() const;
        
        void set_length(double length);
        void set_width(double width);
        void set_height(double height);
        void print() const;
        Box operator+(const Box &box);
};
#endif
