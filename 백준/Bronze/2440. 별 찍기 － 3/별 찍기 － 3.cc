#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main(void) {

	int N;
	scanf("%d", &N);
	for (int i = 0;i <N;i++)
	{		
		for (int j = N-i;j > 0;j--)
			printf("*");
	printf("\n");
	}
	return 0;
}