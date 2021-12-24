//
// Created by HelloYeew on 12/24/2021.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N,K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        A[i] = i+1;
    }

    int i = 0;
    while (A.size() > 1) {
        i = ((i + K) - 1) % A.size();
        A.erase(A.begin()+i);
    }

    cout << A[0] << endl;
}