#include <iostream>
#include <cmath>
int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    if (number >= 0) {
        double squareRoot = sqrt(number);
        std::cout << "Square root of " << number << " is: " << squareRoot << std::endl;
    } else {
        std::cout << "Square root of a negative number is imaginary and cannot be calculated." << std::endl;
    }
    return 0;
} 
