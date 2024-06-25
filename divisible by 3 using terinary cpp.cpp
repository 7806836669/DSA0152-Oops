#include <iostream>

int main() {
    int number = 9;
    std::string result;

    result = (number % 3 == 0) ? "Divisible by 3" : "Not Divisible by 3";

    std::cout << number << " is " << result << std::endl;

    return 0;
}

