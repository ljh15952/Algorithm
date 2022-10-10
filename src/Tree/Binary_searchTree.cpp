#include <iostream>

using namespace std;

//이진 탐색 트리에서 중요한 것은 검색, 삽입, 삭제 이다.

class Node{
	public:
		Node(int v){
			value = v;
			left = nullptr;
			right = nullptr;
		}
		int value;
		Node * left;
		Node * right;
};

class BST{
	//Binart Search Tree
	public:
		Node * root;
	
		void setRoot(Node * n){
			root = n;
		}
	
		bool findNode(Node * curNode,int v){
			if(curNode == nullptr)
				return false;
			else if(v == curNode->value)
				return true;
			else if(v < curNode->value)
				findNode(curNode->left, v);
			else if(v > curNode->value)
				findNode(curNode->right, v);
		}
	
		void insertNode(Node * curNode, int v){
			if(v <= curNode->value){
				if(curNode->left != nullptr)
					insertNode(curNode->left, v);
				else
					curNode->left = new Node(v);
			}else if(v > curNode->value){
				if(curNode->right != nullptr)
					insertNode(curNode->right, v);
				else
					curNode->right = new Node(v);
			}
		}
		
		//삭제는 조금 어려우니 다음번에 할게요
	
		void traverse(Node * curNode){
			if(curNode == nullptr)
				return;
			traverse(curNode->left);
			cout << curNode->value << "-> ";
			traverse(curNode->right);
		}
};

int main(){
	
	BST * tree = new BST();
	//루트 선정을 잘 해야 함
	tree->setRoot(new Node(7));
	
	
	tree->insertNode(tree->root, 3);
	tree->insertNode(tree->root, 1);
	tree->insertNode(tree->root, 5);
	tree->insertNode(tree->root, 8);
	tree->insertNode(tree->root, 10);
	
	tree->traverse(tree->root);
	cout << endl;
	
	cout << tree->findNode(tree->root, 5) << endl;
	
	return 0;
}