#include <iostream>

bool transfer(
    // The sender and receiver and guarantr can be big objects (containing not only the amount of money they have, e.g. bank history, etc.).
    int& sender, // can be changed
    int& receiver, // can be changed
    
    const int& guarantor, // can not be changed
    // default arg
    const int sum = 100 // (const int& sum) would be also right, but the sum is just int, sizeof(int) <= sizeof(int*)
) {
    // if ((guarantor >= sum) || (sender >= sum))
    if ((guarantor < sum) && (sender < sum)) {
        return false;
    }
    sender -= sum;
    receiver += sum;
    return true;
}

int main()
{
    int person_1, person_2, person_3, sum;
    std::cin >> person_1 >> person_2 >> person_3 >> sum;
    if (transfer(person_1, person_2, person_3, sum)) {
        std::cout << "Success" << std::endl;
    }
    else {
        std::cout << "Failure" << std::endl;
    }
    std::cout << "Sender: " << person_1 << std::endl;
    std::cout << "Reciever: " << person_2 << std::endl;
    std::cout << "Guarantor: " << person_3 << std::endl;
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}

