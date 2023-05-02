#include <iostream>

using namespace std;


void swap(int arr[],int a, int b){
	int tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
}

int getMinValue(int arr[], int startIdx, int size){
	
	int minIdx = startIdx;
	int minVal = arr[startIdx];
	
	for(int i = startIdx + 1; i < size; ++i){
		if(arr[i] < minVal){
			minIdx = i;
			minVal = arr[i];
		}
	}
	
	return minIdx;
}

int main(){
	
	//int arr[] = {5,4,3,2,1};
	int arr[] = {3,3,4,1,2,6,4,23,5,2,14,1};
	int size = sizeof(arr) / 4;
	for(int i = 0; i < size; ++i){
		int minIdx = getMinValue(arr, i, size);
		if(arr[minIdx] < arr[i]) swap(arr,minIdx, i);
	}
	
	for(auto it : arr){
		cout << it << ' ';
	}
	
	cout << endl;
	
	return 0;
}