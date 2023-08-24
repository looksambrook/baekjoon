#include <iostream>
#include <deque>

using namespace std;

int main() {
	deque<int> dq;
	int N, M;
	int count = 0;

	cin >> N >> M;

	dq.resize(N);

	for (int i = 1;i <= M;i++) {
		int tmp;
		cin >> tmp;
		dq[tmp - 1] = i;
		//큐의 tmp위치에 순서 입력, tmp위치가 i번째순서
	}

	for (int i = 1;i <= M;i++) {
		//이제 i번째 애들을 찾을거임
		//일단 i번이 적혀있는 인덱스가 앞이랑 더 가까운지 뒤랑 더 가까운지 확인후 더 적은 것 체택
		//앞이 더 가까우면 앞의 n개 뒤로 보내기
		//뒤가 더 가까우면 뒤의 n+1개 앞으로 보내기(본인이 제일 앞이어야함)
		//앞뒤움직이는 것은 count++;
		//앞을 없앰
		//반복문이 끝날때까지 반복
		for (int j = 0;j < dq.size();j++) {
			if (dq[j] == i) {
				if(j<(dq.size()-j))
					while (dq.front() != i) {
						count++;
						int tmp = dq.front();
						dq.pop_front();
						dq.push_back(tmp);
					}
				else
					while (dq.front()!=i) {
						count++;
						int tmp = dq.back();
						dq.pop_back();
						dq.push_front(tmp);
					}
				dq.pop_front();
				break;
			}
		}
	}

	cout << count;

	return 0;
}