#include <iostream>

int calculate(int a, char op, int b) {
    if (op == '+') return a + b;
    else if (op == '-') return a - b;
    else if (op == '*') return a * b;
    else if (op == '/') {
        if (b == 0) {
            std::cout << "Error: division by zero\n";
            return 0;
        }
        return a / b;
    } else {
        std::cout << "Error: unknown operator\n";
        return 0;
    }
}

void runTests() {
    std::cout << "Running tests...\n";

    int result;

    result = calculate(2, '+', 3);
    std::cout << "2 + 3 = " << result << (result == 5 ? " ✅\n" : " ❌\n");

    result = calculate(10, '-', 4);
    std::cout << "10 - 4 = " << result << (result == 6 ? " ✅\n" : " ❌\n");

    result = calculate(3, '*', 5);
    std::cout << "3 * 5 = " << result << (result == 15 ? " ✅\n" : " ❌\n");

    result = calculate(8, '/', 2);
    std::cout << "8 / 2 = " << result << (result == 4 ? " ✅\n" : " ❌\n");

    result = calculate(9, '/', 0); // should warn
    std::cout << "9 / 0 = " << result << " ⚠️\n";

    result = calculate(7, '?', 1); // unknown operator
    std::cout << "7 ? 1 = " << result << " ⚠️\n";

    std::cout << "Tests finished.\n\n";
}

int main() {
    runTests();

    int num1, num2;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    int result = calculate(num1, op, num2);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
