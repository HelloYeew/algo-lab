#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    char action[16], query[16];
    stack<string> dream;
    for (int i = 0; i < n; i++) {
        cin >> action;
        if (action[0] == 'S') {
            // Sleep action
            cin >> query;
            dream.push(query);
        } else if (action[0] == 'K') {
            // Kick action
            // If dream is not empty, kick
            if (!dream.empty()) {
                dream.pop();
            }
        } else if (action[0] == 'T') {
            // Test action
            // if dream is empty, not in a dream
            if (dream.empty()) {
                cout << "Not in a dream" << endl;
            } else {
                cout << dream.top() << endl;
            }
        }
    }
}