// Comando para compilar: g++ -std=c++11 *.cpp -o main
// Comando para ejecutar: ./main

#include <string>
#include <chrono>
#include "FileReader.h"
#include "Sorter.h"

using namespace std;

int main() {
    // Time taken to parse the log file
    auto start = chrono::high_resolution_clock::now();
    // Load data from log file
    vector<Record> records;
    FileReader::readFile("bitacora-1.txt", records);
    auto end = chrono::high_resolution_clock::now();

    // Calculate the time taken to parse the log file
    auto elapsed = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "Time taken to parse the log file: " << elapsed.count() << " milliseconds" << endl;


    start = chrono::high_resolution_clock::now();
    // Sort the records
    Sorter::mergeSort(records);
    end = chrono::high_resolution_clock::now();

    elapsed = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "Time taken to sort the records: " << elapsed.count() << " milliseconds" << endl;
    return 0;
}