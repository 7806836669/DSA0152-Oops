#include <iostream>
#define SWAP(a, b) { int temp = a; a = b; b = temp; }

int main() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    SWAP(num1, num2);
    std::cout << "After swapping: " << std::endl;
    std::cout << "First number: " << num1 << std::endl;
    std::cout << "Second number: " << num2 << std::endl;
    return 0;
}

