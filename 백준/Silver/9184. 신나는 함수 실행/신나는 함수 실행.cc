#include<iostream>	

using namespace std;

int save[21][21][21];

int recursion(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0)
		return 1;
	if(a>20||b>20||c>20) {
		a = 20;b = 20;c = 20;
		return recursion(a, b, c);
	}
	else if (save[a][b][c] != 0)return save[a][b][c];
	else if (a < b && b < c)
		return save[a][b][c] = (recursion(a, b, c - 1) + recursion(a, b - 1, c - 1) - recursion(a, b - 1, c));
	else if (a == 1)
		return 2;
	else
		return save[a][b][c] = (recursion(a - 1, b, c) + recursion(a - 1, b - 1, c) + recursion(a - 1, b, c - 1) - recursion(a - 1, b - 1, c - 1));
}

int main() {
	int a, b, c;
	while (1) {
		cin >> a >> b >> c;

		if (a == -1 && b == -1 && c == -1)
			break;
		
		cout << "w(" << a << ", " << b << ", " << c << ") = " << recursion(a, b, c) << "\n";
	}


	return 0;
}