#include <iostream>

class NumberComparator {
public:
    int findMax(int x, int y) const {
        if (x > y) {
            return x;
        }
        return y;
    }
};

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    NumberComparator comparator;
    cout << comparator.findMax(a, b) << endl;
}