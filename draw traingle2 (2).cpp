#include <iostream>


int getHeight() {
    int N;
    std::cout << "Enter triangle height (positive integer): ";
    std::cin >> N;
    return N;
}


void drawIsoscelesTriangle(int height) {
    int base = 2 * height - 1;
    for (int i = 0; i < height; ++i) {
        int stars = 2 * i + 1;
        int spaces = (base - stars) / 2;

        for (int s = 0; s < spaces; ++s) {
            std::cout << ' ';
        }
        for (int s = 0; s < stars; ++s) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
}

int main() {
    int N = getHeight();

    if (N <= 0) {
        std::cout << "Please enter a positive integer for the height.\n";
        return 1;
    }

    drawIsoscelesTriangle(N);

    return 0;
}
