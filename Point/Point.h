#ifndef POINT_H
#define POINT_H

class Point {
 private:
  int x, y;

 public:
  Point(int x = 0, int y = 0);
  int GetX() const;
  void SetX(int x);
  int GetY() const;
  void SetY(int y);
  void SetXY(int x, int y);
  double GetMagnitude() const;
  double GetArgument() const;
  void PrintXY() const;
};

#endif

