#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int n;
	int temp;
	int s1, s2, s3, s4;
	vector<vector<int>> arr(4);
	
	cin >> n;

	for (int i = 0;i < 4;i++)
		arr[i].push_back(0);

	for (int i = 0;i < n;i++) {
		cin >> temp;
		if (arr[0][arr[0].size() - 1] < temp)arr[0].push_back(temp);
		else if (arr[1][arr[1].size() - 1] < temp)arr[1].push_back(temp);
		else if (arr[2][arr[2].size() - 1] < temp)arr[2].push_back(temp);
		else if (arr[3][arr[3].size() - 1] < temp)arr[3].push_back(temp);
		else {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";

	return 0;
}