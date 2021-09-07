//
// Created by Phawit Pornwattanakul on 26/8/2021 AD.
//

#include <iostream>
using namespace std;

int count_char(char* st, char c)
{
    char* string = st;
    int count = 0;

    while (true) {
        if (*string == c) {
            ++count;
        }
        if (*string == '\0') {
            break;
        }
        ++string;
    }
    return count;
}

int main()
{
    char st[1000];

    cin.getline(st,1000);

    cout << "space: " << count_char(st,' ') << endl;
    cout << "dot: " << count_char(st,'.') << endl;
    cout << "semi: " << count_char(st,';') << endl;
}