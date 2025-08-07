#include <iostream>
#include <string>


int getNumber(std::string text) {
    int num;
    std::cout << text;
    std::cin >> num;
    return num;
}

int glueNumbers(int a, int b) {
    std::string result = std::to_string(a) + std::to_string(b);
    return std::stoi(result); 
}

int main() {
    int x = getNumber("Մուտքագրեք առաջին թիվը: ");
    int y = getNumber("Մուտքագրեք երկրորդ թիվը: ");

    int answer = glueNumbers(x, y);

    std::cout << "Միացված թիվը՝ " << answer << std::endl;

    return 0;
}
