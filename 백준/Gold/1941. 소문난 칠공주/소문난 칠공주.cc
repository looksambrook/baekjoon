#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
#define dep(i,a,b) for(int i=a;i<b;i++)
#define fep(i,a,b) for(int i=a;i<=b;i++)
#define swap(type,x,y) do{type t=x; x=y; y=t;} while(0)
#define MAX(a,b) a<b?b:a
#define MIN(a,b) a<b?a:b
struct node {
	int x;
	int y;
};

int head = 0, tail = 0;
int top = 0;
struct node Queue[500];
struct node Stack[500];

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

char map[5][5];
int visited[25];
int ans = 0;

void Stack_Push(int x_, int y_) {
	struct node temp;
	temp.x = x_;
	temp.y = y_;
	Stack[top++] = temp;
}

struct node Stack_Pop(void) {
	struct node temp = Stack[--top];
	return temp;
}

struct node Stack_Top(void) {
	struct node temp = Stack[top - 1];
	return temp;
}

int Stack_Is_Empty(void) {
	if (top <= 0)
		return 0;
	else
		return 1;
}

void Queue_Enque(int x_, int y_) {
	struct node temp;
	temp.x = x_;
	temp.y = y_;
	Queue[tail] = temp;
	tail = (tail + 1) % 50;
}

struct node Queue_Deque(void) {
	struct node temp;
	temp = Queue[head];
	head = (head + 1) % 50;
	return temp;
}

int Queue_Is_Empty(void) {
	if (head == tail)
		return 0;
	else
		return 1;
}

void Input() {
	for (int i = 0; i < 5; i++)
		scanf("%s", map[i]);
}

bool check_near_seat() {
	struct node first = Stack_Top();
	bool flag[7] = { false, };
	Queue_Enque(first.x, first.y);
	int cnt = 1;

	while (Queue_Is_Empty()) {
		struct node k = Queue_Deque();
		int nextX, nextY;
		for (int ps = 0; ps < 6; ps++) {
			if (flag[ps]) continue;
			for (int i = 0; i < 4; i++) {
				nextX = k.x + dx[i];
				nextY = k.y + dy[i];
				if (nextX == Stack[ps].x && nextY == Stack[ps].y) {
					Queue_Enque(nextX, nextY);
					flag[ps] = true;
					cnt++;
				}
			}
		}
	}
	if (cnt == 7)
		return true;
	else
		return false;
}

void dfs(int index, int cnt_s, int cnt_y) {
	if (cnt_y + cnt_s == 7) {
		if (cnt_y > cnt_s) 
			return;
		if (check_near_seat()) 
			ans++;
		return;
	}
	for (int i = index; i < 25; i++) {
		if (visited[i]) continue;
		int R = i / 5;
		int C = i % 5;
		Stack_Push(C, R);
		visited[i] = 1;
		if (map[R][C] == 'Y')
			dfs(i + 1, cnt_s, cnt_y+1);
		else
			dfs(i + 1, cnt_s+1, cnt_y);
		visited[i] = 0;
		Stack_Pop();
	}
}

int main() {
	Input();
	dfs(0, 0, 0);
	printf("%d\n", ans);

	return 0;
}