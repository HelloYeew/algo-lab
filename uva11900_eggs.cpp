#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int T;
    int cases = 1;
    cin >> T;
    int n,P,Q;
    
    while (T--) {
        cin >> n >> P >> Q;
        vector<int> egg(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> egg[i];
        }

        // sort the egg first
        sort(egg.begin(), egg.end());

        int answer = min(P,n);
        for (int i = 1; i <= min(P,n); i++) {
            // sum
            int sum_of_eggs;
            sum_of_eggs = accumulate(egg.begin()+1, egg.begin()+1+i, 0); // Just know this from stackoverflow lol
            if (sum_of_eggs > Q) {
                answer = i-1;
                break;
            }
        }

        cout << "Case " << cases++ << ": " << answer << endl;

    }
}