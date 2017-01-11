#ifndef TIME_H
#define TIME_H

class Time{
 private:
  int hour;
  int minute;
  int second;

 public:
  Time(int hour = 0, int minute = 0, int second = 0);
  int GetHour() const;
  void SetHour(int hour);
  int GetMinute() const;
  void SetMinute(int minute);
  int GetSecond() const;
  void SetSecond(int second);
  void SetTime(int hour, int minute, int second);
  void PrintTime() const;
  void NextHour();
  void NextMinute();
  void NextSecond(); 
  void PreviousHour();
  void PreviousMinute();
  void PreviousSecond();
  };

#endif
