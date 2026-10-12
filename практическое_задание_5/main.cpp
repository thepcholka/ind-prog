#include <iostream>

using namespace std;

int main() {
    double x, y;
    cout << "Введите числа x и y\n";
    cin >> x >> y;

// вайл
    {
        double x1 = x, s = x;
        int c = 1;
        while (s < y) {
            x1 += x1 / 10.0;
            c += 1;
            s += x1;
        }
        cout << "while:" << c << '\n';
    }
//      фор
    {
        double x1 = x, s = x;
        int c = 1;

        for (; s < y;) {
            x1 += x1 / 10.0;
            c += 1;
            s += x1;
        }
        cout << "for:" << c << '\n';
    }
//  ду вайл
    {
        double x1 = x, s = x;
        int c = 1;

        do {
            x1 += x1 / 10.0;
            c += 1;
            s += x1;
        } while (s < y);
        cout << "dowhile:" << c << '\n';
    }
    return 0;
}