#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,l;
    cin >> n >> l;
    vector<pair<int,int>> a;
    int s,t;
    for (int i = 0; i < n; i++) {
        cin >> s >> t;
        a.emplace_back(make_pair(s,t));
    }

    int fence = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if ((i == 0) || (a[i].second > fence)) {
            fence = a[i].first + l;
            ans += 1;
        } else if ((a[i].second == fence) && (i != n)) {
            fence = a[i + 1].first;
        }
    }
    cout << ans << endl;
}