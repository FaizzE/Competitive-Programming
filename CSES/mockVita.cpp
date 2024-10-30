#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

int bfs(vector<vector<int>>& grid, pair<int, int> start, pair<int, int> end, pair<int, int> moveRule) {
    int M = grid.size();
    int N = grid[0].size();
    queue<pair<int, int>> q;
    set<pair<int, int>> visited;

    vector<pair<int, int>> directions = {int bfs(vector<vector<int> >& grid, pair<int, int> start, pair<int, int> end, pair<int, int> moveRule) {
    int M = grid.size();
    int N = grid[0].size();
    queue<pair<int, int>> q;
    set<pair<int, int>> visited;

    vector<pair<int, int>> directions = {
        {moveRule.first, moveRule.second},
        {moveRule.second, -moveRule.first},
        {-moveRule.second, moveRule.first},
        {-moveRule.first, -moveRule.second}
    };

    q.push(start);
    visited.insert(start);
    int moves = 0;

    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            auto current = q.front();
            q.pop();

            if (current == end) {
                return moves;
            }

            for (const auto& dir : directions) {
                int newX = current.first + dir.first;
                int newY = current.second + dir.second;

                if (newX >= 0 && newX < M && newY >= 0 && newY < N && grid[newX][newY] == 0) {
                    pair<int, int> newPos = {newX, newY};
                    if (visited.find(newPos) == visited.end()) {
                        visited.insert(newPos);
                        q.push(newPos);
                    }
                }
            }
        }
        ++moves;
    }

    return -1;
}


int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<int>> grid(M, vector<int>(N));
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> grid[i][j];
        }
    }

    pair<int, int> source, destination, moveRule;
    cin >> source.first >> source.second;
    cin >> destination.first >> destination.second;
    cin >> moveRule.first >> moveRule.second;

    int result = bfs(grid, source, destination, moveRule);
    cout << result << endl;

    return 0;
}

