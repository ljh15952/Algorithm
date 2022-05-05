#include <iostream>
#include <string>

using namespace std;

class Stack{
	public:
		Stack(int size){
			arr = new char[size];
			_size = size;
			_length = 0;
		}
		
		bool push(char c){
			if(_length >= _size){
				cout << "스택이 다 찼습니다." << c << " 는 버려졌습니다." << endl;
				return false;
			}else{
				arr[_length++] = c;
				return true;
			}
		}
	
		char pop(){
			if(_length <= 0){
				cout << "반환할 자료 없음" << endl;
				return 'N';
			}
			
			return arr[--_length];
		}
	
	private:
		char *arr;
		int _size;
		int _length;
};

int main(){
	//스택으로 구현한 문자열 뒤집는 함수 (초간단)
	Stack stack(5);
	stack.push('A');
	stack.push('P');
	stack.push('P');
	stack.push('L');
	stack.push('E');
	stack.push('!');
	
	for(int i = 0; i < 6; ++i){
		cout << stack.pop();
	}
	
	return 0;
}