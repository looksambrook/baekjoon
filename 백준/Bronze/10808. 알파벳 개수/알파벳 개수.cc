#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main(void) {

	int c[26]={0};
	char san[100];
	scanf("%s", san);
	for (int i = 0;san[i];i++)
		c[san[i] - 'a']++;
	for(int i=0;i<26;i++)
		printf("%d ", c[i]);
	return 0;
}