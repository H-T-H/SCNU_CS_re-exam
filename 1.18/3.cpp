/*
3. 链表逆置（考察：链表操作）

给定一个单链表的头节点，编写一个函数 reverseList，实现将该链表逆置的操作。

*/
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* curr = head;
    ListNode* prev = nullptr;
    ListNode* next = nullptr;
    while(curr!=nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head = reverseList(head);
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
}
