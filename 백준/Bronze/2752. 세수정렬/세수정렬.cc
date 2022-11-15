#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	//int N, M;
	//char num[50][50];

	//scanf("%d %d", &N, &M);
	//for (int i = 0;i < N;i++)
	//{
	//	for (int j = 0;j < M;j++)
	//	{
	//		scanf("%d", &num[i][j]);
	//	}
	//}//1051

	/*int N;
	char A[50], B[1000];

	scanf("%d", &N);
	scanf("%d", &A[0]);

	for (int i = 1;i < N;i++)
	{
		scanf("%d", &A[i]);

		B[i] = A[i];
		if (B[i] < B[i - 1]) {
			for(int j=0;j<i;j++)
				if (B[i - j] < B[i - j - 1]) {
					int tmp = B[i];
					B[i] = B[i - 1];
					B[i - 1] = tmp;
				}
		}
	}

	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j <N;j++)
		{
			if (B[j] == A[i])
				printf("%d ", j);
		}
		printf("hwlloworld\n");
	}*///

	int a, b, c, min, max, mid;

	scanf("%d %d %d", &a, &b, &c);

	if (a < b && a < c) {
		min = a;
		if (b < c) { mid = b;max = c; }
		else { mid = c;max = b; }
	}
	else if (b < a && b < c) {
		min = b;
		if (a < c) { mid = a;max = c; }
		else { mid = c;max = a; }
	}
	else if (c < b && c < a) {
		min = c;
		if (b < a) { mid = b;max = a; }
		else { mid = a;max = b; }
	}
	
	printf("%d %d %d", min, mid, max);

	return 0;
}