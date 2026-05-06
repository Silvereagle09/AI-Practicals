#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

struct Node {
    int x, y;
    int g, h;
    int f() const {
        return g + h;
    }
};
// Comparator for priority queue
struct Compare {
    bool operator()(Node a, Node b) {
        return a.f() > b.f();
    }
};

// Manhattan Distance
int heuristic(int x, int y, int gx, int gy) {
    return abs(x - gx) + abs(y - gy);
}

int main() {
    int grid[3][3] = {
        {0, 0, 0},
        {1, 1, 0},
        {0, 0, 0}
    };

    int startX = 0, startY = 0;
    int goalX = 2, goalY = 2;

    priority_queue<Node, vector<Node>, Compare> pq;

    pq.push({startX, startY, 0, heuristic(startX, startY, goalX, goalY)});

    bool visited[3][3] = {false};

    while (!pq.empty()) {
        Node curr = pq.top();
        pq.pop();

        if (visited[curr.x][curr.y])
            continue;

        visited[curr.x][curr.y] = true;

        cout << "Visiting: (" << curr.x << "," << curr.y << ")\n";

        if (curr.x == goalX && curr.y == goalY) {
            cout << "Goal reached!\n";
            break;
        }

        // 4 directions
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++) {
            int nx = curr.x + dx[i];
            int ny = curr.y + dy[i];

            if (nx >= 0 && nx < 3 && ny >= 0 && ny < 3 &&
                grid[nx][ny] == 0 && !visited[nx][ny]) {

                pq.push({
                    nx,
                    ny,
                    curr.g + 1,
                    heuristic(nx, ny, goalX, goalY)
                });
            }
        }
    }
    return 0;
}