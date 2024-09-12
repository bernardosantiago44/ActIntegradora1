#include "Date.h"

string Date::months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

Date::Date(Month month, int day, int year, int hour, int min, int sec)
{
    this->day = day;
    this->month = month;
    this->year = year;
    this->hour = hour;
    this->min = min;
    this->sec = sec;
}

Date::Date() : Date(Jan, 1, 0, 0, 0, 0) {}

void Date::print() const
{
    cout << months[month] << " " << day << ", " << year << " " << hour << ":" << min << ":" << sec << endl;
}

bool Date::operator>(const Date& other) const {
    // TODO: Implement logic
    return true;
}