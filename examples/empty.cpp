#include <iostream>
#include "stack.hpp"

void stack_empty() {
	std::cout << "empty" << std::endl;
	stack<char> arr;
	char arr1[] = "JOKA";
	for(int i = 0; i < strlen(arr1); i++) { arr.push(arr1[i]); }
	while(!arr.empty()) {
		std::cout << arr.pop() << " ";
	}
	std::cout << std::endl;
}

int main() {
	stack_empty();
}
