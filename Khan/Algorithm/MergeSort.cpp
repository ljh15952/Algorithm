#include <iostream>
#include <array>

using namespace std;

int arr[100];
int result[100];

void merge(int p, int q, int r){
	
	int i = 0;
	int j = 0;
	int k = p;
	
	while(i <= q && j <= r){
		if(arr[i++] < arr[j++]){
			result[k] = arr[i];
		}else{
			result[k++] = arr[j++];
		}
	}
}

void mergeSort(int p, int r){
	if(p < r){
		int q = (p+r) / 2;
		mergeSort(p, q);
		mergeSort(q + 1, r);
		merge(p, q, r);
	}
}

int main(){
	
	arr = {5,4,3,2,1,0,-1};
	
	mergeSort(0, 7-1);
	
	for(int i = 0; i < 7; ++i){
		cout << result[i] << ' ';
	}
	
	cout << endl;
	
	return 0;
}