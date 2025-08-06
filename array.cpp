#include <iostream>

const int SIZE = 10;


void inputArray(int arr[]) {
    std::cout << "Enter " << SIZE << " integers:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Element #" << (i + 1) << ": ";
        std::cin >> arr[i];
    }
}


bool removeFirstOccurrence(int arr[], int value) {
    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] == value) {
            for (int j = i; j < SIZE - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            arr[SIZE - 1] = 0; 
            return true; 
        }
    }
    return false; 
}

void printArray(int arr[]) {
    std::cout << "\n Final array after removal:\n[ ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "]\n";
}

int main() {
    int arr[SIZE];
    int N;

    inputArray(arr);

    std::cout << "\nEnter the value to remove: ";
    std::cin >> N;

    bool removed = removeFirstOccurrence(arr, N);
    if (!removed) {
        std::cout << "Value not found in array. Nothing was removed.\n";
    }

    printArray(arr);

    return 0;
}
