#include <stack>
#include <iostream>




class StackMax {
private:
	std::stack <int> s;
	std::stack <int> m;
	int n;
public:

	StackMax() : n(0) {
		s = std::stack <int>();
		m = std::stack <int>();
	}

	~StackMax() {
	}

	int size() {
		return n;
	}

	void push(int i) {
		if (n == 0) {
			n = 1;
			m.push(i);
			s.push(i);
		}
		else {
			s.push(i);
			n++;
			m.push(i > m.top() ? i : m.top());
		}
	}

	int pop() {
		m.pop();
		int res = s.top();
		s.pop();
		return res;
	}

	int max() {
		return m.top();
	}

};

/*
int main() {
	StackMax sm = StackMax();
	sm.push(1);
	sm.push(-1);
	sm.push(5);
	std::cout << sm.max() << "\n";
	sm.pop();
	std::cout << sm.max() << "\n";
}
*/
