#include <iostream>

using namespace std;

/*
길이가 n인 배열에 최대 m번 만큼의 탐색이 필요
2n인 배열에서는 m + 1의 탐색
2n인 배열에서 첫번째 탐색을 하면 절반이 되므로 n

n으로 시작해 1에 이르기 까지 반복적으로 
반으로 나누는 함수를 로그
lgn

*/

int main(){
	
	int arr[] = {2, 3, 5, 7, 11, 13, 
				  17, 19, 23, 29, 31, 37, 
				  41, 43, 47, 53, 59, 61, 
				  67, 71, 73, 79, 83, 89, 97};
	
	int min = 0;
	int max = 24; // n-1
	int mid = 0;
	
	int goal = 67;
	
	while(min <= max){
		mid = (min + max) / 2;

		if(arr[mid] == goal){
			break;
		}else if(arr[mid] < goal){
			min = mid + 1;
		}else{
			max = mid - 1;
		}
		
	}
	
	cout << mid << endl;
	
	return 0;
}