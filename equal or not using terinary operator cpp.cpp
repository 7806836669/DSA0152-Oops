#include <iostream>

int main() {
    int a = 5, b = 5;
    std::string result;

    result = (a == b) ? "Equal" : "Not Equal";

    std::cout << "The numbers are " << result << std::endl;

    return 0;
}

