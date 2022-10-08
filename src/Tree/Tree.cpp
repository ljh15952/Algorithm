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
	
	return root;
}

void preorder(struct Node* node){
	if(node == NULL)
		return;
	cout << node->data << " ->";
	preorder(node->left);
	preorder(node->right);
}

void inorder(struct Node* node){
	if(node == NULL)
		return;
	preorder(node->left);
	cout << node->data << " ->";
	preorder(node->right);
}

void postorder(struct Node* node){
	if(node == NULL)
		return;
	preorder(node->left);
	preorder(node->right);
	cout << node->data << " ->";
}
int main(){
	
	Node * root = CreateNode(1);
	
	root = InsertNode(root, 2);
	root = InsertNode(root, 3);
	root = InsertNode(root, 4);
	
	preorder(root);
	cout << endl;
	
	return 0;
}

/*
PreOrder : root - left child - right child
InOrder : left child - root - right child
PostOrder : left child - right child - root

	 1 //Root Node
    / \
   2    3
  / \  / \
 4  5  6  7 //Leaf Nodes

PreOrder Traversal: 1 2 4 5 3 6 7
InOrder Traversal: 4 2 5 1 6 3 7
PostOrder Traversal: 4 5 2 6 7 3 1
*/