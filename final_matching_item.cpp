#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int p[n];

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    // buy item, lottery number
    vector<pair<int, int>> buy;

    int xj,yj;

    for (int i = 0; i < q; i++) {
        cin >> xj >> yj;
        buy.emplace_back(xj,yj);
    }

    for(int i = 0; i < q; i++) {
        int goal = p[buy[i].first-1] + buy[i].second;
        // get closest or equal p index to goal using binary search by standard library
        int index = lower_bound(p, p + n, goal) - p;
        // check on equal too
        if (p[index] == goal) {
            cout << index+1 << endl;
        } else {
            cout << index << endl;
        }
    }
}