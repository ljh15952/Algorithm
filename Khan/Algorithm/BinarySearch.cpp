#include <iostream>

using namespace std;

int main(){
	
	int arr[] = {2, 3, 5, 7, 11, 13, 
				  17, 19, 23, 29, 31, 37, 
				  41, 43, 47, 53, 59, 61, 
				  67, 71, 73, 79, 83, 89, 97};
	
	int min = 0;
	int max = 24;
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