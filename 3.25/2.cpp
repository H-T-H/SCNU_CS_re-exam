#include<iostream>
using namespace std;
struct treeNode{
    int val;
    treeNode* left;
    treeNode* right;
    treeNode(int value):val(value),left(nullptr),right(nullptr){}
};

int max(int a, int b){
    if(a<b) return a;
    return b;
}


int shortest(treeNode* root){
    if(root->left == nullptr && root->right == nullptr){
        return root->val;
    }
    else if(root->left == nullptr && root->right != nullptr){
        return root->val + shortest(root->right);
    }
    else if(root->right == nullptr && root->left != nullptr){
        return root->val + shortest(root->left);
    }
    return max(shortest(root->left) + root->val, shortest(root->right) + root->val);
}

int main(){
    treeNode* root = new treeNode(1);
    root->left = new treeNode(2);
    root->right = new treeNode(3);
    root->left->left = new treeNode(7);
    root->left->right = new treeNode(9);
    root->right->left = new treeNode(5);
    root->right->right = new treeNode(6);
    cout<<shortest(root);
}