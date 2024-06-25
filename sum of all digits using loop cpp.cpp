#include <iostream>

int main() {
    int n = 123;
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    std::cout << "Sum of all digits is " << sum << std::endl;

    return 0;
}

