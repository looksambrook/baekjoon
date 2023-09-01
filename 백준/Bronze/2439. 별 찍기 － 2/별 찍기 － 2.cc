#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	int T;

	cin >> T;

	for (int i = 1;i <= T;i++) {
		for (int j = T;j > i;j--)
			cout << ' ';
		for (int j = 0;j < i;j++)
			cout << '*';
		cout << "\n";
	}

	return 0;
}