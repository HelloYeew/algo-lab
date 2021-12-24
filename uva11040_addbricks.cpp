//
// Created by HelloYeew on 12/25/2021.
//

#include <iostream>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    int i,j;
    while (testcase--) {
        int wall[10][10] = {};
        // insert block to array
        for (i = 0; i < 9; i+=2) {
            for (j = 0; j <= i; j+=2) {
                cin >> wall[i][j];
            }
        }
        int blocknow, blocknext, blockbefore;
        for (i = 8; i > 0; i-=2) {
            for (j = 0; j < i; j+=2) {
                blocknow = wall[i][j];
                blockbefore = wall[i][j+2];
                blocknext = wall[i-2][j];
                wall[i][j+1] = (blocknext - blocknow - blockbefore) / 2;
                wall[i-1][j] = wall[i][j] + wall[i][j+1];
                wall[i-1][j+1] = wall[i][j+1] + wall[i][j+2];
            }
        }
        for (i = 0; i < 9; i++, puts("")) {
            for (j = 0; j <= i; j++) {
                if (j) {
                    putchar(' ');
                }
                cout << wall[i][j];
            }
        }
    }
}