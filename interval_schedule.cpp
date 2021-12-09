#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int max_size = 100000;

int n;
int s[max_size];
int t[max_size];

int main() {
    vector<pair<int,int>> ftime;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> t[i];
        ftime.emplace_back(t[i], i);
    }

    sort(ftime.begin(), ftime.end());

    int count = 0;
    int f = -1; // latest finish time
    for (int i=0; i<n; i++) {
        int j = ftime[i].second; // consider job j

        if (s[j] >= f) {
            count++;
            f = t[j];
        }
    }

    cout << count << endl;
}