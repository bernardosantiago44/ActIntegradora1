// Comando para compilar: g++ -std=c++11 *.cpp -o main
// Comando para ejecutar: ./main

#include <iostream>
#include <string>
#include "Record.h"


using namespace std;

int main() {
    Date date(Jan, 1, 2021, 0, 0, 0);
    Record record(date, "127.0.0.1", "Error message");
    record.print();
    return 0;
}