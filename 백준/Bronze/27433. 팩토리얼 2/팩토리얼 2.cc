#include <iostream>	

using namespace std;

long long sum = 1;

long long Factorial(int n) {
	if(n>=1)
		sum *= n;
	if (n <=2)return sum;
	else return Factorial(n - 1);
}

int main() {
	int n;
	cin >> n;

	cout << Factorial(n);

	return 0;
}