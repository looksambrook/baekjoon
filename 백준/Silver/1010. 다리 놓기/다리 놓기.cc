#include <iostream>

using namespace std;

int main() {
	int T, N, M;

	cin >> T;

	for (int i = 0;i < T;i++) {
		int result=1;

		cin >> N >> M;

		for (int j = 1;j <= N;j++) {
			result *= M;
			result /= j;
			M--;
		}
		cout << result<<"\n";
	}

	return 0;
}