#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (a == b)
        return a;

    if (a % 2 == 0 && b % 2 == 0)
        return 2 * gcd(a / 2, b / 2);

    if (a % 2 == 0)
        return gcd(a / 2, b);

    if (b % 2 == 0)
        return gcd(a, b / 2);

    if (a > b)
        return gcd((a - b) / 2, b);

    return gcd(a, (b - a) / 2);
}

int main() {
    long long a, b;
    cin >> a >> b;

    cout << gcd(a, b) << '\n';
}