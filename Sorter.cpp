#include "Sorter.h"

void Sorter::merge(vector<Record> &records, int left, int right) {
    const int middle = left + (right - left) / 2;
    const int n1 = middle - left + 1;
    const int n2 = right - middle;

    // Temporal vectors
    vector<Record> leftVector(n1), rightVector(n2);

    // Copy data to temporal vectors
    for (int i = 0; i < n1; i++) {
        leftVector[i] = records[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightVector[i] = records[middle + 1 + i];
    }

    int i = 0, j = 0, k = left;

    // Merge the temporal vectors
    // from leftVector[left...right] 
    while (i < n1 && j < n2) {
        if (leftVector[i].getDate() <= rightVector[j].getDate()) {
            records[k] = leftVector[i];
            i++;
        } else {
            records[k] = rightVector[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftVector
    while (i < n1) {
        records[k] = leftVector[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightVector
    while (j < n2) {
        records[k] = rightVector[j];
        j++;
        k++;
    }
}

// Implement merge sort to a vector of Records
void Sorter::mergeSort(vector<Record>& records, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        mergeSort(records, left, middle);
        mergeSort(records, middle + 1, right);
        merge(records, left, right);
    }
}

// Preparament for merge sort
void Sorter::mergeSort(vector<Record>& records) {
    mergeSort(records, 0, records.size() - 1);
}