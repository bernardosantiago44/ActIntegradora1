// Comando para compilar: g++ -std=c++11 *.cpp -o main
// Comando para ejecutar: ./main

#include <string>
#include <chrono>
#include "FileReader.h"
#include "Sorter.h"

using namespace std;

int main() {
    Date date(Feb, 15, 2021, 15, 21, 35);
    Record record(date, "127.0.0.1", "Unkown errr");

    cout << record.formatForFile() << endl;
    return 0;
}