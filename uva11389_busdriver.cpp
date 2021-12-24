//
// Created by HelloYeew on 12/25/2021.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,d,r;
    while (cin >> n >> d >> r) {
        if (n == 0) break;
        int mornings[10000],afternoons[10000];
        int placeholder;
        for (int i = 0; i < n; i++) {
            cin >> placeholder;
            mornings[i] = placeholder;
        }
        for (int i = 0; i < n; i++) {
            cin >> placeholder;
            afternoons[i] = placeholder;
        }
        // sort
        sort(mornings, mornings + n);
        sort(afternoons, afternoons + n);
        // find min
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (mornings[i] + afternoons[n-i-1] > d) {
                sum += (mornings[i] + afternoons[n-i-1] - d) * r;
            }
        }
        cout << sum << endl;
    }
    return 0;
}