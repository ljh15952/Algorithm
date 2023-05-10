#include <iostream>

using namespace std;


//int arr[11] = {9, 7, 5, 11, 12, 2, 14, 3, 10, 4, 6};
int arr[5] = {3,2,5,1,4};



void swap(int a, int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

int partition(int p, int r){
	
	int q = p;
	
	for(int j = p; j < r; ++j){
		if(arr[j] <= arr[r]){
			swap(j,q);
			q++;
		}
	}
	
	swap(q,r);
	
	for(auto it : arr){
		cout << it << ' ';
	}
	
	cout << endl;
	
	
	return q;	
}

void quickSort(int p, int r){
	if(p < r){
		int pivot = partition(p,r);
		quickSort(p, pivot-1);
		quickSort(pivot+1, r);
	}
}

int main(){
	
	
	// 0, 11-1
	quickSort(0,4);
	//quickSort(0,11);
	
	for(auto it : arr){
		cout << it << ' ';
	}
	
	cout << endl;
	
	return 0;
}