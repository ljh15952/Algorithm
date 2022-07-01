#include <iostream>

using namespace std;

bool visited[101]; // 방문 여부를 체크하는 배열

void dfs(int k){
	for(int i = 0; i < G[i].size(); ++i){
		if(!visited[G[K][i].to]){
			visited[G[k][i].to] = true;
			dfs(G[k][i]);
		}
	}
	return;
}

int main(){
	
	cout << "graph" << endl;
	
	return 0;
}