#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main(void) {

	int N[5], sum = 0;
	for (int i = 0;i < 5;i++)
		scanf("%d", &N[i]);
	if (N[0] <= N[1] && N[0] <= N[2])sum += N[0];
	else if (N[1] <= N[0] && N[1] <= N[2])sum += N[1];
	else if (N[2] <= N[1] && N[2] <= N[0])sum += N[2];

	if (N[3] <= N[4])sum += N[3];
	else sum += N[4];

	printf("%d", sum - 50);
	return 0;
}