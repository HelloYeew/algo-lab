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

int main()
{
    ListNode* n1 = new ListNode(10);
    ListNode* n2 = new ListNode(7);
    ListNode* n3 = new ListNode(20);
    ListNode* n4 = new ListNode(32);
    ListNode* n5 = new ListNode(1);

    // Fill in the missing code that assigns next pointers to make a linked list so that the program prints out:
    // 1
    //7
    //10
    //20
    //32

    n5->next = n2;
    n2->next = n1;
    n1->next = n3;
    n3->next = n4;


    ListNode* p = n5;
    while(p!=0) {
        cout << p->val << endl;
        p = p->next;
    }
}