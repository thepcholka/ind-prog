#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<long long>> points(n, vector<long long>(m));
    vector<vector<long long>> best(n, vector<long long>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> points[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0) {
                best[i][j] = points[i][j];
            } else if (i == 0) {
                best[i][j] = best[i][j - 1] + points[i][j];
            } else if (j == 0) {
                best[i][j] = best[i - 1][j] + points[i][j];
            } else {
                best[i][j] = max(best[i - 1][j], best[i][j - 1]) + points[i][j];
            }
        }
    }

    vector<pair<int, int>> path;
    int i = n - 1, j = m - 1;

    while (true) {
        path.push_back({i, j});
        if (i == 0 && j == 0) {
            break;
        }
        if (i == 0) {
            j--;
        } else if (j == 0 || best[i - 1][j] >= best[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    reverse(path.begin(), path.end());
    for (auto [row, column] : path) {
        cout << row << ' ' << column << '\n';
    }
}
