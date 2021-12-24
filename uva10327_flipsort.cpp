//
// Created by HelloYeew on 12/24/2021.
//

#include <iostream>
using namespace std;

int main() {
    int N;
    int count = 0;
    while (cin >> N) {
        int list[N];
        for (int i = 0; i < N; i++) {
            cin >> list[i];
        }
        for (int i=1; i < N; i++) {
            for (int j = 0; j < i; j++) {
                if (list[i] < list[j]) {
                    count++;
                }
            }
        }

        cout << "Minimum exchange operations : " << count << endl;
        count = 0;
    }
}