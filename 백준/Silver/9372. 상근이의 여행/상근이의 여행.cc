#include<iostream>
#include <vector>

using namespace std;

const int MAX = 10001;

int cnt;
vector<int> My_graph[MAX];
bool visited[MAX];

void DFS(int x) {
	visited[x] = true;

	for (int i = 0;i < My_graph[x].size();i++) {
		int y = My_graph[x][i];

		if (!visited[y]) {
			cnt++;
			DFS(y);
		}
	}
}

int main(void) {
	int Test_case;
	int N, M;
	int a, b;

	cin >> Test_case;

	for (int i = 0;i < Test_case;i++) {
		cin >> N >> M;
		
		for (int j = 0;j < M;j++) {
			cin >> a >> b;
		}

	cout << N-1<<endl;
	}

	return 0;
}