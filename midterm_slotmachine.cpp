//
// Created by Windows 10 on 10/7/2021.
//

#include <iostream>
#include <queue>
using namespace std;

// pop the queue and push the queue
void push_pop(queue<int> &q) {
    int n = q.front();
    q.pop();
    q.push(n);
}

int main() {
    queue<int> row1;
    queue<int> row2;
    queue<int> row3;
    queue<int> row4;
    int n1, n2, n3, n4;
    for (int i = 0; i < 4; i++) {
        cin >> n1 >> n2 >> n3 >> n4;
        row1.push(n1);
        row2.push(n2);
        row3.push(n3);
        row4.push(n4);
    }
    queue<int>* q1 = &row1;
    queue<int>* q2 = &row2;
    queue<int>* q3 = &row3;
    queue<int>* q4 = &row4;

    push_pop(*q1);


    // print stack
    cout << q1->front() << " " << q2->front() << " "
         << q3->front() << " " << q4->front() << endl;
    push_pop(*q1);
    push_pop(*q2);
    push_pop(*q3);
    push_pop(*q4);
    cout << q1->front() << " " << q2->front() << " "
         << q3->front() << " " << q4->front() << endl;
    push_pop(*q1);
    push_pop(*q2);
    push_pop(*q3);
    push_pop(*q4);
    cout << q1->front() << " " << q2->front() << " "
         << q3->front() << " " << q4->front() << endl;
    push_pop(*q1);
    push_pop(*q2);
    push_pop(*q3);
    push_pop(*q4);
    cout << q1->front() << " " << q2->front() << " "
         << q3->front() << " " << q4->front() << endl;
    push_pop(*q1);
    push_pop(*q2);
    push_pop(*q3);
    push_pop(*q4);
}