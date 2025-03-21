#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int value) : val(value), next(nullptr) {}
};

Node* reverse(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    while (curr != nullptr) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void relist(Node* head) {
    if (head == nullptr || head->next == nullptr) return;
    
    // 用快慢指针找到中点
    Node* slow = head;
    Node* fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // slow 指向中点，将后半段分离
    Node* mid = slow->next;
    slow->next = nullptr;
    
    // 反转后半段链表
    mid = reverse(mid);
    
    // 合并两段链表
    Node* p1 = head;
    Node* p2 = mid;
    while (p2 != nullptr) {
        Node* temp1 = p1->next;
        Node* temp2 = p2->next;
        p1->next = p2;
        p2->next = temp1;
        p1 = temp1;
        p2 = temp2;
    }
}

int main() {
    // 构造链表：1->2->3->4->5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // 输出原链表
    cout << "Original list: ";
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;

    // 重排链表
    relist(head);

    // 输出重排后的链表
    cout << "Reordered list: ";
    curr = head;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;

    // 释放内存（简单示例，建议使用更健全的内存管理）
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}