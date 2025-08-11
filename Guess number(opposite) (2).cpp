#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>


int generateRandomNumber(int min, int max) {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    return std::rand() % (max - min + 1) + min;
}


int getValidGuess() {
    int guess;
    while (true) {
        std::cout << "Enter your guess: ";
        if (std::cin >> guess) {
            return guess; 
        }
        std::cout << "Invalid input. Please enter a number.\n";
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }
}

void playGame(int min, int max) {
    int number = generateRandomNumber(min, max);
    int guess = 0;
    int attempts = 0;

    std::cout << "Guess the number (" << min << "-" << max << "):\n";

    do {
        guess = getValidGuess();
        attempts++;

        if (guess > number) {
            std::cout << "too high\n";
        } else if (guess < number) {
            std::cout << "too low\n";
        } else {
            std::cout << "Correct! You guessed it in " << attempts << " attempts.\n";
        }
    } while (guess != number);
}

int main() {
    playGame(1, 100);
    return 0;
}
