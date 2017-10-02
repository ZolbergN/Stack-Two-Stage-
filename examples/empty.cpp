#include <iostream>
#include "stack.hpp"

using namespace std;

void stack_empty() {
	cout << "empty" << endl;
	Stack<char> arr;
	char arr1[] = "JOKA";
	for(int i = 0; i < strlen(arr1); i++) { arr.push(arr1[i]); }
	while(!arr.empty()) {
		cout << arr.pop() << " ";
	}
	cout < endl;
}

int main() {
	stack_empty();
}
