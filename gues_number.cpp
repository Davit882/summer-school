#include <iostream>
#include <cstdlib>
#include <ctime>


int generateSecretNumber(int min, int max) {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    return std::rand() % (max - min + 1) + min;
}

int getGuess() {
    int guess;
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    return guess;
}

void playGame(int min, int max) {
    int secret = generateSecretNumber(min, max);
    int attempts = 0;

    std::cout << "Guess the number (" << min << "-" << max << "):\n";
    while (true) {
        int guess = getGuess();
        ++attempts;

        if (guess < secret) {
            std::cout << "too low\n";
        } else if (guess > secret) {
            std::cout << "too high\n";
        } else {
            std::cout << "Correct! You guessed it in " << attempts << " attempts.\n";
            break;
        }
    }
}

int main() {
    playGame(1, 100);
    return 0;
}

