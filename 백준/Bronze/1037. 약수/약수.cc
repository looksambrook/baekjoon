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

	int min = 1000000, max = 1, N;
	long long sum;
	int arr[50];
	
	scanf("%d", &N);

	for (int i = 0;i < N;i++)
	{

		scanf("%d", &arr[i]);

		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	
	sum = min * max;

	printf("%lld", sum);

	return 0;
}