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
	int* arr;
	int top;
	int size;
}Stack;
Stack makeStack(int size) {
	Stack s;
	s.arr = (int*)malloc(sizeof(int) * size);
	s.size = size;
	s.top = 0;
	return s;
}
void push(Stack* s, int data) {
	s->arr[s->top] = data;
	s->top++;
}
int pop(Stack* s) {
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
	int N, num, last, count = 1;
	Stack s;
	s = makeStack(100000);
	
	scanf("%d", &N);

	for (int i = 0;i < N;i++) {
		scanf("%d", &num);
		push(&s, num);
	}

	last = pop(&s);

	for (int i = 1;i < N;i++) {
		int tmp = pop(&s);
		if (last < tmp) {
			count++;
			last = tmp;
		}
	}

	printf("%d", count);

	return 0;
}