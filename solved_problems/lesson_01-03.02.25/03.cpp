/******************************************************************************

Գրել ծրագիր, որը պահանջում է ներածել n բնական թիվը, կառուցում n էլեմենտանոց բնական թվերի զանգված և գտնում զանգվածի տարրերի ամենամեծ ընդհանուր բաժանարարը:

Write a program that requires input of a natural number n, constructs an array of n natural numbers, and finds the greatest common divisor (GCD) of the array elements.

*******************************************************************************/
#include <iostream>


int gcd(int a, int b) {
    if (a != 0) {
        return gcd(b % a, a);
    }

    return b;
}


/// This is also right
/*
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
*/


int main() {
    int n;
    std::cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int common_gcd = arr[0];
    for (int i = 1; i < n; ++i) {
        common_gcd = gcd(common_gcd, arr[i]);
    }

    std::cout << "The greatest common divisor is: " << common_gcd << std::endl;

    delete[] arr;
    return 0;
}
