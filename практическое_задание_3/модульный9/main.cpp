#include <iostream>

int check(int n, int m) {
    return 1 - (n % m) * (m % n);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << check(n, m) << std::endl;
    return 0;
}