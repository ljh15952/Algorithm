#include <iostream>
#include <vector>

using namespace std;

bool visited[101]; // 방문 여부를 체크하는 배열

class Edge{
	public:
		Edge(int s,int e) : snode(s), enode(e) {};
		int snode;
		int enode;
};

// void dfs(int k){
// 	for(int i = 0; i < G[i].size(); ++i){
// 		if(!visited[G[K][i].to]){
// 			visited[G[k][i].to] = true;
// 			dfs(G[k][i]);
// 		}
// 	}
// 	return;
// }

int main(){
	
	Edge e1(1,2);
	Edge e2(2,3);
	Edge e3(3,4);
	Edge e4(3,7);
	Edge e5(3,5);
	Edge e6(2,6);
	Edge e7(6,8);
	Edge e8(1,8);
	Edge e9(1,9);

	//1 2 3 4 5 7 6 8 9
	cout << "graph" << endl;
	
	return 0;
}