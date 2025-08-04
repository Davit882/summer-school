#include <iostream>
using namespace std;

int main() {
    int grade;
    while (true) {
        cout << "Enter grade (0-100) or -1 to exit: ";
        cin >> grade;
        if (grade == -1)
            break;
        if (grade >= 90) cout << "Your grade is A\n";
        else if (grade >= 80) cout << "Your grade is B\n";
        else if (grade >= 70) cout << "Your grade is C\n";
        else if (grade >= 60) cout << "Your grade is D\n";
        else cout << "Your grade is F\n";
    }
    return 0;
}