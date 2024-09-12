#include "Record.h"

Record::Record(Date date, string ip, string message) {
    this->date = date;
    this->ip = ip;
    this->message = message;
}