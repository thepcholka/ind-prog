#include <iostream>
using namespace std;

void hanoi(int n, int from, int to, int help) {
    if (n == 0)
        return;

    hanoi(n - 1, from, help, to);

    cout << "Ingredient " << n
         << " move from " << from
         << " to " << to << '\n';

    hanoi(n - 1, help, to, from);
}

int main() {
    int n;
    cin >> n;

    hanoi(n, 1, 3, 2);
}