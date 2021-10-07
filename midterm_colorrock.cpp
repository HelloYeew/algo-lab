//
// Created by Windows 10 on 10/7/2021.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    stack<int> s;


    if (k == 2) {
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (!s.empty() && s.top() == x) {
                s.pop();
            } else {
                s.push(x);
            }
        }
    }
    else {
        stack<int> temp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            temp = s;
            if (!s.empty() && i >= 2) {
                temp.pop();
            }
            if (!s.empty() && temp.top() == s.top() && s.top() == x && i >= 2) {
                s.pop();
                s.pop();
            } else {
                s.push(x);
            }
        }
    }

    cout << s.size() << endl;
}