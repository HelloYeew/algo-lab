//
// Created by HelloYeew on 12/24/2021.
//

#include <iostream>
using namespace std;

class linked_list_zuma {
public:
    int num, color;
    linked_list_zuma *next;
    explicit linked_list_zuma(int color = 0, linked_list_zuma *next = 0) {
        this->color = color;
        this->next = next;
        this->num = id++;
    }
    static int id;
};

int linked_list_zuma::id = 0;

int main() {

    int n,m;
    cin >> n >> m;
    int ball_color, ball_position;
    auto *worm = new linked_list_zuma();
    linked_list_zuma *head = worm;
    for (int i = 0; i < n; i++) {
        cin >> ball_color;
        head->next = new linked_list_zuma(ball_color);
        head = head->next;
    }

    for (int i = 0; i < m; i++) {
        cin >> ball_color >> ball_position;
        head = worm;
        // while ball color is not in position
        while (head->num != ball_position) {
            head = head->next;
        }
        head->next = new linked_list_zuma(ball_color, head->next);
    }

    while (worm != 0) {
        cout << worm->next->num << endl;
        worm = worm->next;
    }
}