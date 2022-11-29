#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10000//전역변수는 최대한 줄이는게 좋지??

typedef struct _stack {
	int arr[MAX_SIZE];
	int top;
}Stack;

void StackInit(Stack* sp) {
	sp->top = -1;//화살표가 뭐지??
}

int IsEmpty(Stack* sp) {
	if (sp->top == -1)
		return 1;
	return 0;
}

int Size(Stack* sp) {
	return sp->top + 1;//이러면 top에 1더하고 계산인가
}

int IsFull(Stack* sp) {
	if (sp->top + 1 >= MAX_SIZE)
		return 1;
	return 0;
}

void Push(Stack* sp, int data) {
	if (IsFull(sp) == 1)
		return;//return 뒤에 숫자없어도 ㄱㅊ?
	sp->arr[++(sp->top)] = data;
}

int Pop(Stack* sp) {
	if (IsEmpty(sp) == 1)
		return -1;
	return sp->arr[(sp->top)--];
}

int Peek(Stack* sp) {
	if (IsEmpty(sp) == 1)
		return -1;
	return sp->arr[sp->top];
}

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

	/*int i, n, num;
	char str[6];
	Stack stack;

	scanf("%d", &n);
	fgetc(stdin);
	StackInit(&stack);

	for (i = 0;i < n;i++)
	{
		scanf("%s", str);
		fgetc(stdin);

		if (!strcmp(str, "push")) {
			scanf("%d", &num);
			fgetc(stdin);
			Push(&stack, num);
		}
		else if (!strcmp(str, "pop"))
			printf("%d\n", Pop(&stack));
		else if (!strcmp(str, "empty"))
			printf("%d\n", IsEmpty(&stack));
		else if (!strcmp(str, "size"))
			printf("%d\n", Size(&stack));
		else if (!strcmp(str, "top"))
			printf("%d\n", Peek(&stack));
	}*/

	int sum;
	char san[256];

	while (1) {
		sum = 0;
		gets(san);

		if (san[0] == '#')break;
		for (int i = 0;san[i];i++)
		{
			if (san[i] == 'a' || san[i] == 'e' || san[i] == 'i' || san[i] == 'o' || san[i] == 'u'|| san[i] == 'A' || san[i] == 'E' || san[i] == 'I' || san[i] == 'O' || san[i] == 'U'  )
			sum++;
		}
		printf("%d\n", sum);
	}

	return 0;
}