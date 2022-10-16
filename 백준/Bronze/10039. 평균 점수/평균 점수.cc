#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main(void) {

	int N, sum = 0;
	for (int i = 0;i < 5;i++)
	{
		scanf("%d", &N);
		if (N < 40)sum += 40;
		else sum += N;
	}
	printf("%d", sum / 5);
	return 0;
}