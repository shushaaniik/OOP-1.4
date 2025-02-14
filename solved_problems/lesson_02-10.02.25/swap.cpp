#include <iostream>

void swap(int& a, int& b) {
    /***
    int tmp = a;
    a = b;
    b = tmp;
    ***/
    a += b;
    b = a - b;
    a = a - b;
}

int main()
{
    int num_1, num_2;
    std::cin >> num_1 >> num_2;
    swap(num_1, num_2);
    std::cout << num_1 << " " << num_2 << std::endl;
    return 0;
}

