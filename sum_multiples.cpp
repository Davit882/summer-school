#include <iostream>


int sumOfMultiples(int max) {
    int total = 0;
    for (int i = 1; i < max; i++) {
        if (i % 3 == 0 || i % 5 == 0)
            total += i;
    }
    return total;
}


void printResult(int max, int total) {
    std::cout << "\nSum of all numbers less than " << max
              << " that are divisible by 3 or 5:\n";
    std::cout << "Result: " << total << "\n";
}

int main() {
    int upperLimit;
    std::cout << "Enter N (1-1000): ";
    std::cin >> upperLimit;

    if (upperLimit < 1 || upperLimit > 1000) {
        std::cout << "Invalid input. N must be between 1 and 1000.\n";
        return 1;
    }

    int result = sumOfMultiples(upperLimit);
    printResult(upperLimit, result);

    return 0;
}

