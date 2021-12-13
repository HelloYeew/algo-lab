#include <iostream>
#include <queue>

using namespace std;

queue<int> graphqueue;

int main() {
    int n;
    cin >> n;

    int k,y;
    for (int i = 0; i < n; i++) {
        cin >> k >> y;
        if (k == 1) {
            graphqueue.push(y);
        } else {
            // search for y in graphqueue if found print 1 else print 0
            queue<int> newgraph;
            newgraph = graphqueue;
            int flag = 0;
            while (!newgraph.empty()) {
                if (newgraph.front() == y) {
                    flag = 1;
                    break;
                }
                newgraph.pop();
            }
            if (flag == 1) {
                cout << "1" << endl;
            } else {
                cout << "0" << endl;
            }
        }
    }
}