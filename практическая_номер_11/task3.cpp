#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, l;
    cin >> n >> k >> l;

    vector<long long> cost(n);
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }

    if (k > n * l) {
        cout << -1 << '\n';
        return 0;
    }

    sort(cost.rbegin(), cost.rend());

    long long total = 0;
    int selected = 0;
    for (int i = 0; i < n && selected < k; i++) {
        int count = min(l, k - selected);
        total += cost[i] * count;
        selected += count;
    }

    cout << total << '\n';
}
