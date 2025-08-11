#include <iostream>
#include <bitset>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // 4 bits representation
    const int BITS = 4;
    // Mask to get only the last 4 bits
    int masked = num & ((1 << BITS) - 1);

    std::bitset<BITS> binary(masked);
    std::cout << "4-bit binary: " << binary << std::endl;

    return 0;
}