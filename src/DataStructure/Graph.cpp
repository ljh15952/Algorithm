#include <iostream>
#include <vector>
using namespace std;

class Edge{ //정점보다는 간선으로 나타내는 편이 대부분의 경우 더 좋다.
	public:
		int snode; //시작 정점
		int enode; //종료 정점
		int cost; //가중치를 가지는 간선에 사용된다.
}

int main(){
	
	/*
	위의 Edge클래스가 하나 이상 있는 것이 그래프이다.
	그래프를 구현하는 다른 방법으로
	인접 행렬로 구현하는 방법과 인접 리스트로 구현하는 방법이 있다.
	
	다음은 데이터를 받아서 저장하는 가중치 그래프라고 가정하자.
	이 경우는 인접 행렬로 구성하는 방법이다.
	*/
	
	int m,g[101][101]; //정점은 최대 100개
	
	cin >> m; //간선의 개수
	
	for(int i = 0; i < m; ++i){
		int a,b,w; //a와 b는 간선이 연결된 곳, w는 가중치
		cin >> a >> b >> w;
		g[a][b] = g[b][a] = w;
	}
	
	//다음은 인접 리스트로 구현하는 방법이다.
	
	vector<int> g[101];
	g[i].push_back(x); //i와 x는 연결된 그래프이다.
	
	/*
	탐색 시간은 인접 리스트 방식의 구현이 더 짧다.
	v가 정접이고 e가 간선이라고 가정한다.
	인접 행렬 : O(v*e)
	인접 리스트 : O(v+e)
	*/
	
	/*
	그래프 관련 용어
	next time
	
	
	*/
		
	
	return 0;
}