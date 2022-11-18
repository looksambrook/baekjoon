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

	int a, b;

	scanf("%d %d", &a, &b);

	if ((double)(a - a * b / 100.0) >= 100)printf("0\n");
	else printf("1\n");
	return 0;
}