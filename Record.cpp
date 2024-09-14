#include "Record.h"

Record::Record(const Date& date, string address, string errorMessage) {
    this->date = date;
    this->address = address;
    this->errorMessage = errorMessage;
}

Record::Record() : Record(Date(), "", "") {}

void Record::print() const {
    cout << "Date: ";
    date.print();
    cout << "Address: " << address << endl;
    cout << "Error message: " << errorMessage << endl;
}

string Record::formatForFile() const {
    return date.formatForFile() + " " + address + " " + errorMessage;
}

Date Record::getDate() const { return date; }