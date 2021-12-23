//
// Created by HelloYeew on 12/24/2021.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int current = i;
        for (int j = 1; j <= n; j++) {
            if (current == n) {
                current = 1;
                cout << current;
            } else {
                current++;
                cout << current;
            }
            if (j == n) {
                cout << endl;
            }
        }
    }
}