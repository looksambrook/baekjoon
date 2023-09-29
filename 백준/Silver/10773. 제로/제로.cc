#include <iostream>
#include <stack>

using namespace std;

int main() {
	int N;
	int tmp;
	int size;
	unsigned int sum = 0;
	stack<int> s;

	cin >> N;

	for (int i = 0;i < N;++i) {
		cin >> tmp;
		if (tmp != 0)
			s.push(tmp);
		else
			s.pop();
	}

	size = s.size();

	for (int i = 0;i < size;++i) {
		tmp = s.top();
		s.pop();
		sum += tmp;
	}

	cout << sum;

	return 0;
}