#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool canDistribute(const vector<long long>& calories, int days, long long difference) {
    int usedDays = 1;
    long long first = calories[0];

    for (int i = 1; i < static_cast<int>(calories.size()); i++) {
        if (calories[i] - first > difference) {
            usedDays++;
            first = calories[i];
        }
    }

    return usedDays <= days;
}

int main() {
    int n, d;
    cin >> n >> d;

    vector<long long> calories(n);
    for (int i = 0; i < n; i++) {
        cin >> calories[i];
    }
    sort(calories.begin(), calories.end());

    long long left = 0;
    long long right = calories[n - 1] - calories[0];

    while (left < right) {
        long long middle = left + (right - left) / 2;
        if (canDistribute(calories, d, middle)) {
            right = middle;
        } else {
            left = middle + 1;
        }
    }

    cout << left << '\n';
}
