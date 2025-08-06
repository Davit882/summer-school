#include <iostream>

int reverseNumber(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int reversed = reverseNumber(number);

    std::cout << "Reversed = " << reversed << std::endl;

    return 0;
}
