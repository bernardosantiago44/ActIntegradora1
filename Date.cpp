#include "Date.h"

string Date::monthNames[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
map<string, Month> const Date::months = {
    {"Jan", Jan},
    {"Feb", Feb},
    {"Mar", Mar},
    {"Apr", Apr},
    {"May", May},
    {"Jun", Jun},
    {"Jul", Jul},
    {"Aug", Aug},
    {"Sep", Sep},
    {"Oct", Oct},
    {"Nov", Nov},
    {"Dec", Dec}
};

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
    cout << monthNames[month] << " " << day << " @ " << hour << ":" << min << ":" << sec << endl;
}

bool Date::operator>(const Date& other) const {
    // TODO: Implement logic
    return true;
}

// Setters
void Date::setMonth(Month month) { this->month = month; }
void Date::setDay(int day) { this->day = day; }
void Date::setYear(int year) { this->year = year; }
void Date::setHour(int hour) { this->hour = hour; }
void Date::setMin(int min) { this->min = min; }
void Date::setSec(int sec) { this->sec = sec; }