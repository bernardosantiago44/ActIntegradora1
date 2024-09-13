#pragma once
#include <iostream>
#include <string>
#include <map>
using namespace std;

enum Month : int {
    Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

class Date {
private:
    Month month;
    int day;
    int year;
    int hour;
    int min;
    int sec;

public:
    static const map<string, Month> months;
    static string monthNames[12];
    Date(Month month, int day, int year, int hour, int min, int sec);
    Date();
    
    // Setters
    void setMonth(Month month);
    void setDay(int day);
    void setYear(int year);
    void setHour(int hour);
    void setMin(int min);
    void setSec(int sec);

    void print() const;
    bool operator > (const Date& other) const; // Comparable dates
};