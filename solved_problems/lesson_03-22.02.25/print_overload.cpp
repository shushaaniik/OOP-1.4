#include <iostream>


void print(int x) {
    std::cout << x << std::endl;
} 

void print(double x) {
    std::cout << x << std::endl;
} 

void print(float x) {
    std::cout << x << std::endl;
} 

int main() {
    int a = 1;
    print(a);
    double b = 1.5;
    print(b);
    float c = 2.5;
    print(c);
    return 0;
}

