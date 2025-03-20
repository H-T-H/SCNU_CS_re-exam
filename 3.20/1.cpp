/*
给定链表节点的定义，实现链表递归合并
*/
struct Node{
    int data;
    Node *next;
};

Node* nodeMerge(Node* a, Node* b){
    if (a == nullptr) return b;
    if (b == nullptr) return a;
    Node* head;
    Node* temp;

    if(a->data >= b->data){
        head = b;
        temp = b;
        b = b->next;
    }
    else{
        head = a;
        temp = a;
        a = a->next;
    }

    while(a!=nullptr&&b!=nullptr){
        if(a->data >= b->data){
            temp->next = b;
            temp = b;
            b = b->next;
        }
        else{
            temp->next = a;
            temp = a;
            a = a->next;
        }
    }
    while(a!=nullptr){
        temp ->next = a;
        temp = a;
        a = a->next;
    }
    while(b!=nullptr){
        temp->next = b;
        temp = b;
        b = b->next;
    }
    return head->next;
}

