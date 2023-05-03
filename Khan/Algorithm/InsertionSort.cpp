#include <iostream>

using namespace std;


void insert(int arr[],int rightIdx, int value){
	int i;
	for(i = rightIdx; i >= 0 && arr[i] > value; --i){
		arr[i + 1] = arr[i];
	}
	arr[i+1] = value;
}

int main(){
	
	int arr[6] = {5,4,3,-1,0,1};
	
	for(int i = 0; i < sizeof(arr)/sizeof(int) - 1; ++i){
		insert(arr, i, arr[i+1]);
	}
	
	for(auto it : arr){
		cout << it << ' ';
	}
	cout << endl;
	
	return 0;
}