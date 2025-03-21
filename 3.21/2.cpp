/*
排序链表
描述：
给定一个无序的单链表，编写一个函数将其排序，要求时间复杂度为 O(n log n)，并尽可能地在原链表上进行排序。
提示：归并排序
*/
#include<iostream>

struct Node{
    Node* next;
    int val;
    Node(int value):val(value),next(nullptr){};
};

Node* merge(Node* head1,Node* head2){
    Node dummy(0);
    Node* tail = &dummy;
    while(head1!=nullptr && head2!=nullptr){
        if(head1->val < head2->val){
            tail->next = head1;
            head1 = head1->next;
            tail = tail->next;
        }
        else{
            tail->next = head2;
            head2 = head2->next;
            tail = tail->next;
        }
    }
    if(head1){
        tail->next = head1;
    }
    if(head2){
        tail->next = head2;
    }
    return dummy.next;
}

Node* sortList(Node* head){
    if (!head || !head->next) {
        return head;
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast !=nullptr&&fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* mid = slow->next;
    slow->next = nullptr;
    Node* left = sortList(head);
    Node* right = sortList(mid);
    return merge(left, right);
}
// 辅助函数：打印链表
void printList(Node* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // 创建测试链表：4 -> 2 -> 1 -> 3
    Node* head = new Node(4);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(3);

    Node* sorted_head = sortList(head);
    printList(sorted_head); // 输出：1 2 3 4

    // 释放内存 (在实际应用中很重要)
    while (sorted_head) {
        Node* temp = sorted_head;
        sorted_head = sorted_head->next;
        delete temp;
    }


    return 0;
}