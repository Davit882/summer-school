#include <iostream>


void drawRectangle(int width, int height, char ch) {
    for (int row = 0; row < height; ++row) {
        for (int col = 0; col < width; ++col) {
            if (row == 0 || row == height - 1 || col == 0 || col == width - 1) {
                std::cout << ch;
            } else {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
}


void getInput(int &width, int &height, char &ch) {
    std::cout << "Մուտքագրիր N և M: ";
    std::cin >> width >> height;

    std::cout << "Մուտքագրիր սիմվոլը, որով կնկարենք ուղղանկյունը: ";
    std::cin >> ch;
}

int main() {
    int N, M;
    char ch;

    getInput(N, M, ch);
    drawRectangle(N, M, ch);

    return 0;
}


