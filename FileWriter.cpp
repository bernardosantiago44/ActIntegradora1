#include "FileWriter.h"

void FileWriter::writeRecords(const vector<Record>& records, const string& filename) {
    ofstream file(filename); // Open file

    if (file.is_open()) {
        for (const Record& record : records) {
            file << record.formatForFile() << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file: " << filename << endl;
    }
}