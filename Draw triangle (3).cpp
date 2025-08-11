#include <iostream>


void drawLeftTriangle(int height) {
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}


void drawRightTriangle(int height) {
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}


int getHeight() {
    int h;
    std::cout << "Enter height N: ";
    std::cin >> h;
    return h;
}

int main() {
    int N = getHeight();

    drawLeftTriangle(N);
    std::cout << std::endl;
    drawRightTriangle(N);

    return 0;
}
