#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int count = 1;
    int N[100005];
    while (cin >> N[count]) {
        // sort to find median
        sort(N, N + count + 1);
        // fix some edge case
        if (count == 1) {
            cout << N[1] << endl;
        } else if (count % 2 == 0) {
            cout << (N[count / 2] + N[(count / 2) + 1]) / 2 << endl;
        } else {
            cout << N[(count / 2) + 1] << endl;
        }
        count++;
    }
}