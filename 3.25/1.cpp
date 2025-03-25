#include<iostream>
using namespace std;
struct listNode{
    int val;
    listNode* next;
    listNode(int value):val(value),next(nullptr){};
};

listNode* listReverse(listNode* head){
    listNode* prev = nullptr;
    listNode* curr = head;
    listNode* next = curr->next;
    while(curr!=nullptr){
        curr->next = prev;
        prev = curr;
        curr = next;
        if(curr!=nullptr){
            next = curr->next;
        }
    }
    return prev;
}
int main(){
    listNode* head = new listNode(1);
    head->next = new listNode(2);
    head->next->next = new listNode(3);
    head->next->next->next = new listNode(4);
    head->next->next->next->next = new listNode(5);
    head->next->next->next->next->next = new listNode(6);
    head->next->next->next->next->next->next = new listNode(7);
    listNode* reversed_head = listReverse(head);
    while(reversed_head != nullptr){
        cout<<reversed_head->val<<" ";
        reversed_head = reversed_head->next;
    }
}