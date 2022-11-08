#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int stick(int n, int k,int sum)
{
	if (n - k > 0) {
		sum++;
		n = n - k;
		k = k / 2;
		return stick(n, k, sum);
	}
	else if (n == k) {
		sum++;
		return sum;
	}
	else {
		k = k / 2;
		return stick(n, k, sum);
	}
}

int main(void)
{
	int n, sum = 0, k = 64;

	scanf("%d", &n);
	printf("%d", stick(n, k, sum));

	return 0;
}