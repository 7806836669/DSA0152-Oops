#include <iostream>

int main() {
    int n = 10;
    int a = 0, b = 1;

    std::cout << "Fibonacci series: " << a << " " << b << " ";

    for (int i = 3; i <= n; ++i) {
        int c = a + b;
        std::cout << c << " ";
        a = b;
        b = c;
    }
    std::cout << std::endl;

    return 0;
}

