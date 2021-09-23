//
// Created by Windows 10 on 9/22/2021.
//

int main() {
    int a, b;
    cin >> a >> b;
    // summation from a to b
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    cout << sum << endl;
}