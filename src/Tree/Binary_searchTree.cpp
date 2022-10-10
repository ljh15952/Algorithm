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
};

int main(){
	
	
	
	return 0;
}