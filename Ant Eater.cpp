//
// Created by Windows 10 on 9/23/2021.
//

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int arr[1000];
    for (int i = 0; i < a; i++) {
        int b;
        cin >> b;
        arr[i] = b;
    }
    int sum = 0;
    bool eaten = false;
    for (int i = 0; i < a; i++) {
        if ((arr[i] <= 1000) && (!eaten)) {
            sum += arr[i];
        }
        else if (eaten) {
            sum += 0;
            eaten = false;
        } else {
            sum += 1000;
            eaten = true;
        }
    }
    cout << sum << endl;
}