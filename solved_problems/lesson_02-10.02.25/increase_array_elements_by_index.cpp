#include <iostream>

void increase_by_index(int arr [], int size) {
    for(int i = 0; i < size; ++i) {
        arr[i] += i;
    }
}

int main() {
    int size;
    std::cin >> size;

    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    increase_by_index(arr, size);
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}

