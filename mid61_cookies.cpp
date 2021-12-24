//
// Created by HelloYeew on 12/25/2021.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    vector<int> cookie;
    int operation, k, cookie_num;
    for (int i = 0; i < T; i++) {
        cin >> operation;
        if (operation == 1) {
            // insert a cookie
            cin >> k >> cookie_num;
            // check that is k is more or less than cookie vector size
            if (k > cookie.size()) {
                // insert
                cookie.push_back(cookie_num);
            } else {
                // insert on k place
                cookie.insert(cookie.begin() + k, cookie_num);
            }
        } else if (operation == 2) {
            // eat
            cin >> k;
            // check that is k is more or less than cookie vector size
            if (k > cookie.size()) {
                continue;
            } else {
                // delete
                cookie.erase(cookie.begin() + k - 1);
            }
        }
    }
    for (int i = 0; i < cookie.size(); i++) {
        cout << cookie[i] << " ";
    }
}