//
// Created by Windows 10 on 9/22/2021.
//

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int k;
    for (int i = 1; i <= a; i++) {
        // check that is i is prime number
        int n;
        bool check = false;
        n = i/2;
        for (int j = 2; j <= n; j++) {
            if (i % j == 0) {
                check = true;
            }
        }
        if (check == false) {
            if (a % i == 0) {
                k++;
            }
        }
    }
    cout << k-1 << endl;
}