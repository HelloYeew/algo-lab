//
// Created by HelloYeew on 12/25/2021.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    // create vector pair int int
    vector<pair<int, int>> work;
    // get input and put in vector
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        work.emplace_back(a, b);
    }
    // sort vector
    sort(work.begin(), work.end());
    // greedy
    int ans = 0;
    int cur = 0;
    for (int i = 0; i < N; i++) {
        cur += work[i].second;
        if ((cur - work[i].first > 10) && (ans < (cur - work[i].first - 10) * 10000)) {
            ans = (cur - work[i].first - 10) * 10000;
        }
    }
    cout << ans/10 << endl;

}