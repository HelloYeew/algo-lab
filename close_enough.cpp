#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;

    int house[10000];
    for (int i = 0; i < N; i++) {
        cin >> house[i];
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (abs(house[i] - house[j]) <= L) {
                count++;
            }
        }
    }
    cout << count << endl;
}