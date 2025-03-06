#include<iostream>
#include<queue>

using namespace std;

typedef struct node {
	int data;
	node* left;
	node* right;
}Node;

Node* createNode(int data) {
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

//中序遍历
void inOrder(Node* root) {
	if (root == NULL) {
		return;
	}
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}
//先序遍历
void preOrder(Node* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data <<" ";
	preOrder(root->left);
	preOrder(root->right);
}
//后序遍历
void postOrder(Node* root) {
	if (root == NULL) {
		return;
	}
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}
//层序遍历
void levelOrder(Node* root){
	queue<Node*> assist_queue;
	assist_queue.push(root);
	Node* temp;
	while(!assist_queue.empty()){
		temp = assist_queue.front();
		cout<<temp->data<<" ";
		assist_queue.pop();
		if(temp->left != nullptr)	assist_queue.push(temp->left);
		if(temp->right != nullptr)	assist_queue.push(temp->right);
	}
}
//求深度
int max(int a,int b){
	if(a>b)	return a;
	return b;
}
int get_deep(Node* root){

	if (root == nullptr)	return 0;
	return max(get_deep(root->left),get_deep(root->right)) + 1;
}

int main() {
	Node* root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->right->left = createNode(6);
	root->right->right = createNode(7);
	root->right->right->right = createNode(8);
	cout << "\nInorder Traversal: " << endl;
	inOrder(root);
	cout << "\npreOrder traversal:" << endl;
	preOrder(root);
	cout << "\npostOrder traversal:" << endl;
	postOrder(root);
	cout <<"\nlevelOrder traversal:" << endl;
	levelOrder(root);
	cout <<"\ndeep:"<<get_deep(root) << endl;
}