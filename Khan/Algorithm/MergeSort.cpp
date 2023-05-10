#include <iostream>

using namespace std;

int arr[100] = {5,4,3,2,1,0,-1};
int result[100];

void merge(int p, int q, int r){
	
	int i = p;
	int j = q+1;
	int k = p;
	
	while(i <= q && j <= r){
		if(arr[i] < arr[j]){
			result[k++] = arr[i++];
		}else{
			result[k++] = arr[j++];
		}
	}
	
	while(i <= q)
	    result[k++] = arr[i++];
	    
    while(j <= r)
	    result[k++] = arr[j++];
	    
	for(i = p; i <= r; ++i){
	    arr[i] = result[i];
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
	
	
	
	mergeSort(0, 7-1);
	
	for(int i = 0; i < 7; ++i){
		cout << arr[i] << ' ';
	}
	
	cout << endl;
	
	return 0;
}
