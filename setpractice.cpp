#include <iostream>
#include <set>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    set<int> X;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        X.insert(x);
    }
    for (int i = 0; i < M; i++) {
        int y;
        cin >> y;
        auto it1 = X.lower_bound(y);
        auto it2 = X.upper_bound(y);
        it2--;
        if (abs(*it2 - y) > abs(*it1 - y)) {
            cout << *it1 << endl;
        } else {
            cout << *it2 << endl;
        }
    }
}