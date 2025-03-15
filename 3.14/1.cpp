//翻转链表
#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node(int val): val(val){
        next = nullptr;
    }
};

Node* reverse_list(Node* head){
    Node* curr = head;
    Node* prev = nullptr;
    Node* next = curr->next;
    while(curr != nullptr){
        curr -> next = prev;
        prev = curr;
        curr = next;
        if(curr != nullptr){
            next = curr->next;
        }

    }
    return prev;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    Node* reversed_head = reverse_list(head);
    while(reversed_head != nullptr){
        cout<<reversed_head->val<<" ";
        reversed_head = reversed_head->next;
    }
}