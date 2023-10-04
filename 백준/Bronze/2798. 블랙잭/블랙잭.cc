#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, M;
	int sum = 0;
	vector<int> v;

	cin >> N >> M;

	for (int i = 0;i < N;++i) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end(),greater<int>());

	for (int i = 0;i < N - 2;++i) {
		for (int j = i+1;j < N - 1;++j) {
			for (int k = j+1;k < N;++k) {
				if ((v[i] + v[j] + v[k]) > M)
					continue;
				else {
					sum = max(sum, v[i] + v[j] + v[k]);
				}
			}
		}
	}

	cout << sum;

	return 0;
}