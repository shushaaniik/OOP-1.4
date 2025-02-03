/******************************************************************************

Ներմուծել N թիվը և ստեղծել N երկարությամբ ամբողջ թվերի դինամիկ զանգված և գտնել մեծագույն/փոքրագույն էլեմենտի քանակը:

Enter the number N and create a dynamically allocated array of N integers, then find the count of the maximum and minimum elements.

*******************************************************************************/
#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int* arr = new int[N];

    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    int min = arr[0], max = arr[0];
    int min_count = 0, max_count = 0;

    for (int i = 0; i < N; ++i) {
        if (arr[i] < min) {
            min = arr[i];
            min_count = 1;
        } else if (arr[i] == min) {
            min_count++;
        }

        if (arr[i] > max) {
            max = arr[i];
            max_count = 1;
        } else if (arr[i] == max) {
            max_count++;
        }
    }

    std::cout << "Min element count: " << min_count << std::endl;
    std::cout << "Max element count: " << max_count << std::endl;

    delete[] arr;
    return 0;
}
