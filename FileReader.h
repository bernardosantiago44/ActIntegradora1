#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Record.h"

using namespace std;

class FileReader {
private:
    FileReader();
    static Record readRecordFromLine(stringstream& ss);
public:
    static void readFile(const string& filename, vector<Record>& records);
};