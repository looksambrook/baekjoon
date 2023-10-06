#include <iostream>

using namespace std;

bool isPalindrome(string *sr,int *cnt) {
	if (*cnt > ((*sr).size() - *cnt - 1)) {
		if ((*sr).size() % 2 == 0)
			*cnt += 1;
		return true;
	}
	if ((*sr)[*cnt] != (*sr)[(*sr).size() - *cnt - 1]) {
		*cnt += 1;
		return false;
	}
	*cnt += 1;

	return isPalindrome(sr, cnt);
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
		if (sr.size() == 1)
			cout << "1 1\n";
		else
			cout << isPalindrome(&sr,&cnt) << " " << cnt <<"\n";
	}


	return 0;
}