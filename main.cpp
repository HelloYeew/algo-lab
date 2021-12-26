//
// Created by HelloYeew on 12/24/2021.
//

#include <iostream>
using namespace std;

int bucket[5];
int main() {
    int N = 0;
    int tank = 0;
    int lowest_jar, lowest, num;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int water;

        cin >> water;

        lowest = 1000;
        num = 0;

        for(int j=0; j <= 4; j++){
            if (bucket[j] < lowest) {
                lowest = bucket[j];
                num = j;
            }
        }
        lowest_jar = num;

        bucket[lowest_jar] += water;

        if (bucket[lowest_jar] >= 1000) {
            tank += 1000;
            bucket[lowest_jar] = 0;
        }

    }
    cout << tank << endl;
}