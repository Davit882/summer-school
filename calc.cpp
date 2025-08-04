#include <iostream>
#include <string>

int main() {
    int num1;
    char numericalFunction;
    int num2;

    std::cout << "Hello, please enter your first number ";
    std::cin >> num1; 

    std::cout << "Hello, please enter numerical function";
    std::cin >> numericalFunction;
    
     std::cout << "Hello, please enter your second number ";
    std::cin >> num2;

    switch(numericalFunction){
        case '+':
        std::cout<< num1 + num2;
        break;
        case '-':
        std::cout<< num1 - num2;
        break;
        case '*':
        std::cout<< num1 * num2;
        break;
        case '/':
        if(num2 == 0){
            std::cout<< "You cannot devide by 0";
        }else{
             std::cout<< num1/num2;
        }
        break;
        default:
            std::cout << "Unknown operator!";
    }

    return 0;
}

