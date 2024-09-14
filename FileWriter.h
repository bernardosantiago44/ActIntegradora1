#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Record.h"

using namespace std;

class FileWriter {
private: 
    // To prevent from creating an object of this class
    FileWriter();
public:
    static void writeRecords(const vector<Record>& records, const string& filename);
};
