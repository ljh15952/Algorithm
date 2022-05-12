#include <iostream>

using namespace std;

int main(){
	
	cout << "이분 탐색" << endl;
	
	//오름차순으로 정렬되어 있는 상태
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int s,e;
	s = 0; //start
	e = 9; //end
	
	int m;
	int k = 8; //탐색할 값
	while(e-s >= 0){
		m = (s+e) / 2; //값이 있을 가능성이 있는 값의 가운데 값
		if(arr[m] == k)
			cout << m << "번지에 " << k << "가 있습니다." << endl;
		if(arr[m] < k)
			s = m+1; //만약 arr[m]이 작으면 좀 더 큰 값이 있는 오른쪽이 탐색되도록 변경
		else 
			e = m - 1; // 아까와 반대
	}
	
	return 0;
}