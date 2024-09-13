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

Date Record::getDate() const { return date; }