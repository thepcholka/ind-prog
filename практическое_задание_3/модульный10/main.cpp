#include <iostream>

int max(int x, int y) {
    if (x > y) {
        return x;
    }
    return y;
}

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << max(a, b) << endl;
}