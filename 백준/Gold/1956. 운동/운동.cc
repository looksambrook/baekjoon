#include <iostream>
#include <algorithm>
#define INF 1000000000

using namespace std;

int arr[401][401];

int main() {
	int T, N, M;
	int cost;

		cost = INF;

		cin >> N >> M;

		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				arr[i][j] = cost;
			}
		}

		for (int i = 0; i < M; i++) {
			int X, Y, C;
			cin >> X >> Y >> C;
			arr[X][Y] = C;
		}

		//플로이드 와샬 알고리즘
		for (int k = 1; k <= N; k++) {
			for (int i = 1; i <= N; i++) {
				for (int j = 1; j <= N; j++) {
					if (arr[i][k] + arr[k][j] < arr[i][j]) {
						arr[i][j] = arr[i][k] + arr[k][j];
					}
				}
			}
		}

		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				if (i != j)
					cost = min(cost, arr[i][j] + arr[j][i]);
			}
		}

		if (cost == INF)
			cost = -1;

		cout << cost << endl;
	return 0;
}