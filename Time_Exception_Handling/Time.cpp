#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;

Time::Time(int hour, int minute, int second){
    if(hour < 24 && hour >= 0 
       && minute <= 60 && minute >= 0 
       && second <= 60 && second >=0)
        {
         this->hour = hour;
         this->minute = minute;
         this->second = second;
        }
    else 
        throw invalid_argument("error: input out of bound");
}

int Time::GetHour() const{
  return this->hour;
}

void Time::SetHour(int hour){
    if(hour < 24 && hour >= 0)
      this->hour = hour;
    else
        throw invalid_argument("error: hour out of bound");
}

int Time::GetMinute() const{
  return this->minute;
}

void Time::SetMinute(int minute){
    if(minute <= 60 && minute >= 0)
      this->minute = minute;
    else
        throw invalid_argument("error: minute out of bound");
}

int Time::GetSecond() const{
  return this->second;
}

void Time::SetSecond(int second){
    if(second <= 60 && second >= 0)
      this->second = second;
    else
        throw invalid_argument("error: second out of bound");
}

void Time::SetTime(int hour, int minute, int second){
    if(hour < 24 && hour >= 0 
       && minute <= 60 && minute >= 0 
       && second <= 60 && second >=0)
        {
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }
    else
        throw invalid_argument("error: hour:minute:second out of bound");
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
