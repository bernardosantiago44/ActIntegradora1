#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "Record.h"

using namespace std;

class FileReader {
private:
    // To prevent from being instantiated
    FileReader();
    static Record readRecordFromLine(stringstream& ss);
public:
    static void readFile(const string& filename, vector<Record>& records);
};