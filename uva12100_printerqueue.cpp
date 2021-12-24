//
// Created by HelloYeew on 12/25/2021.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        vector<int> queue;
        int n, position;
        int minutes = 0;
        cin >> n >> position;
        int placeholder, primary;
        for (int i = 0; i < n; i++) {
            cin >> placeholder;
            if (i == position) primary = placeholder;
            queue.push_back(placeholder);
        }
//        // print queue
//        for (int i = 0; i < n; i++) {
//            cout << queue[i] << " ";
//        }
        while (true) {
            int flags = 1;
            while (flags) {
                flags = 0;
                for (int i = 1; i < queue.size(); i++) {
                    if (queue[i] > queue[0]) {
                        flags = 1;
                        queue.push_back(queue[0]);
                        queue.erase(queue.begin());
                        if (position == 0) position = queue.size();
                        position--;
                        break;
                    }
                }
            }
            minutes++;
            queue.erase(queue.begin());
            if (!position) break;
            position--;
        }
        cout << minutes << endl;
    }

}