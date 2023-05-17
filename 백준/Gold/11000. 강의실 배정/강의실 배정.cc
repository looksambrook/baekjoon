#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <functional>//greater 오름차순/less 내리차순

using namespace std;

int main(void) {
	int n;
	int start, end;

	vector<pair<int, int>> lectureroom;
	priority_queue<int, vector<int>,greater<int>>pq;

	cin >> n;

	for (int i = 0;i < n;i++)
	{
		cin >> start >> end;
		lectureroom.push_back({ start,end });
	}

	sort(lectureroom.begin(), lectureroom.end());

	pq.push(lectureroom[0].second);

	for (int i = 1;i < n;i++) {
		pq.push(lectureroom[i].second);
		if (pq.top() <= lectureroom[i].first)
			pq.pop();
	}

	cout << pq.size() << endl;

	return 0;
}