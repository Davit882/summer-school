#include <iostream>
#include <limits>

int getNumber() {
    int num;
    while (true) {
        if (std::cin >> num) {
            return num;
        }
        std::cout << "Invalid input. Please enter an integer.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void collectNumbers(int counts[], int size) {
    std::cout << "Enter numbers between 1 and 10 (enter -1 to stop):" << std::endl;
    while (true) {
        int num = getNumber();
        if (num == -1) break;
        if (num >= 1 && num <= 10) {
            counts[num]++;
        } else {
            std::cout << "Invalid input. Please enter a number between 1 and 10." << std::endl;
        }
    }
}

void printFrequencies(const int counts[], int size) {
    std::cout << "Number frequencies:" << std::endl;
    for (int i = 1; i <= size; ++i) {
        std::cout << i << ": " << counts[i] << std::endl;
    }
}

int main() {
    const int SIZE = 10;
    int counts[SIZE + 1] = {0};

    collectNumbers(counts, SIZE);
    printFrequencies(counts, SIZE);

    return 0;
}

