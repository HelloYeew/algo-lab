#include <iostream>
#include <string>
using namespace std;

int main() {
    int k, n, m, x, y;
    cin >> k;
    string printarray[10000];
    int printindex = 0;
    while (k != 0) {
        cin >> n >> m;

        while (k--) {
            cin >> x >> y;
            if (n == x || m == y) {
                printarray[printindex] = "divisa";
                printindex++;
            } else if (n < x && y > m) {
                printarray[printindex] = "NE";
                printindex++;
            } else if (n > x && y > m) {
                printarray[printindex] = "NO";
                printindex++;
            } else if (n > x && y < m) {
                printarray[printindex] = "SO";
                printindex++;
            } else if (n < x && y < m) {
                printarray[printindex] = "SE";
                printindex++;
            }
        }
        cin >> k;
    }
    for (int i = 0; i < printindex; i++) {
        cout << printarray[i] << endl;
    }
}