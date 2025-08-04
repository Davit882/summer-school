#include <iostream>

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    int N;


    std::cout << "Enter 10 integers:\n";
    for (int i = 0; i < SIZE; i++) {
        std::cin >> arr[i];
    }

    
    std::cout << "Enter the value to remove: ";
    std::cin >> N;

    
    bool found = false;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == N) {
            found = true;
            for (int j = i; j < SIZE - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[SIZE - 1] = 0; // Zero at the end
            break;
        }
    }

    
    std::cout << "Final array: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
