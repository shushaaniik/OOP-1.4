#include <iostream>


void uppercase(std::string& str) {
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 'a' - 'A';
        }
    }
}

int main() {
    std::string str;
    std::cin >> str;
    uppercase(str);
    std::cout << str << std::endl;
    return 0;
}

