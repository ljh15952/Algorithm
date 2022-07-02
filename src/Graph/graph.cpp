#include <iostream>
#include <vector>

using namespace std;

bool visited[9]; // 방문 여부를 체크하는 배열
vector<Edge> graph[9];


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
	
	graph[1].push_back(2);
	graph[1].push_back(3);
	graph[1].push_back(8);

	graph[2].push_back(1);
	graph[2].push_back(7);
	
	graph[3].push_back(1);
	graph[3].push_back(4);
	graph[3].push_back(5);

	graph[4].push_back(3);
	graph[4].push_back(5);
	
	graph[5].push_back(3);
	graph[5].push_back(4);
	
	graph[6].push_back(7);

	graph[7].push_back(2);
	graph[7].push_back(6);
	graph[7].push_back(8);
	
	graph[8].push_back(1);
	graph[8].push_back(7);


	dfs(1);
	
	//1 2 3 4 5 7 6 8 9
	cout << "graph" << endl;
	
	return 0;
}