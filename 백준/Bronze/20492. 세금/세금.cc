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

	int N;

	scanf("%d", &N);

	printf("%d %d", N * 78 / 100, N * 4 / 5 + (N / 5) * 78 / 100);

	return 0;
}