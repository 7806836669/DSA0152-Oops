#include <iostream>

int main() {
    int a = 56, b = 98;
    int gcd;

    do {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    } while (a != b);

    gcd = a;

    std::cout << "GCD is " << gcd << std::endl;

    return 0;
}

