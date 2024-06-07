#include "QuickSort.hpp"

int partition(int* arr, const unsigned int& low, const unsigned int& high) {
    int pivot  = arr[low];
    int leftwall = low;

    for(int i = low + 1; i < high; ++i) {
        if (arr[i] < pivot) {
            std::swap(arr[i], arr[leftwall]);
            leftwall += 1;
        }

    }
    std::swap(pivot, arr[leftwall]);
    return leftwall;
}



void quick(int* arr, const unsigned int& low, const unsigned int& high) {
    if (low < high) {
        int pivotLocation = partition(arr, low, high);
        quick(arr, low, pivotLocation);
        quick(arr, pivotLocation + 1, high);
    }
}
