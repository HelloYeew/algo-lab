#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

queue<int> graphqueue;

int main() {
    int n;
    cin >> n;

    int k[100010];
    int y[100010];
    vector<int> graph;
    for (int i = 0; i < n; i++) {
        cin >> k[i] >> y[i];
    }
    for (int i = 0; i < n; i++) {
        if (k[i] == 1) {
            graph.emplace_back(y[i]);
        } else {
            if (find(graph.begin(), graph.end(), y[i]) != graph.end()) {
                cout << "1" << endl;
            } else {
                cout << "0" << endl;
            }
        }
    }
}