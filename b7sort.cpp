//
// Created by Windows 10 on 10/6/2021.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int integer[100000];
    int n,k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> integer[i];
    }
    sort(integer, integer + n);
    // print out floor(N/K) numbers, which is the K-th, 2K-th, 3K-th,…. integers in the sorted list

    int i = 1;
    while (i < n/k) {
        cout << integer[i] << endl;
        i += k;
    }
}