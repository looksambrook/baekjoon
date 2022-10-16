#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main(void) {

	char a;
	scanf("%c", &a);
	if (a == 'N' || a == 'n')printf("Naver D2");
	else printf("Naver Whale");
	return 0;
}