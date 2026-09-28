#include <iostream>

class DivisibilityChecker {
private:
    int n;
    int m;

public:
    DivisibilityChecker(int a, int b) : n(a), m(b) {}
    int getResult() const {
        return 1 - (n % m) * (m % n);
    }
};

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    DivisibilityChecker checker(n, m);
    cout << checker.getResult() << endl;
}