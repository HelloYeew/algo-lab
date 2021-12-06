#include <iostream>
#include <cstdlib>

using namespace std;

typedef int valueType;

struct ListNode
{
    valueType val;
    ListNode* next;

    ListNode(valueType val, ListNode* next=0)
            : val(val), next(next) {}
};

void insert_front(ListNode* header, valueType x)
{
    // takes a pointer to the header node and inserts a new node containing x right after the header.
    ListNode* new_node = new ListNode(x);
    new_node->next = header->next;
    header->next = new_node;
}

void free_list(ListNode*& header)
{
    // takes the header of a list and free every node in the list (including the header)
    ListNode* curr = header;
    while (curr != 0) {
        ListNode* next = curr->next;
        delete curr;
        curr = next;
    }
    header = 0;
}

int main()
{
    ListNode* first_header = 0;
    for(int i=0; i<5; i++) {
        ListNode* header = new ListNode(0);
        if(!first_header) {
            first_header = header;
        }
        for(int j=0; j<100000; j++) {
            insert_front(header, j);
        }
        free_list(header);
    }
    ListNode* new_header = new ListNode(0);
    new_header = new ListNode(0);
    new_header = new ListNode(0);
    int dist = abs(new_header - first_header);
    if(dist < 100) {
        cout << "ok" << endl;
    } else {
        cout << "not ok" << endl;
    }
}