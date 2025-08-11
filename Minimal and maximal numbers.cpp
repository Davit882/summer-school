#include <iostream>
#include <limits>

int getValidNumber(int index) {
    int num;
    while (true) {
        std::cout << index + 1 << ") ";
        if (std::cin >> num) {
            return num;
        }
        std::cout << "Invalid input. Please enter an integer.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void findMinMax(int count, int &minNum, int &maxNum) {
    minNum = std::numeric_limits<int>::max();
    maxNum = std::numeric_limits<int>::min();

    for (int i = 0; i < count; ++i) {
        int num = getValidNumber(i);
        if (num < minNum) minNum = num;
        if (num > maxNum) maxNum = num;
    }
}

int main() {
    const int n = 10;
    int minNum, maxNum;

    std::cout << "Enter " << n << " numbers:\n";
    findMinMax(n, minNum, maxNum);

    std::cout << "Minimal number: " << minNum << std::endl;
    std::cout << "Maximal number: " << maxNum << std::endl;

    return 0;
}
