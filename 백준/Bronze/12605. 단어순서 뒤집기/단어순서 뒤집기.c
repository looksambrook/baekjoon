#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int GCD(int a, int b)
{
	if (b == 0)return a;
	return GCD(b, a % b);
}
int LCM(int a, int b) {
	return a * b / GCD(a, b);
}
/*void phi(int n) {
	int ans0 = 0, ans1 = 1;
	Stack s;
	s = makeStack(100);

	push(&s, 0);
	push(&s, 1);

	for (int i = 1;i < n;i++) {
		ans0 = ans1;
		ans1 = Pop(&s) + Pop(&s);
		push(&s, ans0);
		push(&s, ans1);
	}

	printf("%d", Pop(&s));

}*/

typedef struct Stack {
	char* arr;
	int top;
	int size;
}Stack;
Stack makeStack(int size) {
	Stack s;
	s.arr = (char*)malloc(sizeof(char) * size);
	s.size = size;
	s.top = 0;
	return s;
}
void push(Stack* s, char data) {
	s->arr[s->top] = data;
	s->top++;
}
char pop(Stack* s) {
	s->top--;
	return s->arr[s->top];
}
int isEmpty(Stack s) {
	if (s.top == 0)return 1;
	else return 0;
}
int isFull(Stack s) {
	if (s.size == s.top)return 1;
	else return 0;
}

int main() {
	int N, length;
	char san[50];
	Stack s;
	Stack s1;
	s = makeStack(50);
	s1 = makeStack(25);

	scanf("%d", &N);
	getchar();

	for (int i = 0;i < N;i++) {
		gets(san);
		length = strlen(san);
		for (int j = 0;j < length;j++) {
			push(&s, san[j]);
		}
		printf("Case #%d: ", i+1);
		while (1)
		{
			char som;
			if(!isEmpty(s)) som = pop(&s);
			if (som == ' '|| isEmpty(s))
			{
				if (isEmpty(s))push(&s1, som);
				while (!isEmpty(s1))printf("%c", pop(&s1));
				if (isEmpty(s))break;
				printf(" ");
			}
			else push(&s1, som);
		}
		puts("");
	}

	return 0;
}