#pragma ONCE
#include <iostream>
#include <string>
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
    static string months[12];
    Date(Month month, int day, int year, int hour, int min, int sec);
    Date();
    void print() const;
    bool operator > (const Date& other) const; // Comparable dates
};