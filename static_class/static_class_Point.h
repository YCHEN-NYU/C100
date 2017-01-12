#ifndef STATIC_CLASS_POINT_H
#define STATIC_CLASS_POINT_H

class Point{
 private:
  int x, y;
  static int count;// count the number of instances created
 public:
  Point(int x = 0, int y = 0);
  int get_x() const { return x;}
  int get_y() const { return y;}
  void set_x(int x) { this->x = x;}
  void set_y(int y) { this->y = y;}
  void print() const; 
  static int get_count();// a static function
};

#endif



