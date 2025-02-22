#include <iostream>

void sum(int& a, int& b) {
    a += b;
}

void sum(int arr[], int size, int b) {
    for (int i = 0; i < size; i++) {
        arr[i] += b;
    }
}

void sum(int* a, int& b) {
    *a += b;
}

int main() {
    int a = 10, b = 15;
    sum(a, b);
    std::cout << a << std::endl;
    
    int* arr = new int[5](0);
    sum(arr, 5, a);
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    sum(&b, a);
    std::cout << b << std::endl;
    
    delete[] arr;
    
    return 0;
}

