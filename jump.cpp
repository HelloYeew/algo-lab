#include <iostream>
#include <string>
#include <utility>
#include <list>
#include <vector>

using namespace std;

const int MAX_N = 100010;

int levels[MAX_N];
bool seen[MAX_N];
bool visited[MAX_N];

int n, r;
vector<int> adj[MAX_N];
int deg[MAX_N];

void init()
{
    for (int u = 0; u < n; ++u) {
        levels[u] = -1;
        seen[u] = false;
        visited[u] = false;
    }
}

void bfs2(int s)
{
    list<int> q;

    q.push_back(s);
    levels[s] = 0;
    seen[s] = true;

    while (!q.empty()) {
        // iterate over all nodes in currentNodes
        int u = q.front();
        q.pop_front();

        int l = levels[u];

        for (int d = 0; d < deg[u]; ++d) {
            int v = adj[u][d];

            if (!seen[v]) {
                seen[v] = true;
                levels[v] = l+1;
                q.push_back(v);
            }
        }

    }
}

int main() {
    cin >> n >> r;
    pair<int, int> trees[n];
    trees[0] = make_pair(0, 0);
    for (int i = 1; i < n+1; i++) {
        int x, y;
        cin >> x >> y;
        trees[i] = make_pair(x, y);
    }
    trees[n+1] = make_pair(100, 100);
    for (int i = 0; i < n+1; i++) {
        for (int j = i+1; j < n+2; j++) {
            int x1 = trees[i].first;
            int y1 = trees[i].second;
            int x2 = trees[j].first;
            int y2 = trees[j].second;
            int dist = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
            if (dist <= r*r) {
                adj[i].push_back(j);
                adj[j].push_back(i);
                deg[i]++;
                deg[j]++;
            }
        }
    }

    bfs2(0);

    if (levels[n+1] != 0) {
        cout << levels[n+1] << endl;
    } else {
        cout << -1 << endl;
    }


    return 0;
}