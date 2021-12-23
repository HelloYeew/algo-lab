#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int weights[1000];
    for (int i = 0; i < N; i++) {
        cin >> weights[i];
    }
    int now = 0;
    int ans = 1;
    for (int i = 0; i < N; i++) {
        if (now + weights[i] <= 1000) {
            now += weights[i];
        } else {
            ans++;
            now = weights[i];
        }
    }
    cout << ans << endl;
}