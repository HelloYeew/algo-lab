//
// Created by Windows 10 on 9/23/2021.
//
#include <iostream>
using namespace std;

int main() {
    int n, panic, sum, previous, stock, now;
    stock = 0;
    previous = 0;
    sum = 0;
    cin >> n >> panic;
    for (int i = 0; i < n; i++) {
        cin >> now;
        if ((abs(now - previous) >= panic) && (stock == 0)) {
            // more than panic and not have stock in bot -> buy
            if (now > previous && previous != 0) {
                stock = now;
                previous = now;
            } else {
                previous = now;
            }
        } else if ((abs(now - previous) >= panic) && (stock != 0)) {
            // more than panic and have stock in bot -> sell
            if (now > previous && previous != 0) {
                previous = now;
            } else {
                sum += now - stock;
                stock = 0;
                previous = now;
            }
        } else if ((abs(now - previous) < panic) && (stock == 0)) {
            // less than panic and not have stock in bot -> do nothing
            previous = now;
        } else if ((abs(now - previous) < panic) && (stock != 0)) {
            // less than panic and have stock in bot -> do nothing
            previous = now;
        }
        cout << stock << endl;
    }
    cout << sum << endl;
}
