#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

const int color1 = 0;
const int color2 = 1;
const int unknown = 2;

int main() {
    int n;
    while (cin >> n, n != 0) {
        vector<vector<int>> G(n);
        vector<int> color(n, unknown);
        bool is_bipartite = true;

        int l;
        cin >> l;
        while ( l-- )
        {
            int u, v;
            cin >> u >> v;
            G[u].push_back(v);
            G[v].push_back(u);
        }

        queue<int> q;
        // the graph is strongly connected so we can reach all nodes from the first node
        // vertices start from any vertex
        color[0] = color1;
        q.push(0);
        // BFS
        while (!q.empty() & is_bipartite) {
            // get the first vertex
            int u = q.front();
            // remove it from the queue
            q.pop();
            for (int i=0; i<G[u].size(); i++) {
                int v = G[u][i];
                if (color[v] == color[u]) {
                    // if the color of the adjacent vertex is the same as the color of the current vertex
                    // then the graph is not bipartite
                    is_bipartite = false;
                    break;
                } else if (color[v] == unknown) {
                    // if the color of the adjacent vertex is unknown
                    color[v] = 1 - color[u];
                    q.push(v);
                }
            }
        }
        if (is_bipartite) {
            cout << "BICOLORABLE." << endl;
        } else {
            cout << "NOT BICOLORABLE." << endl;
        }
    }
}