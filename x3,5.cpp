#include <iostream>

int main() {
    int N, sum = 0;
    std::cout << "Enter N (1-1000): ";
    std::cin >> N;

    if (N < 1 || N > 1000) {
        std::cout << "Invalid input. N must be between 1 and 1000." << std::endl;
        return 1;
    }

    for (int i = 1; i < N; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    std::cout << "Sum = " << sum << std::endl;
    return 0;
}
