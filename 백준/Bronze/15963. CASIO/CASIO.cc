#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main(void) {

	int a, b;
	scanf("%d %d", &a, &b);
	if (a == b)printf("1");
	else printf("0");
	return 0;
}