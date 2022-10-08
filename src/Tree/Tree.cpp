#include <iostream>
#include <vector>

using namespace std;

class Node{
	public:
		Node(int v) : value(v) {};
		Node * parent;
		vector<Node*> children;
	
		int value;	
	
		void addChild(Node * n){
			children.push_back(n);
		}
};

int main(){
	
	Node * one = new Node(1);
	
	Node * two = new Node(2);
	two->parent = one;
	
	one->addChild(two);
	
	return 0;
}
