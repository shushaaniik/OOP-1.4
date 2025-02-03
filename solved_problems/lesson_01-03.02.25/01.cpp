/******************************************************************************

Ներմուծել N թիվը և ստեղծել N երկարությամբ ամբողջ թվերի դինամիկ զանգված և գտնել մեծագույն/փոքրագույն էլեմենտը:

Enter the number N and a dynamically allocated array of N integers, then find the maximum and minimum elements.

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

    for (int i = 1; i < N; ++i) {
        if (arr[i] < min) {
	    min = arr[i];
	}
        if (arr[i] > max) {
            max = arr[i];
	}
    }

    std::cout << "Min: " << min << std::endl << "Max: " << max << std::endl;

    delete[] arr;
    return 0;
}
