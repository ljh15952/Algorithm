#include <iostream>

using namespace std;

struct Node;

struct List{
	struct List *next;
	struct Node *element;
};

struct Node{
	struct Node * Parent;
	struct List * Chlidren;
};

int main(){
	
	Node * root;
	
	
	return 0;
}
// next study
//https://velog.io/@kon6443/Data-Structure-%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0-C-%ED%8A%B8%EB%A6%AC