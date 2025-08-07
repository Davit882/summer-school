#include <iostream>


bool isPalindrome(int num) {
    int orig = num, rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return orig == rev;
}

int main() {
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;

    if (isPalindrome(num))
        std::cout << "Palindrome" << std::endl;
    else
        std::cout << "Not palindrome" << std::endl;

    return 0;
}
