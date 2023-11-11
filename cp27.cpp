#include <iostream>

int modexp(int a, int b, int n) {
    int result = 1;
    int base = a % n; // Ensure base is within the modulo range
    int power = b;

    while (power > 0) {
        if (power % 2 == 1)
            result = (result * base) % n;

        base = (base * base) % n;
        power /= 2; // Integer division by 2
    }

    return result;
}

int main() {
    // Example usage:
    int a = 2;
    int b = 10;
    int n = 100000;

    int result = modexp(a, b, n);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
