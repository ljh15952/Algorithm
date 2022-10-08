#include <iostream>
#include <queue>

using namespace std;

struct Node{
	int data;
	Node * left;
	Node * right;
};

Node * CreateNode(int data){
	Node * newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

Node * InsertNode(Node * root, int data){
	if(root == nullptr){
		root = CreateNode(data);
		return root;
	}
	
	queue<Node*> q;
	q.push(root);
	
	while(!q.empty()){
		Node * temp = q.front();
		q.pop();
		
		if(temp->left != nullptr)
			q.push(temp->left);
		else{
			temp->left = CreateNode(data);
			return root;
		}
		
		if(temp->right != nullptr)
			q.push(temp->right);
		else{
			temp->right = CreateNode(data);
			return root;
		}
	}
}

int main(){
	
	Node * root = new Node(1);
	
	root->left = new Node(2);
	root->right = new Node(3);
	
	root->left->left = new Node(4);
	
	
	
	
	return 0;
}
