#pragma ONCE
#include <string>
#include "Date.h"

using namespace std;

struct Record {
private:
    Date date;
    string address;
    string errorMessage;
public:
    Record(Date date, string address, string errorMessage);)
};