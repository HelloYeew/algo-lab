#include <iostream>

using namespace std;

typedef int valueType;

struct ListNode
{
    valueType val;
    ListNode* next;

    ListNode(valueType val, ListNode* next=0)
            : val(val), next(next) {}
};

void print_list(ListNode* node)
{
    while(node != 0) {
        cout << node->val << endl;
        node = node->next;
    }
}

void insert_front(ListNode* header, valueType x)
{
    // takes a pointer to the header node and inserts a new node containing x right after the header.
    ListNode* new_node = new ListNode(x);
    new_node->next = header->next;
    header->next = new_node;
}

int main()
{
    ListNode* header = new ListNode(0);

    while(true) {
        int x;
        cin >> x;

        if(x == 0) {
            break;
        }
        insert_front(header,x);
    }

    print_list(header->next);
}