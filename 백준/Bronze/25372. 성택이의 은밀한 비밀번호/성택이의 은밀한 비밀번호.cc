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
	char san[20];

	scanf("%d", &N);

	for (int i = 0;i < N;i++)
	{
		scanf("%s", san);
		if (strlen(san) <= 9 && strlen(san) >= 6)printf("yes\n");
		else printf("no\n");
	}

	return 0;
}