#include <iostream>
#include "QuickSort.hpp"

int main() {

    int arr[] = {1, 9, 2, 8, 4};
    quick(arr, 0, 5);

    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }


}