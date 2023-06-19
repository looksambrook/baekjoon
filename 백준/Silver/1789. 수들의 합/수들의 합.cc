#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long S;
	long long t;

	cin >> S;
	
	if (S % 1 == 0)t = ((-3 + sqrt(1 + 8 * S)) / 2)+1 ;
	else t = ((-3 + sqrt(1 + 8 * S)) / 2);

	cout << t;


	return 0;
}