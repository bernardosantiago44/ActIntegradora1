#include "FileReader.h"

void FileReader::readFile(const string& filename, vector<Record>& records) {
    // Open the file
    int maxLines = 5;
    ifstream file(filename);
    if (file.is_open()) {
        // Read the file line by line
        string line;
        while (getline(file, line)) {
            if (maxLines-- == 0) {
                break;
            }
            stringstream ss(line);
            Record record = readRecordFromLine(ss);
            records.push_back(record);
        }
        // Close the file
        file.close();
    } else {
        cout << "Unable to open file: " << filename << endl;
    }
}

Record FileReader::readRecordFromLine(stringstream& ss) {
    string line;
    Date date;

    // Read the date
    // Month
    getline(ss, line, ' ');
    Month month = Date::months.at(line);
    date.setMonth(month);
    // Day
    getline(ss, line, ' ');
    int day = stoi(line);
    date.setDay(day);
    // Hour
    getline(ss, line, ':');
    int hour = stoi(line);
    date.setHour(hour);
    // Minute
    getline(ss, line, ':');
    int min = stoi(line);
    date.setMin(min);
    // Second
    getline(ss, line, ' ');
    int sec = stoi(line);
    date.setSec(sec);
    // IP Address
    getline(ss, line, ' ');
    string ip = line;
    // Error message
    getline(ss, line);
    string message = line;

    // Construct the record
    Record record(date, ip, message);
    return record;
}