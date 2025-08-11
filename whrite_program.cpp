#include <iostream>
#include <string>
#include <cmath>

bool isValidBinary(const std::string& binary) {
	for (char c : binary) {
		if (c != '0' && c != '1') {
			return false;
		}
	}
	return true;
}

int binaryToDecimal(const std::string& binary) {
	int decimal = 0;
	int length = binary.length();
	for (int i = 0; i < length; ++i) {
		if (binary[length - 1 - i] == '1') {
			decimal += std::pow(2, i);
		}
	}
	return decimal;
}

int main() {
	std::string binary;
	std::cout << "Enter a binary number: ";
	std::cin >> binary;

	if (!isValidBinary(binary)) {
		std::cout << "Invalid binary number." << std::endl;
		return 1;
	}

	std::cout << "Decimal equivalent: " << binaryToDecimal(binary) << std::endl;
	return 0;
}
