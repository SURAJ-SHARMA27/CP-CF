#include <iostream>
#include <cmath>

int find_x(int a, int b) {
    int product = a * b;
    int x = std::ceil(std::sqrt(product));
    return x;
}

int main() {
    int t;
    std::cin >> t;  // Number of test cases

    for (int i = 0; i < t; ++i) {
        int a, b;
        std::cin >> a >> b;
        int result = find_x(a, b);
        std::cout << result << std::endl;
    }

    return 0;
}
