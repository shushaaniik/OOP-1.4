/******************************************************************************

Ներմուծել num  բնական թիվը, օգտագործելով boolտիպի փ ոփխական՝ որոշել այն զույգ է, թե կենտ։ Արտածել պատասխանը։

Enter the natural number num, decide if it's even or odd using bool variable. Print the answer.

*******************************************************************************/
#include <iostream>

int main() {
    int num;
    std::cin >> num;
    
    bool is_odd = num % 2;
    
    if (is_odd) {
        std::cout << "Odd" << std::endl;
    } else {
        std::cout << "Even" << std::endl;
    }
    
    return 0;
}
