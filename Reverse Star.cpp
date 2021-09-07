//
// Created by Phawit Pornwattanakul on 1/9/2021 AD.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int front = n-1;
    int back = 1;
    while(true) {
        string stuff(front, ' ');
        string stuff2(back, '*');
        cout << stuff << stuff2 << endl;
        if (front == 0) {
            break;
        }
        front--;
        back++;
    }
}
