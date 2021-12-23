#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int current = n;
    int reverse = 0;
    while (n > 0) {
        int r = n % 10;
        reverse = reverse * 10 + r;
        n /= 10;
    }
    if (reverse == current) {
        cout << "yes";
    } else {
        cout << "no";
    }
}