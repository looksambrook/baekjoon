#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int n,tmp; 
	cin >> n;
	vector<int>arr(n);

	for (int i = 1; i <= n; i++) {
		cin >> tmp;
		arr.insert(arr.begin() + tmp, i);
	}

	for (int i = n - 1; i >= 0; i--) cout << arr[i] << ' ';
}