#include <iostream>
#define Size (int)(2e5+4) //4를 더하는 이유는 자리를 넉넉하게, 보통 4나 8을 더함
#define MOD	(int)(1e5+7)

using namespace std;

struct NodePool { //cpp에서 구조체는 함수를 포함할 수 있다.
	NodePool* next;
	int key;
}nodePool[Size];

int nodeCnt;
inline NodePool* getNode(int key) {
	nodePool[nodeCnt].next = NULL;
	nodePool[nodeCnt].key = key;

	return &nodePool[nodeCnt++];
}

struct Hash {
	NodePool* head[MOD];

	void push(int key) {
		int k = key % MOD;
		NodePool* node = getNode(key);

		node->next = head[k];
		head[k] = node;
	}

	bool find(int key) {
		int k = key % MOD;

		NodePool* cur = head[k];
		while (cur) {
			if (cur->key== key)return true;
			cur = cur->next;
		}

		return false;
	}

}hashMap;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	register int i;
	int N, M, tmp;

	cin >> N >> M;

	//집합 A 데이터 넣기
	for (i = 0;i < N;++i) {
		cin >> tmp;
		hashMap.push(tmp);
	}

	//같은 거 찾기
	int cnt = 0;
	for (i = 0;i < M;++i) {
		cin >> tmp;
		cnt += hashMap.find(tmp);
	}

	cout << N + M - cnt * 2 << "\n";

	return 0;
}