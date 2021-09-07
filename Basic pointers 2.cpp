//
// Created by Phawit Pornwattanakul on 26/8/2021 AD.
//

#include <iostream>
using namespace std;

void dosomething(int* a,int b,int* c)
{
    *a += 10;

    b += 100;

    *c += 1000;
}

int main()
{
    int x = 1;
    int y = 2;
    int z = 3;

    dosomething(&x,y,&z);

    cout << x << " " << y << " " << z << endl;
}