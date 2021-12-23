//
// Created by HelloYeew on 12/24/2021.
//

#include <iostream>
using namespace std;

bool check_prime(int num) {
    bool is_prime = true;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}

int main() {
    int a;
    cin >> a;
    int k = 0;
    for (int i = 2; i <= a; i++) {
        if (check_prime(i) && a % i == 0) {
            k++;
        }
    }

    cout << k << endl;
}