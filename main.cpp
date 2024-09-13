// Comando para compilar: g++ -std=c++11 *.cpp -o main
// Comando para ejecutar: ./main

#include <iostream>
#include <string>
#include "FileReader.h"

using namespace std;

int main() {
    // Load data from log file
    vector<Record> records;
    FileReader::readFile("bitacora-1.txt", records);
    return 0;
}