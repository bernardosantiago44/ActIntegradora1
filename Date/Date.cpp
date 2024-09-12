#include "Date.h"

Date::Date(unsigned short int day, 
           int month, int year,
           int hour, int min, int sec) 
{
    this->day = day;
    this->month = month;
    this->year = year;
    this->hour = hour;
    this->min = min;
    this->sec = sec;
}

bool Date::operator>(const Date& other) const {
    // TODO: Implement logic
    return true
}