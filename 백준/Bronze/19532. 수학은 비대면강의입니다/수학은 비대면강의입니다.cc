#include <iostream>

using namespace std;


int main() {
	int a, b, c, d, e, f;
	int x, y;

	cin >> a >> b >> c >> d >> e >> f;

	if (a == 0) {
		y = c / b;
		x = (f - e * y) / d;
	}
	else {
		y = (c * d - a * f) / (b * d - a * e);
		x = (c - b * y) / a;
	}

	cout << x << " " << y;

	return 0;
}