#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min(int a, int b) {
	return a < b ? a : b;
}
int tmp(int n, int k) {
	if (n <= k) return k - n;
	else if (n == 1) return 1;
	else if (n % 2) return 1 + min(tmp(n - 1, k), tmp(n + 1, k));
	else return min(n - k, 1 + tmp(n / 2, k));
}

int main() {
	int n, k;

	scanf("%d %d", &n, &k);

	printf("%d", tmp(k, n));

	return 0;
}