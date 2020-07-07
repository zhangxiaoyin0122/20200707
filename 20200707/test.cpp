#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
	void push(int node) {
		stack1.push(node);
	}
	int pop() {
		int ret;
		if (!stack2.empty()) {
			ret = stack2.top();
			stack2.pop();
		}
		else {
			while (!stack1.empty()) {
				int tmp = stack1.top();
				stack1.pop();
				stack2.push(tmp);
			}
			int ret = stack2.top();
			stack2.pop();
		}
		return ret;
	}
private:
	stack<int> stack1;
	stack<int> stack2;
};

#include <iostream>
using namespace std;

int func(int m, int n) {
	if (m == 0 || n == 0)
		return 1;
	return func(m, n - 1) + func(m - 1, n);
}

int main() {
	int m, n;
	while (cin >> m >> n) {
		int ret = func(m, n);
		cout << ret << endl;
	}
	return 0;
}


class Solution {
public:
	int Fibonacci(int n) {
		if (n == 0)
			return 0;
		if (n == 1)
			return 1;
		int m = 0, l = 1;
		int ret;
		for (int i = 2; i <= n; ++i) {
			ret = m + l;
			m = l;
			l = ret;
		}
		return ret;
	}
};

class Solution {
public:
	int StrToInt(string str) {
		if (str.empty()) {
			return 0;
		}
		int flag = 1;
		int i = 0;
		if (str[i] == '+') {
			i++;
		}
		else if (str[i] == '-') {
			flag = -1;
			i++;
		}
		long sum = 0;
		for (i; i < str.size(); i++) {
			if (str[i] >= '0' && str[i] <= '9') {
				sum = sum * 10 + (str[i] - '0');
			}
			else {
				sum = 0;
				break;
			}
		}
		return flag * sum;
	}
};