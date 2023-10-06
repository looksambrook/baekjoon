#include <iostream>

using namespace std;

bool recursion(string *sr, int* cnt) {
	if (*cnt >= ((*sr).size() - *cnt - 1)) return true;
	else if ((*sr)[*cnt] != (*sr)[(*sr).size() - *cnt - 1]) return false;
	else {
		*cnt += 1;
		return recursion(sr, cnt);
	}
}

int isPalindrome(string *sr,int *cnt) {
	cout << recursion(sr, cnt) << " ";

	return *cnt+1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;

	cin >> n;

	for (register int i = 0;i < n;++i) {
		int cnt = 0;
		string sr;
		cin >> sr;
		
		cout << isPalindrome(&sr,&cnt) <<"\n";
	}


	return 0;
}