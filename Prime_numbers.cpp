#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int N;
    std::cout << "Enter a number: ";
    std::cin >> N;

  
    if (isPrime(N))
        std::cout << N << " is a prime number.\n";
    else
        std::cout << N << " is not a prime number.\n";


    std::cout << "Prime numbers from 1 to " << N << " are:\n";
    for (int i = 2; i <= N; ++i)
        if (isPrime(i))
            std::cout << i << " ";

    std::cout << std::endl;
    return 0;
}
