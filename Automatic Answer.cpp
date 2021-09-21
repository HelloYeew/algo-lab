#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    int arr[100000];
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < t; i++) {
        int m = arr[i];
        m = (((((((m*567)/9)+7492)*235)/47)-498)/10)%10;
        m = abs(m);
        cout << m << endl;
    }
}