#ifndef BALL_H
#define BALL_H

class Ball{
 private:
  double x, y, xSpeed, ySpeed;
 public:
  Ball(double x = 0.0, double y = 0.0, double xSpeed = 0.0, double ySpeed = 0.0);
  double GetX() const;
  double GetY() const;
  double GetXSpeed() const;
  double GetYSpeed() const;
  
  void SetX(double x);
  void SetY(double y);
  void SetXSpeed(double xSpeed);
  void SetYSpeed(double ySpeed);

  void SetXY(double x, double y);
  void SetXYSpeed(double xSpeed, double ySpeed);
  void :wq

