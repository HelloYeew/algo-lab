//
// Created by HelloYeew on 12/24/2021.
//

#include <iostream>
#include <vector>
using namespace std;

int find_lowest_jar(int bucket[]) {
    int lowest = 1000;
    int num = 0;
    for(int number=0; number <= 4; number++){
        if (bucket[number] < lowest) {
            lowest = bucket[number];
            num = number;
        }
    }
    return num;
}

int bucket[5];
int main() {
    int N = 0;
    int tank = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int water;

        cin >> water;

        int lowest = find_lowest_jar(bucket);

        bucket[lowest] += water;

        if (bucket[lowest] >= 1000) {
            tank += 1000;
            bucket[lowest] = 0;
        }

    }
    cout << tank << endl;
}