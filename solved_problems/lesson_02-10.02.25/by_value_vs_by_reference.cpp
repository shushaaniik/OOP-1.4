#include <iostream>

void increment_by_value(int a) {
    ++a;
}

void increment_by_reference(int& a) {
    ++a;
}

int main() {
    int a;
    std::cin >> a;
    
    // Reference to a
    // A convenient way to use pointers without directly working with them
    // It MUST be initialized (while we could write int* prt; and it would be garbage or nullptr)
    int& ref = a; // alias for a, just another name for a
    std::cout << "a: " << a << std::endl;
    std::cout << "ref: " << ref << std::endl;
    std::cout << std::endl;
    
    ++a;
    std::cout << "a after ++a: " << a << std::endl;
    std::cout << "ref after ++a: " << ref << std::endl;
    std::cout << std::endl;
    
    increment_by_value(a);
    std::cout << "a after increment_by_value(a): " << a << std::endl;
    std::cout << "ref after increment_by_value(a): " << ref << std::endl;
    std::cout << std::endl;
    
    increment_by_value(ref);
    std::cout << "a after increment_by_value(ref): " << a << std::endl;
    std::cout << "ref after increment_by_value(ref): " << ref << std::endl;
    std::cout << std::endl;
    
    increment_by_reference(a);
    std::cout << "a after increment_by_reference(a): " << a << std::endl;
    std::cout << "ref after increment_by_reference(a): " << ref << std::endl;
    std::cout << std::endl;
    
    increment_by_reference(ref);
    std::cout << "a after increment_by_reference(ref): " << a << std::endl;
    std::cout << "ref after increment_by_reference(ref): " << ref << std::endl;
    std::cout << std::endl;

    return 0;
}

