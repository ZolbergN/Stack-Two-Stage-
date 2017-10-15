#include <iostream>
#include "stack.hpp"

int main() {
	try {
		stack<int> st(10);
		
		st.push(2);
		st.push(4);
		st.push(7);
		st.push(5);
		st.push(8);
		st.push(766);
		st.push(9);
		st.push(32);
		st.push(432);
		st.push(1);

		for(int i = 0; i < 10; i++) {
			std::cout << st.pop() << std::endl;
		}
		std::cout << std::endl;

	} catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
