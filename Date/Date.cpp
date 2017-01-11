#include <iostream>
#include <cmath>
#include "Date.h"
using namespace std;

const string Date::STR_MONTHS[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

const string Date::STR_DAYS[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

const int Date::DAYS_IN_MONTHS[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool Date::is_leap_year(int year)
{
    return ((year%4==0 && year%100!=0) || (year%400 == 0));
}

bool Date::is_valid_date(int year, int month, int day)
{
    if(year < YEAR_MIN || year > YEAR_MAX
       || month < 0 || month > 12
       || day < 0 || day > 31)
        return false;
    else
    {
        if((is_leap_year(year)) && (month == 2))
        {
            return (day <= 29);
        }
        else
            return (day <= DAYS_IN_MONTHS[month -1]); 
    }
}
// TODO
int Date::get_day_of_week(int year, int month, int day)
{
    //TODO;
    return 0;
}



int Date::get_year() const{
    return year;
}

int Date::get_month() const{
    return month;
}

int Date::get_day() const{
    return day;
}

Date::Date(int year, int month, int day){
    set_Date(year, month, day);
}

void Date::set_Date(int year, int month, int day)
{
    set_year(year);
    set_month(month);
    set_day(day);
}

void Date::set_year(int year){
    this->year = year;
}

void Date::set_month(int month){
    this->month = month;
}

void Date::set_day(int day){
    this->day = day;
}

void Date::print() const{
    cout << get_year() << " " << STR_MONTHS[month-1] << " " << get_day() << endl; 
}


