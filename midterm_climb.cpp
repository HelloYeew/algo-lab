//
// Created by Windows 10 on 10/7/2021.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int before, h ,m, energy;
    h = 0;
    m = 0;
    energy = 0;
    before = 0;
    for (int i = 0; i < n; i++) {
        cin >> h;
        if (h - before > 0) {
            // consume energy
            energy += h - before + m;
            m += 1;
            before = h;
        }
        else {
            // not use energy
            m = 0;
            before = h;
        }
    }
    cout << energy << endl;
}