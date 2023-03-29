#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10000

typedef struct _stack {//스택만들기
	int arr[MAX_SIZE];
	int top;
}Stack;

void StackInit(Stack* sp) {
	sp->top = -1;
}

int IsEmpty(Stack* sp) {//빈스택인지 확인하기
	if (sp->top == -1)
		return 1;
	return 0;
}

int Size(Stack* sp) {//
	return sp->top + 1;
}

int IsFull(Stack* sp) {
	if (sp->top + 1 >= MAX_SIZE)
		return 1;
	return 0;
}

void Push(Stack* sp, int data) {
	if (IsFull(sp) == 1)
		return;
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
	
	int i, n, num;
	char str[6];
	Stack stack;

	scanf("%d", &n);
	fgetc(stdin);
	StackInit(&stack);

	for (i = 0;i < n;i++)
	{
		scanf("%s", str);

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
	}

	return 0;
}