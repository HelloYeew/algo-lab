//
// Created by HelloYeew on 12/25/2021.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N,K;
    cin >> N >> K;
    int ball[N];
    int first,second;
    for(int i=0;i<N;i++) {
        cin >> first >> second;
        ball[i] = first-second;
    }
    // size of array / size of first element
    cout << "size" << sizeof(ball) << endl;
    int size = sizeof(ball)/sizeof(ball[0]);
    sort(ball,ball+size);
    int sum = 0;
    for(int i=0;i<N;i++) {
        if (ball[i] < 0 && i < K) {
            continue;
        } else {
            sum += ball[i];
        }
    }
    cout << sum << endl;
}