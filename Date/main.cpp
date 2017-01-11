#include <iostream>
#include <cmath>
#include "Date.h"
using namespace std;

int main()
{
    Date this_year(2016, 1, 10);
    if(this_year.is_leap_year(2016))
        cout << "Leap year!" << endl; 
    else
        cout << "not a leap year!" << endl;

    if(this_year.is_valid_date(2016, 1, 10))
        cout << "valid date" << endl;
    else
        cout << "invalid date" << endl;

    this_year.set_Date(2016, 2, 29);
    cout << this_year.get_year() << endl;
    cout << this_year.get_month() << endl;
    cout << this_year.get_day() << endl;
    this_year.print();
    
    cout << this_year.get_day_of_week(2000, 1, 3) << endl;
    return 0;
}
