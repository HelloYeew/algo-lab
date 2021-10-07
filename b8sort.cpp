//
// Created by Windows 10 on 10/6/2021.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[100000];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    sort(array, array + n);
    int min = array[0];
    for (int i = 1; i < n; i++) {
        if (abs(array[i] - array[i - 1]) < min) {
            min = abs(array[i] - array[i - 1]);
        }
    }
    cout << min << endl;
    return 0;
}