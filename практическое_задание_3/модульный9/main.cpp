#include <iostream>

int check(int n, int m) {
    return 1 - (n % m) * (m % n);
}

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    cout << check(n, m) << endl;
}