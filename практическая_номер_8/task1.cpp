#include <iostream>
using namespace std;

long long power(long long x, long long n) {
    if (n == 0)
        return 1;

    long long t = power(x, n / 2);

    if (n % 2 == 0)
        return t * t;
    else
        return t * t * x;
}

int main() {
    long long x, n;
    cin >> x >> n;

    cout << power(x, n) << '\n';
}