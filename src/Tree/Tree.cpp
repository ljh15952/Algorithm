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
	
	cout << "TREE?" << endl;
	
	return 0;
}