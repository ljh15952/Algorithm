#include <iostream>

using namespace std;

class Node;

class List{
	public:
		List(int a){
			element = new Node(a);
		}
		List * next;
		Node * element;
	
		void createNextList(int a){
			next = new List(a);
		}
};

class Node{
	public:
		Node(int v) : value(v) {};
		Node * parent;
		List * chlidren; // 자식의 마지막을 가르키 도록..
	
		int value;	
	
		void createChild(int a){
			if(chlidren){
				// 만약 이미 만들었다면
				chlidren->createNextNode(a);
			}else{
				children = new List(a);
			}
		}
};

int main(){
	
	Node * root = new Node(1);
	
	// 좀 더 고민.. 어쨋든 연결리스트 로 이루오 지면 된다는거 아녀
	return 0;
}
