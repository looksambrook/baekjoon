#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main(void) {

	char san[100];
	
	scanf("%s", san);

	for (int i = 0;san[i];i++)
	{
		printf("%c", san[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
	
	return 0;
}