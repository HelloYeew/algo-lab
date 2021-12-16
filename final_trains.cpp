#include <iostream>
#include <array>
#include <vector>

using namespace std;

array<bool, 100000> visited;
vector<pair<int, int>> map[100000];

// graph
bool can_travel(const vector<pair<int, int>> *map, int start, int end, int credit) {
    visited[start] = true;
    if (start == end) {
        cout << "yes" << endl;
        return true;
    }
    for (const auto & path : map[start]) {
        if (path.second <= credit && !visited[path.first]) {
            if (can_travel(map, path.first, end, credit)) {
                return true;
            }
        }
    }
}

int main() {
    int n,m,q;
    cin >> n >> m >> q;
    // next M lines contains route information
    for (int i = 0; i < m; i++) {
        int a,b,credit;
        cin >> a >> b >> credit;
        map[a].emplace_back(b,credit);
        map[b].emplace_back(a,credit);
    }

    // next Q lines contain passenger information
    for (int i = 0; i < q; i++) {
        int credit_pass, start, end;
        cin >> credit_pass >> start >> end;
        // check that can travel from return value
        if (!can_travel(map, start, end, credit_pass)) {
            cout << "no" << endl;
        }
        // reset visited for next passenger
        visited.fill(false);
    }
}