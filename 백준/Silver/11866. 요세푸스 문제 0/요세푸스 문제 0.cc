#include <iostream>
#include <queue>

using namespace std;

int main() {
	int N, K;
	int count = 0;
	queue<int> q;

	cin >> N >> K;

	for (int i = 1;i <= N;++i) {
		q.push(i);
	}

	cout << "<";

	while (!q.empty()) {
		count++;
		if (count == K) {
			cout << q.front();
			q.pop();
			count = 0;
			if (!q.empty())
				cout << ", ";
		}
		else {
			int tmp = q.front();
			q.pop();
			q.push(tmp);
		}
	}

	cout << ">";

	return 0;
}