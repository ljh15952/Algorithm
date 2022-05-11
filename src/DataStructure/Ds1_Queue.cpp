#include <iostream>

using namespace std;

//연결 리스트로 구현 한 큐 자료구조

class Node{
	public:
		Node(int i) : data(i){};
		int data;
		Node * next;
};

class Queue{
	public:
		void Enqueue(int i){
			Node *n = new Node(i);
			if(front == nullptr){
				front = n;
				back = front;
			}else{
				back->next = n;
				back = back->next;
			}
		}
		int Dequeue(){
			int res = front->data;
			front = front->next;
			return res;
		}
		
		Node *front = nullptr;
		Node *back = nullptr;
};

int main(){
	
	cout << "queue study" << endl;
	
	Queue *queue = new Queue();
	queue->Enqueue(1);
	queue->Enqueue(2);
	queue->Enqueue(3);
	queue->Enqueue(4);
	queue->Enqueue(5);

	for(int i = 0; i < 5; ++i){
		cout << queue->Dequeue() << endl;
	}
	
	
	return 0;
}