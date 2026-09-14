#include <iostream>
#include <vector>
#include <cmath>
#include <utility>

using namespace std;

void f1(int n) {
    long long s = 1;
    for (int i = 1; i <= n; i++) {
        s *= i;
    }
    cout << s;
}

int main() {
    // задача 1
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << ' ' << b << "\n";

    // задача 2
    int q;
    cin >> q;
    f1(q);
    cout << "\n";

    // задача 3
    cin >> a;
    if (a == 1) b = 2;
    else b = 1;
    cout << b << "\n";

    // задача 4
    vector<int> a4 = {1, 4, 7, 10}, b4 = {2, 3, 8, 12}, c4 = {};
    
    int i = 0, j = 0; 
    for (; i < a4.size() && j < b4.size();) { 
        if (a4[i] <= b4[j]) {
            c4.push_back(a4[i]);
            i++;
        } else {
            c4.push_back(b4[j]);
            j++;
        }
    }
    
    while (i < a4.size()) {
        c4.push_back(a4[i]);
        i++;
    }
    while (j < b4.size()) {
        c4.push_back(b4[j]);
        j++;
    }
    
    for (int k = 0; k < c4.size(); k++) {
        cout << c4[k] << ' ';
    }
    cout << "\n";
}
