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

	/*StackType* s;
	s = (StackType*)malloc(sizeof(StackType));
	init_stack(s);
	push(s, 1);
	push(s, 2);
	push(s, 3);

	printf("%d\n", pop(s));
	printf("%d\n", pop(s));
	printf("%d\n", pop(s));

	free(s);*/

	int n1, n2, k1, k2;
	scanf("%d %d %d %d", &n1, &k1, &n2, &k2);

	printf("%d", n1 * k1 + n2 * k2);

	return 0;
}