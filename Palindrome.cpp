#include <iostream>
using namespace std;

int main() {
    int num, orig, rev = 0;
    cout << "Enter number: ";
    cin >> num;
    orig = num;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    if (orig == rev) cout << "Palindrome\n";
    else cout << "Not palindrome\n";
    return 0;
}
