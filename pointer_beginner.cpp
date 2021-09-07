#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *q;

    q = &x; // Q is location of x (& is the address operator)
    *q = 20; // Change value that q point to 20 (It's x)

    cout << x << endl; // 20
    
    int *p;
    p = (int*)malloc(sizeof(int)); // Allocate memory for p
    *p = 30;

}