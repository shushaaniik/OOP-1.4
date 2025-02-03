/******************************************************************************

Գրել ծրագիր, որը պահանջում է ներածել n բնական թիվը, կառուցում n էլեմենտանոց բնական թվերի զանգված և հեռացնում է նրանից 2-րդ պարզ թիվը (եթե այդպիսին կա):

Write a program that requires the input of a natural number n, constructs an array of n natural numbers, and removes the second prime number from it (if such a number exists).

*******************************************************************************/
#include <iostream>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
	    return false;
	}
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int prime_count = 0;
    int second_prime_index = -1;

    for (int i = 0; i < n; ++i) {
        if (is_prime(arr[i])) {
            prime_count++;
            if (prime_count == 2) {
                second_prime_index = i;
                break;
            }
        }
    }

    if (second_prime_index != -1) {
        for (int i = second_prime_index; i < n - 1; ++i) {
            arr[i] = arr[i + 1];
        }
    }

    int* tmp_arr = new int[n - 1];
    for (int i = 0; i < n - 1; ++i) {
        tmp_arr[i] = arr[i];
    }
    delete[] arr;
    arr = tmp_arr;

    for (int i = 0; i < n - 1; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] tmp_arr;
    return 0;
}
