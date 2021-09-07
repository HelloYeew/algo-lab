//
// Created by Phawit Pornwattanakul on 26/8/2021 AD.
//

#include <iostream>
using namespace std;


int main()
{
    int a[5] = {1,2,3,4,5};

    int* p = a;

    cout << *p << endl;
    cout << *(p+3) << endl;

    p += 3;

    cout << *p << endl;
    cout << *(p-1) << endl;

    int* q = &a[5];

    cout << q - p << endl;
}