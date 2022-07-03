#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> graph[9];
bool visited[9];

void bfs(int k){
	queue<int> q;
	q.push(k); //첫 노드 queue에 삽입
	visited[k] = true;
	
	//큐가 빌 때까지 반복
	while(!q.empty()){
		//큐에서 하나의 원소를 뽑아 출력
		int x = q.front();
		q.pop();
		cout << x << ' ';
		
		for(int i = 0; i < graph[x].size(); ++i){
			int now = graph[x][i];
			if(visited[now] == false){
				q.push(now);
				visited[now] = true;				
			}
		}
		
	}
}

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
	
	bfs(1);
	
	return 0;
}