//
// Created by Phawit Pornwattanakul on 1/9/2021 AD.
//

#include <iostream>
using namespace std;

int main()
{
    int age;

    cin >> age;

    if(age >= 18) {
        cout << "You cannot vote.\n";
    } else {
        cout << "You can vote.  Exercise your right!\n";
    }
}