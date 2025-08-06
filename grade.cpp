#include <iostream>

char getLetterGrade(int grade) {
    if (grade >= 90) return 'A';
    else if (grade >= 80) return 'B';
    else if (grade >= 70) return 'C';
    else if (grade >= 60) return 'D';
    else return 'F';
}


void printGradeArt(char letter) {
    std::cout << "Your grade is " << letter << "\n";

    switch (letter) {
        case 'A':
            std::cout << "[A Excellent!]\n";
            break;
        case 'B':
            std::cout << "[B Good job!]\n";
            break;
        case 'C':
            std::cout << "[C Not bad. Try harder.]\n";
            break;
        case 'D':
            std::cout << "[D Barely passed.]\n";
            break;
        case 'F':
            std::cout << "[F Failed. Study more.]\n";
            break;
    }
}

int main() {
    int grade;
    while (true) {
        std::cout << "Enter grade (0-100) or -1 to exit: ";
        std::cin >> grade;

        if (grade == -1) break;
        if (grade < 0 || grade > 100) {
            std::cout << "Invalid grade! Try again.\n";
            continue;
        }

        char letter = getLetterGrade(grade);
        printGradeArt(letter);
    }

    return 0;
}
