#include "iostream"
using namespace std;

int main() {
    char c[101];
    int n;
    int loop;
    int count = 0;
    int ans[101];

    cin >> loop;

    for (int i = 0; i < loop; i++) {
        cin >> n;
        cin >> c;

        bool seen = false;
        int prev, sc = 0;
        for (int i = 0; i < n; i++) {
            if (seen) {
                if (i - prev == 2) {
                    sc++;
                    seen = false;
                }
                continue;
            }
            if (c[i] == '.') {
                prev = i;
                seen = true;
            }
        }

        ans[i] = sc;
    }

    for (int i = 1; i <= loop; i++) {
        cout << "Case " << i << ": " << ans[i-1] << endl;;
    }

}