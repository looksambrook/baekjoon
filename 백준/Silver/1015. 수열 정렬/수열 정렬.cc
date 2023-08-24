#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<pair<int, int>> arr;
	int ori[50];
	int N;

	cin >> N;

	for (int i = 0;i < N;i++) {
		int tmp;
		cin >> tmp;
		ori[i] = tmp;
		arr.push_back({ tmp,i });
	}

	sort(arr.begin(), arr.end());

	for (int i = 0;i < N;i++)
		arr[i].second = i;

	for (int i = 0;i < N;i++) {
		int j = 0;
		while (j < N) {
			if (ori[i] == arr[j].first&&arr[j].second!=-1) {
				cout << arr[j].second << " ";
				arr[j].second = -1;
				break;
			}
			j++;
		}
	}

	return 0;
}