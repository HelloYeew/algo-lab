//
// Created by Windows 10 on 9/21/2021.
//

#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cin >> n;
    sum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if ((i+1) % 4 == 0) {
            sum += a*2;
        } else {
            sum += a;
        }
    }
    cout << sum << endl;
}
