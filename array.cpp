#include <iostream>


void removeFirstOccurrence(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
          
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[size - 1] = 0; 
            break; 
        }
    }
}

void printArray(int arr[], int size) {
    std::cout << "Final array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    const int SIZE = 10;
    int arr[SIZE];

  
    for (int i = 0; i < SIZE; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int N;
    std::cout << "Enter the value to remove: ";
    std::cin >> N;

   
    removeFirstOccurrence(arr, SIZE, N);

    printArray(arr, SIZE);

    return 0;
}
