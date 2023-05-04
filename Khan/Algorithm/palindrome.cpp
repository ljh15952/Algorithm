#include <iostream>
#include <string>

using namespace std;

char getFirstChar(string str){
	return str[0];
}

char getLastChar(string str){
	return str[str.length()-1];
}

string getMiddleString(string str){
	return str.substr(1,str.length()-2);
}

bool isPalindrome(string str){
	if(str.length() <= 0) return true;
	if(getFirstChar(str) != getLastChar(str)) return false;
	
	return isPalindrome(getMiddleString(str));
}

int main(){
	
	cout << isPalindrome("abcde") << endl;	
	cout << isPalindrome("abba") << endl;	
	cout << isPalindrome("") << endl;	
	cout << isPalindrome(" ") << endl;	
	cout << isPalindrome("abcccba") << endl;	
	
	
	return 0;
}