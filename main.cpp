// Comando para compilar: g++ -std=c++11 *.cpp -o main
// Comando para ejecutar: ./main

#include <string>
#include <chrono>
#include "FileReader.h"
#include "FileWriter.h"
#include "Sorter.h"

using namespace std;

int main() {
    vector<Record> records;
    FileReader::readFile("bitacora-1.txt", records);
    Sorter::mergeSort(records);
    FileWriter::writeRecords(records, "bitacoraOrdenada1.3-eq6.txt");
    return 0;
}