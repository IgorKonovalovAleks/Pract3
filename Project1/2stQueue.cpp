#include <stack>
#include <iostream>


class DoubleStackQueue {
private:
	std::stack <int> f;
	std::stack <int> b;
	int n;
public:

	DoubleStackQueue() : n(0) {
		f = std::stack <int>();
		b = std::stack <int>();
	}

	~DoubleStackQueue() {
	}

	int size() {
		return n;
	}

	void push_back(int i) {
		b.push(i);
		n++;
	}
	/*
	void push_front(int i) {
		f.push(i);
		n++;
	}
	*/
	void throw_(std::stack <int> &a1, std::stack <int> &a2) {
		while (a1.size() > 0) {
			a2.push(a1.top());
			a1.pop();
		}
	}
	/*
	int pop_back() {
		if (b.size() == 0) {
			throw_(f, b);
		}

		int res = b.top();
		n--;
		b.pop();
		return res;

	}
	*/
	int pop_front() {
		if (f.size() == 0) {
			throw_(b, f);
		}

		int res = f.top();
		n--;
		f.pop();
		return res;

	}
};

/*
int main() {

	DoubleStackQueue dsq = DoubleStackQueue();
	dsq.push_back(1);
	dsq.push_back(2);
	dsq.push_back(3);
	std::cout << dsq.pop_front() << " " << dsq.pop_back();

	
	return 0;
}
*/

