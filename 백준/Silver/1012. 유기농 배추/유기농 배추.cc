#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> bachu;
int check;
bool visited[50][50];
int M, N, K;

void DFS(int i,int j) {
	if (i<0 || i>=M || j<0 || j>=N)return;
	if (!bachu[i][j])return;
	if (visited[i][j])return;

	visited[i][j] = true;
	check++;

	DFS(i - 1, j);
	DFS(i + 1, j);
	DFS(i, j + 1);
	DFS(i, j - 1);

	return;
}

int main() {
	int Test_case;
	int cnt;	

	cin >> Test_case;

	for(int t=0;t<Test_case;++t) {
		cin >> M >> N >> K;

		bachu.assign(M, vector<bool>(N, false));
		for (int i = 0;i < M;++i) {
			for (int j = 0;j < N;++j)
				visited[i][j] = false;
		}
		cnt = 0;

		for (int i = 0;i < K;++i) {
			int start, last;
			cin >> start >> last;
			bachu[start][last] = true;
		}

		for (int i = 0;i < M;++i) {
			for(int j=0;j<N;++j) {
				check = 0;
				DFS(i,j);
				if (check != 0)cnt++;
			}
		}

		cout << cnt<<"\n";
	}

	return 0;
}