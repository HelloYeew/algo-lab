#include <iostream>

using namespace std;

bool check_prime(int p)
{
    if (p <= 1) {
        return false;
    }

    for (int i = 2; i < p; ++i) {
        if (p % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int n;
    cin >> n;
    n++;
    while (true) {
        if (check_prime(n)) {
            cout << n;
            return 0;
        } else {
            n++;
        }
    }
}