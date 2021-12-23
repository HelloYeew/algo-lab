#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int current = 0;
    int count = 0;
    list<int> l;
    for (int i = 0; i < n; i++) {
        if (arr[i] == current) {
            count++;
        }
        if (arr[i] != current) {
            if (count >= 3) {
                l.push_back(current);
            }
            current = arr[i];
            count = 1;
        }
    }
    if (count >= 3) {
        l.push_back(current);
    }
    cout << l.size() << endl;
}