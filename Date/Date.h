#pragma ONCE
using namespace std;

struct Date {
private:
    unsigned short int day;
    enum Month month;
    int year;
    int hour;
    int min;
    int sec;
public:
    Date(unsigned short int day, Month month, int year, int hour, int min, int sec));
    bool operator > (const Date& other) const; // Comparable dates
};

enum Month {
    Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
}