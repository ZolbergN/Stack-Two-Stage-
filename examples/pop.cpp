#include <iostream>
#include "stack.hpp"

using namespace std;

void stack_pop() {
	Stack<int> st;
	for(int i = 0; i < 10; i++) { 
		st.push(i); 
	}
	for(int j = 0; j < 3; j++) {
		cout << st.pop() << " "; 
	}
}

int main() {
	stack_pop();
}
