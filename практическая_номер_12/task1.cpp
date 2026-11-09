#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> maze(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> maze[i][j];
        }
    }

    if (maze[0][0] == '1') {
        cout << -1 << '\n';
        return 0;
    }
    if (maze[0][0] == 'E') {
        cout << 0 << '\n';
        return 0;
    }

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> cells;
    cells.push({0, 0});
    visited[0][0] = true;

    int pdfCount = 0;
    bool exitFound = false;
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    while (!cells.empty()) {
        auto [row, column] = cells.front();
        cells.pop();

        if (maze[row][column] == 'P') {
            pdfCount++;
        }

        for (int direction = 0; direction < 4; direction++) {
            int nextRow = row + dr[direction];
            int nextColumn = column + dc[direction];

            if (nextRow < 0 || nextRow >= n || nextColumn < 0 || nextColumn >= m ||
                visited[nextRow][nextColumn] || maze[nextRow][nextColumn] == '1') {
                continue;
            }
            if (maze[nextRow][nextColumn] == 'E') {
                exitFound = true;
                continue;
            }

            visited[nextRow][nextColumn] = true;
            cells.push({nextRow, nextColumn});
        }
    }

    cout << (exitFound ? pdfCount : -1) << '\n';
}
