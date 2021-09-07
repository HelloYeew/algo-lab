//
// Created by Phawit Pornwattanakul on 19/8/2021 AD.
//

#include <iostream>

using namespace std;

// return gcd of a and b
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a,b;
    cin >> a >> b;
    int lgcd = gcd(a,b);
    a = a/lgcd;
    b = b/lgcd;
    cout << a << "/" << b << endl;
}