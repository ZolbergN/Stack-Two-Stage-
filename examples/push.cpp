#include <iostream>
#include "stack.hpp"

using namespace std;

void stack_push() {
	stack<int> st;
	for(int i = 0; i < 10; i++) {
		st.push(i*2); 
	}
}

int main() {
	stack_push();
}
