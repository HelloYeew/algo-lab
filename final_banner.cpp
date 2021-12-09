#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int max_size = 100000;

int n;
int s[max_size];
int o;


int main() {
    vector<pair<int,int>> pole;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        pole.push_back(make_pair(s[i], i));
    }

    sort(pole.begin(), pole.end());

    int count = 0;
    int dup = 0;
    int f=-1;
    for (int i=0; i<n; i++) {
        int banner = pole[i].first;
        int banner2 = pole[i-1].first;
        if (i != 0 && banner == banner2) {
            if (f < abs(pole[i].second - pole[i-1].second)) {
                f = abs(pole[i].second - pole[i-1].second);
            }
        }
    }

    cout << f << endl;

}
