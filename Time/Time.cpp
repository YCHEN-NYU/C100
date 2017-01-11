#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

Time::Time(int hour, int minute, int second){
  this->hour = hour;
  this->minute = minute;
  this->second = second;

}

int Time::GetHour() const{
  return this->hour;
}

void Time::SetHour(int hour){
  this->hour = hour;
}

int Time::GetMinute() const{
  return this->minute;
}

void Time::SetMinute(int minute){
  this->minute = minute;
}

int Time::GetSecond() const{
  return this->second;
}

void Time::SetSecond(int second){
  this->second = second;
}

void Time::SetTime(int hour, int minute, int second){
  this->hour = hour;
  this->minute = minute;
  this->second = second;
}

void Time::PrintTime() const{
  cout << setfill('0');
  cout << setw(2) << this->hour
       << ":" << setw(2) << this->minute
       << ":" << setw(2) << this->second << endl;
}

void Time::NextSecond(){
  ++this->second;
  if(this->second >= 60){
    this->second = 0;
    ++this->minute;
  }

  if(this->minute >= 60){
    this->minute = 0;
    ++this->hour;
  }

  if(this->hour >= 24){
    this->hour = 0;
  }
}

void Time::NextHour(){
  ++this->hour;
  if(this->hour >= 24){
    this->hour = 0;
  }
}

void Time::NextMinute(){
  ++this->minute;
  if(this->minute >= 60){
    this->minute = 0;
    ++this->hour;
  }

  if(this->hour >= 24){
    this->hour = 0;
  }
}

void Time::PreviousHour(){
  --this->hour;
  if(this->hour < 0){
    this->hour = 23;
  }
}

void Time::PreviousMinute(){
 --this->minute;
 if(this->minute < 0){
   this->minute = 59;
   --this->hour;
 } 
 if(this->hour < 0){
   this->hour = 23;
 }
}

void Time::PreviousSecond(){
  --this->second;
  if(this->second < 0)
  {
    this->second = 59;
    --this->minute;
  }

  if(this->minute < 0)
  {
   this->minute = 59;
   --this->hour;
  }

  if(this->hour < 0)
  {
    this->hour = 23; 
  }

}
