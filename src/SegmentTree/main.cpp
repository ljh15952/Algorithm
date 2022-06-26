#include <iostream>

using namespace std;

int input[8];
int seg[16]; //0번지 사용 x

//세그먼트 트리 만드는 함수 
int init(int node,int s,int e){
	if(s == e){
		return seg[node] = input[s];
	}
	int mid = (s + e) / 2;
	return seg[node] = min(init(2 * node, s, mid),init(2 * node + 1, mid + 1, e));
}

int main(){
	
	for(int i = 0; i < 8; ++i){
		cin >> input[i];
	}
	
	init(1,0,7);
	
	for(int i = 1; i < 16; ++i){
		cout << "seg[" << i << "] : " << seg[i] << endl; 
	}
	
	return 0;
}




/*
세그먼트 트리
정렬되어 있지 않은 구간 내의 합이나 최솟값들을 빠르게 찾아야 하는 경우 
O(logN)의 시간 복잡도로 답을 빠르게 찾을 수 있다.

트리의 맨 하단에는 input들이 들어감
각각의 트리들은 자식의 노드들의 최솟값을 담고 있으며 세
그먼트 트리의 최상단인 seg[1]은 전 구간에서 최솟값을 담고 있다.

init()함수
부모의 노드 node라고 할 때 왼쪽의 자식 노드의 번호는 2 * node 오른쪽은 2 * node + 1
*/
