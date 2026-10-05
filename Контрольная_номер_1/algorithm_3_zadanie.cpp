#include <iostream>

int main() {
    double x = 0.0;
    std::cout << "Введите значение переменной x: ";
    std::cin >> x;
    const double result = 30.0 - 12.0 * x;
    std::cout << "Значение выражения 4(3-2х)+24-2(3+2х) = " << result << std::endl;
    return 0;
}
