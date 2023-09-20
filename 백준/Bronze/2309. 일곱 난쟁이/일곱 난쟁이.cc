#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr[9];
	int plus_all=0;
	int check=0;

	for (int i = 0;i < 9;++i)	{
		cin >> arr[i];
		plus_all += arr[i];
	}

	sort(arr, arr + 9);
	plus_all -= 100;

	for (int i = 0;i < 8;++i) {
		for (int j = i + 1;j < 9;++j) {
			if (plus_all == (arr[i] + arr[j])) {
				arr[i] = NULL;
				arr[j] = NULL;
				check = 1;
				break;
			}
		}
		if (check)break;
	}

	for (int i = 0;i < 9;++i) {
		if (arr[i] != NULL)
			cout << arr[i] << "\n";
	}

	return 0;
}