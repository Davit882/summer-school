#include <iostream>


bool isPowerOfTwo(int num) {
    return num > 0 && (num & (num - 1)) == 0;
}


int getNumber() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    return num;
}

int main() {
    int num = getNumber();

    if (isPowerOfTwo(num)) {
        std::cout << num << " is a power of 2." << std::endl;
    } else {
        std::cout << num << " is NOT a power of 2." << std::endl;
    }

    return 0;
}


