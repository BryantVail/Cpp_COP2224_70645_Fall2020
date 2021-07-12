// figure 18.2, 
// Stack.h

#ifndef Stack_h
#define Stack_h

#include <deque>

template<typename T>
class Stack {
public:
	// return top element
	const T& top() {
		return stack.front();
	}

	// push element onto stack
	void push(const T& pushValue) {
		stack.push_front(pushValue);
	}

	// pop
	void pop() {
		stack.pop_front();
	}

	bool isEmpty() const {
		return stack.empty();
	}

	// return size of the stack
	size_t size() const {
		return stack.size();
	}

private:
	std::deque<T> stack; // internal representation of the stack
};


#endif





