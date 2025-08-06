#include <iostream>


int sumOfDigits(int num) {
    if (num < 0) num = -num;  
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int inputNumber;

    std::cout << "Please enter your number: ";
    std::cin >> inputNumber;

    int result = sumOfDigits(inputNumber);

    std::cout << "Sum of digits: " << result << std::endl;

    return 0;
}

