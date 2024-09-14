#include "Date.h"

string Date::monthNames[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
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

string Date::formatForFile() const {
    string formattedDate;

    // Format date directly
    formattedDate = monthNames[month] + " " + to_string(day) + " ";

    // Format hour
    if (hour < 10) { // 05:mm:ss
        formattedDate += "0" + to_string(hour) + ":";
    } else {         // 15:mm:ss
        formattedDate += to_string(hour) + ":";
    }

    if (min < 10) { // hh:05:ss
        formattedDate += "0" + to_string(min) + ":";
    } else {        // hh:35:ss
        formattedDate += to_string(min) + ":";
    }
    
    if (sec < 10) { // hh:mm:05
        formattedDate += "0" + to_string(sec);
    } else {        // hh:mm:25
        formattedDate += to_string(sec);
    }

    return formattedDate;
}

bool Date::operator<(const Date& other) const {
    if (year < other.year) {
        return true;
    } else if (year > other.year) {
        return false;
    }

    // If years are equal, compare months
    if (month < other.month) {
        return true;
    } else if (month > other.month) {
        return false;
    }

    // If months are equal, compare days
    if (day < other.day) {
        return true;
    } else if (day > other.day) {
        return false;
    }

    // If days are equal, compare hours
    if (hour < other.hour) {
        return true;
    } else if (hour > other.hour) {
        return false;
    }

    // If hours are equal, compare minutes
    if (min < other.min) {
        return true;
    } else if (min > other.min) {
        return false;
    }

    // If minutes are equal, compare seconds
    if (sec < other.sec) {
        return true;
    } else if (sec > other.sec) {
        return false;
    }

    return false;
}

bool Date::operator==(const Date& other) const {
    return (
        year     == other.year
        && month == other.month
        && day   == other.day
        && hour  == other.hour
        && min   == other.min
        && sec   == other.sec
    );
}

bool Date::operator<=(const Date& other) const {
    return *this < other || *this == other;
}

bool Date::operator>(const Date& other) const {
    return !(*this <= other);
}

bool Date::operator>=(const Date& other) const {
    return *this > other || *this == other;
}

// Setters
void Date::setMonth(Month month) { this->month = month; }
void Date::setDay(int day) { this->day = day; }
void Date::setYear(int year) { this->year = year; }
void Date::setHour(int hour) { this->hour = hour; }
void Date::setMin(int min) { this->min = min; }
void Date::setSec(int sec) { this->sec = sec; }