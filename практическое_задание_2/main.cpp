#include <iostream>
#include <vector>
#include <cmath>
#include <utility>

using namespace std;

// Задача 2 функция
void f1(int n) {
    long long fac = 1;
    long long ans = 1;
    
    for (int i = 1; i <= n; i++) {
        fac *= i;
        ans *= fac;
    }
    cout << ans;
}

int main() {
    //Задача1
    cout << "задача 1\nвведите a и b\n";
    int a, b;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << ' ' << b << "\n\n";


    //Задача 2
    cout << "задача 2\nвведите n: ";
    int q;
    cin >> q;
    f1(q);
    cout << "\n\n";


    //Задача 3
    cout << "задача 3\nвведите A (0 или 1): ";
    int A, B;
    cin >> A;
    B = 2 - A; 
    cout << "B = " << B << "\n\n";


    //Задача 4
    cout << "задача 4\n";
    vector<int> a4 = {1, 4, 7, 10}, b4 = {2, 3, 8, 12};
    int i = 0, j = 0; 
    int tot_el = a4.size() + b4.size();
    for (int c = 1; c <= tot_el; c++) {
        if (j >= b4.size() || (i < a4.size() && a4[i] <= b4[j])) {
            cout << a4[i] << ' ';
            i++;
        } else {
            cout << b4[j] << ' ';
            j++;
        }
    }
    cout << "\n\n";


    //Задача 5
    cout << "задача 5\n";
    //Пример массива n = 5
    vector<int> a5 = {0, 1, 4, 5, 2}; 
    int n = a5.size();
    long long exsum = (1LL * n * (n + 1)) / 2;
    long long actsum = 0;
    for (int k = 0; k < n; k++) {
        actsum += a5[k];
    }
    
    int misj = exsum - actsum;
    cout << "Недостающее число: " << misj << "\n";
}
