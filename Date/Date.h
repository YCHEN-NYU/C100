#ifndef DATE_H
#define DATE_H
#include <string>
using namespace std;

class Date{
    private:
        int year;
        int month;
        int day;
        const static string STR_MONTHS[];
        const static string STR_DAYS[];
        const static int DAYS_IN_MONTHS[];
        const static int YEAR_MIN = 1752;
        const static int YEAR_MAX = 9999;

    public:
        static bool is_leap_year(int year);
        static bool is_valid_date(int year, int month, int day);
        static int get_day_of_week(int year, int month, int day);

        // Thursday the following day
        Date(int year = 1752, int month = 9, int day = 14);
        int get_year() const;
        int get_month() const;
        int get_day() const;
        void set_Date(int year, int month, int day);
        void set_year(int year);
        void set_month(int month);
        void set_day(int day);
        void print() const;

        Date &next_day();
        Date &previous_day();
        Date &next_month();
        Date &previous_month();
        Date &next_year();
        Date &previous_year();
};
#endif


