//
// Created by Windows 10 on 9/22/2021.
//
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[10] = {0};
    for (int i = 0; i < n; i++) {
        char c;
        int r;
        cin >> c >> r;
        r--;
        int maxnum;
        if (c == '-') {
            maxnum = max({a[r], a[r + 1], a[r + 2], a[r + 3]});
            maxnum++;
            a[r] = maxnum;
            a[r + 1] = maxnum;
            a[r + 2] = maxnum;
            a[r + 3] = maxnum;
        } else if (c == 'i') {
            a[r] += 4;
        } else if (c == 'o') {
            maxnum = max({a[r], a[r + 1]});
            maxnum += 2;
            a[r] = maxnum;
            a[r + 1] = maxnum;
        }
    }
    cout << max({a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]}) << endl;
}
