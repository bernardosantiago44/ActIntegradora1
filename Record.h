#pragma once
#include <string>
#include "Date.h"

using namespace std;

class Record {
private:
    Date date;
    string address;
    string errorMessage;
public:
    Record(const Date& date, string address, string errorMessage);
    void print() const;
};