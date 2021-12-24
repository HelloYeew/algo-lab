//
// Created by HelloYeew on 12/24/2021.
//

#include <iostream>
#include <set>
using namespace std;

int main() {
    int N,M;
    set<int> cd;
    int count = 0;
    int catalog;

    while (cin >> N >> M) {
        if (N == 0 && M == 0) break;
        while (N != 0) {
            cin >> catalog;
            cd.insert(catalog);
            N--;
        }
        while (M != 0) {
            cin >> catalog;
            if (cd.find(catalog) != cd.end()) {
                count++;
            }
            M--;
        }
        cout << count << endl;
        count = 0;
        cd.clear();
    }
}