#pragma once
#include <vector>
#include "Record.h"

class Sorter {
private:
    Sorter();
    // Recursive merge sort
    static void mergeSort(vector<Record>& records, int left, int right);
    // Merge two sorted vectors
    static void merge(vector<Record>& records, int left, int right);
public:
    // Merge sort wrapper
    static void mergeSort(vector<Record>& records);
};