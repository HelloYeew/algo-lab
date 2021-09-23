//
// Created by Windows 10 on 9/23/2021.
//
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

typedef double ValueType;
struct ListNode {
    ValueType val;
    ListNode* next;
    ListNode(ValueType v, ListNode* nxt=0)
            : val(v), next(nxt) {}
};

class Stack {
private:
    ListNode* top_node;
public:
    Stack()
            : top_node(0) {}
    ~Stack();

    void push(ValueType v);
    ValueType pop();
    ValueType top() { return top_node->val; }
    bool is_empty() { return top_node == 0; }
};

void Stack::push(ValueType v)
{
    ListNode* new_node = new ListNode(v,top_node);
    top_node = new_node;
}

ValueType Stack::pop()
{
    ValueType v = top_node->val;
    ListNode* old_top = top_node;
    top_node = top_node->next;
    delete old_top;
    return v;
}

Stack::~Stack()
{
    while(top_node != 0) {
        ListNode* tmp = top_node;
        top_node = top_node->next;
        delete tmp;
    }
}

int main()
{
    string buffer;

    Stack operands;

    do {
        cin >> buffer;
        if(buffer.at(0) == '=') {
            break;
        } else if((buffer.at(0) >= '0') && (buffer.at(0) <= '9')) {
            double val = stod(buffer);
            // insert val into the top of the stack
            operands.push(val);
        } else {
            // buffer is an operator.
            double operation1 = operands.pop();
            double operation2 = operands.pop();
            double result = 0;
            if(buffer == "+") {
                result = operation2 + operation1;
            } else if(buffer == "-") {
                result = operation2 - operation1;
            } else if(buffer == "*") {
                result = operation2 * operation1;
            } else if(buffer == "/") {
                result = operation2 / operation1;
            }
            operands.push(result);
        }
    } while(true);
    cout << fixed << setprecision(4) << operands.top() << endl;
}
