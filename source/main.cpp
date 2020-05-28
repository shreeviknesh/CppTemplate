#include <iostream>

auto fibonacci(int n) -> int {
    if (n == 1 || n == 0 || n > 10) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 0;
    std::cout << "Enter a number from 1-10: ";
    std::cin >> n;
    std::cout << "The " << n << "th fibonacci number is " << fibonacci(n) << "\n";
}
